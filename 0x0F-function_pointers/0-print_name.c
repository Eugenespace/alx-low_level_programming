#include<stdio.h>
/**
 * print_name - prints name
 * @name:name pointer
 * @f:function pointer
 *
 * Return: Always 0;
 */

void print_name(char *name, void (*f)(char *))
{
	 (*f)(name);
}
