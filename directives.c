#include "headers.h"

#define SINGLE_QUOTE 39

enum directives {
	ERROR, BYTE, END, RESB, RESW, START, WORD
};

int getMemoryAmount(int directiveType, char* string)
{


	 switch (directiveType)
	 {
	 case ERROR:


		/* code */
		break;
		case BYTE:
		if(strstr(string, 'X')){
					return 1;
		// strtol(string, NULL, 16);
					//out of range


				 }
				 else if(strstr(string, 'C')){
					int count=0;

					for(int x= 2; x<strlen(string);x++){

						if(string[x]!="'"){
							count+=1;


						}
					}
					
					
					return count; 

				 }

	 
		/* code */
		break;
		case END:
		
		
		return strtol(0, NULL, 16);
	 
		/* code */
		break;
		case RESB:
		return strtol(string, NULL, 16);
	 
		/* code */
		break;
		case RESW:
		return strtol(itoa((int)string*3), NULL, 16);


	 
		/* code */
		break;
		case START:
		return strtol(0, NULL, 16);

	 
		/* code */
		break;
		case WORD:
		return 3;

	 
		/* code */
		break;
	 
	 }
	  
		
		
		
		
	// 	if((strcmp (BYTE, string)==0)){
	// 			 if(strstr(string, 'X')){
	// 				return 1;
	// 	// strtol(string, NULL, 16);
	// 				//out of range


	// 			 }
	// 			 else if(strstr(string, 'C')){
	// 				int count=0;

	// 				for(int x= 2; x<strlen(string);x++){

	// 					if(string[x]!="'"){
	// 						count+=1;


	// 					}
	// 				}
					
					
	// 				return count; 

	// 			 }

	//  }else if((strcmp (END, string)==0)){
	// 	return strtol(0, NULL, 16);
	//  }else if((strcmp (RESB, string)==0)){
	// 	return strtol(string, NULL, 16);
	//  }else if((strcmp (RESW, string)==0)){
	// 	return RESW;
	//  }else if((strcmp (START, string)==0)){
	// 	return strtol(0, NULL, 16);
		
	//  }else if((strcmp (WORD, string)==0)){
	// 	return WORD;
	//  }
	


}

int isDirective(char* string) 
{
	 if(strcmp (ERROR, string)==0){
		  return ERROR;

	 }
	 else if((strcmp (BYTE, string)==0)){
		return BYTE;

	 }else if((strcmp (END, string)==0)){
		return END;
	 }else if((strcmp (RESB, string)==0)){
		return RESB;
	 }else if((strcmp (RESW, string)==0)){
		return RESW;
	 }else if((strcmp (START, string)==0)){
		return START;
		
	 }else if((strcmp (WORD, string)==0)){
		return WORD;
	 }

}

bool isStartDirective(int directiveType)
{
 if((strcmp (START, directiveType)==0)){
		return true;

 }
 else{
	return false;
 }


}


