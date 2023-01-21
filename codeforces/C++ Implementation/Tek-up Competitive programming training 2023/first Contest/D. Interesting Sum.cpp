#include <bits/stdc++.h>
#define ll long long
#define vl vector<long long>
#define all(x) x.begin(),x.end()
//#define static_cast<int>(ch);
using namespace std;
const int tmax = 1e5+5;
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
       
       long n,k;
       string s;
       cin >> n >> k;
       cin >> s;


       for (int i = n; i > 0; i--)
       {
         if (k==0) break;
         if(s[i] != s[i-1]){
            int aux=s[i];
            s[i]=aux;
            s[i-1]=s[i];
            k--;
         }

       }

       int sm=0;//(int(ch) - 48) ;
       for (int i = 0; i <n-1 ; i++)
       {
            string str = s.substr(i, 2);
            cout << str <<endl;
            //sm+=std::atoi(str);
       }

       cout << s << endl;
    }
}