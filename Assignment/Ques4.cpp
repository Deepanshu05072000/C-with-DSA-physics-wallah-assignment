#include<iostream>
using namespace std;

int odd(int a, int b)
{
    for(a=1; a<b ; a+=2)
    {
        cout<<a<<endl;
    }
    
}

int main()
{
    int a , b ;
    cout<<" Enter the value of a :- "<<endl;
    cin>>a;

    cout<<"Enter the value of b :- "<<endl;
    cin>>b;
    int ans= odd(a,b);

   // cout<<ans<<endl;

    return 0;

}