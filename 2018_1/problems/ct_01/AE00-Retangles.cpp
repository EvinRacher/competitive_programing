#include <iostream>
#include <math.h>
/**
   February 2018
   Problem from: http://www.spoj.com/problems/AE00/
 **/
//criba generating

#define MAX 10000
using namespace std;

int rectangles(int n){
  int r = 0;
  for(int i = 1; i < n; ++i){
    for(int j = i; j < n; ++j){
      if (i*j <= n)
	    r++;
    }
  }
  return r+1;
}

int main(){
  int i;
  cin >> i;
  cout << rectangles((int)i);
  return 0;
}
