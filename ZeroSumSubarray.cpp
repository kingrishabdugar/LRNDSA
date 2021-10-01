#include <stdio.h>
 
void getZeroSumSubarray(int *array, int size) {
    int hashTable[10000];
    int i, j, sum = 0;       
     
    /*Initialize hash table */
    for(i=0; i<10000; i++) hashTable[i] = -1;
     
    /* Initialize HashTable zero slot with 0 
    because sum of an empty array is 0*/
    hashTable[0] = 0;
    // Traverse through the given array
    for(i = 0; i < size; i++) {   
        sum += array[i];
              
        /* If current element if 0, we found a zero
 sum subarray of size 1 */
 if(array[i] == 0) {
     printf("Zero Sum Sub Array Found from index %d to %d\n", i, i);
     return;
 }
    
        if(sum == 0 || hashTable[sum] != -1) {
            printf("Zero Sum Sub Array Found from index %d to %d\n", hashTable[sum]+1, i); 
        }
   
        /* Add current sum to HashTable */
        hashTable[sum] = i;
    }    
    return;
}  
 
int main(){
    int array[10] = {2, 6, -4, 8, -4, 3, 10, 7, 11, 9}; 
    int i;
     
    getZeroSumSubarray(array, 10);
 
    return 0;
}
