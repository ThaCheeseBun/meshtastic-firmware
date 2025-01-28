// Designed around nice!nano V2 board

#ifndef _VARIANT_GAMINGBOARD_
#define _VARIANT_GAMINGBOARD_

#define VARIANT_MCK (64000000ul)
#define USE_LFXO // 32 KHz crystal for LF

#include "WVariant.h"

#ifdef __cplusplus
extern "C" {
#endif

// Init pins
#define PINS_COUNT         (23u)
#define NUM_DIGITAL_PINS   (23u)
#define NUM_ANALOG_INPUTS  (3u)
#define NUM_ANALOG_OUTPUTS (0u)

// LED
#define PIN_LED1     (22)     // P0.15
#define LED_BUILTIN  PIN_LED1
#define LED_BLUE     PIN_LED1
#define LED_STATE_ON 1

// 3V3 regulator
#define PIN_POWER_EN (21) // P0.13

// SPI
#define SPI_INTERFACES_COUNT 2

#define PIN_SPI_MISO (1) // P0.08
#define PIN_SPI_MOSI (2) // P0.17
#define PIN_SPI_SCK  (3) // P0.20

#define PIN_SPI1_MISO (0xFF) // N/C
#define PIN_SPI1_MOSI (7)    // P0.11
#define PIN_SPI1_SCK  (6)    // P1.00

// E-Paper (Waveshare 1.54in B/W)
#define USE_EINK
#define PIN_EINK_CS   (5)           // P0.24
#define PIN_EINK_BUSY (8)           // P1.04
#define PIN_EINK_DC   (0)           // P0.06
#define PIN_EINK_RES  (9)           // P1.06
#define PIN_EINK_SCLK PIN_SPI1_SCK
#define PIN_EINK_MOSI PIN_SPI1_MOSI

static const uint8_t SS =   PIN_EINK_CS;
static const uint8_t MOSI = PIN_SPI1_MOSI;
static const uint8_t MISO = PIN_SPI1_MISO;
static const uint8_t SCK =  PIN_SPI1_SCK;

// SX1262 (Waveshare Core1262)
#define LORA_SCK   PIN_SPI_SCK
#define LORA_MOSI  PIN_SPI_MOSI
#define LORA_MISO  PIN_SPI_MISO
#define LORA_CS    (4)          // P0.22
#define LORA_DIO0  (0xFFFFFFFF) // N/C
#define LORA_DIO1  (15)         // P0.02
#define LORA_DIO2  (14)         // P1.15
#define LORA_DIO3  (0xFFFFFFFF) // N/C
#define LORA_RESET (10)         // P0.09

#define USE_SX1262
#define SX126X_CS    LORA_CS
#define SX126X_DIO1  LORA_DIO1
#define SX126X_BUSY  (11)  // P0.10
#define SX126X_RESET LORA_RESET
#define SX126X_TXEN  (13) // P1.13
#define SX126X_RXEN  (12) // P1.11
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// Something to do with usb power
#define NRF_APM

// Battery with 1M / 1M divider
#define BATTERY_PIN (17) // P0.31
#define ADC_MULTIPLIER 2
#define ADC_RESOLUTION 14
#define BATTERY_SENSE_RESOLUTION_BITS ADC_RESOLUTION

// le buton
#define BUTTON_PIN (20) // P1.07
#define BUTTON_NEED_PULLUP

/*
    Unused but required stuff
*/

// UART (unused)
#define PIN_SERIAL1_RX (18) // P1.01
#define PIN_SERIAL1_TX (19) // P1.02

// I2C (unused)
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA (18) // P1.01
#define PIN_WIRE_SCL (19) // P1.02

#ifdef __cplusplus
}
#endif
#endif // _VARIANT_GAMINGBOARD_