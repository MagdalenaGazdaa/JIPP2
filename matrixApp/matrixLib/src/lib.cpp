#include "../include/lib.h"

using namespace std;

void help(){
    cout << "Program wykonuje podane operacjie na macierzach.\n";
    cout << "Lista komend ktorych nalezy uzyc:\n\n";
    cout << "\taddMatrix\t\tDodawanie dwoch macierzy\n";
    cout << "\tsubtractMatrix\t\tOdejmowanie dwoch macierzy\n";
    cout << "\tmultiplyMatrix\t\tMnozenie dwoch macierzy\n";
    cout << "\tmultiplyByScalar\tMnozenie przez skalar\n";
    cout << "\ttranspozeMatrix\t\tTransponowanie macierzy\n";
    cout << "\tpowerMatrix\t\tPotegowanie macierzy\n";
    cout << "\tdeterminantMatrix\tWyznacznik macierzy\n";
    cout << "\tmatrixIsDiagonal\tSprawdzanie, czy macierz jest diagonalna\n";
    cout << "\tswap\t\t\tZamiana dwoch wartosci miejscami\n";
    cout << "\tsortRow\t\t\tSortowanie tablicy za pomoca sortowania bombelkowego\n";
    cout << "\tsortRowsInMatrix\tSortowanie wszystkich wierszy w macierzy\n";
}

bool check(string command){

    string tab[11] = {"addMatrix", "subtractMatrix", "multiplyMatrix",
                               "multiplyByScalar","transpozeMatrix","powerMatrix",
                               "determinantMatrix", "matrixIsDiagonal","swap", "sortRow", "sortRowsInMatrix"};

    for (int i = 0; i < 11; i++){
        if(command == tab[i])
            return true;
    }
    return false;
}

int **create_matrix_int(int row, int column){
    int **matrix;
    matrix = new int * [row];           //tworzenie wierszy
    for (int i = 0; i < row; i++){     //tworzenie kolumn

        matrix[i] = new int [column];
    }
    return matrix;
}

double **create_matrix_double(int row, int column){
    double **matrix;
    matrix = new double * [row];
    for (int i = 0; i < row; i++){
        matrix[i] = new double [column];
    }
    return matrix;
}

bool fill_matrix(int **matrix, int row, int column){
    for (int i = 0; i < row; i++){ //wypenianie macierzy
        for(int j = 0; j < column; j++){
            if(!(cin >> matrix[i][j])){//zabezpieczenie przed wprowadzeniem tekstu
                cout << "Wprowadzono nieprawidlowy znak\n\n";
                return false;
            }
        }
    }
    return true;
}

bool fill_matrix(double **matrix, int row, int column){
    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(!(cin >> matrix[i][j])){
                cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                return false;
            }
        }
    }
    return true;
}

void print(int **matrix, int row, int column){
    for (int i = 0; i < row; i++){    //wyswietlenie macierzy
        for(int j = 0; j < column; j++){
            cout << " " << matrix[i][j] << " ";;
        }
        cout << endl;
    }
}

void print(double **matrix, int row, int column){
    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << " " << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int **addMatrix(int **matrixA, int **matrixB, int row, int column){
    int **matrixC = create_matrix_int(row, column);     //tworzyenie macierzy wynikowej
    //dodawanie
    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrixC;
}

double **addMatrix(double **matrixA, double **matrixB, int row, int column){
    double **matrixC = create_matrix_double(row, column);

    for (int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrixC;
}

int **subtractMatrix(int **matrixA, int **matrixB, int row, int column) {

    int **matrixC = create_matrix_int(row, column);
    //odejmowanie
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrixC;
}

double **subtractMatrix(double **matrixA, double **matrixB, int row, int column){

    double **matrixC = create_matrix_double(row, column);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrixC;
}

int **multiplyMatrix(int **matrixA, int **matrixB, int row, int columnA, int columnB){
    int **matrixC = create_matrix_int(row, columnB);

    for (int i = 0; i < row; i++){
        for(int j = 0; j < columnB; j++){
            int sum= 0; //zerowana po obrocie petli
            for (int k = 0; k < columnA; k++)
                sum+= (matrixA[i][k] * matrixB[k][j]);
            matrixC[i][j] = sum; //zapisywanie wyniku
        }
    }
    return matrixC;
}

double **multiplyMatrix(double **matrixA, double **matrixB, int rowA, int columnA, int columnB){
    double **matrixC = create_matrix_double(rowA, columnB);

    for (int i = 0; i < rowA; i++){
        for(int j = 0; j < columnB; j++){
            double sum= 0; //zerowana po obrocie petli
            for (int k = 0; k < columnA; k++)
                sum+= (matrixA[i][k] * matrixB[k][j]);
            matrixC[i][j] = sum; //zapisywanie wyniku
        }
    }
    return matrixC;
}

int **multiplyByScalar(int **matrix, int row,int column,int scalar){
    int **matrixC = create_matrix_int(row, column);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            matrixC[i][j] = matrix[i][j] * scalar;
        }
    }
    return matrixC;
}

double **multiplyByScalar(double **matrix, int row,int column,double scalar){
    double **matrixC = create_matrix_double(row, column);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            matrixC[i][j] = matrix[i][j] * scalar;
        }
    }
    return matrixC;
}

int **transpozeMatrix(int **matrix, int row, int column){
    int **matrixC = create_matrix_int(column, row);

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            matrixC[j][i] = matrix[i][j];
        }
    }
    return matrixC;
}

double **transpozeMatrix(double **matrix, int row, int column){
    double **matrixC = create_matrix_double(column, row);

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            matrixC[j][i] = matrix[i][j];
        }
    }
    return matrixC;
}

int **powerMatrix(int **matrix, int row, int column, int pow){
    int **matrixC = create_matrix_int(row, column);
    if (pow == 0){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                if (i == j){
                    matrixC[i][j] = 1;
                }
                else{
                    matrixC[i][j] = 0;
                }
            }
        }
        return matrixC;
    }

    else if (pow == 1){ //dla potegi 1 zwraca macierz bez zmian
        return matrix;
    }

    else {         // mnozenie macierzy z powtarzajacya sie funkcja powerMatrix
        return multiplyMatrix(matrix, powerMatrix(matrix, row, column, pow - 1), row, column, column);
    }
}

double **powerMatrix(double **matrix, int row, int column, double pow){
    double **matrixC = create_matrix_double(row, column);
    if (pow == 0){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                if (i == j){
                    matrixC[i][j] = 1;
                }
                else{
                    matrixC[i][j] = 0;
                }
            }
        }
        return matrixC;
    }

    else if (pow == 1){
        return matrix;
    }

    else {
        return multiplyMatrix(matrix, powerMatrix(matrix, row, column, pow - 1), row, column, column);
    }
}

int **submatrix(int **matrix, int rowI, int columnI, int matrix_size){
    int i = 0, j = 0;
    int **matrixC = create_matrix_int(matrix_size, matrix_size);

    for (int w = 0; w < matrix_size; w++){
        for (int k = 0; k < matrix_size; k++){
            if (w != rowI && k != columnI){
                matrixC[i][j++] = matrix[w][k];

                if (j == matrix_size - 1){
                    j = 0;
                    i++;
                }
            }
        }
    }
    return matrixC;
}

double **submatrix(double **matrix, int rowI, int columnI, int matrix_size){
    int i = 0, j = 0;
    double **matrixC = create_matrix_double(matrix_size, matrix_size);

    for (int w = 0; w < matrix_size; w++){
        for (int k = 0; k < matrix_size; k++){
            if (w != rowI && k != columnI){
                matrixC[i][j++] = matrix[w][k];

                if (j == matrix_size - 1){
                    j = 0;
                    i++;
                }
            }
        }
    }
    return matrixC;
}

int determinantMatrix(int **matrix, int row, int column){
    if (row == 1){ //dla macierzy 1x1
        return matrix[0][0];
    }
    else if(row == 2){ // dla macierzy 2x2 mnoze odpowiednie komoreki
        return (matrix[0][0] * matrix[1][1])-(matrix[0][1] * matrix[1][0]);
    }
    else{
        int sum = 0;
        int sign = 1;
        int **matrixP;

        for(int i = 0; i < row; i++){
            matrixP = submatrix(matrix, 0, i, row);
            sum += sign * matrix[0][i] * determinantMatrix(matrixP, row - 1, row -1);
            sign = -sign;
        }
        return sum;

    }
}

double determinantMatrix(double **matrix, int row, int column){
    if (row == 1){
        return matrix[0][0];
    }
    else if(row == 2){
        return (matrix[0][0] * matrix[1][1])-(matrix[0][1] * matrix[1][0]);
    }
    else{
        int sum = 0;
        int sign = 1;
        double **matrixP;

        for(int i = 0; i < row; i++){
            matrixP = submatrix(matrix, 0, i, row);
            sum += sign * matrix[0][i] * determinantMatrix(matrixP, row - 1, column -1);
            sign = -sign;
        }
        return sum;
    }
}

bool matrixIsDiagonal(int **matrix, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if((i != j) && (matrix[i][j] != 0)){
                return false;
            }
        }
    }
    return true;
}

bool matrixIsDiagonal(double **matrix, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if((i != j) && (matrix[i][j] != 0)){
                return false;
            }
        }
    }
    return true;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(double *a, double *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortRow (int *tab, int column){
    for(int i = 0; i < column - 1; i++){
        for(int j = 0; j < column - 1; j++){
            if(tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
        }
    }
}

void sortRow (double *tab, int column){
    for(int i = 0; i < column - 1; i++){
        for(int j = 0; j < column - 1; j++){
            if(tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
        }
    }
}

void sortRowsInMatrix(int **matrix, int row,int column){
    for(int i = 0; i < row; i++){ //sortowanie na kolejnych wierszach
        sortRow(matrix[i], column);
    }
}

void sortRowsInMatrix(double **matrix, int row,int column){
    for(int i = 0; i < row; i++){
        sortRow(matrix[i], column);
    }
}



