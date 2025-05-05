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
    public partial class Form2 : Form
    {
        public delegate void ChooseText(string s);

        public event ChooseText oChooseText1;
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            oChooseText1(this.listBox1.SelectedItem.ToString());
        }
    }
}
