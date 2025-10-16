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
  

    
  // initialize RTT library
  error_code = NRF_LOG_INIT(NULL);
  APP_ERROR_CHECK(error_code);
  NRF_LOG_DEFAULT_BACKENDS_INIT();
  printf("Log initialized!\n");
 
  // Step A: Configuration 
  // 1. configure the interrupt
  // 2. enable interrupt
  // 3. enable IRQ on NVIC 


    while (1) {
        // Main application loop
    }
}

