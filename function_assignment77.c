// Remove all vowels from a string
#include <stdio.h>
#include <string.h>
void remove_vowel()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    int len = 0;
    len = strlen(str);
    for (int i = 0; i <	 len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }        
    }
    str[len + 1] = '\0';
  printf("After deleting the vowels, the string will be : %s\n",str);
   
}
int main()
{
   remove_vowel();
return 0;
}
