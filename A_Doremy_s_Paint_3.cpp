#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define cv(CV) for (const auto& element : (CV)) std::cout << element << " "; std::cout << std::endl;

int main()
{
   long long t;
   cin>> t;
   while(t--){
    long long n;
    cin>> n;
    vector<long long> v;
    unordered_map<long long ,long long > m;
    vector<long long> r; 
    for(int i =0 ; i< n;i++){
     long long x;
     cin>>x;
     m[x]++;
     v.push_back(x);
    }
    if(m.size()>2){
        cout<<"No"<<endl;
    }
    else if(m.size()==1){
        cout<< "Yes"<<endl;
    }
    else{
        for(auto i:m){
             r.push_back(i.second);
        }
        if(abs(r[1]-r[0])<=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<< "No"<<endl;
        }
    } 
    
   }
}