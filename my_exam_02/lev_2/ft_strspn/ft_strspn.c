#include<stdlib.h>
int check_char(char c,const char *charset)
{
    int i = -1;
    while(charset[++i])
        if(charset[i] == c)
            return(1);
        return(0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        if(!check_char(s[i],accept))
            return(i);
        i++;
    }
    return(i);


}
int main()
{
    char s[] = "borti";
    char accept[] = "kotti";
    printf("%d",ft_strspn(s,accept));
    printf("%d",strspn(s,accept));

}