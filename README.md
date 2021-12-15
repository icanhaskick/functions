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

```c++
//1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a, b;
        cin >> a >> b;
        cout << a+b << endl;

        return 0;
}

//2

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a, b;
        cin >> a >> b;
        cout << a-b << endl;

        return 0;
}


//3

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a, b;
        cin >> a >> b;
        cout << a/b << endl;

        return 0;
}

//4

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a;
        cin >> a;
        cout << "metade: " << a/2 << endl;
        cout << "dobro: " << a*2 << endl;

        return 0;
}

//5

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a;
        cin >> a;
        cout << "metade: " << a/2 << endl;
        cout << "quadrado: " << pow(a, 2) << endl;

        return 0;
}

//6
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int a; string b;
        cin >> b >> a;

        cout << "nome: " << b << endl;
        cout << "idade (daqui a 30 anos): " << a+30 << endl;
        return 0;
}

//7

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a,b,c;
        cin >> a >> b >> c;
        cout << "média: " << (a+b+c)/3 << endl;
        return 0;
}

//8

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double a, b;
        cin >> a >> b;
        int c, d;
        c = a; d = b;
        cout <<"soma: " <<  a+b << endl;
        cout <<"subtração do primeiro pelo segundo: " <<  a-b << endl;
        cout <<"subtração do segundo pelo primeiro: "<< b-a << endl;
        cout <<"produto dos números: "<< a*b << endl;
        cout <<"divisão do primeiro pelo segundo: "<< a/b << endl;
        cout <<"quociente inteiro da divisão do primeiro pelo segundo: "<< c/d << endl;
        cout <<"resto da divisão do primeiro pelo segundo: "<< c%d << endl;
        return 0;
}

//9

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        cout << "soma: " << a+b+c+d << endl;
        return 0;
}
 //10
 
 #include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double nota1, nota2, nota3, peso1, peso2, peso3;
        cin >> nota1 >> nota2 >> nota3 >> peso1 >> peso2 >> peso3;
        cout <<"média ponderada: " <<  (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3) << endl;
        return 0;
}

//11
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        double s;
        cin >> s;
        cout <<"salário com aumento: " <<  s*1.25<<" R$" << endl;
        return 0;
}

//12
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

        double s, a;
        cout << "Informe seu salário (em R$): " << endl;
        cin >> s;
        cout << "Informe o aumento (em %): " << endl;
        cin >> a;
        cout <<"Novo salário: "<< s*((a*0.01)+1) <<" R$" << endl;
        return 0;

}

//13
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

//      ios_base::sync_with_stdio(0);
//      cin.tie(0); cout.tie(0);

        double s;
        cout << "Informe seu salário (em R$): ";
        cin >> s;

        cout <<"Salário a receber: " << s*0.98 << endl;

        return 0;

}

//14
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

//      ios_base::sync_with_stdio(0);
//      cin.tie(0); cout.tie(0);

        double s;
        cout << "Informe seu salário (em R$): ";
        cin >> s;

        cout <<"Salário a receber: " << (s+1000)*0.9 << endl;

        return 0;

}

```
