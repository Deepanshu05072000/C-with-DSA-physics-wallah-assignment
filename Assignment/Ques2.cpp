#include <iostream>
using namespace std;

float area(int r)
{
    float pie = 3.14;
    float A = pie*r*r;

    return A;
}

float Circumf(int r)
{
    float pie= 3.14;
    float circum = 2*pie*r;

    return circum;
}

int main()
{
    float r;

    cout<<" Enter the value of Radius:-"<<endl;
    cin>>r;

    float Area= area(r);

    float circumference = Circumf(r);

    cout<< Area<<endl;
    cout<< circumference <<endl;

    return 0;

}