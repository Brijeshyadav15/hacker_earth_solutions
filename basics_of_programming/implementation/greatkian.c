    #include <stdio.h>
     
    int main()
    {
    long long int n,i;
    long long int sum1=0,sum2=0,sum3=0;
    long long unsigned int a[100000];
    scanf("%lld",&n);
    for(i=0;i<n;i++){
    scanf("%llud ",&a[i]);
    }
    for(i=0;i<n;i+=3){
    sum1=sum1+a[i];
    }
    printf("%lld ",sum1);
     
    for(i=1;i<n;i+=3){
    sum2=sum2 + a[i];
    }
    printf("%lld ",sum2);
     
     
    for(i=2;i<n;i+=3){
    sum3=sum3 + a[i];
    }
    printf("%lld ",sum3);
    //printf("Hello World!\n");
    return 0;
    }
