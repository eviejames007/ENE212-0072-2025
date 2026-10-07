#include <stdio.h>

int main()
{

 int counter=0;
int  correctPIN=4321;
int userPIN;
 while(counter<3){
printf ("Enter the user PIN: ");
scanf ("%d",&userPIN);
if (userPIN<999 || userPIN>9999)
{
    printf("Wrong length");
}
else if ( userPIN == correctPIN)
{
    printf("Access granted");
}else{
 printf("Access denied");

}
counter++;
if (counter<3){
            printf("Attempts remaining: %d\n\n", 3-counter);
            }}
    //output if all attempts failed
    printf("Account Login Failed!Too many  attempts!");

return 0;
}
