#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;

    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuation = 0;
    int inWord = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isalpha(ch)) {
            char lower = tolower(ch);

            if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
                vowels++;
            else
                consonants++;

            if (!inWord) {
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0;
        }

        if (ch == '.' || ch == '?' || ch == '!')
            sentences++;

        if (ispunct(ch) && ch!='.' && ch!='?' && ch!='!')
            punctuation++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Punctuation marks: %d\n", punctuation);

    return 0;
}
