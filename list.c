#nclude<list.h>
int push(nodep* p,int data)
{	if(*p==NULL)
	{
		*p=malloc(sizeof(node));
		if(*p==NULL)
		{	return 0;
			
		}
		else
		{
			*p->data=data;
			*p->next=NULL;
			return 1;
		}
	}
	
	else
	{	*p=(*p)->next;
		push(p,data);
	}
	
}
int pop(nodep *p)
{	if(*p==NULL)
	{	printf("empty");
		return -1;
		
	}
	else if((*p)->next==NULL)
	{	int data=*p->data;
		free *p;
		*p = NULL;
		return data;
		
	}
	nodep temp= *p;
	while(temp->next->next!=NULL)
	{	temp=temp->next;
	}
	
	temp2=temp->next;
	int data=temp2->data;
	temp=temp->next->next;
	free temp2;
	return data;
	
}

void print(nodep *p)
{	if(*p == NULL)
	{
		return;
	}
	else
	{	printf("%d ",(*p)->data);
		print(&((*p)->next));
		
	}
	
}
