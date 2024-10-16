# LittleFs_ReadWriteAppend

This project demonstrates how to perform read, write, and append operations on files using the LittleFS file system on an ESP32 microcontroller.

## Directory Structure

- `.gitignore`: Git ignore file for the project.
- `.pio/`: PlatformIO build system files.
- `include/`: Header files.
- `lib/`: Libraries.
- `platformio.ini`: PlatformIO configuration file.
- `src/`: Source files, including `main.cpp`.
- `test/`: Test files.

## Prerequisites

- [PlatformIO](https://platformio.org/) installed in Visual Studio Code.
- ESP32 development board.

## Getting Started

1. **Clone the Repository**: Clone the repository to your local machine using the following command:
    ```sh
    git clone https://github.com/yourusername/ESP32_FileSystem.git
    ```

2. **Open the Project**: Open the project directory in Visual Studio Code.

3. **Build the Project**: Build the project using PlatformIO:
    ```sh
    pio run
    ```

4. **Upload the Firmware**: Upload the firmware to the ESP32:
    ```sh
    pio run --target upload
    ```

5. **Monitor the Serial Output**: Monitor the serial output to see the logs and debug information:
    ```sh
    pio device monitor
    ```

## Source Code

The main source code is located in the `src/` directory. The entry point of the application is `main.cpp`.

### `main.cpp`

The `main.cpp` file contains the implementation of the read, write, and append operations using the LittleFS file system. It initializes the file system, performs file operations, and outputs the results to the serial monitor.

## Configuration

The project configuration is managed by the `platformio.ini` file. This file includes settings for the platform, board, framework, and library dependencies.

### `platformio.ini`

```ini
[env:ESP32_S3_DEV_4MB_QD_No_PSRAM]
platform = espressif32
board = ESP32_S3_DEV_4MB_QD_No_PSRAM
framework = arduino
lib_deps = 
    littlefs

build_flags =
    -DCONFIG_LITTLEFS_FOR_IDF_3_2

## License

This project is licensed under the MIT License - see the [LICENSE](../LICENSE) file for details.