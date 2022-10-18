//#include <GL/glut.h>
//GLboolean IsSphere = true; GLboolean IsSmall = true;
//GLboolean IsTorus = false; GLboolean IsTeapot = false;
//double r = 0.0, g = 0.5, b = 0.5; // 색깔 변수
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(r, g, b);
//	if ((IsSphere) && (IsSmall))
//		glutWireSphere(0.5, 30, 30); //크기 작은 sphere
//	else if ((IsSphere) && (!IsSmall))
//		glutWireSphere(0.7, 30, 30); //크기 큰 sphere
//	else if ((IsTorus) && (IsSmall))
//		glutWireTorus(0.1, 0.3, 40, 20); // 크기 작은 torus
//	else if ((IsTorus) && (!IsSmall))
//		glutWireTorus(0.2, 0.5, 40, 20); // 크기 큰 torus
//	else if ((IsTeapot) && (IsSmall))
//		glutWireTeapot(0.5); //크기 작은 teapot
//	else if ((IsTeapot) && (!IsSmall))
//		glutWireTeapot(0.8); //크기 큰 teapot
//	glFlush();
//}
//void MyMainMenu(int entryID) {//각 entryID 별로 도형과 크기 조절이 가능하게 설정
//	if (entryID == 1) {
//		IsSphere = true;
//		IsSmall = true;
//	}
//	else if (entryID == 2) {
//		IsSphere = true;
//		IsSmall = false;
//	}
//	else if (entryID == 3) {
//		IsSphere = false;
//		IsSmall = true;
//		IsTorus = true;
//	}
//	else if (entryID == 4) {
//		IsSphere = false;
//		IsSmall = false;
//		IsTorus = true;
//	}
//	else if (entryID == 5) {
//		IsSphere = false;
//		IsTorus = false;
//		IsSmall = true;
//		IsTeapot = true;
//	}
//	else if (entryID == 6) {
//		IsSphere = false;
//		IsTorus = false;
//		IsSmall = false;
//		IsTeapot = true;
//	}
//	else if (entryID == 7)
//		exit(0);
//	glutPostRedisplay();
//}
//void MyColorMenu(int entryID) // 색 바꾸기
//{
//	if (entryID == 1) { // 빨강 설정
//		r = 1.0;
//		g = 0.0;
//		b = 0.0;
//	}
//	else if (entryID == 2) { // 초록 설정
//		r = 0.0;
//		g = 1.0;
//		b = 0.0;
//	}
//	else if (entryID == 3) { // 파랑 설정
//		r = 0.0;
//		g = 0.0;
//		b = 1.0;
//	}
//	glutPostRedisplay();
//}
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//	GLint MySizeID1 = glutCreateMenu(MyMainMenu);
//	glutAddMenuEntry("Small Sphere", 1);
//	glutAddMenuEntry("Large Sphere", 2);
//	GLint MySizeID2 = glutCreateMenu(MyMainMenu);
//	glutAddMenuEntry("Small Torus", 3);
//	glutAddMenuEntry("Large Torus", 4);
//	GLint MySizeID3 = glutCreateMenu(MyMainMenu);
//	glutAddMenuEntry("Small Teapot", 5);
//	glutAddMenuEntry("Large Teapot", 6);
//	GLint MyColorID = glutCreateMenu(MyColorMenu);
//	glutAddMenuEntry("Red", 1);
//	glutAddMenuEntry("Green", 2);
//	glutAddMenuEntry("Blue", 3);
//	GLint MyMainMenuID = glutCreateMenu(MyMainMenu);
//	glutAddSubMenu("Draw Sphere", MySizeID1);
//	glutAddSubMenu("Draw Torus", MySizeID2);
//	glutAddSubMenu("Draw Teapot", MySizeID3);
//	glutAddSubMenu("Change Color", MyColorID);
//	glutAddMenuEntry("Exit", 7);
//	glutAttachMenu(GLUT_RIGHT_BUTTON);
//}
//int main(int argc, char** argv) {
//	glutInit(&argc, argv); glutInitDisplayMode(GLUT_RGB);
//	glutInitWindowSize(500, 500); glutInitWindowPosition(0, 0);
//	glutCreateWindow("Menu Callback");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutMainLoop();
//	return 0;
//}