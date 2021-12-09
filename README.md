# functions (algorithms)

### Quicksort

```c++
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

//usar dentro do main()
qsort(v, tam, sizeof(int), compare);
```
### MDC & MMC

```c++
//mdc
long long gcd(int a, int b) {return b == 0 ? a : gcd(b, a%b);}

//mmc
long long lcm(int a, int b) { return a*b/gcd(a, b); }
```
