#include <iostream>
#include <vector>
#include <string>

using namespace std;
/**
   Combinatorias, Permutaciones y conjuntos partes


   Combinatoria: Combinacion de elementos de un conjunto sin orden
    Sin repertir: n!/(r!(n-r)!)
    Repitiendo:d
   Permutaciones: Combinacion de elementos en un conjunto con orden. n = numero de elementos, r = elementos a elegir.
    Sin repetir:n!/(n-r)! // En el caso desarrollado; n=r y recuerde que 0! = 1
    Repitiendo: n**r

    Conjuntos Parte: Conjungo potencia de un conjunto. P(A) es el conjunto de los subconjuntos de un conjunto. Hay 2**n subconjuntos
**/

void conjAux(string pre, string pos, vector<string> *p)
{
    if(pos.length() == 0)
    {
        cout << pre +" - ";
        p->push_back(pre);
    }
    else
    {
        conjAux(pre+pos.at(0), pos.substr(1), p);
        conjAux(pre, pos.substr(1), p);
    }
}

//CONJUNTO PARTES
void conjPart(string s)
{
    vector<string> r; //Creacion de un vector
    vector<string> *p = NULL; //Creacion de un puntero (Posicion en memoria)
    p = &r; //Asignarle al puntero la posicion de memoria del vector r
    conjAux("*",s,p);
}

void permuAux(string c, string next, vector<string>* p)
{
    if(next.length() == 1)
    {
        cout << c + next << endl;
        p->push_back(c + next);
    }
    else
    {
        for(int i = 0; i < next.length(); ++i)
        {
            permuAux(c+next.at(i), next.substr(0,i)+next.substr(i+1), p);
        }
    }
}

void permutaciones(string s)
{
    vector<string> r;
    vector<string> *p  = &r;
    permuAux("",s,p);
}

int main()
{
    string s;
    cin >> s;
    cout << "Ejecutando" << endl;
    conjPart(s);
    //permutaciones(s);
}
