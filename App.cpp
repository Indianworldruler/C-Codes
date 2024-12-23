#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Modern Qt App");

    QVBoxLayout *layout = new QVBoxLayout;

    QLabel *label = new QLabel("Welcome to My App!");
    QPushButton *button = new QPushButton("Click Me");

    layout->addWidget(label);
    layout->addWidget(button);

    QObject::connect(button, &QPushButton::clicked, [&]() {
        label->setText("Button Clicked!");
    });

    window.setLayout(layout);
    window.resize(300, 200);
    window.show();

    return app.exec();
}
