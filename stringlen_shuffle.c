/** Nickolas Decker **/
/** deckernickolas@gmail.com **/

#include <stdio.h>
move(int array[20], int n, int m) {
int i = n;
int j = 0;
int k = 0;
while (k < (m + n)) {
if (( i < (m+n) && array[i] < = N[j] || (j == n)))
{ 
array[k] = array[i];
k++;
i++;
}
else {
  array[k] = array[i];
  k++;
  j++;
}
}
}

void main() {
  int number[20], n, m, i;
  printf("how many number?");
  scanf("&d", &n);
  printf("input %d numbers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &number[i]);
  }
  i = 0;
  printf("how many place you want to move?");
  scanf("%d", &m);
  move(number, n, m);
  printf("now, they're: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", number[i]);
  }
  getchar();
  getchar();
  
  
  /** Problem one **/
  
  #include
  
  int length(char * p)
  {
    int n = 0;
    while(*(n+p)) n++;
    return n;
  }
  
  main() {
    int len;
    char str[20];
    printf("input string:");
    scanf("%s", str);
    len = length(str);
    printf("the length of string is " %d. ", len);
           getchar();
           getchar();
           }
         
    
