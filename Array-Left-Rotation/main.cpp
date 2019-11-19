#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    int length = a.size();
    int n=d%length;
    vector <int> aux(length);
    for(int i=n,j=0;i<length;i++,j++)
        aux[j]=a[i];
    for(int i=0,j=length-n;i<n;i++,j++)
        aux[j]=a[i];
    return aux;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int n,d;
    cin >> n >> d;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }else{
            cout << "\n";
        }
    }

    return 0;
}
