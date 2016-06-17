# include <stdio.h>
# include <math.h>

int getLength(long long value) {
	int counter = 0;
	while (value != 0) {
		counter++;
		value /= 10;
	}
	return counter;
}

long long multiply(long long x, long long y) {
	int xLength = getLength(x);
	int yLength = getLength(y);

	// the bigger of the two lengths
	int N = (int)(fmax(xLength, yLength));

	// if the max length is small it's faster to just flat out multiply the two nums
	if (N < 10)
		return x * y;

	//max length divided and rounded up
	N = (N/2) + (N%2);

	long long multiplier = pow(10, N);

	long long b = x/multiplier;
	long long a = x - (b * multiplier);
	long long d = y / multiplier;
	long long c = y - (d * N);

	long long z0 = multiply(a,c);
	long long z1 = multiply(a + b, c + d);
	long long z2 = multiply(b, d);


    return z0 + ((z1 - z0 - z2) * multiplier) + (z2 * (long long)(pow(10, 2 * N)));

}

double Power(long long a,long long b) 
{  
    long long c=((long long)Power(10,9)+7)
    if (b==0) return 1; 
    if (a==0) return 0; 
    if (b%2==0) { 
        return ((long long)Power(multiply(a,a), b/2))%c; 
    } else if (b%2==1) { 
        return a*((long long)Power(multiply(a,a),b/2))%c; 
    } 
    return 0; 
}

void value(long long v)
{
    long c=(long)Power(10,9)+7;
    long long vt=v;
    long i=1;
    long long prod=1;
    
    for(;i<=v;i++)
    {
        prod=multiply(prod,(long long)Power(i,vt));
        vt--;
        prod%=c;
    }
    prod%=c;
    printf("%lld\n",prod);
}

void main()
{
int n;
scanf("%d",&n);
int i;

for(i=0;i<n;i++)
{
    long long v;
    scanf("%d",&v);
    value(v);
}
}

