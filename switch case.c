#include<stdio.h>
int main()
{  
   printf("pick an item : \n1. Pasta, Rs 234\n2. Pizza, Rs 280\n3. Burger, Rs 190\n4. Salad, Rs 250\n5. French Fries, Rs 220");
   int choice=0;
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1: printf("You picked Pasta, Rs 234.");
   	break;
   	case 2: printf("You picked Pizza, Rs 280.");
	break;  	
	case 3: printf("You picked Burger, Rs 190.");
	break;
    case 4: printf("You picked Salad, Rs 250.");
    break;
    case 5: printf("You picked French Fries, Rs 220.");
    break;
    default: printf("Invalid choice");
   }
}
   
