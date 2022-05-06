#include <stdio.h>
int my_strlen(char const *str);

int main(void) {
    char *x = "abdfcd";
    int i;
    i = my_strlen(x);
    printf("%d", i);
    return 0;
}

int my_strlen (char const *str) {
    int i = 0;
    while(str[i] != '\0')
    {
    
        i++;
    }
    
    return i;
}