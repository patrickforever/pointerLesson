#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  char strAry[] = "AaBbCcDdEeFfGgHhIiJj";
  char *aryPtr = strAry;
  int *intPtr = (int*)strAry;
  printf("\t[Line01] strAry=%s\n", strAry);
  printf("\t[Line02] aryPtr=%s\n", aryPtr);
  //printf("\t[LineX] *aryPtr=%s\n", *aryPtr); // Segment fault
  printf("\t[Line03] sizeof(aryPtr)=%d\n", sizeof(aryPtr));
  printf("\t[Line04] sizeof(*aryPtr)=%d\n", sizeof(*aryPtr));
  printf("\t[Line05] *aryPtr='%c'\n", *aryPtr);
  printf("\t[Line06] (*aryPtr)+1='%c'\n", (*aryPtr)+1);
  printf("\t[Line07] *(aryPtr+1)='%c'\n", *(aryPtr+1));
  printf("\t[Line08] sizeof(intPtr)=%d\n", sizeof(intPtr));
  printf("\t[Line09] sizeof(*intPtr)=%d\n", sizeof(*intPtr));
  printf("\t[Line10] intPtr=%s\n", intPtr);
  //printf("\t[LineX] *intPtr=%s\n", *intPtr); // Segment fault
  printf("\t[Line11] *intPtr='%c'\n", *intPtr); //because memory size is 4 byte
  printf("\t[Line12] *intPtr+1='%c'\n", *intPtr+1);
  printf("\t[Line13] *(intPtr+1)='%c'\n", *(intPtr+1));




  return 0;


}
