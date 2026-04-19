/****************************************************************
 * Author: Josh Peters
 * Date: 04.19.2026
 * Purpose: Build a clone of the strlen standard library function
 ***************************************************************/

int strlen(char arr[])
{
  int i = 0;

  while (arr[i] != '\0')
    ++i;

  return i + 1;
}
