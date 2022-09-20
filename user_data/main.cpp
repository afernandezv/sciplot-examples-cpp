/*
 * Gráficas con datos preestablecidos
 * Autor: Mario Alberto Fernández Vicencio
 *
 * El programa obtendra desde un archivo de texto una pareja de 20 valores (de tipo float o double)
 * los cuales serán asignados al array X y al array Y.
 *
 * Se generará una gráfica de los valores del arhivo de texto, con etiquetas en cada eje.
 *
 * El programa usa la librería sciplot y gnuplot para realizar la gráfica
 *
 * ===== Configuración de sciplot (cmake) =====
 * https://sciplot.github.io/installation/
 *
 * ===== Instalación de gnuplot en Ubuntu =====
 * sudo apt install gnuplot
 */

#include <iostream>
#include <random>
#include <string>
#include "sciplot/sciplot.hpp"

#define MAX 20
#define WIDTH 500
#define HEIGHT 500

int main(int argc, char** argv){
    std::vector<double> x;
    std::vector<double> y;

    std::ifstream fr;
    fr.open("data.txt");
    if(!fr.is_open()){
        std::cout << "Error a abrir el archivo" << std::endl;
        exit(-1);
    }

    std::string line;
    while(std::getline(fr, line)){
        std::istringstream ss(line);
        double x_value, y_value;
        ss >> x_value >> y_value;
        x.push_back(x_value);
        y.push_back(y_value);
    }

    sciplot::Plot2D plot;

    plot.xlabel("X");
    plot.ylabel("Y").rotateBy(0);
    plot.legend().atOutsideTop().displayHorizontal().displayExpandWidthBy(2);
    plot.drawCurve(x, y).label("X vs Y").lineColor("blue");

    sciplot::Figure fig = {{plot}};
    sciplot::Canvas canvas = {{fig}};

    canvas.size(WIDTH ,HEIGHT);
    canvas.show();

    return 0;
}