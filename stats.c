#include "stats.h"

struct Stats compute_statistics(float* numberset, int setlength) {
    int index=0;
    float sum;
    struct Stats super;
    /* calling this function to sort float array from min to max range order */
    numberset = compute_sort(numberset, setlength);
    /* min value update */
    super.min = numberset[index];
    /* loop to find the sum */
    for(;index<setlength;index++)
    {
        sum += numberset[index];
    }
    /* average calculation */
    super.average = sum/setlength;
    /* max value update */
    super.max = numberset[index-1];
    /* return the updated structure variable */
    return super;
}

float* compute_sort(float* numset, int length)
{
    int loop_1=0, loop_2;
    float temp_var=0;
    /* outer loop using length based iteration */
    for(;loop_1<length;loop_1++)
    {
        /* internal loop to compare each value with all array values */
        for(loop_2=0;loop_2<length;loop_2++)
        {
            if(numset[loop_1]<numset[loop_2])
            {
                /* rearrange the array order when the condition is true */
                temp_var = numset[loop_1];
                numset[loop_1] = numset[loop_2];
                numset[loop_2] = temp_var;
            }
        }
    }
    /* return the updated float value */
    return numset;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
