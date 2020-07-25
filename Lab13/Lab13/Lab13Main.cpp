//Cristian Lopez
//CS201L
//7-24-2020
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

const int list_size = 100;

// template function to swap elements of an array of any type
template <class Sw>
void mySwap(Sw list[], int pos1, int pos2)
{
	Sw temp;
	temp = list[pos1];
	list[pos1] = list[pos2];
	list[pos2] = temp;
}

// template function to find the smallest value of an array of any type
template <class Mi>
Mi myMin(Mi list[])
{
	Mi min = list[0];
	for (int i = 0; i < list_size; i++)
	{
		if (list[i] < min)
		{
			min = list[i];
		}
	}
	return min;
}

// template function to find the greatest value of an array of any type
template <class Ma>
Ma myMax(Ma list[])
{
	Ma max = list[0];
	for (int i = 0; i < list_size; i++)
	{
		if (list[i] > max)
		{
			max = list[i];
		}
	}
	return max;
}

// template function to find the position of a specific element in an array of any type
template <class Se>
int mySearch(Se list[], Se compare)
{
	for (int i = 0; i < list_size; i++)
	{
		if (list[i] == compare)
		{
			return i;
		}
	}
	return -1;
}

int main() {
	ifstream integers("integers.txt");
	ifstream doubles("doubles.txt");
	ifstream strings("strings.txt");
	ofstream output("output.txt");

	int myInts[100];
	double myDoubles[100];
	string myStrings[100];


	for (int i = 0; i < 100; i++) {
		integers >> myInts[i];
		doubles >> myDoubles[i];
		strings >> myStrings[i];
	}

	output << "Integers:" << endl;
	output << "Swapped items at positions 10 and 20" << endl;
	output << "Before: [10] " << myInts[10] << " [20] " << myInts[20] << endl;
	mySwap(myInts, 10, 20);
	output << "After: [10] " << myInts[10] << " [20] " << myInts[20] << endl;
	output << "Minimum: " << myMin(myInts) << endl;
	output << "Maximum: " << myMax(myInts) << endl;
	output << "The number 1 is at position " << mySearch(myInts, 1) << endl;
	output << "The number 5 is at position " << mySearch(myInts, 5) << endl;

	output << endl;

	output << "Doubles:" << endl;
	output << "Swapped items at positions 10 and 20" << endl;
	output << "Before: [10] " << myDoubles[10] << " [20] " << myDoubles[20] << endl;
	mySwap(myDoubles, 10, 20);
	output << "After: [10] " << myDoubles[10] << " [20] " << myDoubles[20] << endl;
	output << "Minimum: " << myMin(myDoubles) << endl;
	output << "Maximum: " << myMax(myDoubles) << endl;
	output << "The number 4.62557 is at position " << mySearch(myDoubles, 4.62557) << endl;
	output << "The number 1.23456 is at position " << mySearch(myDoubles, 1.23456) << endl;

	output << endl;

	output << "Strings:" << endl;
	output << "Swapped items at positions 10 and 20" << endl;
	output << "Before: [10] " << myStrings[10] << " [20] " << myStrings[20] << endl;
	mySwap(myStrings, 10, 20);
	output << "After: [10] " << myStrings[10] << " [20] " << myStrings[20] << endl;
	output << "Minimum: " << myMin(myStrings) << endl;
	output << "Maximum: " << myMax(myStrings) << endl;
	string compare = "Shoes";
	output << "The word Shoes is at position " << mySearch(myStrings, compare) << endl;
	compare = "Pumpkin";
	output << "The number Pumpkin is at position " << mySearch(myStrings, compare) << endl;

	output.close();
	system("pause");
	return 0;
}

