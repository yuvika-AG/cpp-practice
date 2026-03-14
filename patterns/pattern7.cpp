/*
A
BB
CCC
DDDD
*/

#include <iostream>
using namespace std;
void pattern(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            char ch='A';
            cout << char(ch+i);
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
