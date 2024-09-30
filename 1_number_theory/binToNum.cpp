#include<iostream>
#include<vector>
using namespace std;

//assuming the first element of the vector to be the LSB , and the last one to be MSB
unsigned long long binToNum(vector<int> &bin){
    unsigned long long cur = 1, num = 0;
    for (int i = 0; i < bin.size() ; i++){
        if(bin[i] == 1)
            num += cur;
        cur *= 2;
    }
    return num;
}

int main()
{
    vector<int> v = {0,1,0,1,0,1};
    cout<<binToNum(v)<<endl;
    return 0;
}