/* *************************
 *                      MCA 172 Programming in C
 *                      Continuous Assessment Test 3
 * Instructions:
 * 1) Implement the four mentioned functions 
 *     a) remove_newline b) Allocate_person c) update_person d) free_person
 * 2) Ensure that there is no memory leak
 *
 *************************/



/***************************
*                       HEADER FILES
***************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


/***************************
*                      MACROS
***************************/
#define MAX 32
#define SIZE 10
#define FAILURE 0
#define SUCCESS 1
#define MAX_LINE_LENGTH 256

#define name_ret int

/***************************
*                      USER DEFINED TYPES
***************************/
typedef struct
{
 char *first_name;
 char *second_name;
    
}person_name_et;

/***************************
*                      FUCNTION PROTOTYPES
***************************/
static name_ret get_string(char *); // get string from user
static name_ret update_person(person_name_et *, char *, char *); // update person
static name_ret display_person(person_name_et [], int); // display person
static name_ret free_person(person_name_et [],int); // free person
static name_ret remove_newline(char *); // remove newline from string
static name_ret allocate_person(person_name_et *, int, int); // allocate person

/**************************
*
*       Function Name   : get_string
*
*       Description     : gets the input string from user
*
*       Returns         : Success or Failure
*
**************************/
name_ret get_string(char *str_input ) //get string from user
{
    /*get intput from user*/
    char *ret = NULL;
    ret = fgets(str_input, MAX, stdin);
    if(ret == NULL)
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
    }

}
// {
// char *ret = NULL;
//  /* Getting input from user */
//  ret = fgets(str_input, MAX_LINE_LENGTH, stdin);
//  if(NULL == ret) /* Error Handling for fgets */
//  {
//   return FAILURE;
//  }
//  return SUCCESS;

// }

/**************************
*
*       Function Name   : remove_newline
*       Description     : Removes \n, if any, from the array
*       Returns         : Success or Failure
*
**************************/
static name_ret remove_newline(
  char *arg_input /* input string */
                              ) // remove newline from string
{
    int i = 0;
    int length = 0;
    int ret = FAILURE;
    length = strlen(arg_input);
    if(length == 0) // check for empty string
    {
        printf("\nEmpty string\n");
        return ret;
    }
    if(arg_input[length - 1] == '\n')
    {
        arg_input[length - 1] = '\0';
        length--;
    }
    ret = SUCCESS;
    return ret;
  
}

/**************************
*
*       Function Name   : allocate_person
*       Description     : Allocates memory for structure and elements
*       Returns         : Success or Failure
*
**************************/
static name_ret allocate_person(
                                person_name_et *arg_person, /* ptr to person */
                                int len_first, /* Length of first name */
                                int len_second /* Length of second name */
                               ) // allocate person
{

    int i = 0;
    int str_ret = FAILURE;
    arg_person->first_name = (char *)malloc(len_first * sizeof(char));
    if(arg_person->first_name == NULL)
    {
        printf("\nMemory allocation failed\n");
        return str_ret;
    }
    arg_person->second_name = (char *)malloc(len_second * sizeof(char));
    if(arg_person->second_name == NULL)
    {
        printf("\nMemory allocation failed\n");
        return str_ret;
    }
    str_ret = SUCCESS;
    return str_ret;

}

/**************************
 *
 *       Function Name   : update_person
 *       Description     : Copies the 1st & 2nd name to each array element
 *       Returns         : Success or Failure
 *
 **************************/
name_ret update_person(
    person_name_et *arg_person, /* ptr to person */
    char *arg_first_name, /* ptr to first name */
    char *arg_second_name /* ptr to second name */
                        ) // update person
                    //     person_name_et , / Ptr to structure - Use appropriate argument name */
                    //     char , / First name - Use appropriate argument name */
                    //     char * /* Second name - Use appropriate argument name */
                    //   )
{
    int i = 0;
    int str_ret = FAILURE;
    int len_first = 0;
    int len_second = 0;
    len_first = strlen(arg_first_name);
    len_second = strlen(arg_second_name);
    str_ret = allocate_person(arg_person, len_first, len_second);
    if(str_ret == FAILURE)
    {
        printf("\nMemory allocation failed\n");
        return str_ret;
    }
    for(i = 0; i < len_first; i++)
    {
        arg_person->first_name[i] = arg_first_name[i];
    }
    for(i = 0; i < len_second; i++)
    {
        arg_person->second_name[i] = arg_second_name[i];
    }
    return str_ret;

 /* Implemente this function which update each array element */

 /* Hint: Memory allocation should be done using allocate_person() */
}

/**************************
 *
 *       Function Name   : display_person
 *       Description     : Dispay the contents of the person array
 *       Returns         : Success or Failure
 *
 **************************/

name_ret display_person(
                        person_name_et arg_person[], /* Array of persons */
                        int arg_total /* Total number of persons */
                       ) // display person
{
 int index = 0; /* for loop index */
 for(index = 0; index < arg_total; index += 1)
 {
  printf("person - %d\t", index + 1);
  printf("First Name - %s\t", arg_person[index].first_name);
  printf("Second Name - %s\n", arg_person[index].second_name);
 }
 return SUCCESS;
}

/**************************
 *
 *       Function Name   : free_person
 *       Description     : Deallocates memory allocated for person array
 *       Returns         : Success or Failure
 *
 **************************/
name_ret free_person(
                        person_name_et arg_person[], /* Array of persons */
                        int arg_total /* Total number of persons */
                          ) // free person
                    //   person_name_et , /* Array of persons - Use appropriate argument name */
                    //   int /* Total number of persons - Use appropriate argument name */
                    // )
{
    int index = 0; /* for loop index */
    for(index = 0; index < arg_total; index += 1)
    {
        free(arg_person[index].first_name);
        free(arg_person[index].second_name);
    }
    return SUCCESS;
}

 /* Implement this function to deallocate the memory */

 /* Hint: You may have to use a for loop similar to that in display_person() */



/**************************
*
*       Function Name   : main
*       Description     : Accepts a first name and second name of a max of 10
*                         persons and stores it in an array of structure.
*       Returns         : Success or Failure
*
***************************/
int main()
{
 char f_name[MAX], s_name[MAX],input[MAX];
 person_name_et person[SIZE];
 name_ret ret_val = SUCCESS;
 int person_index = 0;

 memset(f_name,0,MAX); // clear the array
 memset(s_name,0,MAX); // clear the array
 while(person_index <= SIZE) // loop until the array is full
 {
  printf("Do you want to continue. 'quit' to terminate\n");
  ret_val = get_string(f_name);
  if(FAILURE == ret_val) 
  {
   printf("fgets failed\n");
   break;
  }
  if(strncmp(f_name,"quit",4) == 0)
  {
   ret_val = SUCCESS;
   break;
  }
  else
  {
   printf("Enter the first name - maximum 31 characters\n");
   ret_val = get_string(f_name);
   if(FAILURE == ret_val)
   {
    printf("fgets failed\n");
    break;
   }
   ret_val = remove_newline(f_name);

   printf("Enter the second name - maximum 31 characters\n");
   ret_val = get_string(s_name);
   if(FAILURE == ret_val)
   {
    printf("fgets failed\n");
    break;
   }
   ret_val = remove_newline(s_name);

   ret_val = update_person(&person[person_index],f_name,s_name);
   if(FAILURE == ret_val)
   {
    printf("update_person -failed\n");
    break;
   }
  }
  person_index += 1;
 } /* End of while */
 if(FAILURE == ret_val)
 {
  printf("Updating Details - Failure\n");
 }
 else
 {
  printf("Updating Details - Success\n");
 }

 ret_val = display_person(person,person_index);
 if(FAILURE == ret_val)
 {
  printf("Display failed\n");
  free_person(person,person_index);
 }
 return 0;
}
