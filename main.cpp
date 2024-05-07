
#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.14159265358979323846
#include <MMSystem.h>

using namespace std;


GLfloat twicePi = 2.0f * PI;
GLfloat cloud_position1 = 0.0f;
GLfloat cloud_speed = 0.01f;
GLfloat ship_position2 = 0.0f;
GLfloat ship_speed2 = 0.03f;
GLfloat ship_position3 = 0.0f;
GLfloat ship_speed3 = 0.03f;
GLfloat rain_position2=0.0f;
GLfloat rain_speed2=0.1f;
GLfloat speed = 0.04f;

//DayView
void KualaLumpur() {

    GLfloat x, y;
    int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//display

    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-1.0f,-1.0f);
    glColor3ub(160, 160, 160);
    glVertex2f(1.0f,-1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(1.0f,1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(-1.0f,1.0f);
    glEnd();

     //Sun
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,165,0);
        x=.7f; y=.75f; radius =.1f;

//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


//grass
    glBegin(GL_QUADS);
    glColor3ub(100, 160, 0);
    glVertex2f(-1.0f,-0.3f);
    glColor3ub(100, 160, 0);
    glVertex2f(1.0f,-0.3f);
    glColor3ub(0, 96, 0);
    glVertex2f(1.0f,0.1f);
    glColor3ub(0, 96, 0);
    glVertex2f(-1.0f,0.1f);
    glEnd();

    //BUILDING CODE -START

//building 1

	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(95,158,160);
	glVertex2f(-0.2f,-0.23f);
	glVertex2f(-0.2f,0.50f);
	glVertex2f(-0.05f,0.50f);
	glVertex2f(-0.05f,-0.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.19f,.50f);
	glVertex2f(-0.19f,.65f);
	glVertex2f(-0.06f,.65f);
	glVertex2f(-0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.18f,.65f);
	glVertex2f(-0.18f,.75f);
	glVertex2f(-0.07f,.75f);
	glVertex2f(-0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.16f,.75f);
	glVertex2f(-0.16f,.80f);
	glVertex2f(-0.09f,.80f);
	glVertex2f(-0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.13f,.80f);
	glVertex2f(-0.13f,.90f);
	glVertex2f(-0.12f,.90f);
	glVertex2f(-0.12f,.80f);
	glEnd();

//windows

    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.76f);
	glVertex2f(-0.12f,.79f);
	glVertex2f(-0.13f,.79f);
	glVertex2f(-0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.66f);
	glVertex2f(-0.12f,.74f);
	glVertex2f(-0.13f,.74f);
	glVertex2f(-0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.63f);
	glVertex2f(-0.12f,.58f);
	glVertex2f(-0.13f,.58f);
	glVertex2f(-0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.56f);
	glVertex2f(-0.12f,.51f);
	glVertex2f(-0.13f,.51f);
	glVertex2f(-0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.49f);
	glVertex2f(-0.12f,.41f);
	glVertex2f(-0.13f,.41f);
	glVertex2f(-0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.39f);
	glVertex2f(-0.12f,.31f);
	glVertex2f(-0.13f,.31f);
	glVertex2f(-0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.29f);
	glVertex2f(-0.12f,.21f);
	glVertex2f(-0.13f,.21f);
	glVertex2f(-0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.19f);
	glVertex2f(-0.12f,.11f);
	glVertex2f(-0.13f,.11f);
	glVertex2f(-0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.09f);
	glVertex2f(-0.12f,.01f);
	glVertex2f(-0.13f,.01f);
	glVertex2f(-0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,-.09f);
	glVertex2f(-0.12f,-.01f);
	glVertex2f(-0.13f,-.01f);
	glVertex2f(-0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,-.19f);
	glVertex2f(-0.12f,-.11f);
	glVertex2f(-0.13f,-.11f);
	glVertex2f(-0.13f,-.19f);
	glEnd();

//building 2

    glBegin(GL_QUADS);
	glColor3ub(95,158,160 );
	glVertex2f(0.2f,-.23f);
	glVertex2f(0.2f,.50f);
	glVertex2f(0.05f,.50f);
	glVertex2f(0.05f,-.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.19f,.50f);
	glVertex2f(0.19f,.65f);
	glVertex2f(0.06f,.65f);
	glVertex2f(0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.18f,.65f);
	glVertex2f(0.18f,.75f);
	glVertex2f(0.07f,.75f);
	glVertex2f(0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.16f,.75f);
	glVertex2f(0.16f,.80f);
	glVertex2f(0.09f,.80f);
	glVertex2f(0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.13f,.80f);
	glVertex2f(0.13f,.90f);
	glVertex2f(0.12f,.90f);
	glVertex2f(0.12f,.80f);
	glEnd();

//window building2

    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.76f);
	glVertex2f(0.12f,.79f);
	glVertex2f(0.13f,.79f);
	glVertex2f(0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.66f);
	glVertex2f(0.12f,.74f);
	glVertex2f(0.13f,.74f);
	glVertex2f(0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.63f);
	glVertex2f(0.12f,.58f);
	glVertex2f(0.13f,.58f);
	glVertex2f(0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.56f);
	glVertex2f(0.12f,.51f);
	glVertex2f(0.13f,.51f);
	glVertex2f(0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.49f);
	glVertex2f(0.12f,.41f);
	glVertex2f(0.13f,.41f);
	glVertex2f(0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.39f);
	glVertex2f(0.12f,.31f);
	glVertex2f(0.13f,.31f);
	glVertex2f(0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.29f);
	glVertex2f(0.12f,.21f);
	glVertex2f(0.13f,.21f);
	glVertex2f(0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.19f);
	glVertex2f(0.12f,.11f);
	glVertex2f(0.13f,.11f);
	glVertex2f(0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.09f);
	glVertex2f(0.12f,.01f);
	glVertex2f(0.13f,.01f);
	glVertex2f(0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.09f);
	glVertex2f(0.12f,-.01f);
	glVertex2f(0.13f,-.01f);
	glVertex2f(0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.19f);
	glVertex2f(0.12f,-.11f);
	glVertex2f(0.13f,-.11f);
	glVertex2f(0.13f,-.19f);
	glEnd();

//join

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.32f);
	glVertex2f(-0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.26f);
	glVertex2f(-0.05f,.26f);
	glEnd();

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//side building:
//left-1

    glBegin(GL_QUADS);
	glColor3ub(0,51 ,102 );

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

//window


	//window-1
    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.07f);
	glVertex2f(-0.37f, 0.07f);
	glVertex2f(-0.37f, 0.13f);
	glVertex2f(-0.32f, 0.13f);

	glEnd();

//window-2

	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.07f);
	glVertex2f(-0.48f, 0.07f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.02f);
	glVertex2f(-0.37f, 0.02f);
	glVertex2f(-0.37f, -0.04f);
	glVertex2f(-0.32f, -0.04f);

	 glEnd();

//window-4

    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.02f);
	glVertex2f(-0.48f, 0.02f);
	glVertex2f(-0.48f, -0.04f);
	glVertex2f(-0.43f, -0.04f);

	 glEnd();

    //window-5

    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, -0.09f);
	glVertex2f(-0.37f, -0.09f);
	glVertex2f(-0.37f, -0.15f);
	glVertex2f(-0.32f, -0.15f);
    glEnd();

//window-6

    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.48f, -0.09f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.43f, -0.15f);
    glEnd();

//window border :

//b-2

    glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.07f);
	glVertex2f(-0.403f, 0.07f);
	glVertex2f(-0.403f, 0.13f);
	glVertex2f(-0.395f, 0.13f);
    glEnd();

//b-3

    glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, -0.09f);
	glVertex2f(-0.403f, -0.09f);
	glVertex2f(-0.403f, -0.15f);
	glVertex2f(-0.395f, -0.15f);
    glEnd();

//b-6

    glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.02f);
	glVertex2f(-0.403f, 0.02f);
	glVertex2f(-0.403f, -0.04f);
	glVertex2f(-0.395f, -0.04f);
    glEnd();

// side  building
//left -2

    glBegin(GL_QUADS);
	glColor3ub(153,76 ,0 );

	glVertex2f(-0.55f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.33f);
	glVertex2f(-0.55f, 0.33f);
    glEnd();

//window:1

    glBegin(GL_QUADS);
	glColor3ub(102,255,178 );

	glVertex2f(-0.57f, 0.0f);
	glVertex2f(-0.57f, -0.15f);
	glVertex2f(-0.73f, -0.15f);
	glVertex2f(-0.73f, 0.0f);
    glEnd();

//window-2

    glBegin(GL_QUADS);
	glColor3ub(102,255,178);

	glVertex2f(-0.57f, 0.1f);
	glVertex2f(-0.57f, 0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f, 0.1f);
    glEnd();

//window-4

 //left border:
	 //no:1
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.05f);
	glVertex2f(-0.57f, 0.03f);
	glVertex2f(-0.73f, 0.03f);
	glVertex2f(-0.73f, 0.05f);
    glEnd();

    //no:2
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.29f);
	glVertex2f(-0.57f, 0.31f);
	glVertex2f(-0.73f, 0.31f);
	glVertex2f(-0.73f, 0.29f);

    glEnd();

    //left building :3

    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
	 //design-1

    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.82f, 0.45f);
	glVertex2f(-0.93f, 0.45f);
	glVertex2f(-0.93f, 0.5f);
	glVertex2f(-0.82f, 0.5f);

	 glEnd();
	 //design-2

    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.83f, 0.5f);
	glVertex2f(-0.92f, 0.5f);
	glVertex2f(-0.92f, 0.6f);
	glVertex2f(-0.83f, 0.6f);
    glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.83f, 0.46f);
	glVertex2f(-0.92f, 0.46f);
	glVertex2f(-0.92f, 0.48f);
	glVertex2f(-0.83f, 0.48f);
    glEnd();
	 //b-2
    glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.85f, 0.52f);
	glVertex2f(-0.9f, 0.52f);
	glVertex2f(-0.9f, 0.58f);
	glVertex2f(-0.85f, 0.58f);

	 glEnd();


	 //window-1
    glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.18f);
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.93f, -0.11f);
	glVertex2f(-0.82f, -0.11f);
    glEnd();

	 //window-2
    glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.05f);
	glVertex2f(-0.93f, -0.05f);
	glVertex2f(-0.93f, 0.02f);
	glVertex2f(-0.82f, 0.02f);
    glEnd();

	 //window-3
    glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.08f);
	glVertex2f(-0.93f, 0.08f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
	glVertex2f(-0.93f, 0.29f);
	glVertex2f(-0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.35f);
	glVertex2f(-0.93f, 0.35f);
	glVertex2f(-0.93f, 0.42f);
	glVertex2f(-0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.09f);
	glVertex2f(-0.93f, -0.09f);
	glVertex2f(-0.93f, -0.07f);
	glVertex2f(-0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.04f);
	glVertex2f(-0.93f, 0.04f);
	glVertex2f(-0.93f, 0.06f);
	glVertex2f(-0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.17f);
	glVertex2f(-0.93f, 0.17f);
	glVertex2f(-0.93f, 0.19f);
	glVertex2f(-0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.31f);
	glVertex2f(-0.93f, 0.31f);
	glVertex2f(-0.93f, 0.33f);
	glVertex2f(-0.82f, 0.33f);

	 glEnd();


	 //Right building:1
	 glBegin(GL_QUADS);
	glColor3ub(0,102,102);

	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	 glEnd();


	 //WINDOW -1
	  glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.07f);
	glVertex2f(0.37f, 0.07f);
	glVertex2f(0.37f, 0.13f);
	glVertex2f(0.32f, 0.13f);

	glEnd();
	//window-2
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.07f);
	glVertex2f(0.48f, 0.07f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.02f);
	glVertex2f(0.37f, 0.02f);
	glVertex2f(0.37f, -0.04f);
	glVertex2f(0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.02f);
	glVertex2f(0.48f, 0.02f);
	glVertex2f(0.48f, -0.04f);
	glVertex2f(0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, -0.09f);
	glVertex2f(0.37f, -0.09f);
	glVertex2f(0.37f, -0.15f);
	glVertex2f(0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, -0.09f);
	glVertex2f(0.48f, -0.09f);
	glVertex2f(0.48f, -0.15f);
	glVertex2f(0.43f, -0.15f);
    glEnd();

//BORDER
//border-1
    glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, 0.07f);
	glVertex2f(0.403f, 0.07f);
	glVertex2f(0.403f, 0.13f);
	glVertex2f(0.395f, 0.13f);

	 glEnd();
	 //b-2

	 glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, -0.09f);
	glVertex2f(0.403f, -0.09f);
	glVertex2f(0.403f, -0.15f);
	glVertex2f(0.395f, -0.15f);

	 glEnd();

	 //b-3

	 glBegin(GL_QUADS);
	glColor3ub(255,102,178 );

	glVertex2f(0.395f, 0.02f);
	glVertex2f(0.403f, 0.02f);
	glVertex2f(0.403f, -0.04f);
	glVertex2f(0.395f, -0.04f);

	 glEnd();
	  //right Building:2

	 glBegin(GL_QUADS);
	glColor3ub(76,0,153);

	glVertex2f(0.55f, -0.2f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, 0.33f);
	glVertex2f(0.55f, 0.33f);

	 glEnd();

	 //WINDOW-1

    glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.0f);
	glVertex2f(0.57f, -0.15f);
	glVertex2f(0.73f, -0.15f);
	glVertex2f(0.73f, 0.0f);

	 glEnd();

	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f, 0.1f);

	 glEnd();

	 //left border :
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.05f);
	glVertex2f(0.57f, 0.03f);
	glVertex2f(0.73f, 0.03f);
	glVertex2f(0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.29f);
	glVertex2f(0.57f, 0.31f);
	glVertex2f(0.73f, 0.31f);
	glVertex2f(0.73f, 0.29f);

	 glEnd();
	  //right building:3

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.82f, 0.45f);
	glVertex2f(0.93f, 0.45f);
	glVertex2f(0.93f, 0.5f);
	glVertex2f(0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.83f, 0.5f);
	glVertex2f(0.92f, 0.5f);
	glVertex2f(0.92f, 0.6f);
	glVertex2f(0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.83f, 0.46f);
	glVertex2f(0.92f, 0.46f);
	glVertex2f(0.92f, 0.48f);
	glVertex2f(0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.9f, 0.52f);
	glVertex2f(0.9f, 0.58f);
	glVertex2f(0.85f, 0.58f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();


	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.18f);
	glVertex2f(0.93f, -0.18f);
	glVertex2f(0.93f, -0.11f);
	glVertex2f(0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.05f);
	glVertex2f(0.93f, -0.05f);
	glVertex2f(0.93f, 0.02f);
	glVertex2f(0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.93f, 0.08f);
	glVertex2f(0.93f, 0.15f);
	glVertex2f(0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.22f);
	glVertex2f(0.93f, 0.22f);
	glVertex2f(0.93f, 0.29f);
	glVertex2f(0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.35f);
	glVertex2f(0.93f, 0.35f);
	glVertex2f(0.93f, 0.42f);
	glVertex2f(0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, -0.09f);
	glVertex2f(0.93f, -0.09f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.93f, 0.04f);
	glVertex2f(0.93f, 0.06f);
	glVertex2f(0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.17f);
	glVertex2f(0.93f, 0.17f);
	glVertex2f(0.93f, 0.19f);
	glVertex2f(0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.31f);
	glVertex2f(0.93f, 0.31f);
	glVertex2f(0.93f, 0.33f);
	glVertex2f(0.82f, 0.33f);

	 glEnd();


	  //right tree 1

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.265f,-0.25f);
	glVertex2f(0.265f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.200f,-0.17f);
	glVertex2f(0.330f,-0.17f);
	glVertex2f(0.265f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.205f,-0.15f);
	glVertex2f(0.325f,-0.15f);
	glVertex2f(0.265f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.210f,-0.13f);
	glVertex2f(0.320f,-0.13f);
	glVertex2f(0.265f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.215f,-0.11f);
	glVertex2f(0.315f,-0.11f);
	glVertex2f(0.265f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.220f,-0.09f);
	glVertex2f(0.310f,-0.09f);
	glVertex2f(0.265f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.225f,-0.07f);
	glVertex2f(0.305f,-0.07f);
	glVertex2f(0.265f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.230f,-0.05f);
	glVertex2f(0.300f,-0.05f);
	glVertex2f(0.265f,0.0f);
	glEnd();

//right tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.525f,-0.25f);
	glVertex2f(0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.460f,-0.17f);
	glVertex2f(0.590f,-0.17f);
	glVertex2f(0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.465f,-0.15f);
	glVertex2f(0.585f,-0.15f);
	glVertex2f(0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.470f,-0.13f);
	glVertex2f(0.580f,-0.13f);
	glVertex2f(0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.475f,-0.11f);
	glVertex2f(0.575f,-0.11f);
	glVertex2f(0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.480f,-0.09f);
	glVertex2f(0.570f,-0.09f);
	glVertex2f(0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.485f,-0.07f);
	glVertex2f(0.565f,-0.07f);
	glVertex2f(0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.490f,-0.05f);
	glVertex2f(0.560f,-0.05f);
	glVertex2f(0.525f,0.0f);
	glEnd();

	//right tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.775f,-0.25f);
	glVertex2f(0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.710f,-0.17f);
	glVertex2f(0.840f,-0.17f);
	glVertex2f(0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.715f,-0.15f);
	glVertex2f(0.835f,-0.15f);
	glVertex2f(0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.720f,-0.13f);
	glVertex2f(0.830f,-0.13f);
	glVertex2f(0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.725f,-0.11f);
	glVertex2f(0.825f,-0.11f);
	glVertex2f(0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.730f,-0.09f);
	glVertex2f(0.820f,-0.09f);
	glVertex2f(0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.735f,-0.07f);
	glVertex2f(0.815f,-0.07f);
	glVertex2f(0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.740f,-0.05f);
	glVertex2f(0.810f,-0.05f);
	glVertex2f(0.775f,0.0f);
	glEnd();

	//left tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.255f,-0.25f);
	glVertex2f(-0.255f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.190f,-0.17f);
	glVertex2f(-0.320f,-0.17f);
	glVertex2f(-0.255f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.195f,-0.15f);
	glVertex2f(-0.315f,-0.15f);
	glVertex2f(-0.255f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.200f,-0.13f);
	glVertex2f(-0.310f,-0.13f);
	glVertex2f(-0.255f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.205f,-0.11f);
	glVertex2f(-0.305f,-0.11f);
	glVertex2f(-0.255f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.210f,-0.09f);
	glVertex2f(-0.300f,-0.09f);
	glVertex2f(-0.255f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.215f,-0.07f);
	glVertex2f(-0.295f,-0.07f);
	glVertex2f(-0.255f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.220f,-0.05f);
	glVertex2f(-0.290f,-0.05f);
	glVertex2f(-0.255f,0.0f);
	glEnd();

	//left tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.525f,-0.25f);
	glVertex2f(-0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.460f,-0.17f);
	glVertex2f(-0.590f,-0.17f);
	glVertex2f(-0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.465f,-0.15f);
	glVertex2f(-0.585f,-0.15f);
	glVertex2f(-0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.470f,-0.13f);
	glVertex2f(-0.580f,-0.13f);
	glVertex2f(-0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.475f,-0.11f);
	glVertex2f(-0.575f,-0.11f);
	glVertex2f(-0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.480f,-0.09f);
	glVertex2f(-0.570f,-0.09f);
	glVertex2f(-0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.485f,-0.07f);
	glVertex2f(-0.565f,-0.07f);
	glVertex2f(-0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.490f,-0.05f);
	glVertex2f(-0.560f,-0.05f);
	glVertex2f(-0.525f,0.0f);
	glEnd();

	//left tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.775f,-0.25f);
	glVertex2f(-0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.710f,-0.17f);
	glVertex2f(-0.840f,-0.17f);
	glVertex2f(-0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.715f,-0.15f);
	glVertex2f(-0.835f,-0.15f);
	glVertex2f(-0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.720f,-0.13f);
	glVertex2f(-0.830f,-0.13f);
	glVertex2f(-0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.725f,-0.11f);
	glVertex2f(-0.825f,-0.11f);
	glVertex2f(-0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.730f,-0.09f);
	glVertex2f(-0.820f,-0.09f);
	glVertex2f(-0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.815f,-0.07f);
	glVertex2f(-0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.740f,-0.05f);
	glVertex2f(-0.810f,-0.05f);
	glVertex2f(-0.775f,0.0f);
	glEnd();

    //wall
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glColor3ub(96, 96, 96);
	glVertex2f(0.97f, -0.33f);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.73f, -0.33f);
	glVertex2f(0.61f, -0.33f);
    glVertex2f(0.49f, -0.33f);
	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.25f, -0.33f);
	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.01f, -0.33f);
	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.23f, -0.33f);
	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.47f, -0.33f);
	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.71f, -0.33f);
	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.95f, -0.33f);
	glVertex2f(-0.98f, -0.33f);

	glVertex2f(0.91f, -0.33f);
    glVertex2f(0.79f, -0.33f);
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.55f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.31f, -0.33f);
    glVertex2f(0.19f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.17f, -0.33f);
    glVertex2f(-0.29f, -0.33f);
    glVertex2f(-0.41f, -0.33f);
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.89f, -0.33f);
	glEnd();

	//lamp stand

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.85f, -0.2f);

	glVertex2f(0.61f, -0.33f);
	glVertex2f(0.61f, -0.2f);

	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.37f, -0.2f);

	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.13f, -0.2f);

	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.11f, -0.2f);

	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.35f, -0.2f);

	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.59f, -0.2f);

	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.83f, -0.2f);

	glEnd();

    // lamp horizontal
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);

	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.87f, -0.2f);

	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);

	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);

	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);

	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);

	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);

	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);

	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);

	glEnd();


	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 153);
	glVertex2f(0.83f, -0.2f); //left bottom
	glVertex2f(0.87f, -0.2f); //right bottom
	glVertex2f(0.89f, -0.15f); //right middle
	glVertex2f(0.87f, -0.1f);  //right top
	glVertex2f(0.83f, -0.1f);  //left top
	glVertex2f(0.81f, -0.15f); //left middle
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 153);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.63f, -0.1f);
	glVertex2f(0.59f, -0.1f);
	glVertex2f(0.57f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 255);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);
	glVertex2f(0.41f, -0.15f);
	glVertex2f(0.39f, -0.1f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.33f, -0.15f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(204, 153, 255);
	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.17f, -0.15f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.09f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 153);
	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);
	glVertex2f(-0.07f, -0.15f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 204);
	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);
	glVertex2f(-0.31f, -0.15f);
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.37f, -0.1f);
	glVertex2f(-0.39f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 153);
	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);
	glVertex2f(-0.55f, -0.15f);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.63f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);
	glVertex2f(-0.79f, -0.15f);
	glVertex2f(-0.81f, -0.1f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.87f, -0.15f);
	glEnd();


    //river
	glBegin(GL_QUADS);
	glColor3ub(0, 162, 255);
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(0, 162, 255);
    glVertex2f(1.0f, -1.0f);
    glColor3ub(153, 204, 255);
    glVertex2f(1.0f, -0.37f);
	glVertex2f(-1.0f, -0.37f);
    glEnd();

    glBegin(GL_LINES);//water line3
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(-0.85f, -0.5f);
	glEnd();

    glBegin(GL_LINES);//water line4
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.35f, -0.5f);
	glEnd();

    glBegin(GL_LINES);//water line5
	glColor3ub(141,206,242);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.75f, -0.5f);
	glEnd();

	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.55f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(0.25f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(1.0f, -0.7f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.1f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(0.4f, -0.9f);
	glVertex2f(0.7f, -0.9f);
	glEnd();
	//land font
            glBegin(GL_QUADS);
            glColor3ub(9,102,0);
            glVertex2f(-1.002f, -0.833f);
            glVertex2f(1.000f, -0.833f);
            glVertex2f(1.000f, -1.003f);
            glVertex2f(-1.002f, -1.003f);
            glEnd();
	 //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(0,153,153);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();


    //water bus -2

    glPushMatrix();
    glTranslatef(ship_position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.2f, -0.6f);

	 glEnd();

	 //cargo code start////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	glBegin(GL_QUADS);//cargo
	glColor3ub(47,136,220);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.05f,-0.4f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo2
	glColor3ub(225,46,49);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.35f,-0.3f);
	glVertex2f(-0.35f,-0.4f);
	glVertex2f(-0.05f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo3
	glColor3ub(241,128,6);
	glVertex2f(0.21f,-0.17f);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(0.21f,-0.3f);
	glEnd();

	glBegin(GL_QUADS);//cargo4
	glColor3ub(45,129,80);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.25f,-0.17f);
	glVertex2f(-0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glEnd();

	glBegin(GL_POLYGON); //boat
	glColor3ub(47,47,79);
	glVertex2f(-0.15f,-0.4f);
	glVertex2f(-0.2f,-0.35f);
	glVertex2f(-0.5f,-0.35f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(0.6f,-0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(228,48,51);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.33f,-0.58f);
	glVertex2f(0.42f,-0.58f);
	glEnd();

	glBegin(GL_QUADS); //boat
	glColor3ub(237,236,241);
	glVertex2f(0.55f,-0.4f);
	glVertex2f(0.55f,-0.3f);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(237,236,241);
	glVertex2f(0.46f,-0.3f);
	glVertex2f(0.46f,-0.21f);
	glVertex2f(0.25f,-0.21f);
	glVertex2f(0.25f,-0.3f);
	glEnd();


	glBegin(GL_QUADS); //boat window
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.33f);
	glVertex2f(0.25f,-0.33f);
	glVertex2f(0.25f,-0.35f);
	glVertex2f(0.4f,-0.35f);
	glEnd();


	glBegin(GL_QUADS); //boat window2
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.26f);
	glVertex2f(0.25f,-0.26f);
	glVertex2f(0.25f,-0.28f);
	glVertex2f(0.4f,-0.28f);
	glEnd();


	glBegin(GL_QUADS); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.375f,-0.21f);
	glVertex2f(0.375f,0.25f);
	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,-0.21f);
	glEnd();/**<  */

    glBegin(GL_POLYGON); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.3f,0.15f);
	glVertex2f(-0.05f,0.15f);
	glVertex2f(-0.15f,0.125f);
	glVertex2f(-0.15f,0.1f);
	glEnd();
	glBegin(GL_QUADS);//Crain chain
	glColor3ub(51,0,0);
	glVertex2f(-0.051f,0.1f);
	glVertex2f(-0.058f,0.1f);
	glVertex2f(-0.058f,0.0f);
	glVertex2f(-0.051f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain2
	glColor3ub(51,0,0);
	glVertex2f(-0.025f,0.1f);
	glVertex2f(-0.033f,0.1f);
	glVertex2f(-0.033f,0.0f);
	glVertex2f(-0.025f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain3
	glColor3ub(51,0,0);
	glVertex2f(0.3f,0.24f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.03f,0.15f);
	glVertex2f(0.3f,0.23f);

    glEnd();

    glBegin(GL_QUADS);//crain cargo box
	glColor3ub(47,135,215);
	glVertex2f(0.05f,0.01f);
	glVertex2f(-0.15f,0.01f);
	glVertex2f(-0.15f,-0.1f);
	glVertex2f(0.05f,-0.1f);

//water bus2 code
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.65f, -0.6f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.25f, -0.6f);

	 glEnd();
	 //window part-1
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.59f, -0.52f);
	glVertex2f(-0.53f, -0.52f);
	glVertex2f(-0.53f, -0.57f);
	glVertex2f(-0.59f, -0.57f);

	 glEnd();
	 //window part-2
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.5f, -0.52f);
	glVertex2f(-0.44f, -0.52f);
	glVertex2f(-0.44f, -0.57f);
	glVertex2f(-0.5f, -0.57f);

	 glEnd();
//window part -3

	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.41f, -0.52f);
	glVertex2f(-0.35f, -0.52f);
	glVertex2f(-0.35f, -0.57f);
	glVertex2f(-0.41f, -0.57f);

    glEnd();

    //window part -4

    glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.32f, -0.52f);
	glVertex2f(-0.26f, -0.52f);
	glVertex2f(-0.26f, -0.57f);
	glVertex2f(-0.32f, -0.57f);

    glEnd();

    glPopMatrix();


    glLoadIdentity();
    glFlush();

}
void sound()
{

    PlaySound("eveng.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

//rain View
void KualaLumpurrainView() {

    GLfloat x, y;
    int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //display

    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-1.0f,-1.0f);
    glColor3ub(160, 160, 160);
    glVertex2f(1.0f,-1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(1.0f,1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(-1.0f,1.0f);
    glEnd();

     //Sun
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,165,0);
        x=.7f; y=.75f; radius =.1f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
    //grass
    glBegin(GL_QUADS);
    glColor3ub(100, 160, 0);
    glVertex2f(-1.0f,-0.3f);
    glColor3ub(100, 160, 0);
    glVertex2f(1.0f,-0.3f);
    glColor3ub(0, 96, 0);
    glVertex2f(1.0f,0.1f);
    glColor3ub(0, 96, 0);
    glVertex2f(-1.0f,0.1f);
    glEnd();


    //BUILDING CODE -START

     //middle1
glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(95,158,160);
	glVertex2f(-0.2f,-0.23f);
	glVertex2f(-0.2f,0.50f);
	glVertex2f(-0.05f,0.50f);
	glVertex2f(-0.05f,-0.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.19f,.50f);
	glVertex2f(-0.19f,.65f);
	glVertex2f(-0.06f,.65f);
	glVertex2f(-0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.18f,.65f);
	glVertex2f(-0.18f,.75f);
	glVertex2f(-0.07f,.75f);
	glVertex2f(-0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.16f,.75f);
	glVertex2f(-0.16f,.80f);
	glVertex2f(-0.09f,.80f);
	glVertex2f(-0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.13f,.80f);
	glVertex2f(-0.13f,.90f);
	glVertex2f(-0.12f,.90f);
	glVertex2f(-0.12f,.80f);
	glEnd();
	//windows
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.76f);
	glVertex2f(-0.12f,.79f);
	glVertex2f(-0.13f,.79f);
	glVertex2f(-0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.66f);
	glVertex2f(-0.12f,.74f);
	glVertex2f(-0.13f,.74f);
	glVertex2f(-0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.63f);
	glVertex2f(-0.12f,.58f);
	glVertex2f(-0.13f,.58f);
	glVertex2f(-0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.56f);
	glVertex2f(-0.12f,.51f);
	glVertex2f(-0.13f,.51f);
	glVertex2f(-0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.49f);
	glVertex2f(-0.12f,.41f);
	glVertex2f(-0.13f,.41f);
	glVertex2f(-0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.39f);
	glVertex2f(-0.12f,.31f);
	glVertex2f(-0.13f,.31f);
	glVertex2f(-0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.29f);
	glVertex2f(-0.12f,.21f);
	glVertex2f(-0.13f,.21f);
	glVertex2f(-0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.19f);
	glVertex2f(-0.12f,.11f);
	glVertex2f(-0.13f,.11f);
	glVertex2f(-0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.09f);
	glVertex2f(-0.12f,.01f);
	glVertex2f(-0.13f,.01f);
	glVertex2f(-0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,-.09f);
	glVertex2f(-0.12f,-.01f);
	glVertex2f(-0.13f,-.01f);
	glVertex2f(-0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,-.19f);
	glVertex2f(-0.12f,-.11f);
	glVertex2f(-0.13f,-.11f);
	glVertex2f(-0.13f,-.19f);
	glEnd();

//building 2
    glBegin(GL_QUADS);
	glColor3ub(95,158,160 );
	glVertex2f(0.2f,-.23f);
	glVertex2f(0.2f,.50f);
	glVertex2f(0.05f,.50f);
	glVertex2f(0.05f,-.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.19f,.50f);
	glVertex2f(0.19f,.65f);
	glVertex2f(0.06f,.65f);
	glVertex2f(0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.18f,.65f);
	glVertex2f(0.18f,.75f);
	glVertex2f(0.07f,.75f);
	glVertex2f(0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.16f,.75f);
	glVertex2f(0.16f,.80f);
	glVertex2f(0.09f,.80f);
	glVertex2f(0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.13f,.80f);
	glVertex2f(0.13f,.90f);
	glVertex2f(0.12f,.90f);
	glVertex2f(0.12f,.80f);
	glEnd();
    //window building2
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.76f);
	glVertex2f(0.12f,.79f);
	glVertex2f(0.13f,.79f);
	glVertex2f(0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.66f);
	glVertex2f(0.12f,.74f);
	glVertex2f(0.13f,.74f);
	glVertex2f(0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.63f);
	glVertex2f(0.12f,.58f);
	glVertex2f(0.13f,.58f);
	glVertex2f(0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.56f);
	glVertex2f(0.12f,.51f);
	glVertex2f(0.13f,.51f);
	glVertex2f(0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.49f);
	glVertex2f(0.12f,.41f);
	glVertex2f(0.13f,.41f);
	glVertex2f(0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.39f);
	glVertex2f(0.12f,.31f);
	glVertex2f(0.13f,.31f);
	glVertex2f(0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.29f);
	glVertex2f(0.12f,.21f);
	glVertex2f(0.13f,.21f);
	glVertex2f(0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.19f);
	glVertex2f(0.12f,.11f);
	glVertex2f(0.13f,.11f);
	glVertex2f(0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.09f);
	glVertex2f(0.12f,.01f);
	glVertex2f(0.13f,.01f);
	glVertex2f(0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.09f);
	glVertex2f(0.12f,-.01f);
	glVertex2f(0.13f,-.01f);
	glVertex2f(0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.19f);
	glVertex2f(0.12f,-.11f);
	glVertex2f(0.13f,-.11f);
	glVertex2f(0.13f,-.19f);
	glEnd();

	//join
        glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.32f);
	glVertex2f(-0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.26f);
	glVertex2f(-0.05f,.26f);
	glEnd();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//side building:
//left-1

    glBegin(GL_QUADS);
	glColor3ub(0,51 ,102 );

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

//window


	//window-1
    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.07f);
	glVertex2f(-0.37f, 0.07f);
	glVertex2f(-0.37f, 0.13f);
	glVertex2f(-0.32f, 0.13f);

	glEnd();
	//window-2

	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.07f);
	glVertex2f(-0.48f, 0.07f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.02f);
	glVertex2f(-0.37f, 0.02f);
	glVertex2f(-0.37f, -0.04f);
	glVertex2f(-0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.02f);
	glVertex2f(-0.48f, 0.02f);
	glVertex2f(-0.48f, -0.04f);
	glVertex2f(-0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, -0.09f);
	glVertex2f(-0.37f, -0.09f);
	glVertex2f(-0.37f, -0.15f);
	glVertex2f(-0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.48f, -0.09f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.43f, -0.15f);

	 glEnd();


	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.07f);
	glVertex2f(-0.403f, 0.07f);
	glVertex2f(-0.403f, 0.13f);
	glVertex2f(-0.395f, 0.13f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, -0.09f);
	glVertex2f(-0.403f, -0.09f);
	glVertex2f(-0.403f, -0.15f);
	glVertex2f(-0.395f, -0.15f);

	 glEnd();

	 //b-6

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.02f);
	glVertex2f(-0.403f, 0.02f);
	glVertex2f(-0.403f, -0.04f);
	glVertex2f(-0.395f, -0.04f);

	 glEnd();

	 // side  building
	 //left -2
	 glBegin(GL_QUADS);
	glColor3ub(153,76 ,0 );

	glVertex2f(-0.55f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.33f);
	glVertex2f(-0.55f, 0.33f);

	 glEnd();
	 //window:1

	 glBegin(GL_QUADS);
	glColor3ub(102,255,178 );

	glVertex2f(-0.57f, 0.0f);
	glVertex2f(-0.57f, -0.15f);
	glVertex2f(-0.73f, -0.15f);
	glVertex2f(-0.73f, 0.0f);

	 glEnd();

	 //window-2

	 glBegin(GL_QUADS);
	glColor3ub(102,255,178);

	glVertex2f(-0.57f, 0.1f);
	glVertex2f(-0.57f, 0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f, 0.1f);

	 glEnd();

	 //window-4

 //left border:
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.05f);
	glVertex2f(-0.57f, 0.03f);
	glVertex2f(-0.73f, 0.03f);
	glVertex2f(-0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.29f);
	glVertex2f(-0.57f, 0.31f);
	glVertex2f(-0.73f, 0.31f);
	glVertex2f(-0.73f, 0.29f);

	 glEnd();
	 //left building :3
    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.82f, 0.45f);
	glVertex2f(-0.93f, 0.45f);
	glVertex2f(-0.93f, 0.5f);
	glVertex2f(-0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.83f, 0.5f);
	glVertex2f(-0.92f, 0.5f);
	glVertex2f(-0.92f, 0.6f);
	glVertex2f(-0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.83f, 0.46f);
	glVertex2f(-0.92f, 0.46f);
	glVertex2f(-0.92f, 0.48f);
	glVertex2f(-0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.85f, 0.52f);
	glVertex2f(-0.9f, 0.52f);
	glVertex2f(-0.9f, 0.58f);
	glVertex2f(-0.85f, 0.58f);

	 glEnd();


	 //window-1
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.18f);
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.93f, -0.11f);
	glVertex2f(-0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.05f);
	glVertex2f(-0.93f, -0.05f);
	glVertex2f(-0.93f, 0.02f);
	glVertex2f(-0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.08f);
	glVertex2f(-0.93f, 0.08f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
	glVertex2f(-0.93f, 0.29f);
	glVertex2f(-0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.35f);
	glVertex2f(-0.93f, 0.35f);
	glVertex2f(-0.93f, 0.42f);
	glVertex2f(-0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.09f);
	glVertex2f(-0.93f, -0.09f);
	glVertex2f(-0.93f, -0.07f);
	glVertex2f(-0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.04f);
	glVertex2f(-0.93f, 0.04f);
	glVertex2f(-0.93f, 0.06f);
	glVertex2f(-0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.17f);
	glVertex2f(-0.93f, 0.17f);
	glVertex2f(-0.93f, 0.19f);
	glVertex2f(-0.82f, 0.19f);

	 glEnd();
//b-4
glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.31f);
	glVertex2f(-0.93f, 0.31f);
	glVertex2f(-0.93f, 0.33f);
	glVertex2f(-0.82f, 0.33f);

	 glEnd();


	 //Right building:1
	 glBegin(GL_QUADS);
	glColor3ub(0,102,102);

	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	 glEnd();


	 //WINDOW -1
	  glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.07f);
	glVertex2f(0.37f, 0.07f);
	glVertex2f(0.37f, 0.13f);
	glVertex2f(0.32f, 0.13f);

	glEnd();
	//window-2
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.07f);
	glVertex2f(0.48f, 0.07f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.02f);
	glVertex2f(0.37f, 0.02f);
	glVertex2f(0.37f, -0.04f);
	glVertex2f(0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.02f);
	glVertex2f(0.48f, 0.02f);
	glVertex2f(0.48f, -0.04f);
	glVertex2f(0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, -0.09f);
	glVertex2f(0.37f, -0.09f);
	glVertex2f(0.37f, -0.15f);
	glVertex2f(0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, -0.09f);
	glVertex2f(0.48f, -0.09f);
	glVertex2f(0.48f, -0.15f);
	glVertex2f(0.43f, -0.15f);

	 glEnd();
//BORDER
//border-1
glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, 0.07f);
	glVertex2f(0.403f, 0.07f);
	glVertex2f(0.403f, 0.13f);
	glVertex2f(0.395f, 0.13f);

	 glEnd();
	 //b-2

	 glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, -0.09f);
	glVertex2f(0.403f, -0.09f);
	glVertex2f(0.403f, -0.15f);
	glVertex2f(0.395f, -0.15f);

	 glEnd();

	 //b-3

	 glBegin(GL_QUADS);
	glColor3ub(255,102,178 );

	glVertex2f(0.395f, 0.02f);
	glVertex2f(0.403f, 0.02f);
	glVertex2f(0.403f, -0.04f);
	glVertex2f(0.395f, -0.04f);

	 glEnd();
	  //right Building:2

	 glBegin(GL_QUADS);
	glColor3ub(76,0,153);

	glVertex2f(0.55f, -0.2f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, 0.33f);
	glVertex2f(0.55f, 0.33f);

	 glEnd();

	 //WINDOW-1

    glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.0f);
	glVertex2f(0.57f, -0.15f);
	glVertex2f(0.73f, -0.15f);
	glVertex2f(0.73f, 0.0f);

	 glEnd();

	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f, 0.1f);

	 glEnd();

	 //left border :
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.05f);
	glVertex2f(0.57f, 0.03f);
	glVertex2f(0.73f, 0.03f);
	glVertex2f(0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.29f);
	glVertex2f(0.57f, 0.31f);
	glVertex2f(0.73f, 0.31f);
	glVertex2f(0.73f, 0.29f);

	 glEnd();
	  //right building:3

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.82f, 0.45f);
	glVertex2f(0.93f, 0.45f);
	glVertex2f(0.93f, 0.5f);
	glVertex2f(0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.83f, 0.5f);
	glVertex2f(0.92f, 0.5f);
	glVertex2f(0.92f, 0.6f);
	glVertex2f(0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.83f, 0.46f);
	glVertex2f(0.92f, 0.46f);
	glVertex2f(0.92f, 0.48f);
	glVertex2f(0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.9f, 0.52f);
	glVertex2f(0.9f, 0.58f);
	glVertex2f(0.85f, 0.58f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();


	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.18f);
	glVertex2f(0.93f, -0.18f);
	glVertex2f(0.93f, -0.11f);
	glVertex2f(0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.05f);
	glVertex2f(0.93f, -0.05f);
	glVertex2f(0.93f, 0.02f);
	glVertex2f(0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.93f, 0.08f);
	glVertex2f(0.93f, 0.15f);
	glVertex2f(0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.22f);
	glVertex2f(0.93f, 0.22f);
	glVertex2f(0.93f, 0.29f);
	glVertex2f(0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.35f);
	glVertex2f(0.93f, 0.35f);
	glVertex2f(0.93f, 0.42f);
	glVertex2f(0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, -0.09f);
	glVertex2f(0.93f, -0.09f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.93f, 0.04f);
	glVertex2f(0.93f, 0.06f);
	glVertex2f(0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.17f);
	glVertex2f(0.93f, 0.17f);
	glVertex2f(0.93f, 0.19f);
	glVertex2f(0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.31f);
	glVertex2f(0.93f, 0.31f);
	glVertex2f(0.93f, 0.33f);
	glVertex2f(0.82f, 0.33f);

	 glEnd();


	  //right tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.265f,-0.25f);
	glVertex2f(0.265f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.200f,-0.17f);
	glVertex2f(0.330f,-0.17f);
	glVertex2f(0.265f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.205f,-0.15f);
	glVertex2f(0.325f,-0.15f);
	glVertex2f(0.265f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.210f,-0.13f);
	glVertex2f(0.320f,-0.13f);
	glVertex2f(0.265f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.215f,-0.11f);
	glVertex2f(0.315f,-0.11f);
	glVertex2f(0.265f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.220f,-0.09f);
	glVertex2f(0.310f,-0.09f);
	glVertex2f(0.265f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.225f,-0.07f);
	glVertex2f(0.305f,-0.07f);
	glVertex2f(0.265f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.230f,-0.05f);
	glVertex2f(0.300f,-0.05f);
	glVertex2f(0.265f,0.0f);
	glEnd();

//right tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.525f,-0.25f);
	glVertex2f(0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.460f,-0.17f);
	glVertex2f(0.590f,-0.17f);
	glVertex2f(0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.465f,-0.15f);
	glVertex2f(0.585f,-0.15f);
	glVertex2f(0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.470f,-0.13f);
	glVertex2f(0.580f,-0.13f);
	glVertex2f(0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.475f,-0.11f);
	glVertex2f(0.575f,-0.11f);
	glVertex2f(0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.480f,-0.09f);
	glVertex2f(0.570f,-0.09f);
	glVertex2f(0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.485f,-0.07f);
	glVertex2f(0.565f,-0.07f);
	glVertex2f(0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.490f,-0.05f);
	glVertex2f(0.560f,-0.05f);
	glVertex2f(0.525f,0.0f);
	glEnd();

	//right tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.775f,-0.25f);
	glVertex2f(0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.710f,-0.17f);
	glVertex2f(0.840f,-0.17f);
	glVertex2f(0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.715f,-0.15f);
	glVertex2f(0.835f,-0.15f);
	glVertex2f(0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.720f,-0.13f);
	glVertex2f(0.830f,-0.13f);
	glVertex2f(0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.725f,-0.11f);
	glVertex2f(0.825f,-0.11f);
	glVertex2f(0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.730f,-0.09f);
	glVertex2f(0.820f,-0.09f);
	glVertex2f(0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.735f,-0.07f);
	glVertex2f(0.815f,-0.07f);
	glVertex2f(0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.740f,-0.05f);
	glVertex2f(0.810f,-0.05f);
	glVertex2f(0.775f,0.0f);
	glEnd();

	//left tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.255f,-0.25f);
	glVertex2f(-0.255f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.190f,-0.17f);
	glVertex2f(-0.320f,-0.17f);
	glVertex2f(-0.255f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.195f,-0.15f);
	glVertex2f(-0.315f,-0.15f);
	glVertex2f(-0.255f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.200f,-0.13f);
	glVertex2f(-0.310f,-0.13f);
	glVertex2f(-0.255f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.205f,-0.11f);
	glVertex2f(-0.305f,-0.11f);
	glVertex2f(-0.255f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.210f,-0.09f);
	glVertex2f(-0.300f,-0.09f);
	glVertex2f(-0.255f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.215f,-0.07f);
	glVertex2f(-0.295f,-0.07f);
	glVertex2f(-0.255f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.220f,-0.05f);
	glVertex2f(-0.290f,-0.05f);
	glVertex2f(-0.255f,0.0f);
	glEnd();

	//left tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.525f,-0.25f);
	glVertex2f(-0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.460f,-0.17f);
	glVertex2f(-0.590f,-0.17f);
	glVertex2f(-0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.465f,-0.15f);
	glVertex2f(-0.585f,-0.15f);
	glVertex2f(-0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.470f,-0.13f);
	glVertex2f(-0.580f,-0.13f);
	glVertex2f(-0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.475f,-0.11f);
	glVertex2f(-0.575f,-0.11f);
	glVertex2f(-0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.480f,-0.09f);
	glVertex2f(-0.570f,-0.09f);
	glVertex2f(-0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.485f,-0.07f);
	glVertex2f(-0.565f,-0.07f);
	glVertex2f(-0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.490f,-0.05f);
	glVertex2f(-0.560f,-0.05f);
	glVertex2f(-0.525f,0.0f);
	glEnd();

	//left tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.775f,-0.25f);
	glVertex2f(-0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.710f,-0.17f);
	glVertex2f(-0.840f,-0.17f);
	glVertex2f(-0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.715f,-0.15f);
	glVertex2f(-0.835f,-0.15f);
	glVertex2f(-0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.720f,-0.13f);
	glVertex2f(-0.830f,-0.13f);
	glVertex2f(-0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.725f,-0.11f);
	glVertex2f(-0.825f,-0.11f);
	glVertex2f(-0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.730f,-0.09f);
	glVertex2f(-0.820f,-0.09f);
	glVertex2f(-0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.815f,-0.07f);
	glVertex2f(-0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.740f,-0.05f);
	glVertex2f(-0.810f,-0.05f);
	glVertex2f(-0.775f,0.0f);
	glEnd();




    //wall
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glColor3ub(96, 96, 96);
	glVertex2f(0.97f, -0.33f);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.73f, -0.33f);
	glVertex2f(0.61f, -0.33f);
    glVertex2f(0.49f, -0.33f);
	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.25f, -0.33f);
	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.01f, -0.33f);
	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.23f, -0.33f);
	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.47f, -0.33f);
	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.71f, -0.33f);
	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.95f, -0.33f);
	glVertex2f(-0.98f, -0.33f);

	glVertex2f(0.91f, -0.33f);
    glVertex2f(0.79f, -0.33f);
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.55f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.31f, -0.33f);
    glVertex2f(0.19f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.17f, -0.33f);
    glVertex2f(-0.29f, -0.33f);
    glVertex2f(-0.41f, -0.33f);
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.89f, -0.33f);
	glEnd();

	//lamp stand

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.85f, -0.2f);

	glVertex2f(0.61f, -0.33f);
	glVertex2f(0.61f, -0.2f);

	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.37f, -0.2f);

	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.13f, -0.2f);

	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.11f, -0.2f);

	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.35f, -0.2f);

	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.59f, -0.2f);

	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.83f, -0.2f);

	glEnd();

    // lamp horizontal
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);

	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.87f, -0.2f);

	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);

	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);

	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);

	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);

	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);

	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);

	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);

	glEnd();

	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 153);
	glVertex2f(0.83f, -0.2f); //left bottom
	glVertex2f(0.87f, -0.2f); //right bottom
	glVertex2f(0.89f, -0.15f); //right middle
	glVertex2f(0.87f, -0.1f);  //right top
	glVertex2f(0.83f, -0.1f);  //left top
	glVertex2f(0.81f, -0.15f); //left middle
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 153);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.63f, -0.1f);
	glVertex2f(0.59f, -0.1f);
	glVertex2f(0.57f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 255);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);
	glVertex2f(0.41f, -0.15f);
	glVertex2f(0.39f, -0.1f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.33f, -0.15f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(204, 153, 255);
	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.17f, -0.15f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.09f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 153);
	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);
	glVertex2f(-0.07f, -0.15f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 204);
	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);
	glVertex2f(-0.31f, -0.15f);
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.37f, -0.1f);
	glVertex2f(-0.39f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 153);
	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);
	glVertex2f(-0.55f, -0.15f);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.63f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);
	glVertex2f(-0.79f, -0.15f);
	glVertex2f(-0.81f, -0.1f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.87f, -0.15f);
	glEnd();

    //river
	glBegin(GL_QUADS);
	glColor3ub(0, 162, 255);
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(0, 162, 255);
    glVertex2f(1.0f, -1.0f);
    glColor3ub(153, 204, 255);
    glVertex2f(1.0f, -0.37f);
	glVertex2f(-1.0f, -0.37f);
    glEnd();

glBegin(GL_LINES);//water line3
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(-0.85f, -0.5f);
	glEnd();

    glBegin(GL_LINES);//water line4
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.35f, -0.5f);
	glEnd();

    glBegin(GL_LINES);//water line5
	glColor3ub(141,206,242);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.75f, -0.5f);
	glEnd();

	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.55f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(0.25f, -0.7f);
	glEnd();


	glBegin(GL_LINES);//water line6
	glColor3ub(141,206,242);
	glVertex2f(0.8f, -0.7f);
	glVertex2f(1.0f, -0.7f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-1.0f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.1f, -0.9f);
	glEnd();

	glBegin(GL_LINES);//water line7
	glColor3ub(141,206,242);
	glVertex2f(0.4f, -0.9f);
	glVertex2f(0.7f, -0.9f);
	glEnd();

	//land font
            glBegin(GL_QUADS);
            glColor3ub(9,102,0);
            glVertex2f(-1.002f, -0.833f);
            glVertex2f(1.000f, -0.833f);
            glVertex2f(1.000f, -1.003f);
            glVertex2f(-1.002f, -1.003f);
            glEnd();


	 //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(0,153,153);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();


    //water bus -2

    glPushMatrix();
    glTranslatef(ship_position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.2f, -0.6f);

	 glEnd();

	 //cargo code start ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	glBegin(GL_QUADS);//cargo
	glColor3ub(47,136,220);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.05f,-0.4f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo2
	glColor3ub(225,46,49);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.35f,-0.3f);
	glVertex2f(-0.35f,-0.4f);
	glVertex2f(-0.05f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo3
	glColor3ub(241,128,6);
	glVertex2f(0.21f,-0.17f);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(0.21f,-0.3f);
	glEnd();

	glBegin(GL_QUADS);//cargo4
	glColor3ub(45,129,80);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.25f,-0.17f);
	glVertex2f(-0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glEnd();

	glBegin(GL_POLYGON); //boat
	glColor3ub(47,47,79);
	glVertex2f(-0.15f,-0.4f);
	glVertex2f(-0.2f,-0.35f);
	glVertex2f(-0.5f,-0.35f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(0.6f,-0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(228,48,51);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.33f,-0.58f);
	glVertex2f(0.42f,-0.58f);
	glEnd();

	glBegin(GL_QUADS); //boat
	glColor3ub(237,236,241);
	glVertex2f(0.55f,-0.4f);
	glVertex2f(0.55f,-0.3f);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(237,236,241);
	glVertex2f(0.46f,-0.3f);
	glVertex2f(0.46f,-0.21f);
	glVertex2f(0.25f,-0.21f);
	glVertex2f(0.25f,-0.3f);
	glEnd();


	glBegin(GL_QUADS); //boat window
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.33f);
	glVertex2f(0.25f,-0.33f);
	glVertex2f(0.25f,-0.35f);
	glVertex2f(0.4f,-0.35f);
	glEnd();


	glBegin(GL_QUADS); //boat window2
	glColor3ub(0,51,0);
	glVertex2f(0.4f,-0.26f);
	glVertex2f(0.25f,-0.26f);
	glVertex2f(0.25f,-0.28f);
	glVertex2f(0.4f,-0.28f);
	glEnd();


	glBegin(GL_QUADS); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.375f,-0.21f);
	glVertex2f(0.375f,0.25f);
	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,-0.21f);
	glEnd();/**<  */

    glBegin(GL_POLYGON); //crain
	glColor3ub(227,47,46);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.3f,0.15f);
	glVertex2f(-0.05f,0.15f);
	glVertex2f(-0.15f,0.125f);
	glVertex2f(-0.15f,0.1f);
	glEnd();
	glBegin(GL_QUADS);//Crain chain
	glColor3ub(51,0,0);
	glVertex2f(-0.051f,0.1f);
	glVertex2f(-0.058f,0.1f);
	glVertex2f(-0.058f,0.0f);
	glVertex2f(-0.051f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain2
	glColor3ub(51,0,0);
	glVertex2f(-0.025f,0.1f);
	glVertex2f(-0.033f,0.1f);
	glVertex2f(-0.033f,0.0f);
	glVertex2f(-0.025f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain3
	glColor3ub(51,0,0);
	glVertex2f(0.3f,0.24f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.03f,0.15f);
	glVertex2f(0.3f,0.23f);

    glEnd();

    glBegin(GL_QUADS);//crain cargo box
	glColor3ub(47,135,215);
	glVertex2f(0.05f,0.01f);
	glVertex2f(-0.15f,0.01f);
	glVertex2f(-0.15f,-0.1f);
	glVertex2f(0.05f,-0.1f);


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //bus part-1
//water bus 2 code
		 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.65f, -0.6f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.25f, -0.6f);

	 glEnd();
	 //window part-1
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.59f, -0.52f);
	glVertex2f(-0.53f, -0.52f);
	glVertex2f(-0.53f, -0.57f);
	glVertex2f(-0.59f, -0.57f);

	 glEnd();
	 //window part-2
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.5f, -0.52f);
	glVertex2f(-0.44f, -0.52f);
	glVertex2f(-0.44f, -0.57f);
	glVertex2f(-0.5f, -0.57f);

	 glEnd();
//window part -3

	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.41f, -0.52f);
	glVertex2f(-0.35f, -0.52f);
	glVertex2f(-0.35f, -0.57f);
	glVertex2f(-0.41f, -0.57f);

    glEnd();

    //window part -4

    glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.32f, -0.52f);
	glVertex2f(-0.26f, -0.52f);
	glVertex2f(-0.26f, -0.57f);
	glVertex2f(-0.32f, -0.57f);

    glEnd();


    glPopMatrix();



    glPushMatrix();
    glLineWidth(2);
    glTranslatef( 0.0f,rain_position2, 0.0f);

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.3f, 0.9f);

    glVertex2f(0.32f, 0.8f);

    glEnd();
    //rain-2
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.3f, 0.5f);

    glVertex2f(-0.28f, 0.4f);

    glEnd();
    //rain-3
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.5f, 0.4f);

    glVertex2f(0.52f, 0.3f);

    glEnd();

    //rain-4
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.8f, -0.3f);

    glVertex2f(-0.78f, -0.4f);

    glEnd();

    //rain-5
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.1f, -0.6f);

    glVertex2f(-0.08f, -0.7f);

    glEnd();
    //rain-6
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.5f, -0.4f);

    glVertex2f(0.52f, -0.5f);

    glEnd();
    //rain-7
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.3f, -0.8f);

    glVertex2f(0.32f, -0.9f);

    glEnd();

    //rain-8
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.2f, 0.4f);

    glVertex2f(-0.18f, 0.3f);

    glEnd();
    //rain-9
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.8f, 0.5f);

    glVertex2f(0.82f, 0.4f);

    glEnd();
    //rain-10
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.7f, -0.5f);

    glVertex2f(0.72f, -0.6f);

    glEnd();
    //rain-11
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.8f, 0.8f);

    glVertex2f(-0.78f, 0.7f);

    glEnd();
    //rain-12
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.0f, -0.2f);

    glVertex2f(0.02, -0.3f);

    glEnd();
    //rain-13
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.8f, 0.5f);

    glVertex2f(0.82f, 0.4f);

    glEnd();
    //rain-14
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.0f, -0.8f);

    glVertex2f(0.02f, -0.9f);

    glEnd();
    //rain-15
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.5f, -0.5f);

    glVertex2f(-0.48f, -0.6f);

    glEnd();
    //rain-16
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.7f, 0.0f);

    glVertex2f(0.72f, -0.1f);

    glEnd();
    //rain-17
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.9f, -0.9f);

    glVertex2f(0.92f, -1.0f);

    glEnd();
    //rain-18
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.9f, 1.0f);

    glVertex2f(0.92f, 0.9f);

    glEnd();
    //rain-19
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.95f, 0.8f);

    glVertex2f(0.97f, 0.7f);

    glEnd();
    //rain-20
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.75f, 0.9f);

    glVertex2f(0.77f, 0.8f);

    glEnd();
    //rain-21
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, 1.0f);

    glVertex2f(-0.98f, 0.9f);

    glEnd();
    //rain-22
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.9f, 0.8f);

    glVertex2f(-0.88f, 0.7f);

    glEnd();
    //rain-23
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.75f, 0.1f);

    glVertex2f(-0.73f, 0.0f);

    glEnd();
    //rain-24
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.95f, -0.8f);

    glVertex2f(0.97f, -0.9f);

    glEnd();
    //rain-25
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.92f, -0.6f);

    glVertex2f(0.94f, -0.7f);

    glEnd();
    //rain-26
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.88f, -0.4f);

    glVertex2f(0.9f, -0.5f);

    glEnd();
    //rain-27
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.02f, 0.1f);

    glVertex2f(0.0f, 0.0f);

    glEnd();
    //rain-28
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.2f);

    glVertex2f(-0.98f, -0.3f);

    glEnd();
    //rain-29
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(0.4f, -0.3f);

    glVertex2f(0.42f, -0.4f);

    glEnd();
    //rain-30
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);

    glVertex2f(-1.0f, -0.9f);

    glVertex2f(-0.98f, -1.0f);

    glEnd();
    glPopMatrix();

    glLoadIdentity();
    glFlush();

}
void soundd()
{

    PlaySound("2.Wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}



//night view
void KualaLumpurNight() {

    GLfloat x, y;
    int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //display

    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2f(-1.0f,-1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(1.0f,-1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(1.0f,1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(-1.0f,1.0f);
    glEnd();

     //star
    glPointSize(1.0);
    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.7f);
	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.3f, 0.95f);
	glVertex2f(-0.1f, 0.8f);
	glVertex2f(0.8f, 0.6f);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.6f, 0.7f);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.3f, 0.95f);
	glVertex2f(0.1f, 0.8f);

	glEnd();

     //moon
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(224,224,224);
        x=.7f; y=.75f; radius =.05f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


    //grass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 25);
    glVertex2f(-1.0f,-0.3f);
    glColor3ub(0, 51, 25);
    glVertex2f(1.0f,-0.3f);
    glColor3ub(0, 96, 0);
    glVertex2f(1.0f,0.1f);
    glColor3ub(0, 96, 0);
    glVertex2f(-1.0f,0.1f);
    glEnd();

    //BUILDING CODE -START

     //middle1


glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(95,158,160);
	glVertex2f(-0.2f,-0.23f);
	glVertex2f(-0.2f,0.50f);
	glVertex2f(-0.05f,0.50f);
	glVertex2f(-0.05f,-0.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.19f,.50f);
	glVertex2f(-0.19f,.65f);
	glVertex2f(-0.06f,.65f);
	glVertex2f(-0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.18f,.65f);
	glVertex2f(-0.18f,.75f);
	glVertex2f(-0.07f,.75f);
	glVertex2f(-0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.16f,.75f);
	glVertex2f(-0.16f,.80f);
	glVertex2f(-0.09f,.80f);
	glVertex2f(-0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.13f,.80f);
	glVertex2f(-0.13f,.90f);
	glVertex2f(-0.12f,.90f);
	glVertex2f(-0.12f,.80f);
	glEnd();
	//windows
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.12f,.76f);
	glVertex2f(-0.12f,.79f);
	glVertex2f(-0.13f,.79f);
	glVertex2f(-0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.66f);
	glVertex2f(-0.12f,.74f);
	glVertex2f(-0.13f,.74f);
	glVertex2f(-0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.63f);
	glVertex2f(-0.12f,.58f);
	glVertex2f(-0.13f,.58f);
	glVertex2f(-0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.56f);
	glVertex2f(-0.12f,.51f);
	glVertex2f(-0.13f,.51f);
	glVertex2f(-0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.49f);
	glVertex2f(-0.12f,.41f);
	glVertex2f(-0.13f,.41f);
	glVertex2f(-0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.39f);
	glVertex2f(-0.12f,.31f);
	glVertex2f(-0.13f,.31f);
	glVertex2f(-0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-0.12f,.29f);
	glVertex2f(-0.12f,.21f);
	glVertex2f(-0.13f,.21f);
	glVertex2f(-0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.19f);
	glVertex2f(-0.12f,.11f);
	glVertex2f(-0.13f,.11f);
	glVertex2f(-0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.09f);
	glVertex2f(-0.12f,.01f);
	glVertex2f(-0.13f,.01f);
	glVertex2f(-0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,-.09f);
	glVertex2f(-0.12f,-.01f);
	glVertex2f(-0.13f,-.01f);
	glVertex2f(-0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,-.19f);
	glVertex2f(-0.12f,-.11f);
	glVertex2f(-0.13f,-.11f);
	glVertex2f(-0.13f,-.19f);
	glEnd();

//building 2
    glBegin(GL_QUADS);
	glColor3ub(95,158,160 );
	glVertex2f(0.2f,-.23f);
	glVertex2f(0.2f,.50f);
	glVertex2f(0.05f,.50f);
	glVertex2f(0.05f,-.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.19f,.50f);
	glVertex2f(0.19f,.65f);
	glVertex2f(0.06f,.65f);
	glVertex2f(0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.18f,.65f);
	glVertex2f(0.18f,.75f);
	glVertex2f(0.07f,.75f);
	glVertex2f(0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.16f,.75f);
	glVertex2f(0.16f,.80f);
	glVertex2f(0.09f,.80f);
	glVertex2f(0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.13f,.80f);
	glVertex2f(0.13f,.90f);
	glVertex2f(0.12f,.90f);
	glVertex2f(0.12f,.80f);
	glEnd();
    //window building2
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.12f,.76f);
	glVertex2f(0.12f,.79f);
	glVertex2f(0.13f,.79f);
	glVertex2f(0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.66f);
	glVertex2f(0.12f,.74f);
	glVertex2f(0.13f,.74f);
	glVertex2f(0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.63f);
	glVertex2f(0.12f,.58f);
	glVertex2f(0.13f,.58f);
	glVertex2f(0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.56f);
	glVertex2f(0.12f,.51f);
	glVertex2f(0.13f,.51f);
	glVertex2f(0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.49f);
	glVertex2f(0.12f,.41f);
	glVertex2f(0.13f,.41f);
	glVertex2f(0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.39f);
	glVertex2f(0.12f,.31f);
	glVertex2f(0.13f,.31f);
	glVertex2f(0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(0.12f,.29f);
	glVertex2f(0.12f,.21f);
	glVertex2f(0.13f,.21f);
	glVertex2f(0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.19f);
	glVertex2f(0.12f,.11f);
	glVertex2f(0.13f,.11f);
	glVertex2f(0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.09f);
	glVertex2f(0.12f,.01f);
	glVertex2f(0.13f,.01f);
	glVertex2f(0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,-.09f);
	glVertex2f(0.12f,-.01f);
	glVertex2f(0.13f,-.01f);
	glVertex2f(0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,-.19f);
	glVertex2f(0.12f,-.11f);
	glVertex2f(0.13f,-.11f);
	glVertex2f(0.13f,-.19f);
	glEnd();

	//join
    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.32f);
	glVertex2f(-0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.26f);
	glVertex2f(-0.05f,.26f);
	glEnd();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//side building:
//left-1

    glBegin(GL_QUADS);
	glColor3ub(0,51 ,102 );

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

//window

	//window-1
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, 0.07f);
	glVertex2f(-0.37f, 0.07f);
	glVertex2f(-0.37f, 0.13f);
	glVertex2f(-0.32f, 0.13f);

	glEnd();
	//window-2

	glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, 0.07f);
	glVertex2f(-0.48f, 0.07f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, 0.02f);
	glVertex2f(-0.37f, 0.02f);
	glVertex2f(-0.37f, -0.04f);
	glVertex2f(-0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, 0.02f);
	glVertex2f(-0.48f, 0.02f);
	glVertex2f(-0.48f, -0.04f);
	glVertex2f(-0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, -0.09f);
	glVertex2f(-0.37f, -0.09f);
	glVertex2f(-0.37f, -0.15f);
	glVertex2f(-0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.48f, -0.09f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.43f, -0.15f);

	 glEnd();


	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.07f);
	glVertex2f(-0.403f, 0.07f);
	glVertex2f(-0.403f, 0.13f);
	glVertex2f(-0.395f, 0.13f);

	 glEnd();
	 //b-3


	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, -0.09f);
	glVertex2f(-0.403f, -0.09f);
	glVertex2f(-0.403f, -0.15f);
	glVertex2f(-0.395f, -0.15f);

	 glEnd();

	 //b-6

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.02f);
	glVertex2f(-0.403f, 0.02f);
	glVertex2f(-0.403f, -0.04f);
	glVertex2f(-0.395f, -0.04f);

	 glEnd();

	 // side  building
	 //left -2
	 glBegin(GL_QUADS);
	glColor3ub(153,76 ,0 );

	glVertex2f(-0.55f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.33f);
	glVertex2f(-0.55f, 0.33f);

	 glEnd();
	 //window:1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.57f, 0.0f);
	glVertex2f(-0.57f, -0.15f);
	glVertex2f(-0.73f, -0.15f);
	glVertex2f(-0.73f, 0.0f);

	 glEnd();

	 //window-2

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.57f, 0.1f);
	glVertex2f(-0.57f, 0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f, 0.1f);

	 glEnd();

	 //window-4

	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.05f);
	glVertex2f(-0.57f, 0.03f);
	glVertex2f(-0.73f, 0.03f);
	glVertex2f(-0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.29f);
	glVertex2f(-0.57f, 0.31f);
	glVertex2f(-0.73f, 0.31f);
	glVertex2f(-0.73f, 0.29f);

	 glEnd();
	 //left building :3
    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.82f, 0.45f);
	glVertex2f(-0.93f, 0.45f);
	glVertex2f(-0.93f, 0.5f);
	glVertex2f(-0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.83f, 0.5f);
	glVertex2f(-0.92f, 0.5f);
	glVertex2f(-0.92f, 0.6f);
	glVertex2f(-0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.83f, 0.46f);
	glVertex2f(-0.92f, 0.46f);
	glVertex2f(-0.92f, 0.48f);
	glVertex2f(-0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.85f, 0.52f);
	glVertex2f(-0.9f, 0.52f);
	glVertex2f(-0.9f, 0.58f);
	glVertex2f(-0.85f, 0.58f);

	 glEnd();


	 //window-1
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.18f);
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.93f, -0.11f);
	glVertex2f(-0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.05f);
	glVertex2f(-0.93f, -0.05f);
	glVertex2f(-0.93f, 0.02f);
	glVertex2f(-0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.08f);
	glVertex2f(-0.93f, 0.08f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
	glVertex2f(-0.93f, 0.29f);
	glVertex2f(-0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.35f);
	glVertex2f(-0.93f, 0.35f);
	glVertex2f(-0.93f, 0.42f);
	glVertex2f(-0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.09f);
	glVertex2f(-0.93f, -0.09f);
	glVertex2f(-0.93f, -0.07f);
	glVertex2f(-0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.04f);
	glVertex2f(-0.93f, 0.04f);
	glVertex2f(-0.93f, 0.06f);
	glVertex2f(-0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.17f);
	glVertex2f(-0.93f, 0.17f);
	glVertex2f(-0.93f, 0.19f);
	glVertex2f(-0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.31f);
	glVertex2f(-0.93f, 0.31f);
	glVertex2f(-0.93f, 0.33f);
	glVertex2f(-0.82f, 0.33f);

	 glEnd();




	 //Right building:1
	 glBegin(GL_QUADS);
	glColor3ub(0,102,102);

	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	 glEnd();


	 //WINDOW -1
	  glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.32f, 0.07f);
	glVertex2f(0.37f, 0.07f);
	glVertex2f(0.37f, 0.13f);
	glVertex2f(0.32f, 0.13f);

	glEnd();
	//window-2
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, 0.07f);
	glVertex2f(0.48f, 0.07f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.43f, 0.13f);

	glEnd();
	//window-3

	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, 0.02f);
	glVertex2f(0.48f, 0.02f);
	glVertex2f(0.48f, -0.04f);
	glVertex2f(0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.32f, -0.09f);
	glVertex2f(0.37f, -0.09f);
	glVertex2f(0.37f, -0.15f);
	glVertex2f(0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, -0.09f);
	glVertex2f(0.48f, -0.09f);
	glVertex2f(0.48f, -0.15f);
	glVertex2f(0.43f, -0.15f);

	 glEnd();
//BORDER
//border-1
glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, 0.07f);
	glVertex2f(0.403f, 0.07f);
	glVertex2f(0.403f, 0.13f);
	glVertex2f(0.395f, 0.13f);

	 glEnd();
	 //b-2

	 glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, -0.09f);
	glVertex2f(0.403f, -0.09f);
	glVertex2f(0.403f, -0.15f);
	glVertex2f(0.395f, -0.15f);

	 glEnd();

	 //b-3

	 glBegin(GL_QUADS);
	glColor3ub(255,102,178 );

	glVertex2f(0.395f, 0.02f);
	glVertex2f(0.403f, 0.02f);
	glVertex2f(0.403f, -0.04f);
	glVertex2f(0.395f, -0.04f);

	 glEnd();
	  //right Building:2

	 glBegin(GL_QUADS);
	glColor3ub(76,0,153);

	glVertex2f(0.55f, -0.2f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, 0.33f);
	glVertex2f(0.55f, 0.33f);

	 glEnd();

	 //WINDOW-1

    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.57f, 0.0f);
	glVertex2f(0.57f, -0.15f);
	glVertex2f(0.73f, -0.15f);
	glVertex2f(0.73f, 0.0f);

	 glEnd();

	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f, 0.1f);

	 glEnd();

	 //left border :
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.05f);
	glVertex2f(0.57f, 0.03f);
	glVertex2f(0.73f, 0.03f);
	glVertex2f(0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.29f);
	glVertex2f(0.57f, 0.31f);
	glVertex2f(0.73f, 0.31f);
	glVertex2f(0.73f, 0.29f);

	 glEnd();
	  //right building:3

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.82f, 0.45f);
	glVertex2f(0.93f, 0.45f);
	glVertex2f(0.93f, 0.5f);
	glVertex2f(0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.83f, 0.5f);
	glVertex2f(0.92f, 0.5f);
	glVertex2f(0.92f, 0.6f);
	glVertex2f(0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.83f, 0.46f);
	glVertex2f(0.92f, 0.46f);
	glVertex2f(0.92f, 0.48f);
	glVertex2f(0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.9f, 0.52f);
	glVertex2f(0.9f, 0.58f);
	glVertex2f(0.85f, 0.58f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();


	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, -0.18f);
	glVertex2f(0.93f, -0.18f);
	glVertex2f(0.93f, -0.11f);
	glVertex2f(0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, -0.05f);
	glVertex2f(0.93f, -0.05f);
	glVertex2f(0.93f, 0.02f);
	glVertex2f(0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.93f, 0.08f);
	glVertex2f(0.93f, 0.15f);
	glVertex2f(0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.22f);
	glVertex2f(0.93f, 0.22f);
	glVertex2f(0.93f, 0.29f);
	glVertex2f(0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.35f);
	glVertex2f(0.93f, 0.35f);
	glVertex2f(0.93f, 0.42f);
	glVertex2f(0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, -0.09f);
	glVertex2f(0.93f, -0.09f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.93f, 0.04f);
	glVertex2f(0.93f, 0.06f);
	glVertex2f(0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.17f);
	glVertex2f(0.93f, 0.17f);
	glVertex2f(0.93f, 0.19f);
	glVertex2f(0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.31f);
	glVertex2f(0.93f, 0.31f);
	glVertex2f(0.93f, 0.33f);
	glVertex2f(0.82f, 0.33f);

	 glEnd();


	  //right tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.265f,-0.25f);
	glVertex2f(0.265f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.200f,-0.17f);
	glVertex2f(0.330f,-0.17f);
	glVertex2f(0.265f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.205f,-0.15f);
	glVertex2f(0.325f,-0.15f);
	glVertex2f(0.265f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.210f,-0.13f);
	glVertex2f(0.320f,-0.13f);
	glVertex2f(0.265f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.215f,-0.11f);
	glVertex2f(0.315f,-0.11f);
	glVertex2f(0.265f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.220f,-0.09f);
	glVertex2f(0.310f,-0.09f);
	glVertex2f(0.265f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.225f,-0.07f);
	glVertex2f(0.305f,-0.07f);
	glVertex2f(0.265f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.230f,-0.05f);
	glVertex2f(0.300f,-0.05f);
	glVertex2f(0.265f,0.0f);
	glEnd();

//right tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.525f,-0.25f);
	glVertex2f(0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.460f,-0.17f);
	glVertex2f(0.590f,-0.17f);
	glVertex2f(0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.465f,-0.15f);
	glVertex2f(0.585f,-0.15f);
	glVertex2f(0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.470f,-0.13f);
	glVertex2f(0.580f,-0.13f);
	glVertex2f(0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.475f,-0.11f);
	glVertex2f(0.575f,-0.11f);
	glVertex2f(0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.480f,-0.09f);
	glVertex2f(0.570f,-0.09f);
	glVertex2f(0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.485f,-0.07f);
	glVertex2f(0.565f,-0.07f);
	glVertex2f(0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.490f,-0.05f);
	glVertex2f(0.560f,-0.05f);
	glVertex2f(0.525f,0.0f);
	glEnd();

	//right tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.775f,-0.25f);
	glVertex2f(0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.710f,-0.17f);
	glVertex2f(0.840f,-0.17f);
	glVertex2f(0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.715f,-0.15f);
	glVertex2f(0.835f,-0.15f);
	glVertex2f(0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.720f,-0.13f);
	glVertex2f(0.830f,-0.13f);
	glVertex2f(0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.725f,-0.11f);
	glVertex2f(0.825f,-0.11f);
	glVertex2f(0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.730f,-0.09f);
	glVertex2f(0.820f,-0.09f);
	glVertex2f(0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.735f,-0.07f);
	glVertex2f(0.815f,-0.07f);
	glVertex2f(0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.740f,-0.05f);
	glVertex2f(0.810f,-0.05f);
	glVertex2f(0.775f,0.0f);
	glEnd();

	//left tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.255f,-0.25f);
	glVertex2f(-0.255f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.190f,-0.17f);
	glVertex2f(-0.320f,-0.17f);
	glVertex2f(-0.255f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.195f,-0.15f);
	glVertex2f(-0.315f,-0.15f);
	glVertex2f(-0.255f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.200f,-0.13f);
	glVertex2f(-0.310f,-0.13f);
	glVertex2f(-0.255f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.205f,-0.11f);
	glVertex2f(-0.305f,-0.11f);
	glVertex2f(-0.255f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.210f,-0.09f);
	glVertex2f(-0.300f,-0.09f);
	glVertex2f(-0.255f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.215f,-0.07f);
	glVertex2f(-0.295f,-0.07f);
	glVertex2f(-0.255f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.220f,-0.05f);
	glVertex2f(-0.290f,-0.05f);
	glVertex2f(-0.255f,0.0f);
	glEnd();

	//left tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.525f,-0.25f);
	glVertex2f(-0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.460f,-0.17f);
	glVertex2f(-0.590f,-0.17f);
	glVertex2f(-0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.465f,-0.15f);
	glVertex2f(-0.585f,-0.15f);
	glVertex2f(-0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.470f,-0.13f);
	glVertex2f(-0.580f,-0.13f);
	glVertex2f(-0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.475f,-0.11f);
	glVertex2f(-0.575f,-0.11f);
	glVertex2f(-0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.480f,-0.09f);
	glVertex2f(-0.570f,-0.09f);
	glVertex2f(-0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.485f,-0.07f);
	glVertex2f(-0.565f,-0.07f);
	glVertex2f(-0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.490f,-0.05f);
	glVertex2f(-0.560f,-0.05f);
	glVertex2f(-0.525f,0.0f);
	glEnd();

	//left tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.775f,-0.25f);
	glVertex2f(-0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.710f,-0.17f);
	glVertex2f(-0.840f,-0.17f);
	glVertex2f(-0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.715f,-0.15f);
	glVertex2f(-0.835f,-0.15f);
	glVertex2f(-0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.720f,-0.13f);
	glVertex2f(-0.830f,-0.13f);
	glVertex2f(-0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.725f,-0.11f);
	glVertex2f(-0.825f,-0.11f);
	glVertex2f(-0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.730f,-0.09f);
	glVertex2f(-0.820f,-0.09f);
	glVertex2f(-0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.815f,-0.07f);
	glVertex2f(-0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.740f,-0.05f);
	glVertex2f(-0.810f,-0.05f);
	glVertex2f(-0.775f,0.0f);
	glEnd();


    //wall
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glColor3ub(96, 96, 96);
	glVertex2f(0.97f, -0.33f);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.73f, -0.33f);
	glVertex2f(0.61f, -0.33f);
    glVertex2f(0.49f, -0.33f);
	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.25f, -0.33f);
	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.01f, -0.33f);
	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.23f, -0.33f);
	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.47f, -0.33f);
	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.71f, -0.33f);
	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.95f, -0.33f);
	glVertex2f(-0.98f, -0.33f);

	glVertex2f(0.91f, -0.33f);
    glVertex2f(0.79f, -0.33f);
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.55f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.31f, -0.33f);
    glVertex2f(0.19f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.17f, -0.33f);
    glVertex2f(-0.29f, -0.33f);
    glVertex2f(-0.41f, -0.33f);
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.89f, -0.33f);
	glEnd();

	//lamp stand

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.85f, -0.2f);

	glVertex2f(0.61f, -0.33f);
	glVertex2f(0.61f, -0.2f);

	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.37f, -0.2f);

	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.13f, -0.2f);

	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.11f, -0.2f);

	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.35f, -0.2f);

	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.59f, -0.2f);

	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.83f, -0.2f);

	glEnd();

    // lamp horizontal
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);

	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.87f, -0.2f);

	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);

	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);

	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);

	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);

	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);

	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);

	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);

	glEnd();

	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(0.83f, -0.2f); //left bottom
	glVertex2f(0.87f, -0.2f); //right bottom
	glVertex2f(0.89f, -0.15f); //right middle
	glVertex2f(0.87f, -0.1f);  //right top
	glVertex2f(0.83f, -0.1f);  //left top
	glVertex2f(0.81f, -0.15f); //left middle
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.63f, -0.1f);
	glVertex2f(0.59f, -0.1f);
	glVertex2f(0.57f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 255, 255);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);
	glVertex2f(0.41f, -0.15f);
	glVertex2f(0.39f, -0.1f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.33f, -0.15f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(127, 0, 255);
	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.17f, -0.15f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.09f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 255, 0);
	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);
	glVertex2f(-0.07f, -0.15f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 127);
	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);
	glVertex2f(-0.31f, -0.15f);
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.37f, -0.1f);
	glVertex2f(-0.39f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 128, 0);
	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);
	glVertex2f(-0.55f, -0.15f);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.63f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 255);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);
	glVertex2f(-0.79f, -0.15f);
	glVertex2f(-0.81f, -0.1f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.87f, -0.15f);
	glEnd();


    //river
	glBegin(GL_QUADS);
	glColor3ub(0, 135, 210);
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(0, 135, 210);
    glVertex2f(1.0f, -1.0f);
    glColor3ub(130, 160, 180);
    glVertex2f(1.0f, -0.37f);
	glVertex2f(-1.0f, -0.37f);
    glEnd();
	//land font
            glBegin(GL_QUADS);
            glColor3ub(10,72,4);
            glVertex2f(-1.002f, -0.833f);
            glVertex2f(1.000f, -0.833f);
            glVertex2f(1.000f, -1.003f);
            glVertex2f(-1.002f, -1.003f);
            glEnd();
    //SHIP

	 //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();



    //water bus -2

    glPushMatrix();
    glTranslatef(ship_position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.2f, -0.6f);

	 glEnd();

	 //cargo code start ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	glBegin(GL_QUADS);//cargo
	glColor3ub(34,95,152);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.05f,-0.4f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo2
	glColor3ub(164,28,30);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.35f,-0.3f);
	glVertex2f(-0.35f,-0.4f);
	glVertex2f(-0.05f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);//cargo3
	glColor3ub(158,88,13);
	glVertex2f(0.21f,-0.17f);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(0.21f,-0.3f);
	glEnd();

	glBegin(GL_QUADS);//cargo4
	glColor3ub(30,99,59);
	glVertex2f(-0.05f,-0.17f);
	glVertex2f(-0.25f,-0.17f);
	glVertex2f(-0.25f,-0.3f);
	glVertex2f(-0.05f,-0.3f);
	glEnd();

	glBegin(GL_POLYGON); //boat
	glColor3ub(25,25,54);
	glVertex2f(-0.15f,-0.4f);
	glVertex2f(-0.2f,-0.35f);
	glVertex2f(-0.5f,-0.35f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(0.6f,-0.4f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(228,48,51);
	glVertex2f(0.45f,-0.55f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.33f,-0.58f);
	glVertex2f(0.42f,-0.58f);
	glEnd();

	glBegin(GL_QUADS); //boat
	glColor3ub(174,169,195);
	glVertex2f(0.55f,-0.4f);
	glVertex2f(0.55f,-0.3f);
	glVertex2f(0.25f,-0.3f);
	glVertex2f(0.25f,-0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(174,169,195);
	glVertex2f(0.46f,-0.3f);
	glVertex2f(0.46f,-0.21f);
	glVertex2f(0.25f,-0.21f);
	glVertex2f(0.25f,-0.3f);
	glEnd();


	glBegin(GL_QUADS); //boat window
	glColor3ub(234,255,0);
	glVertex2f(0.4f,-0.33f);
	glVertex2f(0.25f,-0.33f);
	glVertex2f(0.25f,-0.35f);
	glVertex2f(0.4f,-0.35f);
	glEnd();


	glBegin(GL_QUADS); //boat window2
	glColor3ub(234,255,0);
	glVertex2f(0.4f,-0.26f);
	glVertex2f(0.25f,-0.26f);
	glVertex2f(0.25f,-0.28f);
	glVertex2f(0.4f,-0.28f);
	glEnd();


	glBegin(GL_QUADS); //crain
	glColor3ub(164,28,30);
	glVertex2f(0.375f,-0.21f);
	glVertex2f(0.375f,0.25f);
	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,-0.21f);
	glEnd();

    glBegin(GL_POLYGON); //crain
	glColor3ub(164,28,30);
	glVertex2f(0.3f,0.1f);
	glVertex2f(0.3f,0.15f);
	glVertex2f(-0.05f,0.15f);
	glVertex2f(-0.15f,0.125f);
	glVertex2f(-0.15f,0.1f);
	glEnd();
	glBegin(GL_QUADS);//Crain chain
	glColor3ub(51,0,0);
	glVertex2f(-0.051f,0.1f);
	glVertex2f(-0.058f,0.1f);
	glVertex2f(-0.058f,0.0f);
	glVertex2f(-0.051f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain2
	glColor3ub(51,0,0);
	glVertex2f(-0.025f,0.1f);
	glVertex2f(-0.033f,0.1f);
	glVertex2f(-0.033f,0.0f);
	glVertex2f(-0.025f,0.0f);

    glEnd();

    glBegin(GL_QUADS);//crain chain3
	glColor3ub(51,0,0);
	glVertex2f(0.3f,0.24f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.03f,0.15f);
	glVertex2f(0.3f,0.23f);

    glEnd();

    glBegin(GL_QUADS);//crain cargo box
	glColor3ub(47,135,215);
	glVertex2f(0.05f,0.01f);
	glVertex2f(-0.15f,0.01f);
	glVertex2f(-0.15f,-0.1f);
	glVertex2f(0.05f,-0.1f);

    glEnd();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 //bus part-1
	// water bus 2 code
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.65f, -0.6f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.25f, -0.6f);

	 glEnd();
	 //window part-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.59f, -0.52f);
	glVertex2f(-0.53f, -0.52f);
	glVertex2f(-0.53f, -0.57f);
	glVertex2f(-0.59f, -0.57f);

	 glEnd();
	 //window part-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.5f, -0.52f);
	glVertex2f(-0.44f, -0.52f);
	glVertex2f(-0.44f, -0.57f);
	glVertex2f(-0.5f, -0.57f);

	 glEnd();
//window part -3

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);
	glVertex2f(-0.41f, -0.52f);
	glVertex2f(-0.35f, -0.52f);
	glVertex2f(-0.35f, -0.57f);
	glVertex2f(-0.41f, -0.57f);
	 glEnd();

//window part -4

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, -0.52f);
	glVertex2f(-0.26f, -0.52f);
	glVertex2f(-0.26f, -0.57f);
	glVertex2f(-0.32f, -0.57f);

	 glEnd();
	 //bus part-2

    glPopMatrix();



    glFlush();

}
void sounddd()
{

    PlaySound("night.Wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}


//cloud
void cloud_update1(int value) {

    if(cloud_position1 >2)
        cloud_position1 = -1.2f;

    cloud_position1 += cloud_speed;

	glutPostRedisplay();

	glutTimerFunc(100, cloud_update1, 0);
}

//ship2
void ship_update2(int value) {

    if(ship_position2 >1.0)
        ship_position2 = -2.0f;

    ship_position2 += ship_speed2;

	glutPostRedisplay();

	glutTimerFunc(100, ship_update2, 0);
}


void ship_update3(int value) {

    if(ship_position3 <-1.0f)
        ship_position3 = 1.7f;

    ship_position3 -= ship_speed3;

	glutPostRedisplay();

	glutTimerFunc(100, ship_update3, 0);
}

void rain_update4(int value) {

    if(rain_position2 <-1.0f)
        rain_position2 = 1.7f;

    rain_position2 -= rain_speed2;

	glutPostRedisplay();

	glutTimerFunc(100, rain_update4, 0);
}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {
        case 'd':
        glutDisplayFunc(KualaLumpur);
        sound();
        glutPostRedisplay();
        break;

        case 'r':
        glutDisplayFunc(KualaLumpurrainView);
        soundd();
        glutPostRedisplay();
        break;

        case 'n':
        glutDisplayFunc(KualaLumpurNight);
         sounddd();
        glutPostRedisplay();
        break;


    }
    glutPostRedisplay();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1000, 800);
	glutCreateWindow("KualaLumpurrainView");
	glutDisplayFunc(KualaLumpur);

	glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, cloud_update1, 0);
	glutTimerFunc(100, ship_update2, 0);
    glutTimerFunc(100, ship_update3, 0);
    glutTimerFunc(100, rain_update4, 0);
    sndPlaySound("bird.wav",SND_ASYNC);

	glutMainLoop();
	return 0;
}
