#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PileFonc.c"

int main(){

	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("|	######                                                                                        |\n");
	printf("| 	#     #  #  #       ######       ####   #    #    ##    #  #    #  #    #  ######  ######     |\n");
	printf("|  	#     #  #  #       #           #    #  #    #   #  #   #  ##   #  ##   #  #       #          |\n");
	printf("|  	######   #  #       #####       #       ######  #    #  #  # #  #  # #  #  #####   #####      |\n");
	printf("|  	#        #  #       #           #       #    #  ######  #  #  # #  #  # #  #       #          |\n");
	printf("|  	#        #  #       #           #    #  #    #  #    #  #  #   ##  #   ##  #       #          |\n");
	printf("|  	#        #  ######  ######       ####   #    #  #    #  #  #    #  #    #  ######  ######     |\n");
	printf("|-----------------------------------------------------------------------------------------------------|\n");
	printf("|                                                                                                     |\n");
	printf("| 1- Ajouter une expression, et verifier les parenth%cses.                                             |\n",138);
	printf("|                                                                                                     |\n");
	printf("| 2- Cr%cdits.                                                                                         |\n",130);
	printf("|                                                                                                     |\n");
	printf("| 3- Quitter                                                                                          |\n");
	printf("|                                                                                                     |\n");
	printf("-------------------------------------------------------------------------------------------------------\n");

	while (1!=0){

	int choice;
	scanf("%d",&choice);

	switch(choice){
		case 1 : {
            ajouter_exp();
			break;
		}
	     case 2 : {
	              printf(" Realis%c par: \n",130);
	              printf("CHAFI Brahim.\n");
	             break;
	           }
	     case 3 : {
	     	exit(EXIT_FAILURE);
			break;
            }
         }
    }
}



