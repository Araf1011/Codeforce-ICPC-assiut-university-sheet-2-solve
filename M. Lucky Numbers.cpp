#include <iostream>
using namespace std;
int main()
{
int A, B;
    cin >> A >> B;
    bool found = false;
 
 
    for (int num = A; num <= B; num++) {
        int n = num;
        bool isLucky = true;
 
 
        while (n > 0) {
            int digit = n % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            n /= 10;
        }
 
 
        if (isLucky) {
            cout << num << " ";
            found = true;
        }
    }
 
 
    if (!found) {
        cout << "-1";
    }
}
