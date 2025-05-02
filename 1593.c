#include <stdio.h>
#include <string.h>

#define MAX 1100  
int divide_by_2(char *num) {
    int len = strlen(num);
    char result[MAX];
    int carry = 0, idx = 0, digit;

    for (int i = 0; i < len; i++) {
        digit = carry * 10 + (num[i] - '0');
        result[idx++] = (digit / 2) + '0';
        carry = digit % 2;
    }

    
    int start = 0;
    while (start < idx - 1 && result[start] == '0') {
        start++;
    }
    result[idx] = '\0';

    strcpy(num, result + start);  
    return carry;  
}


int count_ones(char *num_str) {
    char num[MAX];
    strcpy(num, num_str);
    int ones = 0;

    while (!(strlen(num) == 1 && num[0] == '0')) {
        ones += divide_by_2(num);
    }

    return ones;
}

int main() {
    int T;
    char num[MAX];

    scanf("%d", &T);
    while (T--) {
        scanf("%s", num);
        printf("%d\n", count_ones(num));
    }

    return 0;
}
