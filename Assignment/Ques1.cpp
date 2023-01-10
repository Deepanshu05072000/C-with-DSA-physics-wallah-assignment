#include <iostream>
using namespace std;

int square(int i)
{
    i = i*i;

    return i;
}

int main()
{
    for(int i=1; i<=5; i++)
    {
        cout<<square(i)<<endl;
    }

    return 0;

}