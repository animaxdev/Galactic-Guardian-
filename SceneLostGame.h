#pragma once
#include "SceneStateMachine.h"
#include "app\app.h"
#include <vector>

class SceneLostGame : public Scene
{
public:
    SceneLostGame(SceneStateMachine& sceneStateMachine);

    void SetSwitchToScene(unsigned int id);

    void Update(float deltaTime) override;
    void Draw() override;

private:
    SceneStateMachine& sceneStateMachine;
    unsigned int switchToState; 

    float currentSeconds; 
};

