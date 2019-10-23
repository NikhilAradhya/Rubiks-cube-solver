/*This is Arduino MEGA code for M2/R2 algorithms.
I have also written the stepper motor interfacing part for 6 stepper motors.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Stepper.h>

int boolvar=0;
String finalCode = "";
String s1 = "";
int ame=0;

const int stepsPerRevolution = 40;

Stepper myStepper1(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepper2(stepsPerRevolution, 4, 5, 6, 7);
Stepper myStepper3(stepsPerRevolution, 50, 51, 52, 53);
Stepper myStepper4(stepsPerRevolution, 44, 45, 46, 47);
Stepper myStepper5(stepsPerRevolution, 38, 39, 40, 41);
Stepper myStepper6(stepsPerRevolution, 32, 33, 34, 35);

void setup() {
  
  // set the speed at 60 rpm:
  myStepper1.setSpeed(40);
  myStepper2.setSpeed(40);
  myStepper3.setSpeed(40);
  myStepper4.setSpeed(40);
  myStepper5.setSpeed(40);
  myStepper6.setSpeed(40);
  // initialize the serial port:
  Serial.begin(9600);
  
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
void bool1();
void st1(int angle);
void st2(int angle);
void st3(int angle);
void st4(int angle);
void st5(int angle);
void st6(int angle);
void rotate(int a);

    int flag_AM=1, flag_BI=1, flag_CE=1, flag_DQ=1, flag_FL=1, flag_HR=1, flag_JP=1, flag_KV=1, flag_NT=1, flag_OW=1, flag_SY=1;

        //scramble: R2 L2 F2 U D R L' R2  D2 B L'


    char a='R',  b='R',  c= 'G',  d= 'G',  e= 'Y',  f='B',  g ='Y',   h='O',   i='Y',    j= 'B';
    char k=  'W',   l= 'O',   m=  'B',   n='O',   o= 'G',    p= 'W',    q= 'O',    r= 'W',    s='G';
    char t= 'Y',   u='B',   v='R',   w ='R',   y= 'W';

char u1='G',g1='R';

//char target[200] = "";
int count = 1;
int cycleBreaks=0;
String target = "";


    if(a=='B' && m=='O'){
        flag_AM=0;
    }
    if(b=='B' && i=='Y'){
        flag_BI=0;
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

    if ( u=='B' && g=='O')
    {

       target+="a";
       u=a;g=m;
       flag_AM = 0;
       count++;
       bool1();
       continue;
    }
    else if ( u=='B' && g=='Y')
    {

        if(boolvar==0){target+="b";}
        else if(boolvar==1){target+="1";}
        u=b;g=i;
        flag_BI = 0;
        count++;
        bool1();
        continue;
    }

    else if ( u=='B' && g=='R')
    {

        if(boolvar==0){target+="c";}
        else if(boolvar==1){target+="+";}
        u=c;g=e;
        flag_CE=0;
        count++;
        bool1();
        continue;
    }


    else if ( u=='B' && g=='W')
    {

        if(boolvar==0){target+="d";}
        else if(boolvar==1){target+="2";}
        u=d;g=q;
        flag_DQ=0;
        count++;
        bool1();
        continue;
    }


    else if ( u=='R' && g=='B')
    {

       if(boolvar==0){target+="e";}
        else if(boolvar==1){target+="/";}
        u=e;g=c;
        flag_CE=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='R' && g=='Y')
    {

        if(boolvar==0){target+="f";}
        else if(boolvar==1){target+="3";}
        u=f;g=l;
        flag_FL=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='R' && g=='W')
    {

        if(boolvar==0){target+="h";}
        else if(boolvar==1){target+="4";}
        u=h;g=r;
        flag_HR=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='Y' && g=='B')
    {

        if(boolvar==0){target+="i";}
        else if(boolvar==1){target+="5";}
        u=i;g=b;
        flag_BI=0;
        count++;
        bool1();
        continue;
        }


    else if ( u=='Y' && g=='O')
    {

        if(boolvar==0){target+="j";}
        else if(boolvar==1){target+="6";}
        u=j;g=p;
        flag_JP=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='Y' && g=='G')
    {

        if(boolvar==0){target+="k";}
        else if(boolvar==1){target+="7";}
        u=k;g=v;
        flag_KV=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='Y' && g=='R')
    {

        if(boolvar==0){target+="l";}
        else if(boolvar==1){target+="8";}
        u=l;g=f;
        flag_FL=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='O' && g=='B')
    {

        target+="m";
        u=m;g=a;
        flag_AM=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='O' && g=='W')
    {

        if(boolvar==0){target+="n";}
        else if(boolvar==1){target+="9";}
        u=n;g=t;
        flag_NT=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='O' && g=='G')
    {

        if(boolvar==0){target+="o";}
        else if(boolvar==1){target+="_";}
        u=o;g=w;
        flag_OW=0;
        count++;
        bool1();
        continue;
    }


    else if ( u=='O' && g=='Y')
    {

        if(boolvar==0){target+="p";}
        else if(boolvar==1){target+="!";}
        u=p;g=j;
        flag_JP=0;
        count++;
        bool1();
        continue;
    }


    else if ( u=='W' && g=='B')
    {

        if(boolvar==0){target+="q";}
        else if(boolvar==1){target+="@";}
        u=q;g=d;
        flag_DQ=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='W' && g=='R')
    {

        if(boolvar==0){target+="r";}
        else if(boolvar==1){target+="$";}
        u=r;g=h;
        flag_HR=0;
        count++;
        bool1();
        continue;
    }


    else if ( u=='W' && g=='G')
    {

        if(boolvar==0){target+="s";}
        else if(boolvar==1){target+="%";}
        u=s;g=y;
        flag_SY=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='W' && g=='O')
    {

        if(boolvar==0){target+="t";}
        else if(boolvar==1){target+="^";}
        u=t;g=n;
        flag_NT=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='G' && g=='Y')
    {

        if(boolvar==0){target+="v";}
        else if(boolvar==1){target+="&";}
        u=v;g=k;
        flag_KV=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='G' && g=='O')
    {

        if(boolvar==0){target+="w";}
        else if(boolvar==1){target+="-";}
        u=w;g=o;
        flag_OW=0;
        count++;
        bool1();
        continue;
    }



    else if ( u=='G' && g=='W')
    {

        if(boolvar==0){target+="y";}
        else if(boolvar==1){target+="*";}
        u=y;g=s;
        flag_SY=0;
        count++;
        bool1();
        continue;
    }



    else if ( (u=='G' && g=='R')||(u=='R' && g=='G'))
    {
        if(flag_AM==1){
                u1=u;g1=g;
            u=a;g=m;
            a=u1;m=g1;

            target+="a";


            cycleBreaks++;
            bool1();
            continue;
        }


        if(flag_BI==1){
            u1=u;g1=g;
            u=b;g=i;
            b=u1;i=g1;

            if(boolvar==0){target+="b";}
            else if(boolvar==1){target+="1";}
            cycleBreaks++;
            bool1();
            continue;
        }

        if(flag_CE==1){
                u1=u;g1=g;
            u=c;g=e;
            c=u1;e=g1;

            if(boolvar==0){target+="c";}
            else if(boolvar==1){target+="w";}
            cycleBreaks++;
            bool1();
            continue;
        }


        if(flag_DQ==1){
                u1=u;g1=g;
            u=d;g=q;
            d=u1;q=g1;

            if(boolvar==0){target+="d";}
            else if(boolvar==1){target+="2";}
            cycleBreaks++;
            bool1();
            continue;
        }


        if(flag_FL==1){
                u1=u;g1=g;
            u=f;g=l;
            f=u1;l=g1;

            if(boolvar==0){target+="f";}
            else if(boolvar==1){target+="3";}
            cycleBreaks++;
            bool1();
            continue;
        }



        if(flag_HR==1){
                u1=u;g1=g;
            u=h;g=r;
            h=u1;r=g1;

            if(boolvar==0){target+="h";}
            else if(boolvar==1){target+="4";}
            cycleBreaks++;
            bool1();
            continue;
        }


        if(flag_JP==1){
            u1=u;g1=g;
            u=j;g=p;
            j=u1;p=g1;

            if(boolvar==0){target+="j";}
            else if(boolvar==1){target+="6";}
            cycleBreaks++;
            bool1();
            continue;

        }



        if(flag_KV==1){
            u1=u;g1=g;
            u=k;g=v;
            k=u1;v=g1;

            if(boolvar==0){target+="k";}
            else if(boolvar==1){target+="7";}
            cycleBreaks++;
            bool1();
            continue;
        }



        if(flag_NT==1){
                u1=u;g1=g;
            u=n;g=t;
            n=u1;t=g1;

            if(boolvar==0){target+="n";}
            else if(boolvar==1){target+="9";}
            cycleBreaks++;
            bool1();
            continue;
        }



        if(flag_OW==1){
                u1=u;g1=g;
            u=o;g=w;
            o=u1;w=g1;

             if(boolvar==0){target+="o";}
        else if(boolvar==1){target+="e";}
            cycleBreaks++;
            bool1();
            continue;
        }



        if(flag_SY==1){
                u1=u;g1=g;
            u=s;g=y;
            s=u1;y=g1;

            if(boolvar==0){target+="s";}
            else if(boolvar==1){target+="%";}
            cycleBreaks++;
            bool1();
            continue;
        }
            count++;
    }
}

       int parity = ((target.length())%2!=0) ? 1 : 0 ;
       Serial.println(target);Serial.println(flag_AM);Serial.println(flag_BI);Serial.println(flag_CE);
       Serial.println(flag_DQ);Serial.println(flag_FL);Serial.println(flag_HR);Serial.println(flag_JP);
       Serial.println(flag_KV);Serial.println(flag_NT);Serial.println(flag_OW);Serial.println(flag_SY);

       Serial.println(count);Serial.println(cycleBreaks);Serial.println(u);Serial.println(g);
       Serial.println("the parity condition is: \n\n\n\n");
       Serial.println(parity);




       if(parity==1)      // there is parity
       {
           target+="#";
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
            target+="B";
            A=B;N=J;Q=M;
            flag_BJM=0;
            count1++;
            continue;
           }


           else if( A == 'B' && N == 'R' && Q == 'Y'){
            target+="C";
            A=C;N=F;Q=I;
            flag_CFI=0;
            count1++;
            continue;
           }



           else if( A == 'B' && N == 'W' && Q == 'R'){
            target+="D";
            A=D;N=R;Q=E;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'B' && Q == 'W'){
            target+="E";
            A=E;N=D;Q=R;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'Y' && Q == 'B'){
            target+="F";
            A=F;N=I;Q=C;
            flag_CFI=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'G' && Q == 'Y'){
            target+="G";
            A=G;N=V;Q=L;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'R' && N == 'W' && Q == 'G'){
            target+="H";
            A=H;N=S;Q=U;
            flag_HSU=0;
            count1++;
            continue;
           }




           else if( A == 'Y' && N == 'B' && Q == 'R'){
            target+="I";
            A=I;N=C;Q=F;
            flag_CFI=0;
            count1++;
            continue;
           }

           else if( A == 'Y' && N == 'O' && Q == 'B'){
            target+="J";
            A=J;N=M;Q=B;
            flag_BJM=0;
            count1++;
            continue;
           }

           else if( A == 'Y' && N == 'G' && Q == 'O'){
            target+="K";
            A=K;N=W;Q=P;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'Y' && N == 'R' && Q == 'G'){
            target+="L";
            A=L;N=G;Q=V;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'B' && Q == 'Y'){
            target+="M";
            A=M;N=B;Q=J;
            flag_BJM=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'G' && Q == 'W'){
            target+="O";
            A=O;N=Y;Q=T;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if( A == 'O' && N == 'Y' && Q == 'G'){
            target+="P";
            A=P;N=K;Q=W;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'R' && Q == 'B'){
            target+="R";
            A=R;N=E;Q=D;
            flag_DER=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'G' && Q == 'R'){
            target+="S";
            A=S;N=U;Q=H;
            flag_HSU=0;
            count1++;
            continue;
           }



           else if( A == 'W' && N == 'O' && Q == 'G'){
            target+="T";
            A=T;N=O;Q=Y;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'R' && Q == 'W'){
            target+="U";
            A=U;N=H;Q=S;
            flag_HSU=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'Y' && Q == 'R'){
            target+="V";
            A=V;N=L;Q=G;
            flag_GLV=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N =='O' && Q == 'Y'){
            target+="W";
            A=W;N=P;Q=K;
            flag_KPW=0;
            count1++;
            continue;
           }



           else if( A == 'G' && N == 'W' && Q == 'O'){
            target+="Y";
            A=Y;N=T;Q=O;
            flag_OTY=0;
            count1++;
            continue;
           }



           else if ((A=='B' && N=='O' && Q=='W')||(A=='W' && N=='B' && Q=='O')||(A=='O' && N=='W' && Q== 'B'))
           {
               if(flag_BJM==1){
                target+="B";
                A1=A;N1=N;Q1=Q;
                A=B;N=J;Q=M;
                B=A1;J=N1;M=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_CFI==1){
                target+="C";
                A1=A;N1=N;Q1=Q;
                A=C;N=F;Q=I;
                C=A1;F=N1;I=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }


               if(flag_DER==1){
                target+="D";
                A1=A;N1=N;Q1=Q;
                A=D;N=R;Q=E;
                D=A1;R=N1;E=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_GLV==1){
                target+="L";
                A1=A;N1=N;Q1=Q;
                A=L;N=G;Q=V;
                L=A1;G=N1;V=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_HSU==1){
                target+="H";
                A1=A;N1=N;Q1=Q;
                A=H;N=S;Q=U;
                H=A1;S=N1;U=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }



               if(flag_KPW==1){
                target+="K";
                A1=A;N1=N;Q1=Q;
                A=K;N=W;Q=P;
                K=A1;W=N1;P=Q1;
                count1++;
                cycleBreaks1++;
                continue;
               }




               if(flag_OTY==1){
                target+="T";
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


        Serial.println(target);
        Serial.println(flag_BJM);Serial.println(flag_CFI);Serial.println(flag_DER);Serial.println(flag_GLV);Serial.println(flag_HSU);
        Serial.println(flag_KPW);Serial.println(flag_OTY);Serial.println(count1);Serial.println(cycleBreaks1);Serial.println(A);Serial.println(N);Serial.println(Q);Serial.println(A1);
        Serial.println(N1);Serial.println(Q1);Serial.println(T);Serial.println(O);Serial.println(Y);

        //int i;
        for(i=0; i<(target.length());i++)
        {
            switch(target.charAt(i))
            {

        case 'a' :
                {
                   finalCode+="SM";
                   continue;
                }

        case 'b' :
            {
                finalCode+="ruRUSMdrDR";
                continue;
            }

        case '1' :
            {
                finalCode+="rdRDSMurUR";
                continue;
            }

        case 'c' :
                {
                        finalCode+="VRlGRl";
                        continue;                  //finalCode+="rVRUrVLuRUl");
                }

        case '+' :
            {
                finalCode+="rLGrLV";
                continue;
            }

                case 'd' :
                    {
                        finalCode+="LUluSMDLdl";
                        continue;
                    }
                case '2' :
                    {
                        finalCode+="LDldSMULul";
                        continue;
                    }

                case 'e' :
                    {
                      finalCode+="dRlfSFrLuSUDSM";
                      continue;
                    }
                case '/' :
                    {
                        finalCode+="SMduSUlRfSFLrD";
                        continue;
                    }

                case 'f' :
                    {
                     finalCode+="urUSMdRD";
                     continue;
                    }

                case '3' :
                    {
                        finalCode+="drDSMuRU";
                        continue;
                    }

                case 'h' :
                    {
                        finalCode+="ULuSMDld";
                        continue;
                    }

                case '4' :
                    {
                        finalCode+="DLdSMUlu";
                        continue;
                    }
                case 'i' :
                    {
                        finalCode+="BrbSMFRf";
                        continue;
                    }

                case '5' :
                    {
                        finalCode+="FrfSMBRb";
                        continue;
                    }

                case 'j' :
                    {
                        finalCode+="RBrbSMFRfr";
                        continue;
                    }

                case '6' :
                    {
                        finalCode+="RFrfSMBRbr";
                        continue;
                    }

                case 'k' :
                    {
                        finalCode+="BRbSMFrf";
                        continue;
                    }

                case '7' :
                    {
                        finalCode+="FRfSMBrb";
                        continue;
                    }

                case 'l' :
                    {
                        finalCode+="BSbSMFSf";
                        continue;
                    }

                case '8' :
                    {
                        finalCode+="FSfSMBSb";
                        continue;
                    }

                case 'm' :
                    {
                        finalCode+="uSUBRbSMFrfdSD";
                        continue;
                    }

                case 'n' :
                    {
                        finalCode+="UluSMDLd";
                        continue;
                    }

                case '9' :
                    {
                        finalCode+="DldSMULu";
                        continue;
                    }

                case 'o' :
                    {
                        finalCode+="SMudSDRlbSBrLU";
                        continue;
                    }
                case '_' :
                    {
                        finalCode+="ulRbSBLrdSDUMS";
                        continue;
                    }

                case 'p' :
                    {
                        finalCode+="uRUSMdrD";
                        continue;
                    }

                case '!' :
                    {
                        finalCode+="dRDSMurU";
                        continue;
                    }

                case 'q' :
                    {
                        finalCode+="bLBSMflF";
                        continue;
                    }

                case '@' :
                    {
                        finalCode+="fLFSMblB";
                        continue;
                    }

                case 'r' :

                    {
                        finalCode+="bMBSMfMF";
                        continue;
                    }

                case '$' :
                    {
                        finalCode+="fMFSMbMB";
                        continue;
                    }

                case 's' :
                    {
                        finalCode+="blBSMfLF";
                        continue;
                    }

                case '%' :
                    {
                        finalCode+="flFSMbLB";
                        continue;
                    }

                case 't' :
                    {
                        finalCode+="lbLBSMflFL";
                        continue;
                    }

                case '^' :
                    {
                        finalCode+="lfLFSMblBL";
                        continue;
                    }


                case 'v' :
                    {
                        finalCode+="uSUSMdSD";
                        continue;
                    }

                case '&' :
                    {
                        finalCode+="dSDSMuSU";
                        continue;
                    }

                case 'w' :
                    {
                        finalCode+="rLCrLE";
                        continue;
                    }
                case '-' :
                    {
                        finalCode+="ElRClR";
                    }

                case 'y' :
                    {
                        finalCode+="UMuSMDMd";
                        continue;
                    }

                case '*' :
                    {
                        finalCode+="DMdSMUMu";
                        continue;
                    }


                case '#' :
                    {
                        parityfn();
                        continue;
                    }

                case 'B' :
                    {
                        finalCode+="rD";
                        yperm();
                        finalCode+="dR";
                        continue;
                    }

                case 'C' :
                    {
                        finalCode+="f";
                        yperm();
                        finalCode+="F";
                        continue;
                    }

                case 'D' :
                    {
                        finalCode+="fR";
                        yperm();
                        finalCode+="rF";
                        continue;
                    }

                case 'E' :
                    {
                        finalCode+="Fd";
                        yperm();
                        finalCode+="Df";
                        continue;
                    }

                case 'F' :
                    {
                        finalCode+="Gd";
                        yperm();
                        finalCode+="DG";
                        continue;
                    }

                case 'G' :
                    {
                        finalCode+="fd";
                        yperm();
                        finalCode+="DF";
                        continue;
                    }

                case 'H' :
                    {
                        finalCode+="d";
                        yperm();
                        finalCode+="D";
                        continue;
                    }

                    case 'I' :
                    {
                        finalCode+="R";
                        yperm();
                        finalCode+="r";
                        continue;
                    }

                    case 'J' :
                    {
                        finalCode+="S";
                        yperm();
                        finalCode+="S";
                        continue;
                    }

                    case 'K' :
                    {
                        finalCode+="r";
                        yperm();
                        finalCode+="R";
                        continue;
                    }

                    case 'L' :
                    {
                        yperm();
                        continue;
                    }

                    case 'M' :
                    {
                        finalCode+="Rf";
                        yperm();
                        finalCode+="Fr";
                        continue;
                    }

                    case 'O' :
                    {
                        finalCode+="Dr";
                        yperm();
                        finalCode+="Rd";
                        continue;
                    }


                    case 'P' :
                    {
                        finalCode+="D";
                        yperm();
                        finalCode+="d";
                        continue;
                    }

                    case 'R' :
                    {
                        finalCode+="G";
                        yperm();
                        finalCode+="G";
                        continue;
                    }

                    case 'S' :
                    {
                        finalCode+="GR";
                        yperm();
                        finalCode+="rG";
                        continue;
                    }

                    case 'T' :
                    {
                        finalCode+="E";
                        yperm();
                        finalCode+="E";
                        continue;
                    }

                    case 'U' :
                    {
                        finalCode+="F";
                        yperm();
                        finalCode+="f";
                        continue;
                    }

                    case 'V' :
                    {
                        finalCode+="DF";
                        yperm();
                        finalCode+="fd";
                        continue;
                    }

                    case 'W' :
                    {
                        finalCode+="EF";
                        yperm();
                        finalCode+="fE";
                        continue;
                    }

                    case 'Y' :
                    {
                        finalCode+="dF";
                        yperm();
                        finalCode+="fD";
                        continue;

                    }

                    }
        }

            //printf("\n\n");
             Serial.println(finalCode);
              Serial.println(finalCode.length());

             s1=finalCode;
           /*  for(z=0; z<(finalCode.length()+1) ; z++){
             (s1.setCharAt(z,finalCode.charAt(z)));
             }
             */


Serial.println(s1);

Serial.println(s1.length());

             stringprocessing();



//Serial.println(ami);

//Serial.println(ame);


//s1="rRSlLMuUVdDEfFGbBC";
               Serial.println(s1);

int z=0;

               for (z=0,count=0; z< (s1.length()); z++){
                if(s1.charAt(z)!='\0')count++;
               }
               Serial.println(count);

               //Serial.println(s1.length());
               //i=0;
               count=0;


                for(z=0; z<(s1.length());z++){
                  //delay(50);
                  switch(s1.charAt(z)){

                    case 'r':
                              {

                                if(s1.charAt(z+1)==('l')){
                                  rotate(1);
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('L')){
                                rotate(2);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('M')){
                                  rotate(3);
                                  z=z+1;
                                }
                                else{
                                  st1(90);
                                }
                                break;
                              }

                     case 'R' :
                     {
                      if(s1.charAt(z+1)==('l')){
                                  rotate(4);
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('L')){
                                rotate(5);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('M')){
                                  rotate(6);
                                  z=z+1;
                                }
                                else{
                                  st1(-90);
                                }
                      break;
                     }

                      case 'S':
                              {
                                if(s1.charAt(z+1)==('l')){
                                  rotate(7);
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('L')){
                                rotate(8);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('M')){
                                  rotate(9);
                                  z=z+1;
                                }
                                else{
                                  st1(180);
                                }
                                break;
                              }

                     case 'l':
                              {
                                if(s1.charAt(z+1)==('r')){
                                  {rotate(1);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('R')){
                                rotate(4);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('S')){
                                  {rotate(7);}
                                  z=z+1;
                                }
                                else{
                                  st2(90);
                                }
                                break;
                              }

                     case 'L' :
                      {
                                if(s1.charAt(z+1)==('r')){
                                  {rotate(2);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('R')){
                                rotate(5);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('S')){
                                  {rotate(8);}
                                  z=z+1;
                                }
                                else{
                                  st2(-90);
                                }
                      break;
                     }

                      case 'M' :
                                {
                                if(s1.charAt(z+1)==('r')){
                                  {rotate(3);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('R')){
                                 rotate(6);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('S')){
                                  {rotate(9);}
                                  z=z+1;
                                }
                                else{
                                  st2(180);
                                }
                                break;
                              }



                   case 'u':
                                {
                                if(s1.charAt(z+1)==('d')){
                                  {rotate(10);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('D')){
                                 rotate(11);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('E')){
                                  {rotate(12);}
                                  z=z+1;
                                }
                                else{
                                  st3(90);
                                }
                                break;
                              }

                     case 'U' :
                      {
                                if(s1.charAt(z+1)==('d')){
                                  {rotate(13);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('D')){
                                 rotate(14);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('E')){
                                  {rotate(15);}
                                  z=z+1;
                                }
                                else{
                                  st3(-90);
                                }
                      break;
                     }

                      case 'V':
                                {
                                if(s1.charAt(z+1)==('d')){
                                  {rotate(16);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('D')){
                                 rotate(17);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('E')){
                                  {rotate(18);}
                                  z=z+1;
                                }
                                else{
                                  st3(180);
                                }
                                break;
                              }



                  case 'd':
                              {
                                if(s1.charAt(z+1)==('u')){
                                  {rotate(10);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('U')){
                                 rotate(13);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('V')){
                                  {rotate(16);}
                                  z=z+1;
                                }
                                else{
                                  st4(90);
                                }
                                break;
                              }

                     case 'D' :
                     {
                                if(s1.charAt(z+1)==('u')){
                                  {rotate(11);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('U')){
                                 rotate(14);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('V')){
                                  {rotate(17);}
                                  z=z+1;
                                }
                                else{
                                  st4(-90);
                                }
                      break;
                     }

                      case 'E':
                              {
                                if(s1.charAt(z+1)==('u')){
                                  {rotate(12);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('U')){
                                 rotate(15);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('V')){
                                  {rotate(18);}
                                  z=z+1;
                                }
                                else{
                                  st4(180);
                                }
                                break;
                              }





                case 'f':
                              {
                                if(s1.charAt(z+1)==('b')){
                                  rotate(19);
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('B')){
                                 rotate(20);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('C')){
                                  {rotate(21);}
                                  z=z+1;
                                }
                                else{
                                  st5(90);
                                }
                                break;
                              }

                     case 'F' :
                     {
                                if(s1.charAt(z+1)==('b')){
                                   rotate(22);
                                   z=z+1;
                                }
                                else if(s1.charAt(z+1)==('B')){
                                rotate(23);
                                z=z+1;
                                }
                                else if(s1.charAt(z+1)==('C')){
                                  {rotate(24);}
                                  z=z+1;
                                }
                                else{
                                  st5(-90);
                                }
                      break;
                     }

                      case 'G':
                              {
                                if(s1.charAt(z+1)==('b')){
                                  {rotate(25);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('B')){
                                 rotate(26);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('C')){
                                  {rotate(27);}
                                  z=z+1;
                                }
                                else{
                                  st5(180);
                                }
                                break;
                              }





                        case 'b':
                              {
                                if(s1.charAt(z+1)==('f')){
                                  {rotate(19);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('F')){
                                 rotate(22);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('G')){
                                  {rotate(25);}
                                  z=z+1;
                                }
                                else{
                                  st6(90);
                                }
                                break;
                              }

                     case 'B' :
                     {
                                if(s1.charAt(z+1)==('f')){
                                  {rotate(20);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('F')){
                                 rotate(23);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('G')){
                                  {rotate(26);}
                                  z=z+1;
                                }
                                else{
                                  st6(-90);
                                }
                      break;
                     }

                      case 'C':
                              {
                                if(s1.charAt(z+1)==('f')){
                                  {rotate(21);}
                                  z=z+1;
                                }
                                else if(s1.charAt(z+1)==('F')){
                                 rotate(24);
                                 z=z+1;
                                 }
                                else if(s1.charAt(z+1)==('G')){
                                  {rotate(27);}
                                  z=z+1;
                                }
                                else{
                                  st6(180);
                                }
                                break;
                              }

}
                }
                }



void stringprocessing()
{
               //printf("\n\n----------------------->%d\n%s\n\n",s1.length(),s1);
    //ami=3537;
             stringprocessing_R();
             stringprocessing_B();
             stringprocessing_D();
             stringprocessing_F();
             stringprocessing_L();
             stringprocessing_U();
             stringprocessing_RL();
             stringprocessing_LR();
             stringprocessing_UD();
             stringprocessing_DU();
             stringprocessing_FB();
             stringprocessing_BF();

//ami=34;


}


void stringprocessing_R(){
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltR: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'R') || (s1.charAt(i) == 'r') || (s1.charAt(i) == 'S'))  &&  ((s1.charAt(i+1)== 'R') || (s1.charAt(i+1) == 'r') || (s1.charAt(i+1) == 'S'))      )
     {
      if(s1.charAt(i)=='R'){temp_i=-1;}
      else if(s1.charAt(i)=='r'){temp_i=1;}
      else if(s1.charAt(i)=='S'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='R'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='r'){temp_i1=1;}
      else if(s1.charAt(i+1)=='S') {temp_i1=2;}
      else{temp_i1=0;}


      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'r');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt(i,'S');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'R');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){     ////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){           ///////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
               continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'R');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltR;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'S');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltR;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_U(){
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltU: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'U') || (s1.charAt(i) == 'u') || (s1.charAt(i) == 'V'))  &&  ((s1.charAt(i+1)== 'U') || (s1.charAt(i+1) == 'u') || (s1.charAt(i+1) == 'V'))      )
     {
      if(s1.charAt(i)=='U'){temp_i=-1;}
      else if(s1.charAt(i)=='u'){temp_i=1;}
      else if(s1.charAt(i)=='V'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='U'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='u'){temp_i1=1;}
      else if(s1.charAt(i+1)=='V') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'u');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1),0);
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt((i),'V');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'U');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){               ////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                     /////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'U');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
             if(i>0){i--;goto haltU;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'V');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltU;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_L(){
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltL: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'L') || (s1.charAt(i) == 'l') || (s1.charAt(i) == 'M'))  &&  ((s1.charAt(i+1)== 'L') || (s1.charAt(i+1) == 'l') || (s1.charAt(i+1) == 'M'))      )
     {
      if(s1.charAt(i)=='L'){temp_i=-1;}
      else if(s1.charAt(i)=='l'){temp_i=1;}
      else if(s1.charAt(i)=='M'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='L'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='l'){temp_i1=1;}
      else if(s1.charAt(i+1)=='M') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'l');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt(i,'M');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'L');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){            /////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){              /////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'L');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltL;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'M');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltL;}
              continue;
          }
        }
      }
    }
  }
 }
}

void stringprocessing_F(){
    int i=0,j=0;


    for(i=0; i<1000; i++)
    {


    haltF: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'F') || (s1.charAt(i) == 'f') || (s1.charAt(i) == 'G'))  &&  ((s1.charAt(i+1)== 'F') || (s1.charAt(i+1) == 'f') || (s1.charAt(i+1) == 'G'))      )
     {
      if(s1.charAt(i)=='F'){temp_i=-1;}
      else if(s1.charAt(i)=='f'){temp_i=1;}
      else if(s1.charAt(i)=='G'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='F'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='f'){temp_i1=1;}
      else if(s1.charAt(i+1)=='G') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'f');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt(i,'G');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'F');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                               ///////////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                           ////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'F');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
             if(i>0){i--;goto haltF;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'G');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltF;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_B(){
    int i=0,j=0;


    for(i=0; i<1000; i++)
    {


    haltB: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'B') || (s1.charAt(i) == 'b') || (s1.charAt(i) == 'C'))  &&  ((s1.charAt(i+1)== 'B') || (s1.charAt(i+1) == 'b') || (s1.charAt(i+1) == 'C'))      )
     {
      if(s1.charAt(i)=='B'){temp_i=-1;}
      else if(s1.charAt(i)=='b'){temp_i=1;}
      else if(s1.charAt(i)=='C'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='B'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='b'){temp_i1=1;}
      else if(s1.charAt(i+1)=='C') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'b');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt(i,'C');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'B');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                                 ///////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                /////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'B');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltB;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'C');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltB;}
              continue;
          }
        }
      }
    }
  }
 }
}


void stringprocessing_D(){
    int i=0,j=0;

    for(i=0; i<1000; i++)
    {


    haltD: {

     int temp_i=0, temp_i1=0, temp=0;


     if(      ((s1.charAt(i) == 'D') || (s1.charAt(i) == 'd') || (s1.charAt(i) == 'E'))  &&  ((s1.charAt(i+1)== 'D') || (s1.charAt(i+1) == 'd') || (s1.charAt(i+1) == 'E'))      )
     {
      if(s1.charAt(i)=='D'){temp_i=-1;}
      else if(s1.charAt(i)=='d'){temp_i=1;}
      else if(s1.charAt(i)=='E'){temp_i=2;}
      else{temp_i=0;}

    if(s1.charAt(i+1)=='D'){temp_i1=-1;}
      else if(s1.charAt(i+1)=='d'){temp_i1=1;}
      else if(s1.charAt(i+1)=='E') {temp_i1=2;}
      else{temp_i1=0;}




      temp = temp_i + temp_i1;
      switch (temp)
      {
          case 1 :
          {
              s1.setCharAt(i,'d');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1),0);
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 2 :
          {

              s1.setCharAt(i,'E');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'D');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case 4 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                              /////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                          /////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'D');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltD;}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'E');
              {
              int p=0;
              for (p=i+1; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){i--;goto haltD;}
              continue;
          }
        }
      }
    }
  }
 }
}



void stringprocessing_RL(){
    int i=0,j=0;
 for(i=0;i<s1.length()-1;i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='R')||(s1.charAt(i)=='r')||(s1.charAt(i)=='S')  )   &&  (    (s1.charAt(i+1)=='L')||(s1.charAt(i+1)=='l')||(s1.charAt(i+1)=='M')    )    &&    (       (s1.charAt(i+2)=='R')||(s1.charAt(i+2)=='r')||(s1.charAt(i+2)=='S')       )     )  {


          if(s1.charAt(i)=='R'){temp_i=-1;}
          else if(s1.charAt(i)=='r'){temp_i=1;}
          else if(s1.charAt(i)=='S'){temp_i=2;}

          if(s1.charAt(i+1)=='L'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='l'){temp_i1=1;}
          else if(s1.charAt(i+1)=='M'){temp_i1=2;}



          if(s1.charAt(i+2)=='R'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='r'){temp_i2=1;}
          else if(s1.charAt(i+2)=='S'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'r');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {
            //exit(0);
              s1.setCharAt(i,'S');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
            //exit(0);
              s1.setCharAt(i,'R');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
            //exit(0);
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){   /////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
            //exit(0);
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){        //////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'R');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'S');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}



void stringprocessing_LR()
{
    int i=0,j=0;
 for(i=0;i<s1.length();i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='L')||(s1.charAt(i)=='l')||(s1.charAt(i)=='M')  )   &&  (    (s1.charAt(i+1)=='R')||(s1.charAt(i+1)=='r')||(s1.charAt(i+1)=='S')    )    &&    (       (s1.charAt(i+2)=='L')||(s1.charAt(i+2)=='l')||(s1.charAt(i+2)=='M')       )     )  {


          if(s1.charAt(i)=='L'){temp_i=-1;}
          else if(s1.charAt(i)=='l'){temp_i=1;}
          else if(s1.charAt(i)=='M'){temp_i=2;}

          if(s1.charAt(i+1)=='L'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='l'){temp_i1=1;}
          else if(s1.charAt(i+1)=='M'){temp_i1=2;}



          if(s1.charAt(i+2)=='L'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='l'){temp_i2=1;}
          else if(s1.charAt(i+2)=='M'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'l');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1.setCharAt(i,'M');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'L');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                               /////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i; q <= (s1.length()-2) ; q++){                        //////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'L');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'M');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}



void stringprocessing_UD()
{
    int i=0,j=0;
 for(i=0;i<s1.length();i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='U')||(s1.charAt(i)=='u')||(s1.charAt(i)=='V')  )   &&  (    (s1.charAt(i+1)=='D')||(s1.charAt(i+1)=='d')||(s1.charAt(i+1)=='E')    )    &&    (       (s1.charAt(i+2)=='U')||(s1.charAt(i+2)=='u')||(s1.charAt(i+2)=='V')       )     )  {


          if(s1.charAt(i)=='U'){temp_i=-1;}
          else if(s1.charAt(i)=='u'){temp_i=1;}
          else if(s1.charAt(i)=='V'){temp_i=2;}

          if(s1.charAt(i+1)=='D'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='d'){temp_i1=1;}
          else if(s1.charAt(i+1)=='V'){temp_i1=2;}



          if(s1.charAt(i+2)=='U'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='u'){temp_i2=1;}
          else if(s1.charAt(i+2)=='V'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'u');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1.setCharAt(i,'V');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'U');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                    ///////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                 /////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'U');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'V');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}


void stringprocessing_DU()
{
    int i=0,j=0;
 for(i=0;i<s1.length();i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='D')||(s1.charAt(i)=='d')||(s1.charAt(i)=='E')  )   &&  (    (s1.charAt(i+1)=='U')||(s1.charAt(i+1)=='u')||(s1.charAt(i+1)=='V')    )    &&    (       (s1.charAt(i+2)=='D')||(s1.charAt(i+2)=='d')||(s1.charAt(i+2)=='E')       )     )  {


          if(s1.charAt(i)=='D'){temp_i=-1;}
          else if(s1.charAt(i)=='d'){temp_i=1;}
          else if(s1.charAt(i)=='E'){temp_i=2;}

          if(s1.charAt(i+1)=='U'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='u'){temp_i1=1;}
          else if(s1.charAt(i+1)=='V'){temp_i1=2;}



          if(s1.charAt(i+2)=='D'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='d'){temp_i2=1;}
          else if(s1.charAt(i+2)=='E'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'d');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1.setCharAt(i,'E');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'D');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                              /////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                                 //////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'D');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'E');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
  }
}


void stringprocessing_FB()
{
    int i=0,j=0;
 for(i=0;i<s1.length();i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='F')||(s1.charAt(i)=='f')||(s1.charAt(i)=='G')  )   &&  (    (s1.charAt(i+1)=='B')||(s1.charAt(i+1)=='b')||(s1.charAt(i+1)=='C')    )    &&    (       (s1.charAt(i+2)=='F')||(s1.charAt(i+2)=='f')||(s1.charAt(i+2)=='G')       )     )  {


          if(s1.charAt(i)=='F'){temp_i=-1;}
          else if(s1.charAt(i)=='f'){temp_i=1;}
          else if(s1.charAt(i)=='G'){temp_i=2;}

          if(s1.charAt(i+1)=='B'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='b'){temp_i1=1;}
          else if(s1.charAt(i+1)=='C'){temp_i1=2;}



          if(s1.charAt(i+2)=='F'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='f'){temp_i2=1;}
          else if(s1.charAt(i+2)=='G'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'f');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1.setCharAt(i,'G');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'F');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                                //////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                              /////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'F');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'G');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
        ame=35;
      }
    }
  }
}



void stringprocessing_BF()
{
    int i=0,j=0;
 for(i=0;i<s1.length();i++){

        int temp_i=0,temp_i1=0,temp_i2=0;


        if(    (  (s1.charAt(i)=='B')||(s1.charAt(i)=='b')||(s1.charAt(i)=='C')  )   &&  (    (s1.charAt(i+1)=='F')||(s1.charAt(i+1)=='f')||(s1.charAt(i+1)=='G')    )    &&    (       (s1.charAt(i+2)=='B')||(s1.charAt(i+2)=='b')||(s1.charAt(i+2)=='C')       )     )  {


          if(s1.charAt(i)=='B'){temp_i=-1;}
          else if(s1.charAt(i)=='b'){temp_i=1;}
          else if(s1.charAt(i)=='C'){temp_i=2;}

          if(s1.charAt(i+1)=='F'){temp_i1=-1;}
          else if(s1.charAt(i+1)=='f'){temp_i1=1;}
          else if(s1.charAt(i+1)=='G'){temp_i1=2;}



          if(s1.charAt(i+2)=='B'){temp_i2=-1;}
          else if(s1.charAt(i+2)=='b'){temp_i2=1;}
          else if(s1.charAt(i+2)=='C'){temp_i2=2;}

          temp_i = temp_i + temp_i2;

         switch (temp_i)
      {
          case 1 :
          {
              s1.setCharAt(i,'b');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++)
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }

           case 2 :
          {

              s1.setCharAt(i,'C');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 3 :
          {
              s1.setCharAt(i,'B');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case 4 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                                 ////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case 0 :
          {
              {
                  s1.setCharAt(i,s1.charAt(i+1));
                int q=0;
                for(q=i+1; q <= (s1.length()-2) ; q++){                                 //////////////////////////////////-3
                s1.setCharAt(q,s1.charAt(q+2));
            }
                s1.setCharAt((s1.length()-1),0);
                s1.setCharAt((s1.length()-1),0);
                if(i>0){stringprocessing();}
              continue;
          }
          }

           case -1 :
          {
              s1.setCharAt(i,'B');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
          }

           case -2 :
          {
              s1.setCharAt(i,'C');
              {
              int p=0;
              for (p=i+2; p <= (s1.length()-2); p++){
              s1.setCharAt(p,s1.charAt(p+1));
              }
              s1.setCharAt((s1.length()-1), 0);
              if(i>0){stringprocessing();}
              continue;
          }
        }
      }
    }
 }
}


void tperm()
{
    finalCode+="ruRURfSURUruRF";
    return;
}

void parityfn()
{
    finalCode+="UMuSMDMd";
    return;
}



void yperm()
{
        finalCode+="rURUruRFruRURfr";
        return;
}


void jperm()
{
    finalCode+="rVRUrVLuRUl";
    return;
}



void bool1(){
if (boolvar==1){boolvar=0;}
else if (boolvar==0){boolvar=1;}
}

void st1(int angle){

  myStepper1.step(angle);
  //delay(50);

}

void st2(int angle){


  myStepper2.step(angle);
  //delay(50);

}

void st3(int angle){

  myStepper3.step(angle);
  //delay(50);

}

void st4(int angle){


  myStepper4.step(angle);
  //delay(50);

}


void st5(int angle){

  myStepper5.step(angle);
  //delay(50);

}

void st6(int angle){


  myStepper6.step(angle);
  //delay(50);

}


void rotate(int a){
  
  
  myStepper1.setSpeed(80);
  myStepper2.setSpeed(80);
  myStepper3.setSpeed(80);
  myStepper4.setSpeed(80);
  myStepper5.setSpeed(80);
  myStepper6.setSpeed(80);

  int i=0;

  switch(a){
    case 1 :
    {
      for(i=0; i<90; i++){
      myStepper1.step(1);
      myStepper2.step(1);
    }
    break;
  }




    case 2:
    {
      for(i=0; i<90; i++){
      myStepper1.step(1);
      myStepper2.step(-1);
    }
     break;
    }



    case 3 :
    {
      for(i=0; i<90; i++){
      myStepper1.step(1);
      myStepper2.step(2);
    }
     break;
    }



   case 4:
    {
      for(i=0; i<90; i++){
      myStepper1.step(-1);
      myStepper2.step(1);
    }
     break;
  }



  case 5:
    {
      for(i=0; i<90; i++){
      myStepper1.step(-1);
      myStepper2.step(-1);
    }
     break;
  }



  case 6:
    {
      for(i=0; i<90; i++){
      myStepper1.step(-1);
      myStepper2.step(2);
    }
     break;
  }


    case 7:
    {
      for(i=0; i<90; i++){
      myStepper1.step(2);
      myStepper2.step(1);
    }
     break;
  }



    case 8:
    {
      for(i=0; i<90; i++){
      myStepper1.step(2);
      myStepper2.step(-1);
    }
       break;
    }



    case 9 :
    {
      for(i=0; i<90; i++){
      myStepper1.step(2);
      myStepper2.step(2);
    }
     break;
    }

    case 10:
    {
      for(i=0; i<90; i++){
      myStepper3.step(1);
      myStepper4.step(1);
    }
     break;
  }




    case 11:
    {
      for(i=0; i<90; i++){
      myStepper3.step(1);
      myStepper4.step(-1);
    }
     break;
    }



    case 12 :
    {
      for(i=0; i<90; i++){
      myStepper3.step(1);
      myStepper4.step(2);
    }
     break;
    }



   case 13:
    {
      for(i=0; i<90; i++){
      myStepper3.step(-1);
      myStepper4.step(1);
    }
     break;
  }



    case 14:
    {
      for(i=0; i<90; i++){
      myStepper3.step(-1);
      myStepper4.step(-1);
      }
       break;
    }



    case 15 :
    {
      for(i=0; i<90; i++){
      myStepper3.step(-1);
      myStepper4.step(2);
    }
     break;
    }

    case 16:
    {
      for(i=0; i<90; i++){
      myStepper3.step(2);
      myStepper4.step(1);
    }
     break;
  }



    case 17:
    {
      for(i=0; i<90; i++){
      myStepper3.step(2);
      myStepper4.step(-1);
    }
     break;
    }



    case 18 :
    {
      for(i=0; i<90; i++){
      myStepper3.step(2);
      myStepper4.step(2);
    }
     break;
    }





    case 19:
    {
      for(i=0; i<90; i++){
      myStepper5.step(1);
      myStepper6.step(1);
    }
     break;
  }




    case 20:
    {
      for(i=0; i<90; i++){
      myStepper5.step(1);
      myStepper6.step(-1);
    }
     break;
    }



    case 21 :
    {
      for(i=0; i<90; i++){
      myStepper5.step(1);
      myStepper6.step(2);
    }
     break;
    }



   case 22:
    {
      for(i=0; i<90; i++){
      myStepper5.step(-1);
      myStepper6.step(1);
    }
     break;
  }



    case 23:
    {
      for(i=0; i<90; i++){
      myStepper5.step(-1);
      myStepper6.step(-1);
    }
     break;
    }



    case 24 :
    {
      for(i=0; i<90; i++){
      myStepper5.step(-1);
      myStepper6.step(2);
    }
     break;
    }

    case 25:
    {
      for(i=0; i<90; i++){
      myStepper5.step(2);
      myStepper6.step(1);
    }
     break;
  }



    case  26 :
    {
      for(i=0; i<90; i++){
      myStepper5.step(2);
      myStepper6.step(-1);
    }
     break;
    }



    case 27 :
    {
      for(i=0; i<90; i++){
      myStepper5.step(2);
      myStepper6.step(2);
    }
     break;
    }


}


}

void loop() {
  // put your main code here, to run repeatedly:

}

