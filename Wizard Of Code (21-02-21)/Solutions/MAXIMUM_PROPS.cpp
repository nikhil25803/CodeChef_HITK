#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
    int i,j;
    ll n,x;
    cin>>n>>x;
    ll p[n],count=0,sum=0;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    for(i=0;i<n;i++){
        sum+=p[i];
        if(sum<=x){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

