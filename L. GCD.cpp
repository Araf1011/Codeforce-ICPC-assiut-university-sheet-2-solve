#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n=0;
    cin >> a >> b;
    for(i=1;i<=b;i++){
        if(a%i==0 && b%i==0)
        {
            n=i;
        }
    } cout << n;
  return 0;
}
