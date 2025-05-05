using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;


namespace drawing_a_circle
{
    class Program
    {
        static void Main(string[] args)
        {
            Graphics circle;
            Pen mypen = new Pen(Color.BlueViolet);
            circle.DrawEllipse(mypen, 50, 50, 50, 150);
            Console.ReadKey();
        }
    }
}
