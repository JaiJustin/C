#include<stdio.h>
void main( )

{



float v,u,a,t,s;

printf("Enter initial velocity:");

scanf("%f",&u);

printf("Enter final velocity:");

scanf("%f",&v);

printf("Enter acceleration:");

scanf("%f",&a);

printf("Enter time:");

scanf("%f",&t);

printf("Enter distance:");

scanf("%f",&s);

if(v==u+a*t)

{

printf("Equation1  v=u+at is true : L.H.S=R.H.S \n");

}





if(s==u*t+1/2*a*t*t)

{

printf("Equation2 s=ut+1/2at^2 is ture : L.H.S=R.H.S \n");

}




}
