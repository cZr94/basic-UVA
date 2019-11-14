#include <stdio.h>
#include <string.h>

int main()
{
    char arr[6];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",arr);
        int len=strlen(arr);
        if(len==3){
            int one=0,two=0;
            if(arr[0]=='o'){
               one++;
           }
           if(arr[1]=='n'){
               one++;
           }
           if(arr[2]=='e'){
               one++;
           }
           if(arr[0]=='t'){
               two++;
           }
           if(arr[1]=='w'){
               two++;
           }
           if(arr[2]=='o'){
               two++;
           }
           if(one>two){
               printf("1\n");
           }
           else{
               printf("2\n");
           }
        }else{
            printf("3\n");
        }
    }
    return 0;
}
