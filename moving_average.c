/*
 * moving_average.c
 * Created on: Oct 16, 2013
 * Author: C15Colin.Busho
 * Description- implements code to obtain averages
 * minimum, maximum, and range of a passed in Array
 */

#include "moving_average.h"

void getAverage(int array[], int myArray[], int arrayLength, int sampleNum){
	int i = 0;

	for (i = 0; i < arrayLength - sampleNum + 1; i++)	//there are (arrayLength-sampleNum+1) samples of numbers to be averaged in array
	{													//i.e. for an array with length ten averaging four numbers at a time
		int j = 0;										//0-3, 1-4, 2-5...6-9 is 10-4+1 samples of numbers or 7 samples
		int summer = 0;

		for (j = 0; j < sampleNum; j++)	//sums the first sampleNum numbers in array
		{
			summer += array[j+i];
		}

		myArray[i] = summer/sampleNum;
	}


}

int max(int array[], int arrayLength){
	int i = 0;
	int newMax = 0;

	for (i = 0; i < arrayLength; i++)
	{
        if (array[i] > newMax){
            newMax = array[i];
        }
	}

    return newMax;
}

int min(int array[], int arrayLength){
	int i = 0;
	int newMin = 7777;							// start newMin as high as possible
												// so first number in array is lower
	for (i = 0; i < arrayLength; i++)
	{
        if (array[i] < newMin){
            newMin = array[i];
        }
	}

    return newMin;
}


int range(int array[], int arrayLength){
	int i = 0;
	int newMin = 7777;
	int newMax = 0;
	int newRange = 0;

	for (i = 0; i < arrayLength; i++)
	{
        if (array[i] > newMax){
            newMax = array[i];
        }

        if (array[i] < newMin){
            newMin = array[i];
        }
	}

    newRange = newMax - newMin;
    return newRange;
}
