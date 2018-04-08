//Usando criba
#include <vector>
#include <iostream>
#include <stdio.h>
//Maths
#include <cmath>

//arreglo de booleanos
#include <bitset>

using namespace std;


const long long LIM = 100;//define un limite

bitset<LIM> dn;
//Dina :( (sieve, criba) de binarios
vector<int> ps;
//Vector con los primos
void sieve(){
  dn.set();
  dn[0] = dn[1] = false; //0 y 1 no cuenta
  for(int i = 2; i <= LIM; ++i){//Recorre hasta el limite
    if(dn[i]){//Sino esta tachado(es primo)
      for(int j = i * i; j <= LIM; j+= i){//Tacha los multiplos de ese primo
	dn[j] = false;
      }
      ps.push_back(i);//agrega el elemento en i y ese elemento sera primo
    }
  }
}

int nSemiprimes(int limit){
  int i = 0;

  while(ps[i]<<1 <= limit){
    ++i;
  }
  
  return i*(i+1)/2; 
}

int nums(int nSemiPrimes, int n){
  int cont = 0;
  for(int i = 0; i < nSemiPrimes; ++i){
    for(int j = 0; j < nSemiPrimes; ++j){
      if(ps[i]*ps[j] < n){
      cont++;
    }else{
      return cont;
    }
    }
  }

  return cont;
}

int main(){
  int t, n;
  sieve();
  scanf("%d" , &t);
  while(t){
    scanf("%d", &n);
    int cn = nSemiprimes(n);
    printf("%d\n", nums(cn, n));
    --t;
  }
  return 0;
}

