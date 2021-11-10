#include <stdio.h>  
#include <string.h>  
   
void revstr(char *str1)  
{  

    int len, temp;  
    len = strlen(str1);  //take the size of string
      

    for (int i = 0; i < len/2; i++)  
    {  
        // temp is temporary variable
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  //swap minually
}  
      
    int main()  
    {  
        char str[100];  
        printf (" Enter the string: ");  
        gets(str); 
 
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  
