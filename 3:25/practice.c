
   
#include <stdio.h>

void main() {

    int s[] = {91, 86, 97};
    char c[] = {'A', 'B', 'C'};
    int i;

    
    for (i = 0; i < 3; i++)
    {
        printf("%d 학년 : 총점 = %d,등급 = %c\n",i+1,s[i],c[i]);
    }
    
}