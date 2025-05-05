using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace What_is_INterface
{
    class Class1:Interface1,Interface2,IEquatable<Class2>
    {
        public int a;
        public Class1(int a)
        {
            this.a = a;
        }

        public bool Equals(Class2 other)
        {
            if (this.a == other.b)
                return true;
            else
                return false;   
        }
        public static bool operator ==(Class1 c,Class2 d)
        {
            return c.Equals(d);
        }
        public static bool operator !=(Class1 c, Class2 d)
        {
            return c.Equals(d);
        }

        public void method()
        {
            Console.WriteLine(a);
        }

        public void method2()
        {
            Console.WriteLine(a*a);
        }
    }
}
