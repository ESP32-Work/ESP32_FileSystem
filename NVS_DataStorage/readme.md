# Project Overview

This project is an ESP32-based application that loads a server certificate from non-volatile storage (NVS) and prints it to the serial console. The project is structured to use PlatformIO for building and uploading the firmware.

## Project Structure

- **src/main.cpp**: Contains the main application code.
- **certs/**: Directory for storing certificate files.
- **.vscode/**: Configuration files for Visual Studio Code.
- **platformio.ini**: PlatformIO configuration file.

## Setup and Configuration

1. **Install PlatformIO**: Follow the instructions on the [PlatformIO website](https://platformio.org/install) to install PlatformIO in your preferred environment.
2. **Configure WiFi**: Modify the `setup()` function in `src/main.cpp` to include your WiFi connection logic.
3. **Store Server Certificate in NVS**: Ensure that the server certificate is stored in the NVS under the key `server_cert`.

## Building and Uploading

To build and upload the firmware to your ESP32 device, use the following command:

```sh
pio run --target upload
```

## Running the Application

Open the serial monitor to view the output:
1. Reset the ESP32 device.
2. You should see the server certificate printed to the serial console if it is stored in the NVS.

## Code Explanation

The main functionality is implemented in `src/main.cpp`:

- `loadCertData()`: Loads the server certificate from NVS.
- `setup()`: Initializes the serial communication, connects to WiFi, and loads the server certificate.
- `loop()`: Main loop function (currently empty).

```cpp
#include <Preferences.h>

char* server_cert = nullptr;
uint32_t server_cert_len;

void loadCertData() {
    Preferences prefs;
    prefs.begin("cert_data", false);

    server_cert_len = prefs.getBytesLength("server_cert");
    if (server_cert_len > 0) {
        server_cert = new char[server_cert_len + 1];
        prefs.getBytes("server_cert", server_cert, server_cert_len);
        server_cert[server_cert_len] = '\0';
    } else {
        Serial.println("No server certificate found in NVS");
    }

    prefs.end();
}

void setup() {
    Serial.begin(115200);

    // Connect to WiFi

    // Load server certificate and private key from NVS
    loadCertData();

    // Print the server certificate
    if (server_cert != nullptr) {
        Serial.println("Server Certificate:");
        Serial.println(server_cert);
    }
}

void loop() {

}
```