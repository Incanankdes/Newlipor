#include <stdio.h>
#include <string.h>

int main()
{

  int a, b, c;
  int d = 0;
  int e = 0;
  int f = 0;
  scanf("%d %d", &a, &b);
  int w[a + b];
  int v[a + b];

  while (scanf("%d", &c) != 0)
  {

    w[d] = c;
    d++;
  }

  /*if (a < b)
  {
    c = a;
    a = b;
    b = c;
  }*/

  while (2*e <= a + b)
  {
    if (e < a - 1)
    {
      if (w[e] >= w[e + a] && w[e + a] <= w[e + 1])
      {
        v[f] = w[e + a];
        v[f + 1] = w[e];
      }
      if (w[e] <= w[e + a] && w[e + a] <= w[e + 1])
      {
        v[f] = w[e];
        v[f + 1] = w[e + a];
      }
      if (w[e] <= w[e + a] && w[e + a] >= w[e + 1])
      {
        v[f] = w[e];
        v[f + 1] = w[e + 1];
        w[e + 1] = w[e + a];
      }
    }
    if (e == a - 1)
    {
      v[f] = (w[e] < w[e + a] ? w[e] : w[e + a]);
      v[f + 1] = (w[e] > w[e + a] ? w[e] : w[e + a]);
    }
    if (e >= a)
    {
      v[f] = w[f];
      v[f + 1] = w[f + 1];
    }
    e += 1;
    f += 2;
  }

  for (e = 0; e < a + b; e++)
  {
    printf("%d ", v[e]);
  }

  return 0;
}