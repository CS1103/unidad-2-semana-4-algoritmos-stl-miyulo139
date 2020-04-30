/*Milagros Yupanqui
Example:
Input:
Ingrese n: 1

Ingresar valores l1: 
3 1 2
Ingresar valores l2: 
32.0 54.7 -2

Output:
54.7
-2
32 
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  int n, i;
  cout<<"Ingrese n: ";
  cin>>n;cout<<"\n";
  cin.ignore();

  for(i=0;i<n;i++){
    vector<int>vl1;
    string l1, l2;
    cout<< "Ingresar valores l1: "<<endl;
    getline(cin, l1);
    stringstream ssl1(l1);
    int value;
    while (ssl1 >> value) {
      vl1.push_back(value);
    }
    vector<double>vl2;
    cout<< "Ingresar valores l2: "<<endl;
    getline(cin, l2);
    stringstream ssl2(l2);
    double value2;
    while (ssl2 >> value2) {
      vl2.push_back(value2);
    }
    sort(vl2.begin(),vl2.end());
    for (const auto &a: vl1)
      cout << vl2[a-1]<< '\n';
  }
  
return 0;
}