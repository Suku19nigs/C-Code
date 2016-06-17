# include <stdio.h>
# include <math.h>
# define e 0.0001

double theta=4;
double prev_theta=0;
int m=4;
double t[4][2]={{-0.638,3},{-0.851,4},{1.277,-6},{2.979,-14}};

double deriv(double (*f)(double),double a)
{
    double deriv=0;
    double fi=f(a-e);
    double ff=f(a+e);
    deriv=(ff-fi)/(2*e);
    
    return deriv;
}

double hypo(double theta,double a)
{
    return theta*a;
}

double error(double theta)
{
    double err=0;
    int i;
    
    for(i=0;i<m;i++)
    {
        err+=pow((hypo(theta,t[i][0])-t[i][1]),2);
    }
    
    err/=(2*m);
    return err;
}

double min_theta(double alpha)
{
    int c=1;
    printf("%f\n",theta);
    do
    {
        prev_theta=theta;
        theta=prev_theta-alpha*deriv(error,prev_theta);
        printf("%f %d\n",theta,c);
        c++;
    }while(abs(theta-prev_theta)>0);
    
    return theta;     
}

void main()
{  
    double alpha=0.005;
    min_theta(alpha);
    //printf("%f",min_theta(alpha));
}

