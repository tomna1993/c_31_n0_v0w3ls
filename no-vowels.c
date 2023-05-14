#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
	// Check if there is any argument
	// If not print the usage of the program
	if(argc == 1)
	{
		printf("Usage: ./no-vowels word");
		// exit status 1 shows that the program stopped with error 
		return 1;
	}

	//Call replace function and print the result
	printf("%s\n", replace(argv[1]));
	return 0;
}

string replace(string word)
{
	for(int i = 0, length = strlen(word); i < length; i++)
	{
		switch (word[i])
		{
			case 'a':
			case 'A':
				word[i] = '6';
				break;
			
			case 'e':
			case 'E':
				word[i] = '3';
				break;
			
			case 'i':
			case 'I':
				word[i] = '1';
				break;
			
			case 'o':
			case 'O':
				word[i] = '0';
				break;

			default:
				break;
		}
	}

	return word;
}