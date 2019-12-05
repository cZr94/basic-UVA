#include <stdio.h>
#include <string.h>

int main()
{
	int tcase, loop;
	char A[100], B[100];
	scanf("%d", &tcase);
	getchar();
	getchar();
	while(tcase--)
    {
		gets(A);
		gets(B);
		char ASCII[128];

		int lenA = strlen(A);
        	int lenB = strlen(B);

		for(loop = 0; loop < 128; loop++)
			ASCII[loop] = loop;
		for(loop = 0; loop < lenA || loop < lenB; loop++)
        {
			if(loop >= lenA)
                A[loop] = ' ';
			if(loop >= lenB)
                B[loop] = ' ';

			ASCII[A[loop]] = B[loop];
		}

		puts(B);
		puts(A);

		while(gets(A))
		{
			if(A[0] == '\0')
				break;

			for(loop = 0; A[loop]; loop++)
			{
				printf("%c", ASCII[A[loop]]);
			}
			puts("");
		}
		if(tcase)
			puts("");
	}
    return 0;
}
