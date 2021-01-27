#include "stats.h"
#include "alerts.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  int index =0;
  int func_call_nos = 2;
  /* checking if the max and threshold is breached */
  if(computedStats.max >  maxThreshold)
  {
    for(;index<func_call_nos;index++)
    {
      /* calling email and led alert function when max threshold is breached */
      alerters[index];
    }
  }
  else
  {
    /* do nothing */
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
