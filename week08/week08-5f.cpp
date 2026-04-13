// week08-5f.cpp SOIT107 Base 017 
# include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a - b*6;
    printf("%d %d", ans/6, ans%6);
}
