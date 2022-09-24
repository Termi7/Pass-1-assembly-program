#include "headers.h"

#define COMMENT 35
#define INPUT_BUF_SIZE 60
#define NEW_LINE 10
#define SPACE 32
#define SYMBOL_TABLE_SIZE 100

void performPass1(struct symbol* symbolArray[], char* filename, address* addresses);
struct segment* prepareSegments(char* line);
void trim(char string[]);

int main(int argc, char* argv[])
{
	// Do not modify this statement
	address addresses = { 0x00, 0x00, 0x00 };
	// Your code should start here
  if (argc <  2) /* argc should be 3 for correct execution */
    {
					displayError(0, argv[0]);    
        	exit(1);
    }
    

    else{

			struct symbole* symbolArray[SYMBOL_TABLE_SIZE];
			initializeTable(symbolArray);

			performPass1(symbolArray,argv[1],&addresses);
      





		}



}

void performPass1(struct symbol* symbolTable[], char* filename, address* addresses)
{
	// Do not forget to use the following functions:

	
	// memset() - fill the buffer array with the specified character
	char buffer [INPUT_BUF_SIZE];
	FILE *ptr;
	int index=0;
	ptr= fopen(filename,"r");
	int x = 0 ;
	

	if(!ptr){
		// printf("File Not found");
		displayError(1, filename);
		exit(1);
	}
	else{
   
	 	int i = 0;
		// printf("Hash Table Log\n");
		// printf("--------------\n");
		while ( fgets(buffer, INPUT_BUF_SIZE, ptr)){
			while(addresses>8000){
				//displayError(0, argv[0]); 
       


			

			if(strcmp(buffer[0],32)==-1){

				///blank record;

			}
			else if(strcmp(buffer[0],'#')){
				break;

      

			}
			
			 

			  struct segment *temp[] = prepareSegments(buffer);

			 if (isDirective(segment.first) ||isOpcode(segment.first)){
				////display the illegal symbol error message
				exit(1)
			 }
			 else if(isDirective(segment.second)){

				if(isStartDirective(segment.second)){
        //  address.start= segment.third;
				 strcpy( address.start,segment.third );
         address.current= segment.third;



				}
				else{
					address.increment =getMemoryAmount(segment.second, segment.third);




				}
			 }
			 else if(isOpcode(segment.second)){
				address.increment= 3;


			 }
			 else if(!isDirective(segment.second) && !isOpcode(segment.second)){

       /// display illegal opcode directive
			 exit(1)

			 }
			 else if(strlen(segment.first)>0){

				insertSymbol(symbolTable,segment.first, address.current);

			 }


			 address.current += address.increment;
			memset(buffer, '\0', INPUT_BUF_SIZE);
		

			 

		

	


			// printf("%s", buffer);
			// char *p = strstr(buffer,"\r");
			//  if(p!=NULL){
			// buffer[(int)(p-buffer)]='\0';
			// }

			// if(testRecord( buffer)){
			 
			// struct student temp = createStudent( buffer);
			// if(testStudentData(temp)){
			// 	insertStudent(hashTable,&temp );
			// }
			
      
			
			}
		}
		
	
	
	


		
		fclose(ptr);
	}
}
	


// Do no modify any part of this function
segment* prepareSegments(char* statement)
{
	struct segment* temp = malloc(sizeof(segment));
	strncpy(temp->first, statement, SEGMENT_SIZE - 1);
	strncpy(temp->second, statement + SEGMENT_SIZE - 1, SEGMENT_SIZE - 1);
	strncpy(temp->third, statement + (SEGMENT_SIZE - 1) * 2, SEGMENT_SIZE - 1);

	trim(temp->first);
	trim(temp->second);
	trim(temp->third);
	return temp;
}

// Do no modify any part of this function
void trim(char value[])
{
	for (int x = 0; x < SEGMENT_SIZE; x++)
	{
		if (value[x] == SPACE)
		{
			value[x] = '\0';
		}
	}
}