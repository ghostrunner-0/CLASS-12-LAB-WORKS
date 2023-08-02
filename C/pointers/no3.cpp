//! WAP to find sum and average of ‘n’ natural numbers using pointer. using c
//! #include<stdio.h>
//! int main()
//! {
//!     int sum,a[100],n;
//!     int *k;
//!     printf("Enter number of numbers\n");
//!     scanf("%d",&n);
//!     for(int i=0;i<n;i++){
//!         printf("Enter %d number\n",i+1);
//!         scanf("%d",&a[i]);
//!         k[i]=a[i];
//!     }
//!     for(int i=0;i<n;i++){
//!         sum=sum+*(k+i);
//!     }
//!     float avg;
//!     avg=sum/n;
//!     printf("the sum is %d and the average is %0.2f",sum,avg);

//! return 0;
//! }