// Irtest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IrArray.h"
int main()
{
	std::cout << "Hello World!\n";
	CIRArray ir;
	ir.CalcStats();
	std::cout << ir.tMin << "\n";
	std::cout << ir.tMax << "\n";
	std::cout << ir.tAvg << "\n";
	std::cout << ir.tSum << "\n";
	std::cout << ir.tCentroid << "\n";
	std::cout << ir.tWeightedSum << "\n";
	std ::cout << ir.GetX() << "," <<ir.GetY()<< "\n";

}

