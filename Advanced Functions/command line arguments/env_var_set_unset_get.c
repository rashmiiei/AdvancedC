/* Program to demonstrate setting, getting, and unsetting environment variables */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
    int i;
    char *val;
    
    // setenv("name", "value", overwrite_flag)
    // Here: "array" = variable name, "batch of 23007" = value
    // overwrite_flag = 1 → overwrite existing value if already present
    setenv("array", "batch of 23007", 1);
    
    // getenv("name") → returns pointer to value string if variable exists
    val = getenv("array");
    if(val == NULL)
    {
        printf("Env not found \n");
        return 1;
    }
    printf("env value is %s\n", val);
    
    // unsetenv("name") → removes the variable from environment
    unsetenv("array");
    
    // Try to fetch again after unset
    val = getenv("array");
    if(val == NULL)
    {
        printf("Env not found \n"); // Expected after unset
        return 1;
    }
    
    return 0;
}