#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;

int main()
{
    double n = 101 ;
    double low = 1, high = n;
    while(high-low > eps){
        double mid = (low+high)/2;
        if(mid*mid > n){
            high = mid;
        }
        else if(mid*mid < n){
            low = mid;
        }
        else{
            low = high = mid;
        }
    }
    cout<<low<<" , "<<low*low<<endl;
    cout<<high<<" , "<<high*high<<endl;
    return 0;
}