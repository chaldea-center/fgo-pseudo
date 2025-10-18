void SceneTemp___ctor(SceneTemp_o *this, System_String_o *sceneName, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C42917 & 1) == 0 )
  {
    sub_1C37058(&SceneList_TypeInfo);
    byte_4C42917 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sceneName = sceneName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)sceneName, v5, v6);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  this->fields.sceneType = SceneList__getSceneType(sceneName, 0);
}


void SceneTemp___ctor_41481692(SceneTemp_o *this, SceneRootComponent_o *comp, const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct System_String_o *SceneName; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x20

  if ( (byte_4C42918 & 1) == 0 )
  {
    sub_1C37058(&SceneList_TypeInfo);
    byte_4C42918 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !comp )
    sub_1C372B4(v5);
  SceneName = SceneRootComponent__getSceneName(comp, v6);
  this->fields.sceneName = SceneName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)SceneName, v8, v9);
  v10 = this->fields.sceneName;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  this->fields.sceneType = SceneList__getSceneType(v10, 0);
}


System_String_o *SceneTemp__getSceneName(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneName;
}


int32_t SceneTemp__getSceneType(SceneTemp_o *this, const MethodInfo *method)
{
  return this->fields.sceneType;
}