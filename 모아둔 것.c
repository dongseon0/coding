/*
int main()
{
    int a, b;
    int sum;                 // ���� ���� �����صδ� ����!!
    printf("����!!!!!�Է���!!!!");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("%d+%d=%d\n", a, b, sum);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int x = 20;
    int y = 10;


    int sum = x + y;
    int diff = x - y;
    int mul = x * y;
    int lovedive = x / y;

    printf("�μ��� �� : %d\n", sum);
    printf("�μ��� �� : %d\n", diff);
    printf("�μ��� �� : %d\n", mul);
    printf("�μ��� �� : %d", lovedive);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a, b;
    printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &a);
    printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &b);

    printf("�μ��� ��:%d", a+b);
    return 0;
}
*/
/*
// ���� ���� ���α׷�
#include <stdio.h>

int main()
{
   int ysalary;
   int msalary;

   printf("������ �Է��Ͻÿ�(����: ����): ");
   scanf("%d", &ysalary);
   msalary = ysalary/12;
   printf("�����ɾ�(����: ����):%d", msalary);

   return 0;
}
*/
/*
//���� ���� ��� ���α׷�
#include <stdio.h>

int main()
{
   double radius;
   double area;        //float���� double�� ��Ʈ���� �� ŭ-���ʿ� ū�ɾ��� ķ����

   printf("�������� �Է��Ͻÿ�: ");
   scanf("%lf", &radius);

   area = radius*radius*3.14;
   printf("���� ����: %.2lf", area); //�Ҽ��� ���ڸ�
   return 0;
}

//�ڷ��� �׻� �Ű澲��ФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФ�
*/
/*
//ȯ�� ��� ���α׷�
#include <stdio.h>

int main()
{
   double rate; //ȯ��
   double usd; //�޷�
   double krw; //��ȭ

   printf("ȯ���� �Է��Ͻÿ�: ");
   scanf("%lf", &rate);
   printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
   scanf("%lf", &krw);

   usd = krw/rate;
   printf("��ȭ %.0lf���� %lf�޷��Դϴ�.", krw, usd);

   return 0;
}
*/
/*
//�簢���� �ѷ��� ����
#include <stdio.h>

int main()
{
    double w, h, area, perimeter;
    printf("Input>");
    scanf("%lf %lf", &w, &h);

    area = w * h;
    perimeter = 2 * (w + h);
    printf("�簢���� ����: %.2lf", area);
    printf("�簢���� �ѷ�: %.2lf", perimeter);

    return 0;
}
*/
/*
//�簢���� �ѷ��� ����
#include <stdio.h>

int main()
{
    int x;
    printf("���� x�� ũ��: %d \n", sizeof(x));
    printf("char���� ũ��: %d \n", sizeof(char));
    printf("int���� ũ��: %d \n", sizeof(int));
    printf("short���� ũ��: %d \n", sizeof(short));
    printf("long���� ũ��: %d \n", sizeof(long));
    printf("long long���� ũ��: %d \n", sizeof(long long));
    printf("float���� ũ��: %d \n", sizeof(float));
    printf("double���� ũ��: %d \n", sizeof(double));

    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char code1 = 'A';
    char code2 = 49;

    printf("code1 = %d\n", code1);
    printf("code2 = %c\n", code2);
}
*/
/*
#include <stdio.h>
int main()
{
    int id, pass;

    printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");

    printf("id:____\b\b\b\b");
    scanf("%d", &id);

    printf("pass:____\b\b\b\b");
    scanf("%d", &pass);

    printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.", id, pass);

    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char code = 'A';
    printf("%d %d %d \n", code, code+1, code+2);
    printf("%c %c %c \n", code, code+1, code+2);
    return 0;
}
*/
/*
//�¾�� ���� �ð�
#include <stdio.h>

int main()
{
    double s,v,t;
    s = 149600000;
    v = 300000;
    t = s/v;

    printf("���� �ӵ��� %0.6fkm/s\n",v);
    printf("�¾�� �������� �Ÿ��� %0.6fkm\n", s);
    printf("���޽ð��� %0.6f��", t);

    return 0;
}

}*/
/*
#include <stdio.h>
int main()
{
    int x, y, result;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);

    result =0;
    result = x+y;
    printf("%d+%d=%d\n",x,y,result);

    result = x-y;
    printf("%d-%d=%d\n",x,y,result);
    result = x*y;
    printf("%d*%d=%d\n",x,y,result);
    result = x/y;
    printf("%d/%d=%d",x,y,result);

    return 0;

}

#include <stdio.h>
int main()
{
    int x, y;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);

    printf("%d+%d=%d\n",x,y,x+y);
    printf("%d-%d=%d\n",x,y,x-y);
    printf("%d*%d=%d\n",x,y,x*y);
    printf("%d/%d=%d",x,y,x/y);

    return 0;
}*/
/*
//�Ǽ��� ����
#include <stdio.h>
int main()
{
    double x,y;
    printf("�ΰ��� �Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf %lf", &x,&y);  //scanf���� double�� %f���� �ȉ�~ %lf

    printf("%lf+%lf=%lf", x,y,x+y);
    return 0;
}
*/
/*
//%�� ������������
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
    int input, minute, second;

    printf("�ʸ� �Է��Ͻÿ�: ");
    scanf("%d",&input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;
    printf("%d�ʴ� %d�� %d���Դϴ�.", input, minute, second);
    return 0;

}
*/
/*
#include <stdio.h>

int main()
{
    int x=10;

    printf("x=%d\n",x);
    printf("++x�� ��=%d\n", ++x);
    printf("x=%d\n",x);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int x=10;

    printf("x=%d\n",x);
    printf("x++�� ��=%d\n", x++);
    printf("x=%d\n",x);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int x, y;

    printf("�ΰ��� ������ �Է��Ͻÿ� :");
    scanf("%d %d", &x, &y);

    printf("x==y�� �����:%d\n", x == y);
    printf("x!=y�� �����:%d\n", x != y);
    printf("x<y�� �����:%d\n", x < y);
    printf("x>y�� �����:%d\n", x > y);
    printf("x<=y�� �����:%d\n", x <= y);
    printf("x>=y�� �����:%d", x >= y);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int x, y;
    printf("ù��° ��:");
    scanf("%d", &x);
    printf("�ι�° ��:");
    scanf("%d", &y);

    printf("ū ��: %d\n", (x>y)? x:y);
    printf("���� ��:%d", (x<y)? x:y);
    return 0;
}*/
/*
//�����ڵ�
#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    int z =10;
    int result;

    result = 2>3 || 6>7;
    printf("%d\n", result);

    result = 2 || 3 && 3>2; //??????????????????
    //������ 0, ������ �� ��
    printf("%d\n", result);

    result = x = y = 2;
    printf("%d\n", result);

    //***�߿�: ������ 2�� ���Ե�
    result = -++x+y--;  //-3 + 2 --> ������ 2����
    printf("%d\n", result);
    printf("%d\n", y); // y==1
    return 0;
}
*/
/*
// ����ȯ ����! �ٽ� �ϱ�..�ФФФ� �����
#include <stdio.h>

int main()
{
    int i;
    double f;

    f = 5/4;
    printf("%f\n", f); //1.000000

    f = (double)5/4;    //�Ǽ������� ��ȯ�ǰ� 5.000/4.000
    printf("%f\n", f); // 1.250000

    f = 5.0/4;          //(=5.0/4.0) �Ǽ��� ����
    printf("%f\n", f); // 1.250000

    f = 5.0/4.0;
    printf("%f\n", f); //1.250000

    f = (double)5 / (double)4;
    printf("%f\n", f);  //1.250000

    i = 1.3 + 1.8;
    printf("%d\n", i);  //�Ǽ����� ���ǰ� ���������� �߸�

    i = (int)1.3 + (int)1.8;
    printf("%d", i);    //2

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    double f;
    double c;

    printf("ȭ���µ��� �Է��Ͻÿ�:");
    scanf("%lf", &f);                   //float�� scanf������ longfloat

    c = (5.0/9.0)*(f-32);               //(5/9)�ϸ� 0����
    //c = ((double)5/(double)9)*(f-32);
    printf("�����µ��� %f �Դϴ�.", c);

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    int i;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &i);

    if (i>0)
        printf("����Դϴ�.\n");

    printf("�Էµ� ���� %d�Դϴ�.", i);
    return 0;
}*/
/*
//���� ���ϱ�
#include <stdio.h>

int main()
{
    int i;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &i);

    if (i<0)
        i = -i;
    printf("������ %d�Դϴ�.", i);

    return 0;
}
*/
/*
//if-else��
#include <stdio.h>

int main()
{
    int i;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &i);

    if (i % 2 == 0)
        printf("�Էµ� ������ ¦���Դϴ�.");

    else
        printf("�Էµ� ������ Ȧ���Դϴ�.");

    return 0;
}*/

/*
////////�и�� 0�� �� �� ����!!
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%d", &n1);

    printf("�и� �Է��Ͻÿ�:");
    scanf("%d", &n2);

    if(n2==0)
        printf("0���� ���� �� �����ϴ�.");
    else
        printf("����� %d�Դϴ�.", n1/n2);

    return 0;
}
*/
/*
//��������
#include <stdio.h>

int main()
{
    int score;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &score);

    if(score>=90)
        printf("���� A\n");
    else if (score>=80)
        printf("���� B\n");
    else if (score>=70)
        printf("���� C\n");
    else if (score>=60)
        printf("���� D\n");
    else
        printf("���� F\n");

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    char ch;
    printf("���ڸ� �Է��Ͻÿ�:");
    scanf("%c", &ch);

    if (ch>='A'&& ch<='Z') //(==ch>=65&&ch<=90)
        printf("%c�� �빮���Դϴ�.", ch);
    else if(ch>='a'&& ch<='z')
        printf("%c�� �ҹ����Դϴ�.", ch);
    else if(ch>='0' && ch<='9')
        printf("%c�� �����Դϴ�.", ch);
    else
        printf("%c�� ��Ÿ�����Դϴ�.", ch);

    return 0;
}*/
/*
//��� ����
#include <stdio.h>

int main()
{
    int x, y, result;
    char op;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d %c %d", &x, &op, &y);
    printf(">>> %d %c %d\n", x, op, y);

    if(op=='+')
        result = x+y;
    else if(op=='-')
        result = x-y;
    else if(op=='/')
        result = x/y;
    else if(op=='*')
        result = x*y;
    else if(op=='%')
        result = x%y;
    else
        printf("�������� �ʴ� �������Դϴ�.");

    printf("%d %c %d = %d", x, op, y, result);
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, dis, sol;  //ax*x+b*x+c =0

    printf("����� �Է��Ͻÿ�:");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b * b - (4 * a * c);

    if (dis < 0)
        printf("�Ǳ��� �������� �ʴ´�.");

    else if (dis >= 0)
    {
        if (a == 0)
        {
            sol = -c / b;
            printf("���� %f�̴�.", sol);
        }

        else
        {
            sol = ((-b) + sqrt(dis)) / (2 * a);
            printf("���� %f�̴�.", sol);

            sol = ((-b) - sqrt(dis)) / (2 * a);
            printf("���� %f�̴�.", sol);
        }
    }


    return 0;
}
*/
/*
//��Ŭ���� �˰������� �ִ����� ã��
#include <stdio.h>

int main()
{
    int a, b, max, min, r;
    printf("�� ������ �Է��Ͻÿ�:");
    scanf("%d %d", &a, &b);
    max = (a>b)? a:b;
    min = (a>b)? b:a;

    while(min!=0)
    {
        r = max % min;
        max = min;
        min = r;
    }
    printf("������� %d�Դϴ�.", max);

    return 0;
}*/
/*
//����ڰ� 0�� �Է��� ������ ���ڸ� ���Ѵ�.
#include <stdio.h>

int main()
{
    int n, sum =0;      //sum ���Ÿ� �ʱ�ȭ!!!!!!!!!!!!!!!!!!!!!!!!!!

    do
    {
        printf("������ �Է��Ͻÿ�:");
        scanf("%d", &n);
        sum+=n;

    } while (n!=0);

    printf("���ڵ��� �� = %d", sum);

    return 0;
}*/