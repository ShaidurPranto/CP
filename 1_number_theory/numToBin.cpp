#include<iostream>
#include<vector>
using namespace std;

//assuming the first element of the vector to be the LSB , and the last one to be MSB
//the function returns a vector of size 64
vector<int> numtoBin(unsigned long long num){
    vector<int> arr(64, 0);
    unsigned long long mask = 1;
    for (int i = 0; i < 64; i++)
        if(num & (mask << i)) arr[i] = 1; 
    // reverse(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> v = numtoBin(5);
    for(auto i : v){
        cout<<i<<endl;
    }
    return 0;
}