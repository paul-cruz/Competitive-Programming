#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    stack<char> aux;
    char before;
    int contvalleys=0;
    for(int i=0; i<n;i++){
        if(!aux.empty()){
            if(aux.top()!=s[i]){
                before = aux.top();
                aux.pop();
            }else
                aux.push(s[i]);
        }else{
            if(before=='D')
                contvalleys++;
            aux.push(s[i]);
        }
    }
    if(before=='D' && aux.empty())
                contvalleys++;
    return contvalleys;
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";

    return 0;
}
