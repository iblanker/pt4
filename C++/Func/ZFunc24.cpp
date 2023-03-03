#include "pt4.h"
#include "cmath"
using namespace std;

void Mean(double x,double y,double& amean,double& gmean)
{
    amean=0.5*(x+y);
    gmean=sqrt(x*y);
}

void Solve()
{
    Task("ZFunc24");

    double a[4],Amean[3],Gmean[3];
    for(int i=0;i<4;i++)
    {
    	pt>>a[i];
    	//Show(a[i]);
	}
    Mean(a[0],a[1],Amean[0],Gmean[0]);
    //Show(Amean[0]);
    Mean(a[0],a[2],Amean[1],Gmean[1]);
    Mean(a[0],a[3],Amean[2],Gmean[2]);
    for(int i=0;i<3;i++)
    {
    	pt<<Amean[i]<<Gmean[i];
    	
	}

}
