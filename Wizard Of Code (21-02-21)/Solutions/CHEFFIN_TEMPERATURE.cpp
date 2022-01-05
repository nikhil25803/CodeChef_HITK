#include<bits/stdc++.h>
using namespace std;

double kelvin(double cel){
    return cel+273;
}
double far(double cel){
    double res;
    res=(cel*9)/5;
    res+=32;
    return res;
}
void solve(){
    int i,j;
    double c,f,k,chef;
    cin>>c;
    f=far(c);
    k=kelvin(c);
    chef=(c/27)+((f-23)/9)+(k-72);
    cout<<round(chef)<<endl;
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

