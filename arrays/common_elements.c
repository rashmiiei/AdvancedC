#include <stdio.h>

int main() {
    int size1, size2, i, j, k = 0;

    printf("Enter the size of array 1: ");
    scanf("%d", &size1);
    printf("Enter the size of array 2: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], common[size1 + size2];

    printf("Enter elements of array 1:\n");
    for (i = 0; i < size1; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2:\n");
    for (j = 0; j < size2; j++) 
	{
        scanf("%d", &arr2[j]);
    }

    printf("Common elements: ");
    for (i = 0; i < size1; i++) 
	{
        for (j = 0; j < size2; j++) 
		{
            if (arr1[i] == arr2[j]) 
			{
                // Check if already printed
                int alreadyPrinted = 0;
                for (int m = 0; m < k; m++) 
				{
                    if (common[m] == arr1[i]) 
					{
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted) 
				{
                    common[k++] = arr1[i];
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }

    return 0;
}