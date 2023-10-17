# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main() 
{
    char company_name[] = "Skillsoft";
    // char company_name[20] = "Skillsoft";
    // char company_name[] = {'S', 'k', 'i', 'l', 'l', 's', 'o', 'f', 't', '\0'};
    // char* company_name = "Skillsoft";
    // char company_name[5] = {'S', 'k', 'i', 'l', 'l', 's', 'o', 'f', 't', '\0'};

    printf("%s \n", company_name);
    printf("Size of the above string is: %lu \n", sizeof(company_name));
    printf("\n\n");




    char* company_name2 = "Skillsoft";
    int i = 0;
    while(company_name2[i] != '\0') {
        printf("%c", company_name2[i]);
        i++;
    }
    
    printf("\n\n");




    char* company_name3 = "Skillsoft";
    int string_length = strlen(company_name3);
    printf("String length is: %d\n", string_length);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < string_length; i++) {
        printf("%p \t %c \n", &company_name3[i], company_name3[i]);
    }
    printf("\n\n");




    char* company_name4 = "Skillsoft";
    printf("ADDRESS \t VALUE \n");
    int j = 0;

    while(*(company_name4 + j) != '\0') {
        printf("%p \t %c \n", company_name4 + j, *(company_name4 + j));
        j++;
    }
    printf("\n\n");




    char name[] = "Joanna";
    char state[] = "California";

    char* name_ptr = name;
    char* state_ptr = state;

    printf("------------ADDRESS--------------- \n");
    printf("Address stored in name_ptr is: %p \n", name_ptr);
    printf("Address of name is: %p \n", name);

    printf("Address stored in state_ptr is: %p \n", state_ptr);
    printf("Address of state is: %p \n\n", state);

    name[0] = 'j';
    state[0] = 'c';

    printf("Value referenced by name_ptr: %s \n", name_ptr);
    printf("Value referenced by state_ptr: %s \n", state_ptr);
    printf("\n\n");




    char name2[] = "Joanna";
    char state2[] = "California";

    char* name_ptr2 = (char *)malloc(strlen(name2) + 1* sizeof(char));
    char* state_ptr2 = (char *)malloc(strlen(state2) + 1* sizeof(char));

    printf("------------ADDRESS--------------- \n");
    printf("Address stored in name_ptr is: %p \n", name_ptr2);
    printf("Address of name is: %p \n", name2);

    printf("Address stored in state_ptr is: %p \n", state_ptr2);
    printf("Address of state is: %p \n\n", state2);

    strcpy(name_ptr2, name2);
    strcpy(state_ptr2, state2);

    name2[0] = 'j';
    state2[0] = 'c';

    printf("Value in name: %s \n", name2);
    printf("Value referenced by name_ptr: %s \n", name_ptr2);
    printf("Value in state: %s \n", state2);
    printf("Value referenced by state_ptr: %s \n", state_ptr2);

    free(name_ptr2);
    free(state_ptr2);
    printf("\n\n");




    char name3[] = "Joanna";
    char state3[] = "California";

    char* name_state_ptr3 = (char *)malloc((strlen(name3) + strlen(state3) + 2) * sizeof(char));

    strcat(name_state_ptr3, name3);
    strcat(name_state_ptr3, " ");
    strcat(name_state_ptr3, state3);

    printf("Value in name: %s \n", name3);
    printf("Value in state: %s \n", state3);
    printf("Value referenced by name_state_ptr: %s \n", name_state_ptr3);

    free(name_state_ptr3);
    printf("\n\n");




    char* string_1 = "GeOFF";
    char* string_2 = "gEOfF";

    int result = strcasecmp(string_1, string_2);

    printf("Compare result: %d \n", result);



    return EXIT_SUCCESS;
}