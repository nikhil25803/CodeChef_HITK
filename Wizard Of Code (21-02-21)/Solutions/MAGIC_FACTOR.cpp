#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll i,j;
    ll n,last[200001]={0};
    cin>>n;
    string s;
    ll len,val,ans=0;
    for(i=0;i<n;i++){
        cin>>s;
        len=s.size();
        val=0;
        for(j=0;j<len;j++){
            val+=s[j]-'a'+1;
        }
        if(last[len]!=0){
            ans+=abs(val-last[len]);
            last[len]=0;
        }
        else{
            last[len]=val;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}

