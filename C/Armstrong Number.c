#include<stdio.h>  
 int main()   
 
{    

int n;
int sum = 0;
int i;
int temp;
printf("Enter any number=");    
scanf("%d",&n);

temp=n;    
while(n>0)    {
    
i=n%10;    

sum=sum+(i*i*i);    

n=n/10;    

    
}    
if(temp==sum) {   
printf("armstrong  number ");    
}
else{    
printf("not armstrong number");    
}
return 0;  

}   