#include "shape.h" /* Shape class interface */
#include <stdio.h> /* for printf() */
#include <stdlib.h>
int main() {
 printf("test\n");
 Shape s1, s2;
 Shape_ctor(&s1, 0, 1);
 Shape_ctor(&s2, -1, 2);
 printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
 printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
 printf("Shape s1's privates (x=%d, y=%d)\n", s1.x, s1.y);
 Shape_moveBy(&s1, 2, -4);
 Shape_moveBy(&s2, 1, -2);
 printf("Shape s1(x=%d,y=%d)\n", Shape_getX(&s1), Shape_getY(&s1));
 printf("Shape s2(x=%d,y=%d)\n", Shape_getX(&s2), Shape_getY(&s2));
 return 0;
}