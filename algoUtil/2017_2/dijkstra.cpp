    #include <iostream>
    #include <queue>
    #include <vector>
     
    using namespace std;
     
    #define pii pair<int, int>
    #define MAXN 50
    #define INF 1<<30
    #define D(x) cout << #x << " = " << x << endl
     
    int d[MAXN], p[MAXN];
    vector<pii> g[MAXN];
     
    void dijkstra(int s, int n) {
      for(int i = 0; i < MAXN; ++i) {
       	d[i] = INF;
        p[i] = -1;
      }
      d[s] = 0;
      priority_queue<pii, vector<pii>, greater<pii> > q;
      q.push(pii(0, s));
      while(!q.empty()) {
        int currW = q.top().first;
        int currN = q.top().second;
        q.pop();
        for(int i = 0; i < g[currN].size(); ++i) {
          int nextN = g[currN][i].first;
          int nextW = g[currN][i].second;
          if(currW + nextW < d[nextN]) {
          	d[nextN] = currW + nextW;
          	p[nextN] = currN;
            q.push(pii(d[nextN], nextN));
          }
        }
      }
    }
     
    int main() {
     	int n, m;
      cin >> n >> m;
      for(int i = 0; i < m; ++i) {
       	int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back(pii(y, w));
      }
      int s;
      cin >> s;
      dijkstra(s, n);
      for(int i = 1; i <= n; ++i) {
      	cout << "from : " << s << " to : " << i << "with : " << d[i] << endl;  
      }
      cin >> s;
      while(p[s] != 1) {
      	cout << p[s] << endl;
      	s = p[s];
      }
    }
