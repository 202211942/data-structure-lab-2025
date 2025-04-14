#include "sparsepoly.hpp"

// ������
SparsePoly::SparsePoly() {
    for (int i = 0; i < MAX_DEGREE; i++) {
        exponents[i] = 0;
        coefficients[i] = 0;
    }
}

// �Է� �Լ�
void SparsePoly::read() {
    int n;
    cout << "���� ������ �Է��ϼ���: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int coef, exp;
        cout << i + 1 << "��° ���� ����� ������ �Է��ϼ��� (��: ��� ����): ";
        cin >> coef >> exp;
        coefficients[exp] = coef;
        exponents[exp] = 1;
    }
}

// ��� �Լ�
void SparsePoly::display(const char* str) {
    cout << str;
    bool first = true;
    for (int i = MAX_DEGREE - 1; i >= 0; i--) {
        if (exponents[i]) {
            if (!first) cout << " + ";
            cout << coefficients[i] << ".0x^" << i;
            first = false;
        }
    }
    cout << endl;
}

// ���� �Լ�
void SparsePoly::add(SparsePoly a, SparsePoly b) {
    for (int i = 0; i < MAX_DEGREE; i++) {
        coefficients[i] = a.coefficients[i] + b.coefficients[i];
        if (coefficients[i] != 0) {
            exponents[i] = 1;
        }
    }
}

// ���� �Լ�
int main() {
    SparsePoly A, B;

    A.read();
    A.display("Poly A: ");

    B.read();
    B.display("Poly B: ");

    SparsePoly C;
    C.add(A, B);
    C.display("Poly C: ");

    return 0;
}