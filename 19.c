#include <stdio.h>
#include <stdlib.h>

struct Home {
    int House_Number;
    char adress[100];
    char colour[10];
};

int main() {
    int n;
    printf("Please enter the number of homes in the locality: ");
    scanf("%d", &n);

    struct Home *ptr;
    ptr = (struct Home*) malloc(n * sizeof(struct Home));

    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0 ; i < n; i++) {
        printf("\nEnter the details for Home %d:\n", i+1);

        printf("House Number: ");
        scanf("%d", &ptr[i].House_Number);

        printf("Address (no spaces, max 99 chars): ");
        scanf("%99s", ptr[i].adress);

        printf("Colour (max 9 chars): ");
        scanf("%9s", ptr[i].colour);
    }

    printf("\n--- Locality Details ---\n");
    for(int i = 0 ; i < n; i++) {
        printf("House Number %d -> Address: %s, Colour: %s\n",
                ptr[i].House_Number, ptr[i].adress, ptr[i].colour);
    }

    free(ptr);
    return 0;
}
