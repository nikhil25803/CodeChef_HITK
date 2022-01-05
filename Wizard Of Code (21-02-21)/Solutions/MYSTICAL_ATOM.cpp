#include<bits/stdc++.h>
using namespace std;

#define ll long long int

map<int,vector<int>>m;
bool prime[1000001];
ll pref[1000001];
int vis[300001],b[300001],pos[300001];

ll dfs(int node,ll val){
    vis[node]=1;
    int i,child;
    ll temp;
    for(i=0;i<m[node].size();i++){
        child=m[node][i];
        if(vis[child]==0){
            temp=dfs(child,b[child]);
            if(temp<val){
                val=temp;
                pos[node]=pos[child];
            }
            else if(temp==val){
                pos[node]=min(pos[node],pos[child]);
            }
        }
    }
    return b[node]=val;
}
void solve(){
    int i,j;
    int n,u,v;
    cin>>n;
    ll a[n+1],last=2,temp;
    memset(prime,true,sizeof(prime));
    for (int p = 2; p * p <= 1000000; p++)
    {
        if (prime[p] == true) 
        {   for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
    for(i=2;i<=1000000;i++){
        if(prime[i]){
            last=i;
        }
        pref[i]=last;
    }
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=pref[a[i]];
        vis[i]=0;
        pos[i]=i;
    }
    for(i=1;i<=n-1;i++){
        cin>>u>>v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    temp=dfs(1,b[1]);
    for(i=1;i<=n;i++){
        cout<<pos[i]<<" "<<abs(b[i]-a[i])<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}

