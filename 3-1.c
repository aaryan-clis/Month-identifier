#include<stdio.h>
int main ()
{
    int i ;
    printf("Enter the Month number then this will show you month :-");
    scanf("%d",&i);
    switch (i)
    {
    case 1 :/* constant-expression */
        printf("The month is january "); /* code */
        break;
    case 2 : /*constant -expression  */
        printf("The month is Febuary");
        break;
    case 3 : /*constant - expression  */
        printf("The month is March ");
        break;
    case 4 : /*constant - expression  */
        printf("The month is April ");
        break;
    case 5 : /*constant - expression  */
        printf("The month is May ");
        break;
    case 6 : /*constant - expression  */
        printf("The month is June ");
        break;
    case 7 : /*constant - expression  */
        printf("The month is July ");
        break;
    case 8 : /*constant - expression  */
        printf("The month is August ");
        break;
    case 9 : /*constant - expression  */
        printf("The month is September ");
        break;
    case 10 : /*constant - expression  */
        printf("The month is October ");
        break;
    case 11 : /*constant - expression  */
        printf("The month is November ");
        break;
    case 12 : /*constant - expression  */
        printf("The month is December ");
        break;
    default:
        printf("It is invalid");
        break;
    }
    
    return 0;
}    