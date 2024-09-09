/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * adapted by trimchess
 */

#include "pico/stdlib.h"
#include <stdio.h>

#include "log.h"
#include "config.h"

// Perform initialisation
int pico_led_init(void)
{ 
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    return PICO_OK;
}

// Turn the led on or off
void pico_set_led(bool led_on)
{
    gpio_put(PICO_DEFAULT_LED_PIN, led_on);
}

int main()
{
    stdio_init_all();
    int rc = pico_led_init();
    hard_assert(rc == PICO_OK);    
    int ctr = 0;
    float number = 1.0;
    while (true)
    {
        pico_set_led(true);
        sleep_ms(1000);
        pico_set_led(false);
        sleep_ms(100);
        ctr = int(number);
        number = number + 1.0;
        LogInfo(("round: %d, %f", ctr, number));
        LogInfo(("Programversion (%d.%d)", VERSION_MAJOR, VERSION_MINOR));
        
    }
}
