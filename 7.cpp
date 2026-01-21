#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N=4;
    if(!(cin>>N)) return 0;
    
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=N-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
