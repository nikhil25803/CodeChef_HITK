#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int i,j;
    int n;
    cin>>n;
    ll k;
    cin>>k;
    ll a[n],b[n],temp,mx=0,ans;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    i=0; j=0; temp=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            temp++;
            i++;
        }
        else if(a[i]>b[j]){
            temp--;
            j++;
        }
        else if(a[i]==b[j]){
            i++;
            j++;
        }
        mx=max(mx,temp);
    }
    ans=(mx+k-1)/k;
    cout<<ans<<endl;

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

