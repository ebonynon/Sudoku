/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ebony
 *
 * Created on March 09, 2020, 9:54 PM
 */

#include <iostream>
#include <stdlib.h> 
#include <gtk/gtk.h>

/*
 * 
 */

using namespace std;

GtkWidget *g_A1;
GtkWidget *g_A2;
GtkWidget *g_A3;
GtkWidget *g_A4;
GtkWidget *g_A5;
GtkWidget *g_A6;
GtkWidget *g_A7;
GtkWidget *g_A8;
GtkWidget *g_A9;

GtkWidget *g_B1;
GtkWidget *g_B2;
GtkWidget *g_B3;
GtkWidget *g_B4;
GtkWidget *g_B5;
GtkWidget *g_B6;
GtkWidget *g_B7;
GtkWidget *g_B8;
GtkWidget *g_B9;

GtkWidget *g_C1;
GtkWidget *g_C2;
GtkWidget *g_C3;
GtkWidget *g_C4;
GtkWidget *g_C5;
GtkWidget *g_C6;
GtkWidget *g_C7;
GtkWidget *g_C8;
GtkWidget *g_C9;

GtkWidget *g_D1;
GtkWidget *g_D2;
GtkWidget *g_D3;
GtkWidget *g_D4;
GtkWidget *g_D5;
GtkWidget *g_D6;
GtkWidget *g_D7;
GtkWidget *g_D8;
GtkWidget *g_D9;

GtkWidget *g_E1;
GtkWidget *g_E2;
GtkWidget *g_E3;
GtkWidget *g_E4;
GtkWidget *g_E5;
GtkWidget *g_E6;
GtkWidget *g_E7;
GtkWidget *g_E8;
GtkWidget *g_E9;

GtkWidget *g_F1;
GtkWidget *g_F2;
GtkWidget *g_F3;
GtkWidget *g_F4;
GtkWidget *g_F5;
GtkWidget *g_F6;
GtkWidget *g_F7;
GtkWidget *g_F8;
GtkWidget *g_F9;

GtkWidget *g_G1;
GtkWidget *g_G2;
GtkWidget *g_G3;
GtkWidget *g_G4;
GtkWidget *g_G5;
GtkWidget *g_G6;
GtkWidget *g_G7;
GtkWidget *g_G8;
GtkWidget *g_G9;

GtkWidget *g_H1;
GtkWidget *g_H2;
GtkWidget *g_H3;
GtkWidget *g_H4;
GtkWidget *g_H5;
GtkWidget *g_H6;
GtkWidget *g_H7;
GtkWidget *g_H8;
GtkWidget *g_H9;

GtkWidget *g_I1;
GtkWidget *g_I2;
GtkWidget *g_I3;
GtkWidget *g_I4;
GtkWidget *g_I5;
GtkWidget *g_I6;
GtkWidget *g_I7;
GtkWidget *g_I8;
GtkWidget *g_I9;

//main fun
int main(int argc, char** argv) 
{
    GtkBuilder  *abuilder;
    GtkWidget   *cwin; //Window
//  GtkWidget   *cpopup; //form-2
    
    //init gtk lib
    gtk_init(&argc , &argv);
    
    //add glade files 
    abuilder = gtk_builder_new();
    gtk_builder_add_from_file(abuilder, "GtkUI.glade" , NULL);
    
    //get win widget
    cwin = GTK_WIDGET(gtk_builder_get_object(abuilder, "Window"));
// cpopup = GTK_WIDGET(gtk_builder_get_object(abuilder, "popup"));
    gtk_builder_connect_signals(abuilder, NULL);
    
    //get pointers to buttons 
    g_A1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A1"));
    g_A2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A2"));
    g_A3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A3"));
    g_A4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A4"));
    g_A5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A5"));
    g_A6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A6"));
    g_A7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A7"));
    g_A8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A8"));
    g_A9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "A8"));
 
    g_B1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B1"));
    g_B2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B2"));
    g_B3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B3"));
    g_B4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B4"));
    g_B5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B5"));
    g_B6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B6"));
    g_B7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B7"));
    g_B8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B8"));
    g_B9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "B8"));

    g_C1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C1"));
    g_C2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C2"));
    g_C3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C3"));
    g_C4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C4"));
    g_C5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C5"));
    g_C6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C6"));
    g_C7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C7"));
    g_C8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C8"));
    g_C9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "C8"));

    g_D1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D1"));
    g_D2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D2"));
    g_D3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D3"));
    g_D4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D4"));
    g_D5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D5"));
    g_D6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D6"));
    g_D7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D7"));
    g_D8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D8"));
    g_D9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "D8"));
 
    g_E1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E1"));
    g_E2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E2"));
    g_E3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E3"));
    g_E4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E4"));
    g_E5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E5"));
    g_E6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E6"));
    g_E7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E7"));
    g_E8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E8"));
    g_E9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "E8"));

    g_F1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F1"));
    g_F2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F2"));
    g_F3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F3"));
    g_F4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F4"));
    g_F5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F5"));
    g_F6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F6"));
    g_F7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F7"));
    g_F8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F8"));
    g_F9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "F8"));

    g_G1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G1"));
    g_G2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G2"));
    g_G3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G3"));
    g_G4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G4"));
    g_G5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G5"));
    g_G6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G6"));
    g_G7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G7"));
    g_G8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G8"));
    g_G9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "G8"));
 
    g_H1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H1"));
    g_H2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H2"));
    g_H3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H3"));
    g_H4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H4"));
    g_H5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H5"));
    g_H6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H6"));
    g_H7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H7"));
    g_H8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H8"));
    g_H9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "H8"));

    g_I1 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I1"));
    g_I2 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I2"));
    g_I3 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I3"));
    g_I4 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I4"));
    g_I5 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I5"));
    g_I6 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I6"));
    g_I7 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I7"));
    g_I8 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I8"));
    g_I9 = GTK_WIDGET(gtk_builder_get_object(abuilder, "I8"));

    //gtkobj connect with fun
/*  g_signal_connect(g_but_sum, "clicked", G_CALLBACK(sumbut), NULL);
    g_signal_connect(g_but_close, "clicked", G_CALLBACK(closebut), NULL);
*/
    g_signal_connect(cwin, "destroy", G_CALLBACK(exit), NULL);
  
    g_object_unref(abuilder);
 
    //gtk_widget_show(cpopup);
    gtk_widget_show(cwin);
    
    gtk_main();
 
    return 0;
    
}
  