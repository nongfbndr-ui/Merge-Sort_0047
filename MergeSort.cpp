#include <iostream>
using namespace std;

int main() {
    return 0;
}
int arr[20], B[20];
int n;
void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

    if(n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n-------------------------------" << endl;
for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }    cout << "\nInputkan Isi element array" << endl;
    cout << "-------------------------------" << endl;

    
}

void merge(int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}