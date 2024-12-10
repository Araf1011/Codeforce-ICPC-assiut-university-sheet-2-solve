#include <iostream>
using namespace std;
int main()
{
    int n,x,i,j;
    long long sum;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        sum=1;
        cin >> x;
        for(j=1;j<=x;j++)
        {
            sum= sum * j;
        }
        cout << sum <<endl;
    }

    return 0;
}
