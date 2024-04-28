#include<iostream>
using namespace std;

const int M = 1e9 + 7;

int binExp(int a,int b){
    int answer = 1;
    while(b){
        if(b & 1){
            answer = (answer * 1LL * a) % M ;
        }
        a = (a * 1LL * a) % M ;
        b = b >> 1;
    }
    return answer;
}

int main()
{
    cout<<binExp(10149587,810571)<<endl;
    return 0;
}