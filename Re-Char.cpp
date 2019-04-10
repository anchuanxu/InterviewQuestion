//
// Created by 安传旭 on 2019/4/8.
//
char* reverseString(char* s) {
    int sz = strlen(s);
    int i = 0, j = sz - 1;
    char c;
    for(i,j; i<j; i++,j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    return s;
}

