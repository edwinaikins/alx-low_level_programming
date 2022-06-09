#include <stdio.h>
#include <string.h>

struct cars{
	char carBrand[100];
	char type[100];
	char fuelType[10];
	float engineCapacity;
};

int main(){
	struct cars car1;
	struct cars car2;
	struct cars car3;
	printf("Please enter the ff info for your car: /n");
	int i;

	for (i=0; i<4; i++){
		printf("Enter car Brand: ");
		scanf("%c",&car1.carBrand[0]);

	}
}
