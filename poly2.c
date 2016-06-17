# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# define e 0.00001

int n=4;
double theta[4]={0,0,0,0};
double prev_theta[4]={0,0,0,0};
double temp_theta[4]={0,0,0,0};
int m=5;
double t[5][2]={{0,3},{2,13},{6,33},{9,48},{-10,-47}};

double hypo(double th[],double a)
{
    double h=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        h+=th[i]*pow(a,i);
    }
    
    return h;
}

double deriv_error(double (*f)(double[],double),double th[],int a)
{
    double de=0;
    int i;
    
    for(i=0;i<m;i++)
    {
        de+=(hypo(th,t[i][0])-t[i][1])*pow(t[i][0],a);
    }
    
    de/=m;
    return de;

}

double error(double th[])
{
    int i=0;
    double err=0;
    for(i=0;i<n;i++)
    {
        err+=pow((hypo(th,t[i][0])-t[i][1]),2);
    }
    return err;
}

void arr_copy(double* a,double b[])
{
    int i=0;
    for(i=0;i<n;i++)
    {
        *(a+i)=b[i];
    }
    
}

void arr_print(double a[])
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%f ",a[i]);
    }
}

void min_theta(double alpha)
{
    int c=1;
    int i;
    arr_print(theta);
    printf("\n");
    double* p;
    double e1,e2;
    do
    {
        e1=error(prev_theta);
        p=prev_theta;
        arr_copy(p,theta);
        for(i=0;i<n;i++)
        {
            temp_theta[i]=prev_theta[i]-alpha*deriv_error(hypo,prev_theta,i);
        }
        p=theta;
        arr_copy(p,temp_theta);
        e2=error(theta);
        if(e2<e1)
        {
            alpha+=alpha*0.03;
        }
        else if(e2-e1>e)
        {
            alpha-=alpha*0.5;
        }
        arr_print(theta);
        printf("%d %f\n",c,alpha);
        c++;
    }while(c<=1000000);
       
}

void main()
{  
    double alpha=0.01;
    min_theta(alpha);
    //printf("%f",min_theta(alpha));
}

