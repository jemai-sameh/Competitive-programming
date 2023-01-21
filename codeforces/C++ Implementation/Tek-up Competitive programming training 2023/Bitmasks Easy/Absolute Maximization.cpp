#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
using namespace std;
const int nax = 305;
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n;
    cin >>n;
    int nd , nOr =0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(i==0) nd=a;
        nd &=a;
        nOr |=a;
    }
    cout <<nOr-nd << endl;
}
int main(){ 
    optimise;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}