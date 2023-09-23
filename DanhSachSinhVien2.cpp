#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <regex>


using namespace std;

// Định nghĩa lớp SinhVien
class SinhVien {
private:
    string hoTen;
    string ngaySinh;
    string gioiTinh;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTrungBinh;

public:
    SinhVien() {
        hoTen = "";
        ngaySinh = "";
        gioiTinh = "";
        diemToan = 0.0;
        diemLy = 0.0;
        diemHoa = 0.0;
        diemTrungBinh = 0.0;
    }

    // Kiểm tra chuỗi ngày tháng có đúng định dạng "dd/mm/yyyy" không
    bool kiemTraNgayThang(string ngayThang) {
        regex pattern("^\\d{2}/\\d{2}/\\d{4}$");
        return regex_match(ngayThang, pattern);
    }

    // Phương thức nhập thông tin sinh viên
    void nhap() {
        cout << "Nhap ho ten: ";
        // cin.ignore();
         fflush(stdin);
        getline(cin, hoTen);
        do {
            cout << "Nhap ngay sinh (dd/mm/yyyy): ";
                  fflush(stdin);
            cin >> ngaySinh;
    
            if (!kiemTraNgayThang(ngaySinh)) {
                cout << "Ngay sinh khong hop le. Vui long nhap lai theo dinh dang dd/mm/yyyy." << endl;
            }
        } while (!kiemTraNgayThang(ngaySinh));

        do {
            cout << "Nhap gioi tinh (Nam/Nu): ";
            fflush(stdin);
            cin >> gioiTinh;
            if (gioiTinh != "Nam" && gioiTinh != "Nu") {
                cout << "Gioi tinh khong hop le. Vui long nhap lai." << endl;
            }
        } while (gioiTinh != "Nam" && gioiTinh != "Nu");

        do {
            cout << "Nhap diem toan: ";
            cin >> diemToan;
            if (diemToan < 0 || diemToan > 10) {
                cout << "Diem toan khong hop le. Vui long nhap lai trong khoang tu 0 den 10." << endl;
            }
        } while (diemToan < 0 || diemToan > 10);

        do {
            cout << "Nhap diem ly: ";
            cin >> diemLy;
            if (diemLy < 0 || diemLy > 10) {
                cout << "Diem ly khong hop le. Vui long nhap lai trong khoang tu 0 den 10." << endl;
            }
        } while (diemLy < 0 || diemLy > 10);

        do {
            cout << "Nhap diem hoa: ";
            cin >> diemHoa;
            if (diemHoa < 0 || diemHoa > 10) {
                cout << "Diem hoa khong hop le. Vui long nhap lai trong khoang tu 0 den 10." << endl;
            }
        } while (diemHoa < 0 || diemHoa > 10);

        tinhDiemTrungBinh();
    }

    // Phương thức tính điểm trung bình
    void tinhDiemTrungBinh() {
        diemTrungBinh = (diemToan + diemLy + diemHoa) / 3.0;
    }

    // Phương thức in thông tin sinh viên
    void in() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Ngay sinh: " << ngaySinh << endl;
        cout << "Gioi tinh: " << gioiTinh << endl;
        cout << "Diem toan: " << diemToan << endl;
        cout << "Diem ly: " << diemLy << endl;
        cout << "Diem hoa: " << diemHoa << endl;
        cout << "Diem trung binh: " << fixed << setprecision (2) << diemTrungBinh << endl;
        cout << "-------------------------------------" << endl;
    }

    // Phương thức lấy điểm trung bình
    float layDiemTrungBinh() const {
        return diemTrungBinh;
    }
};

// Hàm so sánh để sắp xếp theo điểm trung bình giảm dần
bool soSanhTheoDiemTrungBinh(const SinhVien &sv1, const SinhVien &sv2) {
    return sv1.layDiemTrungBinh() > sv2.layDiemTrungBinh();
}

int main() {
    /*Nhập số lượng sinh viên, kiểm tra xem người dùng đã nhập một số lượng sinh viên hợp lệ 
    (nếu không phải là số hoặc nếu số lượng là âm thì yêu cầu nhập lại)*/
    int n;
    do {
    cout << "Nhap so luong sinh vien cua lop (K43/41.01): ";
    cin >> n;
     if (cin.fail() || n <= 0) {
            cout << "So luong khong hop le. Vui long nhap lai." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (cin.fail() || n <= 0);
    cin.ignore();

    vector<SinhVien> danhSachSinhVien(n);

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":\n";
        danhSachSinhVien[i].nhap();
    }

    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), soSanhTheoDiemTrungBinh);

    cout << "Danh sach sinh vien cua lop (K43/41.01) sau khi sap xep theo diem trung binh giam dan:\n";
    for (int i = 0; i < n; i++) {
        danhSachSinhVien[i].in();
    }

    return 0;
}
