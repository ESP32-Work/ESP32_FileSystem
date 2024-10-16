#include <Arduino.h>
#include <LittleFS.h>

void setup() {
  Serial.begin(115200);
  
  // Initialize LittleFS
  if (!LittleFS.begin(true)) {
    Serial.println("An error occurred while mounting LittleFS");
    return;
  }

  // Create and open a file for writing
  File file = LittleFS.open("/example.txt", "w");
  if (!file) {
    Serial.println("Failed to open file for writing");
    return;
  }
  
  // Write to the file
  if (file.println("Hello, ESP32!")) {
    Serial.println("File written");
  } else {
    Serial.println("Write failed");
  }
  file.close();

  // Append to the file
  file = LittleFS.open("/example.txt", "a");
  if (!file) {
    Serial.println("Failed to open file for appending");
    return;
  }
  if (file.println("This is an appended line.")) {
    Serial.println("File appended");
  } else {
    Serial.println("Append failed");
  }
  file.close();

  // Read the file
  file = LittleFS.open("/example.txt", "r");
  if (!file) {
    Serial.println("Failed to open file for reading");
    return;
  }
  Serial.println("File content:");
  while (file.available()) {
    Serial.write(file.read());
  }
  
  file.close();
    if (LittleFS.exists("/example.txt")){
    Serial.println("File exists");
  } else {
    Serial.println("File does not exist");
  }

  // Delete the file
  if (LittleFS.remove("/example.txt")) {
    Serial.println("File deleted");
  } else {
    Serial.println("Delete failed");
  }

  if (LittleFS.exists("/example.txt")){
    Serial.println("File exists");
  } else {
    Serial.println("File does not exist");
  }
}

void loop() {
  // Nothing to do here
}