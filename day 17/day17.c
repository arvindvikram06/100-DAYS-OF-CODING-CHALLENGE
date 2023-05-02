int main(void) {
	int test;
	int peop,age,count;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d",&peop);
	    scanf("%d",&age);
	    int arr[peop];
	  for(int j=0;j<peop;j++){
	      scanf("%d",&arr[j]);
	  }
	  count=0;
	  for(int k=0;k<peop;k++){
	      if(arr[k]>=age){
	          count++;
	      }
	  }
	  printf("%d\n",count);
	}
	return 0;
}

