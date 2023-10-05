#include <stdio.h>

int tinhTong(int soThuNhat, int soThuHai){
    return soThuNhat +soThuHai;
}

void kiemTraSo(int number){
    if(number > 0){
        printf("Day la so nguyen duong\n");
    }else if(number < 0){
        printf("Day la so nguyen am\n");
    }else{
        printf("Khong phai so nguyen duong va khong phai so nguyen am\n");
    }
}

int tinhTongCacSo(int number){
    int sum = 0;
    for(int i = 0 ; i <= number; i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int chucNang = 0;
    do{
        printf("1.Tinh tong 2 so\n");
        printf("2.Kiem tra so\n");
        printf("3.Tinh tong cac so nguyen\n");
        printf("0.Thoat\n");
        printf("Moi nhap chuc nang:");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1:{
                printf("Chuc nang 1\n");
                int number1,number2;
                printf("Nhap so thu 1 :");
                scanf("%d",&number1);
                printf("Nhap so thu 2:");
                scanf("%d",&number2);
                int tong = tinhTong(number1,number2);
                printf("Tong 2 so = %d\n",tong);
                break;
            }
            case 2:{
                 printf("Chuc nang 2\n");
                 printf("Moi nhap so:");
                 int number;
                 scanf("%d",&number);
                 kiemTraSo(number);
                break;
            }
            case 3:{
                printf("Chuc nang 3\n");
                printf("Moi nhap so:");
                 int number;
                 scanf("%d",&number);
                 int sum = tinhTongCacSo(number);
                 printf("Sum = %d\n",sum);
                break;
            }
            case 0:{
                break;
            }
            default:{
                printf("Chuc nang khong ton tai\n");
                break;
            }
        }
    }while(chucNang !=0);
    return 0;
}
