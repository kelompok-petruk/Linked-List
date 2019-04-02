//Desta Feranita      1517051002
//Nia Nur Atika       1817051015
//Eka Intan Sari      1817051022
//Rena Okriyani       1817051029


#include <iostrteam>
using namespace std;

struct Node {
  int data ;
  Node *next;
};

int panjang;
Node *head = NULL;

void iDepan (int databaru){
  Node *baru, *bantu;
  baru = new Node;
  baru->data = databaru;
  
  if (head ==NULL){
    head = baru;
    head ->next = head ;
  }
  
  else {
    bantu = head ;
    for (int i=0; i<panjang; i++) {
      if (bantu->next == head){
        baru->next= head;
        head = baru;
        bantu->next = head;
        break;}
        bantu = bantu->next;
    }
  }
  panjang ++;
}

void iBelakang (int dataBaru){
  Node *baru, *bantu;
  baru = new Node ;
  baru->data = databaru;
  
  if(head == NULL){
    head = baru ;
    head->next = head ;
  }
  
  else {
    bantu = head;
    for (int i=0; i<panjang; i++){
      if (bantu->next== head){
        bantu->next = baru;
        baru->next = head;
        break;
      }
      bantu = bantu->next;
    }
  }
  panjang++;
}

void hDepan(){
  Node *baru;
  bantu = head ;
  if (panjang == 0){
    cout<<"Data kosong \n";
  }
  else if (panjang ==1){
    head = NULL;
  }
  else {
    for (int i=0; i<panjang; i++){
      if (bantu->next == head){
        head = head->next;
        bantu->next = head ;
        break;
      }
      bantu = bantu->next;
    }
  }
  panjang --;
}
