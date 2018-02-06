namespace WindowsFormsApplication1
{
    partial class SomethingOrAnother
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.thing = new System.Windows.Forms.PictureBox();
            this.thung = new System.Windows.Forms.PictureBox();
            this.clock = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.thing)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.thung)).BeginInit();
            this.SuspendLayout();
            // 
            // thing
            // 
            this.thing.BackColor = System.Drawing.Color.Gainsboro;
            this.thing.Location = new System.Drawing.Point(141, 37);
            this.thing.Name = "thing";
            this.thing.Size = new System.Drawing.Size(100, 50);
            this.thing.TabIndex = 0;
            this.thing.TabStop = false;
            this.thing.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // thung
            // 
            this.thung.BackColor = System.Drawing.Color.DimGray;
            this.thung.Location = new System.Drawing.Point(141, 131);
            this.thung.Name = "thung";
            this.thung.Size = new System.Drawing.Size(100, 50);
            this.thung.TabIndex = 1;
            this.thung.TabStop = false;
            this.thung.Tag = "thicc";
            this.thung.Click += new System.EventHandler(this.thung_Click);
            // 
            // clock
            // 
            this.clock.Enabled = true;
            this.clock.Interval = 20;
            this.clock.Tick += new System.EventHandler(this.clock_Tick);
            // 
            // SomethingOrAnother
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkRed;
            this.ClientSize = new System.Drawing.Size(384, 261);
            this.Controls.Add(this.thung);
            this.Controls.Add(this.thing);
            this.Name = "SomethingOrAnother";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.SomethingOrAnother_Load);
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.pressed);
            this.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.clicked);
            this.KeyUp += new System.Windows.Forms.KeyEventHandler(this.released);
            ((System.ComponentModel.ISupportInitialize)(this.thing)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.thung)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox thing;
        private System.Windows.Forms.PictureBox thung;
        private System.Windows.Forms.Timer clock;
    }
}

