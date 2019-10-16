#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MCD(int a, int  b);

int main(void)
{
    char numero[6];
    int num=0;
    int i=0, j=0;
    char temp[6];
	int rebanadas=0;
	scanf("%s", numero);
    int s=strlen(numero);
    for(i=0; i<s; i++)
    {
        if(numero[i]!='.')
        {  
            temp[j]=numero[i];
            j++;
        }
    }
    num=atoi(temp);
	fflush(stdin);
	rebanadas=36000/MCD(36000,num);
	printf("%d\n",rebanadas);
	return 0;
}

int MCD(int a, int  b)
{
	int residuo=0;
	residuo=a%b;
	while(residuo>0)
	{
		if(a>b)
		{
			a=b;
			b=residuo;
			residuo=a%b;
		}
	}
	return b;
}
