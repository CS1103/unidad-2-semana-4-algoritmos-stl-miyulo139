/*Milagros Yupanqui -201910511
Example:
Input:
Number of test cases: 1
Number of data: 7
1: a 3
2: W 10
3: A 100
4: , 10
5: k 7
6: . 3
7: I 13
Number of sentences: 7
1: ACM International Collegiate Programming Contest (abbreviated
2: as ACM-ICPC or just ICPC) is an annual multi-tiered competition
3: among the universities of the world. The ICPC challenges students
4: to set ever higher standards of excellence for themselves
5: through competition that rewards team work, problem analysis,
6: and rapid software development.
7: From Wikipedia.
Output:
3.74$
*/

#include <iostream>
#include<algorithm>
#include<map>

using namespace std;

int main() {
  int n;
  cout<<"Number of test cases: ";
  cin>>n;
  for (int i=0; i<n;i++){
    int n2;
    cout<<"Number of data: ";
    cin>>n2;
    map<char,int> table;
    for (int i=0;i<n2;i++){
    char k; int e;
    cout<<i+1<<": ";
    cin>>k>>e;
    table[k]=e;
    }
  
    int lines;
    cout<<"Number of sentences: ";
    cin>>lines; cin.ignore();
    float payfor=0;
    for (int i=0;i<lines;i++){
      string s; int cost=0;
      cout<<i+1<<": ";
      getline(cin,s);
      for (int i=0;i<s.size();i++){
        if(s[i]!=' '){
          if (table.count(s[i])){
          cost = table.at(s[i]);
          payfor+=cost;
          }
        }
      }
    }
    cout<<payfor/100<<"$"<<endl;
  }
}
