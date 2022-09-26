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
     return 0;

		/* code */
		break;
		case BYTE:
		if(atoi(string)<0 && atoi(string)<strtol("FF", NULL, 10)){
		if(strchr(string, 'X')!=NULL){
					return 1;
		// strtol(string, NULL, 16);
					//out of range
		}

				 }
				 else if(strchr(string, 'C')!=NULL){
					int count=0;

					for(int x= 2; x<strlen(string);x++){

						if(strcmp(&string[x],"'")!=0){
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
		return 3*strtol(string, NULL, 16);


	 
		/* code */
		break;
		case START:
		return strtol(0, NULL, 16);

	 
		/* code */
		break;
		case WORD:
		return 3;
		}
	  
		return 0;
		
		
		
		
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
	 if(strcmp ("ERROR", string)==0){
		  return ERROR;

	 }
	 else if((strcmp ("BYTE", string)==0)){
		return BYTE;

	 }else if((strcmp ("END", string)==0)){
		return END;
	 }else if((strcmp ("RESB", string)==0)){
		return RESB;
	 }else if((strcmp ("RESW", string)==0)){
		return RESW;
	 }else if((strcmp ("START", string)==0)){
		return START;
		
	 }else if((strcmp ("WORD", string)==0)){
		return WORD;
	 }
	 return -1;
	 

}

bool isStartDirective(int directiveType)
{
 if(directiveType== 5){
		return true;

 }
 else{
	return false;
 }


}


