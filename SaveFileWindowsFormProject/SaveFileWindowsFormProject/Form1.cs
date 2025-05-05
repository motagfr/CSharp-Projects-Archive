using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace SaveFileWindowsFormProject
{
    public partial class TextFileManagement : Form
    {
        public TextFileManagement()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // saveFileDialog1.ShowDialog();
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox1.Text = saveFileDialog1.FileName;
            }

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            FileStream oFilestream = new FileStream(textBox1.Text,FileMode.Create);
            byte[] bite = Encoding.Default.GetBytes(textBox2.Text);
            oFilestream.Write(bite, 0, bite.Length);
            oFilestream.Dispose();
            oFilestream.Close();

        }
    }
}
