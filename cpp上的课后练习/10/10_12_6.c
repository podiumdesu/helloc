//
// Created by PetnaKanojo on 30/04/2017.
//

/* int grid[30][100];
 * 1. 用1种写法表示grid[22][56]   &grid[22][56]
 *    int *ptr;
 *      *(*(ptr+22)+56)
 * 2. 用2种写法表示grid[22][0]   &grid[22][0]   grid[22]
 *    int *ptr;
 *      *grid[22];
 *      *(ptr+22);
 * 3. 用3种写法表示grid[0][0];   &grid[0][0]  grid[0]  int * grid
 *    int *ptr;
 *      **ptr;
 *      grid[0][0];
 *      *grid[0];
 */

/* 7)正确声明以下变量
 * int digits[10];
 * float rates[6];
 * int mat[3][5]; //如何用指针写？？
 * int * ptr[20];
 * char (*ptr)[20];
 */

/* 8)
 * int array[] = {1,2,4,8,16,32}
 * a[2] = 4;
 * int array[100] = {[99] = -1}
 * int array[100] = {[5] = 101,[10]=101,101,101,101 }
 */

/* 9)内含10个元素的数组下标范围是0-9
 */

/* 10)float rootbeer[10],things[10][5],*pf,value = 2.2;
 * int i = 3;
 *
 * 有效
 * 无效，&rootbeer是个鬼的地址哦
 * 无效，地址怎么可以等于float型
 *
 *
 * printf("%f",rootbeer);   有效，打印的是rootbeer[0];  x 无效
 *
 *
 * 有效
 * 无效
 *
 *
 * pf = value     有效，将value的地址存入pf  x 无效 value不是地址
 *
 * 有效
 */

/* 11) 声明一个800x600的int型数组
 * int array[800][600]
 *
 */
