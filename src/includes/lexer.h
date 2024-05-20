enum tokenType;

typedef struct token {
    int type;
    char* content;
} Token;

char* tokenize(char* contents);