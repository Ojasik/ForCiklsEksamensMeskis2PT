#include <iostream>
using namespace std;
int main() {
  string atb1, atb2, atb3, atb4, atb5, atb6, atb7, atb8, atb9, atb10;
  int sum=0;
  cout<<"Tas ir viktorina par temu - Cikls ar skaitītāju programmēšanas valodā C++";
  
  cout<<"\n\n\n1. Kas ir for cikls?\na. Cikls ar pēcnosacījumu\nb. Cikls ar priekšnosacījumu\nc. Cikls ar skaitītāju\nd. Neviens no minētajiem\n\n";
  cin>>atb1;
  if(atb1=="c"){
    sum++;
  }

  cout<<"\n\n2. Kurš for cikls ir uzrakstīts pareizi?\na. for(int i = 0; i < 12)\nb. for(int j = 0; j < 12; j++)\nc. for(int q; q<j; ++)\nd. for(int; int j++; j < 3)\n\n";
  cin>>atb2;
  if(atb2=="b"){
    sum++;
  }

  cout<<"\n\n3. Ja jūs gribāt sākt no 100 un beigās iegūst 3, kāds cikls būs pareizs?\na. for(int i = 0; i < 100; i+3)\nb. for(int i = 3; i > 100; i--)\nc. for(int i = 100; i < 3; i++)\nd. for(int i = 100; i > 3; i--)\n\n";
  cin>>atb3;
  if(atb3=="d"){
    sum++;
  }

  cout<<"\n\n4. Cik reizes nostrādās cikls?\n\tfor(int i=0; i<5; i++)\n\na. 4\nb. 5\nc. 1\nd. 0\n\n";
  cin>>atb4;
  if(atb4=="b"){
    sum++;
  }

  cout<<"\n\n5. Kurš cikls nenostrādās nevienu reizi?\na. for(int i = 0; i < 5; i++)\nb. for(int i = 5; i <= 10; i++)\nc. for(int i = 10; i < 10; i++)\nd. for(int i = 0; i < 10; i++)\n\n";
  cin>>atb5;
  if(atb5=="c"){
    sum++;
  }

  cout<<"\n\n6. Kāds ir i++ ekvivalents?\na. i=i+i\nb. i=i+1\nc. i=i-1\nd. i--\n\n";
  cin>>atb6;
  if(atb6=="b"){
    sum++;
  }

  cout<<"\n\n7. Kas ir nepareizi?\n\tfor (int k = 2, k <= 12, k++)\n\na. Cikls ir uzrakstīts pareizi\nb. Mainīgajam vienmēr jābūt burtam i, ja izmanto for ciklu\nc. Beigās jābūt semikolam\nd. Jāizmanto semikolus, nevis komatus\n\n";
  cin>>atb7;
  if(atb7=="d"){
    sum++;
  }

  cout<<"\n\n8. Vai for cikls var saturēt for ciklu?\na. Jā\nb. Ne\nc. Kompilēšanas kļūda\nd. Runtime kļūda\n\n";
  cin>>atb8;
  if(atb8=="a"){
    sum++;
  }

  cout<<"\n\n9. Cik reizes nostrādās cikls?\n\tfor(int i = 0; i = 3; x++)\n\na. 3\nb. 4\nc. Cikls darbosies bezgalīgi\nd. 0\n\n";
  cin>>atb9;
  if(atb9=="c"){
    sum++;
  }

  cout<<"\n\n10. Ko izvadīs cikls?\nfor(i = 100; i >= 0; i-=10){\ncout<<i<<\", \";\n}\n\na. 100, 90, 80, 70, 60, 50, 40, 20, 10, 0,\nb. 100, 90, 80, 70, 60, 50, 40, 20, 10,\nc. 90, 80, 70, 60, 50, 40, 20, 10, 0,\nd. Neviens no minētajiem";
  cin>>atb10;
  if(atb10=="a"){
    sum++;
  }
}