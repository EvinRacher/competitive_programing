#include <iostream>
#include <vector>
/**
   Problem from: http://codeforces.com/problemset/problem/559/B
**/
using namespace std;

void imprimir(vector<int> lista){
    for(int j = 0; j < lista.size(); ++j){
      cout << "valor: "<<lista[j];
    }
    cout << endl;
}

vector<int> fill(bool start,int l, string x){
  vector<int> lista(26, 0);
  int i = 0;
  int c;
  if(!start){
    i = l;
    l = x.length();
  }
  for(;i<l;i++){
    cout << x.at(i);
    c = x.at(i);
    lista[c-97]++;
  }
  return lista;
}
bool verify(string a, string b){
  int l = a.length()/2;
  cout << "longitud "<< l << endl;
  vector<int> a1 = fill(true,l, a);
  vector<int> a2 = fill(false,l,a);
  vector<int> b1 = fill(true,l,b);
  vector<int> b2 = fill(false,l,b);
  if(a1 == b1 and a2 == b2){
    return true;
  }else if(a1  == b2 and a2 == b1){
    return true;
  }
  return false;
}

int main(){
  string a,b;
  //cin >> a;
  //cin >> b;
  if(verify("aaba", "abaa"))
    cout << "YES"<<endl;
  else
    cout << "NO" <<endl;
  return 0;
}
