#include<stdlib.h>
#include<stdio.h>
struct tuple
{ 
    int row ,col ,val;
    struct tuple * next;
};

void main()
{
    struct tuple * head, * new, * temp;
    int ar[10][10], r, c, i, j;
    printf("Enter the row and colum of the matrix : ");
    scanf("%d%d",&r,&c);
    printf("Enter the array elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j] );
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(ar[i][j]!=0)
            {
                new=(struct tuple *) malloc(sizeof(struct tuple));
                new->row=i;
                new->col=j;
                new->val=ar[i][j];
                new->next=0;
                if(head==0)
                {
                    head=new;
                    temp=new;
                }
                else
                {
                    temp->next=new;
                    temp=new;
                }   
            }  
        }
    }
    printf("\nTuple form : \n");
    printf("Row\tCol\tValue\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\t%d\t%d\n",temp->row,temp->col,temp->val);
        temp=temp->next;
    }
}