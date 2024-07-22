#include <stdio.h>
void main() {
    int i;
    int num;
    printf("Enter score : ");
    scanf("%d", &num);
    if (num < 50)
        printf("Grade F\n");
    else if (num < 60)
        printf("Grade D\n");
    else if (num < 70)
        printf("Grade C\n");
    else if (num < 80)
        printf("Grade B\n");
    else if (num <= 100)
        printf("Grade A\n");
}