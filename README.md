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

### PEOO
```c++
//1
a) 24	e) 53.25
b) 6	f) 10
c) 0	g) 3
d) 0	h) 1

//2
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	double nota1, nota2, nota3;
	//lê as notas
	cin >> nota1 >> nota2 >> nota3;
	//imprime o resultado
	cout << (nota1 + nota2 + nota3)/3 << endl;
	return 0;
}

//3
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);

	double a, b;
	cin >> a >> b;

	//soma dos números
	cout <<"Soma: " << a + b << endl;

	//subtração do primeiro pelo segundo
	cout << "Subtração (primeiro pelo segundo): " << a - b << endl;
	
	//subtração do segundo pelo primeiro
	cout << "Subtração (segundo pelo primeiro): " << b - a << endl;

	//produto dos números
	cout << "Produto: " << a*b << endl;

	//divisão do primeiro pelo segundo
	cout << "Divisão (primeiro pelo segundo): " << a/b << endl;

	//quociente inteiro da divisão do primeiro pelo segundo
	int c = a, d = b;
	cout << "Quociente inteiro da divisão do primeiro pelo segundo: " << c/d << endl;

	//resto da divisão
	cout << "Resto da divisão: " << c%d << endl;
	return 0;
}

//4
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string palavra;
	string aux;
	//res será nosso resultado
	bool res = true;
//	cin >> palavra;
	getline(cin, palavra);
	//inversão da string palavra (que será armazenada na string aux)
	
	for(int j = palavra.length()-1; j > -1 ; j--){
		aux += palavra[j];
	}

	//comparação da string palavra com string aux
	//caso uma letra seja diferente o laço é quebrado e será atribuído o valor false para res (a palavra não é um palíndromo)
	
	for(int i = 0; i < palavra.length(); i++){
		if(aux[i] != palavra[i]){
			res = false;
			break;
		}
	}
	//caso a variável res seja verdadeira a palavra é um palíndromo
	//caso contrário a palavra não é um palindromo
	if(res == true) cout << "Palíndromo" << endl;
	else cout << "Não Palíndromo" << endl;
	return 0;
}

//6
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string a, sub, res;
	cin >> a >> sub;
	int cont;

	for(int i = 0; i < a.length(); i++){
		//caso a letra da palavra seja igual a primeira letra da substring entrar no laço
		if(a[i] == sub[0]){
			cont = 0;
			for(int j = i, k = 0; k < sub.length(); j++, k++){
				//somar a variável cont caso a sequência de letras seja igual a substring
				if(a[j] == sub[k]) ++cont;

				//caso a sequência de palavras seja diferente da sequência
				//da substring, então, sair do laço (consequentemente não há uma substring
				//nesse pedaço da palavra)
				else break;		
			}
			//caso a variável cont possuir o mesmo tamanho da substring
			//adicionar (*) a posição correspondente a substring
			//além disso, atualizar a posição da variável i para a próxima letra
			//após a substring
			if(cont == sub.length()){
			       	res += "*";
				i+=sub.length()-1;
			}
		}
		//caso a letra não seja igual a da substring precisamos apenas adicionar a letra atual a string res
		else res+=a[i];
	}
	cout << res << endl;
	return 0;
}

//7
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int v[5], codigo;
	for(int i = 0; i < 5; i++){
		cin >> v[i];
	}
	cin >> codigo;
	if(codigo == 0);
	else if(codigo == 1){
		for(int i = 0; i < 5; i++){
			cout << v[i];
			if(i < 4) cout << " ";
		}
		cout << endl;
	}
	else if(codigo == 2){
		for(int i = 4; i > -1; i--){
			cout << v[i];
			if(i > 0) cout << " ";
		}
		cout << endl;
	}
	else cout << "Código inválido." << endl;
	return 0;
}

//5 (funciona [elaborar explicação])
#include<stdio.h>

int main(void){
  float nota[100];
  int n, i;

  // float notas[5] = {7,8,9.5,9.9,5.2};
  // printf("Notas[0] = %0.1f\n", notas[0]);
  // printf("Notas[1] = %0.1f\n", notas[1]);
  // printf("Notas[2] = %0.1f\n", notas[2]);
  // printf("Notas[3] = %0.1f\n", notas[3]);
  // printf("Notas[4] = %0.1f\n", notas[4]);

  printf("Número de alunos: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Digite a nota do aluno %d: ", i);
    scanf("%f", &nota[i]);
  }

	return 0;
}


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
