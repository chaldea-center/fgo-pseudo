void RecommendSupportSelectRootComponent___ctor(RecommendSupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void RecommendSupportSelectRootComponent__OnDestroy(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D28620 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28620 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, v3);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void RecommendSupportSelectRootComponent____n__0(RecommendSupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_42245324((SceneRootComponent_o *)this, 0);
}


void RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2861F & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D2861F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0);
}


void RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2861D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2861D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void RecommendSupportSelectRootComponent__beginStartUp(
        RecommendSupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppClass *v20; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v22; // x10
  int32_t v23; // w1
  GrandQuestFolderBoardItem_o *v24; // x0
  System_Action_o *v25; // x19

  if ( (byte_4D2861E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&SceneJumpInfo_TypeInfo);
    sub_1C94098(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__);
    sub_1C94098(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
    byte_4D2861E = 1;
  }
  v5 = sub_1C942E4(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( data )
  {
    v20 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
        v22 = data;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
    }
    *(_QWORD *)(v5 + 16) = v22;
    v24 = (GrandQuestFolderBoardItem_o *)(v5 + 16);
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v20 )
        v23 = (int)data;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
    *(_QWORD *)(v5 + 16) = 0;
    v24 = (GrandQuestFolderBoardItem_o *)(v5 + 16);
  }
  sub_1C9403C(v24, v23, v14, v15, v16, v17, v18, v19);
  v25 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v25, 1, 0);
}


void RecommendSupportSelectRootComponent___c__DisplayClass1_0___ctor(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__0(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *_9__1; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D28621 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__);
    byte_4D28621 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v4, v5, v6, v7, v8, v9);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(_9__1, 2, 1, 0);
}


void RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__1(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_Action_o *_9__2; // x22
  RecommendSupportSelectControl_o *v7; // x21
  SceneJumpInfo_o *sceneJumpInfo; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D28622 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__);
    byte_4D28622 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v7 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !v7 )
    sub_1C942F0(Instance, v4);
  RecommendSupportSelectControl__Init(v7, sceneJumpInfo, _9__2, v5);
}


void RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, method);
  SceneRootComponent__beginStartUp_42245324(_4__this, 0);
}