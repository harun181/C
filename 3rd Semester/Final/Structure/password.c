#include<stdio.h>
#include<conio.h>
#include<string.h>
int index1 = 0, index2 = 0;
struct Credential {
char Login[20][20];
char Password[20][20];
}c_data;
void main()
{
   choice();
}
void choice()
{
   int choice;
  do{
    printf("1. Enter your username and password\n2. Show all Username and password\n3. Update Your username and password\n4. Exit\n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:adddata();
    break;
    case 2: showdata();
    break;
    case 3: updatedata();
    break;
    case 4:exit(0);
    break;
    default: printf("You enter wrong number: ");
    }
    }while(choice!=4);
}
void adddata()
{
  printf("Enter your username: ");
    fflush(stdin);
    gets(c_data.Login[index1]);
    printf("Enter Your Password : ");
    fflush(stdin);
    gets(c_data.Password[index2]);
    printf("\n\n");
    index1++;
    index2++;
    system("cls");
}
void showdata()
{
    for (int i = 0; i <index1; i++)
        {
        printf("Displaying Information Index %d :\n\n",i+1);
        printf("Username : ");
        puts(c_data.Login[i]);
        printf("Password : ");
        puts(c_data.Password[i]);
        printf("\n\n");
}
}
updatedata()
{
    int n;
    printf("Enter user Index number for update data : ");
    scanf("%d",&n);
    printf("Enter Your new username : ");
     fflush(stdin);
    gets(c_data.Login[n-1]);
    printf("Enter Your new password : ");
     fflush(stdin);
    gets(c_data.Password[n-1]);
    printf("\n");
    system("cls");

}