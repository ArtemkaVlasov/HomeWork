#include <stdio.h>

 int compression(int a[], int b[], int N);

int main(int argc, char **argv)
{
	
	return 0;
}

 int compression(int a[], int b[], int N)
 {
	 int i = 0;
	 int j = 0;
	 
	 if(a[0] == 1)
	 {
		 b[j++] = 0;
	 }
	 while(i < N)
	 {
		 int value = a[i];
		 int count = 0;
		 
		 while(i < N && value == a[i])
		 {
			 count++;
			 i++;
		 }
		 b[j++] = count;
	 }
	 return j;
 }
