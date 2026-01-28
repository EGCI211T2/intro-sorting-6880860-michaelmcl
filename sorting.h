void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);
void selectionsort(int *a, int N);
using namespace std;


void swap(int &a, int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void sort(int *a, int N)
{
    int i,j;
    for(j=0;j<N-1;j++)
    {
        for(i=0;i<N-1-j;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }

        }
        display(a,N);
    }

}

void display(int a[], int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

void selectionsort(int *a, int N)
{
    int j;
    for(j=0; j<N-1; j++)
    {
        int i,mi=j, min=a[j];
    for (i=j;i<N;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            mi=i;
        }
    } 
    swap (a[j], a[mi]);
    }
}