# GetNextLine
a very first parsing tool

##How to use
Here is an example of use of the function:

#include "my.h"
#include "get_next_line.h"

int main (void)
{
  char * s = get_next_line (0) ;
  while (s) {
    my_putstr(s);
    my_putchar('\n');
    free (s);
    s = get_next_line (0);
  }
  return (0);
}
