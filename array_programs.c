#include<stdio.h>

void read_array(int x,int[x]);
void disp_array(int x,int[x]);
void disp_min(int x,int[x]);
void disp_max(int x,int[x]);
int disp_sum(int x,int[x]);
void disp_avg(int x,int[x]);
void search(int x,int y,int[x]);
void ascend_sort(int x,int[x]);
void descend_sort();

int i,j,m,element,ch;

void main()
{
    printf("\tSimple Operations in a Linear Array\n");
    
    printf("\n Enter the size of array: ");
    scanf(" %d",&m);
    
    int a[m];
    
    printf("\n   Enter the elements of array: \n");
    read_array(m,a);
    
    do{
        printf("\n   Operations available: \n\n");
        printf("\t1.Smallest element\n");
        printf("\t2.Largest element\n");
        printf("\t3.Sum of elements\n");
        printf("\t4.Average of elements\n");
        printf("\t5.Search an element\n");
        printf("\t6.Sort in ascending order\n");
        printf("\t7.Sort in descending order\n");
        printf("\t8.Display array\n");
        printf("\t9.Exit\n");
        
        
        printf("\n Enter the choice: ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: printf("\n   Array: ");
                    disp_array(m,a);
    
                    disp_min(m,a);
            break;
            
            case 2: printf("\n   Array: ");
                    disp_array(m,a);
    
                    disp_max(m,a);
            break;
            
            case 3: printf("\n   Array: ");
                    disp_array(m,a);
    
                    int s=disp_sum(m,a);
                    printf("\n   --> Sum of elements: %d\n",s);
            break;
            
            case 4: printf("\n   Array: ");
                    disp_array(m,a);
                    
                    disp_avg(m,a);
            break;
            
            case 5: printf("\n   Array: ");
                    disp_array(m,a);

                    printf("\n Enter the element to be searched: ");
                    scanf("%d",&element);
                    
                    search(m,element,a);
            break;
    
            case 6: printf("\n   Array before sorting: ");
                    disp_array(m,a);
                    
                    ascend_sort(m,a);
                    
                    printf("\n   Sorted array in ascending order: ");
                    disp_array(m,a);
            break;
            
            case 7: printf("\n   Array before sorting: ");
                    disp_array(m,a);
                    
                    descend_sort(m,a);
                    
                    printf("\n   Sorted array in descending order: ");
                    disp_array(m,a);
            break;
            
            case 8: printf("\n   Array: ");
                    disp_array(m,a);
            break;
            
            case 9: printf("\n   --> Exited the program\n");
            
            break;
            
            default:printf("\n   --> Invalid choice, Enter a valid choice\n");
        }
    }while(ch!=9);
}

void read_array(int x,int arr[x])
{
    for(i=0;i<x;i++)
    {
        printf("\t");
        scanf("%d",&arr[i]);
    }
}

void disp_array(int x,int arr[x])
{
    for(i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void disp_min(int x,int arr[x])
{
    int min= arr[0];
    
    for(i=1;i<x;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    
    printf("\n   --> Smallest element in array: %d\n",min);
}

void disp_max(int x,int arr[x])
{
    int max= arr[0];
    
    for(i=1;i<x;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    
    printf("\n   --> Largest element in array: %d\n",max);
}

int disp_sum(int x,int arr[x])
{
    int sum=0;
    
    for(i=0;i<x;i++)
    {
        sum += arr[i];
    }

    return sum;
}

void disp_avg(int x,int arr[x])
{
    float avg= (float)disp_sum(x,arr)/x;
    
    printf("\n   --> Average of elements: %0.2f\n",avg);
}

void search(int x,int y,int arr[x])
{
    int flag=0;
    
    for(i=0;i<x;i++)
    {
        if(arr[i]==y)
        {
            flag=1;
            printf("\n   --> Searched element %d found at position %d\n",y,i+1);
            break;
        }
    }
    
    if(flag==0)
        printf("\n   --> Searched element not found\n");
}

void ascend_sort(int x,int arr[x])
{
    int temp;
    
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void descend_sort(int x,int arr[x])
{
    int temp;
    
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
