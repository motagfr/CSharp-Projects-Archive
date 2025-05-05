using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using System.IO;

namespace What_is_INterface
{
    class Program
    {
        static void Main(string[] args)
        {
            #region First
            //Class1 A = new Class1(15);
            //Class2 B = new Class2(20);
            //A.method();
            //B.method();
            //A.method2();
            //B.method2();
            //Class1[] C = new Class1[0];
            //int value=-1;
            //if (C==null)
            //    value = 0;
            //Console.WriteLine(value+" "+C.Length);
            #endregion

            //Class1 A = new Class1(10);
            //Class2 B = new Class2(10);
            //Class2 C = new Class2(5);
            //Console.WriteLine(A.Equals(B));
            //Console.WriteLine(A == B);
            //Console.WriteLine(A == C);
            StreamWriter oSW = new StreamWriter(@"F:\Visual7.txt",true,System.Text.Encoding.UTF8);
            try
            {
                oSW.Write("Hello Everybody!\n");
                oSW.Write("This is appended\n");

            }
            catch (Exception ex)
            {

                Console.WriteLine(ex.Message);
            }
            finally
            {
                oSW.Close();
                oSW.Dispose();

            }
            StreamReader oSR = new StreamReader("F:\\Visual7.txt");
            try
            {
                // string temp = oSR.ReadToEnd().ToString();
                // Console.WriteLine("\n-----------------"+temp);
                Console.WriteLine("\n-----------------\n" + oSR.ReadToEnd());
            }
            catch (Exception ex)
            {

                Console.WriteLine(ex.Message);
            }
            finally
            {
                oSR.Close();
                oSR.Dispose();
            }

            Console.ReadKey();
        }
    }
}
