/** 
  * Version: 0.0.1
  * Author: Yuhong Qiu-Kaikkonen  
  */

/** 
  * This is a main execution point of application 
  * @param argc unmber of command line arguments
  * @param argv pointer to array containing the cmd arguments
  * @return integer containing the exit status  
  */

#include "operation.h"
int main(int argv, char **argc){
    int ret_val = printEnvironment1(); 
    if(ret_val == 0){
	printEnvironment2("HOME"); 
    }
    return 0; 
}
