#include <stdio.h>
int main() {
char str[100];
int i, sum = 0;
printf("Enter a string: ");
gets(str);
for (i = 0; str[i] != '\0'; i++) {
sum += (int) str[i]; 
}
printf("The sum of ASCII values of all characters in the string is: %d", sum);
return 0;
}
