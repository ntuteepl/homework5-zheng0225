#include <stdio.h>
#include <stdlib.h>

int main()
{   int f;
    float a;
    scanf("%d",&f);
    if(f<800)
    {

     a=f*0.9;}

    if(f>=800&&f<1500)
    {


       a=f*0.81;}

    if(f>=1500){

        a=f*0.79;
    }

        printf("%0.1f",a);














}
