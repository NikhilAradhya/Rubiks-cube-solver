#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tperm();
void parityfn();
void yperm();
void jperm();
void stringprocessing();
void stringprocessing_R();
void stringprocessing_L();
void stringprocessing_U();
void stringprocessing_D();
void stringprocessing_F();
void stringprocessing_B();
void stringprocessing_RL();
void stringprocessing_LR();
void stringprocessing_UD();
void stringprocessing_DU();
void stringprocessing_FB();
void stringprocessing_BF();

char s1[]="";
char finalCode[]="";


int main()
{



    int flag_AM=1, flag_CE=1, flag_DQ=1, flag_FL=1,  flag_GU=1, flag_HR=1, flag_JP=1, flag_KV=1, flag_NT=1, flag_OW=1, flag_SY=1;

        //scramble: R2 L2 F2 U D R L' R2  D2 B L'


    char a='R',  b='R',  c= 'G',  d= 'G',  e= 'Y',   f='B',  g ='Y',   h='O',   i='Y',    j= 'B';
    char k=  'W',   l= 'O',   m=  'B',   n='O',   o= 'G',    p= 'W',    q= 'O',    r= 'W',    s='G';
    char t= 'Y',   u='B',   v='R',   w ='R',   y= 'W';

char b1='B',i1='Y';

char target[200] = "";
int count = 1;
int cycleBreaks=0;


    if(a=='B' && m=='O'){
        flag_AM=0;
    }
    if(c=='B' && e=='R'){
        flag_CE=0;
    }
    if(d=='B' && q=='W'){
        flag_DQ=0;
    }
    if(f=='R' && l=='Y'){
        flag_FL=0;
    }
    if(g=='R' && u=='G'){
        flag_GU=0;
    }
    if(h=='R' && r=='W'){
        flag_HR=0;
    }
    if(j=='Y' && p=='O'){
        flag_JP=0;
    }
    if(k=='Y' && v=='G'){
        flag_KV=0;
    }
    if(n=='O' && t=='W'){
        flag_NT=0;
    }if(o=='O' && w=='G'){
        flag_OW=0;
    }
    if(s=='W' && y=='G'){
        flag_SY=0;
    }


while(count <= 200)
{

    if ( b=='B' && i=='O')
    {
       strcat(target,"a");
       b=a;i=m;
       flag_AM = 0;
       count++;
       continue;
    }

    else if ( b=='B' && i=='R')
    {

        strcat(target,"c");
        b=c;i=e;
        flag_CE=0;
        count++;
        continue;
    }


    else if ( b=='B' && i=='W')
    {

        strcat(target,"d");
        b=d;i=q;
        flag_DQ=0;
        count++;
        continue;
    }


    else if ( b=='R' && i=='B')
    {

        strcat(target,"e");
        b=e;i=c;
        flag_CE=0;
        count++;
        continue;
    }



    else if ( b=='R' && i=='Y')
    {

        strcat(target,"f");
        b=f;i=l;
        flag_FL=0;
        count++;
        continue;
    }



    else if ( b=='R' && i=='G')
    {

        strcat(target,"g");
        b=g;i=u;
        flag_GU=0;
        count++;
        continue;
    }



    else if ( b=='R' && i=='W')
    {

        strcat(target,"h");
        b=h;i=r;
        flag_HR=0;
        count++;
        continue;
    }


    else if ( b=='Y' && i=='O')
    {

        strcat(target,"j");
        b=j;i=p;
        flag_JP=0;
        count++;
        continue;
    }



    else if ( b=='Y' && i=='G')
    {

        strcat(target,"k");
        b=k;i=v;
        flag_KV=0;
        count++;
        continue;
    }



    else if ( b=='Y' && i=='R')
    {

        strcat(target,"l");
        b=l;i=f;
        flag_FL=0;
        count++;
        continue;
    }



    else if ( b=='O' && i=='B')
    {

        strcat(target,"m");
        b=m;i=a;
        flag_AM=0;
        count++;
        continue;
    }



    else if ( b=='O' && i=='W')
    {

        strcat(target,"n");
        b=n;i=t;
        flag_NT=0;
        count++;
        continue;
    }



    else if ( b=='O' && i=='G')
    {

        strcat(target,"o");
        b=o;i=w;
        flag_OW=0;
        count++;
        continue;
    }


    else if ( b=='O' && i=='Y')
    {

        strcat(target,"p");
        b=p;i=j;
        flag_JP=0;
        count++;
        continue;
    }


    else if ( b=='W' && i=='B')
    {

        strcat(target,"q");
        b=q;i=d;
        flag_DQ=0;
        count++;
        continue;
    }



    else if ( b=='W' && i=='R')
    {

        strcat(target,"r");
        b=r;i=h;
        flag_HR=0;
        count++;
        continue;
    }


    else if ( b=='W' && i=='G')
    {

        strcat(target,"s");
        b=s;i=y;
        flag_SY=0;
        count++;
        continue;
    }



    else if ( b=='W' && i=='O')
    {

        strcat(target,"t");
        b=t;i=n;
        flag_NT=0;
        count++;
        continue;
    }



    else if ( b=='G' && i=='R')
    {
        strcat(target,"u");
        b=u;i=g;
        flag_GU=0;
        count++;
        continue;
    }



    else if ( b=='G' && i=='Y')
    {
        strcat(target,"v");
        b=v;i=k;
        flag_KV=0;
        count++;
        continue;
    }



    else if ( b=='G' && i=='O')
    {
        strcat(target,"w");
        b=w;i=o;
        flag_OW=0;
        count++;
        continue;
    }



    else if ( b=='G' && i=='W')
    {
        strcat(target,"y");
        b=y;i=s;
        flag_SY=0;
        count++;
        continue;
    }



    else if ( (b=='B' && i=='Y')||(b=='Y' && i=='B'))
    {
        if(flag_AM==1){
                b1=b;i1=i;
            b=a;i=m;
            a=b1;m=i1;
            strcat(target,"a");
            cycleBreaks++;
            continue;
        }



        if(flag_CE==1){
                b1=b;i1=i;
            b=c;i=e;
            c=b1;e=i1;
            strcat(target,"c");
            cycleBreaks++;
            continue;
        }


        if(flag_DQ==1){
                b1=b;i1=i;
            b=d;i=q;
            d=b1;q=i1;
            strcat(target,"d");
            cycleBreaks++;
            continue;
        }


        if(flag_FL==1){
                b1=b;i1=i;
            b=f;i=l;
            f=b1;l=i1;
            strcat(target,"f");
            cycleBreaks++;
            continue;
        }


        if(flag_GU==1){
                b1=b;i1=i;
            b=g;i=u;
            g=b1;u=i1;
            strcat(target,"g");
            cycleBreaks++;
            continue;
        }



        if(flag_HR==1){
                b1=b;i1=i;
            b=h;i=r;
            h=b1;r=i1;
            strcat(target,"h");
            cycleBreaks++;
            continue;
        }


        if(flag_JP==1){
            b1=b;i1=i;
            b=j;i=p;
            j=b1;p=i1;
            strcat(target,"j");
            cycleBreaks++;
            continue;

        }



        if(flag_KV==1){
            b1=b;i1=i;
            b=k;i=v;
            k=b1;v=i1;
            strcat(target,"k");
            cycleBreaks++;
            continue;
        }



        if(flag_NT==1){
                b1=b;i1=i;
            b=n;i=t;
            n=b1;t=i1;
            strcat(target,"n");
            cycleBreaks++;
            continue;
        }



        if(flag_OW==1){
                b1=b;i1=i;
            b=o;i=w;
            o=b1;w=i1;

            strcat(target,"o");
            cycleBreaks++;
            continue;
        }



        if(flag_SY==1){
                b1=b;i1=i;
            b=s;i=y;
            s=b1;y=i1;
            strcat(target,"s");
            cycleBreaks++;
            continue;
        }
            count++;
    }
}

       int parity = (strlen(target)%2!=0) ? 1 : 0 ;
       printf("%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%c,%c\n",target,flag_AM,flag_CE,flag_DQ,flag_FL,flag_GU,flag_HR,flag_JP,flag_KV,flag_NT,flag_OW,flag_SY,count,cycleBreaks,b,i);
       printf("the parity condition is: %d\n\n\n\n",parity);




       if(parity==1)      // there is parity
       {
           strcat(target,"#");
       }
       char A1='B', N1='O', Q1='W';

       int cycleBreaks1=0;

       int count1=1;


       char A='B' ,    B='R' ,    C='W' ,    D='G' ,    E='Y' ,    F='G' ,    G='B' ,    H='O' ,    I='R' ,    J='Y' ,    K='Y' ;
       char L='O' ,    M='B' ,    N='W' ,    O='O' ,    P='G' ,    Q='R' ,    R='O' ,    S='W' ,    T='W' ,    U='B' ,    V='Y' ;
       char W='R' ,    Y='G' ;



       int flag_BJM=1, flag_CFI=1, flag_DER=1, flag_GLV=1, flag_HSU=1, flag_KPW=1, flag_OTY=1;

       if(B=='B' && J=='Y' && M=='O'){
        flag_BJM=0;
       }

       if(C=='B' && F=='R' && I=='Y'){
        flag_CFI=0;
       }

       if(D=='B' && E=='R' && R=='W'){
        flag_DER=0;
       }


       if(G=='R' && L=='Y' && V=='G'){
        flag_GLV=0;
       }

       if(H=='R' && S=='W' && U=='G'){
        flag_HSU=0;
       }


       if(K=='Y' && P=='O' && W=='G'){
        flag_KPW=0;
       }


       if(O=='O' && T=='W' && Y=='G'){
        flag_OTY=0;
       }

       while(count1<2000)
       {

           if( A == 'B' && N == 'Y' && Q == 'O'){
            strcat(target,"B");
            A=B;N=J;Q=M;
            flag_BJM=0;
            count1++;
            continue;
           }


           else if( A == 'B' && N == 'R' && Q == 'Y'){
            strcat(target,"C");
            A=C;N=F;Q=I;
            flag_CFI=0;
            count1++;
            continue;
           }



           else if( A == 'B' && N == 'W' && Q == 'R'){
            strcat(target,"D");
            A=D;N=R;Q=E;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'B' && Q == 'W'){
            strcat(target,"E");
            A=E;N=D;Q=R;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'Y' && Q == 'B'){
            strcat(target,"F");
            A=F;N=I;Q=C;
            flag_CFI=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'G' && Q == 'Y'){
            strcat(target,"G");
            A=G;N=V;Q=L;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'W' && Q == 'G'){
            strcat(target,"H");
            A=H;N=S;Q=U;
            flag_HSU=0;
            count1++;
            continue;
           }




           else if( A == 'Y' && N == 'B' && Q == 'R'){
            strcat(target,"I");
            A=I;N=C;Q=F;
            flag_CFI=0;
            count1++;
            continue;
           }

           else if( A == 'Y' && N == 'O' && Q == 'B'){
            strcat(target,"J");
            A=J;N=M;Q=B;
            flag_BJM=0;
            count1++;
            continue;
           }

           else if( A == 'Y' && N == 'G' && Q == 'O'){
            strcat(target,"K");
            A=K;N=W;Q=P;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'Y' && N == 'R' && Q == 'G'){
            strcat(target,"L");
            A=L;N=G;Q=V;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'B' && Q == 'Y'){
            strcat(target,"M");
            A=M;N=B;Q=J;
            flag_BJM=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'G' && Q == 'W'){
            strcat(target,"O");
            A=O;N=Y;Q=T;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'Y' && Q == 'G'){
            strcat(target,"P");
            A=P;N=K;Q=W;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'R' && Q == 'B'){
            strcat(target,"R");
            A=R;N=E;Q=D;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'G' && Q == 'R'){
            strcat(target,"S");
            A=S;N=U;Q=H;
            flag_HSU=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'O' && Q == 'G'){
            strcat(target,"T");
            A=T;N=O;Q=Y;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'R' && Q == 'W'){
            strcat(target,"U");
            A=U;N=H;Q=S;
            flag_HSU=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'Y' && Q == 'R'){
            strcat(target,"V");
            A=V;N=L;Q=G;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N =='O' && Q == 'Y'){
            strcat(target,"W");
            A=W;N=P;Q=K;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'W' && Q == 'O'){
            strcat(target,"Y");
            A=Y;N=T;Q=O;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if ((A=='B' && N=='O' && Q=='W')||(A=='W' && N=='B' && Q=='O')||(A=='O' && N=='W' && Q== 'B'))
           {
               if(flag_BJM==1){
                strcat(target,"B");
                A1=A;N1=N;Q1=Q;
                A=B;N=J;Q=M;
                B=A1;J=N1;M=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_CFI==1){
                strcat(target,"C");
                A1=A;N1=N;Q1=Q;
                A=C;N=F;Q=I;
                C=A1;F=N1;I=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }


               if(flag_DER==1){
                strcat(target,"D");
                A1=A;N1=N;Q1=Q;
                A=D;N=R;Q=E;
                D=A1;R=N1;E=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_GLV==1){
                strcat(target,"L");
                A1=A;N1=N;Q1=Q;
                A=L;N=G;Q=V;
                L=A1;G=N1;V=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_HSU==1){
                strcat(target,"H");
                A1=A;N1=N;Q1=Q;
                A=H;N=S;Q=U;
                H=A1;S=N1;U=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_KPW==1){
                strcat(target,"K");
                A1=A;N1=N;Q1=Q;
                A=K;N=W;Q=P;
                K=A1;W=N1;P=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }




               if(flag_OTY==1){
                strcat(target,"T");
                A1=A;N1=N;Q1=Q;   // A1='W';N1='B'; Q1='O'
                A=T;N=O;Q=Y;
                T=A1;O=N1;Y=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }
           }
           count1++;


        }


        printf("%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%c,%c,%c\n%c,%c,%c\n%c,%c,%c\n\n\n",target,flag_BJM,flag_CFI,flag_DER,flag_GLV,flag_HSU,flag_KPW,flag_OTY,count1,cycleBreaks1,A,N,Q,A1,N1,Q1,T,O,Y);

        //int i;
        for(i=0; i<strlen(target);i++)
        {
            switch(target[i])
            {

        case 'a' :
                {
                   strcat(finalCode,"RVruRVlUruL");
                   continue;
                }

                case 'c' :
                {
                         jperm();
                        continue;                  //strcat(finalCode,"rVRUrVLuRUl");
                }

                case 'd' :
                    {
                        tperm();
                        continue;
                    }

                case 'e' :
                    {
                      strcat(finalCode,"rFRL");
                      tperm();
                      strcat(finalCode,"lrfR");
                      continue;
                    }

                case 'f' :
                    {
                      strcat(finalCode,"VrV");
                      tperm();
                      strcat(finalCode,"VRV");
                      continue;

                    }
                case 'g' :
                    {
                        strcat(finalCode,"rfLFR");
                        tperm();
                        strcat(finalCode,"rflFR");
                        continue;
                    }

                case 'h' :
                    {
                        strcat(finalCode,"L");
                        tperm();
                        strcat(finalCode,"l");
                        continue;
                    }

                case 'j' :
                    {
                        strcat(finalCode,"ubU");
                        tperm();
                        strcat(finalCode,"uBU");
                        continue;
                    }

                case 'k' :
                    {
                        strcat(finalCode,"uRbrU");
                        tperm();
                        strcat(finalCode,"uRBrU");
                        continue;
                    }

                case 'l' :
                    {
                        strcat(finalCode,"UFu");
                        tperm();
                        strcat(finalCode,"Ufu");
                        continue;
                    }

                case 'm' :
                    {
                        strcat(finalCode,"Rbrl");
                        tperm();
                        strcat(finalCode,"LRBr");
                        continue;
                    }

                case 'n' :
                    {
                        strcat(finalCode,"l");
                        tperm();
                        strcat(finalCode,"L");
                        continue;
                    }

                case 'o' :
                    {
                        strcat(finalCode,"RBrl");
                        tperm();
                        strcat(finalCode,"LRbr");
                        continue;
                    }

                case 'p' :
                    {
                        strcat(finalCode,"VRV");
                        tperm();
                        strcat(finalCode,"VrV");
                        continue;
                    }

                case 'q' :
                    {
                        strcat(finalCode,"LuBU");
                        tperm();
                        strcat(finalCode,"ubUl");
                        continue;
                    }

                case 'r' :
                    {
                        strcat(finalCode,"Ufu");
                        tperm();
                        strcat(finalCode,"UFu");
                        continue;
                    }

                case 's' :
                    {
                        strcat(finalCode,"luBU");
                        tperm();
                        strcat(finalCode,"ubUL");
                        continue;
                    }

                case 't' :
                    {
                        strcat(finalCode,"uBU");
                        tperm();
                        strcat(finalCode,"ubU");
                        continue;
                    }

                case 'u' :
                    {
                        strcat(finalCode,"DM");
                        tperm();
                        strcat(finalCode,"Md");
                        continue;
                    }

                case 'v' :
                    {
                        strcat(finalCode,"EM");
                        tperm();
                        strcat(finalCode,"ME");
                        continue;
                    }

                case 'w' :
                    {
                        strcat(finalCode,"dM");
                        tperm();
                        strcat(finalCode,"MD");
                        continue;
                    }

                case 'y' :
                    {
                        strcat(finalCode,"M");
                        tperm();
                        strcat(finalCode,"M");
                        continue;
                    }


                case '#' :
                    {
                        parityfn();
                        continue;
                    }

                case 'B' :
                    {
                        strcat(finalCode,"rD");
                        yperm();
                        strcat(finalCode,"dR");
                        continue;
                    }

                case 'C' :
                    {
                        strcat(finalCode,"f");
                        yperm();
                        strcat(finalCode,"F");
                        continue;
                    }

                case 'D' :
                    {
                        strcat(finalCode,"fR");
                        yperm();
                        strcat(finalCode,"rF");
                        continue;
                    }

                case 'E' :
                    {
                        strcat(finalCode,"Fd");
                        yperm();
                        strcat(finalCode,"Df");
                        continue;
                    }

                case 'F' :
                    {
                        strcat(finalCode,"Gd");
                        yperm();
                        strcat(finalCode,"DG");
                        continue;
                    }

                case 'G' :
                    {
                        strcat(finalCode,"fd");
                        yperm();
                        strcat(finalCode,"DF");
                        continue;
                    }

                case 'H' :
                    {
                        strcat(finalCode,"d");
                        yperm();
                        strcat(finalCode,"D");
                        continue;
                    }

                    case 'I' :
                    {
                        strcat(finalCode,"R");
                        yperm();
                        strcat(finalCode,"r");
                        continue;
                    }

                    case 'J' :
                    {
                        strcat(finalCode,"S");
                        yperm();
                        strcat(finalCode,"S");
                        continue;
                    }

                    case 'K' :
                    {
                        strcat(finalCode,"r");
                        yperm();
                        strcat(finalCode,"R");
                        continue;
                    }

                    case 'L' :
                    {
                        yperm();
                        continue;
                    }

                    case 'M' :
                    {
                        strcat(finalCode,"Rf");
                        yperm();
                        strcat(finalCode,"Fr");
                        continue;
                    }

                    case 'O' :
                    {
                        strcat(finalCode,"Dr");
                        yperm();
                        strcat(finalCode,"Rd");
                        continue;
                    }


                    case 'P' :
                    {
                        strcat(finalCode,"D");
                        yperm();
                        strcat(finalCode,"d");
                        continue;
                    }

                    case 'R' :
                    {
                        strcat(finalCode,"G");
                        yperm();
                        strcat(finalCode,"G");
                        continue;
                    }

                    case 'S' :
                    {
                        strcat(finalCode,"GR");
                        yperm();
                        strcat(finalCode,"rG");
                        continue;
                    }

                    case 'T' :
                    {
                        strcat(finalCode,"E");
                        yperm();
                        strcat(finalCode,"E");
                        continue;
                    }

                    case 'U' :
                    {
                        strcat(finalCode,"F");
                        yperm();
                        strcat(finalCode,"f");
                        continue;
                    }

                    case 'V' :
                    {
                        strcat(finalCode,"DF");
                        yperm();
                        strcat(finalCode,"fd");
                        continue;
                    }

                    case 'W' :
                    {
                        strcat(finalCode,"EF");
                        yperm();
                        strcat(finalCode,"fE");
                        continue;
                    }

                    case 'Y' :
                    {
                        strcat(finalCode,"dF");
                        yperm();
                        strcat(finalCode,"fD");
                        continue;

                    }

                    }
            }

            //printf("\n\n");
             printf("%s\n%d\n\n",finalCode,strlen(finalCode));

             int z=0;
             for(z=0; z<strlen(finalCode)+1 ; z++){
             s1[z] = finalCode[z];
             }

             stringprocessing();

             printf("\n%d\n%s\n",strlen(s1),s1);

    return(0);
}


void stringprocessing()
{
             stringprocessing_R();
             stringprocessing_B();
             stringprocessing_D();
             stringprocessing_F();
             stringprocessing_L();
             stringprocessing_U();
             //printf("\n\n----------------------->%d\n%s\n\n",strlen(s1),s1);
             stringprocessing_RL();
             stringprocessing_LR();
             stringprocessing_UD();
             stringprocessing_DU();
             stringprocessing_FB();
             stringprocessing_BF();
}

void tperm()
{
    strcat(finalCode,"ruRURfSURUruRF");
    return;
}

void parityfn()
{
    strcat(finalCode,"bVBVbLBUbublCu");
    return;
}



void yperm()
{
        strcat(finalCode,"rURUruRFruRURfr");
        return;
}


void jperm()
{
    strcat(finalCode,"rVRUrVLuRUl");
    return;
}

void stringprocessing_R()
{
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltR: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'R') || (s1[i] == 'r') || (s1[i] == 'S'))  &&  ((s1[i+1]== 'R') || (s1[i+1] == 'r') || (s1[i+1] == 'S'))      )
     {
      if(s1[i]=='R'){temp_i=-1;}
      else if(s1[i]=='r'){temp_i=1;}
      else if(s1[i]=='S'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='R'){temp_i1=-1;}
      else if(s1[i+1]=='r'){temp_i1=1;}
      else if(s1[i+1]=='S') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='r';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='S';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='R';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
               continue;
          }
          }

           case -1 :
          {
              s1[i]='R';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='S';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltR;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_U()
{
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltU: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'U') || (s1[i] == 'u') || (s1[i] == 'V'))  &&  ((s1[i+1]== 'U') || (s1[i+1] == 'u') || (s1[i+1] == 'V'))      )
     {
      if(s1[i]=='U'){temp_i=-1;}
      else if(s1[i]=='u'){temp_i=1;}
      else if(s1[i]=='V'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='U'){temp_i1=-1;}
      else if(s1[i+1]=='u'){temp_i1=1;}
      else if(s1[i+1]=='V') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='u';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='V';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='U';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='U';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
             if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='V';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltU;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_L()
{
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltL: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'L') || (s1[i] == 'l') || (s1[i] == 'M'))  &&  ((s1[i+1]== 'L') || (s1[i+1] == 'l') || (s1[i+1] == 'M'))      )
     {
      if(s1[i]=='L'){temp_i=-1;}
      else if(s1[i]=='l'){temp_i=1;}
      else if(s1[i]=='M'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='L'){temp_i1=-1;}
      else if(s1[i+1]=='l'){temp_i1=1;}
      else if(s1[i+1]=='M') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='l';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='M';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='L';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='L';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='M';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltL;}
              continue;
          }
        }
      }
    }
  }
 }
}

void stringprocessing_F()
{
    int i=0,j=0;


    for(i=0; i<1000; i++)
    {


    haltF: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'F') || (s1[i] == 'f') || (s1[i] == 'G'))  &&  ((s1[i+1]== 'F') || (s1[i+1] == 'f') || (s1[i+1] == 'G'))      )
     {
      if(s1[i]=='F'){temp_i=-1;}
      else if(s1[i]=='f'){temp_i=1;}
      else if(s1[i]=='G'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='F'){temp_i1=-1;}
      else if(s1[i+1]=='f'){temp_i1=1;}
      else if(s1[i+1]=='G') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='f';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='G';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='F';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='F';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
             if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='G';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltF;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_B()
{
    int i=0,j=0;


    for(i=0; i<1000; i++)
    {


    haltB: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'B') || (s1[i] == 'b') || (s1[i] == 'C'))  &&  ((s1[i+1]== 'B') || (s1[i+1] == 'b') || (s1[i+1] == 'C'))      )
     {
      if(s1[i]=='B'){temp_i=-1;}
      else if(s1[i]=='b'){temp_i=1;}
      else if(s1[i]=='C'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='B'){temp_i1=-1;}
      else if(s1[i+1]=='b'){temp_i1=1;}
      else if(s1[i+1]=='C') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='b';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='C';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='B';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='B';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='C';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltB;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_D()
{
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltD: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1[i] == 'D') || (s1[i] == 'd') || (s1[i] == 'E'))  &&  ((s1[i+1]== 'D') || (s1[i+1] == 'd') || (s1[i+1] == 'E'))      )
     {
      if(s1[i]=='D'){temp_i=-1;}
      else if(s1[i]=='d'){temp_i=1;}
      else if(s1[i]=='E'){temp_i=2;}
      else{temp_i=0;}

    if(s1[i+1]=='D'){temp_i1=-1;}
      else if(s1[i+1]=='d'){temp_i1=1;}
      else if(s1[i+1]=='E') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1[i]='d';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 2 :
          {

              s1[i]='E';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='D';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='D';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='E';
              {
              int p=0;
              for (p=i+1; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){i--;goto haltD;}
              continue;
          }
        }
      }
    }
  }
 }
}



stringprocessing_RL()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='R')||(s1[i]=='r')||(s1[i]=='S')  )   &&  (    (s1[i+1]=='L')||(s1[i+1]=='l')||(s1[i+1]=='M')    )    &&    (       (s1[i+2]=='R')||(s1[i+2]=='r')||(s1[i+2]=='S')       )     )  {


          if(s1[i]=='R'){temp_i=-1;}
          else if(s1[i]=='r'){temp_i=1;}
          else if(s1[i]=='S'){temp_i=2;}

          if(s1[i+1]=='L'){temp_i1=-1;}
          else if(s1[i+1]=='l'){temp_i1=1;}
          else if(s1[i+1]=='M'){temp_i1=2;}



          if(s1[i+2]=='R'){temp_i2=-1;}
          else if(s1[i+2]=='r'){temp_i2=1;}
          else if(s1[i+2]=='S'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='r';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='S';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='R';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='R';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='S';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}



stringprocessing_LR()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='L')||(s1[i]=='l')||(s1[i]=='M')  )   &&  (    (s1[i+1]=='R')||(s1[i+1]=='r')||(s1[i+1]=='S')    )    &&    (       (s1[i+2]=='L')||(s1[i+2]=='l')||(s1[i+2]=='M')       )     )  {


          if(s1[i]=='L'){temp_i=-1;}
          else if(s1[i]=='l'){temp_i=1;}
          else if(s1[i]=='M'){temp_i=2;}

          if(s1[i+1]=='L'){temp_i1=-1;}
          else if(s1[i+1]=='l'){temp_i1=1;}
          else if(s1[i+1]=='M'){temp_i1=2;}



          if(s1[i+2]=='L'){temp_i2=-1;}
          else if(s1[i+2]=='l'){temp_i2=1;}
          else if(s1[i+2]=='M'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='l';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='M';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='L';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='L';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='M';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}


stringprocessing_UD()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='U')||(s1[i]=='u')||(s1[i]=='V')  )   &&  (    (s1[i+1]=='D')||(s1[i+1]=='d')||(s1[i+1]=='E')    )    &&    (       (s1[i+2]=='U')||(s1[i+2]=='u')||(s1[i+2]=='V')       )     )  {


          if(s1[i]=='U'){temp_i=-1;}
          else if(s1[i]=='u'){temp_i=1;}
          else if(s1[i]=='V'){temp_i=2;}

          if(s1[i+1]=='D'){temp_i1=-1;}
          else if(s1[i+1]=='d'){temp_i1=1;}
          else if(s1[i+1]=='V'){temp_i1=2;}



          if(s1[i+2]=='U'){temp_i2=-1;}
          else if(s1[i+2]=='u'){temp_i2=1;}
          else if(s1[i+2]=='V'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='u';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='V';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='U';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='U';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='V';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}


stringprocessing_DU()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='D')||(s1[i]=='d')||(s1[i]=='E')  )   &&  (    (s1[i+1]=='U')||(s1[i+1]=='u')||(s1[i+1]=='V')    )    &&    (       (s1[i+2]=='D')||(s1[i+2]=='d')||(s1[i+2]=='E')       )     )  {


          if(s1[i]=='D'){temp_i=-1;}
          else if(s1[i]=='d'){temp_i=1;}
          else if(s1[i]=='E'){temp_i=2;}

          if(s1[i+1]=='U'){temp_i1=-1;}
          else if(s1[i+1]=='u'){temp_i1=1;}
          else if(s1[i+1]=='V'){temp_i1=2;}



          if(s1[i+2]=='D'){temp_i2=-1;}
          else if(s1[i+2]=='d'){temp_i2=1;}
          else if(s1[i+2]=='E'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='d';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='E';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='D';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='D';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='E';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}


stringprocessing_FB()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='F')||(s1[i]=='f')||(s1[i]=='G')  )   &&  (    (s1[i+1]=='B')||(s1[i+1]=='b')||(s1[i+1]=='C')    )    &&    (       (s1[i+2]=='F')||(s1[i+2]=='f')||(s1[i+2]=='G')       )     )  {


          if(s1[i]=='F'){temp_i=-1;}
          else if(s1[i]=='f'){temp_i=1;}
          else if(s1[i]=='G'){temp_i=2;}

          if(s1[i+1]=='B'){temp_i1=-1;}
          else if(s1[i+1]=='b'){temp_i1=1;}
          else if(s1[i+1]=='C'){temp_i1=2;}



          if(s1[i+2]=='F'){temp_i2=-1;}
          else if(s1[i+2]=='f'){temp_i2=1;}
          else if(s1[i+2]=='G'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='f';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='G';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='F';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='F';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='G';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
 }
}


stringprocessing_BF()
{
    int i=0,j=0;
 for(i=0;i<strlen(s1);i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1[i]=='B')||(s1[i]=='b')||(s1[i]=='C')  )   &&  (    (s1[i+1]=='F')||(s1[i+1]=='f')||(s1[i+1]=='G')    )    &&    (       (s1[i+2]=='B')||(s1[i+2]=='b')||(s1[i+2]=='C')       )     )  {


          if(s1[i]=='B'){temp_i=-1;}
          else if(s1[i]=='b'){temp_i=1;}
          else if(s1[i]=='C'){temp_i=2;}

          if(s1[i+1]=='F'){temp_i1=-1;}
          else if(s1[i+1]=='f'){temp_i1=1;}
          else if(s1[i+1]=='G'){temp_i1=2;}



          if(s1[i+2]=='B'){temp_i2=-1;}
          else if(s1[i+2]=='b'){temp_i2=1;}
          else if(s1[i+2]=='C'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1[i]='b';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++)
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1[i]='C';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1[i]='B';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1[i]=s1[i+1];
                int q=0;
                for(q=i+1; q <= (strlen(s1)-3) ; q++){
                s1[q]=s1[q+2];
            }
                s1[strlen(s1)-1]=0;
                s1[strlen(s1)-1]=0;
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1[i]='B';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1[i]='C';
              {
              int p=0;
              for (p=i+2; p <= (strlen(s1)-2); p++){
              s1[p]=s1[p+1];
              }
              s1[strlen(s1)-1] = 0;
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
 }
}
