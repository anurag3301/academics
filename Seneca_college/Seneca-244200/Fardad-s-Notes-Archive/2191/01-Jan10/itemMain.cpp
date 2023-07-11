#include <cstdio>
using namespace std;

#include "tools.h"
#include "item.h"
int menu();
int main(){
   Item I[MAX_ITEMS];
   FILE* fptr = fopen("items.txt", "r");
   int i = 0;
   int done = 0;
   if (fptr){
      i = loadItems(I, fptr);
      fclose(fptr);
      do{
         switch (menu()){

         case 1:
            prnItems(I, i);
            break;
         case 2:
            searchItems(I, i);
            break;
         case 3:
            sortItems(I, i);
            printf("Items are now sorted\n\n");
            break;
         case 0:
            printf("Are you sure you want to exit? (Y)es/(N)o: ");
            if (yes()){
               done = 1;
            }
         }
      } while (!done);
   }
   else{
      printf("Could not open the file!\n");
   }
   return 0;
}


int menu(){
   printf("1- List all items\n"
      "2- Search for an item\n"
      "3- Sort Items\n"
      "0- Exit program\n> ");
   return getLimInt(0, 3);
}

