#include <stdio.h>
int main(int argc, char const *argv[]) {
    int choice;
    printf("Enter number for the month");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("31 Days\n" );
                break;
        case 2:printf("28/29 Days\n" );
                break;
        case 4:
        case 6:printf("30 Days \n" );
                break;
    }
    return 0;
}
