#pragma once
#define GLEW_STATIC
#include<glew.h>
#include<iostream>
class ShaderProgram
{
public:
	GLuint p;
	GLuint v;
	GLuint f;
public:
	void SetShader(char*VSFile, char*FSFile);
private:
	void printShaderInfoLog(GLuint obj);			//shader���������Ϣ���
	void printProgramInfoLog(GLuint obj);			//shader�������Ӵ�����Ϣ���
	char *textFileRead(char *fn);
};