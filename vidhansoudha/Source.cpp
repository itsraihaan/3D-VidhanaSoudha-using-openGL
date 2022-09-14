#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<string.h>


#define TEXTID 5
double winHt = 4.0;
float theta[5] = { 0 };

int disp = 0;
void DrawTextXY(double x, double y, double z, double scale, const char* s)
{
	int i;
	glPushMatrix();
	glTranslatef(x, y, z);
	glScalef(scale, scale, scale);
	for (i = 0; i < strlen(s); i++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, s[i]);
	glPopMatrix();
}

void front()
{
	glColor3f(1.0, 0.0, 0.0);
	glLoadName(TEXTID);
	DrawTextXY(-1.8, 3.8, 0.2, 0.002, "ATME COLLEGE OF ENGINEERING");

	glColor3f(1.0, 0.8, 0.0);
	glLoadName(TEXTID);
	DrawTextXY(-1, 3.2, 0.0, 0.002, "  The Pentagon");

	glColor3f(0.0, 0.0, 1.0);
	glLoadName(TEXTID);
	DrawTextXY(-1, 3.5, 0.2, 0.002, "MINI PROJECT ON");

	glColor3f(1.0, 0.8, 0.0);
	glLoadName(TEXTID);
	DrawTextXY(-2, 2, 1.0, 0.001, " SUBMITTED BY: Nagendra B (4AD19CS048)");

	glColor3f(1.0, 0.8, 0.0);
	glLoadName(TEXTID);
	DrawTextXY(-2, 1.8, 1.0, 0.001, "            Mithilesh A(4AD19CS041)");

	glColor3f(1.0, 0.8, 0.0);
	glLoadName(TEXTID);
	DrawTextXY(-1.9, 1.5, 1.0, 0.001, " GUIDE: POORNASREE KULKARNI");
	DrawTextXY(-1.9, 1.3, 1.0, 0.001, "      ASSISTANT PROFESSOR, ");

	glColor3f(1.0, 0.8, 0.0);
	glLoadName(TEXTID);
	// DrawTextXY(-1.8,1,1.0,0.001,"CO-ORDINATOR: MRS SUNITHA PATEL M S");
	// DrawTextXY(-1.8,0.8,1.0,0.001,"           ASSISTANT PROFESSOR,");
}

void leaf()
{
	glPushMatrix();
	glScaled(0.5, 0.5, 0.5);
	glTranslated(0, 0, 0);
	glRotated(45, 0, 0, 1);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glScaled(0.5, 0.5, 0.5);
	glTranslated(0.0, -0.5, 0);
	glutSolidCube(1);
	glPopMatrix();
}
void leafseries()
{
	glPushMatrix();
	glScaled(0.25, 0.35, 0.05);
	for (float i = 0; i < 4.8; i += 0.8)
	{
		glPushMatrix();
		glTranslated(i, 0.0, 0);
		leaf();
		glPopMatrix();
	}
	glPopMatrix();
}
void drawtop()
{
	glPushMatrix();
	glTranslated(0.25, -0.0, 0.0);
	glScaled(3.5, 1.5, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
}
void octtop()
{
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, 1.05);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, -0.53);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();

	glPushMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glRotated(180, 0, 1, 0);
	glTranslated(-1, 0, 3.1);
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawtop();
	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawtop();

	glTranslated(0.0, 0.25, -0.0);
	glScaled(0.5, 0.75, 2);
	leafseries();
	glPopMatrix();
	glPopMatrix();
}
void drawdoor()
{
	glPushMatrix();
	glScaled(1, 3, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glScaled(1, 3, 0.5);
	glTranslated(-0.0, 0, 0);
	glRotated(45, 0, 1, 0);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.5, 0, 0);
	glScaled(1, 3, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.25, 0.25, 0);
	glScaled(3, 0.75, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glRotated(45, 0, 0, 1);
	glTranslated(0.15, 0.0, 0);
	glScaled(2, 0.65, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glRotated(315, 0, 0, 1);
	glTranslated(0.15, 0.35, 0);
	glScaled(2, 0.65, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glRotated(70, 0, 0, 1);
	glScaled(0.5, 0.5, 0.5);
	glTranslated(0.1, -0.10, 0);
	glutSolidCube(0.2);
	glPopMatrix();
	glPushMatrix();
	glRotated(290, 0, 0, 1);
	glScaled(0.5, 0.5, 0.5);
	glTranslated(0.21, 0.83, 0);
	glutSolidCube(0.2);
	glPopMatrix();
}
void drawdoor1()
{
	glPushMatrix();
	glRotated(45, 1, 0, 0);
	glTranslated(0.25, -0.2, 0.25);
	glScaled(3.5, 0.5, 0.5);
	glutSolidCube(0.2);
	glPopMatrix();
}
void octagon()
{

	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, 1.05);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, -0.53);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawdoor();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glRotated(180, 0, 1, 0);
	glTranslated(-1, 0, 3.1);
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawdoor();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawdoor();
	glPopMatrix();
	glPopMatrix();
}
void baseoctagon()
{

	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, 1.05);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(90, 0, 1, 0);
	glTranslated(0.55, 0.0, -0.53);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawdoor1();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glRotated(180, 0, 1, 0);
	glTranslated(-1, 0, 3.1);
	glPushMatrix();
	glScaled(2, 2, 2);
	glTranslated(0.0, 0, 0);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(45, 0, 1, 0);
	glTranslated(0.5, 0.0, 0.4);
	drawdoor1();
	glPopMatrix();
	glPushMatrix();
	glScaled(2, 2, 2);
	glRotated(315, 0, 1, 0);
	glTranslated(-0.63, 0, 0.05);
	drawdoor1();
	glPopMatrix();
	glPopMatrix();
}
void drawedge()
{

	glPushMatrix();
	glTranslated(0, 1.25, 2.4);
	drawdoor();
	glPopMatrix();
	for (float j = 0.5; j < 2.5; j += 0.5)
	{
		glPushMatrix();
		glTranslated(j, 1.25, 2.4);
		drawdoor();
		glPopMatrix();
		glPushMatrix();
		glTranslated(-j, 1.25, 2.4);
		drawdoor();
		glPopMatrix();

	}
}

void drawpiller()
{
	for (float i = 0; i < 7; i++)
	{
		glPushMatrix();
		glTranslated(0, i, 0);
		octagon();
		baseoctagon();
		glPopMatrix();
	}
	glPushMatrix();
	glTranslated(0, 7, 0);
	octtop();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.5, 8.5, -1.5);
	glutSolidSphere(1.75, 50, 50);
	glTranslated(0, 1.5, 0);
	glRotated(270, 1, 0, 0);
	glutSolidCone(0.75, 0.75, 30, 30);
	glPopMatrix();
}
static void resize(int width, int height)
{
	const float ar = (float)width / (float)height;
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void drawmaindoors()
{
	glPushMatrix();
	glTranslated(0, 2.5, 0);
	drawdoor();

	glPopMatrix();
}
void drawgumbaz()
{
	glPushMatrix();
	glColor3d(1.0, 1.0, 1.0);
	glScaled(5, 1.8, 5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0.6, -5);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0.9, -5);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(2.5, -0.7, -2.5);
	glScaled(0.25, 0.4, 0.25);
	drawpiller();
	glPopMatrix();
	glPushMatrix();
	glTranslated(2.5, -0.7, 2.5);
	glScaled(0.25, 0.4, 0.25);
	drawpiller();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2.5, -0.7, 2.5);
	glScaled(0.25, 0.4, 0.25);
	drawpiller();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2.5, -0.7, -2.5);
	glScaled(0.25, 0.4, 0.25);
	drawpiller();
	glPopMatrix();
	glPushMatrix();
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, -5);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-5, 0, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-5, 0.5, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-5, 1, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 0.5, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glRotated(90, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.5, 0.5, 0);
	glRotated(0, 0, 1, 0);
	drawedge();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.5, 1, 0);
	glRotated(0, 0, 1, 0);
	drawedge();
	glPopMatrix();

	glPushMatrix();
	glColor3d(1.0, 1.0, 1.0);
	glTranslated(0.2, 2.9, 0.0);
	glScaled(4.5, 0.5, 5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0.4, 0.2);
	glPushMatrix();
	glTranslated(1.3, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1.8, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.3, -7.5, 2.6);
	glScaled(2.5, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0.4, 0.2);

	glTranslated(-5.5, 0, 0);
	glRotated(90, 0, 1, 0);
	glPushMatrix();
	glTranslated(1.3, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1.8, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.3, -7.5, 2.6);
	glScaled(2.5, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0.4, 0.2);
	glTranslated(5.8, 0, -0.5);
	glRotated(-90, 0, 1, 0);
	glPushMatrix();
	glTranslated(1.3, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1.8, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.3, -7.5, 2.6);
	glScaled(2.5, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0.4, 0.2);
	glTranslated(0, 0, -5.1);
	glRotated(0, 0, 1, 0);
	glPushMatrix();
	glTranslated(1.3, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1.8, -7.5, 2.6);
	glScaled(2.2, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.3, -7.5, 2.6);
	glScaled(2.5, 3, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(1.0, 1.0, 1.0);
	glTranslated(0.2, 3.2, 0.0);
	glScaled(1.9, 0.8, 5);
	glutSolidCube(1);

	glPopMatrix();
	glPushMatrix();
	glTranslated(0.2, 4.0, 0.0);
	glutSolidSphere(0.8, 50, 50);;
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.2, 4.3, 0.0);
	glRotated(270, 1, 0, 0);
	glutSolidCone(0.75, 0.75, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1.3, 3.3, 2.0);
	glRotated(0, 0, 1, 0);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2.0, 3.3, 2.0);
	glRotated(0, 0, 1, 0);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glTranslated(1.4, 3.3, -2.0);
	glRotated(0, 0, 1, 0);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-1.8, 3.3, -2.2);
	glRotated(0, 0, 1, 0);
	leafseries();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.8, 3.8, 2.0);
	glRotated(0, 0, 1, 0);
	leaf();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.55, 3.8, 2.0);
	glRotated(0, 0, 1, 0);
	leaf();
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.8, 3.8, -2.2);
	glRotated(0, 0, 1, 0);
	leaf();
	glPopMatrix();
	glPushMatrix();
	glTranslated(-0.55, 3.8, -2.2);
	glRotated(0, 0, 1, 0);
	leaf();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0, 0.2);
	glTranslated(-1.3, 8, 0.1);
	glRotated(0, 0, 1, 0);
	glPushMatrix();

	glTranslated(1.3, -7.5, 2.6);
	glScaled(1.0, 1, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.2, 0, 0.2);
	glTranslated(-1.3, 8, -5.1);
	glRotated(0, 0, 1, 0);
	glPushMatrix();
	glTranslated(1.3, -7.5, 2.6);
	glScaled(1.0, 1, 0.4);
	drawmaindoors();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0.5, 0.5);
	glTranslated(0.2, 5, 0);
	glScaled(0.1, 0.8, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.8, 0.5, 0);
	glTranslated(0.4, 5.4, 0);
	glScaled(0.5, 0.18, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(1, 1, 1);
	glTranslated(0.4, 5.3, 0);
	glScaled(0.5, 0.2, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.5, 0.8, 0);
	glTranslated(0.4, 5.2, 0);
	glScaled(0.5, 0.2, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(0.4, 5.25, 0.1);
	glScaled(0.1, 0.08, 0);
	glutSolidSphere(0.8, 50, 50);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.1, 0.3, 0.5);
	glScaled(2.4, 0.2, 2.4);
	glTranslated(0.2, -4.35, 1.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.1, 0.3, 0.5);
	glScaled(2.6, 0.2, 2.6);;
	glTranslated(0.2, -5.35, 1.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0.1, 0.3, 0.5);

	glScaled(2.8, 0.2, 2.8);
	glTranslated(0.2, -6.35, 1.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3d(0, 0.5, 0.5);
	glScaled(2, 3, 2);
	glRotated(198, 0, 1, 0);
	glTranslated(0.3, 0, -2.5);
	drawdoor();
	glPopMatrix();
}
static void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
	glMatrixMode(GL_MODELVIEW); // To operate on model-view matrix
	glLoadIdentity(); // Reset the model-view matrix
	//set the camera
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-winHt * 64 / 48.0, winHt * 64 / 48.0, -winHt, winHt, 0.1, 100.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 2.0, 50.0, 0, 2, 0, 0.0, 10.0, 0.0);
	glRotatef(theta[0], 1.0, 0.0, 0.0);
	glRotatef(theta[1], 1.0, 0.0, 0.0);
	glRotatef(theta[2], 0.0, 1.0, 0.0);
	glRotatef(theta[3], 0.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	output(50, 700, "ATME COLLEGE OF ENGINEERING");
	drawgumbaz();
	glFlush();
	glutSwapBuffers();
}
static void mouse(int btn, int statu, int x, int y)
{
	//if (btn == GLUT_LEFT_BUTTON)winHt = winHt + 0.1;
	//if (btn == GLUT_RIGHT_BUTTON)winHt = winHt - 0.1;
	glutPostRedisplay();
}
static void key(unsigned char key, int x, int y)
{
	if (key == 'w')
	{
		theta[0] += 0.5;
		if (theta[0] > 45.0) theta[0] -= 45.0;
		glutPostRedisplay();
	}
	else
		if (key == 's')
		{
			theta[0] -= 0.50;
			if (theta[0] > 45.0 || theta[0] < -00) theta[0] = 0.0;
			glutPostRedisplay();
		}
		else
			if (key == 'a')
			{
				theta[2] -= 8.0;
				if (theta[2] > 360.0) theta[2] -= 360.0;
				glutPostRedisplay();
			}
			else

				if (key == 'd')
				{
					theta[3] += 8.0;
					if (theta[3] > 360.0) theta[3] -= 360.0;
					glutPostRedisplay();
				}
	if (key == 'm')
	{
		glClearColor(0.0, 1.0, 1.0, 1.0);

	}
	if (key == 'n')
	{
		glClearColor(0.0, 0.0, 0.0, 0.0);
	}
}
void output(GLfloat x, GLfloat y, const char* text)
{
	const char* p;
	glPushMatrix();
	glTranslatef(x, y, 0);
	glScaled(10, 10, 0);
	for (p = text; *p; p++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
	glPopMatrix();
}
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}
static void idle(void)
{
}
const GLfloat light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
/* Program entry point */
void ProcessMenu(int value) // Reset flags as appropriate in response to menu selections
{
	glutPostRedisplay();
}

void ProcessMenu1(int value)
{
	switch (value)
	{
	case 1:
		if (value == 1)
			disp = 1;
	}
}

void menu()
{
	int control;
	int control1;
	control = glutCreateMenu(ProcessMenu);
	glutAddMenuEntry("**CONTROLS**", 1);
	glutAddMenuEntry("1)  UP KEY:to move in Forward Direction.", 1);
	glutAddMenuEntry("2)  DOWN KEY:to move  in Backward Direction.", 1);
	glutAddMenuEntry("3)  LEFT KEY:to Turn Left .", 1);
	glutAddMenuEntry("4)  RIGHT KEY:to Turn Right .", 1);
	glutAddMenuEntry("5)  r:moves Towards Right. ", 1);
	glutAddMenuEntry("6)  l:moves Towards Left.", 1);
	glutAddMenuEntry("7)  f:moves Far.", 1);
	glutAddMenuEntry("8)  n:moves Near.", 1);
	glutAddMenuEntry("9)  t:Top view.", 1);
	// glutAddMenuEntry("10)  o:Open door.", 1);
	// glutAddMenuEntry("11)  c:Close door.", 1);
	glutAddMenuEntry("10) q:Quit.", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	control1 = glutCreateMenu(ProcessMenu1);
	glutAddMenuEntry("START", 1);
	glutAttachMenu(GLUT_LEFT_BUTTON);
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(10, 10);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("white fort");
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutIdleFunc(idle);
	glClearColor(0, 0, 0, 0);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glutMouseFunc(mouse);
	myinit();
	menu();
	glutMainLoop();
	return EXIT_SUCCESS;
}