#pragma once
#ifndef __START_SCENE__
#define __START_SCENE__

#include "Scene.h"
#include "Label.h"
#include "ship.h"

class StartScene : public Scene
{
public:
	StartScene();
	~StartScene();

	// Inherited via Scene
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:

	glm::vec2 m_mousePosition;
	/*Label* m_pStartLabel;
	Label* m_pInstructionsLabel;*/
	// ImGui utility functions


	void m_ImGuiKeyMap();
	void m_ImGuiSetStyle();
	void m_updateUI();

	// ImGui menu variables
	bool m_exitApp = false;
	bool m_displayAbout = false;
	bool m_displayUI = true;
	
	// Physics Variables
	float m_gravity = 9.8f;
	float m_PPM = 10.0f; // pixels per meter
	glm::vec2 m_velocity = glm::vec2(0.0f, 0.0f);
	glm::vec2 m_acceleration = glm::vec2(0.0f, 0.0f);
	glm::vec2 m_finalPosition = glm::vec2(0.0f, 0.0f);

	// Physics functions
	bool m_isGravityEnabled = false;
	float m_time = 0.016667f; // approximately 16 ms
	float m_Atime = 0.016667f; // accumulated time

	// Physics Functions
	void m_move();


	Ship* m_pShip;
};

#endif /* defined (__START_SCENE__) */