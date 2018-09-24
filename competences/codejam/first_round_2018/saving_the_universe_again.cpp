#include <iostream>

using namespace std;
#define D(x)
//cout << "DEBUG: " << #x " = " << x <<endl

string p;
int d;
int tot;

void cal_tot()
{
    tot = 0;
    int f = 1;
    for(int i = 0; i < p.size(); ++i)
    {
        if(p[i] == 'C')
        {
            f*=2;
        }
        else
        {
            tot+=f;
        }
    }
}

int swaping()
{
    int cont = 0;
    int tam = p.size()-1;
    for(int i = tam; i >= 0; --i)
    {
        if(p[i] == 'C' and i < tam)
        {
            char a = p[i];
            D(a);
            D(i);
            D(p);
            if(p[i+1] != 'C')
            {
                p[i+1] = 'C';
                p[i] = 'S';
                cal_tot();
                cont++;
                D(cont);
                D(tot);
                D(p);
                if(tot <= d)
                {
                    return cont;
                }
                i = tam;
            }
        }

        /**else if(p[i] == 'C' and i == tam){
            tam--;
            D(tam);
        }**/
    }
    if(tot > d)
    {
        return -1;
    }
    return cont;
}
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; ++i)
    {
        tot = 0;
        int r = 0;

        cin >> d;
        cin >> p;
        cal_tot();
        D(tot);
        if(tot > d)
              r = swaping();
        D(r);
        cout << "Case #"<< i<< ": ";
             if(r >= 0)
        {
            cout << r << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;

        }
    }
    return 0;
}
