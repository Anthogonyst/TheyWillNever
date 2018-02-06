using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class SomethingOrAnother : Form
    {
        bool button1;
        bool button2;
        bool button3;
        int velocity = 6;
        int direction = 0;
        public SomethingOrAnother()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            
        }

        private void SomethingOrAnother_Load(object sender, EventArgs e)
        {

        }

        private void pressed(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.A)
               button1 = true;
        }

        private void released(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.A)
                button2 = false;
        }

        private void clicked(object sender, KeyPressEventArgs e)
        {

        }

        private void clock_Tick(object sender, EventArgs e)
        {
            thing.Top += ((int)Math.Cos(velocity+direction));
            thing.Left += ((int)Math.Sin(velocity+direction));
            direction += 100;

            if (button1)
                thing.Top++;

            foreach (Control x in this.Controls)
            {
                if (x is PictureBox && x.Tag == "thicc")
                {
                    if (thing.Bounds.IntersectsWith(x.Bounds))
                    {
                        velocity = 0;
                        thing.Top = x.Top - thing.Height;
                    }
                }
            }

        }

        private void thung_Click(object sender, EventArgs e)
        {

        }
    }
}
