#include "../matrixLib/include/lib.h"

using namespace std;

int main(int argc, char *argv[]) {
    string choice = argv[1];
    if (choice == "help") help();
    else if (check(choice)) { //sprawdzanie czy istnieje podana komenda
        int type;
        cout << "\nPpodaj typ zmiennych na ktorych beda wykonywane operacje:\n";
        cout <<"\t0\tliczby calkowite\n";
        cout << "\t1\tliczby zmiennoprzecinkowe\n";
        cout<<"wybor: ";
        if (!(cin >> type)) {//sprawdzenie czy to liczba
            cout << "Wprowadzono nireprawidlowy znak!\n\n";
            help();
            return 0;
        }
        if (type == 0) {//int
            if (choice == "addMatrix") {//dodawanie
                int **matrixA, **matrixB, **matrixC, rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak!\n\n";
                    help();
                    return 0;
                }
                cout <<"Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak!\n\n";
                    help();
                    return 0;
                }

                //tworzenie macierzy
                matrixA = create_matrix_int(rows, columns);
                matrixB = create_matrix_int(rows, columns);
                cout <<"Podaj liczby calkowite ktore beda znajdowac sie w macierzy A: ";
                if (!fill_matrix(matrixA, rows, columns)) {
                    //wypelnianie macierzy i sprawdzenie czy uztkownik podaje liczby
                    //delokacja pamieci w przypadku bledu
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                cout <<"Podaj liczby calkowite ktore beda znajdowac sie w macierzy B: ";
                if (!fill_matrix(matrixB, rows, columns)) {
                //wypelnianie macierzy i sprawdzenie czy uztkownik podaje liczby
                //delokacja pamieci w przypadku bledu
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows << " ilosc kolumn = " << columns;
                cout << "\n\nMacierz A:\n";
                print(matrixA, rows, columns);
                cout << "\n\nMacierz B:\n";
                print(matrixB, rows, columns);

                matrixC = addMatrix(matrixA, matrixB, rows, columns);
                cout << "Macierz powstala z dodawania:\n";
                print(matrixC, rows, columns);

                //dealokacja
                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;

            }
            else if (choice == "subtractMatrix") {
                int **matrixA, **matrixB, **matrixC, rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                //tworzenie macierzy
                matrixA = create_matrix_int(rows, columns);
                matrixB = create_matrix_int(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    //wypelnienie macierzy i dealokacja w przypadku bledu
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                if (!fill_matrix(matrixB, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                cout << "ilosc wierszy = " << rows << " ilosc kolumn = " << columns;
                cout << "\n\nMacierz A:\n";
                print(matrixA, rows, columns);
                cout << "\n\nMacierz B:\n";
                print(matrixB, rows, columns);

                matrixC = subtractMatrix(matrixA, matrixB, rows, columns);
                cout << "Wynik odejmowania\n";
                print(matrixC, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;

            }
            else if (choice == "multiplyMatrix") {
                int **matrixA, **matrixB, **matrixC, rows, columnA, columnB;
                cout << "Podaj ilosc wierszy macierzy A: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy A: ";
                if (!(cin >> columnA)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy B: ";
                if (!(cin >> columnB)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(rows, columnA);
                matrixB = create_matrix_int(columnA, columnB);

                if (!fill_matrix(matrixA, rows, columnA)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                if (!fill_matrix(matrixB, columnA, columnB)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }

                cout << "Macierz A:\n";
                print(matrixA, rows, columnA);
                cout << "Macierz B:\n";
                print(matrixB, columnA, columnB);

                matrixC = multiplyMatrix(matrixA, matrixB, rows, columnA, columnB);
                cout << "Maciez powstala z pomnozenia:\n";
                print(matrixC, rows, columnB);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;

            }
            else if (choice == "multiplyByScalar") {
                int **matrixA, **matrixC, row, column, scalar;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> row)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> column)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj skalar: ";
                if (!(cin >> scalar)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(row, column);

                if (!fill_matrix(matrixA, row, column)) {
                    for (int i = 0; i < row; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << row << " ilosc kolumn = " << column;
                cout  << "\nMacierz A:\n";
                print(matrixA, row, column);

                matrixC = multiplyByScalar(matrixA, row, column, scalar);
                cout << "Wynik pomnozenia macierzy przez skalar:\n";
                print(matrixC, row, column);

                for (int i = 0; i < row; i++) {
                    delete[] matrixA[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;

            }
            else if (choice == "transpozeMatrix") {
                int **matrixA, **matrixC, row, column;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> row)) {
                    cout << "Wprowadzono nieprawidlowe znaki\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> column)) {
                    cout << "Wprowadzono nieprawidlowe znaki\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(row, column);

                if (!fill_matrix(matrixA, row, column)) {
                    for (int i = 0; i < row; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << row << ", ilosc kolumn = " << column ;
                cout << "\nMacierz A:\n" ;
                print(matrixA, row, column);

                matrixC = transpozeMatrix(matrixA, row, column);
                cout << "Macierz powstala z transponowania macierzy:\n";
                print(matrixC, column, row);

                for (int i = 0; i < row; i++) {
                    delete[] matrixA[i];
                }
                for (int i = 0; i < column; i++) {
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;
            }
            else if (choice == "powerMatrix") {
                int **matrixA, **matrixC, row, column, pow;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> row)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> column)) {
                    cout << "Wprowadzono nieprawidlowe znak\n\n" ;
                    help();
                    return 0;
                }
                cout << "Podaj stopien potegi: ";
                if (!(cin >> pow)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(row, column);

                if (!fill_matrix(matrixA, row, column)) {
                    for (int i = 0; i < row; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << row << ", ilosc kolumn = " << column;
                cout << "\nMacierz A:\n";
                print(matrixA, row, column);

                matrixC = powerMatrix(matrixA, row, column, pow);
                cout << "Wynik potegowania macierzy\n:";
                print(matrixC, row, column);

                for (int i = 0; i < row; i++) {
                    delete[] matrixA[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;
            }
            else if (choice == "determinantMatrix") {
                int **matrixA, row, column, determinant ;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> row)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> column)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(row, column);
                if (!fill_matrix(matrixA, row, column)) {
                    for (int i = 0; i < row; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << row << ", ilosc kolumn = " << column;
                cout << "\nMacierz A:\n";

                print(matrixA, row, column);
                determinant  = determinantMatrix(matrixA, row, column);
                cout << "Wyznacznik macierzy to: " << determinant;

                for (int i = 0; i < row; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
            else if (choice == "matrixIsDiagonal") {
                bool diagonal;
                int **matrixA, rows, columns;

                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_int(rows, columns);
                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows<< ", ilosc kolumn = " << columns ;
                cout<< "\nMacierz A:\n";
                print(matrixA, rows, columns);

                diagonal = matrixIsDiagonal(matrixA, rows, columns);
                if (diagonal) {
                    cout << "Podana macierz jest diagonalna";
                }
                else {
                    cout << "Podana macierz nie jest diagonalna";
                }

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
            else if (choice == "swap") {
                int a, b;
                cout << "Podaj wartosc a: ";
                if (!(cin >> a)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj wartosc b: ";
                if (!(cin >> b)) {
                    cout << "Wprowadzono nieprawidlowe znak\n\n" ;
                    help();
                    return 0;
                }

                cout << "a = " << a << " b = " << b << endl;
                swap(a, b);
                cout << "a = " << a << " b = " << b << endl;
            }
            else if (choice == "sortRow") {
                int columns;
                cout << "Podaj rozmiar tablicy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                int *tab = new int[columns];
                cout << "Podaj liczby do wczytania: \n";

                for (int i = 0; i < columns; i++) {
                    if (!(cin >> tab[i])) {
                        cout << "Wprowadzono nieprawidlowy znak\n\n";
                        delete[] tab;
                        return 0;
                    }
                }

                cout << "Podane liczby: ";
                for (int i = 0; i < columns; i++) {
                    cout << tab[i] << " ";
                }
                cout << "\nLiczby posortowane rosnaco: ";
                sortRow(tab, columns);
                for (int i = 0; i < columns; i++) {
                    cout << tab[i] << " ";
                }
                delete[] tab;
            }
            else if (choice == "sortRowsInMatrix") {
                int **matrixA, rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                matrixA = create_matrix_int(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows<< ", ilosc kolumn = " << columns ;
                cout<< "\nMacierz A przed sortowaniem:\n" ;
                print(matrixA, rows, columns);
                sortRowsInMatrix(matrixA, rows, columns);
                cout << "\nMacierz A po sortowaniu:\n" ;
                print(matrixA, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
        }

        else if (type == 1) {
            if (choice == "addMatrix") {
                double **matrixA, **matrixB, **matrixC;
                int rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }
                matrixA = create_matrix_double(rows, columns);
                matrixB = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                if (!fill_matrix(matrixB, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                cout << "ilosc wierszy = " << rows << ", ilosc kolumn = " << columns;
                cout << "\nMacierz A:\n" ;
                print(matrixA, rows, columns);

                cout <<"\nMacierz B:\n";
                print(matrixB, rows, columns);

                matrixC = addMatrix(matrixA, matrixB, rows, columns);
                cout << "Macierz powstala z dodawania:\n ";
                print(matrixC, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;
            }
            else if (choice == "subtractMatrix") {
                double **matrixA, **matrixB, **matrixC;
                int rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }
                matrixA = create_matrix_double(rows, columns);
                matrixB = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                if (!fill_matrix(matrixB, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                cout << "ilosc wierszy = " << rows << ", ilosc kolumn = " << columns;
                cout << "\nMacierz A:\n" ;
                print(matrixA, rows, columns);
                cout <<"\nMacierz B:\n";
                print(matrixB, rows, columns);

                matrixC = subtractMatrix(matrixA, matrixB, rows, columns);
                cout << "Macierz powstala z odejmowania\n";
                print(matrixC, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;
            }
            else if (choice == "multiplyMatrix") {
                double **matrixA, **matrixB, **matrixC;
                int rows, columnsA, columnsB;
                cout << "Podaj ilosc wierszy macierzy A: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podac ilosc kolumn macierzy A: ";
                if (!(cin >> columnsA)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy B: ";
                if (!(cin >> columnsB)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columnsA);
                matrixB = create_matrix_double(columnsA, columnsB);

                if (!fill_matrix(matrixA, rows, columnsA)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }
                if (!fill_matrix(matrixA, columnsA, columnsB)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                        delete[] matrixB[i];
                    }
                    delete[] matrixA;
                    delete[] matrixB;
                    return 0;
                }

                cout << "Macierz A:\n" ;
                print(matrixA, rows, columnsA);
                cout << "Macierz B:";
                print(matrixA, columnsA, columnsB);

                matrixC = multiplyMatrix(matrixA, matrixB, rows, columnsA, columnsB);
                cout << "Macierz powstala z pomnozenia: \n";
                print(matrixC, rows, columnsB);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixB[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixB;
                delete[] matrixC;

            }
            else if (choice == "multiplyByScalar") {
                double **matrixA, **matrixC, scalar;
                int rows, columns;

                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj skalar: ";
                if (!(cin >> scalar)) {
                    cout << "Wprowadzono nieprawidlowe znaki\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows<< ", ilosc kolumn = "<<columns;
                cout << "\nMacierz A:\n";
                print(matrixA, rows, columns);

                matrixC = multiplyByScalar(matrixA, rows, columns, scalar);
                cout << "Maciez powstala z pomnozenia przez skalar:\n";
                print(matrixC, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;

            }
            else if (choice == "transpozeMatrix") {
                double **matrixA, **matrixC;
                int rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " <<rows<< ", ilosc kolumn = " ;
                cout<< "\nMacierz A:\n" ;

                print(matrixA, rows, columns);

                matrixC = transpozeMatrix(matrixA, rows, columns);
                cout << "Maxierz powstala z transponowania macierzy:\n";
                print(matrixC, columns, rows);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                for (int i = 0; i < columns; i++) {
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;
            }
            else if (choice == "powerMatrix") {
                double **matrixA, **matrixC;
                int rows, columns, pow;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowe znaki\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj stopien potegi: ";
                if (!(cin >> pow)) {
                    cout << "\nWprowadzono nieprawidlowy znak\n\n" ;
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows<< ", ilosc kolumn = " <<columns;
                cout<< "\nMacierz A:\n";

                print(matrixA, rows, columns);

                matrixC = powerMatrix(matrixA, rows, columns, pow);
                cout << "Wynik potegowania macierzy:\n";
                print(matrixC, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                    delete[] matrixC[i];
                }
                delete[] matrixA;
                delete[] matrixC;
            }
            else if (choice == "determinantMatrix") {
                double **matrixA;
                int rows, columns, determinant;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columns);
                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows<< ", ilosc kolumn = "<<columns;
                cout<< "\nMacierz A:\n";
                print(matrixA, rows, columns);
                determinant = determinantMatrix(matrixA, rows, columns);
                cout << "Wyznacznik: " << determinant;

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
            else if (choice == "matrixIsDiagonal") {
                bool result;
                double **matrixA;
                int rows, columns;

                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                matrixA = create_matrix_double(rows, columns);
                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " <<rows<< ", ilosc kolumn = " <<columns;
                cout<< "\nMacierz A:\n";

                print(matrixA, rows, columns);

                result = matrixIsDiagonal(matrixA, rows, columns);

                if (result) cout << "Podana macierz jest diagonalna";
                else cout << "Podana macierz nie jest diagonalna";

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
            else if (choice == "swap") {
                double a, b;
                cout << "Podaj wartosc a: ";
                if (!(cin >> a)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj wartosc b: ";
                if (!(cin >> b)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }

                cout << "a = " << a << " b = " << b << endl;
                swap(a, b);
                cout << "a = " << a << " b = " << b << endl;
            }
            else if (choice == "sortRow") {
                int column;
                cout << "Podaj rozmiar tablicy: ";
                if (!(cin >> column)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                double *tab = new double[column];
                cout << "Podaj liczby do wczytania: " ; //tutu

                for (int i = 0; i < column; i++) {
                    if (!(cin >> tab[i])) {
                        cout << "Wprowadzono nieprawidlowy znak\n\n";
                        delete[] tab;
                        return 0;
                    }
                }

                cout << "Podane liczby: ";
                for (int i = 0; i < column; i++) {
                    cout << tab[i] << " ";
                }
                cout << "\nLiczby posortowane: ";
                sortRow(tab, column);
                for (int i = 0; i < column; i++) {
                    cout << tab[i] << " ";
                }
                delete[] tab;
            }
            else if (choice == "sortRowsInMatrix") {
                double **matrixA;
                int rows, columns;
                cout << "Podaj ilosc wierszy macierzy: ";
                if (!(cin >> rows)) {
                    cout << "Wprowadzono nieprawidlowy znak\n\n";
                    help();
                    return 0;
                }
                cout << "Podaj ilosc kolumn macierzy: ";
                if (!(cin >> columns)) {
                    cout << "Wprowadzono nieprawidlowe znaki\n\n";
                    help();
                    return 0;
                }
                matrixA = create_matrix_double(rows, columns);

                if (!fill_matrix(matrixA, rows, columns)) {
                    for (int i = 0; i < rows; i++) {
                        delete[] matrixA[i];
                    }
                    delete[] matrixA;
                    return 0;
                }

                cout << "ilosc wierszy = " << rows << ", ilosc kolumn = " <<columns;
                cout << "\nMacierz A przed sortowaniem:\n";

                print(matrixA, rows, columns);
                sortRowsInMatrix(matrixA, rows, columns);
                cout << "Macierz A po sortowaniu:\n";
                print(matrixA, rows, columns);

                for (int i = 0; i < rows; i++) {
                    delete[] matrixA[i];
                }
                delete[] matrixA;
            }
        }

        else {
            cout << "Wprowadzono niepoprawny typ zmiennych!!\n\n";
            help();
        }
    }
    else{
        cout << "Wprowadzono bledna komende!!!\n\n";
        help();
    }
}


