#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

// blinks a led attached to pin GPIO5 of an ESP32

void app_main(void)
{
    // set GPIO5 as output
    gpio_set_direction(GPIO_NUM_5, GPIO_MODE_OUTPUT);

    while(1)
    {
        gpio_set_level(GPIO_NUM_5, 0);
        printf("off\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_5, 1);
        printf("on\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
