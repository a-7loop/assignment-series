#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>

struct jassi_datatype
{
    int value;
    struct jassi_datatype *ptr;
};

typedef struct jassi_datatype jassi_datatype;

jassi_datatype *head = NULL;
jassi_datatype *tail = NULL;
jassi_datatype *previous_box = NULL;

void create_unidir_linked_list(jassi_datatype*);
void traverse_unidir_linked_list(void);

void create_unidir_linked_list(jassi_datatype *new_box)
{
    if(head == tail)
    {
        head = new_box;
        previous_box = new_box;
    }
    else
    {
        tail = new_box;
        previous_box->ptr = new_box;
        previous_box = new_box;
    }

    return;
}

void traverse_unidir_linked_list(void)
{
    previous_box = head;

    while(previous_box != NULL)
    {
        printf("%d\t",previous_box->value);
        previous_box = previous_box->ptr;
    }

    return;
}


int main()
{
    int arr[10] = {25,14,13,42,41,63,45,93,83,95};
    int divisor;
    jassi_datatype *new_box = NULL;
    int i;

    for(i=0; i<10; i++)
    {
        for(divisor=2; divisor<arr[i]; divisor++)
        {
            if(arr[i] % divisor == 0)
                break;
        }

        if(divisor == arr[i])
        {
            new_box = (jassi_datatype*)calloc(1,sizeof(jassi_datatype));
            new_box->value = arr[i];
            create_unidir_linked_list(new_box);
        }
    }

    printf("\n\nThe Created Unidirectional Linked List of Prime Numbers is:\n\n");
    traverse_unidir_linked_list();
}
