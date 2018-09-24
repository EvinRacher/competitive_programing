#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<int,int> v;
    queue<int> q;
    int n;
    while((scanf("%d",&n) == 1))
    {
        v[n]+= 1;
        q.push(n);
    }
    int size = q.size();
    set<int> most;
    for(int i = 0; i < size; ++i)
    {
        int n = q.front();
        q.pop();
        if(most.find(n) == most.end())
        {
            cout << n << " " << v[n] <<endl;
            most.insert(n);
        }
    }
    return 0;
}
