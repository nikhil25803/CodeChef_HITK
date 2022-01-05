#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int i,j;
    ll a,b,res;
    cin>>a>>b;
    if(b==0 ){
        cout<<"0\n";
        return;
    }
    else if(a<=1 || b>=a){
        cout<<"-1\n";
        return;
    }
    if(a%2==0){
        res=(a/2)*b;
        cout<<res<<'\n';
        return;
    }
    if(a%2==1 && b%2==0){
        res=(b/2)*a;
        cout<<res<<'\n';
        return;
    }
    else if(a%2==1 && b%2==1){
        cout<<"-1\n";
    }

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

