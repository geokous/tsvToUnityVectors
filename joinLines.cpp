#include <stdio.h>
#include <fstream>

using namespace std;

void joinLines(float finalPairs[187][2]) {
	float x1, y1, x2, y2;
	int numOfPoints = 5;

	ifstream fin("pointPairs");

	int currentIndex = 0;
	for (int i = 0; !fin.eof(); i++) {
		fin	>> x1 >> y1 >> x2 >> y2;
		float slope = (y2 - y1) / (x2 - x1);

		float xDist = (x2-x1) / numOfPoints;
		float yDist = (y2-y1) / numOfPoints;

		for(int j=0; j<=numOfPoints; j++) {
			float finalX = xDist * j + x1;
			float finalY = yDist * j + y1;
			finalPairs[currentIndex][0] = finalX;
			finalPairs[currentIndex][1] = finalY;
			currentIndex++;
		}
	}
}
