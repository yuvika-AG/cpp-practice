/*eg:
1      1
12    21
123  321
12344321
  */
#include <iostream>
using namespace std;
void pattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = start + 1;
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            start=start-1;
            cout << start;
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
