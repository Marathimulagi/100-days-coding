#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    string words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if(n>=1 && n<=9)
    {
        cout<<words[n]<<endl;
    }    
    else{
        cout<<"Greater than 9"<<endl;
    }
     
    return 0;
}