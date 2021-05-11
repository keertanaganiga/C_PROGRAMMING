#include <stdio.h>

int
main ()
{
  int i, j, space;
  for (i = 4; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("*");
	}
      printf ("\n");
    }


  for (int i = 1; i <= 5; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("*");
	}
      printf ("\n");
    }
  return 0;
}
