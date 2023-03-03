#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray123");
    int k,n;
    pt>>k>>n;
    int a[n],b[n],c[n];
    //a[n] is the original array.
    //b[n] shows the respectively lengths of series.
    //c[n] shows the elements in the series.
    for(int i=0;i<n;i++)
    {
        pt>>a[i];
    }
    int ctr=1;
    //ctr---the length of b[n].
    b[0]=1;
    c[0]=a[0];
    for(int i=1;i<n;++i)
        if (a[i-1]==a[i])
            ++b[ctr-1];
        else
        {
            b[ctr]=1;
            c[ctr]=a[i];
            ++ctr;
        }
    int sum_between=0;
    if(k>1)	
	{
		for(int j=1;j<=k-1;j++)
    	{
        	sum_between+=b[j];
    	}
	}
    if(ctr>k)   //swap
    {
        for(int i=0;i<b[k];i++)     //series k->series 1
            pt<<c[k];
        for(int i=b[k];i<b[k]+sum_between;i++)
            for(int h=b[0];h<b[0]+sum_between;h++)
                pt<<a[h];
        for(int i=b[k]+sum_between;i<b[0]+sum_between+b[k];i++)
            pt<<c[0];
        for(int i=b[0]+sum_between+b[k];i<n;i++)
            pt<<a[i];
    }
    else
    {
        for(int i=0;i<n;i++)
            pt<<a[i];
    }
}
