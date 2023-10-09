# include <stdio.h>
int main()
{
    char ch;
    printf("enter a charactor: ");
    scanf("%c",&ch);

    // this program for only lover case charactor
    if((ch>='a' && ch<='z')&&(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
    {
        printf("%c is a vowel\n");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("%c is a consonant");
    }
    else
    {
        printf("this is not lower case charactor.plese enter charactor between a to z.");
    }
    return 0;
}