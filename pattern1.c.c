/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n;
  scanf ("%d", &n);
  for (int i = 1; i <= n; i++)
    {
      if (i <= n / 2)
	{
	  for (int j = 1; j <= i; j++)
	    {
	      printf ("*");
	    }
	}
      else if (n % 2 != 0 && i == n / 2 + 1)
	{
	  for (int j = 1; j <= n / 2 + 1; j++)
	    {
	      printf ("*");
	    }
	}
      else
	{
	  for (int j = 1; j <= n - i + 1; j++)
	    {
	      printf ("*");
	    }

	}
      printf ("\n");
    }
  return 0;
}
