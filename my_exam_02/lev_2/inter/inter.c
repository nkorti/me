#include<unistd.h>
int inter(char *str,char c,int len)
{
    int i = 0;

    while(str[i] && (i < len || len == -1))
            if(str[i++] == c)
            return(1);
        return(0);
}

int main(int ac ,char **av)
{
     if(ac == 3)
     {
        int i = 0;
        while (av[1][i])
        {
            if(!inter(av[1],av[1][i],i) && inter(av[2],av[1][i],-1))
                write(1,&av[1][i],1);
            i += 1;
        }
        
     }
     write(1,"\n",1);
     return(0);
}