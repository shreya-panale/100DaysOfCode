#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // My Code 
    int T,i,index,s1_index,s2_index;
    char s[10000];
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        index=s1_index=s2_index=0;
        char s1[5001]="\0",s2[5001]="\0";
        scanf(" %[^\n]s",s);
        
        while(s[index]){
            if(index%2==0 || index == 0){
                s1[s1_index++]=s[index++];
            }
            else {
                s2[s2_index++]=s[index++];
            }
        }
        printf("%s %s\n",s1,s2);
        
    }
    return 0;
}
