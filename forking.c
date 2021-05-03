/*  Name: SHREY MARWAHA
    Roll_Number: 2019334 */


#include <stdio.h>
#include <unistd.h>

int global_num = 10;

int main(){
    int parent_initial, parent_final, child_initial, child_final;
    
    if (fork() != 0) {  //parent
        parent_initial=global_num;
        printf("p %d\n",global_num);
        while(global_num<100) {
            global_num++;
            printf("p %d\n", global_num);
        }
        parent_final=global_num;
        printf("Parent Initial Value: %d    Parent Final Value: %d\n",parent_initial,parent_final);
    }
       
    else {  //child
        child_initial=global_num;
        printf("c %d\n",global_num);
        while(global_num>-90) {
            global_num--;
            printf("c %d\n", global_num);
        }
        child_final = global_num;
        printf("Child Initial Value: %d    Child Final Value: %d\n", child_initial,child_final);
        _exit(0);
    }


    return 0;
}
