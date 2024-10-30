#include <iostream>
#include <cmath>  
using namespace std;

void print_arr(int arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << '\n';
}

void change_size(int&arr, int &size, int method) {
    int new_size = size;

    // 根據選擇的方法決定新的大小
    if (method == 1) {
        new_size = 2;               // 將大小加倍
    } else if (method == 2) {
        new_size += 2;               // 增加2
    } else if (method == 3) {
        new_size += static_cast<int>(exp(size / M_PI));  // 使用公式 e^(size/π)
    }

    intnew_arr = new int[new_size];
    int recycler = arr;

    // 複製原陣列到新陣列
    copy(arr, arr + size, new_arr);

    // 擴增部分的元素初始化
    for (int i = size; i < new_size; i++) {
        new_arr[i] = 0;  // 可自行設定初始值
    }

    delete[] recycler;
    arr = new_arr;
    size = new_size;  // 更新原來的大小
}

int main() {
    int size = 5;
    intarr = new int[size] {1, 2, 3, 4, 5};

    cout << "原始陣列: ";
    print_arr(arr, size);

    // 選擇擴增方法，例如選擇方法1
    int method = 1;
    change_size(arr, size, method);

    cout << "擴增後的陣列: ";
    print_arr(arr, size);

    delete[] arr;
    return 0;
}
