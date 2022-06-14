#include <unistd.h>

/**
 * _putchar - sends the character 
 * @c: The printing of the characters
 *
 * Return: 1 when there is sucess.
 * When error occurs, it returns -1, and the error is corrected accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
