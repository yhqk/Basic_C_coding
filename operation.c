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

int printEnvironment1(void){
  char *pwd = getenv("PWD"); 
  if(pwd){
    printf("PWD is: %s", pwd); 
    return 0; 
  }
  return -1; 
}

int printEnvironment2(char *env){

  /** 
   * This is a function to print requested environmental variable. 
   */
  char *some_env = getenv(env); 
  if(some_env){
    printf("The value is:%s\n", env); 
    return 0; 
  }
  return -1; 
}
