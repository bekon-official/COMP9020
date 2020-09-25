#include <iostream>
using namespace std;
Struct Node{

  int coef;
  int exp;
   Node*next;

}
class Poly {
	private:
		Node*Head;
	public:
		Poly();
		void T_Create(int n);
		int TestEmpty();
		int Compare(int a,int b);
		void Port();
		void Simplify();
		void Add(Poly &_poly);
		void Multiply(Poly &_poly);
		void ShowResult();
};
Poly(){
    Head= new Node;
    Node->next=null

}

//创建长度为n的数列

void Poly::T_Create(int n) {
	Node *p = Head;
	while(n--) {
		Node*s = new Node;
		cin>>s->coef>>s->exp;
		s->next = p->next;
		p->next = s;
		p = s;
	}
	}
void Poly::play(Poly,int N){
    Node *p=Poly.head;

for(int i<0;i<N;i++){


}

}


void Poly::Add(Poly&Poly2){
if(TestEmpty()==0) {
		cout<<"请先创建链表"<<endl;
		return ;
	}
   Node *pa = Poly.Head,
        *pb = Poly2.Head,
        *qa=Poly.Head->next,
        *qb=Poly2.Head->next;
while(qa!=NULL&&qb!=NULL) {
//if qa is bigger then insert qb before the qa
 if(qa->exp>qb->exp){
    pb->next=qb->next;
    pa->next=qb;
    qb->next=qa;
    pa=qb;
    qb=pb->next;

 }
 //if equal,add it together to listA,qa
 else if(qa->exp==qb->exp) {
    qa->coef=qa->coef+qb->coef;
  pb->next=qb->next;
  qb=pb->next;
  pa=qa;
  qa=qa->next;
 }
// if qb is bigger and listA still have element,move qa,pa
 else if(qa->exp<qb->exp&&qa->next!=null){
    qa=qa-next;
    pa=pa->next;

 }
 else if(qa->exp<qb->exp&&qa->next!=null)
 // qb is bigger and listA don't have any element; add qb to the end
    {
    qa->next=qb;
    pa=pa->next;
    qb=qb->next;
    pa=pb->next;
else
{
}
}
 }

}

}




