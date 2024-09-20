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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57462 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A57462 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall RecommendSupportSelectRootComponent____n__0(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57461 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A57461 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5745F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5745F = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginStartUp(
        RecommendSupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppClass *v12; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v14; // x10
  int32_t v15; // w1
  ServantStatusBattleListViewItem_o *v16; // x0
  System_Action_o *v17; // x19

  if ( (byte_4A57460 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__);
    sub_1B885B0(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
    byte_4A57460 = 1;
  }
  v5 = sub_1B887FC(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  if ( data )
  {
    v12 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
        v14 = data;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    *(_QWORD *)(v5 + 16) = v14;
    v16 = (ServantStatusBattleListViewItem_o *)(v5 + 16);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v12 )
        v15 = (int)data;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    v15 = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    v16 = (ServantStatusBattleListViewItem_o *)(v5 + 16);
  }
  sub_1B88554(v16, v15, v10, v11);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v17, 1, 0LL);
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
  System_Action_o *_9__1; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57463 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__);
    byte_4A57463 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v4, v5);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(_9__1, 2, 1, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__1(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  RecommendSupportSelectControl_o *v6; // x21
  SceneJumpInfo_o *sceneJumpInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57464 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__);
    byte_4A57464 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  RecommendSupportSelectControl__Init(v6, sceneJumpInfo, _9__2, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  SceneRootComponent__beginStartUp_38666476(_4__this, 0LL);
}