#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int w, h, x, y;
		scanf("%d%d%d%d", &w, &h, &x, &y);
		char a;
		scanf("%c", &a);
		if(a == 'U'){
			int y_do = y - 1;
			if(y_do == h - y){
				printf("DRAW\n");
				continue;
			}else if(y_do > h - y){
				printf("RED\n");
				continue;
			}else{
				printf("BLUE\n");
				continue;
			}	
		}else if(a == 'D'){
			
		}
	}
}


/*
1. nếu a = u y đỏ = y - 1 
2. h - y đỏ -> dài hơn thì win
3. D là y xanh trên y đỏ -> tiếp tục so sánh
4. đỏ bên trái xanh -> xác định đc x đỏ -) lấy chiều rộng - x đỏ -> so sánh

*/
