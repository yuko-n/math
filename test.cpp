int main(){
	ifstream file("input.txt");
	int size;
	file >> size;
	double**  matrix;
	double* col;
	double* res;
	res = new double[size];
	col = new double[size];
	matrix = new double*[size];
	for (int i =0;i<size;i++){
		matrix[i] = new double[size];
	}
	cout << "Matrix:\n";
	for (int i=0; i<size; i++){
		for(int j=0; j<size+1 ;j++){
			file >> matrix[i][j];
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "\n";
	gauss(matrix, col, size);
	return 0;
}