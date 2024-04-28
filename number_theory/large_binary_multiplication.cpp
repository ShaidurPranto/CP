#include<iostream>
using namespace std;

const long long M = 1e18 + 7;

long long binMul(long long a , long long b){
    long long answer = 0;
    while(b){
        if(b&1){
            answer = (answer + a) % M ;
        }
        a = (a + a) % M ;
        b = b >> 1;
    }
    return answer;
}

int main()
{
    cout<<binMul(30,22)<<endl;
    return 0;
}