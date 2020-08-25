# include <bits/stdc++.h>
#include <windows.h>

using namespace std;

class ui
{
public:
    int num,items,count,cost=0,oid;
    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    void logo(){
    	
    cout<<" ____                            ____  _           _  ";  
 	cout<<"| __ ) _   _ _ __ __ _  ___ _ __/ ___|| |__   ___ | |_ ___ ";
 	cout<<"|  _ \| | | | '__/ _` |/ _ | '__\___ \| '_ \ / _ \| __/ __|";
 	cout<<"| |_) | |_| | | | (_| |  __| |   ___) | | | | (_) | |_\__ \\";
 	cout<<"|____/ \__,_|_|  \__, |\___|_|  |____/|_| |_|\___/ \__|___/";
   	cout<<"                  |___/                      ";            
	cout<<"\n" ;
}

    ui()
    {
    	logo();
    	getID();
        cout<<"\t\t\tWelcome to BurgerShots\n\t\t\tOrder ID :"<<oid<<"\n\n";
        cout<<"\t\t\tChoose your item(s)\n";
        cout<<"\t\t\t1) Chicken Burger\n";
        cout<<"\t\t\t2) Cheese Burger\n";
        cout<<"\t\t\t3) Hulk Burger\n";
        cout<<"\t\t\t4) Toasted Sandwitch\n";
        cout<<"\t\t\t5) Heart Sandwitch\n";
        cout<<"\t\t\t6) Veg Pizza\n";
        cout<<"\t\t\t7) Chicken Pizza\n";
        cout<<"\t\t\t99) Thats All\n\n";
        getIn();
    }
    void getID(){
    	fp2=fopen("curr_id","r");
    	fscanf(fp2,"%d",&oid);
	}
	void upID(){
		fp2=fopen("curr_id","w");
		fprintf(fp2,"%d",oid);
		fclose(fp2);
	}
	void putID(){
		fprintf(fp1,"\n--------------------------------------\n%d\n--------------------------------------\n",oid);
	}
    void getIn()
    {

        fp1=fopen("Bills.loki","a+");
        putID();
        while(1==1)
        {
        	cout<<"I want to order : ";
            cin>>num;
            if(num==99)
            {
                fprintf(fp1,"\n--------------------------------------\ntotal\t\t%d\n======================================\n\n",cost);
                fclose(fp1);
        		oid++;
        		upID();
                system("cls");
                ui();
                //break;
            }
            else
            {

                cout<<"Number of item : ";
                cin>>items;
                //cout<<num<<" "<<items;
                putCalc(num,items);

            }

        }
    }
    void putCalc(int n,int it)
    {
        
        map<int,string> m1;
        m1[1]="Chicken Burger";
        m1[2]="Cheese Burger";
        m1[3]="Hulk Burger";
        m1[4]="Toasted Sandwitch";
        m1[5]="Heart Sandwitch";
        m1[6]="Veg Pizza";
        m1[7]="Chicken Pizza";

        int id,price;
        fp=fopen("Menu.loki","r");
        while(fscanf(fp,"%d %d",&id,&price)!=EOF)
        {
          //  cout<<"input "<<id<<" "<<price<<"\n";
            if(n==id)
            {
                int sub_cost=price*it; // cost
                cost+=sub_cost;
               
                fprintf(fp1,"%s %dx %d\n",m1[id].c_str(),it,sub_cost); // you better do some digging for this line, they will ask you about it

            }

        }
        fclose(fp);




    }
};


main()
{
    ui obj;
}
