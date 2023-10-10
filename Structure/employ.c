#include <stdio.h>
#include <stdlib.h>
struct Staff
{
    char name[50];
    int id;
    float salary;
} workerInfo[1000];

int index = 0;

void InsertInfo(int i)
{
    printf("Enter id: ");
    scanf("%d", &workerInfo[i].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(workerInfo[i].name);
    printf("Enter Salary: ");
    scanf("%f", &workerInfo[i].salary);
}

void display(int j)
{
    for (int i = 0; i < j; i++)
    {
        printf("ID: %d\n", workerInfo[i].id);
        printf("NAME: %s\n", workerInfo[i].name);
        printf("Salary: %.2f\n\n", workerInfo[i].salary);
    }
}

void search()
{
    int id;
    printf("Enter ID of a student: ");
    scanf("%d", &id);

    system("cls");
    for (int i = 0; i < index; i++)
    {
        if (workerInfo[i].id == id)
        {
            printf("ID: %d\n", workerInfo[i].id);
            printf("Name: %s\n", workerInfo[i].name);
            printf("Salary: %.2f\n\n", workerInfo[i].salary);
            break;
        }
    }
}
void update()
{
    int id;
    printf("Enter worker ID: ");
    scanf("%d", &id);

    system("cls");
    for (int i = 0; i < index; i++)
    {
        if (workerInfo[i].id == id)
        {
            printf("\nName:");
            scanf("%s", &workerInfo[i]);
            printf("\nSalary:");
            scanf("%f", &workerInfo[i].salary);
        }
    }
}

int main()
{

    int choice;
    while (1)
    {
        system("cls");
        printf("Choose option:\n"
               "1. Add Worker information\n"
               "2. Display all information\n"
               "3. Search worker By Id \n"
               "4.Update Worker\n"
               "5.Exit\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            InsertInfo(index++);
            break;
        case 2:
            display(index);
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid input\n\n");
        }
        printf("Enter any key for continue>>\n");
        getch();
    }

    return 0;
}
