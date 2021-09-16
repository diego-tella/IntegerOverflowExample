#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int money = 50;
	for(;;){
		printf("\n======================================================\n");
		printf("You have $ %d dollars\n", money);
		printf("What do you want? \n\n1)Buy something\n2)Sell something\n3)Exit\n");
		int choose = 0;
		scanf("%d", &choose);
		if(choose == 1){
			choose = 0;
			printf("\nWhat do you want to buy?\n\n1)Buy flag - $ 300000\n2)Buy integers - R$ 2\n");
			scanf("%d", &choose);
			if(choose == 1){
				if(money >= 300000){
					printf("Here is your flag: FLAG{N0T_TH4T_H4RD}");
				}
				else{
					printf("You don't have money enough");
				}
			}
			else if(choose == 2){
				if(money >= 2){
					money = money - 2;
					printf("You bought some integers for $ 2");	
				}
			}
		}
		else if(choose == 2){
			choose = 0;
			printf("\n1)Sell integers\n2)Sell null bytes\n");
			scanf("%d", &choose);
			if(choose == 1){
				printf("We don't need integers yet...\n");
			}
			else if(choose == 2){
				int price;
				printf("How much do you want to sell the null bytes for?\n");
				scanf("%d", &price);
				if(price <= 0){
					printf("You sold your null bytes for $ %d!\n", price);
					money = money + (price);
				}
				else{
					printf("We do not accept a price above 0 dollars\n");
				}
			}
		}
		else if(choose == 3){
			exit(0);
		}
		else{
			printf("Invalid option");
		}
	}
	return 0;
}
