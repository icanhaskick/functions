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
a) 24.0	e) 53.25
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
  
	int a, b;
	cin >> a >> b;
  double c = a, d = b;
  double div = c/d;
	//soma dos números
	cout <<"Soma: " << a + b << endl;

	//subtração do primeiro pelo segundo
	cout << "Subtração (primeiro pelo segundo): " << a - b << endl;
	
	//subtração do segundo pelo primeiro
	cout << "Subtração (segundo pelo primeiro): " << b - a << endl;

	//produto dos números
	cout << "Produto: " << a*b << endl;

	//divisão do primeiro pelo segundo
	cout << "Divisão (primeiro pelo segundo): " << div << endl;

	//quociente inteiro da divisão do primeiro pelo segundo
	cout << "Quociente inteiro da divisão do primeiro pelo segundo: " << a/b << endl;

	//resto da divisão
	cout << "Resto da divisão: " << a%b << endl;
	return 0;
}

//4
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){

	cout << "Digite uma frase: " << endl;
	string palavra;
	string aux, aux1;
	//res será nosso resultado
	bool res = true;
	getline(cin, palavra);
	//vamos pular os espacos e caracteres indesejados da nossa string original e armazena-los em aux1
	for(int i = 0; i < palavra.length(); i++){
		if(palavra[i] == '!') i++;
		else if(palavra[i] == '-');
		else if(palavra[i] == '?');
		else if(palavra[i] == ',');
		else if(palavra[i] == '.');
		else if(palavra[i] != ' ') aux1 += palavra[i];
	}
	//Vamos transformar todas as letras em letras minusculas para facilitar a comparacao futuramente
	for(int i = 0; i < aux1.length(); i++){
		aux1[i] = tolower(aux1[i]);
	}
	//inversão da string aux1 (que será armazenada na string aux)
	for(int j = aux1.length()-1; j > -1 ; j--){
		aux += aux1[j];
	}

	//comparação da string aux1 com string aux
	//caso uma letra seja diferente o laço é quebrado e será atribuído o valor false para res (a palavra não é um palíndromo)
	
	for(int i = 0; i < aux1.length(); i++){
		if(aux[i] != aux1[i]){
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
	getline(cin, a);
	cin >> sub;
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

	double v[5];
  int codigo;
  cout << "Digite os valores do vetor: ";
	for(int i = 0; i < 5; i++){
		cin >> v[i];
	}
  cout << "Digite o codigo: ";
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

//12

/*A recursividade de funcoes se consiste na chamada recursiva de uma funcao, na qual a propria funcao chama a ela mesma. Uma de suas vantagens e a economia e reutilizacao de codigo, facilitando a resolucao de problemas e economizando espaco no codigo. Por outro lado, uma desvantagem pode ser sua complexidade de aplicacao e a grande quantidade de chamadas na pilha, diminuindo a velocidade de execucao do programa.*/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// fibonacci

int fib(int a){
	if (a <= 2) return 1;
	else return fib(a-1) + fib(a-2);
}

int main(){
	int a;
	cout << "Digite a posição do termo da sequência" << endl;
	cin >> a;
	cout << fib(a) << endl;
	return 0;
} 


//5 (Nao funciona, pois falta fechar o colchete da funcao main())
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

//14

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void troca1(int *d){
  int aux;
  cin >> aux;
  *d = aux;
}

void troca2(double *e){
  double aux;
  cin >> aux;
  *e = aux;
}

void troca3(char *f){
  char aux;
  cin >> aux;
  *f = aux;
}

int main(){
  int a;
  double b;
  char c;

  cin >> a >> b >> c;  

  cout << "Valor inicial da variavel inteira: " << a << endl;
  cout << "Valor inicial da variavel real: " << b << endl;
  cout << "Valor inicial da variavel char: " << c << endl;

  troca1(&a);
  cout << "Novo valor atribuido a variavel inteira: " << a << endl;

  troca2(&b);
  cout << "Novo valor atribuido a variavel real: " << b << endl;

  troca3(&c);
  cout << "Novo caractere atribuido a variavel char: " << c << endl;
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

//struct (RG)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

//criação do struct
struct pessoa{
	int rg;
	int cpf;
	string nome;
};

//função que define o critério de organização para a função sort() poder ordenar os cadastrados baseado no valor do rg
bool compare(pessoa a, pessoa b){
	if(a.rg < b.rg)
		return 1;
	else 
		return 0;
}

//função de busca pelo rg inserido no final do programa
int busca(pessoa cadastro[], int rg_busca, int quant_pessoas){
	int encontrou = -1;
	//laço que passa pelos RG's, caso o valor inserido coincida com um rg
	//do vetor, retornamos a variável encontrou
	//(que contem a posição do RG no vetor ordenado)
	for(int i = 0; i < quant_pessoas; i++){
		if(cadastro[i].rg == rg_busca) encontrou = (i+1);
	}

	if(encontrou != -1) return encontrou;
	else return -1;
}
int main(){
	struct pessoa cadastro[100];
	unsigned int quant_pessoas, rg_busca;
	cout << "Digite a quantidade de cadastrados: ";
	cin >> quant_pessoas;

	//entrada de dados
	for(int i = 0; i < quant_pessoas; i++){
		cout << "Digite seu primeiro nome: ";
		cin >> cadastro[i].nome;
		
		cout << "Digite seu cpf: ";
		cin >> cadastro[i].cpf;

		cout << "Digite seu rg: ";
		cin >> cadastro[i].rg;
		
	}
	//ordenação crescente do vetor de cadastrados baseado no valor do rg
	sort(cadastro, cadastro + quant_pessoas, compare);

	cout << "Digite o numero do rg a ser buscado: ";
	cin >> rg_busca;
	cout << endl;

	//final do programa (chamando a função de busca)
	cout << "O RG indicado encontra-se no indice: " << busca(cadastro, rg_busca, quant_pessoas) << " do vetor RG ordenado (caso o valor seja -1 o RG inserido nao existe)" << endl;
	return 0;
}


```
