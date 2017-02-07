#include "functions.hpp"

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }

    return(n * factorial(n-1));
}

int five(int in)
{
	return 5;
}
