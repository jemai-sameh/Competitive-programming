#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
using namespace std;
const int nax = 1e5+5;
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    vl tabA;
    ll somme=0;
    int n,q,type,x, even=0,odd=0;
    cin >> n >> q;
        for (int i =0; i < n; ++i)
        {
            int val;
            cin >> val;
            tabA.push_back(val);
            somme=somme+val;
            (val%2==0) ? even++ : odd++;
        }
        while(q--){
            cin >> type >> x;
            if (type==0){
                    somme=somme+(x*even);
                }else{
                    somme=somme+(x*odd);
                }                
                if (x%2!=0 && type==0){
                    odd+=even;
                    even=0;
                }
                if (x%2!=0 && type==1){
                    even+=odd;
                    odd=0;
                }
            cout <<somme<<endl;
        }
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