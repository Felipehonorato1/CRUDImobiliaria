
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

typedef struct{
    char titulo[31], tipo_negocio, logradouro[101], cep[11], bairro[31], cidade[31];
    int pavimentos, quartos,numero;
    float area_construida, area_terreno, valor_imovel;
}tCasa;
// teste
typedef struct{
    char titulo[31], tipo_negocio, logradouro[101], cep[11], bairro[31], cidade[31], posicao[10];
    int pavimentos, quartos, numero, vagas_garagem, andar;
    float area, valor_imovel, valor_condominio;
}tApto;

typedef struct{
    char titulo[31], tipo_negocio, logradouro[101], cep[11], bairro[31], cidade[31];
    int numero;
    float area, valor_imovel;
}tLote;

void ListarTodos(tCasa *casa,tApto *apto,tLote *lote){
    int i;
    for(i=0;i<N;i++){
        if(casa[i].numero != 0 ){
            printf("\n");
            printf("\t\t\t CASA\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }

        if(apto[i].numero != 0 ){
            printf("\n");
            printf("\t\t\t APARTAMENTO\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }

        if(lote[i].numero != 0 ){
            printf("\n");
            printf("\t\t\t LOTE\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void ListarCasas(tCasa *casa){
    int i;
    for(i=0;i<N;i++){
        if(casa[i].numero != 0){
            printf("\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }
    }
}

void ListarAptos(tApto *apto){
    int i;
    for(i=0;i<N;i++){
        if(apto[i].numero != 0){
            printf("\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }
    }
}

void ListarLotes(tLote *lote){
    int i;
    for(i=0;i<N;i++){
        if(lote[i].numero != 0){
            printf("\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(lote[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(lote[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void BuscaBairro(tCasa *casa,tLote *lote,tApto *apto,char *bairro){
    int i;
    for(i=0;i<N;i++){
        if(!strcmp(casa[i].bairro,bairro)){
            printf("\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }

        if(!strcmp(apto[i].bairro,bairro)){
            printf("\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }


        if(!strcmp(lote[i].bairro,bairro)){
            printf("\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void BuscaCidade(tCasa *casa,tLote *lote,tApto *apto,char *cidade){
    int i;
    for(i=0;i<N;i++){
        if(!strcmp(casa[i].cidade,cidade)){
            printf("\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }

        if(!strcmp(apto[i].cidade,cidade)){
            printf("\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }


        if(!strcmp(lote[i].cidade,cidade)){
            printf("\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void BuscaTitulo(tCasa *casa,tLote *lote,tApto *apto,char *titulo){
    int i;
    for(i=0;i<N;i++){
        if(!strcmp(casa[i].titulo,titulo)){
            printf("\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }

        if(!strcmp(apto[i].titulo,titulo)){
            printf("\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }


        if(!strcmp(lote[i].titulo,titulo)){
            printf("\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void BuscaPrecoMaximo(tCasa *casa,tLote *lote, tApto *apto,float preco){
     int i;
    for(i=0;i<N;i++){
        if(casa[i].valor_imovel<preco){
            printf("\n");
            printf("\t\t Titulo: %s\n",casa[i].titulo);
            if(casa[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(casa[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",casa[i].valor_imovel);
            printf("\t\t CEP: %d\n",casa[i].cep);
            printf("\t\t Rua: %s\n",casa[i].logradouro);
            printf("\t\t Numero: %d\n",casa[i].numero);
            printf("\t\t Bairro: %s\n",casa[i].bairro);
            printf("\t\t Cidade: %s\n",casa[i].cidade);
            printf("\t\t Quartos: %d\n",casa[i].quartos);
            printf("\t\t Pavimentos: %d\n",casa[i].pavimentos);
            printf("\t\t Area do terreno: %.2fm\n",casa[i].area_terreno);
            printf("\t\t Area construida: %.2fm\n",casa[i].area_construida);
        }

        if(apto[i].valor_imovel<preco){
            printf("\n");
            printf("\t\t Titulo: %s\n",apto[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do imovel: R$%.2f\n",apto[i].valor_imovel);
            printf("\t\t Valor do condominio: R$%.2f\n",apto[i].valor_condominio);
            printf("\t\t CEP: %d\n",apto[i].cep);
            printf("\t\t Rua: %s\n",apto[i].logradouro);
            printf("\t\t Numero: %d\n",apto[i].numero);
            printf("\t\t Andar ou numero do apartamento: %d\n",apto[i].andar);
            printf("\t\t Bairro: %s\n",apto[i].bairro);
            printf("\t\t Cidade: %s\n",apto[i].cidade);
            printf("\t\t Pavimentos: %d\n",apto[i].pavimentos);
            printf("\t\t Posicao: %s\n",apto[i].posicao);
            printf("\t\t Quartos: %d\n",apto[i].quartos);
            printf("\t\t Vagas de garagem: %d\n",apto[i].vagas_garagem);
            printf("\t\t Area do apartamento: %.2fm\n",apto[i].area);
        }

        if(lote[i].valor_imovel<preco){
            printf("\n");
            printf("\t\t Titulo: %s\n",lote[i].titulo);
            if(apto[i].tipo_negocio == 'V') printf("\t\t Disponivel para venda\n");
            if(apto[i].tipo_negocio == 'A') printf("\t\t Disponivel para aluguel\n");
            printf("\t\t Valor do lote: R$%.2f\n",lote[i].valor_imovel);
            printf("\t\t CEP: %d\n",lote[i].cep);
            printf("\t\t Rua: %s\n",lote[i].logradouro);
            printf("\t\t Numero: %d\n",lote[i].numero);
            printf("\t\t Bairro: %s\n",lote[i].bairro);
            printf("\t\t Cidade: %s\n",lote[i].cidade);
            printf("\t\t Area do terreno: %.2fm\n",lote[i].area);
        }
    }
}

void MenuModeloImovel(){
    puts("==================================================================================");
    printf("\t\t [1] Buscar terrenos\n");
    printf("\t\t [2] Buscar apartamentos\n");
    printf("\t\t [3] Buscar casas\n");
    puts("==================================================================================");
}

void MenuPrincipal(){
    printf("==================================================================================\n");
    printf("\t\t [1] Cadastrar imovel\n ");
    printf("\t\t [2] Buscar imovel\n");
    printf("\t\t [6] Sair\n ");
    printf("==================================================================================\n");
}

void MenuBusca(){
    puts("==================================================================================");
    printf("\t\t [1] Busca por modelo de imovel\n");
    printf("\t\t [2] Busca por preco\n");
    printf("\t\t [3] Busca por titulo\n");
    printf("\t\t [4] Busca por bairro\n");
    printf("\t\t [5] Busca por cidade\n");
    printf("\t\t [6] Listar todos\n");
    puts("==================================================================================");
}

void LeCasa(tCasa *casa, FILE *fp){
    fgets(casa->titulo, 31, fp);
    casa->titulo[strlen(casa->titulo)-1] = '\0';

    fscanf(fp, "%c%*c", &casa->tipo_negocio);

    fscanf(fp, "%f%*c", &casa->valor_imovel);

    fgets(casa->cep, 11, fp);

    fgets(casa->logradouro, 31, fp);
    casa->logradouro[strlen(casa->logradouro)-1] = '\0';

    fscanf(fp, "%d%*c", &casa->numero);

    fgets(casa->bairro, 31, fp);
    casa->bairro[strlen(casa->bairro)-1] = '\0';

    fgets(casa->cidade, 31, fp);
    casa->cidade[strlen(casa->cidade)-1] = '\0';

    fscanf(fp, "%d%*c", &casa->pavimentos);

    fscanf(fp, "%d%*c", &casa->quartos);

    fscanf(fp, "%f%*c", &casa->area_terreno);

    fscanf(fp, "%f%*c", &casa->area_construida);
}

void LeApto(tApto *apto, FILE *fp){
    fgets(apto->titulo, 31, fp);
    apto->titulo[strlen(apto->titulo)-1] = '\0';

    fscanf(fp, "%c%*c", &apto->tipo_negocio);

    fscanf(fp, "%f%*c", &apto->valor_imovel);

    fscanf(fp, "%f%*c", &apto->valor_condominio);

    fgets(apto->cep, 11, fp);

    fgets(apto->logradouro, 31, fp);
    apto->logradouro[strlen(apto->logradouro)-1] = '\0';

    fscanf(fp, "%d%*c", &apto->numero);

    fscanf(fp, "%d%*c", &apto->andar);

    fgets(apto->bairro, 31, fp);
    apto->bairro[strlen(apto->bairro)-1] = '\0';

    fgets(apto->cidade, 31, fp);
    apto->cidade[strlen(apto->cidade)-1] = '\0';

    fscanf(fp, "%d%*c", &apto->pavimentos);

    fgets(apto->posicao, 10, fp);
    apto->posicao[strlen(apto->bairro)-1] = '\0';

    fscanf(fp, "%d%*c", &apto->quartos);

    fscanf(fp, "%d%*c",&apto->vagas_garagem);

    fscanf(fp, "%f%*c", &apto->area);
}

void LeLote(tLote *lote, FILE *fp){
    fgets(lote->titulo, 31, fp);
    lote->titulo[strlen(lote->titulo)-1] = '\0';

    fscanf(fp, "%c%*c", &lote->tipo_negocio);

    fscanf(fp, "%f%*c", &lote->valor_imovel);

    fgets(lote->cep, 11, fp);

    fgets(lote->logradouro, 31, fp);
    lote->logradouro[strlen(lote->logradouro)-1] = '\0';

    fscanf(fp, "%d%*c", &lote->numero);

    fgets(lote->bairro, 31, fp);
    lote->bairro[strlen(lote->bairro)-1] = '\0';

    fgets(lote->cidade, 31, fp);
    lote->cidade[strlen(lote->cidade)-1] = '\0';

    fscanf(fp, "%f%*c", &lote->area);
}

void CadastraCasa(tCasa *casa, FILE *fp){
    printf("\t\t Titulo: ");
    fgets(casa->titulo,31,stdin);
    casa->titulo[strlen(casa->titulo)-1] = '\0';

    printf("\t\t Venda (V) ou aluguel (A): ");
    scanf("%c%*c", &casa->tipo_negocio);

    printf("\t\t Valor do imovel: ");
    scanf("%f%*c", &casa->valor_imovel);

    printf("\t\t CEP: ");
    fgets(casa->cep, 11, stdin);

    printf("\t\t Rua: ");
    fgets(casa->logradouro,31,stdin);
    casa->logradouro[strlen(casa->logradouro)-1] = '\0';

    printf("\t\t Numero: ");
    scanf("%d%*c",&casa->numero);

    printf("\t\t Bairro: ");
    fgets(casa->bairro,31,stdin);
    casa->bairro[strlen(casa->bairro)-1] = '\0';

    printf("\t\t Cidade: ");
    fgets(casa->cidade,31,stdin);
    casa->cidade[strlen(casa->cidade)-1] = '\0';

    printf("\t\t Pavimentos: ");
    scanf("%d%*c",&casa->pavimentos);

    printf("\t\t Quartos: ");
    scanf("%d%*c",&casa->quartos);

    printf("\t\t Area do terreno: ");
    scanf("%f%*c", &casa->area_terreno);

    printf("\t\t Area construida: ");
    scanf("%f%*c", &casa->area_construida);
}

void CadastraApto(tApto *apto, FILE *fp){
    printf("\t\t Titulo: ");
    fgets(apto->titulo,31,stdin);
    apto->titulo[strlen(apto->titulo)-1] = '\0';

    printf("\t\t Venda (V) ou aluguel (A): ");
    scanf("%c%*c", &apto->tipo_negocio);

    printf("\t\t Valor do imovel: ");
    scanf("%f%*c", &apto->valor_imovel);

    printf("\t\t Valor do condominio: ");
    scanf("%f%*c", &apto->valor_condominio);

    printf("\t\t CEP: ");
    fgets(apto->cep, 11, stdin);

    printf("\t\t Rua: ");
    fgets(apto->logradouro,31,stdin);
    apto->logradouro[strlen(apto->logradouro)-1] = '\0';

    printf("\t\t Numero: ");
    scanf("%d%*c",&apto->numero);

    printf("\t\t Andar ou numero do apartamento: ");
    scanf("%d%*c",&apto->andar);

    printf("\t\t Bairro: ");
    fgets(apto->bairro,31,stdin);
    apto->bairro[strlen(apto->bairro)-1] = '\0';

    printf("\t\t Cidade: ");
    fgets(apto->cidade,31,stdin);
    apto->cidade[strlen(apto->cidade)-1] = '\0';

    printf("\t\t Pavimentos: ");
    scanf("%d%*c",&apto->pavimentos);

    printf("\t\t Posicao: ");
    fgets(apto->posicao,10,stdin);
    apto->posicao[strlen(apto->bairro)-1] = '\0';

    printf("\t\t Quartos: ");
    scanf("%d%*c",&apto->quartos);

    printf("\t\t Vagas na garagem: ");
    scanf("%d%*c",&apto->vagas_garagem);

    printf("\t\t Area do apartamento: ");
    scanf("%f%*c", &apto->area);
}

void CadastraLote(tLote *lote, FILE *fp){

    printf("\t\t Titulo: ");
    fgets(lote->titulo,31,stdin);
    lote->titulo[strlen(lote->titulo)-1] = '\0';

    printf("\t\t Venda (V) ou aluguel (A): ");
    scanf("%c%*c", &lote->tipo_negocio);

    printf("\t\t Valor do lote: ");
    scanf("%f%*c", &lote->valor_imovel);

    printf("\t\t CEP: ");
    fgets(lote->cep, 11, stdin);

    printf("\t\t Rua: ");
    fgets(lote->logradouro,31,stdin);
    lote->logradouro[strlen(lote->logradouro)-1] = '\0';

    printf("\t\t Numero: ");
    scanf("%d%*c",&lote->numero);

    printf("\t\t Bairro: ");
    fgets(lote->bairro,31,stdin);
    lote->bairro[strlen(lote->bairro)-1] = '\0';

    printf("\t\t Cidade: ");
    fgets(lote->cidade,31,stdin);
    lote->cidade[strlen(lote->cidade)-1] = '\0';

    printf("\t\t Area do terreno: ");
    scanf("%f%*c", &lote->area);
}

void ZeraTudo(tCasa *casa,tApto *apto,tLote *lote){
    int i;
    for(i=0;i<N;i++){
        casa[i].numero = 0;
        lote[i].numero = 0;
        apto[i].numero = 0;
    }

}

int main(){
    int tipoBusca,opcao, tipoImovel, iterCasa = 0, iterApto = 0, iterLote = 0;
    tCasa casa[N];
    tApto apto[N];
    tLote lote[N];
    ZeraTudo(casa,apto,lote);
    FILE *fp;
    char bairroBusca[15];
    char cidadeBusca[15];
    char tituloBusca[15];
    int buscaTipoImovel;
    float precoBusca;

    fp = fopen("imoveis.txt", "r");
    if (fp == NULL){
        puts("Erro ao abrir o arquivo");
        return 1;
    }

    iterCasa = 0;
    while(1){
        fscanf(fp, "%d%*c", &tipoImovel);
        if (tipoImovel == 1){
            LeCasa(&casa[iterCasa], fp);
            iterCasa++;
        }
        else if (tipoImovel == 2){
            LeApto(&apto[iterApto], fp);
            iterApto++;
        }
        else{
            LeLote(&lote[iterLote], fp);
            iterLote++;
        }
        if (feof(fp))
            break;
    }
    fclose(fp);

    while(1){
        MenuPrincipal();
        printf("\t\t Selecione uma opcao: ");
        scanf("%d",&opcao);
        if(opcao == 6) break;

        switch(opcao){
            case 1:
                puts("==================================================================================");
                printf("\t\t [1] Casa\n");
                printf("\t\t [2] Apartamento\n");
                printf("\t\t [3] Lote\n");
                puts("==================================================================================");
                printf("\t\t Selecione uma opcao: ");
                scanf("%d%*c",&tipoImovel);

                if (tipoImovel == 1){
                    CadastraCasa(&casa[iterCasa], fp);
                    iterCasa++;
                }
                else if (tipoImovel == 2){
                    CadastraApto(&apto[iterApto], fp);
                    iterApto++;
                }
                else{
                    CadastraLote(&lote[iterLote], fp);
                    iterLote++;
                }
                break;

            case 2:
                MenuBusca();
                printf("\t\t Selecione uma opcao: ");
                scanf("%d%*c",&tipoBusca);
                if(tipoBusca == 2){
                    scanf("%f",&precoBusca);
                    BuscaPrecoMaximo(casa,lote,apto,precoBusca);
                }

                if(tipoBusca == 4){
                    printf("\t\t Bairro: ");
                    fgets(bairroBusca,15,stdin);
                    bairroBusca[strlen(bairroBusca)-1]='\0';
                    puts("==================================================================================");
                    BuscaBairro(casa,lote,apto,bairroBusca);
                }

                if(tipoBusca == 3){
                    printf("\t\t Titulo: ");
                    fgets(tituloBusca,15,stdin);
                    tituloBusca[strlen(tituloBusca)-1] = '\0';
                    puts("==================================================================================");
                    BuscaTitulo(casa,lote,apto,tituloBusca);
                }

                if(tipoBusca == 5){
                    printf("\t\t Cidade: ");
                    fgets(cidadeBusca,15,stdin);
                    cidadeBusca[strlen(cidadeBusca)-1]='\0';
                    puts("==================================================================================");
                    BuscaCidade(casa,lote,apto,cidadeBusca);
                }

                if(tipoBusca == 6){
                    ListarTodos(casa,apto,lote);
                }

                if(tipoBusca == 1){
                    MenuModeloImovel();
                    printf("\t\t Selecione uma opcao: ");
                    scanf("%d%*c",&buscaTipoImovel);
                    if(buscaTipoImovel == 3) ListarCasas(casa);
                    if(buscaTipoImovel == 2) ListarAptos(apto);
                    if(buscaTipoImovel == 1) ListarLotes(lote);
                }
                break;


        }
    }

    return 0;
}
