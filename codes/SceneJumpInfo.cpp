void SceneJumpInfo___ctor(SceneJumpInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SceneJumpInfo___ctor_41712980(SceneJumpInfo_o *this, System_String_o *name, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v5, v6);
}


void SceneJumpInfo___ctor_41713028(SceneJumpInfo_o *this, int32_t id, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = id;
}


void SceneJumpInfo___ctor_41713068(SceneJumpInfo_o *this, System_String_o *name, int32_t id, const MethodInfo *method)
{
  SceneJumpInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.name = name;
  v6 = (SceneJumpInfo_o *)((char *)v6 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  LODWORD(v6->monitor) = id;
}


void SceneJumpInfo___ctor_41713128(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v8, (int32_t)name, v9, v10);
  LODWORD(v8->monitor) = id;
  HIDWORD(v8->monitor) = num;
}


void SceneJumpInfo___ctor_41713200(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int32_t id,
        int64_t userId,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v8, (int32_t)name, v9, v10);
  LODWORD(v8->monitor) = id;
  v8->fields.name = (struct System_String_o *)userId;
}


void SceneJumpInfo___ctor_41713276(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.name = name;
  v6 = (SceneJumpInfo_o *)((char *)v6 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  v6->fields.name = (struct System_String_o *)userId;
}


void SceneJumpInfo___ctor_41713336(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        int64_t userId2,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v8, (int32_t)name, v9, v10);
  v8->fields.name = (struct System_String_o *)userId;
  *(_QWORD *)&v8->fields.id = userId2;
}


void SceneJumpInfo___ctor_41713408(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        int32_t num,
        int64_t userId2,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.name = name;
  v10 = (SceneJumpInfo_o *)((char *)v10 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v10, (int32_t)name, v11, v12);
  HIDWORD(v10->monitor) = num;
  v10->fields.name = (struct System_String_o *)userId;
  *(_QWORD *)&v10->fields.id = userId2;
}


bool SceneJumpInfo__IsEnableReturnScene(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.returnSceneName != 0;
}


bool SceneJumpInfo__ReturnScene(SceneJumpInfo_o *this, const MethodInfo *method)
{
  struct System_String_o *returnSceneName; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB5C17 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB5C17 = 1;
  }
  returnSceneName = this->fields.returnSceneName;
  if ( returnSceneName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v5);
    AvalonSceneManager__transitionScene_41393044(
      (AvalonSceneManager_o *)Instance,
      this->fields.returnSceneName,
      1,
      0,
      0);
  }
  return returnSceneName != 0;
}


void SceneJumpInfo__SetBackSceneJumpInfo(SceneJumpInfo_o *this, SceneJumpInfo_o *back, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.backSceneJumpInfo = back;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.backSceneJumpInfo, (int32_t)back, (int32_t)method, v3);
}


void SceneJumpInfo__SetId(SceneJumpInfo_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.id = id;
}


void SceneJumpInfo__SetName(SceneJumpInfo_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.name = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)name, (int32_t)method, v3);
}


void SceneJumpInfo__SetNum(SceneJumpInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.num = value;
}


void SceneJumpInfo__SetReturnNowScene(SceneJumpInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *NowSceneName; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB5C16 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB5C16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0);
  this->fields.returnSceneName = NowSceneName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.returnSceneName, (int32_t)NowSceneName, v6, v7);
}


void SceneJumpInfo__SetReturnScene(SceneJumpInfo_o *this, int32_t type, const MethodInfo *method)
{
  struct System_String_o *SceneName; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB5C15 & 1) == 0 )
  {
    sub_1C6BA08(&SceneList_TypeInfo);
    byte_4CB5C15 = 1;
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(type, 0);
  this->fields.returnSceneName = SceneName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.returnSceneName, (int32_t)SceneName, v6, v7);
}


void SceneJumpInfo__SetUserId(SceneJumpInfo_o *this, int64_t userId, const MethodInfo *method)
{
  this->fields.userId = userId;
}


void SceneJumpInfo__SetUserId2(SceneJumpInfo_o *this, int64_t userId2, const MethodInfo *method)
{
  this->fields.userId2 = userId2;
}


SceneJumpInfo_o *SceneJumpInfo__get_BackSceneJumpInfo(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.backSceneJumpInfo;
}


int32_t SceneJumpInfo__get_Id(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *SceneJumpInfo__get_Name(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t SceneJumpInfo__get_Num(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


System_String_o *SceneJumpInfo__get_ReturnSceneName(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.returnSceneName;
}


int64_t SceneJumpInfo__get_UserId(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int64_t SceneJumpInfo__get_UserId2(SceneJumpInfo_o *this, const MethodInfo *method)
{
  return this->fields.userId2;
}