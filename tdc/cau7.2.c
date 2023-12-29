#include <stdio.h>
#include <string.h>

struct ThiSinh{
    int sbd;
    char hoTen[100];
    float diemToan;
    float diemLy;
    float diemHoa;
};


void nhap(struct ThiSinh *ts){
    printf("\nnhap so bao danh: ");
    scanf("%d", ts->sbd);
    printf("\nnhap ho va ten: ");
    getchar();
    fgets(ts->hoTen, sizeof(ts->hoTen), stdin);
    printf("\nnhap diem toan: ");
    scanf("%f", ts->diemToan);
    printf("\nnhap diem ly: ");
    scanf("%f", ts->diemLy);
    printf("\nnhap diem hoa: ");
    scanf("%f", ts->diemHoa);
}

void inThongTinThiSinh(struct ThiSinh *ts){
    printf("\n%d\t%s\t%.2f\t%.2f\t%.2f", ts->sbd, ts->hoTen, ts->diemToan, ts->diemLy, ts->diemHoa);
}

float tinhTongDiem(struct ThiSinh ts){
    return ts.diemToan + ts.diemLy + ts.diemHoa;
}

float diem(struct ThiSinh ts[], int n){
    float diem[n]; 
    for(int i = 1; i <= n; i++){
        diem[i] = ts[i].diemToan + ts[i].diemLy + ts[i].diemHoa;
    }
    return diem[n];
}

void inThiSinhTrungTuyen(struct ThiSinh ts[], int n){
    float diemChuan = 10;

    for(int i = 1; i <= n; i++){
        float tongDiem = tinhTongDiem(ts[i]);
        if(tongDiem >= diemChuan) {
             inThongTinThiSinh(&ts[i]);
        } 
    }
}


void maxDiem(struct ThiSinh *ts[], int n){
    float max = diem(&ts[1], n); int pos;
    for(int i = 1; i <= n; i++){
        if(diem(&ts[i], n) > max){
            max = diem(&ts[i], n);
            pos = i;
        }
    }
    inThongTinThiSinh(&ts[pos]);
}




int main(){
    int n; 
    printf("nhap so luong thi sinh: ");
    scanf("%d", &n);
    struct ThiSinh ts[n];
    for(int i = 1; i <= n; i++){
        nhap(&ts[i]);
    }
    for(int i = 1; i <= n; i++){
        inThongTinThiSinh(&ts[i]);
    }
    //danh sach thi sinh trung tuyen
    float diemChuan;
    printf("\nnhap diem chuan: ");
    scanf("%f", &diemChuan);
    chuan(ts, n);
    maxDiem(ts, n);
    
}