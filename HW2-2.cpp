/***********************************************************************/
/*                           HW#2-2 : GL Modeling  3D Primitives       */
/*  �ۼ��� : 2109038081_Ȳ�ؼ�              ��¥ : 2022�� 9�� 27��     */
/*                                                                     */
/* ���� ���� : 9�� 27�� �ǽ����뿡 �ִ� 3D Primitive ���� ������       */
/* ��� : 3D Primitive ����                                            */
/*                                                                     */
/***********************************************************************/

//1. spherer
#include <gl/glut.h>
#include <gl/glu.h>
#include <gl/gl.h>

int MyListID;
GLUquadricObj* qobj = gluNewQuadric();

void Reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MyInit(void) {
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 }; //�ֺ���
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; //�ݻ籤
    GLfloat mat_shininess[] = { 50.0 }; //����
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 }; //���� ��ġ
    GLfloat model_ambient[] = { 0.2, 0.8, 0.2, 1.0 };
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void MyCreateList()
{
    MyListID = glGenLists(1);
    glNewList(MyListID, GL_COMPILE);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(66.5, 1.0, 1.0, 0.0);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    gluSphere( qobj,1.5, 50, 50);
    glutSwapBuffers();

    glEndList();
}

void MyDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(50, 50, 500, 500);
    glCallList(MyListID);
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200);
    glutCreateWindow("Sphere");
    MyInit();
    glutDisplayFunc(MyDisplay);
    glutReshapeFunc(Reshape);
    MyCreateList();
    glutMainLoop();
    return 0;
}


//2. Cylinder
#include <gl/glut.h>
#include <gl/glu.h>
#include <gl/gl.h>

int MyListID;
GLUquadricObj* qobj = gluNewQuadric();


void Reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MyInit(void) {
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 };
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 };
    GLfloat model_ambient[] = { 0.6, 0.4, 0.2, 1.0 };
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}


void MyCreateList()
{
    MyListID = glGenLists(1);

    glNewList(MyListID, GL_COMPILE);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(40.0, 1.0, 1.0, 0.0);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    gluCylinder(qobj, 0.5, 0.5, 1, 50, 50);
    glutSwapBuffers();

    glEndList();
}

void MyDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(50, 50, 500, 500);
    glCallList(MyListID);
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200);
    glutCreateWindow("Brown Cylinder");
    MyInit();
    glutDisplayFunc(MyDisplay);
    glutReshapeFunc(Reshape);
    MyCreateList();
    glutMainLoop();
    return 0;
}


//3.Disk
#include <gl/glut.h>
#include <gl/glu.h>
#include <gl/gl.h>

int MyListID; // Display List�� ����մϴ�.
GLUquadricObj* qobj = gluNewQuadric(); // ���ο� Quadric �����մϴ�.


void Reshape(int w, int h) { //w�� h�� ���� ���浵�� �������� ���� �����Դϴ�.
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

/*���� ������ ���õ� �������� ���ݴϴ�.*/
void MyInit(void) {
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 }; //�ֺ���
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; //�ݻ籤
    GLfloat mat_shininess[] = { 50.0 }; //����
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 }; //���� ��ġ
    GLfloat model_ambient[] = { 0.0, 0.0, 1.0, 1.0 };
    glClearColor(1.0, 1.0, 1.0, 0.0); // ������ �Ͼ������ �����մϴ�.
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

/*Display List�� �����ϴ� �Լ��Դϴ�.*/
void MyCreateList()
{
    MyListID = glGenLists(1);//���ο� ����Ʈ �����մϴ�.

    glNewList(MyListID, GL_COMPILE);//compile�� �Ǵ� ������ �����մϴ�.

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(45, 1.0, 1.0, 0.0); //������ �������� 66.5����ŭ x��, y������ ȸ���մϴ�.
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    //glutWireSphere(1.5, 50, 50);
    gluDisk(qobj, 0.2, 1.6, 50, 50);

    glutSwapBuffers();

    glEndList();
}

void MyDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);//���� �ʱ�ȭ�մϴ�.
    glViewport(50, 50, 500, 500); // 600 * 600 ȭ���� �߾ӿ� �������� view port�� �����մϴ�.
    glCallList(MyListID);//Dipslay list�� �ҷ��ɴϴ�.
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200); //����Ϳ��� 300, 200 ��ġ�� â�� �ߵ��� �����մϴ�.
    glutCreateWindow("Disk with rotation");
    MyInit(); //������ ���� ���õ� ���� �ʱ�ȭ�մϴ�.
    glutDisplayFunc(MyDisplay); // ȭ�鿡 ����� ������ �ҷ��ɴϴ�.
    glutReshapeFunc(Reshape); // ȭ���� ������ ����� �� �� �Լ��� �ҷ��ͼ� sphere�� ũ�⸦ ���� �������ݴϴ�.
    MyCreateList();
    glutMainLoop();
    return 0;
}

//4. Partial Disk
#include <gl/glut.h>
#include <gl/glu.h>
#include <gl/gl.h>

int MyListID; 
GLUquadricObj* qobj = gluNewQuadric(); 


void Reshape(int w, int h) { 
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void MyInit(void) {
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 }; 
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; 
    GLfloat mat_shininess[] = { 50.0 }; 
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 };
    GLfloat model_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    glClearColor(1.0, 1.0, 0.0, 0.0);
}


void MyCreateList()
{
    MyListID = glGenLists(1);

    glNewList(MyListID, GL_COMPILE);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(0, 1.0, 1.0, 0.0);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    gluPartialDisk(qobj, 0.2, 1.6, 50, 50, 0, 60);
    gluPartialDisk(qobj, 0.2, 1.6, 50, 50, 120, 60); 
    gluPartialDisk(qobj, 0.2, 1.6, 50, 50, 240, 60); 

    glutSwapBuffers();

    glEndList();
}

void MyDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(50, 50, 500, 500); 
    glCallList(MyListID);
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200); //����Ϳ��� 300, 200 ��ġ�� â�� �ߵ��� �����մϴ�.
    glutCreateWindow("Partial Disk");
    MyInit(); //������ ���� ���õ� ���� �ʱ�ȭ�մϴ�.
    glutDisplayFunc(MyDisplay); // ȭ�鿡 ����� ������ �ҷ��ɴϴ�.
    glutReshapeFunc(Reshape); // ȭ���� ������ ����� �� �� �Լ��� �ҷ��ͼ� sphere�� ũ�⸦ ���� �������ݴϴ�.
    MyCreateList();
    glutMainLoop();
    return 0;
}