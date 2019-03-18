#include<stdio.h>
#include<math.h>
float sinf(float x);
float sinf(float x)
{
    int i,j,fac=1,sign=1;
    float ans=0;
    for(i=1;i<=16;i+=2)
    {
        fac=1;
        for(j=1;j<=i;j+=2)
        {
            fac*=j;
        }
        ans=ans+(sign*pow(x,i))/fac;
        sign=(-1)*sign;
    }
    return ans;
}
int main()
{
    float x;
    printf("enter the angle x in radians:");
    scanf("%f",&x);
    printf("the value of sin x is %f",sinf(x));
}
