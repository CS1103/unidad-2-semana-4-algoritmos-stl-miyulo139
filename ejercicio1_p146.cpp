#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <string> vecstr;
  string s=" ";
  
  while (s!="#"){
    cout<<"Ingrese string: ";
    cin>>s;
    if (s!="#") vecstr.push_back(s);
  }

  for(auto &item:vecstr){
    if (next_permutation(item.begin(), item.end())){
      cout << item << endl;
    }
    else
    cout<<"No Successor"<<endl;}}

