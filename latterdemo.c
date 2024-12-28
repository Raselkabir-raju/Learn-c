 #include<stdio.h>
 int main()
 {
    char lower;
    printf("Enter any Lowercase Letter : ");
    scanf("%c" ,&lower);

    printf("The uppercase letter : %c",lower-32);
 }