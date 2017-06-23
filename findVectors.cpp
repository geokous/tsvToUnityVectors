#include <fstream>
// #include <iostream>

using namespace std;

#define notLast finalPairs[i+1][0] != 0 && finalPairs[i+1][1] != 0


void findVectors(float finalPairs[187][2]){
  ofstream cout("unityPoints");
  int k = 0;
  cout<<"new Vector3[] { \n";
  for (int i=0; finalPairs[i][0] != 0 && finalPairs[i][1] != 0; i++) {
    k++;
    float val1, val2;
    val1 = finalPairs[i][0];
    val2 = finalPairs[i][1];
    cout<<"new Vector3 (0, "<<val2<<"f, "<<val1<<"f)";
    if(notLast) {
      cout<<", ";
    }

    if ( i % 3 == 0 ) {
	   cout<<endl;
    }
  }
  cout<<"\n};\n";
  cout<<"The values were: "<<k;
}
