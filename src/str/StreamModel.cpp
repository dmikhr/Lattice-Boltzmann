/*
 * StreamModel.cpp
 * Andreas B�lling, 2012
 * DESCRIPTION - TODO
 */

#include "StreamModel.h"

StreamModel::StreamModel() {
}

//void StreamModel::stream(){
//
//	//vertical streaming
//	for(int i = 0; i < nx; i++){
//		memmove(&f[2][i][0],&f[2][i][1],(ny-1)*sizeof(double));
//		memmove(&f[4][i][1],&f[4][i][0],(ny-1)*sizeof(double));
//		memmove(&f[5][i][0],&f[5][i][1],(ny-1)*sizeof(double));
//		memmove(&f[6][i][0],&f[6][i][1],(ny-1)*sizeof(double));
//		memmove(&f[7][i][1],&f[7][i][0],(ny-1)*sizeof(double));
//		memmove(&f[8][i][1],&f[8][i][0],(ny-1)*sizeof(double));
//	}
//
//	//horizontal streaming
//	for(int j = 0; j < ny; j++){
//		for(int i = 0; i < nx-1; i++){//neg streaming
//			f[3][i][j] = f[3][i+1][j];
//			f[6][i][j] = f[6][i+1][j];
//			f[7][i][j] = f[7][i+1][j];
//		}
//		for(int i = nx-1; i > 0; i--){//pos streaming
//			f[1][i][j] = f[1][i-1][j];
//			f[5][i][j] = f[5][i-1][j];
//			f[8][i][j] = f[8][i-1][j];
//		}
//	}
//}

StreamModel::~StreamModel() {
	// TODO Auto-generated destructor stub
}

void StreamModel::registerF(double ****f){
	this->f = f;
}

void StreamModel::registerN(struct LatticeModel::dimension &n){
	this->n = n;
}

