#include <studio.h>
#include <math.h>

main() {
  int x = 1, y = 1, z = 1;
  int *px, *py ;
px = &x;
py = &y;
z = (z + 1) % 4,
*px = (5 + *py) / z;
*py = (*px + 2) / *px;
printf("x=%d\t y=%d\t z=%d\t", x, y, z);
	
  return 0;
}

  
