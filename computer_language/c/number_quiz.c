#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i=0;
	int a;
	srand(time(NULL));
	i=rand() % 100;
	int count=1;
	printf("Let's start a game to get the right number\n");

	while(1)
	{
		printf("put the number that you thought: \n");
		scanf("%d",&a);
		if(a<i) printf("the answer that you wrote is smaller than true\n");
		else if(a>i) printf("the answer that you wrote is bigger than true\n");
		else 
		{
			printf("Ding Dong Dang\n");
			break;
		}
		count ++;
			
	}
	printf("it took you %d times to get an answer",count);
		
	return 0;
}
