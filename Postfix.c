#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */
int tracker=0;
char function;
char text[100];
int numbers[100];
int j=0;
int arrCounter;

int main()
{
while(1){
  fgets(text, MAX, stdin);  /*collect the string*/
  arrCounter =strlen(text);
if(arrCounter==2){          /*check to see if string is for termination*/
return 1;
}
  do{
  if(text[tracker]=='\n'){   /*Series of checks for each individual character along with their computation*/
  printf("%i\n", numbers[j-1]);
  break;
  }
  if(text[tracker]!=' '&&text[tracker]!='-'&&text[tracker]!='/'&&text[tracker]!='*'&&text[tracker]!='+'){
  numbers[j]=(int)(text[tracker]-48);

 j++;
  }

  if(text[tracker]=='+'){
  numbers[j-2]=numbers[j-2]+numbers[j-1];
  numbers[j-1]=0;
  j--;
  }
 if(text[tracker]=='-'){
  numbers[j-2]=numbers[j-2]-numbers[j-1];
  numbers[j-1]=0;
  j--;
  }

  if(text[tracker]=='*'){
   numbers[j-2]=numbers[j-2]*numbers[j-1];
  numbers[j-1]=0;
  j--;
  }
  if(text[tracker]=='/'){
  numbers[j-2]=numbers[j-2]/numbers[j-1];
  numbers[j-1]=0;
  j--;
  }
  tracker++;
 }while(1);

 for(int i=0;i<100;i++){     /*reset values and arrays*/
   text[i]==0;
  numbers[i]=0;
}

tracker=0;                  /*reset the variables*/
j=0;
arrCounter=0;


}
 }
