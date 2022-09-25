#include "headers.h"

#define MOD_SIZE 10
#define SYMBOL_TABLE_SEGMENTS 10
#define SYMBOL_TABLE_SIZE 100

int computeHash(char* input);
void initializeSymbolTable(struct symbol* symbolTable[]);

int computeHash(char* symbolName)
{
  int hashValue=0;
	int i = 0;
	while(symbolName[i]!='\0'){
	 hashValue = symbolName[i]+ hashValue;
   i++;
	}
	return (int)(hashValue%MOD_SIZE*SYMBOL_TABLE_SEGMENTS);


}

void displaySymbolTable(struct symbol* symbolTable[])
{


}

void initializeSymbolTable(struct symbol* symbolTable[])
{
for(int i=0;i<SYMBOL_TABLE_SIZE; i++){
        symbolTable[i] =NULL;
				
    }
}

void insertSymbol(struct symbol* symbolTable[], char symbolName[], int symbolAddress)
{
      int key;
	    key =computerHash(symbolName);
      
      struct symbol *ptrMemory = malloc (sizeof(struct symbol));
      
      strcpy(ptrMemory->name, symbolName);
		  ptrMemory->address= symbolAddress;

      int target=key;

      while(symbolTable[key]!= NULL){
					if(strcmp (symbolTable[key]->name, ptrMemory->name)==0){
				   displayError(5,symbolTable[key]->name);
				   break;
					}
				
				key = key +1;
				

         key %=SYMBOL_TABLE_SIZE;
			
		}
			int actual = key;
			
	
      symbolTable[key]= ptrMemory;


      printf("Added %-20s to Symbol Table at  Index %-2d\n", symbolTable[key]->name, computerHash(symbolTable[key]->name), key);



}