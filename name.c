#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    
   
    printf("Enter your first name: ");
    scanf("%s", firstName);
    

    printf("Enter your last name: ");
    scanf("%s", lastName);
    

    printf("Full name: %s %s\n", firstName, lastName);
    
    return 0;
}