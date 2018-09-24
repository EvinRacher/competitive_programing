#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    deque<int> q;
    vector<int> s;
    int n,num;
    cin >> n;
    while(n != 0)
    {
        if(n != 1)
        {
            for(int i = 1; i <= n; ++i)
            {
                q.push_back(i);
            }

            while(q.size() != 1)
            {
                int l = q.front();
                s.push_back(l);
                q.pop_front();

                int topTolast = q.front();
                q.pop_front();
                q.push_back(topTolast);
            }
            cout << "Discarded cards: "<<s[0];
            for(int i = 1; i < s.size(); ++i)
            {
                cout <<", "<<s[i];
            }
            cout << endl;
            cout << "Remaining card: "<<q.front();
            cout << endl;
            cin >> n;
            s.clear();
            q.clear();
        }else{
            cout << "Discarded cards:"<<endl;
            cout << "Remaining card: "<< "1"<<endl;
            cin >> n;
        }
    }
    return 0;
}
