#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


struct aru_data{
	int value;
	struct aru_data*next;
	struct aru_data*previous;
};

typedef struct aru_data aru_data;

aru_data *head=NULL;
aru_data *tail=NULL;
aru_data *temp=NULL;

void create_bidir_linked_list(aru_data *new_box);
void traverse_bidir_linked_list(void);
void traverse_bidir_linked_list_backward(void);
void insertion_in_the_middle(void);
void deletion_in_the_middle(int);
void deletion_in_the_start(void);
void deletion_in_the_end(void);

void create_bidir_linked_list(aru_data * new_box){
	if(head==tail){
		head=new_box;
		temp=new_box;
	}else
	{
		temp->next=new_box;
		new_box->previous=temp;
		temp=new_box;
		tail=new_box;
		
	}
	return;
}


void traverse_linked_list(){
	temp=head;
	while(temp != NULL){
		printf("%d\t",temp->value);
		temp=temp->next;
	}
	return;
}

void traverse_bidir_linked_list_backward(){
	temp=tail;
	while(temp!=NULL){
		printf("%d\t",temp->value);
		temp=temp->previous;
		}
		return ;
}
void insertion_in_the_middle(){
	int idx=1;
	int pos=3;
    temp=head;
	aru_data* mid_box=NULL;
	aru_data* nex_box=NULL;
	while(idx<pos){
		temp=temp->next;
		idx++;
	}
	mid_box=(aru_data*)calloc(1,sizeof(aru_data));
	mid_box->value=51;
	nex_box=temp->next;
	temp->next=mid_box;
	mid_box->previous=temp;
	mid_box->next=nex_box;
	nex_box->previous=mid_box;
	return;
	
}
	
	void deletion_in_the_middle(int pos){
		int idx=1;
		aru_data *element2delete;
		aru_data *nex_box;
		temp=head;
		while(idx<pos){
			temp=temp->next;
			idx++;
		}
		
		element2delete=temp->next;
		nex_box=element2delete->next;
		temp->next=nex_box;
		nex_box->previous=temp;
		free(element2delete);
		return;
		
	}
	
	void deletion_in_the_start(){
		temp=head;
		aru_data *element2delete=NULL;
		head=temp->next;
		element2delete=temp;
		free(element2delete);
		return;
	}
	
void deletion_in_the_end(){
	temp=head;
	aru_data *prev=NULL;
	aru_data *ele_2_del;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	ele_2_del=tail;
	prev->next=NULL;
	free(ele_2_del);
	return ;
	}	
	
int main(){
	int arr[10]={11,22,41,66,71,81,33,12,31,10};
	int divisor;
	aru_data *new_box=NULL;
	int i;
	int pos;
	
	for(i=0;i<10;i++){
		for(divisor=2;divisor<arr[i];divisor++){
			if(arr[i]%divisor==0){
				break;
			}
		}
		if(arr[i]==divisor){
			new_box=(aru_data*)calloc(1,sizeof(aru_data));
			new_box->value=arr[i];
			create_bidir_linked_list(new_box);
			
		}
	}
	printf("\n\nthe linked list for prime num are:\n\n");
	traverse_linked_list();
	
	printf("\n\nthe linked list for prime num backward are:\n\n");
	traverse_bidir_linked_list_backward();
	insertion_in_the_middle();
	
	printf("\n\nthe linked list for prime num are:\n\n");
	traverse_linked_list();
	
	printf("\n\nenter the pos to delete=\n\n");
	scanf("%d",&pos);
	deletion_in_the_middle(pos);
	printf("\n\nthe deleted linked list is =\n\n");
	traverse_linked_list();
	
	deletion_in_the_start();
	printf("\n\nthe  linked list deleted in the start=\n\n");
	traverse_linked_list();
	
	deletion_in_the_end();
	printf("\n\nthe  linked list deleted in the end=\n\n");
	traverse_linked_list();
	
	return 0;
}
