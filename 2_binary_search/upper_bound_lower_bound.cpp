#include<iostream>
#include<vector>
using namespace std;


int upperBound(vector<int> v , int target){
    int lower = 0;
    int higher = v.size() - 1;
    while(lower != higher){
        int mid = (lower+higher)/2;
        if(v[mid] <= target){
            lower = mid + 1;
        }
        else{
            higher = mid;
        }
    }
    if(v[lower] > target){
        return lower;
    }
    else{
        return -1;
    }
}

int lowerBound(vector<int> v,int target){
    int lower = 0;
    int higher = v.size() - 1;
    while(lower != higher){
        int mid = (lower+higher)/2;
        if(v[mid]<target){
            lower = mid + 1;
        }else{
            higher = mid;
        }
    }
    if(v[lower] >= target){
        return lower;
    }else{
        return -1;
    }
}

int main()
{
    vector<int> v = {1,2,5,8,9,13,17};
    int index = lowerBound(v,31);
    cout<<"lower bound is: "<<(index >= 0 ? v[index] : -1)<<endl;    
    return 0;
}