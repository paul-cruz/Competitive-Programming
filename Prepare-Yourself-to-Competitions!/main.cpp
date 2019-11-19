#include <fstream>
#include <algorithm>

using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n=0, skill = 0, *Mp = 0, *Mt = 0;
    bool pr = 0, tr = 0;
    cin >> n;
    int p[n], t[n];

    for (int i = 0; i < n; i++)
        cin>>p[i];
    for (int i = 0; i < n; i++)
        cin>>t[i];
    
    Mp  = max_element(p,p+n);
    Mt = max_element(t,t+n);
    
    for (int i = 0; i < n; i++)
    {
        if(t[i]==*Mt && tr==0){
            if((n-(&p[n]-Mp))==(n-(&t[n]-Mt))){
                if(*max_element(p+i,p+n)>*max_element(t+i,t+n)){
                    skill+=t[i];
                }else{
                    skill+=p[i];
                    pr=1;
                }
            }else
                skill+=t[i];
            //skill+=t[i];
            tr=1;
        }else if(p[i]==*Mp && pr==0){
            skill+=p[i];
            pr=1;
        }else if (p[i]<=t[i]){
            skill+=t[i];
        }else if(t[i]<=p[i]){
            skill+=p[i];
        }
    }

    cout<< skill<< "\n";
    
    return 0;
}