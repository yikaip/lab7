//Lab7-ypeng.cpp
//Yikai Peng
//11.14.18



#include "winTimer.cpp"
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::ostream;
#include<algorithm>
using std::is_sorted;
#include "Lab7-ypeng.h"

	void swapVal(double x, double y)
	{
		double tempVal = x;
		x = y;
		y = tempVal;
	}

	void SortAlg::bubbleSort(vector<double> & vec1)
	{
		double n = vec1.size();
		for (double j = 1; j < n; j++)
		{
			if (vec1[j] > vec1[j - 1])
			{
				swapVal(vec1.at(j), vec1.at(j - 1));
			}
		}
	}

	void SortAlg::insertionSort(vector<double> &vec2)
	{
		double n = vec2.size();
		for (double i = 0; i < n; i++)
		{
			double Val1 = vec2.at(i);
			double Pos = i;
			while (Pos > 0 && Val1 < vec2.at(Pos - 1))
			{
				vec2.at(Pos) = vec2.at(Pos - 1);
				Pos--;
			}
			vec2.at(Pos) = Val1;
		}
	}
	
	void printSort(int vector)
	{
		std::vector<int> vect;
		int n = vect.size();
		for (int i = 0; i < n; i++)
		{
			cout << vect[i];
		}
	}

	void SortAlg::selectionSort(vector<double> &vec3)
	{
		double n = vec3.size();
		for (double i = 0; i < n; i++)
		{
			double pos = i;
			for (double j = i + 1; j < n; j + 1)
			{
				if (vec3.at(j) < vec3.at(pos))
				{
					pos = j;
				}
			}
			swapVal(vec3.at(i), vec3.at(pos));
		}
	}

	void merge(vector<double> &vec3, double start, double half, double end)
	{
		vector<double> a(vec3.begin() + start, vec3.begin() + half);
		double halfNum = half;
		double aNum = 0;
		double startNum = start;

		while (halfNum < end&&aNum < a.size())
		{
			if (vec3.at(startNum) < a.at(aNum))
			{
				vec3.at(aNum) = vec3.at(halfNum);
				aNum++;
				halfNum++;
			}
			else
			{
				vec3.at(startNum) = a.at(aNum);
				startNum++;
				aNum++;
			}
		}
		while (halfNum < end)
		{
			vec3.at(startNum) = vec3.at(halfNum);
			startNum++;
			halfNum++;
		}
		while (aNum < a.size())
		{
			vec3.at(startNum) = a.at(aNum);
			startNum++;
			aNum++;
		}
	}

	void SortAlg::mergeSort(vector<double> &seq, double start, double end)
	{
		if ((end - start) < 2)
		{
			return;
		}
		double half = (start + end) / 2;
		mergeSort(seq, start, half);
		mergeSort(seq, half, start);
		merge(seq, start, half, end);
	}

	void SortAlg::quickSort(vector<double> &vec4, double start, double end)
	{
		if ((end - start) < 2)
		{
			return;
		}
		quickSort(vec4, 0, vec4.size());
	}


int main()
{
	vector<double> vect = { 10,38,9,59 };
	insertionSort(vect);
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i];
	}
}
