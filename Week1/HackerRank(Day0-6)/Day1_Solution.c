#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // My Code

    // Declaration
    int int2;
    double double2;
    char string2[100];
    
    // Read and save
    scanf("%d",&int2);
    scanf("%lf",&double2);

    // IMPORTANT - Adding a space before %[] solved my issue of not being able to read entire line at once on HackerRank
    scanf(" %[^\n]", string2);
    
    // Print
    printf("%d\n",i+int2);
    printf("%.1f\n",d+double2);
    printf("%s",s);
    printf("%s",string2);
    return 0;
}