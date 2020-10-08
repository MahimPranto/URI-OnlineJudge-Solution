#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    int a,b,c,d,e,p=0,o=0,ps=0,ng=0;
    cin>>a>>b>>c>>d>>e;
    
    if(a%2==0)
        p++;
    else
        o++;
    
    if(b%2==0)
        p++;
    else
        o++;
    
    if(c%2==0)
        p++;
    else
        o++;
        
    if(d%2==0)
        p++;
    else
        o++;
        
    if(e%2==0)
        p++;
    else
        o++;

    if(a>0)
        ps++;
    else if(a<0)
        ng++;
    
    if(b>0)
        ps++;
    else if(b<0)
        ng++;
    if(c>0)
        ps++;
    else if(c<0)
        ng++;
    if(d>0)
        ps++;
    else if(d<0)
        ng++;
    if(e>0)
        ps++;
    else if(e<0)
        ng++;
        
            
    cout<<p<<" valor(es) par(es)\n"<<o<<" valor(es) impar(es)\n"<<ps<<" valor(es) positivo(s)\n"<<ng<<" valor(es) negativo(s)\n";
    
    return 0;
}
