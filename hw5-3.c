#include <stdio.h>
#include <stdlib.h>

int main()
{   int f;
    float a,b;//f=工時 a=時薪
    scanf("%d",&f);
    scanf("%f",&a);
       if (f<=60)
       {

          b =a*f;


       }
       if(f>60&&f<=120)
       {

          b=60*a+(f-60)*a*1.33;


       }
     if(f>120)
       {

          b=60*a+60*1.33*a+(f-120)*a*1.66;


       }











        printf("%0.1f",b);














}
