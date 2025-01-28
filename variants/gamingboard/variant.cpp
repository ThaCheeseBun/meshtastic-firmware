#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] = {
    6,  // D0,  P0.06, TXD
    8,  // D1,  P0.08, RXD
    17, // D2,  P0.17
    20, // D3,  P0.20
    22, // D4,  P0.22
    24, // D5,  P0.24
    32, // D6,  P1.00
    11, // D7,  P0.11
    36, // D8,  P1.04
    38, // D9,  P1.06

    9,  // D10, P0.09, (NFC1)
    10, // D11, P0.10, (NFC2)
    43, // D12, P1.11
    45, // D13, P1.13
    47, // D14, P1.15
    2,  // D15, P0.02, A0
    29, // D16, P0.29, A1
    31, // D17, P0.31, A2

    33, // D18, P1.01
    34, // D19, P1.02
    39, // D20, P1.07

    13, // D21, P0.13, POWER_PIN
    15, // D22, P0.15, BLED
};

void initVariant()
{
    // Enable LED
    pinMode(LED_BUILTIN, OUTPUT);
    ledOn(LED_BUILTIN);
}
