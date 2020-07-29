#include <stdio.h>
int combination(int n,int r);//declaring functions
int factorial(int num);
int permutation(int n, int r);
int main()
{
	//declaration
	char strings[20][20];
	int loop,n,r;
	
	printf("Enter total number of strings: ");
	scanf("%d",&n);
	
	printf("Enter strings...\n");
//read  the strings
	for(loop=0; loop<n; loop++)
	{

		getchar();
		scanf("%[^\n]s",strings[loop]);
	}
//print the string	
	printf("\nStrings are...\n");
	for(loop=0; loop<n; loop++)
	{
		printf("%s\t",strings[loop]);
	}
	printf("\nnumber of words in a combination ");
	scanf("%d",&r);
	printf("total no.of combinations = %d\n", permutation(n, r));  
	return 0;
}
//calulating permutation
int permutation(int n, int r)
	{
         return factorial(n) / factorial(n-r);
	}
//calculating combination
int combination(int n, int r)
	{
  	  return permutation(n, r) / factorial(r);
	}
//calculating factorial	
int factorial(int num)
	{
  	  int fact = 1;

  	  while(num > 0)
   		 {
    		    fact *= num;
   		    num--;
        }

  
  return fact;
}

