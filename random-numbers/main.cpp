/*
 * Gráficas con números aleatorios
 * Autor: Mario Alberto Fernández Vicencio
 *
 * El programa genera 20 valores aleatorios (de tipo float o double)
 * los cuales serán asignados al array X.
 *
 * Volverá a generar otros 20 valores aleatorios (de tipo float o double)
 * que serán asignados al array Y.
 *
 * Se generará una gráfica de los valores generados, con etiquetas en cada eje.
 *
 * El programa usa la librería sciplot y gnuplot para realizar la gráfica
 *
 * ===== Configuración de sciplot (cmake) =====
 * https://sciplot.github.io/installation/
 *
 * ===== Instalación de gnuplot en Ubuntu =====
 * sudo apt install gnuplot
 */

#include <array>
#include <random>
#include "sciplot/sciplot.hpp"

#define MAX 20
#define WIDTH 500
#define HEIGHT 500

int main(int argc, char** argv){

    std::random_device randomDevice;
    std::default_random_engine engine(randomDevice());
    std::uniform_real_distribution distribution(1.0, 100.0);

    std::array<double, MAX> x{};
    std::array<double, MAX> y{};

    for(int i = 0; i < MAX; ++i){
        x[i] = distribution(engine);
        y[i] = distribution(engine);
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