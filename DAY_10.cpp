#include <iostream>
#define N 3

using namespace std;

void multiplyMatrices(int firstMatrix[N][N], int secondMatrix[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int firstMatrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N];

    multiplyMatrices(firstMatrix, secondMatrix, result);

    std::cout << "Ilk Matris:" << std::endl;
    displayMatrix(firstMatrix);

    std::cout << "Ikinci Matris:" << std::endl;
    displayMatrix(secondMatrix);

    std::cout << "Sonuc Matrisi:" << std::endl;
    displayMatrix(result);

    return 0;
}
