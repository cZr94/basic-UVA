#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char str[10001];
	int len, data, loop;

	while (1)
    {
		scanf("%s", str);
		if (strcmp(str, "0") == 0)
			return 0;

		len = strlen(str);
		loop = 0;
		data = 0;
		while (len > 0) {
			data += (str[loop] - '0') * (pow(2, len) - 1);
			len--;
			loop++;
		}
		printf("%d\n", data);
	}

	return 0;
}
