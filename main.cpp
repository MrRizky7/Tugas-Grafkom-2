#include<windows.h>
#include<gl/glut.h>
#include<stdlib.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
}

void tampil(void)
{
    if (is_depth) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
    else {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    glLineWidth(1.0);
        glColor3f(1.0, 1.0, 1.0);


    // Segitiga 1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.0, 40.0, 20);
    glVertex3f(-20.0, 20.0, 20);
    glVertex3f(20.0, 20.0, 20);
    glEnd();

    // atap kiri
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(20.0, 20.0, 20);
    glVertex3f(20.0, 20.0, -20);
    glVertex3f(0.0, 40.0, -20);
    glVertex3f(0.0, 40.0, 20);
    glEnd();

    // atap kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-20.0, 20.0, 20);
    glVertex3f(-20.0, 20.0, -20);
    glVertex3f(0.0, 40.0, -20);
    glVertex3f(0.0, 40.0, 20);
    glEnd();

    // Segitiga 2
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(0.0, 40.0, -20);
    glVertex3f(-20.0, 20.0, -20);
    glVertex3f(20.0, 20.0, -20);
    glEnd();

      // depan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-20.0, -20.0, 20);
    glVertex3f(-20.0, 20.0, 20);
    glVertex3f(20.0, 20.0, 20);
    glVertex3f(20.0, -20.0, 20);
    glEnd();

    // pintu
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-15.0, 10.0, 20.1);
    glVertex3f(-15.0, -15.0, 20.1);
    glVertex3f(-5.0, -15.0, 20.1);
    glVertex3f(-5.0, 10.0, 20.1);
    glEnd();

    // jendela
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-15.0, 10.0, 20.1);
    glVertex3f(-15.0, -15.0, 20.1);
    glVertex3f(-5.0, -15.0, 20.1);
    glVertex3f(-5.0, 10.0, 20.1);
    glEnd();


    // belakang
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-20.0, -20.0, -20);
    glVertex3f(-20.0, 20.0, -20);
    glVertex3f(20.0, 20.0, -20);
    glVertex3f(20.0, -20.0, -20);
    glEnd();

    // atas
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-20.0, 20.0, 30);
    glVertex3f(-20.0, 20.0, -30);
    glVertex3f(20.0, 20.0, -30);
    glVertex3f(20.0, 20.0, 30);
    glEnd();

    // bawah
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-20.0, -20.0, 30);
    glVertex3f(-20.0, -20.0, -30);
    glVertex3f(20.0, -20.0, -30);
    glVertex3f(20.0, -20.0, 30);
    glEnd();

    // kiri
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-20.0, 20.0, 30);
    glVertex3f(-20.0, -20.0, 30);
    glVertex3f(-20.0, -20.0, -30);
    glVertex3f(-20.0, 20.0, -30);
    glEnd();

    // kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(20.0, 20.0, 30);
    glVertex3f(20.0, -20.0, 30);
    glVertex3f(20.0, -20.0, -30);
    glVertex3f(20.0, 20.0, -30);
    glEnd();

    glutSwapBuffers();
    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);//maju
        break;
    case 'd':
    case 'D':
        glTranslatef(-3.0, 0.0, 0.0);//nambah kiri
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);//mundur
        break;
    case 'a':
    case 'A':
        glTranslatef(3.0, 0.0, 0.0);//nambah kanan
        break;
    case 'q':
    case 'Q':
        glTranslatef(0.0, 3.0, 0.0);//atas
        break;
    case 'e':
    case 'E':
        glTranslatef(0.0, -3.0, 0.0);//bawah
        break;
    case 'k':
        glRotatef(2.0, 1.0, 0.0, 0.0);//putar sumbu x
        break;
    case 'i':
        glRotatef(-2.0, 1.0, 0.0, 0.0);//putar sumbu x
        break;
    case 'l':
        glRotatef(2.0, 0.0, 1.0, 0.0);//putar sumbu y
        break;
    case 'j':
        glRotatef(-2.0, 0.0, 1.0, 0.0);//putar sumbu y
        break;
    case 'u':
        glRotatef(2.0, 0.0, 0.0, 1.0);//putar sumbu z
        break;
    case 'o':
        glRotatef(-2.0, 0.0, 0.0, 1.0);//putar sumbu z
        break;
    }
    tampil();
}

void ukuran(int lebar, int tinggi) {
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);//default setting
    glTranslatef(0.0, -5.0, -150.0);//untuk ngatur prespektif
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("3D");
    init();

    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);

    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
