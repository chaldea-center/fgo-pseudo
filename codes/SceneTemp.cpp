void SceneTemp___ctor(SceneTemp_o *this, System_String_o *sceneName, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1

  if ( (byte_5937FD5 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937FD5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sceneName = sceneName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)sceneName, v5, v6, v7, v8, v9, v10);
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v11);
  this->fields.sceneType = SceneList__getSceneType(sceneName, 0);
}


void SceneTemp___ctor_48429740(SceneTemp_o *this, SceneRootComponent_o *comp, const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct System_String_o *SceneName; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  System_String_o *v15; // x20

  if ( (byte_5937FD6 & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937FD6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !comp )
    sub_21FFECC(v5, v6);
  SceneName = SceneRootComponent__getSceneName(comp, v6);
  this->fields.sceneName = SceneName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)SceneName, v8, v9, v10, v11, v12, v13);
  v15 = this->fields.sceneName;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v14);
  this->fields.sceneType = SceneList__getSceneType(v15, 0);
}


System_String_o *SceneTemp__getSceneName(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneName;
}


int32_t SceneTemp__getSceneType(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneType;
}