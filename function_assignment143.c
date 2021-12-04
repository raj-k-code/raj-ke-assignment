// Count the total number of vowels and consonants in a string
#include <stdio.h>
#include <string.h>
#define str_size 100 
void string(){
    char str[str_size];
    int  vowel, cons, i;
     vowel = cons = i = 0;
       printf("Input the string : ");
        gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            vowel++;
        else 
            cons++;
                i++;
    }

    printf("Number of vowels in the string is : %d\n", vowel);
    printf("Number of consonants in the string is : %d\n", cons);

}
int main(){
  string();
return 0;
}
