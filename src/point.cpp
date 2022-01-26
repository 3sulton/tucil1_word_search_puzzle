#include "point.h"

POINT MakePOINT (int i, int j, int direction, int length) {
    POINT p;
    ROW(p) = i;
    COLUMN(p) = j;
    DIRECTION(p) = direction;
    WORDLENGTH(p) = length;
    return p;
}