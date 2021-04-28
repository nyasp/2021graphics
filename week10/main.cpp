#include <GL/glut.h>
#include "CMP3_MCI.h"
CMP3_MCI mp3,s;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyb(unsigned char key,int x,int y)
{
    if(key=='1'){
        s.Load("do.wav");
        s.Play();
    }
    if(key=='2'){
        s.Load("re.wav");
        s.Play();
    }
    if(key=='3'){
        s.Load("mi.wav");
        s.Play();
    }
    if(key=='4'){
        s.Load("fa.wav");
        s.Play();
    }
    if(key=='5'){
        s.Load("so.wav");
        s.Play();
    }
}
void mos(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN) {
        s.Load("shot.wav");
        s.Play();
    }
}
int main(int argc,char **argv)
{
    mp3.Load("1.mp3");
    mp3.Play();
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week10");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyb);
    glutMouseFunc(mos);
    glutMainLoop();
}
