#include<stdio.h>
#include<string.h>
struct stud
{
     char name[50];
     char add[50];
     int id[10];
     int tele[10];
     int sem[2];
     char sec[2];
     char deg[50];
     char branch[50];
     int roll[5];
     char mail[50];
}s[100];
int main()
{
     struct stud t;
     int i=0,j=0,n;
     printf("How many Student records you want to enter?");
     printf("\n\nEnter Limit : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("\n\nEnter Student-%d Info",i+1);
          printf("\n--------------------------\n");
          printf("Enter Id :");
          scanf("%d",s[i].id);
          printf("Enter Name     : ");
          scanf("%s",s[i].name);
          printf("Enter phone No :");
          scanf("%d",s[i].tele);
          printf("Enter E-mail Id :");
          scanf("%d",s[i].mail);
          printf("Address        : ");
          scanf("%s",s[i].add);
        	printf("Degree        : ");
          scanf("%s",s[i].deg);
           printf("Branch        : ");
          scanf("%s",s[i].branch);
           printf("Semester        : ");
          scanf("%s",s[i].sem);
           printf("Section        : ");
          scanf("%s",s[i].sec);
           printf("Roll No        : ");
          scanf("%s",s[i].roll);
     }
     printf("\n\tData before rearrangement");
     printf("\n-----------------------------------\n");
     printf("\tId\tStudent Name\tDegree\tBranch\n");
     printf("--------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\n%-10s\t%3s\n",s[i].id,s[i].name,s[i].tele,s[i].mail,s[i].add,s[i].deg,s[i].branch,s[i].sem,s[i].sec,s[i].roll);
     }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(strcmp(s[i].name,s[j].name)>0)
               {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
               }
          }
     }
     printf("\n\tData after rearrangement");
     printf("\n---------------------------------------------\n");
     printf("\tId\tStudent Name\tDegree\tBranch\n");
     printf("------------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\n%-10s\t%3s\n",s[i].id,s[i].name,s[i].tele,s[i].mail,s[i].add,s[i].deg,s[i].branch,s[i].sem,s[i].sec,s[i].roll);
     }
     return 0;
}  

