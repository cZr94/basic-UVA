///heavily modified version of link: http://sound-system-79.blogspot.com/2016/02/uva-11048-automatic-correction-of.html to match the ANSI c version

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum{nr_words_max = 10000} ;            ///check why i'vs used enum instead of #define... link: https://stackoverflow.com/questions/1712592/variably-modified-array-at-file-scope
enum{nr_chars_max = 25};

char words[nr_words_max + 1][nr_chars_max + 1], sorted_words[nr_words_max + 1][nr_chars_max + 1];

int compare_word(const void* i, const void* j)
{
  return strcmp((const char*)(i),(const char*)(j));         ///C language doesnt support reinterpret_cast so i had to change the code accordingly link:https://stackoverflow.com/questions/1382051/what-is-the-c-equivalent-for-reinterpret-cast
}

int correct_or_misspelling(const char* w, const char* s)
{
  while (*w && *s && *w == *s)
    w++, s++;
  if (!*w && !*s)
    return 1;
  else if (!strcmp(w + 1, s) || !strcmp(w, s + 1) || !strcmp(w + 1, s + 1))
    return 0;
  else if (*(w + 1) == *s && *w == *(s + 1) && !strcmp(w + 2, s + 2))
    return 0;
  else
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
        strcpy(sorted_words[i], words[i]);    ///made a copy 
    }

    qsort(sorted_words, n, nr_chars_max + 1, compare_word);

    int q;
    scanf("%d", &q);
    while (q--)
    {
        char s[nr_chars_max + 1];
        scanf("%s", s);
        if (bsearch(s, sorted_words, n, nr_chars_max + 1, compare_word)) /// here a bsearch is done using the link: https://www.tutorialspoint.com/c_standard_library/c_function_bsearch.htm
            printf("%s is correct\n", s);
        else
        {
            int misspelling = -1;
            for (int i = 0; i < n; i++)
            if (correct_or_misspelling(words[i], s) == 0)     ///called the function correct_or_misspelling
            {
                misspelling = i;
                break;
            }
            if (misspelling != -1)
                printf("%s is a misspelling of %s\n", s, words[misspelling]);
            else
                printf("%s is unknown\n", s);
        }
    }

  return 0;
}
