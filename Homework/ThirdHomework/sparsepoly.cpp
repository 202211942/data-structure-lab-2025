#include "sparsepoly.hpp"

// 생성자
SparsePoly::SparsePoly() {
    for (int i = 0; i < MAX_DEGREE; i++) {
        exponents[i] = 0;
        coefficients[i] = 0;
    }
}

// 입력 함수
void SparsePoly::read() {
    int n;
    cout << "항의 개수를 입력하세요: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int coef, exp;
        cout << i + 1 << "번째 항의 계수와 차수를 입력하세요 (예: 계수 차수): ";
        cin >> coef >> exp;
        coefficients[exp] = coef;
        exponents[exp] = 1;
    }
}

// 출력 함수
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

// 덧셈 함수
void SparsePoly::add(SparsePoly a, SparsePoly b) {
    for (int i = 0; i < MAX_DEGREE; i++) {
        coefficients[i] = a.coefficients[i] + b.coefficients[i];
        if (coefficients[i] != 0) {
            exponents[i] = 1;
        }
    }
}

// 메인 함수
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