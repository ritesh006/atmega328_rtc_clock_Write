#include "rtc.h"
#include "i2c.h"
#include "utils.h"
#include <string.h>
void RTC_Init(void) {
  I2C_Init(); // Start the communication with RTC
}

void RTC_SetTime(uint8_t hours, uint8_t minutes, uint8_t seconds, const char *str)
{
  uint8_t bcdHours = decToBcd(hours);
  bcdHours |= (1 << 6); // Set bit 6 for 12-hour mode (AM/PM)

  if (!strcmp(str, "pm") || !strcmp(str, "PM") || !strcmp(str, "P") || !strcmp(str, "p"))
  {
    bcdHours |= (1 << 5); // Set bit 5 for PM
  }
  else
  {
    bcdHours &= ~(1 << 5); // Clear bit 5 for non-PM
  }

  I2C_WriteData(RTC_ADDRESS, SEC_REGISTER, decToBcd(seconds)); // Set initial seconds
  I2C_WriteData(RTC_ADDRESS, MIN_REGISTER, decToBcd(minutes)); // Set initial minutes
  I2C_WriteData(RTC_ADDRESS, HOUR_REGISTER, bcdHours);         // Set initial hour
}


