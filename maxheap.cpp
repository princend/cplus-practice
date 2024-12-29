#include <iostream>

struct Element {
    int key;
    Element(int k = 0) : key(k) {}
};

template <class Type>
class MaxHeap {
private:
    int MaxSize;       // 最大堆大小
    int n;             // 當前堆大小
    Element* heap;     // 儲存堆的陣列

public:
    MaxHeap(int max_size) : MaxSize(max_size), n(0) {
        heap = new Element[MaxSize + 1]; // 堆的陣列，從索引 1 開始
    }

    ~MaxHeap() {
        delete[] heap; // 釋放記憶體
    }

    void Insert(const Element& x) {
        if (n == MaxSize) { // 堆已滿
            std::cerr << "Heap is full. Cannot insert element." << std::endl;
            return;
        }

        n++; // 增加堆的大小
        int i = n; // 新元素插入的位置

        // 向上調整
        while (i > 1 && x.key > heap[i / 2].key) {
            heap[i] = heap[i / 2]; // 將父節點下移
            i /= 2; // 移動到父節點
        }

        heap[i] = x; // 將新元素放到正確位置
    }

    void PrintHeap() const {
        for (int i = 1; i <= n; i++) {
            std::cout << heap[i].key << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MaxHeap<Element> maxHeap(10); // 假設有 10 的最大堆空間

    maxHeap.Insert(Element(50));
    maxHeap.Insert(Element(30));
    maxHeap.Insert(Element(40));
    maxHeap.Insert(Element(10));

    maxHeap.PrintHeap(); // 自定義的打印函式，用於檢查堆內容
    return 0;
}
