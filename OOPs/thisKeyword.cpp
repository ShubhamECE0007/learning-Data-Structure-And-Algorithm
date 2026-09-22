 #include<iostream>
 using namespace std;
 class Pokemon{
    public:
       string name;
       string type;
       int hp;
       
       Pokemon(string s,string t,int h){
       this->name = s;
        this->type = t;
        this->hp = h;
       }
       Pokemon(){//defalut constructor

       }
       void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
       }
 };
 int main(){
Pokemon x("Pikachu","Electric",80);
Pokemon y("Charizard","Fire-Flying",120);
Pokemon z("Greninja","Water",130);
x.print();
y.print();
z.print();

 }