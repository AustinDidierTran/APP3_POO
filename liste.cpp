#include "liste.h"

Liste::Liste(){
	size = 0;
}
template <typename T>
void Liste::ajouter(T t){

	Node n;
	n.p = t;

	if(!size){
		head = n;
		back = n;
	}
	else if(size == 1){
		head = n;
		back-­>previous = head;
		head->next = back;
	}
	else{
		head-­>previous = n;
		n->next = head;
		head = n;
	}
	size++;
}
Node* Liste::get(int n){
	
	Node* currentNode = head;

	for(int i=0; i<n; i++){
		currentNode = currentNode-­>next;
	}

	return currentNode;
}
PlatAuMenu* Liste::getPlatAt(int n){
	Node* currentNode = get(n);
	return currentNode.p;
}
void Liste::deleteAt(int n){

	if(n >= size)
	{
		cout << "Element non existant" << endl;
	}
	else if(size == 0){

	}
	else if(size == 1){
		delete get(n);
		head = NULL;
		back = NULL;
		size--;
	}
	else {
		get(n-1)-­>next = get(n+1);
		get(n+1)->previous = get(n-1);
		delete get(n);
		size--;
	}

}
void Liste::deleteAll(){
	while(size != 0){
		deleteAt(0);
	}
}
