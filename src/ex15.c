#include <stdio.h>

void printfunc(int *, char **);

int main(int argc, char *argv[]){

    int ages[] = {23, 14, 23, 0};
    char *names[] = {
        "abc", "efd", "hig", "sdfs"
    };

    int count = sizeof(ages)/sizeof(int);
    int i = 0;

    for (i = 0; i < count;i++){
        printf("%s has lived %d years.\n", names[i], ages[i]);
    }

    printf("-------\n");

    int *cur_age = ages;
    char **cur_name = names;

    for(i = 0; i <count; i++){
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("-------\n");

    for (i = 0; i < count;i++){
        printf("%s is %d years.\n", cur_name[i], cur_age[i]);
    }

    printf("-------\n");

    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){

        printf("%s is %d years now.\n", *cur_name, *cur_age);
    }

    printfunc(ages, names);

    return 0;
}

void printfunc(int *ages, char **names){

    
    
    for (int i = 0; i < 4;i++){
        printf("%s is %d years in func.\n", names[i], ages[i]);
    }

    return;
}

