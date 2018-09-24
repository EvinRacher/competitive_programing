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

void inver(int k)
{
    for(int j = 0; j < sizeA; ++j)
      {
	for(int i = 1; i <= k; ++i)
        {
	  int n = nA[j] - i;
	  if(n >= 0){
	    if(s[n] == 'B'){
	      con[i-1]+=1;
	    }
	  }else{
	    break;
	  }
	}
    }
}

int main()
{
    cin >> s;
    con = vector<int> (s.size() - 1, 0);
    numbers();
    inver(s.size()-1);
    for(int i = 0; i < con.size(); i++)
    {
        cout << con[i] << endl;
    }

    return 0;
}
