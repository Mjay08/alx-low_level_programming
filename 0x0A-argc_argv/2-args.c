#include <stdio.h>

#include "main.h"

/**
* main - print all arguments recieved
* @argc: number of arguments
* @argv: array containing arguments
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)

		printf("%s\n", argv[k]);

	return (0);
}
