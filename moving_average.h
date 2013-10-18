/*
 * moving_average.h
 * Created on: Oct 16, 2013
 * Author: C15Colin.Busho
 * Version 2- Adapted from Capt Branchflower
 * Description- Functions to obtain averages
 * minimum, maximum, and range of an array
 */

#ifndef MOVING_AVERAGE_H_
#define MOVING_AVERAGE_H_

// Moving average functions
void getAverage(int array[], int myArray[], int arrayLength, int sampleNum);

// Array functions
int max(int array[], int arrayLength);
int min(int array[], int arrayLength);
int range(int array[], int arrayLength);

#endif /* MOVING_AVERAGE_H_ */
