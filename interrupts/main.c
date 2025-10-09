#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "buckler.h"

void SWI1_EGU1_IRQHandler(void) {
   
}

// Step B: Write an IRQ Handler/ISR for the Interrupt
void GPIOTE_IRQHandler(void) {
   
}

int main(void) {
    // Initialize LED and BUTTON pins on the Buckler board
    nrf_gpio_cfg_output(BUCKLER_LED0);
    nrf_gpio_cfg_output(BUCKLER_LED1);
    nrf_gpio_cfg_input(BUCKLER_BUTTON0, NRF_GPIO_PIN_PULLUP);
    nrf_gpio_cfg_input(BUCKLER_SWITCH0, NRF_GPIO_PIN_PULLUP);
    
  // initialize RTT library
  error_code = NRF_LOG_INIT(NULL);
  APP_ERROR_CHECK(error_code);
  NRF_LOG_DEFAULT_BACKENDS_INIT();
  printf("Log initialized!\n");
 
    // Step A: Configuration 
  // 1. configure
  // 2. enable interrupt
  // 3. enable IRQ on NVIC 



    while (1) {
        // Main application loop
    }
}

