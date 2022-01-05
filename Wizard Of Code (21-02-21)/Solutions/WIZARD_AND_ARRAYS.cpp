#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string to_binary(ll n){
    string s,temp;
    int size,i;
    while(n){
        if(n%2==1){
            s.push_back('1');
        }
        else{
            s.push_back('0');
        }
        n/=2;
    }
    size=31-s.size();
    reverse(s.begin(),s.end());
    for(i=0;i<size;i++){
        temp+='0';
    }
    s=temp+s;
    return s;
}
void solve(){
    int i,j;
    int n;
    cin>>n;
    string a[n];
    ll temp,count=0,res=0;
    for(i=0;i<n;i++){
        cin>>temp;
        a[i]=to_binary(temp);
    }
    if(n==1){
        cout<<"0\n";
        return;
    }
    for(j=0;j<31;j++){
        count=0;
        for(i=0;i<n;i++){
            if(a[i][j]=='1'){
                count++;
            }
        }
        if(count>=2 || j==30){
            res=31-j;
            cout<<res<<endl;
            return;
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
    return 0;
}

