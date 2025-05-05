using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Selectdatafromanotherform2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            Form2 oForm2 = new Form2();
            oForm2.Select += OForm2_Select;
            oForm2.ShowDialog();
        }
        
        private void OForm2_Select(string selectedText)
        {
            this.textBox1.Text = selectedText;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
