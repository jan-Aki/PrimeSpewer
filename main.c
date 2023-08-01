#include<stdio.h>
#include<math.h>

int main(){
long long i,num,sqrtnum;
long start;

printf("What number do you want to start at?\n");
scanf("%lld",&start);
printf("\n\n");

for(num=start;1;num++){
    if (num<0){break;}
    sqrtnum = sqrt(num);
    for(i=2;i<=sqrtnum;i++){
        if(num % i == 0){
            goto Marker;
        }
    }
    printf("%lld\n",num);
    Marker:
}
return 0;
}