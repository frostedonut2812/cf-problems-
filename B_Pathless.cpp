#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int32_t main() {
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        vector<ll> nums;
        ll count_ones =0 ;
        ll count_zeros =0 ;
        ll count_twos =0;
        ll N,target;
        cin >>N>>target;
        ll sum = 0;
        for(ll i = 0 ; i < N ; i++){
            ll new_number;
            cin>>new_number;
            if(new_number == 0) count_zeros++;
            if(new_number == 1) count_ones++;
            if(new_number == 2) count_twos++;
            sum += new_number;
            nums.push_back(new_number);

        }
        if (target< sum){
            for(auto num: nums){
                cout << num << " ";
            }
            cout<< endl;
            continue;
        }
        
        if(target  == sum){
            cout<< -1<<endl;
            continue;
        }
        else if(target - sum ==  1){
            for( ll i = 0; i< count_zeros; i++ ){
                cout<< 0 <<" ";
            }     
            for( ll i = 0; i< count_twos; i++ ){
                cout<< 2 <<" ";
            }
             for( ll i = 0; i< count_ones; i++ ){
                cout<< 1 <<" ";
            }
            cout<< endl;
            continue;
        }
        else{
            cout << -1<< endl;
        }

    }
    

    return 0;
}


