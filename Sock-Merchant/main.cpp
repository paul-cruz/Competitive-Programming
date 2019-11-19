#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(),ar.end());
    stack<int> sockstack;
    for(int i=0;i<n;i++){
        if(!sockstack.empty() && sockstack.top()==ar[i]){
            sockstack.pop();
        }else{
            sockstack.push(ar[i]);
        }
    }
    return (n-sockstack.size())/2;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin>>ar[i];
    }

    int result = sockMerchant(n, ar);

    cout << result << "\n";
    return 0;
}