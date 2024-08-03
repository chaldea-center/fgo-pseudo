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

  if ( (byte_49F8793 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v2);
    byte_49F8793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  RecommendSupportSelectControl__ReleaseAsset((RecommendSupportSelectControl_o *)Instance, v4);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall RecommendSupportSelectRootComponent____n__0(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginFinish(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8792 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_49F8792 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AtlasManager__ReleaseUISkin((AtlasManager_o *)Instance, 2, 0, 0LL);
}


void __fastcall RecommendSupportSelectRootComponent__beginInitialize(
        RecommendSupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8790 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F8790 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *v15; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v17; // x10
  int32_t v18; // w1
  ServantStatusBattleListViewItem_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x19

  if ( (byte_49F8791 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v6);
    sub_1B640C8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__, v7);
    sub_1B640C8(&RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo, v8);
    byte_49F8791 = 1;
  }
  v9 = sub_1B64314(RecommendSupportSelectRootComponent___c__DisplayClass1_0_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  if ( data )
  {
    v15 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
        v17 = data;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    *(_QWORD *)(v9 + 16) = v17;
    v19 = (ServantStatusBattleListViewItem_o *)(v9 + 16);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v15 )
        v18 = (int)data;
      else
        v18 = 0;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
    *(_QWORD *)(v9 + 16) = 0LL;
    v19 = (ServantStatusBattleListViewItem_o *)(v9 + 16);
  }
  sub_1B6406C(v19, v18, v13, v14);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v22, 1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_o *_9__1; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F8794 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v4);
    sub_1B640C8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__, v5);
    byte_49F8794 = 1;
  }
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  System_Action_o *_9__2; // x22
  RecommendSupportSelectControl_o *v10; // x21
  SceneJumpInfo_o *sceneJumpInfo; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8795 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1B640C8(&Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__, v4);
    byte_49F8795 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  _9__2 = this->fields.__9__2;
  v10 = (RecommendSupportSelectControl_o *)Instance;
  sceneJumpInfo = this->fields.sceneJumpInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectRootComponent___c__DisplayClass1_0__beginStartUp_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v10 )
    sub_1B64324(Instance);
  RecommendSupportSelectControl__Init(v10, sceneJumpInfo, _9__2, v8);
}


void __fastcall RecommendSupportSelectRootComponent___c__DisplayClass1_0___beginStartUp_b__2(
        RecommendSupportSelectRootComponent___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SceneRootComponent_o *_4__this; // x0

  _4__this = (SceneRootComponent_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  SceneRootComponent__beginStartUp_38276788(_4__this, 0LL);
}