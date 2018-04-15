//Algoritmo con metodos para grupos disjuntos, grafos implicios
#include <iostream>
#include <vector>
#define vi vector<int>
//Usar expresion constante

using namespace std;

class UnionFind{
private: vi  p, rank;
//vectores
public:
UnionFind(int N){
//Inicializa vectores (de la forma (tamaño de vector, valor inicial))
rank.assign(N, 0);
p.assign(N, 0);
for(int i = 0; i < N; i++)
  p[i] = i;//Inicializa las vertices con aristas que inciden a ellas mismas
}

//Metodo para buscar una relacion
int findSet(int i){
return (p[i] == i) ? i : (p[i] = findSet(p[i]));
}

bool isSameSet(int i, int j){
return findSet(i) == findSet(j);
}

void unionSet(){
if(!isSameSet(i,j)){
int x = findSet(i), y = findSet(j);
if(rank[x] > rank[y])
  p[y] = x;
 else{
p[x] = y;
if(rank[x] == rank[y])
  rank[y]++;
}
}
}
};
 
