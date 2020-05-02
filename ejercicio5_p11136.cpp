/*Milagros Yupanqui
Example:
Input:
Ingrese cantidad de días de promoción: 5
Ingresar datos día 1: 
3 1 2 3
Ingresar datos día 2: 
2 1 1
Ingresar datos día 3: 
4 10 5 5 1
Ingresar datos día 4: 
0
Ingresar datos día 5: 
1 2
Ingrese cantidad de días de promoción: 2
Ingresar datos día 1: 
2 1 2
Ingresar datos día 2: 
2 1 2
Ingrese cantidad de días de promoción: 0

Output:
19
2
*/

#include <iostream>
#include<list>
#include <sstream>
#include<algorithm>

using namespace std;

int main() {
  int n;
  static list<int>count_fc;
  do{
    cout<<"Ingrese cantidad de días de promoción: ";
    cin>>n;
    if(n!=0){
    cin.ignore();
    size_t for_client=0;
    list<int>ll;
    for (int i=0;i<n;i++){
      int value;
      string l;
      cout<< "Ingresar datos día "<<i+1<<": "<<endl;
      getline(cin, l);
      stringstream ssl2(l);
      int c=0;
      while (ssl2 >> value) {
        c++;
        if (c>1) ll.push_back(value);
      }
      list<int>::iterator max;
      list<int>::iterator min;
      max = max_element(ll.begin(), ll.end());
      min = min_element(ll.begin(), ll.end());
      for_client+=(*max-*min);
      ll.erase(max);ll.erase(min);
    }
    count_fc.push_back(for_client);
  }} while(n!=0);

  for(const auto&i:count_fc){
    cout<<i<<endl;
  }
  return 0;
}
 
