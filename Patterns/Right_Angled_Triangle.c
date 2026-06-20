/* 

* 
* * 
* * * 
* * * * 
* * * * *

*/


#include <stdio.h>

int main()
{
    int rows, cols;
    
    for(rows=1; rows<=4; rows++)
    {
        for(cols=1; cols <= rows; cols++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
