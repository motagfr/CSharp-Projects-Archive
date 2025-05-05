using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace What_is_INterface
{
    class Class2:Interface1,Interface2
    {
        public int b;
        public Class2(int b)
        {
            this.b = b;
        }

        public void method()
        {
            Console.Write(b);
        }

        public void method2()
        {
            Console.WriteLine(b*b);
        }
    }
}
