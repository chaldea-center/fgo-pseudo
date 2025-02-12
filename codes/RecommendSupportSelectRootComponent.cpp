void __fastcall RecommendSupportSelectRootComponent___ctor(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__OnDestroy(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BC3C6D & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v2);
    byte_4BC3C6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, v4);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall RecommendSupportSelectRootComponent____n__0(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39873964((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BC3C6C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4BC3C6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v3);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BC3C6A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BC3C6A = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginStartUp(
        RecommendSupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppClass *v24; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v26; // x10
  Il2CppObject *v27; // x1
  PartyOrganizationUtility_o *v28; // x0
  System_Action_o *v29; // x19

  if ( (byte_4BC3C6B & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, data);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v5);
    sub_1C1ABD4(&SceneJumpInfo_TypeInfo, v6);
    sub_1C1ABD4(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__, v7);
    sub_1C1ABD4(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo, v8);
    byte_4BC3C6B = 1;
  }
  v9 = sub_1C1AE20(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C1AE30(v10, v11);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  if ( data )
  {
    v24 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
        v26 = data;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    *(_QWORD *)(v9 + 16) = v26;
    v28 = (PartyOrganizationUtility_o *)(v9 + 16);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v24 )
        v27 = data;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
  }
  else
  {
    v27 = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    v28 = (PartyOrganizationUtility_o *)(v9 + 16);
  }
  sub_1C1AB78(v28, (int64_t)v27, v18, v19, v20, v21, v22, v23);
  v29 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v29, 1, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___ctor(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__0(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *_9__1; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC3C6E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__, v4);
    byte_4BC3C6E = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(_9__1, 2, 1, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__1(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_Action_o *_9__2; // x22
  RecommendSupportSelectControl_o *v9; // x21
  SceneJumpInfo_o *sceneJumpInfo; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BC3C6F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1C1ABD4(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__, v4);
    byte_4BC3C6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
    sub_1C1AE30(Instance, v6);
  RecommendSupportSelectControl__Init(v9, sceneJumpInfo, _9__2, v7);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
  SceneRootComponent__beginStartUp_39873964(_4__this, 0LL);
}