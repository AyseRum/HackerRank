/* Converts the 12-Hour AM/PM time to military 24-Hour time.
 input format hh:mm:ssAM
 output format hh:mm:ss
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int h, m, s;
    char t[3];
    char a[] = "PM";
    scanf("%2d:%2d:%2d%[AMPM]",&h, &m, &s, t);
    
    if(strncmp(t, a, 3)==0)
    {
        if(h==12)
            h=12;
        else
            h +=12; 
    }
    else if(h==12)
        h = 00;
    printf("%02d:%02d:%02d", h, m, s);
    
    return 0;
}
