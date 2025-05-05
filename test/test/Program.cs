using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace test
{
    public class @int
    {
       public int c;
        public @int()
        {

        }
        public @int(int a)
        {
            c = a;
        }
    }
    public class MyClass
    {
   
        
        public static bool MyMethod()
        {
            try
            {
                
                return true;
            }
            catch (Exception)
            {

                return false;
            }
            

        }

    }
    class Program
    {
        static void Main(string[] args)
        {

            //A[] obj = new A[5];
            //for (int i = 0; i < obj.Length; i++)
            //{
            //    obj[i] = new A();
            //}
            //A a1 = new A(1);
            //A a2 = new A(2);
            //A a3 = new A(3);
            //obj[0] = a1;
            //obj[1].c = 1;
            //obj[2].c = 3;
            //Write(obj[2].c+" "+obj[0].c);

            /* A[] obj = new A[1];
             A[] temp = new A[obj.Length+1];
             temp[0] = new A();
             temp[1] = new A();
             A obj1 = new A(5);
             A obj2 = new A(6);
             temp[0] = obj1;
             temp[1] = obj2;
             obj = temp;
             foreach (var item in obj)
             {
                 Write(item.c + " ");

             }
             Write("\n {0}", obj.Length); */

            int[] obj = new int[1];
            int[] temp = new int[obj.Length + 1];
            int obj1 = 15;
            int obj2 = 16;
            temp[0] = obj1;
            temp[1] = obj2;
            obj = temp;
            foreach (var item in obj)
            {
                Write(item + " ");

            }
            Write("\n {0}", obj.Length);


            ReadKey();

        }
    }
}
