/*
 * FIFO.h
 *
 *  Created on: 17 mai 2021
 *      Author: safae
 */

#ifndef INC_FIFO_H_
#define INC_FIFO_H_
#include "main.h"

#define data_len  1024//453
#define data_len2  453
//#define data_len3  5120//1024//453

int courbe1[data_len];
int courbe2[data_len];
int len_courbe1 ;
int len_courbe2 ;


void initialiser();
int empiler(int data);
int depiler();

#endif /* INC_FIFO_H_ */
