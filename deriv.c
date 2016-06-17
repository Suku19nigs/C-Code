# include <stdio.h>
# include <math.h>
# define e 0.000001

double square(double a)
{
    return a*a;
}

double cube(double a)
{
    return a*a*a;
}

double nlog(double a)
{
    return log(a);
}

double deriv(double (*f)(double),double a)
{
    double deriv=0;
    double fi=f(a-e);
    double ff=f(a+e);
    deriv=(ff-fi)/(2*e);
    
    return deriv;
}

void main()
{
    printf("%f\n",deriv(square,2));
    printf("%f\n",deriv(cube,2));
    printf("%f",deriv(nlog,0));
}
