#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define cv(CV) for (const auto& element : (CV)) std::cout << element << " "; std::cout << std::endl;

int main()
{ 
    int t;
    cin>>t;
    while(t--){
    vector<int> v;
    unordered_map<char,int> m;
    string s;
    cin>>s;
    for(int i =0 ;i<s.size();i++){
        m[s[i]]++;

    }
    for(auto i:m){
        v.push_back(i.second);
    }
    if(v[0]==v[1]){
        cout<<0;
    }
    else{
        
    }

    

    
   }
}