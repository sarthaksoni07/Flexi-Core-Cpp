#include <stdio.h>

void printarray(int arr[])
{
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void starting(int arr[], int x)
{
    for (int i = 6; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    printarray(arr);
}
void ending(int arr[], int x)
{
    arr[6] = x;
    printarray(arr);
}

void deleteelement(int arr[], int pos)
{
    for (int i = pos; i < 6; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[6] = 0;
    printarray(arr);
}

int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 0, 0};

    printf("Please Select Operation :\n I \n D\n");
    char choice;
    scanf(" %c", &choice);

    if (choice == 'I')
    {
        printf("please tell if you want to insert an element in the end or start of the array \n B \n E\n");
        char choice2;
        scanf(" %c", &choice2);
        if (choice2 == 'B')
        {
            int x;
            printf("enter the number you want to add :");
            scanf("%d", &x);
            starting(arr, x);
        }
        else if (choice2 == 'E')
        {
            int x;
            printf("enter the number you want to add :");
            scanf("%d", &x);
            ending(arr, x);
        }
    }
    else if (choice == 'D')
    {
        int x;
        printf("enter the position of element you want to deleted : ");
        scanf("%d", &x);
        if (x >= 0 && x <= 6)
            deleteelement(arr, x);
        else
            printf("Invalid position\n");
    }

    return 0;
}
