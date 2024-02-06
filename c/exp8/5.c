#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 1010

bool flag = true;
char un;
long long chs = 0, sen = 0, words = 0;

char getch(FILE *file) {
    if (flag)
        return fgetc(file);
    flag = true;
    return un;
}

void ungetch(char c) {
    flag = false;
    un = c;
}

char getword(FILE *file, char *word, int max) {
    char c;
    while ((c = getch(file)) == ' ' || c == '\n');
    if (c != EOF) {
        *word = c;
        word++;

        chs++;

        if (!isalpha(c)) {
            *word = '\0';
            return c;
        }
        words++;
        for (; --max > 0; word++) {
            if (isalpha(*word = getch(file)))
                chs++;
            else {
                ungetch(*word);
                *word = '\0';
                break;
            }
        }
    }
    return c;
}

int main() {

    int cnt = 0;
    FILE *inputFile = fopen("input.txt", "r"); // Open input file
    FILE *outputFile = fopen("output.txt", "w"); // Open output file
    if (inputFile == NULL || outputFile == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    char c, word[MAX];
    while ((c = getword(inputFile, word, MAX)) != EOF) {
        if (c == '.')
            sen++;
    }
    fprintf(outputFile, "Characters: %lld\n", chs);
    fprintf(outputFile, "Words: %lld\n", words);
    fprintf(outputFile, "Sentences: %lld", sen);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}