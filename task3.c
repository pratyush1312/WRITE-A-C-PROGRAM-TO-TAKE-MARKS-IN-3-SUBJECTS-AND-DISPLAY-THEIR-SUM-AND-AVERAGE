#include<stdio.h> 

main() 

{  

int marks[3];

int i=0; 

float avg=0.0;

int sum=0; 

char grade='F';

printf("Enter the marks in 3 subjects : "); 

for(i=0;i<3;i++)

{

scanf("%d",&marks[i]); 

}  

for(i=0;i<3;i++)

{

sum = sum+marks[i];	 

}



avg = sum/3; 

printf("\nThe average is : %f",avg) ;

if(avg>=91)

{ 

grade='S'; 

} 

else if(avg>=81)

{ 

grade='A'; 

} 

else if(avg>=71)

{ 

grade='B'; 

} 

else if(avg>=61)

{ 

grade='C'; 

} 

else

grade='F'; 

printf("\nThe grade alloted is : %c",grade); 

} 
