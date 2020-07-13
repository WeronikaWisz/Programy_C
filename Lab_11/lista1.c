#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	char imie[20];
	char nazwisko[20];
	int nr;
	struct lista *next;
}lista_a;

void dodaj(struct lista **head){
	struct lista *tmp;
	tmp=(struct lista*)malloc(sizeof(lista_a));
	tmp->next=*head;
	scanf("%20s", tmp->imie);
	scanf("%20s", tmp->nazwisko);
	scanf("%d", &(tmp->nr));
	*head=tmp;
	return;
}

void dodaj_k(struct lista **head){
	struct lista *tmp, *new;
	tmp=*head;
	new=(struct lista*)malloc(sizeof(lista_a));
	scanf("%20s", new->imie);
	scanf("%20s", new->nazwisko);
	scanf("%d", &(new->nr));
	if(tmp==NULL){
		*head=new;
	}
	else{
		while(tmp->next!= NULL){
			tmp=tmp->next;
		}
	tmp->next=new;
	new->next=NULL;
	}
	return;
}

void usun(struct lista **head, int numer){
	struct lista *tmp;
	tmp=*head;
	if((*head)->nr==numer){
		*head=(*head)->next;
	}
	else{
		while(tmp->next->nr!=numer){
			tmp=tmp->next;
		}
	tmp->next=tmp->next->next;
	}
	return;
}

void wypisz(struct lista *head){
	struct lista *tmp=head;
	while(tmp!= NULL){
		printf("%s", tmp->imie);
		printf("%s", tmp->nazwisko);
		printf("%d", tmp->nr);
		tmp=tmp->next;
	}
	return;
}

void wypisz_n(struct lista *head, int numer){
	struct lista *tmp=head;
	if(tmp->nr == numer){
		printf("%s", tmp->imie);
		printf("%s", tmp->nazwisko);
		printf("%d", tmp->nr);
	}
	else{
		while(tmp->nr != numer){
			tmp=tmp->next;
		}
		printf("%s", tmp->imie);
		printf("%s", tmp->nazwisko);
		printf("%d", tmp->nr);
	}
	return;
}

int main(void){
	
	lista_a *head;
	head=NULL;
	dodaj_k(&head);
	dodaj_k(&head);
	dodaj(&head);
	wypisz_n(head,3);
	usun(&head,3);
	wypisz(head);

return 0;
}