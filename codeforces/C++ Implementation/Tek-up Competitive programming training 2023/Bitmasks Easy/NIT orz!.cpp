#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
using namespace std;
const int tmax = 10^4+5;
#define optimise ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n;
    unsigned long long z,x,y,max=0;
    cin >>n >>z;
    vl  tab;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        tab.push_back(a) ;

    }
    cout <<"!***********"<<endl;

    for (int k = 0; k < n; k++)
    {
        cout << tab[k] << " ";
    }
    cout <<endl;
    cout <<"***********"<<endl;
    for (int j = 0; j < n; j++)
    {

        int a=tab[j];
        tab[j]|=z;
        z &=a;

        x=tab[j];
        y=z;

        tab[j]=x|y;
        z =x&y;

       /* x=tab[j] | z;
        y= tab[j] & z;
        tab[j]=x;
        z=y;
        */
        if (max<tab[j]) max=x;
        

    }

    for (int k = 0; k < n; k++)
    {
        cout << tab[k] << " ";
    }

    cout << "==>"<<max << endl;

  /*

7
13
11
31
48234367

  **/
    
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