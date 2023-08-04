#include "shell.h"
/**
* int_to_str - This function converts int to string
* @num: the integer to xonvert
* @str: the return string
* Return: void
*/
void int_to_str(int num, char *str)
{
int i, start = 0;
int sign = 1;
int end;
/*Handle negative numbers*/
if (num < 0)
{
sign = -1;
num = -num;
}

/* Convert each digit to a character*/
do {
str[i++] = num % 10 + '0';
num /= 10;
} while (num > 0);

/* Add the sign if it was negative*/
if (sign == -1)
{
str[i++] = '-';
}

str[i] = '\0';

/* Reverse the string*/
end = i - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
