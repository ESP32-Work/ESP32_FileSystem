#include <Arduino.h>
#include <FS.h>
#include <LittleFS.h>

void readFile(const char* path) {
  File file = LittleFS.open(path, "r");
  if (!file) {
    Serial.printf("Failed to open file %s for reading\n", path);
    return;
  }
  Serial.printf("\nContents of %s:\n", path);
  while (file.available()) {
    Serial.write(file.read());
  }
  file.close();
}

void setup() {
  Serial.begin(115200);
  if (!LittleFS.begin()) {
    Serial.println("LittleFS Mount Failed");
    return;
  }
  readFile("/cert.pem");
  readFile("/hello.txt");
  LittleFS.end();
}

void loop() {
  // Your main code here
}