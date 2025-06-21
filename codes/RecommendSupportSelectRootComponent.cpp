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

  if ( (byte_4B18511 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v2);
    byte_4B18511 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, v4);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall RecommendSupportSelectRootComponent____n__0(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_40656696((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B18510 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4B18510 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1850E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B1850E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppClass *v16; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v18; // x10
  int32_t v19; // w1
  CGThumbnailListItem_o *v20; // x0
  System_Action_o *v21; // x19

  if ( (byte_4B1850F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v5);
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, v6);
    sub_1BCAFF8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__, v7);
    sub_1BCAFF8(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo, v8);
    byte_4B1850F = 1;
  }
  v9 = sub_1BCB244(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  if ( data )
  {
    v16 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
        v18 = data;
      else
        v18 = 0LL;
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)(v9 + 16) = v18;
    v20 = (CGThumbnailListItem_o *)(v9 + 16);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v16 )
        v19 = (int)data;
      else
        v19 = 0;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    v19 = 0;
    *(_QWORD *)(v9 + 16) = 0LL;
    v20 = (CGThumbnailListItem_o *)(v9 + 16);
  }
  sub_1BCAF9C(v20, v19, v14, v15);
  v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v21, 1, 0LL);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B18512 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__, v4);
    byte_4B18512 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B18513 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1BCAFF8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__, v4);
    byte_4B18513 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    sub_1BCB254(Instance, v6);
  RecommendSupportSelectControl__Init(v9, sceneJumpInfo, _9__2, v7);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  SceneRootComponent__beginStartUp_40656696(_4__this, 0LL);
}