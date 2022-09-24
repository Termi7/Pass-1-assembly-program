#include "headers.h"

#define SINGLE_QUOTE 39

enum directives {
	ERROR, BYTE, END, RESB, RESW, START, WORD
};

int getMemoryAmount(int directiveType, char* string)
{


	 
	  if((strcmp (BYTE, string)==0)){
				 if(strstr(string, 'X')){
					return 1;

					//out of range


				 }
				 else if(strstr(string, 'C')){
					return   

				 }

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


