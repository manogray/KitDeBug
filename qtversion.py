#!/usr/bin/python3
import sys
import random
from PySide2.QtWidgets import (QApplication, QLabel, QPushButton,
                               QVBoxLayout, QWidget, QMainWindow)
from PySide2.QtCore import Slot, Qt
from PySide2.QtGui import QIcon

class Window(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)

        self.setGeometry(50,50,1366,730)
        self.setWindowTitle("Kit DeBug")
        self.setWindowIcon(QIcon('images/bug.png'))
        self.home()

    def home(self):
        widget = MyWidget()
        widget.resize(1366, 730)
        widget.show()


class MyWidget(QWidget):
    def __init__(self):
        QWidget.__init__(self)

        self.hello = ["Oscilóscópio","Multímetro","Gerador de Sinal"]

        self.button = QPushButton("Trocar")
        self.button2 = QPushButton("BugHackers")
        self.text = QLabel("Kit de Instrumentação")
        self.text.setAlignment(Qt.AlignCenter)

        self.layout = QVBoxLayout()
        self.layout.addWidget(self.text)
        self.layout.setMenuBar(self.button)

        self.setLayout(self.layout)

        # Connecting the signal
        self.button.clicked.connect(self.magic)
        self.button2.clicked.connect(self.bugs)

    @Slot()
    def magic(self):
        self.text.setText(random.choice(self.hello))

    def bugs(self):
        self.text.setText("BUGHACKERS!")

if __name__ == "__main__":
    app = QApplication(sys.argv)

    mainWindow = Window()
    mainWindow.show()

    sys.exit(app.exec_())
