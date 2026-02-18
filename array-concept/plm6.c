//NO OF ELEMENTS DIVISIBLE BY A NUMBER

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]%k==0){
            c++;
        }
    }
    printf("%d is the no of divisible",c);
return 0;

}