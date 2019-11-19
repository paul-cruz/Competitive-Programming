#include <fstream>
#include <algorithm>

using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n=0, skill = 0, diff=0,min_diff=100000;
    bool pr = 0, tr = 0;
    cin >> n;
    int p[n], t[n];

    for (int i = 0; i < n; i++)
        cin>>p[i];
    for (int i = 0; i < n; i++)
        cin>>t[i];

    for (int i = 0; i < n; i++)
    {
        if (p[i]<=t[i]){
            skill+=t[i];
            pr=1;
            diff = t[i] - p[i];
        }else if(t[i]<=p[i]){
            skill+=p[i];
            tr=1;
            diff = p[i] - t[i];
        }
        if(min_diff>diff)
            min_diff=diff;
    }

    cout << ((pr&&tr)? skill: skill-min_diff) << "\n";
    
    return 0;
}