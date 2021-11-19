#include <stdio.h>
/*made by lemalin1998*/

void automatic_fantan(const char *window_filename)

int main()
{
	char window_filename ="mmdata.db";
	automatic_fantan(const char *window_filename);
	return 0;
}

void automatic_fantan(const char *window_filename)
{
	FILE * open;
	open = fopen(window_filename, "r");
	scan = fscanf(open);
	
	if(scan == NULL)
	{
		printf("有本事你反弹啊");
	}
	
	do
	{
		printf("%c 无效", scan);
	}
	while(scan != NULL)
}