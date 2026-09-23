/* Input:
hello world how are you

Output:
helloworldhowareyou */

/* Logic: We use two pointers: 
read -> traverses the original string character by character. 
write -> points to the position where the next NON-SPACE character should be written. 
Both pointers initially point to the beginning of the same string. 

When read encounters a space: 
	- do NOT copy it 
	- do NOT move write 
	- only read moves ahead 

When read encounters a non-space character: 
	- copy that character to the write position 
	- move write ahead 
	- then move read ahead 

This effectively removes spaces by overwriting them with the next non-space characters. No separate array is required. */


#include <stdio.h>
int main() 
{
    char str[30]; 
    printf("enter a string : "); 
    scanf("%29[^\n]", str); 
    
    /* read: Used to scan every character of the original string. 
    write: Used to build the new string in the same array. It only moves when we actually keep a character. */ 
    char *read = str; 
    char *write = str; 
    
    /* Keep reading until we reach the original string's '\0'. */ 
    
    while (*read != '\0') 
    { 
        /* If the current character is NOT a space, copy it to the current write position. Example: "hello world" ^ read When read reaches 'w', write may still be at the position where the space was. So: *write = *read; effectively overwrites the space with 'w'. */ 
        
        if (*read != ' ') 
        {
            *write = *read; 
            
            /* Move write only after storing a valid character. If read sees a space, write does NOT move. This is what makes the string compact. */ 
            write++; 
        } 
        
        /* read moves for EVERY character, including spaces. It is responsible for scanning the entire string. */ 
        read++; 
    } 
    
    /* After all non-space characters have been written, write is pointing to the position where the new string must end. Add '\0' to terminate the modified string. */ 
    *write = '\0'; 
    
    printf("strings without space is : %s\n", str); 
    
    return 0; 

}
