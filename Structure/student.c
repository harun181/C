#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
struct students
{
    char fname[100];
    char lname[100];
    char dname[100];
    int id;
} st[50];

void adddata()
{
    printf("Enter the information of student: ");
    printf(".................................\n");
    printf("\nEnter the first name: ");
    scanf("%s", st[i].fname);
    printf("\nEnter the last name: ");
    scanf("%s", st[i].lname);
    printf("\n Enter the dname: ");
    scanf("%s", &st[i].dname);
    printf("\nEnter the id : ");
    scanf("%d", &st[i].id);
    i = i + 1;
}
void find_r1()
{
    int x;
    printf("Enter the id of srching student: ");
    scanf("%d", &x);
    for (int j = 1; j <= i; i++)
    {
        if (x == st[j].id)
        {
            printf("Details of the students: ");
            printf("Name: %s", st[i].fname);
            printf(" %s\n", st[i].lname);
            printf("Department: %s", st[i].dname);
        }
        break;
    }
}
void del_s()
{
    int a;
    printf("Enter the id of that student whose info you want to dlt: ");
    scanf("%s", &a);
    for (int j = 1; j <= i; i++)
    {
        if (a == st[j].id)
        {
            for (int k = 1; k < 99; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The details are deleted");
}
void up_s()
{
    printf("Enter the id : ");
    int x;
    x = 1;
    for (int j = 0; j < i; j++)
    {
        if (st[j].id == x)
        {
            printf("1.Enter new firstname: \n2.Enter new last name\n3.Enter new department name\n4.Enter new id\n");
            int z;
            z = 4;
            switch (z)
            {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].fname);
                break;
                printf("Enter the new last name:\n");
                scanf("%s", st[j].lname);
                break;
                printf("Enter the new Department name:\n");
                scanf("%s", st[j].dname);
                break;
                printf("Enter the new id:\n");
                scanf("%s", st[j].id);
                break;
            }
            printf("Deatils are updated");
        }
    }
}
void main()
{
    int choice, count;
    while (i = 1)
    {
        printf("\n\n");

        printf("1.Add Student details :\n");
        printf("2.Show Student details :\n");
        printf("3.Delete Student details :\n");
        printf("4.update Student details :\n");
        printf("5.Exit the project:\n");

        printf("please choice your option : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            adddata();
            break;
        case 2:
            find_r1();
            break;
        case 3:
            del_s();
            break;
        case 4:
            up_s();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
