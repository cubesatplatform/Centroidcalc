#include "IrArray.h"
#include <cmath>



void CIRArray::CalcStats() {
	float temp;
	bool doinitflag = true;
	int count = 0;

	for (int x = 0; x < data.size(); x++) {

		temp = data[x];
		if (isnan(temp)) continue;
		count++;

		if (doinitflag) {

			tMin = temp;
			tMax = temp;
			tAvg = temp;
			doinitflag = false;
		}

		if (temp > tMax) {
			tMax = temp;
		}

		if (temp < tMin) {
			tMin = temp;
		}

		tSum = temp + tSum;
		tWeightedSum = temp*(x+1) + tWeightedSum;
	}
	tAvg = tSum / count;
	tCentroid = (tWeightedSum / tSum)-1; 
 };

int CIRArray::GetX() {

	return tCentroid / rowsize;

	


}
int CIRArray::GetY() {
	return  (int)tCentroid % rowsize;


}
