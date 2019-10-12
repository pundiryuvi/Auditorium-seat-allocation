//the first 2 rows for Vip
//3rd, 4rth and 5th row is for faculity members
//and rest of the rows are for students

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//intilizing all funtions before executing
void showAuditorium();
int showOptions();
int showSubOption();
void clear() {
	system("@cls");
}

bool a[10][20]={false};
long id[10][20];
int vipCount=0,vipCount1=0,facCount=2,facCount1=0,stdCount=5,stdCount1=0;

int main() {
	printf("\t\t\tSeat Management for Auditorium\n");
	int option=showOptions();
	showAuditorium();
	int subOption=showSubOption();
	switch(option) {
		case 1:
			if(subOption==1) {
				if(vipCount1==20) {
					vipCount1=0;
					vipCount=1;
				} else {
					printf("Enter your id- ");
					int iden;
					scanf("%d",&iden);
					id[vipCount][vipCount1]=iden;
					a[vipCount][vipCount1]=true;
					vipCount1++;
					clear();
					showAuditorium();
					printf("Your seat is successfully booked.\n");
					main();
				}
			} else if(subOption==2) {
				if(vipCount1==20) {
					vipCount1=0;
					vipCount=1;
				} else {
					vipCount1--;
					a[vipCount][vipCount1]=false;
					clear();
					main();
				}
			}
			break;
		case 2:
			if(subOption==1) {
				if(facCount==20) {
					facCount=0;
					facCount1++;
				} else {
					printf("Enter your id- ");
					int iden;
					scanf("%d",&iden);
					id[facCount][facCount1]=iden;
					a[facCount][facCount1]=true;
					facCount1++;
					clear();
					showAuditorium();
					printf("Your seat is successfully booked.\n");
					main();
				}
			} else if(subOption==2) {
				if(facCount1==20) {
					facCount1=0;
					facCount++;
				} else {
					facCount1--;
					a[facCount][facCount1]=false;
					clear();
					main();
				}
			}
			break;
		case 3:
			if(subOption==1) {
				if(stdCount==20) {
					stdCount=0;
					stdCount1++;
				} else {
					printf("Enter your id- ");
					int iden;
					scanf("%d",&iden);
					id[stdCount][stdCount1]=iden;
					a[stdCount][stdCount1]=true;
					stdCount1++;
					clear();
					showAuditorium();
					printf("Your seat is successfully booked.\n");
					main();
				}
			} else if(subOption==2) {
				if(stdCount1==20) {
					stdCount1=0;
					stdCount++;
				} else {
					stdCount1--;
					a[stdCount][stdCount1]=false;
					clear();
					main();
				}
			}
			break;
	}
} 

void showAuditorium() {
	for(int i=0;i<10;i++) {
		for(int j=0;j<20;j++) {
			if(a[i][j]==true) {
				printf("* ");
			} else {
				printf("- ");
			}
		}
		
	printf("\n");
	}
}
int showOptions() {
	printf("1.Vip\n2.Faculity\n3.Student\n");
	int value;
	scanf("%d",&value);
	if(value<=0 || value>=4) {
		clear();
		printf("Invailed Choise\n");
		showOptions();
	} else {
		return value;
	}
}

int showSubOption() {
	printf("1.Make Booking\n2.Cancel Booking\n");
	int option;
	scanf("%d",&option);
	if(option!=1 || option!=2) {
		return option;
	} else {
		printf("Invailed Choice\n");
		showSubOption();
	}
}
