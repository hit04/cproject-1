#include <stdio.h>

int main(){
	int t,n,i;
	unsigned long long int sum,k,temp;
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		unsigned long long int A[n];
		for(i=0;i<n;++i){
			scanf("%llu",&A[i]);
		}

		temp = A[0];
		sum = 0;
		k=0;

		for(i=1;i<n;++i){
			if(A[i]>=temp){
				temp = A[i];
				sum+=k;
				k=0;
			}
			if(A[i]<temp){
				k+=temp-A[i];
			}
		}
		if(temp > A[n-1]){
		temp = A[n-1];
		k=0;
		for(i=n-1;i>=0;--i){
			if(A[i]>=temp){
				temp = A[i];
				sum+=k;
				k=0;
			}
			if(A[i]<temp){
				k+=temp-A[i];
			}
		}

		}

		printf("%llu\n",sum);

	}

	return 0;
}
