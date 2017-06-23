#include <fstream>
#include "findVectors.h"
#include "joinLines.h"

using namespace std;

int main() {
  float finalPairs[187][2];
  joinLines(finalPairs);
  findVectors(finalPairs);
  return 0;
}
