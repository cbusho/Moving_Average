/*
 * main.c
 * Created on: Oct 16, 2013
 * Author: C15Colin.Busho
 * Description- calls functions to obtain averages
 * maximum, minimum, and range of an array
 */

#include "moving_average.h"
#include <msp430.h> 

#define ARRAYLENGTH 10	//had to define to use for myArray declaration length
#define SAMPLES	4

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    int maximum = 0;
    int minimum = 0;
    int myRange = 0;
    int arrayLength = 10;
    int sampleNum = 4;

    int array[] = {174, 162, 149, 85, 130, 149, 153, 164, 169, 173};

    //creates an array with the number of samples to be averaged
    int myArray[ARRAYLENGTH-SAMPLES+1];

    getAverage(array, myArray, arrayLength, sampleNum);
    maximum = max(array, arrayLength);
    minimum = min(array, arrayLength);
    myRange = range(array, arrayLength);

    while(1){}
}
