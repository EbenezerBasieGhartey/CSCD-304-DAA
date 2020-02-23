#include <iostream>
using namespace std;
int main(){
	int arr[50];
	int found=0;
	int key,size;
	
	cout<<"enter array size :"<<endl;
	cin>>size;
	cout<<"Enter "<<size<<" array elements:"<<endl;
    for (int i = 0; i < size; i++) {
	 cin>>arr[i];
    }
    
    cout<<"enter key value to search"<<endl;
    cin>>key;

	for(int j=0; j<size; j++){
		if(arr[j]==key){
			cout<<"key value found at index : " <<j <<endl;
		found=1;

		break;
		 }
	}
		 if (found==0)
		cout<<"key value not found among list\n";
	

	return 0;
}
