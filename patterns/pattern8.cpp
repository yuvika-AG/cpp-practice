/*
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;
void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ch='A'+(n-i);
        for (int j = 1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern(n);

    return 0;
}
