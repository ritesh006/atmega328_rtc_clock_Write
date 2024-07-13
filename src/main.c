#include "config.h"
#include "rtc.h"
#include "uart.h"
#include "utils.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{   
  // uint8_t hours, minutes, seconds, isPM;

  // Initialize RTC and UART
  RTC_Init();
  uart_init();

  // Set initial time on RTC
  RTC_SetTime(02, 54, 0, "p"); // Set initial time to HH:MM:SS PM/AM 

  // you can set pm PM or p or P either or it will set to AM

  // Main loop
  while (1)
  {
    // Read time from RTC
    // RTC_GetTime(&hours, &minutes, &seconds, &isPM);

    // Display time over UART
    // display_time(hours, minutes, seconds, isPM);

    // Delay for 1 second
    _delay_ms(1000);
  }

  return 0;
}
