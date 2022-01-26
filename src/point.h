#ifndef POINT_H
#define POINT_H

typedef struct { 
	int i;
	int j;
    int direction;
	int wordLength;
} POINT;


#define ROW(P) (P).i
#define COLUMN(P) (P).j
#define DIRECTION(P) (P).direction
#define WORDLENGTH(P) (P).wordLength
        
POINT MakePOINT (int i, int j, int direction, int length);

#endif