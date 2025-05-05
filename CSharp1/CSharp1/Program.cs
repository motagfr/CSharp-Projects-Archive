using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp1
{
    public class GradeBook
    {
        public void DisplayMessage(string coursename)
        {
            Console.WriteLine("Welcome to the gradebook for {0}", coursename);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Please enter course name:");
            string nameofcourse = Console.ReadLine();
            Console.WriteLine();
            GradeBook mygradebook= new GradeBook();
            mygradebook.DisplayMessage(nameofcourse);
            Console.ReadKey();
        }
    }
}
