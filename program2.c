#include <stdio.h>
#include <string.h>
 
void main()
{
	char s[100];
	int count = 0,i,alphabets=0,numbers=0;
        printf("Enter the string:\n");
//read the string input
	scanf("%[^\n]s", s);
//count number of words in the input string		
        for (i = 0;s[i] != '\0';i++)
         {
       		 if (s[i] == ' ' && s[i+1] != ' ')
            	 count++;    
   	 }
        printf("Total words -  %d\n", count + 1);

	for(i=0;s[i];i++)  
   	 {
// If the ASCII value of s[i] is in the range between 65 to 90 or 97 to 122 then increase the alphabets count by 1.  	
	
		if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
        	  alphabets++;

// If the ASCII value of s[i] is in the range between 48 to 57 then numbers count will be increased by 1.
      		 
		 if(s[i]>=48 && s[i]<=57)
       		  numbers++;
 	 }
//print the count of alphabets

	printf("Alphabets - %d\n",alphabets);

//print the count of numbers

	printf("Numbers - %d\n",numbers);
    

}

