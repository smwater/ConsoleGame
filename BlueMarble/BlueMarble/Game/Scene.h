#pragma once

#include "Type.h"

typedef struct tagScene {
	void (*Init)(void);		// 씬을 초기화 하는 함수
	void (*Update)(void);	// 업데이트
	void (*Render)(void);	// 렌더
	void (*Release)(void);	// 씬에서 사용한 자원을 정리
	void* Data;
} Scene;

typedef enum tagSceneType {
	SCENE_NULL,
	SCENE_TITLE = 1,
	SCENE_MAX
} EsceneType;

extern Scene g_Scene;

/// <summary>
/// 다음 씬으로 전환될 예정인가?
/// </summary>
/// <returns>다음 씬으로 전환될 예정이면 true, 아니면 false</returns>
bool Scene_IsSetNextScene(void);

/// <summary>
/// 다음 씬을 지정한다.
/// </summary>
/// <param name="scene">씬</param>
void Scene_SetNextScene(EsceneType scene);

/// <summary>
/// 씬 전환
/// </summary>
void Scene_Change(void);