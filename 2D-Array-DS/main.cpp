#include <bits/stdc++.h>

using namespace std;


int hourglassSum(vector<vector<int>> arr) {
    int auxh=0,auxm=0,auxf=0, n=arr.size();
    vector <int> sum(16);
    for(int i=0;i<n;i++){
        for(int j=1;j<n-1;j++){
            if(i>=0 && i<=3){
                sum[auxh]+=arr[i][j-1]+arr[i][j]+arr[i][j+1];
                auxh++;
            }
            if(i>=1 && i<=4){
                sum[auxm]+=arr[i][j];
                auxm++;
            }
            if(i>=2 && i<=5){
                sum[auxf]+=arr[i][j-1]+arr[i][j]+arr[i][j+1];
                auxf++;
            }
        }
    }
    return *max_element(sum.begin(),sum.end());
}

int main()
{
    ofstream cout("output.txt");
    ifstream cin("input.txt");

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    return 0;
}