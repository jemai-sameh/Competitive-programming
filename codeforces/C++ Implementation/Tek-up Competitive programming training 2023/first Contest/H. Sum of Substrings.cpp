#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define all(x) x.begin(),x.end()

using namespace std;
const int tmax = 1e9;
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
        long n;
        cin >> n;
        vl tab;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            tab.push_back(a);
        }
        std::sort(all(tab));

        cout << (tab[n - 1] + tab[n - 2] - tab[0] - tab[1]) << endl;
    }
}