/*
 * FIFO.c
 *
 *  Created on: 17 mai 2021
 *      Author: safae
 */
#include "FIFO.h"



void initialiser(){
	len_courbe1 = 0;
	len_courbe2 = 0;
	for(int i=0; i< data_len; i++){
		courbe1[i]=0;
		courbe2[i]=0;
	}
}
int empiler(int data){
	depiler();
	courbe1[data_len2 - 1]= data;
	//len_courbe1 ++;
	return 1;
}
int depiler(){
	for(int i =0; i< data_len2-1;i++){
		courbe1[i]= courbe1[i+1];
	}
	return 0;
}

int empiler2(int data){
	depiler2();
	courbe2[data_len2 - 1]= data;
	//len_courbe1 ++;
	return 1;
}
int depiler2(){
	for(int i =0; i< data_len2-1;i++){
		courbe2[i]= courbe2[i+1];
	}
	return 0;
}
