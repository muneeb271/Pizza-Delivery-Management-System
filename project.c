#include <stdio.h>
#include <string.h>

// Struct Definitions
struct PizzaTypes {
    int smallPortion, mediumPortion, largePortion, others, seekhkabab, cheesesauce, ThinCrust;
};

struct PizzaPrice {
    int smallPrice, mediumPrice, largePrice, seekhkababPrice, cheesesaucePrice, ThinCrustPrice;
};

// Function Prototypes
void ShowOrder(struct PizzaTypes pizza[], struct PizzaPrice priceperSize[], char articleNames[][100], int addonsPrice[]);

int main() {
    // Your main function code here...
    	printf("========================================================================\n");
	printf("=   O       O OOOOOO  O         OOOO    OOO    O O      O O  OOOOOO   =\n");
	printf("=   O       O O       O       O       O     O  O   O   O  O  O        =\n");
	printf("=   O   O   O OOOOOO  O      O       O       O O     O    O  OOOOOO   =\n");
	printf("=   O O   O O O       O       O       O     O  O          O  O        =\n");
	printf("=   O       O OOOOOO  OOOOOO    OOOO    OOO    O          O  OOOOOO   =\n");
	printf("========================================================================\n");
	printf("x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x\n");
	printf("*xo o o o o   OOO      OO       OO^OO       OO   OO O  ^ OOOOOO OOOOOO      O     *x\n");
	printf("*x    o     O     O    O  O   O  O^O  O   O  O   O   O O     O      O      O O    *x\n");
	printf("*x    o    O       O   O    O    O^O    O    O   OO O  O   O      O       O   O   *x\n");           
	printf("*x    o     O     O    O         O^O         O   O     O  O     O        OOOOOOO  *x\n");
	printf("*x    o       OOO      O         O^O         O   O     O OOOOOO OOOOOO  O       O *x\n");
	printf("x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x\n");
 int i=0,c=1,j=0,Option,price[24]={99,195,395,155,295,445,155,295,445,195,365,545,155,295,445,225,425,635,235,455,685,235,455,685},totalPrice=0,a[10];
 char name[20];
 char articleNames[12][100]={ 
  "Creamy Melt(Veg)",
  "Veggie Delight(Veg)",
  "Double Cheese(Veg)",
  "Paneer Tikka(Veg)",
  "Chilli Chicken(Non Veg)",
  "Chicken Fajita(Non Veg)",
  "Chicken Tikka Supreme(Non Veg)",
  "Chicken Dominator(Non Veg)",
  "Cheese Slice Veg",
  "Cheese Slice Non Veg",
  "Barbeque Chunks Veg",
  "Sausages Non Veg"
 };
 int addonsPrice[4]={29,29,119,129};
// int CheeseSliceVeg=29,CheeseSliceNonVeg=29,BarbequeChunksNonVeg=119,SausagesNonVeg=129;
 struct PizzaTypes pizza[100];
 struct PizzaPrice priceperSize[12];
 for(i=0;i<12;i++)
 {
  pizza[i].smallPortion=0;
  pizza[i].mediumPortion=0;
  pizza[i].largePortion=0;
  pizza[i].seekhkabab=0;
  pizza[i].ThinCrust=0;
  pizza[i].cheesesauce=0;
  pizza[i].others=0;
  
 }
 i=0;
 while(i<24)
 {
  priceperSize[j].smallPrice=price[i++];
  priceperSize[j].mediumPrice=price[i++];
  priceperSize[j].largePrice=price[i++];
  priceperSize[j].seekhkababPrice=50;
  priceperSize[j].cheesesaucePrice=95;
  priceperSize[j].ThinCrustPrice=40;
  j++;
 }
 do{
  if(c==1){
   printf("Enter\n1 - Veg Pizzas\n2 - Non-Veg Pizzas\n3 - Addons\n4 - Exit\n");
         scanf("%d",&Option);
   switch(Option)
   {
    case 1:
    {
     int subOption;
     printf("Enter\n1 - Creamy Melt\n2 - Veggie Delight\n3 - Double Cheese\n4 - Paneer Tikka\n5 - Exit\n");
     scanf("%d",&subOption);
     if(subOption!=5){
      int sizeOption;
              printf("Enter\n1 - Small\n2 - Medium\n3 - Large\n");
              scanf("%d",&sizeOption);
      if(sizeOption==1)
       pizza[subOption-1].smallPortion++;
      if(sizeOption==2)
                   pizza[subOption-1].mediumPortion++;
         if(sizeOption==3)
       pizza[subOption-1].largePortion++;
      printf("Want Stuffed Crusts\n1 - Seekh kabab\n2 - Cheese sauce\n3 - Thin Crust\n4 - No Need\n");
      int sCrust;
      scanf("%d",&sCrust);
      if(sCrust==1)
      pizza[subOption-1].seekhkabab++;
      else if(sCrust==2)
      pizza[subOption-1].cheesesauce++;
      else if(sCrust==3)
      pizza[subOption-1].ThinCrust++;
      
      if(subOption!=5)
      printf("Pizza has been Added to Cart effectively\n");
     }
     
     break;
     }
    case 2:
    {
     int subOption;
     printf("Enter\n1 - Chilli Chicken\n2 - Chicken Fajita\n3 - Chicken Tikka Supreme\n4 - Chicken Dominator\n5 - Exit\n");
     scanf("%d",&subOption);
     if(subOption!=5){
      int sizeOption;
              printf("Enter\n1 - Small\n2 - Medium\n3 - Large\n");
              scanf("%d",&sizeOption);
      if(sizeOption==1)
       pizza[subOption+4-3].smallPortion++;
      if(sizeOption==2)
                   pizza[subOption+4-2].mediumPortion++;
         if(sizeOption==3)
       pizza[subOption+4-1].largePortion++;
      printf("Want Stuffed Crusts\n1 - Seekh kabab\n2 - Cheese sauce\n3 - Thin Crust\n4 - No Need\n");
      int sCrust;
      scanf("%d",&sCrust);
      if(sCrust==1)
      pizza[subOption+4-3].seekhkabab++;
      else if(sCrust==2)
      pizza[subOption+4-2].cheesesauce++;
      else if(sCrust==3)
      pizza[subOption+4-1].ThinCrust++;
      if(subOption!=5)
      printf("Pizza has been Added to Cart effectively\n");
     }
     
     break;
    }
    case 3:
    {
     int subOption;
     printf("Enter\n1 - Cheese Slice Veg\n2 - Cheese Slice Non Veg\n3 - Barbeque Chunks Non Veg\n4 - Sausages Non Veg\n5 - Exit\n");
     scanf("%d",&subOption);
     if(subOption<5 && subOption>0)
         pizza[subOption+8-1].others++;
        if(subOption!=5)
      printf("Added to Cart effectively\n");
     break;
     }
     default:
     {
      printf("Invalid Choice\n");
      break;
     }
     } 
  }
  if(c==2)
  {
   int id,portionPizza,portionCrust,portion,wrongIdFlag=1;
   printf("Enter Id to change Portion\n");
   scanf("%d",&id);
   if(id>=0 && id<=11)
   {
    if(id>=0&&id<=7)
    {
     if(pizza[i].smallPortion>0||pizza[i].mediumPortion>0||pizza[i].largePortion||pizza[i].others>0||pizza[i].seekhkabab>0||pizza[i].cheesesauce||pizza[i].ThinCrust>0){
      printf("Enter\n1 - To Change Small Pizza Portion\n2 -Change Portion for Medium Pizza\n3 -Change Portion for Large Pizza\n4 -Change Portion for Crust\n5 - Exit\n");
      scanf("%d",&portionPizza);
      printf("Enter portion to change and to delete Enter 0\n");
      scanf("%d",&portion);
      if(portion>=0){
          if(portionPizza==1)
          pizza[id].smallPortion=portion;
          if(portionPizza==2)
          pizza[id].mediumPortion=portion;
          if(portionPizza==3)
          pizza[id].largePortion=portion;
          if(portionPizza==4)
          {
           printf("Enter\n1 - To Change Seekh kabab\n2 - Cheese sauce\n3 - Thin Crust\n4 - Exit\n");
           scanf("%d",&portionCrust);
           if(portionCrust==1)
           pizza[id].seekhkabab=portion;
           if(portionCrust==2)
           pizza[id].cheesesauce=portion;
           if(portionCrust==3)
           pizza[id].ThinCrust=portion;
          }
      }
      else{
       printf("Enter Portion greater than or equal to zero\n");
      }
     }
     else{
      printf("Id Not Found\n");
      wrongIdFlag=0;
     }
    }
    else{
     printf("Enter\n1 - To Change Portion of Cheese Slice(Veg)\n2 - To Change Portion of Cheese Slice(Non Veg)\n3 - To Change Portion of Barbeque Chunks(Non Veg)\n4 - To Change Portion of Sausages(Non Veg)\n5 - To Change Portion of  - Exit\n");
     scanf("%d",&portionPizza);
     if(portionPizza>=1 && portionPizza<=4)
     {
      printf("Enter portion\n");
      scanf("%d",&portion);
      pizza[id].others=portion;
     }
     
    }
    if(wrongIdFlag==1)
    {
                   printf("Portion has been Changed effectively\nRearranged Order is\n");
                   ShowOrder(pizza,priceperSize,articleNames,addonsPrice);
    }
       
   }
   else{
    printf("Please Enter Valid Id\n");
   }
  }
  if(c==4)
  {
   int id;
   printf("Enter Id to delete from Cart\n");
   scanf("%d",&id);
   pizza[id].smallPortion=0;
   pizza[id].mediumPortion=0;
   pizza[id].largePortion=0;
   pizza[id].others=0;
   pizza[id].seekhkabab=0;
   pizza[id].cheesesauce=0;
   pizza[id].ThinCrust=0;
    printf("Item has been Deleted effectively\nRearranged Order is\n");
     ShowOrder(pizza,priceperSize,articleNames,addonsPrice);
  }
  if(c==3)
  {
   ShowOrder(pizza,priceperSize,articleNames,addonsPrice);
  }
      
      printf("Enter\n1 - Add Item\n2 - Change Portion\n3 - View Cart\n4 - Delete from Cart\n Else any number to Calculate Price\n");
      scanf("%d",&c);
 }while(c==1 || c==2 || c==3 || c==4);
 printf("Final Order \n");
ShowOrder(pizza,priceperSize,articleNames,addonsPrice);
printf("Thanks for Shopping with us\n");
}

void ShowOrder(struct PizzaTypes pizza[100],struct PizzaPrice priceperSize[12],char articleNames[12][100],int addonsPrice[4])
{
 int totalPrice=0,i;
 printf("**List in Cart**\n");
 for(i=0;i<11;i++)
 {
  if(pizza[i].smallPortion>0||pizza[i].mediumPortion>0||pizza[i].largePortion||pizza[i].others>0||pizza[i].seekhkabab>0||pizza[i].cheesesauce||pizza[i].ThinCrust>0)
  {
   if(i>=0&&i<=7){
   printf("Id : %d\n",i);
      printf("Article Name : %s\n",articleNames[i]);
   if(pizza[i].smallPortion>0)
   printf("Small Size Portion: %d -> Price : %d\n",pizza[i].smallPortion,priceperSize[i].smallPrice*pizza[i].smallPortion);
   if(pizza[i].mediumPortion>0)
   printf("Medium Size Portion: %d -> Price : %d\n",pizza[i].mediumPortion,priceperSize[i].mediumPrice*pizza[i].mediumPortion);
   if(pizza[i].largePortion>0)
   printf("Large Size Portion: %d -> Price : %d\n",pizza[i].largePortion,priceperSize[i].largePrice*pizza[i].largePortion);
   if(pizza[i].seekhkabab>0)
   printf("Seekh Kabab Portion: %d -> Price : %d\n",pizza[i].seekhkabab,priceperSize[i].seekhkababPrice*pizza[i].seekhkabab);
   if(pizza[i].ThinCrust>0)
   printf("Thin Crust Portion: %d -> Price : %d\n",pizza[i].ThinCrust,priceperSize[i].ThinCrustPrice*pizza[i].ThinCrust);
   if(pizza[i].cheesesauce>0)
   printf("Cheese Sauce Portion: %d -> Price : %d\n",pizza[i].cheesesauce,priceperSize[i].cheesesaucePrice*pizza[i].cheesesauce);
   totalPrice+=pizza[i].smallPortion*priceperSize[i].smallPrice;
   totalPrice+=pizza[i].mediumPortion*priceperSize[i].mediumPrice;
   totalPrice+=pizza[i].largePortion*priceperSize[i].largePrice;
   totalPrice+=pizza[i].seekhkabab*priceperSize[i].seekhkababPrice;
   totalPrice+=pizza[i].cheesesauce*priceperSize[i].cheesesaucePrice;
   totalPrice+=pizza[i].ThinCrust*priceperSize[i].ThinCrustPrice;
  }
  else{   
   printf("Id : %d\n",i);
   printf("Article Name : %s\n",articleNames[i]);
   printf("Portion : %d\n",pizza[i].others);
   printf("Price : %d\n",pizza[i].others*addonsPrice[i-8]);
   totalPrice+=(pizza[i].others)*addonsPrice[i-8];
  }
 }     
  }
   printf("$$$$$$$$$$$$$$$$$$$-Total Price : %d-$$$$$$$$$$$$$$$$$$$\n",totalPrice);
}