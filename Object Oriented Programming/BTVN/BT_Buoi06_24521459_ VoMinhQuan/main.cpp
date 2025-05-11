#include <iostream>
#include <vector>
using namespace std;

class CVector
{
private:
    int *vector;
    int size;

public:
    friend class CMatrix;
    CVector(int n = 0) : size(n)
    {
        vector = new int[n];
        for (int i = 0; i < n; i++)
        {
            vector[i] = 0;
        }
    }

    void NhapVector()
    {
        int n;
        cout << "Nhap so luong phan tu vector: ";
        cin >> n;
        vector = new int[n];
        size = n;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vector[i] = x;
        }
    }
    void XuatVector()
    {
        cout << "(";
        for (int i = 0; i < size; i++)
        {
            cout << vector[i];
            if (i != size - 1)
            {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }

    ~CVector()
    {
        delete[] vector;
    }
};

class CMatrix
{
private:
    int **arr;
    int SoHang;
    int SoCot;
    CVector vector;

public:
    CMatrix(int row = 0, int col = 0) : SoHang(row), SoCot(col)
    {
        if (SoHang > 0 && SoCot > 0)
        {
            arr = new int *[SoHang];
            for (int i = 0; i < SoHang; i++)
            {
                arr[i] = new int[SoCot]{};
            }
        }
        else
        {
            arr = nullptr;
        }
    }
    void NhapMatrix()
    {
        if (arr != nullptr)
        {
            for (int i = 0; i < SoHang; i++)
            {
                delete[] arr[i];
            }
            delete[] arr;
        }
        cout << "Nhap So Hang: ";
        cin >> SoHang;
        cout << "Nhap So Cot: ";
        cin >> SoCot;
        arr = new int *[SoHang];
        for (int i = 0; i < SoHang; i++)
        {
            arr[i] = new int[SoCot];
            for (int j = 0; j < SoCot; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void XuatMatrix()
    {
        for (int i = 0; i < SoHang; i++)
        {
            for (int j = 0; j < SoCot; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void MultiplerVector(CVector vec)
    {
        if (vec.size != SoCot)
        {
            cout << "So phan tu vector khong khop voi so cot ma tran!" << endl;
            return;
        }
        for (int i = 0; i < SoHang; i++)
        {
            for (int j = 0; j < SoCot; j++)
            {
                arr[i][j] *= vec.vector[j];
            }
        }
    }
    ~CMatrix()
    {
        if (arr != nullptr)
        {
            for (int i = 0; i < SoHang; i++)
            {
                delete[] arr[i];
            }
            delete[] arr;
        }
    }
};
int main()
{
    CMatrix MaTran;
    CVector Vec;

    MaTran.NhapMatrix();
    cout << endl;
    cout << "Ma Tran Ban Dau: " << endl;
    MaTran.XuatMatrix();
    cout << endl;
    Vec.NhapVector();
    cout << "Vector: ";
    Vec.XuatVector();
    cout << endl;
    MaTran.MultiplerVector(Vec);
    cout << "Ma Tran Sau Khi Nhan: " << endl;
    MaTran.XuatMatrix();

    return 0;
}
