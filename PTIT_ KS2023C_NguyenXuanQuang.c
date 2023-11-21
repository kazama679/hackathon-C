#include<stdio.h>
#include<stdlib.h> 
int main(){
	//
	int n, m; 
	printf("nhap vao so cot dong cua mang 2 chieu\n");
	scanf("%d", &n);
	printf("nhap vao so cot ngang cua mang 2 chieu\n");
	scanf("%d", &m);
	int numbers[n][m];
	//
	do{ 
	printf("************************MENU**************************\n");
	printf("1. Nhap gia tri cac phan tu cua mang\n");
	printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
	printf("3. Tinh so luong phan tu chia het cho 2 va 3 trong mang\n");
	printf("4. In cac phan tu va tong cac phan tu nam tren duong bien, duong cheo chinh va duong cheo phu\n");
	printf("5. Su dung thua toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua mang\n");
	printf("6. In ra cac phan tu la so nguyen to trong mang\n");
	printf("7. Su dung thuat dantoan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam \n");
	printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
	printf("9. Thoat\n");
	printf("Lua chon cua ban?\n"); 
	int choice, sumNumbers;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Nhap gia tri cac phan tu cua mang:\n");
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					printf("numbers[%d][%d]=",i ,j);
					scanf("%d", &numbers[i][j]);
				}
			}
			break;
		case 2:
			printf("In cac phan tu trong mang:\n");
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					printf("%d\t", numbers[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			break;
		case 3:
			sumNumbers=0;
			printf("Cac phan tu chia het cho 2 va 3 la:\n");
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					if(numbers[i][j]%2==0&&numbers[i][j]%3==0){
						printf("%d\t", numbers[i][j]);
						sumNumbers += numbers[i][j];
					}
				}
			}
			printf("\nTong cac phan tu chia het cho 2 va 3 = %d\n",sumNumbers); 
			break;
		case 4:
			sumNumbers=0;
			printf("Cac phan tu duong bien:\n ");
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					if(i==0 || i==n-1 || j ==0 || j==m-1){
						printf("%d\t", numbers[i][j]);
						sumNumbers +=numbers[i][j];
					}
				}
			}
			printf("\nTong cac phan tu tren duong bien = %d\n", sumNumbers);
			if(n==m){
				printf("Cac phan tu duong cheo chinh:\n ");
				sumNumbers=0;
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					if(i==j){
						printf("%d\t", numbers[i][j]);
						sumNumbers +=numbers[i][j];
					}
				}
			}
			printf("\nTong cac phan tu tren duong cheo chinh = %d\n", sumNumbers);
			printf("Cac phan tu duong cheo phu:\n ");
			sumNumbers=0;
			for(int i=0; i<n; i++){
				for(int j=0;j<m; j++){
					if(i+j==n-1){
						printf("%d\t", numbers[i][j]);
						sumNumbers +=numbers[i][j];
					}
				}
			}
			printf("\nTong cac phan tu tren duong cheo phu = %d\n", sumNumbers);
			} else{
			printf("Day khong phai ma tran vuong vi the khong co duong cheo chinh va phu\n"); 
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			exit(0);
			default:
				printf("vui long nhap tu 1-9\n");
		}
	} while(1==1);
}
