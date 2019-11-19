#include <bits/stdc++.h>

using namespace std;

#define lli long long int

long repeatedString(string s, lli n) {
    int size= s.length(), as=0;
    lli res=0;
    for(int i=0;i<size;i++){
        if(s[i]=='a')
            as++;
    }
    res=(n/size)*as;
    as=0;
    if(n%size!=0){
        for(int i=0;i<n%size;i++){
        if(s[i]=='a')
            as++;
        }
        res+=as;
    }
    return res;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin ("input.txt");
    string s;
    getline(cin, s);

    lli n;
    cin >> n;
    lli result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}