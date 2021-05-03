/*  Name: SHREY MARWAHA
    Roll_Number: 2019334 */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int global_num = 10;
int parent_initial, parent_final, child_initial, child_final;

void *func(void *var)
{
    child_initial=global_num;
    printf("\nc %d\n",global_num);
    while(global_num>-90)
    {
        global_num--;
        printf("c %d\n",global_num);
    }
    child_final=global_num;
    return NULL;
}

int main(){
    printf("p %d\n",global_num);
    parent_initial=global_num;
    while(global_num<100)
    {
        global_num++;
        printf("p %d\n",global_num);
    }
    parent_final=global_num;

    pthread_t t_id;
    pthread_create(&t_id,NULL,func,NULL);
    pthread_join(t_id,NULL);

    printf("\nParent Initial Value: %d",parent_initial);
    printf("\nParent Final Value: %d",parent_final);
    printf("\nChild Initial Value: %d",child_initial);
    printf("\nchild Final Value: %d",child_final);

    return 0;
}
