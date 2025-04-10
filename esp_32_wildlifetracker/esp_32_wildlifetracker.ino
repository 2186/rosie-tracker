#include <PulseSensorPlayground.h>
#include <Wire.h>
#include <MPU6050_light.h>

#include <SoftwareSerial.h>
#include <TinyGPS++.h>


SoftwareSerial gpsSerial(10,11);
TinyGPSPlus gps;
float lattitude,longitude;


// Pulse Sensor setup
const int PULSE_INPUT = 12;
PulseSensorPlayground pulseSensor;

// MPU6050 setup
MPU6050 mpu(Wire);

// BPM and motion variables
int BPM = 0;
String emotion = "Unknown";
String motionStatus = "Still";

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Setup Pulse Sensor
  pulseSensor.analogInput(PULSE_INPUT);
  pulseSensor.setThreshold(550); // Adjust if needed
  pulseSensor.begin();

  gpsSerial.begin(9600);

  // Setup MPU6050
  mpu.begin();
  mpu.calcOffsets(true, true);
}

void loop() {
  
  //delay(500);

  while (gpsSerial.available())
  {
    int data = gpsSerial.read();
    if (gps.encode(data))
    {
      lattitude = (gps.location.lat());
      longitude = (gps.location.lng());
      Serial.print ("lattitude: ");
      Serial.println (lattitude,6);
      Serial.print ("longitude: ");
      Serial.println (longitude,6);
    }
    // --- Heart Rate ---
  if (pulseSensor.sawStartOfBeat()) {
    BPM = pulseSensor.getBeatsPerMinute();
  }

  // --- Motion Detection ---
  mpu.update();
  float ax = mpu.getAccX();
  float ay = mpu.getAccY();
  float az = mpu.getAccZ();
  float accTotal = sqrt(ax * ax + ay * ay + az * az);

  // Determine if moving (change threshold if needed)
  if (accTotal < 1.05 && accTotal > 0.95) {
    motionStatus = "Still";
  } else {
    motionStatus = "Moving";
  }

  // --- Emotion Based on BPM ---
  if (BPM > 100) emotion = "Stressed";
  else if (BPM > 80) emotion = "Active";
  else if (BPM > 50) emotion = "Relaxed";
  else if (BPM > 30) emotion = "Very Calm";
  else emotion = "No Signal";

  // --- Debug Output ---
  Serial.print("BPM: "); Serial.print(BPM);
  Serial.print(" | Emotion: "); Serial.print(emotion);
  Serial.print(" | Motion: "); Serial.print(motionStatus);
  Serial.print(" | Acc(XYZ): ");
  Serial.print(ax, 2); Serial.print(", ");
  Serial.print(ay, 2); Serial.print(", ");
  Serial.println(az, 2);

  // --- Serial Plotter Output (CSV) ---
  // Format: BPM, AccX, AccY, AccZ
  Serial.print(BPM); Serial.print(",");
  Serial.print(ax); Serial.print(",");
  Serial.print(ay); Serial.print(",");
  Serial.println(az);

  }
}


// authors: tan. vish, fern
