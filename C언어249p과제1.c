#include <stdio.h>
int main()
{
	int i;
	
	for(i=0;;i++)
	{
		printf("%d ",60-i);

		if(i==60){
			printf("\n발사\n");
			break;
		}
		_sleep(100);
	}
}
