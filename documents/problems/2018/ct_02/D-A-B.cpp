#include <iostream>


using namespace std;

int main(){
  int x,c,suma;
  c=0;
  suma=0;
  while(cin >> x){
    c+=1;
    suma+=x;
    if(c == 2){
      cout << suma << endl;
      suma = 0;
      c = 0;
    }
  }
}
