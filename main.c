#include<stdio.h>
#include<string.h>

void check_flag(int *v_flag, int *r_flag, int *i_flag, char **av, int *i){
    int j = 0;

    while(av[j] != NULL){
        if(strcmp(av[j], "-i") == 0){
            *i_flag = 1;
            (*i)++;
        }
        else if(strcmp(av[j], "-v") == 0){
            *v_flag = 1;
            (*i)++;
        }
        else if(strcmp(av[j], "-r") == 0){
            *r_flag = 1;
            (*i)++;
        }

        j++;
    }
}

int main(int ac, char **av){
    int r_flag = 0, v_flag = 0, i_flag = 0, i = 0;

    if(ac < 2){
        printf("the usage: rm <file1> <file2> ..!\n");
        return 0;
    }

    check_flag(&v_flag, &r_flag, &i_flag, av, &i);

    printf("the i_flag %d\nthe v_flag %d\nthe r_flag %d\nthe i %d\n", i_flag, v_flag, r_flag, i);

    while(av[i] != NULL){
        i++;
    }

    return 0;
}