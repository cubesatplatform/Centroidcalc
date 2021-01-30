
#pragma once

#include <vector>


class CIRArray {
public:
	const int rowsize = 5;
	float tMin;
	float tMax;
	float tAvg;
	float tSum = 0.0;
	float tWeightedSum = 0.0; 
	float tCentroid = -1.0;


	std::vector<float> data = { 2.0,1.1,2.0,3.3,2.2,3.4,3.2,3.4,1.2,3.2,5.5,12.1,2.0,1.1,2.0,3.3,2.2,3.4,3.2,3.4,1.2,3.2,5.5,12.1,23.1,23.5,23.1,23.5, 2.0,1.1,2.0,3.3,2.2,3.4,3.2,3.4,1.2,3.2,5.5,12.1,23.1,23.5, 1.0,2.0,1.1,2.0,3.3,2.2,3.4,3.2,3.4,1.2,3.2,5.5,12.1,23.1,23.5,2.0,3.6,23.3,-1.0 };
	
	CIRArray() {
		tMin = data[0]; tMax = tMin; tAvg = tMin;
	};
	void CalcStats();

	int GetX();
	int GetY();

};