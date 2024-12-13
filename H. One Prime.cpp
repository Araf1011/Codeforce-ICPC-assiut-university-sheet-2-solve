#include <iostream>
using namespace std;
int main()
{
    int x,i,n=0;
    cin >> x;
    for(i=2; i<=(x-1); i++)
    {
        if(x%i==0)
        {
            n++;
            break;
        }
    }
    if(n==0)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;

}
