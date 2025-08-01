#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int32_t main() {
    fast_io;
    ll t;
    cin>>t;
    vector<ll> integers;
    while(t--){
        ll N;
        cin>>N;
        ll count_zeros =0 ;
        ll count_ones =0 ;
        ll sum = 0;
        for(int i = 0; i <N;i++){
            ll number;
            cin >> number;
           if(number == 1){
            count_ones++;
           }  
           else if(number == 0){
            count_zeros++;
           }
           else sum += number;
        }
        sum += min(count_ones,count_zeros) * 2;
        sum += abs(count_ones - count_zeros);
        cout<< sum <<"\n";      
        }
        return 0;
       
        
    }