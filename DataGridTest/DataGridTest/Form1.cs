using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using People;


namespace DataGridTest
{
    public partial class Form1 : Form
    {
        ClassMathematics A1=new ClassMathematics();

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            A1.Add(new Individual(121, "Mohsen", "Taghavianfar", 20));
            A1.Add(new Individual(119, "Jafar", "Asghari", 11));
            A1.Add(new Individual(134, "Mohammad", "Taberan", 18));
            A1.Add(new Individual(103, "Karim", "Javidfar", 9));
            A1.Add(new Individual(121, "Siroos","Asgharabadi",13));
            dataGridView1.DataSource = A1;
            if (A1.Contains(new Individual(121,"Mohsen","Taghavianfar",20)))
            {
                MessageBox.Show("That person is in the list.");
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
