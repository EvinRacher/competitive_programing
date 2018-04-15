#include <iostream>
/**
   Disponible en:  
   https://vjudge.net/contest/214580#problem/E
 **/
using namespace std;

int main(){
  int curr;
  cin >> curr;//n
  bool passed[1000] = {};
  int ways = 0;
  while(cin >> curr){
    if(curr && ! passed[curr])
      ways++, passed[curr] = true;
  }
  cout << ways << endl;
}
