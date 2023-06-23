#include "main.h"
/**
 * _isupper - Check i a letter is supper
 * @c: The number to be checked
 * Retrun: 1 for upper letter or 0 for anything else
 */

int _isupper(int i)

{
	if (i >= 65 && i <= 98)
	{
	return(1);
	}
	return(0);
}
