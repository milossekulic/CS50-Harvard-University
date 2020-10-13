#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, string argv[])
{

    if (argc!=2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }


    if (isdigit(argv[1][0]) && argv[1][0]>=0)
    {
      int key = atoi(argv[1]);
      
      printf("plaintext: ");
      string text = get_string("");
      printf("ciphertext: ");
         for (int i=0; i<strlen(text); i++)
	        {
	            
		        if (isalpha(text[i]) && isupper(text[i]))
                        {
	                    	printf("%c", ((text[i]-'A')+key)%26 + 'A'); //text-string koji si uneo na pocetku
                        }        	
                if (isalpha(text[i]) && islower(text[i]))
                        {
                            printf("%c", ((text[i]-'a')+key)%26 + 'a');
                        }
                if (isspace(text[i]))
                        {
                            printf(" ");
                        }
                if (isdigit(text[i]))
                        {
                            printf("%c", text[i]);
                        }
                if (text[i]=='!' || text[i]=='.' || text[i]=='?')
                        {
                            printf("%c", text[i]);
                        }
                            
                    
            }
            printf("\n");
            return 0;
    }



    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
