//이진 탐색은 데이터가 정렬된 상태일 때, 사용해야 한다.
//주어진 데이터들은 유일한 키 값을 가져야 한다.
//이진탐색은 위 조건을 만족할 경우 사용하며, 순차탐색에 비해 속도가 매우 빠르다.

#include <stdio.h> 
#define max (10)
int binarySearch(int Arr[], int first, int last, int key){
	if(first>last)	return -1;	//재귀함수 탈출조건

	int mid = (first+last)/2;

	if(key == Arr[mid])			return mid;
	else if(key < Arr[mid])		return binarySearch(Arr,first,mid-1,key);
	else if(key > Arr[mid])		return binarySearch(Arr,mid+1,last,key);

	return -1;
} 

int main(void) { 
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int find_index = -1;
	int find_data;

	printf("데이터 :\n");
	for(int i = 0; i<max;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(;;){
	printf("찾으시는 데이터를 입력해주세요( 0 입력시 종료 ): "); 
	scanf("%d", &find_data);

	if (find_data == 0) break;

	find_index = binarySearch(arr,0,max-1,find_data);

	if(find_index == -1) printf("데이터를 찾지 못했습니다.\n");
	else printf("데이터는 %d번째에 있습니다.\n", find_index); 

	} 

	return 0; 
}

