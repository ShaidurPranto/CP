#include<iostream>
#include<vector>
using namespace std;

void primeFactors(int n,vector<int> &v){
    for(int i=2;i*i<=n;i++){
        while(n % i == 0){
            v.push_back(i);
            n = n/i;
        }
    }
    if(n > 1){
        v.push_back(n);
    }
}

int main()
{
    vector<int> v;
    primeFactors(249283750,v);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}