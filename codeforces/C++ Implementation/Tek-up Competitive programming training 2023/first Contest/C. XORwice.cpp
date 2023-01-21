#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
using namespace std;
const int nax = 1e9;
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){ 
    optimise;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }
}