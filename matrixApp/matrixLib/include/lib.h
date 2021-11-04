#include <iostream>
#include <string>
#include <iomanip>
void help();
bool check(std::string command);
int **create_matrix_int(int row, int column);
double **create_matrix_double(int row, int column);
bool fill_matrix(int **matrix, int row, int column);
bool fill_matrix(double **matrix, int row, int column);
void print(int **matrix, int row, int column);
void print(double **matrix, int row, int column);
int **addMatrix(int **matrixA, int **matrixB, int row, int column);
double **addMatrix(double **matrixA, double **matrixB, int row, int column);
int **subtractMatrix(int **matrixA, int **matrixB, int row, int column);
double **subtractMatrix(double **matrixA, double **matrixB, int row, int column);
int **multiplyMatrix(int **matrixA, int **matrixB, int rowA, int columnA, int columnB);
double **multiplyMatrix(double **matrixA, double **matrixB, int rowA, int columnA, int columnB);
int **multiplyByScalar(int **matrix, int row,int column,int scalar);
double **multiplyByScalar(double **matrix, int row,int column,double scalar);
int **transpozeMatrix(int **matrix, int row, int column);
double **transpozeMatrix(double **matrix, int row, int column);
int **powerMatrix(int **matrix, int row, int column, int pow);
double **powerMatrix(double **matrix, int row, int column, double pow);
int **submatrix(int **matrix, int rowI, int columnI, int matrix_size);
double **submatrix(double **matrix, int rowI, int columnI, int row);
int determinantMatrix(int **matrix, int row, int column);
double determinantMatrix(double **matrix, int row, int column);
bool matrixIsDiagonal(int **matrix, int row, int column);
bool matrixIsDiagonal(double **matrix, int row, int column);
void swap(int *a, int *b);
void swap(double *a, double *b);
void sortRow (int *tab, int column);
void sortRow (double *tab, int column);
void sortRowsInMatrix(int **matrix, int row,int column);
void sortRowsInMatrix(double **matrix, int row,int column);
