#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
using namespace std;
const int tmax = 3005;
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n;
    cin >>n;
    int tab[tmax];
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }

    /*beacause Additional constraint on the input: the array a
 is made by the process described in the statement; that is, some value of x
 exists.*/
    //cout <<tab[0] << endl;
    // impementation
    for (int i = 0; i < n; i++)
    {
        int current = tab[i];
        int sum =0;
        for (int j=0;j<n ;j++)
        {
            if (i==j) continue;
            sum ^=tab[j];

        }
        if (current==sum){
            cout <<sum <<endl;
            break;
        }
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