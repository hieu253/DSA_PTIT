#include <iostream>
#include <vector>
using namespace std;

int getNumOfDigits(int num) { // Hàm tính số chữ số của 1 số
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

vector<int> findNumbers(int n) { // Hàm tìm các số X
    vector<int> result;
    int maxNum = 1;
    for (int i = 1; i <= n; i++) { // Tính giới hạn trên cho X
        maxNum *= 10;
    }
    for (int i = 0; i < maxNum; i++) { // Duyệt các số X từ 0 đến giới hạn trên
        int numOfDigits = getNumOfDigits(i);
        int factorial = 1;
        for (int j = 2; j <= i; j++) { // Tính giai thừa của X
            factorial *= j;
            // Nếu số chữ số của giai thừa vượt quá N thì dừng tính toán
            if (getNumOfDigits(factorial) > n) {
                break;
            }
        }
        // Nếu số chữ số của giai thừa bằng N thì thêm X vào danh sách kết quả
        if (getNumOfDigits(factorial) == n) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> numbers = findNumbers(n);
    cout << "Cac so X! co " << n << " chu so la: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}       