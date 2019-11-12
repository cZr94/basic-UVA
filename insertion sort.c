#include <stdio.h>
 
int main()
{
  int n, array[1000], loop, data, temp;         //n=input//
 
  printf("Enter number of elements: ");
  scanf("%d", &n);
 
  printf("Enter %d integers: ", n);
 
  for (loop = 0; loop < n; loop++)
    scanf("%d", &array[loop]);                  //insert data in array//
 
  for (loop = 1 ; loop <= n - 1; loop++) 
  {
    data = loop;
 
    while ( data > 0 && array[data-1] > array[data])
    {
      temp          = array[data];
      array[data   = array[data-1];
      array[data-1] = temp;
 
      data--;
    }
  }
 
  printf("Sorted list in ascending order: ");
 
  for (loop = 0; loop <= n - 1; loop++) {
    printf("%d ", array[loop]);
  }
 
  return 0;
}
