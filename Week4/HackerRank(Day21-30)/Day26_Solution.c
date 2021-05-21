#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Rdate, Rmonth, Ryear, Ddate, Dmonth, Dyear, fine = 0;
    scanf("%d %d %d",&Rdate, &Rmonth, &Ryear);
    scanf("%d %d %d",&Ddate, &Dmonth, &Dyear);
    if(Ryear == Dyear){
        if(Rmonth == Dmonth){
            fine = (Rdate - Ddate)*15; 
        }   
        else if(Rmonth > Dmonth){
            fine = (Rmonth - Dmonth)*500;
        }
    }
    else if(Ryear > Dyear) {
        fine = 10000;
    }   
    printf("%d",fine);      
    return 0;
}
