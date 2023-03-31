#inlclude<iostream>
using namespace std;

int main(){
	int i, j, temp;
	int a[5];
	//to take array input
	for(int i=0; i<5; i++){
		cin>>a[i];
	}
	cout<<"/nInput element list: "
	for(i=0; i<5; i++){
		cout<<a[i]<<"\t";
	}
	cout<<end1;
	for(i=0; i<5; i++){
		for(j=1; j<5; j++){
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	cout<<"Sorted Element of list..\n";
	for(i=0; i<5; i++){
		cout<<a[i]<<"t";
		
	}
	return 0;
}
