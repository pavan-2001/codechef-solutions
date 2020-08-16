#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        while (n)
        {
            if (n % 10 == 4)
                c++;
            n /= 10;
        }
        cout << c << endl;
    }
    return 0;
}