#include <iostream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Sentences.h"
#include "Words.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//Function to find out the winner between kreol and english
string winner(int x,int y)
{   string asd;
    int z;
    z=x-y;
    if(z<0)
    {
     asd="Kreol";
    }
    else
    {
     asd="English";
    }
    return asd;
}

int main() {

    //SENTENCES
    //vector variable to store the individual words in one sentence
    vector<string> wordsFromenglish;
    vector<string> wordsFromcreole;
    //vector variable to store all the sentences from the dataset
    vector<string> allSentences;
    vector<string> allcreole;
    //temporary string variable to store each sentence from the dataset
    string sentenceFromFile;
    string sentencecreole;
    //integer variable to count the number of lines/sentences in the dataset
    int countSentence = 0;
    int creolecount = 0;
    //codes to load the sentences dataset from the english text file into a vector
    ifstream english;
	english.open ("English.txt");
	 if (!english)
        {
            cout<<"Error opening creole"<<endl;
            return -1;
        }
    while(!english.eof()) {
        getline(english,sentenceFromFile);
        allSentences.push_back(sentenceFromFile);
        countSentence++;
    }
	english.close();

    //codes to load the sentences dataset from the kreol text file into a vector
	ifstream creole;
	    creole.open ("Creole.txt");
	    if (!creole)
        {
            cout<<"Error opening creole"<<endl;
            return -1;
        }
    while(!creole.eof()) {
        getline(creole,sentencecreole);
        allcreole.push_back(sentencecreole);
        creolecount++;
   }
	creole.close();


    //creating a vector of objects of type sentences
    vector <Sentences>  s(countSentence);
    vector <Sentences> t(countSentence);
    //assign each extracted sentence (from dataset) to one Sentence object
    for(int i=0; i<countSentence; i++){
        s[i].setSentence(allSentences[i]);
        t[i].setSentence(allcreole[i]);
    }

    //display the attributes of each Sentence object
float qwer=0,qwert=0;
    for(int i=0; i<countSentence; i++){


        wordsFromenglish = s[i].getWords();//extraction of each word from the sentence i
        wordsFromcreole = t[i].getWords();//extraction of each word from the sentence i
         cout<<endl<<s[i].getSentence()<<endl;
         cout<<"Number of words in this English sentence is : "<<s[i].getNumWords()<<endl;
          qwer=qwer+s[i].getNumWords();//calculating number of words  in english
          qwert=qwert+t[i].getNumWords();//calculating number of words  in creol


    for(int i=0; i<wordsFromenglish.size(); i++){
         cout<<"Words in the sentence English: "<<wordsFromenglish[i]<<endl;//displaying all the words one by one in the english part
  }
         cout<<endl;
         cout<<endl<<t[i].getSentence()<<endl;
         cout<<"Number of words in this Kreole sentence is : "<<t[i].getNumWords()<<endl;
        for(int i=0; i<wordsFromcreole.size(); i++){
            cout<<"Words in the sentence creole: "<<wordsFromcreole[i]<<endl;//displaying all the words one by one in the kreol part
        }
    cout<<endl;
    cout<<endl;
    cout<<"Number of words in this English sentence is : "<<s[i].getNumWords()<<endl;
    cout<<"Number of words in this Kreole sentence is : "<<t[i].getNumWords()<<endl;
    cout<<"Difference in number of words is : "<<abs(s[i].getNumWords()-t[i].getNumWords())<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    }


    Sentences s2;

    int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
      for(int k=0;k<allSentences.size();k++){

            s2.setSentence(s[k].getSentence());

    	vector<char> characters = s2.getCharacters();

	for(int i = 0; i < characters.size(); i++){
          if(characters[i]=='a'||characters[i]=='A')
          {
            A++;
          }
          if(characters[i]=='b'||characters[i]=='B')
          {
            B++;
          }
          if(characters[i]=='C'||characters[i]=='c')
          {
            C++;
          }
          if(characters[i]=='D'||characters[i]=='d')
          {
            D++;
          }
          if(characters[i]=='E'||characters[i]=='e')
          {
            E++;
          }
          if(characters[i]=='f'||characters[i]=='F')
          {
            F++;
          }
          if(characters[i]=='g'||characters[i]=='G')
          {
            G++;
          }
          if(characters[i]=='H'||characters[i]=='h')
          {
            H++;
          }
          if(characters[i]=='I'||characters[i]=='i')
          {
            I++;
          }
          if(characters[i]=='j'||characters[i]=='J')
          {
            J++;
          }
          if(characters[i]=='K'||characters[i]=='k')
          {
            K++;
          }
          if(characters[i]=='L'||characters[i]=='l')
          {
            L++;
          }
          if(characters[i]=='m'||characters[i]=='M')
          {
            M++;
          }
          if(characters[i]=='N'||characters[i]=='n')
          {
            N++;
          }
          if(characters[i]=='O'||characters[i]=='o')
          {
            O++;
          }
          if(characters[i]=='P'||characters[i]=='p')
          {
            P++;
          }
          if(characters[i]=='q'||characters[i]=='Q')
          {
            Q++;
          }
          if(characters[i]=='r'||characters[i]=='R')
          {
            R++;
          }
          if(characters[i]=='S'||characters[i]=='s')
          {
            S++;
          }
          if(characters[i]=='T'||characters[i]=='t')
          {
            T++;
          }
          if(characters[i]=='u'||characters[i]=='U')
          {
            U++;
          }
          if(characters[i]=='v'||characters[i]=='V')
          {
            V++;
          }
          if(characters[i]=='W'||characters[i]=='w')
          {
            W++;
          }
          if(characters[i]=='X'||characters[i]=='x')
          {
            X++;
          }
          if(characters[i]=='Y'||characters[i]=='y')
          {
            Y++;
          }
          if(characters[i]=='z'||characters[i]=='Z')
          {
            Z++;
          }
	}
}
Sentences t2;
 int a8=0,b8=0,c8=0,d8=0,e8=0,f8=0,g8=0,h8=0,i8=0,j8=0,k8=0,l8=0,m8=0,n8=0,o8=0,p8=0,q8=0,r8=0,s8=0,t8=0,u8=0,v8=0,w8=0,x8=0,y8=0,z8=0;
      for(int mx=0;mx<allcreole.size();mx++){

            t2.setSentence(t[mx].getSentence());


    	vector<char> characters = t2.getCharacters();

	for(int i = 0; i < characters.size(); i++){
        if(characters[i]=='a'||characters[i]=='A')
          {
            a8++;
          }
          if(characters[i]=='b'||characters[i]=='B')
          {
            b8++;
          }
          if(characters[i]=='C'||characters[i]=='c')
          {
            c8++;
          }
          if(characters[i]=='D'||characters[i]=='d')
          {
            d8++;
          }
          if(characters[i]=='E'||characters[i]=='e')
          {
            e8++;
          }
          if(characters[i]=='f'||characters[i]=='F')
          {
            f8++;
          }
          if(characters[i]=='g'||characters[i]=='G')
          {
            g8++;
          }
          if(characters[i]=='H'||characters[i]=='h')
          {
            h8++;
          }
          if(characters[i]=='I'||characters[i]=='i')
          {
            i8++;
          }
          if(characters[i]=='j'||characters[i]=='J')
          {
            j8++;
          }
          if(characters[i]=='K'||characters[i]=='k')
          {
            k8++;
          }
          if(characters[i]=='L'||characters[i]=='l')
          {
            l8++;
          }
          if(characters[i]=='m'||characters[i]=='M')
          {
            m8++;
          }
          if(characters[i]=='N'||characters[i]=='n')
          {
            n8++;
          }
          if(characters[i]=='O'||characters[i]=='o')
          {
            o8++;
          }
          if(characters[i]=='P'||characters[i]=='p')
          {
            p8++;
          }
          if(characters[i]=='q'||characters[i]=='Q')
          {
            q8++;
          }
          if(characters[i]=='r'||characters[i]=='R')
          {
            r8++;
          }
          if(characters[i]=='S'||characters[i]=='s')
          {
            s8++;
          }
          if(characters[i]=='T'||characters[i]=='t')
          {
            t8++;
          }
          if(characters[i]=='u'||characters[i]=='U')
          {
            u8++;
          }
          if(characters[i]=='v'||characters[i]=='V')
          {
            v8++;
          }
          if(characters[i]=='W'||characters[i]=='w')
          {
            w8++;
          }
          if(characters[i]=='X'||characters[i]=='x')
          {
            x8++;
          }
          if(characters[i]=='Y'||characters[i]=='y')
          {
            y8++;
          }
          if(characters[i]=='z'||characters[i]=='Z')
          {
            z8++;
          }
	}
}
//calling function winner to know which is more
string a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,w1,x1,y1,z1;

a1=winner(A,a8);
b1=winner(B,b8);
c1=winner(C,c8);
d1=winner(D,d8);
e1=winner(E,e8);
f1=winner(F,f8);
g1=winner(G,g8);
h1=winner(H,h8);
i1=winner(I,i8);
j1=winner(J,j8);
k1=winner(K,k8);
l1=winner(L,l8);
m1=winner(M,m8);
n1=winner(N,n8);
o1=winner(O,o8);
p1=winner(P,p8);
q1=winner(Q,q8);
r1=winner(R,r8);
s1=winner(S,s8);
t1=winner(T,t8);
u1=winner(U,u8);
v1=winner(V,v8);
w1=winner(W,w8);
x1=winner(X,x8);
y1=winner(Y,y8);
z1=winner(Z,z8);



    cout<<endl;
    cout<<"\t\t"<<"English"<<"\t\t"<<"Kreol"<<"\t\t"<<"Difference"<<"\t\t"<<"Winner"<<endl;
    cout<<"Num of A =      "<<A<<"\t\t"<<a8<<"\t\t"<<abs(A-a8)<<"\t\t\t"<<a1<<endl;
	cout<<"Num of B =      "<<B<<"\t\t"<<b8<<"\t\t"<<abs(B-b8)<<"\t\t\t"<<b1<<endl;
	cout<<"Num of C =      "<<C<<"\t\t"<<c8<<"\t\t"<<abs(C-c8)<<"\t\t\t"<<c1<<endl;
	cout<<"Num of D =      "<<D<<"\t\t"<<d8<<"\t\t"<<abs(D-d8)<<"\t\t\t"<<d1<<endl;
	cout<<"Num of E =      "<<E<<"\t\t"<<e8<<"\t\t"<<abs(E-e8)<<"\t\t\t"<<e1<<endl;
	cout<<"Num of F =      "<<F<<"\t\t"<<f8<<"\t\t"<<abs(F-f8)<<"\t\t\t"<<f1<<endl;
	cout<<"Num of G =      "<<G<<"\t\t"<<g8<<"\t\t"<<abs(G-g8)<<"\t\t\t"<<g1<<endl;
	cout<<"Num of H =      "<<H<<"\t\t"<<h8<<"\t\t"<<abs(H-h8)<<"\t\t\t"<<h1<<endl;
	cout<<"Num of I =      "<<I<<"\t\t"<<i8<<"\t\t"<<abs(I-i8)<<"\t\t\t"<<i1<<endl;
	cout<<"Num of J =      "<<J<<"\t\t"<<j8<<"\t\t"<<abs(J-j8)<<"\t\t\t"<<j1<<endl;
	cout<<"Num of K =      "<<K<<"\t\t"<<k8<<"\t\t"<<abs(K-k8)<<"\t\t\t"<<k1<<endl;
	cout<<"Num of L =      "<<L<<"\t\t"<<l8<<"\t\t"<<abs(L-l8)<<"\t\t\t"<<l1<<endl;
	cout<<"Num of M =      "<<M<<"\t\t"<<m8<<"\t\t"<<abs(M-m8)<<"\t\t\t"<<m1<<endl;
	cout<<"Num of N =      "<<N<<"\t\t"<<n8<<"\t\t"<<abs(N-n8)<<"\t\t\t"<<n1<<endl;
	cout<<"Num of O =      "<<O<<"\t\t"<<o8<<"\t\t"<<abs(O-o8)<<"\t\t\t"<<o1<<endl;
	cout<<"Num of P =      "<<P<<"\t\t"<<p8<<"\t\t"<<abs(P-p8)<<"\t\t\t"<<p1<<endl;
	cout<<"Num of Q =      "<<Q<<"\t\t"<<q8<<"\t\t"<<abs(Q-q8)<<"\t\t\t"<<q1<<endl;
	cout<<"Num of R =      "<<R<<"\t\t"<<r8<<"\t\t"<<abs(R-r8)<<"\t\t\t"<<r1<<endl;
	cout<<"Num of S =      "<<S<<"\t\t"<<s8<<"\t\t"<<abs(S-s8)<<"\t\t\t"<<s1<<endl;
	cout<<"Num of T =      "<<T<<"\t\t"<<t8<<"\t\t"<<abs(T-t8)<<"\t\t\t"<<t1<<endl;
	cout<<"Num of U =      "<<U<<"\t\t"<<u8<<"\t\t"<<abs(U-u8)<<"\t\t\t"<<u1<<endl;
	cout<<"Num of V =      "<<V<<"\t\t"<<v8<<"\t\t"<<abs(V-v8)<<"\t\t\t"<<v1<<endl;
	cout<<"Num of W =      "<<W<<"\t\t"<<w8<<"\t\t"<<abs(W-w8)<<"\t\t\t"<<w1<<endl;
	cout<<"Num of X =      "<<X<<"\t\t"<<x8<<"\t\t"<<abs(X-x8)<<"\t\t\t"<<x1<<endl;
	cout<<"Num of Y =      "<<Y<<"\t\t"<<y8<<"\t\t"<<abs(Y-y8)<<"\t\t\t"<<y1<<endl;
	cout<<"Num of Z =      "<<Z<<"\t\t"<<z8<<"\t\t"<<abs(Z-z8)<<"\t\t\t"<<z1<<endl;
    float tot1=0;
    float tot2=0;
    cout<<endl;
        cout<<"\t\t\t"<<"English/Total"<<"\t\t"<<"Kreol/Total"<<"\t\t"<<"Difference"<<endl;
    cout<<"Percentage of A =      "<<((float(A)/float(a8+A))*100)<<" %"<<"\t\t"<<((float(a8)/float(a8+A))*100)<<" %"<<"\t\t"<<fabs(((float(A)/float(a8+A))*100)-((float(a8)/float(a8+A))*100))<<" %"<<endl;
	cout<<"Percentage of B =      "<<((float(B)/float(b8+B))*100)<<" %"<<"\t\t"<<((float(b8)/float(b8+B))*100)<<" %"<<"\t\t"<<fabs(((float(B)/float(b8+B))*100)-((float(b8)/float(b8+B))*100))<<" %"<<endl;
	cout<<"Percentage of C =      "<<((float(C)/float(c8+C))*100)<<" %"<<"\t\t"<<((float(c8)/float(c8+C))*100)<<" %"<<"\t\t"<<fabs(((float(C)/float(c8+C))*100)-((float(c8)/float(c8+C))*100))<<" %"<<endl;
	cout<<"Percentage of D =      "<<((float(D)/float(d8+D))*100)<<" %"<<"\t\t"<<((float(d8)/float(d8+D))*100)<<" %"<<"\t\t"<<fabs(((float(D)/float(d8+D))*100)-((float(d8)/float(d8+D))*100))<<" %"<<endl;
	cout<<"Percentage of E =      "<<((float(E)/float(e8+E))*100)<<" %"<<"\t\t"<<((float(e8)/float(e8+E))*100)<<" %"<<"\t\t"<<fabs(((float(E)/float(e8+E))*100)-((float(e8)/float(e8+E))*100))<<" %"<<endl;
	cout<<"Percentage of F =      "<<((float(F)/float(f8+F))*100)<<" %"<<"\t\t"<<((float(f8)/float(f8+F))*100)<<" %"<<"\t\t"<<fabs(((float(F)/float(f8+F))*100)-((float(f8)/float(f8+F))*100))<<" %"<<endl;
	cout<<"Percentage of G =      "<<((float(G)/float(g8+G))*100)<<" %"<<"\t\t"<<((float(g8)/float(g8+G))*100)<<" %"<<"\t\t"<<fabs(((float(G)/float(g8+G))*100)-((float(g8)/float(g8+G))*100))<<" %"<<endl;
	cout<<"Percentage of H =      "<<((float(F)/float(h8+H))*100)<<" %"<<"\t\t"<<((float(h8)/float(h8+H))*100)<<" %"<<"\t\t"<<fabs(((float(F)/float(h8+H))*100)-((float(h8)/float(h8+H))*100))<<" %"<<endl;
	cout<<"Percentage of I =      "<<((float(I)/float(i8+I))*100)<<" %"<<"\t\t"<<((float(i8)/float(i8+I))*100)<<" %"<<"\t\t"<<fabs(((float(I)/float(i8+I))*100)-((float(i8)/float(i8+I))*100))<<" %"<<endl;
	cout<<"Percentage of J =      "<<((float(J)/float(j8+J))*100)<<" %"<<"\t\t"<<((float(j8)/float(j8+J))*100)<<" %"<<"\t\t"<<fabs(((float(J)/float(j8+J))*100)-((float(j8)/float(j8+J))*100))<<" %"<<endl;
	cout<<"Percentage of K =      "<<((float(K)/float(k8+K))*100)<<" %"<<"\t\t"<<((float(k8)/float(k8+K))*100)<<" %"<<"\t\t"<<fabs(((float(K)/float(k8+K))*100)-((float(k8)/float(k8+K))*100))<<" %"<<endl;
	cout<<"Percentage of L =      "<<((float(L)/float(l8+L))*100)<<" %"<<"\t\t"<<((float(l8)/float(l8+L))*100)<<" %"<<"\t\t"<<fabs(((float(L)/float(l8+L))*100)-((float(l8)/float(l8+L))*100))<<" %"<<endl;
	cout<<"Percentage of M =      "<<((float(M)/float(m8+M))*100)<<" %"<<"\t\t"<<((float(m8)/float(m8+M))*100)<<" %"<<"\t\t"<<fabs(((float(M)/float(m8+M))*100)-((float(m8)/float(m8+M))*100))<<" %"<<endl;
	cout<<"Percentage of N =      "<<((float(N)/float(n8+N))*100)<<" %"<<"\t\t"<<((float(n8)/float(n8+N))*100)<<" %"<<"\t\t"<<fabs(((float(N)/float(n8+N))*100)-((float(n8)/float(n8+N))*100))<<" %"<<endl;
	cout<<"Percentage of O =      "<<((float(O)/float(o8+O))*100)<<" %"<<"\t\t"<<((float(o8)/float(o8+O))*100)<<" %"<<"\t\t"<<fabs(((float(O)/float(o8+O))*100)-((float(o8)/float(o8+O))*100))<<" %"<<endl;
	cout<<"Percentage of P =      "<<((float(P)/float(p8+P))*100)<<" %"<<"\t\t"<<((float(p8)/float(p8+P))*100)<<" %"<<"\t\t"<<fabs(((float(P)/float(p8+P))*100)-((float(p8)/float(p8+P))*100))<<" %"<<endl;
	cout<<"Percentage of Q =      "<<((float(Q)/float(q8+Q))*100)<<" %"<<"\t\t"<<((float(q8)/float(q8+Q))*100)<<" %"<<"\t\t"<<fabs(((float(Q)/float(q8+Q))*100)-((float(q8)/float(q8+Q))*100))<<" %"<<endl;
	cout<<"Percentage of R =      "<<((float(R)/float(r8+R))*100)<<" %"<<"\t\t"<<((float(r8)/float(r8+R))*100)<<" %"<<"\t\t"<<fabs(((float(R)/float(r8+R))*100)-((float(r8)/float(r8+R))*100))<<" %"<<endl;
	cout<<"Percentage of S =      "<<((float(S)/float(s8+S))*100)<<" %"<<"\t\t"<<((float(s8)/float(s8+S))*100)<<" %"<<"\t\t"<<fabs(((float(S)/float(s8+S))*100)-((float(s8)/float(s8+S))*100))<<" %"<<endl;
	cout<<"Percentage of T =      "<<((float(T)/float(t8+T))*100)<<" %"<<"\t\t"<<((float(t8)/float(t8+T))*100)<<" %"<<"\t\t"<<fabs(((float(T)/float(t8+T))*100)-((float(t8)/float(t8+T))*100))<<" %"<<endl;
	cout<<"Percentage of U =      "<<((float(U)/float(u8+U))*100)<<" %"<<"\t\t"<<((float(u8)/float(u8+U))*100)<<" %"<<"\t\t"<<fabs(((float(U)/float(u8+U))*100)-((float(u8)/float(u8+U))*100))<<" %"<<endl;
	cout<<"Percentage of V =      "<<((float(V)/float(v8+V))*100)<<" %"<<"\t\t"<<((float(v8)/float(v8+V))*100)<<" %"<<"\t\t"<<fabs(((float(V)/float(v8+V))*100)-((float(v8)/float(v8+V))*100))<<" %"<<endl;
	cout<<"Percentage of W =      "<<((float(W)/float(w8+W))*100)<<" %"<<"\t\t"<<((float(w8)/float(w8+W))*100)<<" %"<<"\t\t"<<fabs(((float(W)/float(w8+W))*100)-((float(w8)/float(w8+W))*100))<<" %"<<endl;
	cout<<"Percentage of X =      "<<((float(X)/float(x8+X))*100)<<" %"<<"\t\t"<<((float(x8)/float(x8+X))*100)<<" %"<<"\t\t"<<fabs(((float(X)/float(x8+X))*100)-((float(x8)/float(x8+X))*100))<<" %"<<endl;
	cout<<"Percentage of Y =      "<<((float(Y)/float(y8+Y))*100)<<" %"<<"\t\t"<<((float(y8)/float(y8+Y))*100)<<" %"<<"\t\t"<<fabs(((float(Y)/float(y8+Y))*100)-((float(y8)/float(y8+Y))*100))<<" %"<<endl;
	cout<<"Percentage of Z =      "<<((float(Z)/float(z8+Z))*100)<<" %"<<"\t\t"<<((float(z8)/float(z8+Z))*100)<<" %"<<"\t\t"<<fabs(((float(Z)/float(z8+Z))*100)-((float(z8)/float(z8+Z))*100))<<" %"<<endl;

    tot1=A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P+Q+R+S+T+U+V+W+X+Y+Z;
    tot2=a8+b8+c8+d8+e8+f8+g8+h8+i8+j8+k8+l8+m8+n8+o8+p8+q8+r8+s8+t8+u8+v8+w8+x8+y8+z8;
    cout<<endl;
    cout<<"\t\t\t\t\t\t"<<"English"<<"\t\t\t"<<"Kreol"<<endl;
    cout<<"                         Word count in :        "<<qwer<<"\t\t\t"<<qwert<<endl;
    cout<<"                Average word length in :        "<<(tot1/qwer)<<"\t\t\t"<<(tot2/qwert)<<endl;
    cout<<"Total number of alphabets in sentences :        "<<tot1<<"\t\t"<<tot2<<endl;
    cout<<"               Average sentence length :        "<<(qwer/countSentence)<<"\t\t\t"<<(qwert/countSentence)<<endl;

    return 0;
}

