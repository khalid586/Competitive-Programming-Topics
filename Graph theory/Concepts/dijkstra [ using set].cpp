#include<bits/stdc++.h>
using namespace std;


#define int long long 
const int N = 1e5 + 5;
const int INF = LLONG_MAX;

// solution of CF 20C dijkstra?
vector< pair<int,int> > graph[N];
vector<int> dist(N,INF);
vector<int> path(N,0);
bool vis[N];

void dijkstra()
{
	set<pair<int,int>> q;
	q.insert({0,1}); 
	dist[1] = 0;

		while(!q.empty()){
				int curr_dist=(*q.begin()).first , curr_edge = (*q.begin()).second; 
				q.erase(*q.begin());

				if(vis[curr_edge]) continue;
				vis[curr_edge] = 1;
				for(auto child:graph[curr_edge]){
							int child_edge = child.second , child_dist = child.first;
							
							if( curr_dist + child_dist < dist[child_edge]){
								dist[child_edge] = curr_dist + child_dist;
								q.insert({dist[child_edge],child_edge});
								path[child_edge] = curr_edge;	
							}
				}		
	  }
}

int32_t main()
{
	     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE

	int node,edges; cin >> node  >> edges;
	
	for(int i=0;i<edges;i++)
	{
		int x,y,z; cin >> x >> y >> z;
		if( x == y) continue;
		graph[x].push_back({z,y}); // graph[y].push_back({z,x});
	}

	vector<int> route;
	dijkstra();

	for (int i = 1; i <= node; ++i)
	{
		cout << dist[i] << ' ';
	}

	return 0;
		
}