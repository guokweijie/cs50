#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(int c, char letters[]);
int count_words(int b, char words[]);
int count_sentences(int d, char sentences[]);

int main(void)
{
    string s=get_string("Text: ");
    int n= strlen(s);
    double LE= count_letters(n, s);
    double WO= count_words(n,s);
    double SE= count_sentences(n,s);
    double L= (LE*100)/(WO);
    double S= (SE*100)/(WO);
    double ind =0.0588*L - 0.296*S - 15.8;
    int index= round(ind);
    if(index>=16)
    {
        printf("Grade 16+\n");
    }
    else if(index<1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int)index);
    }

}

int count_letters(int c, char letters[])
{
    int l=0;
    for(int i=0; i<c; i++)
    {
        if(letters[i]>='a' && letters[i]<='z')
        {
            l++;
        }
        if(letters[i]>='A' && letters[i]<='Z')
        {
            l++;
        }
    }
    return l;
}

int count_words(int b, char words[])
{
    int w=0;
    for(int a=0; a<b; a++)
    {
        if(words[a]==' ')
        {
            w++;
        }
        else if(words[a]=='.' && words[a+1]=='\0')
        {
            w++;
        }
        else if(words[a]=='!' && words[a+1]=='\0')
        {
            w++;
        }
        else if(words[a]=='?' && words[a+1]=='\0')
        {
            w++;
        }
    }
    return w;
}

int count_sentences(int d, char sentences[])
{
    int sen=0;
    for(int z=0; z< d; z++)
    {
        if (sentences[z]=='.' || sentences[z]=='?' || sentences[z]=='!')
        {
            sen++;
        }
    }
    return sen;
}
