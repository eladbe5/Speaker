#include "mbed.h"
// speaker sound effect demo using PWM hardware output
PwmOut speaker(D9);
InterruptIn button(PC_13);

int main()
{
// generate a 500Hz tone using PWM hardware output
//    float i = 10.0;
    while(1)
    {
        if(!button)
        {
            speaker.period(1.0/36764.5); // 500hz period
            speaker = 0.5; //50% duty cycle - max volume
        }
        speaker = 0.0;
    }
    /*
    while(1){
        speaker.period(1.0/10.0); // 500hz period
        speaker = 0.5; //50% duty cycle - max volume
        i+=10.0;
        if(i>5000.0)
            i = 10.0;
    }
    */
    

 
}

