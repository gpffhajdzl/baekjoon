#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char alp[30] = {0};
    int flag1=0,flag2=0;
    
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        alp[str[i]-97]++;
    }
    
    for(int i=0;i<26;i++){
		if(alp[i]==0) continue;
        if(alp[i]%2==0){
         flag1=1;
        }
        else{
            flag2=1;
        }
    }
    
    if(flag1&&flag2) printf("2");
    else if(flag1 && flag2==0) printf("0");
    else if(flag1==0 && flag2) printf("1");
    
    return 0;
}
