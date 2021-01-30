#include<Stdio.h>

typedef int d32; // change standar datatype
void func(d32 *p,d32 size); // function prototype
d32 main(void){
    d32 size; //declaration variable
    printf("Please enter size of array = ");
    scanf("%d",&size); // Scan the size of array
    d32 arr[size]; // array  declartaion and initialize


    for(int i=0;i<size;i++){
      printf("Please enter the numbers of array = ");     // scan the values of array
      scanf("%d",&arr[i]);

}

        func(arr,size); // calling function


return 0;
}


 void func(d32 *p, d32 size){  // function implementation
printf("The numbers after removing duplicates number\n");
printf("%d\n",p[0]);
for(d32 i=1;i<size;i++){
d32 k=0;
  for(d32 j=0;j<i;j++){

    if(p[i] == p[j]){
     k=1;
   }

  }

if(k==0){printf("%d\n",p[i]);} // if he number not duplicated print it


}

 }

