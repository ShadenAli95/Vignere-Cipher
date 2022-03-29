#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main()
{
   cout<<"ahlan ya user ya habibi"<<"\n"<<"what do you like to do today?"<<'\n'<<"please, enter cipher or decipher or end."<<"\n" ;
   int letters = 0, digits = 0, space= 0;
   string text, input, key ;
   getline(cin,input,'\n' );
   while(input!="end")
   {
   if (input =="cipher")
   {
   cout<<"please, enter the message you want to encrypt:" ;
   getline(cin,text,'\n');
   while ( text.length()>80)
   {
  cout<<"it must contain maximum 80 characters ";
  getline(cin,text,'\n');
  }
  int n = text.length() ;
  char text_array[n-1];
  strcpy(text_array, text.c_str());

  cout<<"please, enter the key:";
  getline(cin,key,'\n');
  while ( key.length()>8)
  {
  cout<<"it must contain maximum 8 characters ";
  getline(cin,key,'\n');
  }
  int m=key.length();
  char key_array[n];
  strcpy(key_array, key.c_str());

  while(m!=n)
  {
    for(int i=0; m!=n  ;i++)
    {
      key_array[m]=key_array[i] ;
      m++ ;
    }

  }
  for(int j=0; j<n; j++)
  {
  if(isalpha(key_array[j]))
     {
     if (islower(key_array[j]))
     key_array[j]= key_array[j] - 32;
     else;
     key_array[j]= key_array[j] ;
     }
  else;
  key_array[j]= key_array[j] ;
  }

  for(int j=0; j<n; j++)
  {
  if(isalpha(text_array[j]))
     {
     if (islower(text_array[j]))
     text_array[j]= text_array[j] - 32;
     else;
     text_array[j]= text_array[j] ;
     }
  else;
  text_array[j]= text_array[j] ;
  }

    char encrypted_array[n] ;
    char b ;
    for(int j=0; j<n  ;j++)
    {
     if(isalpha(text_array[j])==1)
    {
     int a= int(text_array[j])+int(key_array[j]) ;
     a= a%26 ;
     a=a+65 ;
     b=char (a) ;
     encrypted_array[j]= b ;
    }
     else if(isalpha(text_array[j])==0)
     {
     encrypted_array[j]=text_array[j];
     }
    }
    cout<<encrypted_array<<'\n';
    cout<<"what else habibi?"<<'\n';
    getline(cin,input,'\n' );
    }
    else if(input =="decipher")
    {
   cout<<"please, enter the message you want to decrypt:" ;
   getline(cin,text,'\n');
   while ( text.length()>80)
   {
  cout<<"it must contain maximum 80 characters ";
  getline(cin,text,'\n');
  }
  int n = text.length() ;
  char text_array[n-1];
  strcpy(text_array, text.c_str());

  cout<<"please, enter the key:";
  getline(cin,key,'\n');
  while ( key.length()>8)
  {
  cout<<"it must contain maximum 8 characters ";
  getline(cin,key,'\n');
  }
  int m=key.length();
  char key_array[n];
  strcpy(key_array, key.c_str());

  while(m!=n)
  {
    for(int i=0; m!=n  ;i++)
    {
      key_array[m]=key_array[i] ;
      m++ ;
    }
   }

  for(int j=0; j<n; j++)
  {
  if(isalpha(key_array[j]))
     {
     if (islower(key_array[j]))
     key_array[j]= key_array[j] - 32;
     else;
     key_array[j]= key_array[j] ;
     }
  else;
  key_array[j]= key_array[j] ;
    }

    for(int j=0; j<n; j++)
  {
  if(isalpha(text_array[j]))
     {
     if (islower(text_array[j]))
     text_array[j]= text_array[j] - 32;
     else;
     text_array[j]= text_array[j] ;
     }
  else;
  text_array[j]= text_array[j] ;
  }

    //cout<<key_array<<'\n';
    //cout<<text_array<<'\n';

    char encrypted_array[n] ;
    int a,b,k,d;
    for(int j=0; j<n  ;j++)
    {
     if(isalpha(text_array[j])==1)
     {
      int a=int(text_array[j]);
      a=a-65 ;
      b=int(key_array[j])+65;
      while(true)
        {
        if(b%26==a)
        {
          k=b;
          break;
        }
        b++;
        }
      k=k-(int(key_array[j]));
      d=char(k);
      encrypted_array[j]=char(k);

      }

     else if(isalpha(text_array[j])==0)
     {
     encrypted_array[j]=text_array[j];
     }
    }

    cout<<encrypted_array<<'\n' ;
    cout<<"what else habibi?"<<'\n';
    getline(cin,input,'\n' );
    }
    else
    {
        break;
    }
}
  return 0 ;
 }


