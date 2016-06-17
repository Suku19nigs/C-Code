# include <stdio.h>
# include <math.h>

double value(double x)
{
double v=tan(x)-x;
return v;
}

int equality(double x,double y)
{
    if(abs(x-y)<=0.0000001)return 1;
    else return 0;
}

double errorcorr(double y)
{
    double err=y*y;
    int sgn=y>=0?1:-1;
    int k=1;
    double corr=sgn*err*k;
    return corr;
}

void findvalue(int n)
{
    double i;
    double prev;
    for(i=0;n!=0;)
    {
        double val=value(i);
        if(equality(val,0)==1)
        {
            printf("%lf\n",i);
            prev=i;
            i+=1;
        }
        else
        {
           double err=errorcorr(val);
           if(val>0)
           {
               if((i-err)<(prev+1)&&(i-err)>(prev))
               i+=1;
               
               else i-=err;
           }
           else 
           {
               if((i+err)<(prev+1)&&(i+err)>(prev))
               i+=1;
               
               else i+=err;
           }              
           continue;
        }
        n--;
     }
}    

void main()
{
printf("%lf\n",value(0));
printf("%lf\n",errorcorr(value(1)));
findvalue(3);
}