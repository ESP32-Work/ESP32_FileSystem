# ESP32_FileSystem

This repository contains projects and libraries for working with the ESP32 microcontroller, focusing on file system operations using LittleFS and NVS.

## Repository Structure

- `.gitignore`: Git ignore file.
- `.vscode/`: Visual Studio Code configuration files.
- `LICENSE`: License file.
- `LittleFs_ReadWriteAppend/`: Project directory for LittleFS read, write, and append operations.
- `LittleFs_ImageFlash/`: Project directory for flashing images using LittleFS.
- `NVS_DataStorage/`: Project directory for storing and retrieving data using NVS.
- `log/`: Directory containing log files.
- `README.md`: This file.

## Projects

### LittleFs_ReadWriteAppend

This project demonstrates how to read, write, and append files using the LittleFS file system on an ESP32 microcontroller.

#### Directory Structure

- `.gitignore`: Git ignore file for the project.
- `.pio/`: PlatformIO build system files.
- `include/`: Header files.
- `lib/`: Libraries.
- `platformio.ini`: PlatformIO configuration file.
- `readme.md`: Project-specific readme file.
- `src/`: Source files, including `main.cpp`.
- `test/`: Test files.

### LittleFs_ImageFlash

This project demonstrates how to flash images using the LittleFS file system on an ESP32 microcontroller.

#### Directory Structure

- `.gitignore`: Git ignore file for the project.
- `.pio/`: PlatformIO build system files.
- `include/`: Header files.
- `lib/`: Libraries.
- `platformio.ini`: PlatformIO configuration file.
- `readme.md`: Project-specific readme file.
- `src/`: Source files, including `main.cpp`.
- `test/`: Test files.

### NVS_DataStorage

This project demonstrates how to store and retrieve data using the NVS (Non-Volatile Storage) on an ESP32 microcontroller.

#### Directory Structure

- `.gitignore`: Git ignore file for the project.
- `.pio/`: PlatformIO build system files.
- `certs/`: Directory for storing certificate files.
- `include/`: Header files.
- `lib/`: Libraries.
- `platformio.ini`: PlatformIO configuration file.
- `readme.md`: Project-specific readme file.
- `src/`: Source files, including `main.cpp`.
- `test/`: Test files.

## Getting Started

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/ESP32_FileSystem.git
    ```

2. Open the project in Visual Studio Code.

3. Build and upload the project using PlatformIO.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.