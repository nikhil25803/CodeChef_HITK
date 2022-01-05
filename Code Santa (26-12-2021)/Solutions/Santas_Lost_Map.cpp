#include<bits/stdc++.h>
using namespace std;
 
const int N=1e3+10;
int mat[N][N],vis[N][N];
 
void solve(){
    int i,j,i1,j1,end_i,end_j;
    int n,m;
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>mat[i][j];
            vis[i][j]=0;
        }
    }
    vector<vector<int>> ans;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mat[i][j]==0 || vis[i][j]==1){
                continue;
            }
            end_i = i;
            while(end_i<n && mat[end_i][j]==1){
                end_i++;
            }
            end_i--;
 
            end_j = j;
            while(end_j<m && mat[end_i][end_j]==1){
                end_j++;
            }
            end_j--;
 
            
            for(i1=i;i1<=end_i;i1++){
                for(j1=j;j1<=end_j;j1++){
                    vis[i1][j1]=1;
                }
            }
 
            ans.push_back({i,j,end_i,end_j});
        }
    }
    if(ans.size()==0){
        cout<<"-1\n";
        return;
    }
    cout<<ans.size()<<'\n';
    for(i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
            if(j!=ans[i].size()-1){
                cout<<" ";
            }
            else{
                cout<<'\n';
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
}
 