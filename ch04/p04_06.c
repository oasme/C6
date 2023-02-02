#include<stdio.h>
#include <string.h>

int main()
{
  char first_name[20], last_name[20];
  int len_first,len_last;

  printf("Please enter your first name:");
  scanf("%s",first_name);
  printf("Please enter your last name:");
  scanf("%s",last_name);
  len_first = strlen(first_name);
  len_last = strlen(last_name);

  printf("%s %s\n", first_name, last_name);
  printf("%*d,%*d\n", len_first, len_first, len_last, len_last);
  printf("%-*d,%-*d\n", len_first, len_first, len_last, len_last);

  /*printf("\"%s\",\"%s\"\n",first_name,last_name);
  printf("\"%20s\",\"%20s\"\n",first_name,last_name);
  printf("\"%-20s\",\"%-20s\"\n",first_name,last_name);
  printf("[%*s][%*s]", len_first+3, first_name, len_last+3, last_name);*/

  return 0;
}