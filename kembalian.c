#include <stdio.h>

int i, sum =0, cash =0,sisa;
void printarr(int arr[],int len){
    for (i = 0; i < len; i++) {
        printf("%d \n", arr[i]);
    }
}
void kembalian(int *arr){
    arr[0] = sisa / 100000;
    sisa %= 100000;
    arr[1] = sisa / 10000;
    sisa %= 10000;
    arr[2] = sisa / 5000;
    sisa %= 5000;
    arr[3] = sisa / 500;
    sisa %= 500;
    arr[4] = sisa / 100;
    sisa %= 100;
}

int main(){
    printf("List barang:\n 1. Beras (Rp12.500)\n 2. Daging (Rp21.700)\n 3. Sayur (Rp3.900)\n 4. Bumbu (Rp4.600)\n 5. Sambal (Rp2.200)\n\n");
    printf("jumlah barang secara berurutan: ");
    int jumlah[5];
    for (i = 0; i < 5; i++){
        scanf("%d",&jumlah[i]);
    } 
    sum = 12500 * jumlah[0] + 21700 * jumlah[1] + 3900 * jumlah[2] + 4600 * jumlah[3] + 2200 * jumlah[4];
    printf("Uang yang dibawa pembeli: ");
    scanf("%d", &cash);
    sisa = cash - sum;
    printf("Total belanjaan : %d\n\n", sum);
    int kembali[5];
    if(cash < sum){
        printf("Uang tidak cukup!");
    }
    else if(cash == sum){
        printf("Uang pas. Tidak ada kembalian.");
    }
    else{
        kembalian(kembali);
        printarr(kembali,5);
    }
    
    return 0;
    
}
