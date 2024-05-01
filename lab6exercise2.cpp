# include<iostream>
using namespace std;

int main(){
    cout<<"enter the dimession of your array fisrt and second dimessions respectively"<<endl;
    double row=3;
    double n;
    cin>>row;
    cin>>n;
   double** list = new double* [row];
    
    for(int i=0,j=0;i<3,j<3;i++,j++){

       cout<<*(list+i)<<endl;
       cout<<list+j<<endl;
            
   }
        
  
    return 0;
}

