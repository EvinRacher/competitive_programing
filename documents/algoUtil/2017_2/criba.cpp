//Usando criba
//Metodo que genera una criba, con los primos hasta un limite, trabaja con valores binarios por que es mas facil que con enteros, ocupa menos espacio
#include <vector>
#include <iostream>
#include <stdio.h>
#include <bitset>
//arreglo de booleanos

using namespace std;

#define LIM 100//define un limite(1000000 por lo general)

bitset<LIM> dn;
//Dina :( (sieve, criba) de binarios
vector<int> ps;
//Vector con los primos
void sieve(){
  dn[0] = dn[1] = true; //0 y 1 no cuenta
  for(int i = 2; i < LIM; ++i){//Recorre hasta el limite
    if(!dn[i]){//Sino esta tachado(es primo)
      for(int j = i * i; j <= LIM; j+= i){//Tacha los multiplos de ese primo
	dn[j] = true;
      }
      cout << i << " - ";
      ps.push_back(i);//agrega el elemento en i y ese elemento sera primo
    }
  }
}

int main(){
  sieve();
  return 0;
}

