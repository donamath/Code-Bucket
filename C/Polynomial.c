#include<stdio.h>
#include<stdlib.h>
typedef struct node1
 {
  int coeff,exp;
  struct node1*link;
  }node;
 void main()
  {
        node *pheader,*pptr,*qheader,*qptr,*rheader,*rptr,*new;
        int i,coeff1,exp1,terms;
        pheader=(node*)malloc(sizeof(node));
        qheader=(node*)malloc(sizeof(node));
        rheader=(node*)malloc(sizeof(node));
        rheader->coeff=0;
        rheader->exp=0;
        rheader->link=NULL;
        pheader->coeff=0;
        pheader->exp=0;
	qheader->link=NULL;
        printf("enter the no. of terms of first polynomial- ");
        scanf("%d",&terms);
        pptr=pheader;
        for(i=1;i<=terms;i++)
        {
        new=(node*)malloc(sizeof(node));
        printf("enter the value of coefficient and exponent of the term%d",i);
        scanf("%d%d",&coeff1,&exp1);
        new->coeff=coeff1;
        new->exp=exp1;
        new->link=NULL;
        pptr->link=new;
        pptr=pptr->link;
        }
        printf("enter the no. of terms of second polynomial- ");
        scanf("%d",&terms);
	qptr=qheader;
        for(i=1;i<=terms;i++)
        {
        new=(node*)malloc(sizeof(node));
        printf("enter the value of coefficient and exponent of the term %d",i);
        scanf("%d%d",&coeff1,&exp1);
        new->coeff=coeff1;
        new->exp=exp1;
        new->link=NULL;
        qptr->link=new; 
	 qptr=new;
        }
        pptr=pheader->link;
        qptr=qheader->link;
        rptr=rheader;
         while(pptr!=NULL&&qptr!=NULL)
         {
                if(pptr->exp==qptr->exp)
                {
                 new=(node*)malloc(sizeof(node));
rptr->link=new,rptr=new;
                 rptr->coeff=pptr->coeff+qptr->coeff;
                 rptr->exp=pptr->exp;
                 rptr->link=NULL;
                 pptr=pptr->link,qptr=qptr->link;
                }
                else if(pptr->exp>qptr->exp)
                {
                 new=(node*)malloc(sizeof(node));
                 rptr->link=new,rptr=new;
                 rptr->coeff=pptr->coeff;
                 rptr->exp=pptr->exp;
                 rptr->link=NULL;
                 pptr=pptr->link;
                }
                else if(pptr->exp< qptr->exp)
                {
                 new=(node*)malloc(sizeof(node));
                 rptr->link=new,rptr=new;
                 rptr->coeff=qptr->coeff;
                 rptr->exp=qptr->exp;
                 rptr->link=NULL;
                 qptr=qptr->link;
                }
        }
        if((pptr==NULL)&&(qptr!=NULL))
        {
         while(qptr!=NULL)
                {
{
                new=(node*)malloc(sizeof(node));
                 rptr->link=new,rptr=new;
                 rptr->coeff=qptr->coeff;
                 rptr->exp=qptr->exp;
                 rptr->link=NULL;
                 qptr=qptr->link;
                }       
        }
        pptr=pheader->link;
        printf("THE FIRST POLYNOMIAL");
        pptr=pheader->link;
        printf("(%dx^%d)",pptr->coeff,pptr->exp);
        pptr=pptr->link;
        while(pptr!=NULL)
        {
        printf("+");
        printf("(%dx^%d)",pptr->coeff,pptr->exp);
        pptr=pptr->link;
        }
        printf("SECOND POLYNOMIAL...........");
qptr=qheader->link;
        printf("%dx^%d)",qptr->coeff,qptr->exp);
        qptr=qptr->link;
        while(qptr!=NULL)
        {
        printf("+");
        printf("(%dx^%d)",qptr->coeff,qptr->exp);
        qptr=qptr->link;
        }
        printf("THE SUM OF TWO POLYNOMIAL");
        rptr=rheader->link;
        printf("(%dx^%d)",rptr->coeff,rptr->exp);
        rptr=rptr->link;
        while(rptr!=NULL)
         {
        printf("+");
         printf("(%dx^%d)",rptr->coeff,rptr->exp);
         rptr=rptr->link;
         }

        }



