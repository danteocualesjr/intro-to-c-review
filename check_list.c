#include <stdio.h>

//is the list ascending? descending? or neither?

int main(void)
{

  int list[] = {7, 6, 5, 3, 0, -2};
  int listTwo[] = {3, 4, 6, 8, 9};
  int listThree[] = {5, 3, 7, 9, 4, 8, 12};

  int len1 = sizeof(list) / sizeof(list[0]);
  int len2 = sizeof(listTwo) / sizeof(int);
  int len3 = sizeof(listThree) / sizeof(int);

  char flag = 'y';
  // printf("%d %d\n", len1, len2);
  for (int i = 1; i < len1; i++)
  {
    int temp = list[i - 1];
    if (list[i] > temp)
    {
      flag = 'a';
    }
    else if (list[i] < temp)
    {
      flag = 'n';
      break;
    }
  }

  for (int i = 1; i < len1; i++)
  {
    int temp = list[i - 1];
    if (list[i] < temp)
    {
      flag = 'd';
    }
    else if (list[i] > temp)
    {
      flag = 'n';
      break;
    }
  }

  if (flag == 'a')
  {
    printf("List is ascending\n");
  }
  if (flag == 'd')
  {
    printf("List is descending\n");
  }
  return 0;
}