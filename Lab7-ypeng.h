//Lab7-ypeng.h
//Yikai Peng
//11.14.18

#ifndef SortAlg
#define SortAlg

#include <vector>
using std::vector;

// bubble, insertion, selection, merge, and quicksort
#include<iostream>
using namespace std;

class SortAlg
{
public:
	void bubbleSort(vector<double>& vec1);
	void insertionSort(vector<double> &vec2);
	void selectionSort(vector<double> &vec3);
	void mergeSort(vector<double> &seq, double start, double end);
	void quickSort(vector<double> &vec4, double start, double end);
};


#endif

