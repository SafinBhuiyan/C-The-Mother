#include<stdio.h>
int main()
{
    double hour,min,angle;
    scanf("%lf%lf",&hour,&min);
    angle=0.5*(60*hour-11*min);
    if(angle>180)
        angle=360-angle;
    printf("%.7lf\n",angle);
  return 0;
}
