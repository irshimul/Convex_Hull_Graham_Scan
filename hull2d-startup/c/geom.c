#include "geom.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


/* **************************************** */
/* returns the signed area of triangle abc. The area is positive if c
   is to the left of ab, 0 if a,b,c are collinear; and negative if c
   is to the right of ab
 */
int signed_area2D(point2D a, point2D b, point2D c) {

  return 1; 
}



/* **************************************** */
/* return 1 if p,q,r collinear, and 0 otherwise */
int collinear(point2D p, point2D q, point2D r) {
  
  return 1; 
}



/* **************************************** */
/* return 1 if c is  strictly left of ab; 0 otherwise */
int left_strictly(point2D a, point2D b, point2D c) {
  
  return 1; 
}


/* return 1 if c is left of ab or on ab; 0 otherwise */
int left_on(point2D a, point2D b, point2D c) {


} 


/* compute the convex hull of the points in p; the points on the CH
are returned as a listx */
pointNode* graham_scan(point2D* p, int n) {

  

  return NULL; 
}

