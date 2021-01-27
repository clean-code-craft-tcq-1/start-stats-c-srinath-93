#include "stats.h"
#include "alerts.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  /* checking if the max and threshold is breached */
  if(computedStats.max >  maxThreshold)
  {
    /* calling email alert function when max threshold is breached */
    emailAlerter();
    /* calling led alert function when max threshold is breached */
    ledAlerter();
  }
}

void emailAlerter()
{
  /* increment the email alert count when this function is executed TEST CASE 3*/
  ++emailAlertCallCount;
}

void ledAlerter()
{
  /* increment the led alert count when this function is executed TEST CASE 3*/
  ++ledAlertCallCount;
}
