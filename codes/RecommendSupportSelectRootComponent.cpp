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
  __int64 v4; // x1

  if ( (byte_4AB1FDC & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v2);
    byte_4AB1FDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall RecommendSupportSelectRootComponent____n__0(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39051456((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB1FDB & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4AB1FDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB1FD9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4AB1FD9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppClass *v16; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v18; // x10
  int32_t v19; // w1
  ServantStatusBattleListViewItem_o *v20; // x0
  System_Action_o *v21; // x19

  if ( (byte_4AB1FDA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, data);
    sub_1BAB41C(&AtlasManager_TypeInfo, v5);
    sub_1BAB41C(&SceneJumpInfo_TypeInfo, v6);
    sub_1BAB41C(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__, v7);
    sub_1BAB41C(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo, v8);
    byte_4AB1FDA = 1;
  }
  v9 = sub_1BAB668(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BAB678(v10, v11);
  *(_QWORD *)(v9 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
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
    v20 = (ServantStatusBattleListViewItem_o *)(v9 + 16);
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
    v20 = (ServantStatusBattleListViewItem_o *)(v9 + 16);
  }
  sub_1BAB3C0(v20, v19, v14, v15);
  v21 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  int32_t v7; // w3

  if ( (byte_4AB1FDD & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AtlasManager_TypeInfo, v3);
    sub_1BAB41C(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__, v4);
    byte_4AB1FDD = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
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
  System_Action_o *_9__2; // x22
  RecommendSupportSelectControl_o *v8; // x21
  SceneJumpInfo_o *sceneJumpInfo; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4AB1FDE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1BAB41C(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__, v4);
    byte_4AB1FDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v8 )
    sub_1BAB678(Instance, v6);
  RecommendSupportSelectControl__Init(v8, sceneJumpInfo, _9__2, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
  SceneRootComponent__beginStartUp_39051456(_4__this, 0LL);
}