#include <stdio.h> 
int main()
{ 
    int start, end, i, j, flag;
    printf("Enter start and end: ");
    scanf("%d %d",&start ,&end);

    for (i = start; i <=end; i++) 
    { 
        if (i < 2)
        continue;

       flag = 1;
       
       for(j = 2; j < i; j++)
       { 
        if(i % j ==0)
        { 
            flag = 0;
            break;
        }
       }
       if(flag == 1)
        printf("%d", i);
    }
    return 0;
}