#include <stdio.h>

int traverse(){
    int A[] = {1,3,5,7,8};
    int i = 0, n=5;   
    printf("The original array elements are :\n");
    for(i = 0; i<n; i++) {
        printf("A[%d] = %d \n", i, A[i]);
    }
    return 0;
}

int insert() {
    int A[10] = {1,3,5,7,8};
    int ele = 10, pos = 3, len = 5, i;
    // Increase size by 1
    len+=1;
    // shift elements forward
    i=len-1;
    while (i>=pos)
    {
        A[i] = A[i-1];
        i-=1;
    }
    // insert ele at pos
    A[pos - 1] = ele;

    printf("The array elements after insertion :\n");
    for(i = 0; i<len; i++) {
        printf("A[%d] = %d \n", i, A[i]);
    }
    return 0;
}

int delete(){
    int A[] = {1,3,10,5,7,8};
    int pos = 2, len = 6, i;
    // shift elements backward
    i=pos+1;
    while( i < len) {
      A[i-1] = A[i];
      i+=1;
   }
    // Decrease len by 1
    len-=1;
    
    printf("The array elements after deletion :\n");
    for(i = 0; i<len; i++) {
        printf("A[%d] = %d \n", i, A[i]);
    }
    return 0;
}

int search(){
    int A[] = {1,3,5,7,8};
    int i, n=5, search=7;
    printf("\nElement searching = %d\n",search); 
    for(i = 0; i<n; i++) {
        if(A[i]==search){
            printf("Element found at index = %d \n\n", i);
            return 0;
        }
    }
    return -1;
}

int update(){
    int A[] = {1,3,5,7,8};
    int i, n=5, index=0, update=70;
    printf("index = %d, update to %d\n",index,update); 
    A[index]=update;
    printf("The array elements adter updating\n");
    for(i=0;i<n;i++)
        printf("A[%d] = %d\n",i,A[i]);
    return 0;
}

int main() {
    traverse();
    insert();
    delete();
    search();
    update();
    return 0;
}

/* OUTPUT 
The original array elements are :
A[0] = 1 
A[1] = 3
A[2] = 5
A[3] = 7
A[4] = 8
The array elements after insertion :
A[0] = 1
A[1] = 3
A[2] = 10 
A[3] = 5
A[4] = 7
A[5] = 8
The array elements after deletion :
A[0] = 1
A[1] = 3
A[2] = 5
A[3] = 7
A[4] = 8

Element searching = 7
Element found at index = 3 

index = 0, update to 70
The array elements adter updating
A[0] = 70
A[1] = 3
A[2] = 5
A[3] = 7
A[4] = 8
*/
