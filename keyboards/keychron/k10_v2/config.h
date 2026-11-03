/* Copyright 2025 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Indication led */
#define LED_MAC_OS_PIN A2
#define LED_WIN_OS_PIN A0
#define LED_OS_PIN_ON_STATE 1

/* I2C driver configuration (external EEPROM) */
#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C1_OPMODE OPMODE_I2C
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define EXTERNAL_EEPROM_BYTE_COUNT 2560
#define EXTERNAL_EEPROM_PAGE_SIZE 32
#define EXTERNAL_EEPROM_WRITE_TIME 3
#define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10100010

/* 74HC595 shift register driving the right-hand columns */
#define HC595_STCP C3
#define HC595_SHCP B10
#define HC595_DS C8
#define HC595_START_INDEX 13
#define HC595_END_INDEX 20

#define MATRIX_IO_DELAY 10

/* SPI driver configuration (LED drivers) */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN A5
#define SPI_MISO_PIN A6
#define SPI_MOSI_PIN A7
