#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int a,b;
    int n;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    
    string words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(n=a;n<=b;n++)
    {
        if(n>=1 && n<=9)
        {
            cout<<words[n]<<endl;
        }
        else if(n>9)
        {
            if(n%2==0)
            {
                cout<<"even"<<endl;
            }
            else {
            cout<<"odd"<<endl;
            }
        }
        
    }
    return 0;
}