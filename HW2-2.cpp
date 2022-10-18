/***********************************************************************/
/*                           HW#2-2 : GL Modeling  3D Primitives       */
/*  작성자 : 2109038081_황준수              날짜 : 2022년 9월 27일     */
/*                                                                     */
/* 문제 정의 : 9월 27일 실습내용에 있는 3D Primitive 들을 구현함       */
/* 기능 : 3D Primitive 구현                                            */
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
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 }; //주변광
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; //반사광
    GLfloat mat_shininess[] = { 50.0 }; //선명도
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 }; //조명 위치
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

int MyListID; // Display List를 사용합니다.
GLUquadricObj* qobj = gluNewQuadric(); // 새로운 Quadric 생성합니다.


void Reshape(int w, int h) { //w와 h는 각각 변경도니 윈도우의 폭과 높이입니다.
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

/*빛과 재질과 관련된 설정들을 해줍니다.*/
void MyInit(void) {
    GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 }; //주변광
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 }; //반사광
    GLfloat mat_shininess[] = { 50.0 }; //선명도
    GLfloat light_position[] = { 0.3, 0.3, 0.5, 0.0 }; //조명 위치
    GLfloat model_ambient[] = { 0.0, 0.0, 1.0, 1.0 };
    glClearColor(1.0, 1.0, 1.0, 0.0); // 배경색을 하얀색으로 설정합니다.
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

/*Display List를 생성하는 함수입니다.*/
void MyCreateList()
{
    MyListID = glGenLists(1);//새로운 리스트 생성합니다.

    glNewList(MyListID, GL_COMPILE);//compile만 되는 것으로 설정합니다.

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(45, 1.0, 1.0, 0.0); //지구의 자전축인 66.5도만큼 x축, y축으로 회전합니다.
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    //glutWireSphere(1.5, 50, 50);
    gluDisk(qobj, 0.2, 1.6, 50, 50);

    glutSwapBuffers();

    glEndList();
}

void MyDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);//색을 초기화합니다.
    glViewport(50, 50, 500, 500); // 600 * 600 화면의 중앙에 나오도록 view port를 설정합니다.
    glCallList(MyListID);//Dipslay list를 불러옵니다.
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200); //모니터에서 300, 200 위치에 창이 뜨도록 설정합니다.
    glutCreateWindow("Disk with rotation");
    MyInit(); //재질과 빛과 관련된 값을 초기화합니다.
    glutDisplayFunc(MyDisplay); // 화면에 띄워줄 값들을 불러옵니다.
    glutReshapeFunc(Reshape); // 화면의 값들이 변경될 때 이 함수를 불러와서 sphere의 크기를 같이 조정해줍니다.
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
    glutInitWindowPosition(300, 200); //모니터에서 300, 200 위치에 창이 뜨도록 설정합니다.
    glutCreateWindow("Partial Disk");
    MyInit(); //재질과 빛과 관련된 값을 초기화합니다.
    glutDisplayFunc(MyDisplay); // 화면에 띄워줄 값들을 불러옵니다.
    glutReshapeFunc(Reshape); // 화면의 값들이 변경될 때 이 함수를 불러와서 sphere의 크기를 같이 조정해줍니다.
    MyCreateList();
    glutMainLoop();
    return 0;
}