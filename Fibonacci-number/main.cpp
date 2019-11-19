#include <fstream>

using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n,before=0, current=1,f=0;
    cin>>n;
    if (n<=2 && n>=0)
    {
            f=n;
    }else{
        for (int i = 0; i <=n; i++)
        {
            if(i!=0)
                f=current+before;
            before=current;
            current=f;
        }
    }
    cout << f << "\n";
    
    return 0;
}