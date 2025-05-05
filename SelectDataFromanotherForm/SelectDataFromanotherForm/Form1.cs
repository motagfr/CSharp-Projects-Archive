using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SelectDataFromanotherForm
{
    public partial class Form1 : Form
    {
        
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form2 oForm2=new Form2();
            oForm2.oChooseText1 += OForm2_oChooseText1;
            oForm2.ShowDialog();
        }

        private void OForm2_oChooseText1(string s)
        {
            this.textBox1.Text = s;
        }

        public event Form2.ChooseText oChooseText;
    }
}
