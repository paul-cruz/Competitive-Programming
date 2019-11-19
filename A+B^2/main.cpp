#include <fstream>

using namespace std;

#define lli long long int 

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    lli a,b;
    cin>>a>>b;
    cout<<a+(b*b)<<"\n";
    return 0;
}
