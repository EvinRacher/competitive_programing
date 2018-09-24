#include <iostream>
#include <vector>

using namespace std;

int nB[1000000];
int nA[1000000];
int sizeA, sizeB = sizeA = 0;

string s;

vector<int> con;

void numbers()
{
    int len = s.size();
    for(int i = 0; i < len; ++i)
        if(s[i] == 'A')
            nA[sizeA++] = i;
        else
            nB[sizeB++] = i;
}


int bs(int value){
    int low = 0;
    int high = sizeB-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(nB[mid] > value) high = mid -1;
        else if(nB[mid] < value) low = mid + 1;
        else return mid;
    }

    return low;
}
void inver()
{
    for(int j = 0; j < sizeA; ++j)
    {

        int maxidx = bs(nA[j]);

        for(int i = 0; i < maxidx; ++i)
        {
            int k = nA[j]-nB[i]-1;
            con[k]+=1;
        }
    }
}

int main()
{
    cin >> s;
    con = vector<int> (s.size() - 1, 0);
    numbers();
    inver();
    for(int i = 0; i < con.size(); i++)
    {
        cout << con[i] << endl;
    }

    return 0;
}
