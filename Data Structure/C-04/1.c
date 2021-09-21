#include <stdio.h>  
#include <stdlib.h>  
  
void main()
{
    char str[50];
		
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is : %s\n", str);
}      