#include <fstream>

using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, a0, a1, a2, f = 0;
    cin >> a0 >> a1 >> a2 >> n;
    if (n == 0)
        f = a0;
    else if (n == 1)
        f = a1;
    else if (n == 2)
        f = a2;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            f = a2 + a1 - a0;
            a0 = a1;
            a1 = a2;
            a2 = f;
        }
    }
    cout << f << "\n";

    return 0;
}