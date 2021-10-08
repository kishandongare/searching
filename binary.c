#include <stdio.h>
#include <stdlib.h>
int main()
{
  int first, last, middle, n, item, data[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers(ascending order)\n", n);

  for (int i = 0; i < n; i++)
    scanf("%d", &data[i]);

  printf("Enter value to find\n");
  scanf("%d", &item);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last)
  {
    if (data[middle] <item)
      first = middle + 1;
    else if (data[middle] == item) 
    {
      printf("%d found at location %d.\n", item, middle);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", item);

  return 0;
}
