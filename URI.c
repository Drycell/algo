#include <stdio.h>
#include <string.h>

int main(void)
{
	char url[101];
	int loop, len;
	int i, j;

	scanf("%d", &loop);
	
	for(i = 0; i < loop; i++)
	{
		scanf("%s", url);
		len = strlen(url);
		for(j = 0; j < len; j++)
		{
			if(url[j] == '%' && url[j+1] == '2')
			{
				switch(url[j+2])
				{
					case '0' :
						printf(" ");
						break;
					case '1' :
						printf("!");
						break;
					case '4' :
						printf("$");
						break;
					case '5' :
						printf("%%");
						break;
					case '8' :
						printf("(");
						break;
					case '9' :
						printf(")");
						break;
					case 'a' :
						printf("*");
						break;
					default :
						break;
				}
				j += 2;
			}
			else
				printf("%c", url[j]);
		}
		printf("\n");
	}

	return 0;
}
