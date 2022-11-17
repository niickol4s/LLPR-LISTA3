#include <stdio.h>

int main() {
	
	int N;
	int X;
	int check = 0;
	int checkN;
	
	scanf("%d", &N);
	
	for(int control = 0; control < N; control++) {
		scanf("%d", &X);
	}
	
	for(checkN = 1; checkN < X; checkN++) {
		if(X % checkN == 0) {
			check += checkN;
		} else if(check == X) {
			printf("eh perfeito\n");
		} else {
			printf("nao eh perfeito\n");
		}
	}
	
	return 0;
}
