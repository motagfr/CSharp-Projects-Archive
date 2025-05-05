#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void findt(float a[], int k);
void write_v(int x) {
	if (x < 10)
		printf("%d\n", x);
	else {
		printf("%d\n", x % 10);
		write_v(x / 10);
	}
}
unsigned long factorial(unsigned long n) {
	
	/*if (n<=1)
		return 1;
	else
		return (n *= factorial(n - 1)); */
	// you can write it like below:
	if (n!=0)
		return (n *= factorial(n - 1));
	return 1;
	
}
void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (INVALID_HANDLE_VALUE != hConsole)
	{
		pos.X = x;
		pos.Y = y;

		SetConsoleCursorPosition(hConsole, pos);
	}
}
void convert(void)
{
	int h, m, s;
	long int time1;
	printf("\n Enter time to be converted : hour, minutes, seconds :");
	scanf_s("%d%d%d", &h, &m, &s);
	time1 = (long int)(60 * h + m) * 60 + s;
	printf("\n time is :%ld seconds.", time1);
	_getch();
}
char topcapital(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ch;
}
void read_data(float b[], int length)
{
	int i;
	printf("\nEnter 15 of grades and press Enter:");
	for (i = 0; i < length; i++)
		scanf_s("%f", &b[i]);
}
void bubble_sort(float c[], int length)
{
	float help;
	for (int i = 0;i < length;i++)
		for (int j = 0;j < length;j++)
			if (c[i]>c[j])
			{
				help = c[i];
				c[i] = c[j];
				c[j] = help;
			}
}
void output(float d[], int length)
{
	printf("Here is the sorted list:");
	for (int i = length-1; i < length && i >= 0; i--)
		printf("  %4.2f", d[i]);
	printf("\n");
}
void BinarySearch(float a[],int u,float no)
{
	int c=1;
	int len = u-1;
	if (a[len] > no)
		printf("\nNUmber can't be found.");
	else
		while(c!=0)
		{
			if (a[len] == no)
			{
			c = 0;
			printf("Number is found in position: %d", u-len);
			}
			else
				if (no < a[len])
					len = (len / 2);
			else
				len=(len+(len / 2))/2;
		}
	/*int mid,low=0,high=u-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(no<a[mid])
			high=mid+1;
		else if(no>a[mid])
			low=mid+1,
		else return mid;
	}
	return -1;  */
}
#define f 6
int return_the_nth_occurence(char c[],char e,int n)
{
	int i = 0;
	int count = 0;
	char b=e;
	while (c[i] != '\0')
	{
		if (c[i] == b)
			count++;
		if (count == n)
			return i+1;
		i++;
	}
	return -1;
}
void swapintegers(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
struct complex1
{
	int real;
	int unreal;
}comp1,comp2,comp3;
#define MAX 100
struct INFO
{
	char name[10];
	char street[15];
	char city[10];
	char state[3];
	unsigned long int zip;
}INF[MAX];
void add_info()
{
	int i = 0,b;
	printf("\nHow many entries to add?");
	scanf_s("%d", &b);
	do
	{
		printf("Enter name:\n");
		gets_s(INF[i].name,15);
		printf("Enter street:");
		gets_s(INF[i].street, 15);
		printf("Enter city:");
		gets_s(INF[i].city, 10);
		printf("Enter state:");
		gets_s(INF[i].state, 3);
		printf("Enter zip code:");
		scanf_s("%d", &INF[i].zip);
		i++;
	} while (i<b && i != 100);
}
void initialize_all_INF()
{
	int d;
	for (d = 0;d < MAX;++d)
		for (int i = 0;i <= 10;i++)
	{
		INF[d].name[i] = 0;
		INF[d].city[i] = 0;
		INF[d].state[i] = 0;
		INF[d].street[i] = 0;
		INF[d].zip = 0;
	}
}
void sort_info()
{
	int i = 0;
	char temp[10];
	do 
{
	if (_stricmp(INF[i].name,INF[i+1].name)<0 && INF[i+1].name)
		{
			strcpy_s(temp,10,INF[i].name);
			strcpy_s(INF[i].name,10,INF[i+1].name);
			strcpy_s(INF[i+1].name,10,temp);
			
		}
	i++;
} while (INF[i].name);
}
int search_info()
{
	int i=0,high=MAX,low=0;
	char name[10];
	printf("Enter name:");
	gets_s(name,10);
	while (INF[i].name)
	{
		i = (high + low) / 2;
		if (_stricmp(name, INF[i].name) == 0)
		{
			printf("Name exists in (%d+1)th position.\n",i);
			printf("Name:%s", INF[i].name);
			printf("\nStreet is:%s", INF[i].street);
			printf("\nState is:%s", INF[i].state);
			printf("\nZip code is:%d", INF[i].zip);
		}
		else if (_stricmp(name, INF[i].name) < 0)
			high = i / 2;
		else
			low=low+i;
	}
	return i;
}
void delete_info()
{
	char name[10];
	int d;
	printf("\nWhich name?");
	gets_s(name, 10);
	d = search_info();
	for (int i = 0;i<10;i++)
	{
		INF[d].name[i] = 0;
		INF[d].city[i] = 0;
		INF[d].state[i] = 0;
		INF[d].street[i] = 0;
		INF[d].zip = 0;
	}
}
struct addr {
	char name[10];
	char street[10];
	char city[10];
	char state[3];
	unsigned long int zip;
}addr_info[MAX];
int find_free(void)
{
	register int t;
	for (t = 0;addr_info[t].name[0] && t < MAX;t++);
	if (t == MAX) return -1;
	return t;
}
void init_list_all()
{
	register int t;
	for (t = 0;t < MAX;t++)
		for (int i=0;i < 10;i++)
		addr_info[t].name[i] = '\0' ;
}
int menue_select(void)
{
	char s[10];
	int c;
	system("cls");
	gotoxy(29, 6);
	printf("1)<<enter a name>>");
	gotoxy(29, 8);
	printf("2)<<delete a name>>");
	gotoxy(29, 10);
	printf("3)<<list all the file>>");
	printf("4)<<   Quit   >>");
	do 
	{
		gotoxy(24, 15);
		printf("Please enter your choice(1-4):");
		gets_s(s,10);
		c = atoi(s);
	} while (c<0|| c>4);
	return(c);
}
void enter(void)
{
	int slot;
	char s[80];
	slot = find_free();
	if (slot == -1)
	{
		printf("\n list full.");
		return;
	}
	gotoxy(5,17);
	printf("enter name:");
	gets_s(addr_info[slot].name,10);
	gotoxy(40,17);
	printf("enter street:");
	gets_s(addr_info[slot].street,10);
	gotoxy(15,19);
	printf("enter state city:");
	gets_s(addr_info[slot].city, 10);
	gotoxy(40,19);
	printf("enter state code:");
	gets_s(addr_info[slot].state, 10);
	gotoxy(22,21);
	printf("enter zip:");
	gets_s(s, 10);
	addr_info[slot].zip = strtoul(s,NULL,10);
	
}
void delete_e(void)
{
	int slot;
	gotoxy(28, 19);
	printf("enter record #(0-99):");
	scanf_s("%d", &slot);
	addr_info[slot].name[0] = '\0';
}
void list_all(void)
{
	register int t;
	int r = 0;
	//char ch;
	system("cls");
	gotoxy(25, 2);
	printf("<<all information in list are:>>");
	gotoxy(13, 3);
	printf("*********************");
	printf("******************");
	printf("*******************");
	gotoxy(10, 4);
	printf("   name    street   city   ");
	printf("  state      zip");
	gotoxy(10, 5);
	printf("  --------  --------   ------   ");
	printf("  -----    ----");
	for (t = 0;t < MAX;t++)
	{
		if (addr_info[t].name[0])
		{
			gotoxy(14, 6 + r);
			printf("%s ", addr_info[t].name);
			gotoxy(25, 6 + r);
			printf("%s ", addr_info[t].street);
			gotoxy(40, 6 + r);
			printf("%s ", addr_info[t].city);
			gotoxy(54, 6 + r);
			printf("%s ", addr_info[t].state);
			gotoxy(70, 6 + r);
			printf("%10lu ", addr_info[t].zip);
			r++;
		}
	}
	gotoxy(13, 6 + r);
	printf("*******************");
	printf("*******************");
	printf("*******************");
	gotoxy(27, 7 + r);
	printf("press any key to continue");
}
struct personel 
{
	char name[30];
	int agenum;
};
struct personel newname()
{
	char name1[80];
	struct personel agent;
	printf("<<Enter name>>\n\n ");
	printf("Enter name:");
	gets_s(agent.name,30);
	printf("enter agent number(3digit):");
	gets_s(name1, 30);
	agent.agenum = atoi(name1);
	return(agent);
}
void list(struct personel age)
{
	printf("%15s %10d\n", age.name, age.agenum);
}
struct tm 
{
	int hours;
	int minutes;
	int second;
};
void display(struct tm *t)
{
	gotoxy(70, 2);
	printf("\n%2d:", t->hours);
	printf("%2d:", t->minutes);
	printf("%2d", t->second);
}
void delayt()
{
	long int t;
	for (t = 1;t < 20000000;t++);
}
void update(struct tm *t)
{
	t->second++;
	if (t->second==60)
	{
		t->second = 0;
		t->minutes++;
	}
	if (t->minutes==60)
	{
		t->minutes = 0;
		t->hours++;
	}
	if (t->hours==24)
	{
		t->hours = 0;
	}
	delayt();
}
int main()
{
	struct tm time = { 0 };
	system("cls");
	for (;;)
	{
		update(&time);
		display(&time);
	}
	
	/*int c;
	struct personel person;
	struct personel *p;
	p = &person;
	c=(*p).agenum;*/
	/*struct personel agent1, agent2;
	system("cls");
	agent1 = newname();
	agent2 = newname();
	printf("\n<<agent name  agent number>>\n\n");
	list(agent1);
	list(agent2);*/
	/*struct date 
	{
		int day;
		int month;
		int year;
	}today;
	struct employee 
	{
		char name[30];
		int persno;
		struct date workdate;
		int age;
		int old;
	}emp[MAX]; // emp[i].wordate.month ...*/
	/*char choice; //ch
	init_list_all();
	for (;;)
	{
		choice = menue_select();
		switch (choice)
		{
		case 1: enter(); break;
		case 2: delete_e(); break;
		case 3: list_all(); break;
		case 4: exit(0);
		}
	}*/
	/*
	char a;
	int b;
	initialize_all_INF();
	for (;;)
	{
		printf("To add, search or delete info type corresponding values 1,2 or 3:");
		scanf_s("%c", &a, sizeof(char));
		switch (a)
		{
		case '1':
		{
			add_info();
			sort_info();
		}
		break;
		case '2':
		{
			b = search_info();
			printf("\nname:%s", INF[b].name);
			printf("\nstreet:%s", INF[b].street);
			printf("\ncity:%s", INF[b].city);
			printf("\nstate:%s", INF[b].state);
			printf("\nZip code:%d", INF[b].zip);
		}
		break;
		case '3':
			delete_info();
			break;
		default:
			break;
		}
	}*/
	/*printf("Enter real part for complex number 1:");
	scanf_s("%d", &comp1.real);
	printf("Enter imaginary part:");
	scanf_s("%d", &comp1.unreal);
	printf("Enter real part for complex number 2:");
	scanf_s("%d", &comp2.real);
	printf("Enter imaginary part:");
	scanf_s("%d", &comp2.unreal);
	comp3.real = comp1.real + comp2.real;
	comp3.unreal = comp1.unreal + comp2.unreal;
	printf("The sum is: %d+i*(%d)", comp3.real, comp3.unreal);*/
	/*int *x, n;
	scanf_s("%d", &n);
	x = (int *)malloc(sizeof(int)*n);*/
	/*int a[5], i;
	printf("\n enter five values:");
	for (i = 0;i < 5;i++)
		scanf_s("%d", &a[i]);
	printf("\n The reverse order is:");
	for (i = 4;i >= 0;i--)
		printf("%4d ",*(a+i));*/
	/*int x = 10, y = 20;
	printf("\n first value of x,y are:%d,%d",x,y);
	swapintegers(&x, &y);
	printf("\n new value of x,y are:%d,%d", x, y);*/
	/*
	int *x, *y, s;
	x = (int *)malloc(sizeof(int));
	if (!x)
	{
		printf("\n allocation failure.");
		exit(1);
	}
	y = (int *)malloc(sizeof(int));
	if (!y)
	{
		printf("\n allocation failure.");
		exit(1);
	}
	printf("\n enter two integers:");
	scanf_s("%d%d",x,y);
	s = *x**x + *y**y;
	printf("\n sum of squares is:%d",s);
	free(x);
	free(y);*/
	/*
	int *p, m, s;
	m = 5;
	p = &m;
	s = *p;
	printf("%d", s);*/
	/*
	char s1[60];
	char s2[30];
	char s3[60];
	strcpy_s(s1, 30, "Hello everybody.");
	strcpy_s(s2, 30, "Hello everybody.I am okay.");
	//printf("%d\n", _stricmp(s1,s2));
	strcat_s(s1,60,s2);
	strcpy_s(s3,60,s1);
	puts(s1);*/
	/*char s[50];
	strcpy_s(s,50,"This is ok.");
	printf("%s\n", s);
	puts(s);*/
	/*
	char c[100];
	char b;
	int n;
	int count = 0;
	printf("Enter a sentence:");
	gets_s(c,100);
	printf("Enter a character:");
	b=getchar();
	printf("Enter the Nth occurrence:");
	scanf_s("%d", &n);
	if (return_the_nth_occurence(c,b,n)!=-1)
		printf("The %d-th occurrence is at %d-th location.\n",n,return_the_nth_occurence(c, b, n));
	else 
		printf("The character doesn't occur.\n");
	
	*/
	/*
	char s1[] = "0123456789";
	char s2[5] = {'\0'};
	int i=0;
	int j = 0; 
	s2[i] = s1[i++];
	printf("\n S2[0] is %c, S2[1] is %c and i=%d",s2[0],s2[1],i);
	printf("\n");
	s2[j] = s1[++j];
	printf("\n S2[0] is %c, S2[1] is %c and j=%d",s2[0],s2[1], j);*/
	/*
	float a[f];
	float n;
	read_data(a,f);
	bubble_sort(a,f);
	output(a,f);
	printf("Now enter a figure to search in the list:");
	scanf_s("%f",&n);
	BinarySearch(a,f,n);
	printf("\n");*/	
	/*
	int x;
	printf("enter number:");
	scanf_s("%d", &x);
	write_v(x);*/
	/*unsigned long n;
	printf("\nEnter number:");
	scanf_s("%ld", &n);
	printf("\nFactorial is: %ld", factorial(n));*/
	/*int m, x = 5, y = 10;
	m = x + y;
	system("cls");
	gotoxy(20, 10);
	printf("x=%d, y=%d, sum=%d\n\n\n\t\t\t\t", x, y, m);
	_getch();*/
	/*int tool, arz, masahat, mohit;
	printf(" Write tool and arz:\n");
	scanf("%d%d", &tool, &arz);
	masahat = tool*arz;
	mohit = (tool + arz) * 2;
	printf("mohit=%d    masahat=%d\n\n", mohit, masahat);
	_getch();*/
	/*for (int j = 0;j < 10;j++)
	{
		
		for (int i = 1; i < 11; i++)
			printf("%3d\t", i*(j+1));
		printf("\n");
	
		
	}*/	
	/*int sum = 0, a = 0;
	for (int i = 0;i < 5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf_s("%d", &a);
		sum += a;
		printf("\n");
	}
	printf("Sum is: %7.5f\n\n", (float)sum / 5);
	*/
	/*
	char ch;
	int i;
	printf("enter statement ending in period:\n");
	for (i = 0; (ch = _getche()) != '.'; i++);
	printf("\n\nlength of statement is %d\n\n",i);*/
	/*char ans = 'y';
	float s = 0;
	while (ans=='y')
	{
		printf("Enter a number:");
		scanf_s("%f", &s);
		s *= s;
		printf("square is %3.2f\nDo you want to continue?", s);
		ans = _getche();
		printf("\n");
	}*/
	/*
	for (int i = 0;i < 150;i++)
	{
		printf("%4d=%c\t", i, i);
		if (i % 5 == 0)
			printf("\n");
	
	}
	*/
	/*printf("Please enter a sentence:");
	char ch;
	int count=0,number=0; 
	while ((ch = _getche()) != '\r')
	{
		count++;
		if (ch>=48 && ch<=57)
			number++;
	}
	printf("\n\nCharCount=%d, NumCount=%d", count, number);*/
	/*
	char ch;
	do 
	{
	printf("Please enter a character:");
	ch = _getche();
	printf("\nch=%c, nextch=%c\n", ch, ch + 1);
	printf("Do you want to repeat?(Y/N)");
	ch = _getche();
	printf("\n");
	} while (ch=='y');
	printf("\nthanks");
	*/
	/*
	long int num;
	int f = 0;
	while (1)
	{
		printf("Enter number:");
		scanf_s("%ld", &num);
		for (int i = 1;i < num;i++)
		{
			
			if ((num%i)==0)
			{
				f += i;
			}
		}
		if (num == f)
		{
			printf("\nNumber is perfect, dO you want to repeat?(y/n)");
			if (_getche() != 'y')
				break;
		}
		else
		{
			printf("\nNumber isn't perfect, dO you want to repeat?(y/n)");
			if (_getche() != 'y')
				break;
		}	
		printf("\n\n");
	}
	printf("\n\n");
	*/
	/*
for (int j = 1;j < 5;j++)
    {
		for (int i = 1;i < 7;i++)
		{
			printf("$  ");
		}
		printf("\n");
    }
	*/
	/*convert();
	*/
	/*char ch;
printf("\n Enter a character:");
ch = _getche();
printf("\n Result is:%c", topcapital(ch));*/
	/*#def k 10; it must be before main!
float a[10];
int i;
printf("\n enter %d of grades and press Enter:\n", k);
for ( i = 0; i < k; i++)
{
	scanf_s("%f", &a[i]);
}
findt(a, k);*/
_getch();

return 0;
	

}

void findt(float a[], int k) 
{
	int max_count = -1;
	float max_value;
	int i,j,current_count;
	for (i = 0;i < k;i++) 
	{
		current_count = 0;
		for (j = 0;j < k;j++) 
		{
			if (a[i] == a[j])
				current_count++;
			if (current_count > max_count)
			{
				max_count = current_count;
				max_value = a[i];
			}
		}
	}
	printf("\n maximum grade and it's frequency are in order:");
	printf(" %5.2f and %d\n", max_value, max_count);
}