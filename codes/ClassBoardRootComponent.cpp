void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF80D & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_49FF80D = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(ClassBoardPageSwitcher_TypeInfo, method, v2);
  System_Object___ctor(v4, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pageSwitcher, (int32_t)v4, v5, v6);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  struct IClassBoardResourceCatalog_o *v14; // x21
  IClassBoardResourceCatalog_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 p_method; // x0
  Il2CppObject *v19; // x21
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FF80A & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF80A = 1;
  }
  p_classBoardBackground = (ServantStatusBattleListViewItem_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v9 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_11;
        }
        v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_11:
        v11 = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v12 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v11)(resourceCatalog, *(_QWORD *)(v11 + 8));
      if ( v12 )
        resourceCatalog = *(UnityEngine_Object_o **)(v12 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL);
    if ( (v13 & 1) == 0 )
    {
      v14 = this->fields.resourceCatalog;
      if ( !v14 )
        goto LABEL_31;
      v15 = v14->klass;
      v16 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_25;
        }
        p_method = (__int64)&v15->vtable[*v17].method;
      }
      else
      {
LABEL_25:
        p_method = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v13 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v14,
              *(_QWORD *)(p_method + 8));
      if ( !v13 )
LABEL_31:
        sub_1B64324(v13);
      v19 = *(Il2CppObject **)(v13 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object__49003980(
              v19,
              transform,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (ServantStatusBattleListViewItem_c *)v21;
      sub_1B6406C(p_classBoardBackground, (int32_t)v21, v22, v23);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1B64324(0LL);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF80E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FF80E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v15; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v18; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FF80C & 1) == 0 )
  {
    sub_1B640C8(&System_GC_TypeInfo, method);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FF80C = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = &this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    pageSwitcher = (ClassBoardPageSwitcher_o *)*p_classBoardBackground;
    if ( !*p_classBoardBackground )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)pageSwitcher,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.classBoardBackground, 0, v12, v13);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog;
  v15 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v15->klass;
    v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v18;
        p_offset += 2;
        if ( !v18 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1BB60A8(v15, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v15, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_1B6406C(p_resourceCatalog, 0, v9, v10);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1B64324(pageSwitcher);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62421456(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  ClassBoardResourceCatalogAssetBundle_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_49FF80B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v3);
    sub_1B640C8(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v4);
    byte_49FF80B = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v7 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1B64314(ClassBoardResourceCatalogAssetBundle_TypeInfo, v5, v6);
  ClassBoardResourceCatalogAssetBundle___ctor(v7, v8);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog, (int32_t)v7, v9, v10);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_1B64324(v15);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v14, v16);
}


void __fastcall ClassBoardRootComponent__beginStartUp(
        ClassBoardRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x1
  const MethodInfo *v5; // x2
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  ClassBoardRootComponent__CreateBackground(this, (const MethodInfo *)data);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1B64324(0LL);
  ClassBoardPageSwitcher__StartUp(pageSwitcher, v4, v5);
}


ClassBoardBackground_o *__fastcall ClassBoardRootComponent__get_ClassBoardBackground(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardBackground;
}


UnityEngine_GameObject_o *__fastcall ClassBoardRootComponent__get_ClassBoardRoot(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardRoot;
}


ClassBoardController_o *__fastcall ClassBoardRootComponent__get_Controller(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.controller;
}


UnityEngine_GameObject_o *__fastcall ClassBoardRootComponent__get_ForwardUiRoot(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.forwardUiRoot;
}


IClassBoardResourceCatalog_o *__fastcall ClassBoardRootComponent__get_ResourceCatalog(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceCatalog;
}


UnityEngine_GameObject_o *__fastcall ClassBoardRootComponent__get_TouchBlock(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.touchBlock;
}


UnityEngine_Camera_o *__fastcall ClassBoardRootComponent__get_UiCamera(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiCamera;
}