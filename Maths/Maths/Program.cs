using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace Maths
{
    
    class Program
    {
        public class NewFibbonachi
        {
            int f0 = 0, f1 = 1,size;
            public NewFibbonachi(int b,int c)
            {
                f0 = b;
                f1 = c;
            }
            public void Produce()
            {
                long f0 = this.f0;
                long f1 = this.f1;
                long f2,sum = 0;
                decimal diff;
                Write("Enter how many: ");
                this.size = Convert.ToInt32(ReadLine());
                var list = new List<long>();
                var difflist = new List<decimal>();
                for (int i = 0; i < this.size; i++)
                {
                    
                    f2 = f1 + f0;
                    if (i == 0)
                    {
                        Write(Convert.ToString(f0) + " " + Convert.ToString(f1) + " ");
                        list.Add(f0);
                        list.Add(f1);
                    }
                    list.Add(f2);
                    Write(Convert.ToString(f2) + " ");
                    if (i >=2)
                    {
                        diff = (decimal)f2*(f1 - f0)/(f1 * f0);
                        difflist.Add(diff);
                    }
                    f0 = f1;
                    f1 = f2;
                }
                long[] Fibbonachi = list.ToArray();
                decimal[] diffarray = difflist.ToArray();
                foreach (var item in Fibbonachi)
                {
                    sum += item;
                }
                Write("\nThe sum is: {0}", sum);
                Write("\nThe diff is: ");
                for (int i = 0; i < diffarray.Length; i++)
                {
                    Write("{0} ", diffarray[i]);
                }
            }
         
        }
        
        static void Main(string[] args)
        {
            int a = 0;
            int b = 1;
            NewFibbonachi A = new NewFibbonachi(a,b);
            A.Produce();
            ReadLine();
        }
    }
}
