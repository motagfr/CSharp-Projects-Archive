using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace People
{
    public class Individual
    {
        public Individual()
        {
                
        }

        public Individual(int id,string firstName,string lastName,int grade)
        {
            this.FirstName = firstName;
            LastName = lastName;
            Id = id;
            Grade = grade;
        }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public int Id { get; set; }
        public int Grade { get; set; }
        public override string ToString()
        {
            var format = $"First Name: {FirstName}, Family Name: {LastName}," + $" ID: {Id}, Grade: {Grade}\n";
            return format;
        }
    }
}
