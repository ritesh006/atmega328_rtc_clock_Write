# RTC Clock Write

This repository contains code for interfacing with RTC modules DS1307 and DS3231 using an ATmega328 microcontroller. The code is developed without dependencies on Arduino libraries and includes custom I2C and UART implementations.

## Features

- Write current time and date to DS1307 and DS3231 RTC modules
- Custom I2C and UART libraries
- Developed for ATmega328 microcontroller
- Compatible with Arduino Uno IDE and VS Code with PlatformIO

## Getting Started

### Prerequisites

- Arduino Uno board
- DS1307 or DS3231 RTC module
- ATmega328 microcontroller
- Arduino Uno IDE or VS Code with PlatformIO

### Installation

1. Clone this repository:
   
   git clone https://github.com/ritesh006/atmega328_rtc_clock_Write.git

## Usage

1. **Connect the RTC Module:**
   - Connect the DS1307 or DS3231 RTC module to the Arduino Uno board.

2. **Open Project:**
   - Open the `rtc_clock_Write` project in either VS Code with PlatformIO or Arduino IDE.

3. **Upload Code:**
   - Upload the code to the Arduino Uno board.

4. **Utilize Libraries:**
   - Use the custom I2C and UART libraries to write the current time and date to the RTC module.

## Custom I2C Library

The custom I2C library provides the following functionalities:

- Initialize I2C communication.
- Handle start and stop conditions.
- Read and write data to the RTC module.

## Custom UART Library

The custom UART library offers the following capabilities:

- Initialize UART communication.
- Send and receive data.
- Facilitate debugging messages.

## Acknowledgements

- Inspiration from various RTC interfacing projects and custom I2C/UART library implementations.
- Thanks to the open-source community for providing valuable resources and tools.

## Contact

For questions or inquiries, please contact [ritesh.kumar0793@gmail.com](mailto:ritesh.kumar0793@gmail.com).
