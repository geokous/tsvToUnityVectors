#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int n = 62;
  ifstream fin("input");
  for (int i=0; i<n; i++) {
    float val1, val2;
    fin>> val1>>val2;
    if (val1 ==0 && val2 == 0) 
	continue;
    cout<<"new Vector3 (0, "<<val2<<"f, "<<val1<<"f);";

    cout<<endl;
  } 
  return 0;
}    
