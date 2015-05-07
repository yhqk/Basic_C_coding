/** 
  * Version: 0.0.1
  * Author: Yuhong Qiu-Kaikkonen  
  */

#include <stdio.h>
#include <stdlib.h>

/** 
  * This is a function to print certain environmental variable, 
  * In this case, PWD
  */

#define MAX 10   /* constant will have compiling error */
int array[MAX]; 

int printEnvironment1(void){
  char *pwd = getenv("PWD"); 
  if(pwd){
    printf("\nPWD is: %s\n\n", pwd); 
    return 0; 
  }
  return -1; 
}

/* constant is often used as function arguement(s) */
int printEnvironment2(char *env){

  /** 
   * This is a function to print requested environmental variable. 
   */
  char *some_env = getenv(env); 
  if(some_env){
    printf("The value is:%s\n\n", env); 
    return 0; 
  }
  return -1; 
}
