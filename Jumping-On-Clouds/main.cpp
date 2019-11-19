#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c) {
    int cont=0,jumps=0;
    for(int i=1;i<c.size();i++){
        if(c[i]==1){
            jumps+=(cont/2)+(cont%2);
            cont=1;
        }else if(c[i]==0){
            cont++;
        }
    }
    if(cont!=0)
        jumps+=(cont/2)+(cont%2);
    return jumps;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int n;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int result = jumpingOnClouds(c);

    cout << result << "\n";

    return 0;
}