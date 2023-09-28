//find the middle element in linked list//

#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct aru_data
{
    int value;
    struct aru_data *next;
};
 typedef struct aru_data aru_data;
 
 
    aru_data *head=NULL;
    	
 //using tortoise and rabbit approach
void  get_middle(aru_data *head){
 	aru_data* tortoise=head;
 	aru_data* rabbit=head; 
 	
 	//condition for checking
 	if(head->next==NULL){
 		printf("the middle value is=%d",head->value);
	 }
	 
 		 
 	while(rabbit!=NULL && rabbit->next!=NULL){
 		tortoise=tortoise->next;
 		rabbit=rabbit->next->next;
	 }
	 printf("\n\nthe middlemost value is= %d\n\n",tortoise->value);
	 return ;
 }
 
 
 
int main(){
	int i,n,a;
	int middle_val;
    aru_data* temp = NULL;
    aru_data* new_box =NULL;
    aru_data* next_box =NULL;
	
	//total nodes to be generated
	printf("enter the nodes=\n\n");
	scanf("%d",&a);
	
	//first node created
	new_box=(aru_data *)calloc(1,sizeof(aru_data));
	printf("enter the value in 1 node=\n\n");
	scanf("%d",&n);
	new_box->value=n;
	new_box->next=NULL;
	head=new_box;
	temp=new_box;
	
	//using loop to creating the rest nodes
		for(i=1;i<a;i++){
		next_box=(aru_data *)calloc(1,sizeof(aru_data));
	    printf("enter the value in %d node=\n\n",i+1);
	    scanf("%d",&n);
	    next_box->value=n;
	    next_box->next=NULL;
	    temp->next =next_box;
	    temp=temp->next;
	    
	}
	
	
	 get_middle(head);
			
			
			return 0;
		
	
	
}
