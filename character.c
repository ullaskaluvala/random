	#include <stdio.h>
	#include <stdlib.h>

				int main()
			{
    			
				FILE * file;

    				char path[100];

				char ch;
    			
				int characters, words;


    
    				printf("Enter source file path: \n",path);
    
				scanf("%s", path);

    
    				file = fopen(path, "r");

 				 if (file == NULL)

			 {
        
				printf("Unable to open file\n");
     
			 }

				characters=0;
				words=0;
   
    
    				while ((ch = fgetc(file)) != EOF)
    
	
			{

       					++characters;

        				if (ch == '\n')

					   
				           ++words;
				         
                          }

    
                                        if (ch ==' ')
             
                          {
                      
                                          
                                         ++words;
    
                           }

    
                                         
 				    printf("Total number of characters = %d\n", characters);
 			            printf("Total number of words      = %d\n", words);
    
                                   fclose(file);

                                    return 0;
                           }
