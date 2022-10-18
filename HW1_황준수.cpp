/***********************************************************************/
/*                           HW#1 : 3D Sierpinski Gasket               */
/*  작성자 : 2109038081_황준수              날짜 : 2022년 9월 20일     */
/*                                                                     */
/* 문제 정의 : 3주차 실습코드에서 glOrtho()를 이해하고 gVIewport()를   */
/*             이해하여 2D Sierpinski Gasket을 3D Sierpinski Gasket 을 */
/*             변환 시켜 가시적으로 볼수 있게함                        */
/* 기능 : 3D Sierpinski Gasket                                         */
/*                                                                     */
/***********************************************************************/

#include <gl/glut.h>
#include <stdlib.h> //rand함수이용

void MyDisplay() {
	float vertices[4][3] = { { 0.0, 0.0, -100.0 },{ 200.0, 500.0, -100.0},{ 500.0, 100.0, -100.0 }, { 300.0, 0.0, 100.0 } };//초기 세모 설정
	float p[3] = { 0.0 , 0.0 , 0.0 }; // 찍힐 포인트
	int i, j;
	glClear(GL_COLOR_BUFFER_BIT);


	for (j = 0; j < 100000; j++) {
		i = rand() % 4; //임의의 점 선택
		// 새로 선택된 점과 현재 점을 기준으로 새로운 점 위치 계산
		p[0] = (p[0] + vertices[i][0]) / 2.0; //중점계산 ,x 좌표
		p[1] = (p[1] + vertices[i][1]) / 2.0; //중점계산 ,y 좌표
		p[2] = (p[2] + vertices[i][2]) / 2.0; //중점계산 ,z 좌표
		glBegin(GL_POINTS);
			glVertex2fv(p); //찍힐 위치에 점
		glEnd();
	}

	glFlush(); //남아있는 명령어가 있다면 모두 실행한다.
}

void MyInit() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // 배경 흰색
	glColor3f(1.0, 0.0, 0.0); // 선을 빨간색으로
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 500.0, 0.0, 500.0, 100.0, -100.0); //투영변환 수행
}

void MyReshape(int NewWidth, int NewHeight) { //창 사이즈 변경시 물체 크기 유지
	glViewport(0, 0, NewWidth, NewHeight);
	GLfloat Widthfactor = (GLfloat)NewWidth / (GLfloat)500; //윈도우 사이즈 설정
	GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)500;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0 * Widthfactor, 500.0 * Widthfactor, 0.0 * HeightFactor, 500.0 * HeightFactor, 100.0, -100.0);
	//설정 값에 변화량 곱하기

}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sierpinski Gasket");
	glutDisplayFunc(MyDisplay);
	MyInit();
	glutReshapeFunc(MyReshape);
	glutMainLoop();
}

