#include <iostream>
#include <iomanip>
#pragma warning(disable : 4996)
#include <malloc.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	/*int* ptr = new int;
	cin >> *ptr;
	cout << *ptr << " " << ptr;
	delete ptr;*/

	//int n;
	//cin >> n;
	//float* array = new float[n];
	//srand(0);
	//for (int i = 0; i < n; i++)
	//	*(array + i) = (rand() % 10 + 1) / float((rand() % 10 + 1));

	//for (int i = 0; i < n; i++)
	//	cout << setprecision(3) << *(array + i) << "\t";
	//	//printf("%.3f\t", *(array + i));
	//cout << endl;
	//delete[] array;

	/*int n, m, i, j;
	cin >> n >> m;

	float** matrix = new float*[n];
	for (i = 0; i < n; i++)
		*(matrix + i) = new float[m];

	srand(0);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			*(*(matrix + i) + j) = (rand() % 10 + 1) / float((rand() % 10 + 1));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << setprecision(3) << "\t" << *(*(matrix + i) + j);
		cout << endl;
	}

	for (i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;*/

	//int n, m, i, j;
	//cout << "Введите количество строк массива: "; cin >> n;
	//int** ptr = new int* [n]; //Объявление указателя на массив указателей для формирования двумерного массива
	//int* ptr2 = new int[n]; //Массив, хранящий кол-во элементов каждой строки
	//for (i = 0; i < n; i++) {
	//	cout << "Введите количество столбцов " << i + 1 << " строки: "; cin >> *(ptr2 + i);
	//	*(ptr + i) = new int[*(ptr2 + i)]; //Выделяем память, заданного размера для каждой строки
	//	for (j = 0; j < *(ptr2 + i); j++) {
	//		cout << "ptr[" << i << "][" << j << "] = ";
	//		cin >> *(*(ptr + i) + j);
	//	}
	//}

	//for (i = 0; i < n; i++) {
	//	for (j = 0; j < *(ptr2 + i); j++)
	//		cout << "\t" << *(*(ptr + i) + j);
	//	cout << endl;
	//}

	//for (i = 0; i < n; i++)
	//	delete[] *(ptr + i);
	//delete[] ptr;

	int* a = NULL, i = 0, elem;
	char c;
	do {
		cout << "a[" << i << "]=";
		cin >> elem;
		a = (int*)realloc(a, (i + 1) * sizeof(int));
		a[i] = elem;
		i++;
		getchar();
		cout << "Next (y/n)? ";
		c = getchar();
	} while (c == 'y');
	for (int j = 0; j < i; j++)
		cout << "\t" << a[j];
	if (i > 2) i -= 2;
	cout << endl;
	a = (int*)realloc(a, i * sizeof(int)); // уменьшение размера массива на 2
	for (int j = 0; j < i; j++)
		cout << "\t" << a[j];

	system("pause");
	return 0;
}
