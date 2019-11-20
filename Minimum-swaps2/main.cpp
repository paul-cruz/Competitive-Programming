#include <bits/stdc++.h>

using namespace std;

int minimumSwaps(vector<int> arr) {
    int cont=0,i=0;
    while(i<arr.size()){
        if(arr[i] != (i+1)){
            int index=arr[i];
            arr[i]=arr[index-1] xor arr[i];
            arr[index-1]=arr[index-1] xor arr[i];
            arr[i]=arr[index-1] xor arr[i];
            cont++;
        }else
            i++;
    }
    return cont;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int res = minimumSwaps(arr);

    cout << res << "\n";

    return 0;
}