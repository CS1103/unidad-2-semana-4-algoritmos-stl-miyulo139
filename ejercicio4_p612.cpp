/* Milagros Yupanqui -201910511

Example:
Input:
1

Ingresar valores l2: 
3 3
Ingrese cadena 1: HKJ
Ingrese cadena 2: ABC
Ingrese cadena 3: EBA

Output:
ABC
HKJ
EBA
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <sstream>

using namespace std;

int n_sort(string str){
  int count=0;
  std::string::iterator it=str.begin();
  int s=str.size();
  int c=0;
  while(it!=str.end()){
    for (int j=1;j<s-c;j++){
      if(static_cast<int>(*it)>static_cast<int>(*(it+j))){
        count++;
      }
    }
    c++;
    it++;
  }
  return count;
}

void cad_swapper (vector<string> &cad_vec)
{int i, j, n_swap=0;
    for (i = 0; i < cad_vec.size()-1; i++){
      for (j = 0; j < cad_vec.size()-i-1; j++){
        if (n_sort(cad_vec[j]) > n_sort(cad_vec[j+1])){
          swap(cad_vec[j], cad_vec[j+1]);
          n_swap++;
        }
      }
    }
}


int main(){
  int n, value;
  cin>>n; cout<<'\n';
  cin.ignore();
  vector<int>vl2;
  string l2;
  cout<< "Ingresar valores l2: "<<endl;
  getline(cin, l2);
  stringstream ssl2(l2);
  while (ssl2 >> value) {
      vl2.push_back(value);
  }

  vector<string>cad_vec;

  for(int i=0; i<n;i++){
    for (int i=0;i<vl2[1];i++){
      cout<<"Ingrese cadena "<<i+1<<": ";
      string cad;
      cin>>cad;
      cad_vec.push_back(cad);
    }
  }

  cad_swapper (cad_vec);

  for(const auto&i:cad_vec){
    cout<<i<<'\n';
  }
return 0;
}