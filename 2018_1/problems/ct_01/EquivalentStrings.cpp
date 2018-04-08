#include <iostream>
#include <set>
/**
   February 2018
   Problem from: http://codeforces.com/problemset/problem/559/B
**/
using namespace std;

set<char> fill(bool start,int l, string x){
  set<char> lista;
  int i = 0;
  if(!start){
    i = l;
    l = x.length();
  }
  for(;i<l;i++){
    cout << x.at(i);
    lista.insert(x.at(i));
  }
  cout << endl;
  return lista;
}
bool verify(string a, string b){
  int l = a.length()/2;
  cout << "longitud "<< l << endl;
  set<char> a1 = fill(true,l, a);
  set<char> a2 = fill(false,l,a);
  set<char> b1 = fill(true,l,b);
  set<char> b2 = fill(false,l,b);
  cout << "a1 == b1: " << (a1 == b1) << endl;
  cout << "a2 == b2: "<< (a2 == b2) << endl;
  cout << "a1 == b2: "<< (a1 == b2) << endl;
  cout << "a2 == b1: "<< (a2 == b1) << endl;
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
  if(verify("aabb", "abab"))
    cout << "YES"<<endl;
  else
    cout << "NO" <<endl;
  return 0;
}
