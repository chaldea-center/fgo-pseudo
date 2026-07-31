void SceneJumpInfo___ctor(SceneJumpInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SceneJumpInfo___ctor_48427084(SceneJumpInfo_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v5, v6, v7, v8, v9, v10);
}


void SceneJumpInfo___ctor_48427132(SceneJumpInfo_o *this, int32_t id, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = id;
}


void SceneJumpInfo___ctor_48427172(SceneJumpInfo_o *this, System_String_o *name, int32_t id, const MethodInfo *method)
{
  SceneJumpInfo_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.name = name;
  v6 = (SceneJumpInfo_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)name, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = id;
}


void SceneJumpInfo___ctor_48427232(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)name, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = id;
  HIDWORD(v8->monitor) = num;
}


void SceneJumpInfo___ctor_48427304(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int32_t id,
        int64_t userId,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)name, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = id;
  v8->fields.name = (struct System_String_o *)userId;
}


void SceneJumpInfo___ctor_48427380(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.name = name;
  v6 = (SceneJumpInfo_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)name, v7, v8, v9, v10, v11, v12);
  v6->fields.name = (struct System_String_o *)userId;
}


void SceneJumpInfo___ctor_48427440(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        int64_t userId2,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.name = name;
  v8 = (SceneJumpInfo_o *)((char *)v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)name, v9, v10, v11, v12, v13, v14);
  v8->fields.name = (struct System_String_o *)userId;
  *(_QWORD *)&v8->fields.id = userId2;
}


void SceneJumpInfo___ctor_48427512(
        SceneJumpInfo_o *this,
        System_String_o *name,
        int64_t userId,
        int32_t num,
        int64_t userId2,
        const MethodInfo *method)
{
  SceneJumpInfo_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.name = name;
  v10 = (SceneJumpInfo_o *)((char *)v10 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)name, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_5937FCD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937FCD = 1;
  }
  returnSceneName = this->fields.returnSceneName;
  if ( returnSceneName )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v5);
    AvalonSceneManager__transitionScene_48092832(
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.backSceneJumpInfo = back;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.backSceneJumpInfo,
    (int32_t)back,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SceneJumpInfo__SetId(SceneJumpInfo_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.id = id;
}


void SceneJumpInfo__SetName(SceneJumpInfo_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.name = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937FCC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937FCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0);
  this->fields.returnSceneName = NowSceneName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.returnSceneName,
    (int32_t)NowSceneName,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
void SceneJumpInfo__SetReturnScene(SceneJumpInfo_o *this, int32_t type, const MethodInfo *method)
{
  struct System_String_o *SceneName; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937FCB & 1) == 0 )
  {
    sub_21FFC50(&SceneList_TypeInfo);
    byte_5937FCB = 1;
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, *(_QWORD *)&type);
  SceneName = SceneList__getSceneName(type, 0);
  this->fields.returnSceneName = SceneName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.returnSceneName,
    (int32_t)SceneName,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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