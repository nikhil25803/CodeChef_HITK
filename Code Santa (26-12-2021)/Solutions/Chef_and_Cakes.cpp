#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i,j;
    int n;
    cin>>n;
    int a[n];
    map<int,int> freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    int max_freq=0,flavour;

    for(auto it : freq){
        if(it.second>max_freq){
            max_freq=it.second;
            flavour=it.first;
        }
        else if(it.second==max_freq){
            flavour=max(flavour,it.first);
        }
    }

    cout<<flavour<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}

