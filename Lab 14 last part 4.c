#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Programmer Name:Muhammad Saad\nReg.No.:20MDELE163\n\n");
    char ch;
    int index=0;
    printf("Enter any string\n");
    while((ch=getchar())!='\n')
    {
        index++;
        switch(ch)
        {
        case 'a':
            printf("a is found at %d\n",index);
            break;
        case 'A':
            printf("A is found at %d\n",index);
            break;
        case 'e':
            printf("e is found at %d\n",index);
            break;
        case 'E':
            printf("E is found at %d\n",index);
            break;
        case 'i':
            printf("i is found at %d\n",index);
            break;
        case 'I':
            printf("I is found at %d\n",index);
            break;
        case 'o':
            printf("o is found at %d\n",index);
            break;
        case 'O':
            printf("O is found at %d\n",index);
            break;
        case 'u':
            printf("u is found at %d\n",index);
            break;
        case 'U':
            printf("U is found at %d\n",index);
            break;
        }
    }
    return 0;
}
