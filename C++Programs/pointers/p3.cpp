// pointer for returning multiple values from the functions.

// min and max number from an array.

#include<iostream>
using namespace std;

int getMin(int arr[], int size)
{
    int min = arr[0];
    for(int i =1; i<size;i++)
    {
        if(arr[i]<min)
        min = arr[i];

    }

    return min;
}

int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void getMinAndMax(int arr[],int size, int *min, int *max)
{
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }


}
int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "number : ";
        cin >> arr[i];
    }

    cout << "minimum element is : " << getMin(arr, 5)<<endl;
    cout << "maximum element is : " << getMax(arr, 5)<<endl;


    int min = arr[0];
    int max = arr[0];
    getMinAndMax(arr,5,&min,&max);
    cout<<"\n------------\n";
    cout << "minimum element is : " << min << endl;
    cout << "minimum element is : " << max << endl;

    system("pause>0");
    return 0;
}