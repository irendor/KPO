#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form;
    Application::Run(% form);
}

System::Void Project1::MyForm::нарисоватьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (radioButton_cos->Checked == false && radioButton_sin->Checked == false && radioButton_main->Checked == false) {
        MessageBox::Show("Выберите график!", "Внимание!");
        return;
    }

    if (textBox_a->Text == "" || textBox_b->Text == "" || textBox_h->Text == "") {
        MessageBox::Show("Параметры по умолчанию!", "Внимание!");
        DefaultParams();
    }
    else {
        a = Convert::ToDouble(textBox_a->Text);
        b = Convert::ToDouble(textBox_b->Text);
        h = Convert::ToDouble(textBox_h->Text);
    }
    if (radioButton_main->Checked == true) {
        if (textBox_x3->Text == "" || textBox_x2->Text == "" || textBox_x1->Text == "" || textBox_koef->Text == "") {
            MessageBox::Show("Введите значения коэффициентов вашей функции!", "Внимание!");
            return;
        }
        else {
            x1 = Convert::ToDouble(textBox_x1->Text);
            x2 = Convert::ToDouble(textBox_x2->Text);
            x3 = Convert::ToDouble(textBox_x3->Text);
            koef = Convert::ToDouble(textBox_koef->Text);
        }
        x = a;
        this->chart->Series[2]->Points->Clear();
        while (x <= b) {
            y = x3 * Math::Pow(x, 3) + x2 * Math::Pow(x, 2) + x1 * x + koef;
            this->chart->Series[2]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (radioButton_cos->Checked == true) {
        x = a;
        this->chart->Series[0]->Points->Clear();
        while (x <= b) {
            y = Math::Cos(x);
            this->chart->Series[0]->Points->AddXY(x, y);
            x += h;
        }
    }
    if (radioButton_sin->Checked == true) {
        x = a;
        this->chart->Series[1]->Points->Clear();
        while (x <= b) {
            y = Math::Sin(x);
            this->chart->Series[1]->Points->AddXY(x, y);
            x += h;
        }
    }
}

System::Void Project1::MyForm::очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox_cos->Checked == false && checkBox_sin->Checked == false && checkBox_main->Checked == false) {
        MessageBox::Show("Выберите хотя бы 1 график!", "Внимание!");
        return;
    }
    if (checkBox_cos->Checked == true) {
        
        this->chart->Series[0]->Points->Clear();
        
    }
    if (checkBox_sin->Checked == true) {
       
        this->chart->Series[1]->Points->Clear();
        
    }
    if (checkBox_main->Checked == true) {

        this->chart->Series[2]->Points->Clear();

    }

}

System::Void Project1::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Выйти?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
}

void Project1::MyForm::DefaultParams()
{
    a = -10;
    b = 10;
    h = 0.1;
    
}

System::Void Project1::MyForm::измеритьДлинуКривойToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_first->Text == "" || textBox_second->Text == "" || textBox_accuracy->Text == "") {
        MessageBox::Show("Введите значения отрезка для измерения длины кривой!", "Внимание!");
        return;
    }
    else {
        first = Convert::ToDouble(textBox_first->Text);
        second = Convert::ToDouble(textBox_second->Text);
        accuracy = Convert::ToDouble(textBox_accuracy->Text);
    }
    length = 0;
    x = first;
    if (radioButton_main->Checked == true) {
        while (x < second) {
            y1 = x3 * Math::Pow(x, 3) + x2 * Math::Pow(x, 2) + x1 * x + koef;
            y2 = x3 * Math::Pow(x + accuracy, 3) + x2 * Math::Pow(x + accuracy, 2) + x1 * (x + accuracy) + koef;
            length += Math::Sqrt(Math::Pow(accuracy, 2) + Math::Pow(y2 - y1, 2));
            x += accuracy;
            }
        //textBox_length->Text = Convert::ToString(length);
    }
    else {
        if (radioButton_sin->Checked == true) {
            while (x < second) {
                y1 = Math::Sin(x);
                y2 = Math::Sin(x + accuracy);
                length += Math::Sqrt(Math::Pow(accuracy, 2) + Math::Pow(y2 - y1, 2));
                x += accuracy;
            }
            //textBox_length->Text = Convert::ToString(length);
        }
        else {
            if (radioButton_cos->Checked == true) {
                while (x < second) {
                    y1 = Math::Cos(x);
                    y2 = Math::Cos(x + accuracy);
                    length += Math::Sqrt(Math::Pow(accuracy, 2) + Math::Pow(y2 - y1, 2));
                    x += accuracy;
                }
            }
            
        }
    }
    length = Math::Round(length, 4);
    textBox_length->Text = Convert::ToString(length);
}
