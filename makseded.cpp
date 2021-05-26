#include <iostream>
int max_eded(int *, int);
int main(int argc, char *argv[]){
int i, x[10], say, max;
  
std::cout<<"10 -den kicik her hansi bir eded daxil edin \n";
std::cin>>say;
std::cout<<say<<" sayda eded daxil edin\n";
for (i=0; i<say; i++ )
std::cin>>x[i];
max = max_eded(x,say);
std::cout<<"sizin daxil etdiyiniz ededlerin icinde en boyuyu "<<max<<" -dir\n";
return 0;
}
//~~~~~~~~Yeni İnt ~~~~~~~~~
int max_eded(int *x, int say){
int net,i;
net = 0;
for (i=0; i<say; i++)
if (x[i] >net) net = x[i];
return net;
}
