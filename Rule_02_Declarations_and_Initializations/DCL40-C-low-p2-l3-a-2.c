/* In a.c */
extern int *a;   /* UB 15 */
 
int f(unsigned int i, int x) {
  int tmp = a[i];   /* UB 37: read access */
  a[i] = x;         /* UB 37: write access */
  return tmp;
}
