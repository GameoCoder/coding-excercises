#include <stdio.h>
#include <stdbool.h>

void work(int h)
{
	int cnt = 1;
	for(int i = 0; i < h; i++){	//Row
		for(int j = 0; j < (h-cnt); j++){
			//Print spaces
			printf(" ");
		}
		for(int j = 0; j < cnt; j++){
			//Print "#"
			printf("#");
		}
		printf("  ");
		for(int j = 0; j < cnt; j++){
			printf("#");
		}
		for(int j = 0; j < (h-cnt); j++){
			printf(" ");
		}
		cnt++;
		printf("\n");
	}
}

int main(void)
{
	/*
	h = 4
	...#
	..##
	.###
	####
	*/
	while(true){
		printf("Height: ");
		int h = 0;
		scanf("%d", &h);
		if(h>=1 && h<=8){
			work(h);
			break;
		}
		else{
			continue;
		}
	}
}