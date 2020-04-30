/*Milagros Yupanqui
Example:
Input:
Ingrese la cantidad de trenes: 3
Cantidad de vagones del tren 1: 3
3 2 1
Cantidad de vagones del tren 2: 4
4 3 2 1
Cantidad de vagones del tren 3: 2
2 1

Outputs:
Optimal train swapping takes 3 swaps
Optimal train swapping takes 6 swaps
Optimal train swapping takes 1 swaps
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void train_swapper (vector<int> &train)
{int i, j, n_swap=0;
    for (i = 0; i < train.size()-1; i++){
      for (j = 0; j < train.size()-i-1; j++){
        if (train[j] > train[j+1]){
          swap(train[j], train[j+1]);
          n_swap++;
        }
      }
    }
    cout<< "Optimal train swapping takes "<<n_swap<<" swaps"<<endl;
}

int main(){
  size_t n;
  cout<<"Ingrese la cantidad de trenes: ";
  cin>>n; cout<<endl;
  for (int i=0; i<n; i++){
    vector<int> train{};
    size_t size=0;
    cout<<"Cantidad de vagones del tren "<<i+1<<": ";
    cin>>size; cout<<endl;
    for (int i=0; i<size; i++){
      int a;
      cin>>a;
      train.push_back(a);
    }
      train_swapper(train);
  }
    return 0;  
}