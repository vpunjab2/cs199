#include "grid.hpp"

Grid::Grid(){
	dimension = 1;
	arr = new int*[dimension];
}
Grid::Grid(int dimension){
	this->dimension = dimension;
	arr = new int*[this->dimension];
	for(int i=0; i<dimension; i++){
		arr[i] = new int[this->dimension];
	}
}
Grid::Grid(const Grid & obj){
	this->dimension = obj->dimension;
	this->arr = new int*[this->dimension];
	for(int i=0; i<this->dimension; i++){
		this.arr[i] = new int*[this->dimension];
		for(int j=0; j<this->dimension; j++){
			this.arr[i][j] = obj.arr[i][j];
		}
	}
}
~Grid::Grid(){
	for(int i=0; i<this->dimension; i++){
		delete[] arr[i];
	}
	delete[][] arr;
}
const Grid & Grid::operator=(const Grid & obj){
	Grid newg = Grid(this->dimension);
	for(int i=0; i<this->dimension; i++){
		this.arr[i] = new int*[this->dimension];
		for(int j=0; j<this->dimension; j++){
			newg.arr[i][j] = obj.arr[i][j];
		}
	}
	return newg;
}
Grid::void swapRows(int row1, int row2){
	int* swap = new int[dimension];
	for(int i=0; i<this->dimension; i++){
		arr[row1][i] = swap[i];
		arr[row1][i] = arr[row2][i];
		arr[row2][i] = swap[i];
	}
}
const Grid Grid::operator+(const Grid &obj2){
	Grid newg = Grid(this->dimension);
	for(int i=0; i<this->dimension; i++){
		for(int j=0; j<this->dimension; j++){
			newg.arr[i][j] = this.arr[i][j]+obj2.arr[i][j];
		}
	}
	return newg;
}
const Grid::void swapColumns(int col1, int col2){
	int* swap = new int[dimension];
	for(int i=0; i<this->dimension; i++){
		arr[i][col1] = swap[i];
		arr[i][col1] = arr[col2][i];
		arr[i][col2] = swap[i];
	}
}
Grid::Grid multCoords(Grid & obj){
	Grid newg = Grid(obj->dimension);
	for(int i=0; i<this->dimension; i++){
		for(int j=0; j<this->dimension; j++){
			newg.arr[i[j] = obj.arr[i][j]*i*j;
		}
	}
	return newg;
}
Grid::void printGrid(){
	for(int i=0; i<this->dimension; i++){
		for(int j=0; j<this->dimension-1; j++){
		cout<<arr[j][i];	
		}
		cout<<arr[this->dimension-1][i]<<endl;
	}
}