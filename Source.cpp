/*Saleh Almata
C++ Fall 2019
Date: 09 ,26,2019
Lab dessricptio: Program to compute Mean and stdDevation
*/

#include <iostream>;
#include <math.h>
#include<fstream>
using namespace std;
float computeMean(int n1, int n2, int n3, int n4) // a Function to find the mean
{
	float mean;
	mean = float(n1 + n2 + n3 + n4) / 4;
	return(mean);
}

float computestdDevation(int n1, int n2, int n3, int n4) // a Function to find the stdDevation
{
	float stdDevation = 0.0, mean = 0.0;
	mean = computeMean(n1, n2, n3, n4);
	stdDevation = (pow(n1 - mean, 2) + pow(n2 - mean, 2) + pow(n3 - mean, 2) + pow(n4 - mean, 2)) / 3;
	return (sqrt(stdDevation));
}
int main()
{
	//variable declaration
	int n1, n2, n3, n4;
	float mean, stdDevation;
	string inputFileName = "inMeanStd.dat";
	string outputFileName = "outMeanStd.dat";
	ifstream inFile;
	ofstream outFile;

	inFile.open(inputFileName);
	outFile.open(outputFileName);

	cout << "Enter four number";
	cin >> n1 >> n2 >> n3 >> n4; //userinput 
	mean = computeMean(n1, n2, n3, n4); // calling the mean function
	stdDevation = computestdDevation(n1, n2, n3, n4); //callig the stdDevation function
	cout << "The mean is " << mean << endl;
	cout << "The stdDevation is " << stdDevation;
	cout << endl;
	cout << endl;

	inFile >> n1 >> n2 >> n3 >> n4; // reading the number from a file
	mean = computeMean(n1, n2, n3, n4);// calling the mean function
	stdDevation = computestdDevation(n1, n2, n3, n4);// calling the stdDevation function
	outFile << "The mean is " << mean << endl; // print the answer in the outFile 
	outFile << "The stdDevation is " << stdDevation;// print the answer in the outFile
	cout << "The mean is " << mean << endl;
	cout << "The stdDevation is " << stdDevation;

	inFile.close();
	outFile.close();


}