#include <iostream>

using namespace std;


int main(){
  int K, N, M, X, Y, i;
  while(cin >> K){
    cin >> N >> M;
    i = 0;
    while(i < K){
      cin >> X >> Y;
      if(X == N or Y == M)
        cout << "divisa" << endl;
      else if(X > N and Y > M)
        cout << "NE" << endl;
      else if (X > N and Y < M)
        cout << "SE" << endl;
      else if(X < N and Y < M)
        cout << "SO" << endl;
      else
        cout << "NO" << endl;
      ++i;
    }
  }
}
