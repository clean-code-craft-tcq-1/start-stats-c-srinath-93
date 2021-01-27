#include "stats.h"
#include "alerts.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(computedStats.max >  maxThreshold)
  {
    emailAlerter();
    ledAlerter();
  }
}

void emailAlerter()
{
  ++emailAlertCallCount;
}

void ledAlerter()
{
  ++ledAlertCallCount;
}
