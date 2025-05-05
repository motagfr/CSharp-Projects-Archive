using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace ClassProperties
{
    class A
    {
        public A()
        {

        }
        public int _a;
        public int _b;
        public A(int a,int b)
        {
            _a = a;
            _b = b;
        }
        B _instanceB;
        public B InstanceA
        {
            get { return _instanceB; }
            set { _instanceB = value; }
        }
        public A(int a,int b, B obj1):this(a,b)
        {
            InstanceA = obj1;
        }
        public override string ToString()
        {
            return string.Format(_a + " " + _b + " ");
        }
    }
    class B:A
    {
        public B()
        {

        }
        public B(A Instance)
        {
            this.Instance = Instance;
        }
        A _instanceA;
        public A Instance
        {
            get
            {
                return _instanceA;
            }
            set
            {
                _instanceA = value;
                _instanceA.InstanceA = this;
            }
        }
        public void MyMethod(ref int a,ref int b)
        {
            a = a + b;
        }
        public override string ToString()
        {
            return _instanceA.ToString();
        }
    }

    class MyClass:A
    {
        public int a;
        public int b;
        public int c;
        public MyClass(int a, int b,int c):base(a,b)
        {
            this.c = c;
            //this.a = 10;
            //this.b = 20;
        }
        public override string ToString()
        {
            return string.Format(a + " " + b + " "+c);
        }
    }
    class te
    {
        public int d;
        public int e;
        public te()
        {

        }
        public te(int f,int g)
        {
            d = f;
            e = g;

        }

    }
    class ce:te
    {
        public int k;
        public int l;
        public ce()
        {

        }
        public ce(int k,int l)
        {
            this.k = k;
            this.l = l;
        }

        //public static implicit operator ce(te v)
        //{
        //    throw new NotImplementedException();
        //}
    }
    class Program
    {
        static void Main(string[] args)
        {
            #region Test    
            A ClassA = new A(10, 20, new B());
            B ClassB = new B(ClassA);
            int a = 10, b = 50;
            ClassB.MyMethod(ref a, ref b);
            Console.WriteLine(a + " " + b);
            ClassA.InstanceA.MyMethod(ref a, ref b);
            Console.WriteLine(a + " " + b);
            B ClassC = new B(new A(15, 10, ClassB));
            ClassC.MyMethod(ref a, ref b);
            Console.WriteLine(a + " " + b);
            MyClass obj = new MyClass(10, 11, 12);
            WriteLine(obj.a + " " + obj.b + " " + obj.c);
            WriteLine(obj._a + " " + obj._b);
            WriteLine("------------");
            #endregion

            A INs = new A(15, 14);
            A[] Cla = new A[] { new B(INs), new MyClass(10, 20, 30) };
            foreach (A item in Cla)
            {
                WriteLine(item);
            }
            WriteLine("------------");
            ce oce = new ce(10, 11);
            te ote = oce;
            WriteLine(ote.d + " " + ote.e);

            ReadLine();
        }

    }

}
