//���� Ž���� �����Ͱ� ���ĵ� ������ ��, ����ؾ� �Ѵ�.
//�־��� �����͵��� ������ Ű ���� ������ �Ѵ�.
//����Ž���� �� ������ ������ ��� ����ϸ�, ����Ž���� ���� �ӵ��� �ſ� ������.

#include <stdio.h> 
#define max (10)
int binarySearch(int Arr[], int first, int last, int key){
	if(first>last)	return -1;	//����Լ� Ż������

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

	printf("������ :\n");
	for(int i = 0; i<max;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(;;){
	printf("ã���ô� �����͸� �Է����ּ���( 0 �Է½� ���� ): "); 
	scanf("%d", &find_data);

	if (find_data == 0) break;

	find_index = binarySearch(arr,0,max-1,find_data);

	if(find_index == -1) printf("�����͸� ã�� ���߽��ϴ�.\n");
	else printf("�����ʹ� %d��°�� �ֽ��ϴ�.\n", find_index); 

	} 

	return 0; 
}

