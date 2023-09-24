#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


struct aru_data{
	int value;
	struct aru_data *ptr ;
};
typedef struct aru_data aru_data;

aru_data *head=NULL;
aru_data *tail=NULL;
aru_data *previous=NULL;
aru_data  *temp=NULL;


void creating_linked_list(aru_data *);
void traverse_linked_list(void);
void insertion_in_the_middle(int,int);
void insertion_in_the_start(int);
void insertion_in_the_end(void);


void creating_linked_list(aru_data *new_box){
	if(head==tail){
		head=new_box;
		previous=new_box;
	}else{
		tail=new_box;
		previous->ptr=new_box;
		previous=new_box;
	}
	return;
}

void insertion_in_the_middle(int value, int pos){
	//make new box 
	aru_data * new_b =NULL;
	aru_data *next_box=NULL;
	aru_data *temp=NULL;
	new_b=(aru_data *) calloc(1,sizeof(aru_data));
	new_b->value=value;
	 
	int idx=1;
	temp=head;
	while(idx<pos){
		temp=temp->ptr;
		idx++;
	}
	 
	next_box=temp->ptr;
    temp->ptr=new_b;
    new_b->ptr=next_box;
	
	return;	
	
	}
	
void insertion_in_the_start(int val){
	 temp=head;
	 aru_data *h_box=NULL;
	 h_box=(aru_data *)calloc(1,sizeof(aru_data));
	 h_box->value=val;
	 h_box->ptr=temp;
	 head=h_box;
	 return;
		
	}
	
void insertion_in_the_end(){
		temp=tail;
		aru_data *t_box=NULL;
		t_box=(aru_data *)calloc(1,sizeof(aru_data));
		t_box->value=71;
		tail=t_box;
		temp->ptr=t_box;
		return;
	}
	

void traverse_linked_list(void){
	
	previous=head;
	
	while(previous !=NULL){
		printf("%d\t",previous->value);
		previous=previous->ptr;
	}
	return;
}

 int main(){
 	int arr[10]={10,21,53,88,76,81,66,83,91,31};
 	int divisor;
 	aru_data *new_box=NULL;
 	int i;
 	int pos;
 	int value;
 	int val;
 	
 	for(i=0;i<10;i++){
 		
 		for(divisor=2;divisor<arr[i];divisor++){
 			if(arr[i]%divisor==0)
 				break;
		}
			 if(arr[i]==divisor){
			 	new_box=(aru_data *)calloc(1,sizeof(aru_data));
			 	new_box->value=arr[i];
			 	creating_linked_list(new_box);
			 }
		 
	 }
	 printf("the unidirectional linked list is=\n\n");
	 traverse_linked_list();
	 
	 printf("\n\nenter the position =\n\n");
	 scanf("%d",&pos);
	 printf("\n\nenter the value =\n\n");
	 scanf("%d",&value);
	 insertion_in_the_middle(value,pos);
	 printf("\n\nthe inserted linked list is=\n\n");
	 traverse_linked_list();
	 printf("\n\nenter the value entered at head=\n\n");
	 scanf("%d",&val);
	 insertion_in_the_start(val);
	 printf("\n\nthe inserted linked list in the start is=\n\n");
	 traverse_linked_list();
	 insertion_in_the_end();
	 printf("\n\nthe inserted linked list in the end sis=\n\n");
	 traverse_linked_list();
	 return 0;
 }
