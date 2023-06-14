#include <stdlib.h>
#include<stdio.h>
struct node
{
    float data;
    struct node *link;
};
struct node*head=NULL;
float sgpa(int marks)
{
    int gp = 0;
    if(marks>=90 && marks<=100)
        gp=10;
    if(marks>=80 && marks<90)
        gp=9;
    if(marks>=70 && marks<80)
        gp=8;
    if(marks>=60 && marks<70)
        gp=7;
    if(marks>=50 && marks<60)
        gp=6;
    if(marks>=45 && marks<50)
        gp=5;
    if(marks>=40 && marks<45)
        gp=4;
    if(marks<40)
        gp=0;
return(gp);
}
void insertfront(int data)
{
    struct node*temp;
    temp=malloc(sizeof(struct node));
     temp->data=sgpa(data);
    temp->link = NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    temp->link=head;
    head=temp;
}
float deletefront(void)
{
    struct node *temp = head;
    float x = (temp->data);
    head = temp->link;
    free(temp);
    return x;
}
int main()
{
    int m,ch;
    while(1)
    {
        printf("1.3RD SEM ISE\n2.4TH SEM ISE\n3.5TH SEM ISE\n4.6THSEM ISE\n5.7THSEM ISE\n6.8TH SEM ISE\n7.quit\n");
        printf("choose semester\n");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1:printf("ENTER THE MARKS IN:\n");
                printf("\nMATHEMATICS\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nDATA STRUCTURE\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nANALOG AND DIGITAL ELECTRONICS\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nCOMPUTER ORGANISATION\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nSOFTWARE ENGINEERING\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nDISCRETE MATHEMATICAL STRUCTURE\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nANALOG AND DIGITAL ELECTRONICS LABORATORY\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nDATA STRUCTURE LABORATORY\n");
                scanf("%d",&m);
                insertfront(m);
                printf("\nKANNADA KALI\n");
                scanf("%d",&m);
                insertfront(m);
                printf("you got %4.2f sgpa\n",(1*deletefront()+2*deletefront()+2*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+4*deletefront()+3*deletefront())/24);
                break;
        case 2:

                printf("ENTER THE MARKS IN\n");
                printf("MATHEMATICS\n");
                scanf("%d",&m);
                insertfront(m);
                printf("DESIGN AND ANALYSIS OF ALGORITHM\n");
                scanf("%d",&m);
                insertfront(m);
                printf("OPERATING SYSTEMS\n");
                scanf("%d",&m);
                insertfront(m);
                printf("MICROCONTROLLER AND EMBEDDED SYSTEM\n");
                scanf("%d",&m);
                insertfront(m);
                printf("OBJECT ORIENTED CONCEPTS\n");
                scanf("%d",&m);
                insertfront(m);
                printf("DATA COMMUNICATION\n");
                scanf("%d",&m);
                insertfront(m);
                printf("DESIGN AND ANALYSIS OF ALGORITHM LABORATORY\n");
                scanf("%d",&m);
                insertfront(m);
                printf("MICROCONTROLLER AND EMBEDDED SYSTEM LABORATORY\n");
                scanf("%d",&m);
                insertfront(m);
                printf("CONSTITUTION OF INDIA\n");
                scanf("%d",&m);
                insertfront(m);
                printf("you got %4.2f sgpa\n",(1*deletefront()+2*deletefront()+2*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+4*deletefront()+3*deletefront())/24);
                break;
                case 3:

                        printf("ENTER THE MARKS IN\n");
                        printf("MANAGEMENT,ENTERPRENEURSHIP FOR IT INDUSTRY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("COMPUTER NETWORK AND SECURITY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("DATABASE MANAGEMENT SYSTEM\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("AUTOMATA THEORY AND COMPUTABLITY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("APPLICATION DEVELOPMENT USING PYTHON\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("UNIX PROGRAMMING\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("COMPUTER NETWORK LABORATORY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("DBMS LABORATORY WITH MINI PROJECT\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("ENVIRONMENTAL STUDIES\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("you got %4.2f sgpa\n",(1*deletefront()+2*deletefront()+2*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+4*deletefront()+4*deletefront()+3*deletefront())/25);
                        break;
               case 4:
                        printf("ENTER THE MARKS IN\n");
                        printf("FILE STRUCTURES\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("SOFTWARE TESTING\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("WEB TECHNOLOGY AND ITS APPLICATIONS\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROFESSIONAL ELECTIVE 1\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("OPEN ELECTIVE A\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("SOFTWARE TESTIG LABORATORY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("FILE STRUCTURES LABORATORY WITH MINI PROJECT\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("MOBILE APPLICATION DEVELOPMENT\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("you got %4.2f sgpa\n",(2*deletefront()+2*deletefront()+2*deletefront()+3*deletefront()+3*deletefront()+4*deletefront()+4*deletefront()+4*deletefront())/24);
                        break;
                case 5:

                        printf("ENTER THE MARKS IN\n");
                        printf("ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("BIG DATA ANALYTICS\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROFESSIONAL ELECTIVE 2\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROFESSIONAL ELECTIVE 3\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("OPEN ELECTIVE B\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING LABORATORY\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROJECT WORK PHASE1\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("you got %4.2f sgpa\n",(1*deletefront()+2*deletefront()+3*deletefront()+3*deletefront()+3*deletefront()+4*deletefront()+4*deletefront())/20);
                        break;

                case 6: printf("ENTER THE MARKS IN\n");
                        printf("INTERNET OF THNGS\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROFESSIONAL ELECTIVE 4\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("PROJECT WORK PHASE 2\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("TECHNICAL SEMINAR\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("INTERNSHIP\n");
                        scanf("%d",&m);
                        insertfront(m);
                        printf("you got %4.2f sgpa\n",(3*deletefront()+3*deletefront()+8*deletefront()+1*deletefront()+3*deletefront())/18);
                        break;
        }
    }
return 0;
}
