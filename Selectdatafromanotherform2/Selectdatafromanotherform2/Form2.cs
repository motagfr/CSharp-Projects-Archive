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
    public delegate void OSelect(string selectedText);
    public partial class Form2 : Form
    {
        
        public event OSelect Select;
        public Form2()
        {
            InitializeComponent();
        }

       public void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            Select(this.listBox1.SelectedItem.ToString());
            this.Close();
        }
    }
}
