#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int n = 62; 
  int k = 0;
  ifstream fin("input");
  cout<< "new Vector3[] { \n";
  for (int i=0; i<n; i++) {
    float val1, val2;
    fin>> val1>>val2;
    if (val1 ==0 && val2 == 0) 
	continue;
    k++;
    cout<<"new Vector3 (0, "<<val2<<"f, "<<val1<<"f), ";
    if ( k % 3 == 0 ) {
	cout<<endl;
    }
  } 
  cout<<"\n};\n";
  return 0;
}    
