#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
    struct node *llink;
    char data[30];
    struct node *rlink;
};
struct node *firstmon=NULL;
struct node *firsttue=NULL;
struct node *firstwed=NULL;
struct node *firstthur=NULL;
struct node *firstfri=NULL;
struct node *firstsat=NULL;

FILE *fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*up;

//-------------------------------------------------------------------STUDENT DISPLAY FUNCTION---------------------------------------------------------------------------
void sdisplay(int n)//FROM FILE
{
    char mon[30];
    char tue[30];
    char wed[30];
    char thur[30];
    char fri[30];
    char sat[30];

    fp1=fopen("monday.txt","r");
    fp2=fopen("tuesday.txt","r");
    fp3=fopen("wednesday.txt","r");
    fp4=fopen("thursday.txt","r");
    fp5=fopen("friday.txt","r");
    fp6=fopen("saturday.txt","r");
    switch(n)
    {
        case 1: printf("MONDAY\t\t");
                while(!feof(fp1))
                {
                    fscanf(fp1,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 2: printf("TUESDAY\t\t");
                while(!feof(fp2))
                {
                    fscanf(fp2,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 3: printf("WEDNESDAY\t\t");
                while(!feof(fp3))
                {
                    fscanf(fp3,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 4: printf("THURSDAY\t\t");
                while(!feof(fp4))
                {
                    fscanf(fp4,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 5: printf("FRIDAY\t\t");
                while(!feof(fp5))
                {
                    fscanf(fp5,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 6: printf("SATURDAY\t\t");
                while(!feof(fp6))
                {
                    fscanf(fp6,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        case 7: //DISPLAY ALL
                printf("MONDAY\t\t");
                while(!feof(fp1))
                {
                    fscanf(fp1,"%s",mon);
                    printf("%s\t",mon);
                }
                printf("\n");
                printf("TUESDAY\t\t");
                while(!feof(fp2))
                {
                    fscanf(fp2,"%s",mon);
                    printf("%s\t",mon);
                }
                printf("\n");
                printf("WEDNESDAY\t\t");
                while(!feof(fp3))
                {
                    fscanf(fp3,"%s",mon);
                    printf("%s\t",mon);
                }
                printf("\n");
                printf("THURSDAY\t\t");
                while(!feof(fp4))
                {
                    fscanf(fp4,"%s",mon);
                    printf("%s\t",mon);
                }
                printf("\n");
                printf("FRIDAY\t\t");
                while(!feof(fp5))
                {
                    fscanf(fp5,"%s",mon);
                    printf("%s\t",mon);
                }
                printf("\n");
                printf("SATURDAY\t\t");
                while(!feof(fp6))
                {
                    fscanf(fp6,"%s",mon);
                    printf("%s\t",mon);
                }
                break;
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        fclose(fp4);
        fclose(fp5);
        fclose(fp6);
    }//SWITCH END 
}//STUDENT DISPLAY FUNCTION END


//------------------------------------------------------------------------------DISPLAY FUNCTION------------------------------------------------------------------------
void display(int n)//FROM LINKED LIST
{
    switch(n)
    {
      case 1:
            printf("MONDAY\t\t\t"); 
            if(firstmon==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstmon;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 2: 
            printf("TUESDAY\t\t\t"); 
            if(firsttue==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firsttue;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 3:
            printf("WEDNESDAY\t\t"); 
            if(firstwed==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstwed;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 4:
            printf("THURSDAY\t\t"); 
            if(firstthur==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstthur;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 5: 
            printf("FRIDAY\t\t\t"); 
            if(firstfri==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstfri;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 6:
            printf("SATURDAY\t\t"); 
            if(firstsat==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstsat;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
            }
            break;
    case 7:
            printf("MONDAY\t\t\t"); 
            if(firstmon==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstmon;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            printf("TUESDAY\t\t\t"); 
            if(firsttue==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firsttue;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            printf("WEDNESDAY\t\t"); 
            if(firstwed==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstwed;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            printf("THURSDAY\t\t"); 
            if(firstthur==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstthur;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            printf("FRIDAY\t\t\t"); 
            if(firstfri==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstfri;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            printf("SATURDAY\t\t"); 
            if(firstsat==NULL)
            {
                printf("NO SCHEDULE FOR TODAY\n");
            }
            else
            { 
                struct node *t;
                t=firstsat;
                while(t->rlink!=NULL)
                {
                    printf("%s\t",t->data);
                    t=t->rlink;
                }
                printf("%s\t",t->data);
                printf("\n");
            }
            break;
    default: 
            printf("WRONG INPUT\n");
            break;
    }//SWITCH END
}//DISPLAY FUNCTION END


//------------------------------------------------------------------------------INSERT FUNCTION-------------------------------------------------------------------------
void insert_rear(char a[], int n)//FROM FILE TO LINKED LIST(PASS THE SUBJECT)
{   
    
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    fflush(stdin);
    strcpy(p->data,a);
    switch(n)
    {
        case 1: 
                if(firstmon==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstmon=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstmon;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
        case 2:
                if(firsttue==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firsttue=p;
                }
                else
                {
                    struct node *temp;
                    temp=firsttue;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
        case 3:
                if(firstwed==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstwed=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstwed;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
        case 4:
                if(firstthur==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstthur=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstthur;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
        case 5:
                if(firstfri==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstfri=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstfri;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
        case 6:
                if(firstsat==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstsat=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstsat;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                break;
    }//END OF SWITCH
}//INSERT REAR FUNCTION END

//-----------------------------------------------------------------------CREATE FUNCTION--------------------------------------------------------------------------------
void create()//CREATES LINKED LIST FOR THE FIRST TIME FROM FILE
{   
    char mon[30];
    char tue[30];
    char wed[30];
    char thur[30];
    char fri[30];
    char sat[30];
    fp1=fopen("monday.txt","r");
    fp2=fopen("tuesday.txt","r");
    fp3=fopen("wednesday.txt","r");
    fp4=fopen("thursday.txt","r");
    fp5=fopen("friday.txt","r");
    fp6=fopen("saturday.txt","r");
    
    while(!feof(fp1)) 
    {
        fscanf(fp1,"%s",mon);
        insert_rear(mon,1);
    }
    while(!feof(fp2))
    {
        fscanf(fp2,"%s",tue);
        insert_rear(tue,2);
    }
    while(!feof(fp3))
    {
        fscanf(fp3,"%s",wed);
        insert_rear(wed,3);
    }
    while(!feof(fp4))
    {
        fscanf(fp4,"%s",thur);
        insert_rear(thur,4);
    }
    while(!feof(fp5))
    {
        fscanf(fp5,"%s",fri);
        insert_rear(fri,5);
    }
    while(!feof(fp6))
    {
        fscanf(fp6,"%s",sat);
        insert_rear(sat,6);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    fclose(fp5);
    fclose(fp6);
}// CREATE FUNCTION END

//---------------------------------------------------------------------------------ADD FUNCTION------------------------------------------------------------------------
void add(char a[], int n)//ADD TO REAR
{   
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    fflush(stdin);
    strcpy(p->data,a);
    switch(n)
    {
        case 1: 
                if(firstmon==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstmon=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstmon;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                } 
                printf("%s HAS BEEN ADDED TO MONDAY\n",a);
                fp1=fopen("monday.txt","a");
                fprintf(fp1," %s",a);
                fclose(fp1);
                break;
        case 2:
                if(firsttue==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firsttue=p;
                }
                else
                {
                    struct node *temp;
                    temp=firsttue;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                printf("%s HAS BEEN ADDED TO TUESDAY\n",a);
                fp2=fopen("tuesday.txt","a");
                fprintf(fp2," %s",a);
                fclose(fp2);
                break;
        case 3:
                if(firstwed==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstwed=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstwed;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                printf("%s HAS BEEN ADDED TO WEDNESDAY\n",a);
                fp3=fopen("wednesday.txt","a");
                fprintf(fp3," %s",a);
                fclose(fp3);
                break;
        case 4:
                if(firstthur==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstthur=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstthur;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                printf("%s HAS BEEN ADDED TO THURSDAY\n",a);
                fp4=fopen("thursday.txt","a");
                fprintf(fp4," %s",a);
                fclose(fp4);
                break;
        case 5:
                if(firstfri==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstfri=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstfri;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                printf("%s HAS BEEN ADDED TO FRIDAY\n",a);
                fp5=fopen("friday.txt","a");
                fprintf(fp5," %s",a);
                fclose(fp5);
                break;
        case 6:
                if(firstsat==NULL)
                {
                    p->llink=NULL;
                    p->rlink=NULL;
                    firstsat=p;
                }
                else
                {
                    struct node *temp;
                    temp=firstsat;
                    while(temp->rlink!=NULL)
                    {
                        temp=temp->rlink;
                    }
                    temp->rlink=p;
                    p->rlink=NULL;
                    p->llink=temp;
                }
                printf("%s HAS BEEN ADDED TO SATURDAY\n",a);
                fp6=fopen("saturday.txt","a");
                fprintf(fp6," %s",a);
                fclose(fp6);
                break;
    }//END OF SWITCH
}//ADD FUNCTION END

//---------------------------------------------------------------------UPCOMING EVENTS FUNCTION------------------------------------------------------------------------
void upcoming(int n)
{
    char buf1[50];
    char buf2[50];
    int c;
    char o;
   if(n==1)
   {
       up=fopen("upcoming.txt","r");
       printf("DATE\t\t\t\t\tEVENT\n");
       while(fscanf(up,"%s%s",&buf1,&buf2)!=EOF)
        {
         printf("%s\t\t\t\t\t%s\n",buf1,buf2);
         
        }
        fclose(up);
   }
   else if(n==2)
   {
       printf("*****ENTER 1 TO VIEW UPCOMING EVENTS AND 2 TO ADD NEW EVENTS*****\n");
       scanf("%d",&c);
       switch(c)
       {
           case 1: up=fopen("upcoming.txt","r");//VIEW UPCOMING EVENTS
                   printf("DATE\t\t\t\t\tEVENT\n");
                   while(fscanf(up,"%s%s",&buf1,&buf2)!=EOF)
                  {
                    printf("%s\t\t\t\t\t%s\n",buf1,buf2);
                    
                  }
                 fclose(up);
                 break;

          case 2: //ADD NEW EVENTS
                do{
                    up=fopen("upcoming.txt","a");
                    printf("ENTER THE DATE AND EVENT\n");
                    fflush(stdin);
                    scanf("%s",&buf1);
                    scanf("%s",&buf2);
                    fprintf(up,"%s\t\t\t\t\t%s\n",buf1,buf2);
                    fclose(up);
                    printf("ADD MORE? Y/N \n");
                    fflush(stdin);
                    scanf("%c",&o);
                }while(o=='y'||o=='Y');
        }//SWICH END
   }
}// UPCOMING EVENTS FUNCTION END

//-------------------------------------------------------------------UPDATE FUNCTION--------------------------------------------------------------------------------

void update(int d)
{   
    struct node *temp;
    int co,pos; int c=1;
    char sub[30], new[30];
    printf("ENTER\n1. TO REPLACE A CLASS WITH ANOTHER SUBJECT\n2.TO REMOVE A CLASS\n");
    scanf("%d",&co);
    switch(d)
    {
        case 1:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firstmon;
                    if(firstmon==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firstmon;
                                fp1=fopen("monday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp1,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp1);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firstmon;
                    if(firstmon==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firstmon;
                                fp1=fopen("monday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp1,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp1);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
                break;

        case 2:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firsttue;
                    if(firsttue==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firsttue;
                                fp2=fopen("tuesday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp2,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp2);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firsttue;
                    if(firsttue==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firsttue;
                                fp2=fopen("tuesday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp2,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp2);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
        break;

        case 3:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firstwed;
                    if(firstwed==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firstwed;
                                fp3=fopen("wednesday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp3,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp3);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firstwed;
                    if(firstwed==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firstwed;
                                fp3=fopen("wednesday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp3,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp3);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
        break;

        case 4:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firstthur;
                    if(firstthur==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firstthur;
                                fp4=fopen("thursday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp4,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp4);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firstthur;
                    if(firstthur==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firstthur;
                                fp4=fopen("thursday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp4,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp4);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
        break;

        case 5:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firstfri;
                    if(firstfri==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firstfri;
                                fp5=fopen("friday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp5,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp5);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firstfri;
                    if(firstfri==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firstfri;
                                fp5=fopen("friday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp5,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp5);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
        break;

        case 6:
                if(co==1)
                {   
                    printf("ENTER THE SUBJECT YOU WANT TO REPLACE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);
                    printf("ENTER THE NEW SUBJECT\n");
                    scanf("%s",&new);

                    temp=firstsat;
                    if(firstsat==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS UPDATED AT %d POSITION WITH %s SUBJECT\n",sub,pos,new);
                                strcpy(temp->data,new);
                                temp=firstsat;
                                fp6=fopen("saturday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp6,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp6);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REPLACE END
                else if(co==2)
                {
                    printf("ENTER THE SUBJECT YOU WANT TO REMOVE\n");
                    scanf("%s",&sub);
                    printf("ENTER THE POSITION\n");
                    scanf("%d",&pos);

                    temp=firstsat;
                    if(firstsat==NULL)
                    printf("NO SCHEDULE EXISTS\n");
                    else
                    {
                        while(temp!=NULL)
                        {
                            if(strcmp(temp->data,sub)==0 && c==pos)
                            {
                                printf("%s SUBJECT IS REMOVED AT %d POSITION\n",sub,pos);
                                strcpy(temp->data,"_");
                                temp=firstsat;
                                fp6=fopen("saturday.txt","w");
                                while(temp!=NULL)
                                {
                                    fprintf(fp6,"%s\t",temp->data);
                                    temp=temp->rlink;
                                }
                                fclose(fp6);
                            
                            }
                            else
                            {
                                temp=temp->rlink;
                                c++;
                            }
                        }
                    }
                }//IF REMOVE CLASS END
        break;
    }
}//UPDATE FUNCTION END


//----------------------------------------------------------------------------------MAIN FUNCTION----------------------------------------------------------------------

void main()
{
    int ch,day,ch1;
    char o;
    char pass[20];
    char sub[30];
    char mon[100];
    char tue[100];
    char wed[100];
    char thur[100];
    char fri[100];
    char sat[100];

    printf("ARE YOU A STUDENT OR A TEACHER? ENTER S FOR STUDENT AND T FOR TEACHER\n");
    fflush(stdin);
    scanf("%c",&o);

     if(o=='s'||o=='S')//IF STUDENT START
    {   

        while(1)
        {   
        printf("\nENTER YOUR OPERATION\n");
        printf(" 1.DISPLAY SCHEDULE\n 2.UPCOMING EVENTS\n 3.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
            {
                case 1: printf("ENTER\n1 FOR MONDAY'S SCHEDULE\n2 FOR TUESDAY'S SCHEDULE\n3 FOR WEDNESDAY'S SCHEDULE\n4 FOR THURSDAY'S SCHEDULE\n5 FOR FRIDAY'S SCHEDULE\n6 FOR SATURDAY'S SCHEDULE\n7 FOR ENTIRE WEEK'S SCHEDULE\n");
                        scanf("%d",&day);//DISPLAY SCHEDULE
                        sdisplay(day);
                        break;
                case 2: upcoming(1);//UPCOMING EVENTS
                        break; 
                case 3: exit(0);//EXIT
                        break;
                default: printf("WRONG CHOICE\n");
                         break;
         
            }
        }//WHILE INFINITE LOOP END
    }//IF STUDENT END

    else if(o=='t'||o=='T')//IF TEACHER START
    {
        printf("ENTER THE PASSWORD\n");
        scanf("%s",&pass);
                        
        if(strcmp(pass,"cse2019")==0)//PASSWORD CORRECT START
        {   
            printf("Enter your choice\n");
            printf("1. MAKE A NEW SCHEDULE\n2. MAKE CHANGES IN EXISTING SCHEDULE\n");
            scanf("%d",&ch1);
            if(ch1==1)
            {
                fp1=fopen("monday.txt","w");
                fp2=fopen("tuesday.txt","w");
                fp3=fopen("wednesday.txt","w");                        
                fp4=fopen("thursday.txt","w");
                fp5=fopen("friday.txt","w");
                fp6=fopen("saturday.txt","w");
 
                 printf("ENTER SCHEDULE FOR MONDAY [IF FREE AT A PARTICUAR TIME ENTER _ ] \nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA \n");
                 fflush(stdin);
                 gets(mon);                    
                 fputs(mon,fp1);
                 fclose(fp1);
                 printf("ENTER SCHEDULE FOR TUESDAY [IF FREE AT A PARTICUAR TIME ENTER _ ]\nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA\n");
                 fflush(stdin);
                 gets(tue);                    
                 fputs(tue,fp2);
                 fclose(fp2);
                 printf("ENTER SCHEDULE FOR WEDNESDAY [IF FREE AT A PARTICUAR TIME ENTER _ ]\nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA\n");
                 fflush(stdin);
                 gets(wed);                    
                 fputs(wed,fp3);
                 fclose(fp3);
                 printf("ENTER SCHEDULE FOR THURSDAY [IF FREE AT A PARTICUAR TIME ENTER _ ]\nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA\n");
                 fflush(stdin);
                 gets(thur);                    
                 fputs(thur,fp4);
                 fclose(fp4);
                 printf("ENTER SCHEDULE FOR FRIDAY [IF FREE AT A PARTICUAR TIME ENTER _ ]\nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA\n");
                 fflush(stdin);
                 gets(fri);                    
                 fputs(fri,fp5);
                 fclose(fp5);
                 printf("ENTER SCHEDULE FOR SATURDAY [IF FREE AT A PARTICUAR TIME ENTER _ ]\nPRESS ENTER KEY ONLY AFTER ENTERING ALL DATA\n");
                 fflush(stdin);
                 gets(sat);                    
                 fputs(sat,fp6);
                 fclose(fp6);
                 create();
                 printf("DEFAULT SCHEDULE IS CREATED\n");
            }
            else if(ch1==2)
            create();
             
             while(1)
             {
                printf("\nENTER YOUR OPERATION\n");
                printf(" 1.ADD CLASS \n 2.UPDATE CLASS\n 3.DISPLAY SCHEDULE\n 4.UPCOMING EVENTS\n 5.EXIT\n");
                scanf("%d",&ch);
                switch(ch)
                {
                     case 1: printf("*****ENTER THE SUBJECT AND DAY OF THE WEEK TO BE ADDED TO*****\n");//ADD CLASS TO END
                             printf("ENTER\n1 FOR MONDAY\n2 FOR TUESDAY\n3 FOR WEDNESDAY\n4 FOR THURSDAY\n5 FOR FRIDAY\n6 FOR SATURDAY\n");
                             scanf("%s%d",&sub,&day);
                             add(sub,day);
                             break; 

                     case 2: printf("*****ENTER THE DAY OF THE WEEK TO BE UPDATED*****\n");//UPDATE CLASS
                             printf("ENTER\n1 FOR MONDAY\n2 FOR TUESDAY\n3 FOR WEDNESDAY\n4 FOR THURSDAY\n5 FOR FRIDAY\n6 FOR SATURDAY\n");
                             scanf("%d",&day);
                             update(day);
                             break; 

                     case 3: printf("ENTER\n1 FOR MONDAY'S SCHEDULE\n2 FOR TUESDAY'S SCHEDULE\n3 FOR WEDNESDAY'S SCHEDULE\n4 FOR THURSDAY'S SCHEDULE\n5 FOR FRIDAY'S SCHEDULE\n6 FOR SATURDAY'S SCHEDULE\n7 FOR ENTIRE WEEK'S SCHEDULE\n");
                             scanf("%d",&day);//DISPLAY SCHEDULE
                             display(day);
                             break;

                     case 4: upcoming(2);//UPCOMING EVENTS
                             break; 

                     case 5: exit(0);//EXIT
                             break;

                     default: printf("WRONG CHOICE\n");
                              break;
                }
             }//WHIE INFINITE LOOP END

        }//PASSWORD CORRECT END
        else
        printf("WRONG PASSWORD\n");
          
    }//IF TEACHER END
    
else
printf("WRONG INPUT\n");
getch();
}           
