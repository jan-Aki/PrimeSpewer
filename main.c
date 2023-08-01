#include<stdio.h>
#include<math.h>

int main(){
unsigned long long i,num,sqrtnum;
unsigned long long start;

printf("What number do you want to start at?\n");
scanf("%llu",&start);
printf("\n\n");

for(num=start;1;num++){
    if (num<0){break;}
    sqrtnum = sqrt(num);
    for(i=2;i<=sqrtnum;i++){
        if(num % i == 0){
            goto Marker;
        }
    }
    printf("%llu\n",num);
    Marker:
}
return 0;
}