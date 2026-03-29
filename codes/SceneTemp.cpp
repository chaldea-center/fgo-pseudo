void SceneTemp___ctor(SceneTemp_o *this, System_String_o *sceneName, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D30366 & 1) == 0 )
  {
    sub_1C93AD4(&SceneList_TypeInfo);
    byte_4D30366 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sceneName = sceneName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)sceneName, v5, v6, v7, v8, v9, v10);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  this->fields.sceneType = SceneList__getSceneType(sceneName, 0);
}


void SceneTemp___ctor_42214168(SceneTemp_o *this, SceneRootComponent_o *comp, const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct System_String_o *SceneName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o *v14; // x20

  if ( (byte_4D30367 & 1) == 0 )
  {
    sub_1C93AD4(&SceneList_TypeInfo);
    byte_4D30367 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !comp )
    sub_1C93D2C(v5, v6);
  SceneName = SceneRootComponent__getSceneName(comp, v6);
  this->fields.sceneName = SceneName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)SceneName, v8, v9, v10, v11, v12, v13);
  v14 = this->fields.sceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  this->fields.sceneType = SceneList__getSceneType(v14, 0);
}


System_String_o *SceneTemp__getSceneName(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneName;
}


int32_t SceneTemp__getSceneType(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneType;
}