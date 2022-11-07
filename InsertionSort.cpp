using namespace std;

void insertionSort(int a [], int size){
    int i = 1, j = 0;
    while (i < size){
    	j = i;
    	while (j > 0 && a[j-1] > a[j]){
    		swap(a[j], a[j-1]);
    		j--;
    	}
    	i++;
    }
}

void printArray(int a [], int size){;
    for (int i = 0; i < size; i++)
    	cout << a[i] << " ";
    cout << "\n";
}

void swap(int *a, int *b){
	int *temp = a;
	a = b;
	b = temp;
}

int main(){
    int arr1 [] = {1, 2, 3, 13, 19, 11, 7, 5, 4, 22, 9, 10, 19, 0, -1};
    int arr2 [] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr3 [] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

   
  insertionSort(arr1, 15);
	printArray(arr1, 15);

 
  insertionSort(arr2, 15);
    
 	printArray(arr2, 15);

 
  insertionSort(arr3, 15);
   
	printArray(arr3, 15);
	return 0;
}
