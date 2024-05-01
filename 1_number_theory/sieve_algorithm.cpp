#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// O(n log(log(n)) ) in general , if from the outer loop i*i is replaced by i , and from the inner loop j = i is replaced by 
//                                 j = 2 and the j <= n/i is replaced by j <= n

//but this version has the complexity 
// O( sqrt(n) log(log(n)) )
vector<bool> primeCheck(int n){
    vector<bool> ans(n+1,true);
    ans[0] = ans[1] = false;
    for(int i=2;i*i<=n;i++){
        if(ans[i]){
            for(int j = i ; j <= n/i ; j++){
                ans[i*j] = false;
            }
        }
    }
    return ans;
}

int main()
{
    int n = 100;
    vector<bool> v = primeCheck(n) ;
    for(int i=0 ; i < v.size() ; i++){
        if(v[i]){
            cout<<i <<" prime "<<endl;
        }
        else{
            cout<<i<<" not prime "<<endl;
        }
    }
    return 0;
}