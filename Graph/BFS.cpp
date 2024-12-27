#include <bits/stdc++.h>

using namespace std;

vector<int> bfs(unordered_map<int,vector<int>>& adj,int src){
  unordered_map<int,bool> visited;
  queue<int> q;
  q.push(src);
  vector<int> ans;
  while(!q.empty()){
    int u = q.front();
    q.pop();
    ans.push_back(u);
    if(visited[u]==true) continue;
    visited[u] = true;
    for(int &v : adj[u]){
      if(visited[v]==true) continue;
      q.push(v);
    }
  }
  return ans;
}


int main(){
  return 0;
}