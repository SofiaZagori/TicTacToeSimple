
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	char a[10][10], S, O;
	int gr, st, PL,k,flag;
	flag=0;
	PL=1;
	
	//arxikopoiisi
	for (gr=0; gr<10; gr++){
		for (st=0; st<10; st++){
			a[gr][st]=' ';	
		}
	}
	
	do{	
	
		do{
		
				printf ("Play! Choose your place! Give one number for the line and one number for the column\n");
				printf ("Number for the line?\n");
				scanf ("%d",&gr);		
				printf ("Number for the column?\n");
				scanf ("%d",&st);				
					
			
					while(a[gr][st]!=' '){                                        // elegxw thesh
						printf ("This place is taken. Give other numbers");
						printf ("Number for the line?");
						scanf ("%d",&gr);		
						printf ("Number for the column?");
						scanf ("%d",&st);
					}
								
				k++;
				
				printf("Give letter\n");
				a[gr][st]=getchar();
				scanf("%c", &a[gr][st]);				
										
			
			printf("  ");                             //ektupwsi
			for (st=0; st<10; st++){
				printf("%d ", st);
			}
			printf("\n");
			
			for (gr=0; gr<10; gr++){
				printf("%d ", gr);
				for (st=0; st<10; st++){
					printf("%c ", a[gr][st]);	
				}
			printf("\n");
			}
			
			PL++;
		
			if (a[gr-1][st-1]=='S' && a[gr-1][st]=='O' && a[gr-1][st+1]=='S')
			flag = 1;
			if (a[gr-1][st-1]=='S' && a[gr][st-1]=='O' && a[gr+1][st-1]=='S')
				flag = 1;			
			if (a[gr+1][st-1]=='S' && a[gr+1][st]=='O' && a[gr+1][st+1]=='S')
				flag = 1;
			if (a[gr-1][st+1]=='S' && a[gr][st+1]=='O' && a[gr+1][st+1]=='S')
				flag = 1;
			if (a[gr][st-1]=='S' && a[gr][st]=='O' && a[gr][st+1]=='S')
				flag = 1;
			if (a[gr][st-1]=='S' && a[gr][st]=='O' && a[gr][st+1]=='S')
				flag = 1;				
			if (a[gr-1][st-1]=='S' && a[gr][st]=='O' && a[gr+1][st+1]=='S')
				flag = 1;
			if (a[gr+1][st-1]=='S' && a[gr][st]=='O' && a[gr-1][st+1]=='S')
				flag = 0;
			
		
		}while(flag==1 || PL<=100);           // ama to k 3eperasei ta 100 tote einai gemath h plaketa
		
		
			if (flag==1){
			printf ("You won!!!");
		}else 
			printf ("Next player!"); 
			
	}while (flag==0);
				
	
	return 0;
}

