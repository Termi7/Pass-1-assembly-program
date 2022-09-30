#include "headers.h"

#define SINGLE_QUOTE 39

enum directives {
	ERROR, BYTE, END, RESB, RESW, START, WORD
};

int getMemoryAmount(int directiveType, char* string)
{char hex[80];
		int temp =0;


	 switch (directiveType)
	 {
	 case ERROR:
     return 0;

		/* code */
		break;
		case BYTE:
		//strtol("FF", NULL, 16)
		
		if(strchr(string, 'X')!=NULL){
			if(atoi(string)<0 || atoi(string)>255){
		
		displayError(8, string);
		exit(1);
		}else{
	return 1;
		}
				
		// strtol(string, NULL, 16);
					//out of range
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
		
		
		return 0;
	 
		/* code */
		break;
		case RESB:
		
		// temp =strtol(string, NULL, 10);
		// sprintf( hex,"%X", temp);
// printf("%ld", strtol(hex, NULL, 16));

		// return strtol(hex, NULL, 16);
		// printf("%d", atoi(string));
		return atoi(string);
	 
		/* code */
		break;
		case RESW:
		// printf("%d", atoi(string));
		return 3*atoi(string);
		// return 3*strtol(string, NULL, 10);


	 
		/* code */
		break;
		case START:
		return 0;

	 
		/* code */
		break;
		case WORD:
		if(atoi(string)<-16777216 ||atoi(string)> 16777215){
			displayError(9, string);
			exit(1);
		}
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
	 
	  if((strcmp ("BYTE", string)==0)){
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
	 else{
 return ERROR;

	 }
	

	 
	
	 
	 

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


