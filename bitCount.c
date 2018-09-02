/*/ Nickolas Decker /*/

#include <stdio.h>

int bitCount (unsigned int n);

int main ( )
{
printf ("# 1-bits in base 2 representation of %u = %d, should be 0\n",
0, bitCount (0));
printf ("# 1-bits in base 2 representation of %u = %d, should be 1\n",
1, bitCount (1));
printf ("# 1-bits in base 2 representation of %u = %d, should be 16\n",
2863311530u, bitCount (2863311530u));
printf ("# 1-bits in base 2 representation of %u = %d, should be 1\n",
536870912, bitCount (536870912));
printf ("# 1-bits in base 2 representation of %u = %d, should be 32\n",
4294967295u, bitCount (4294967295u));
return 0;
}

int bitCount (unsigned int n)
{
int count = 0;
while(n) {
count++;
n&= (n - 1);
}
return count;
}