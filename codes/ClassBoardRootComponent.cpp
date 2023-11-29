void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB9CC & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_40FB9CC = 1;
  }
  v6 = (Il2CppObject *)sub_B170CC(ClassBoardPageSwitcher_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v6, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pageSwitcher,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  BattleServantConfConponent_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x0
  struct IClassBoardResourceCatalog_o *v13; // x21
  IClassBoardResourceCatalog_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 p_method; // x0
  __int64 v18; // x0
  UILabel_o *v19; // x21
  UnityEngine_Transform_o *transform; // x20
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FB9C9 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB9C9 = 1;
  }
  p_classBoardBackground = (BattleServantConfConponent_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v9 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v9;
          p_offset += 4;
          if ( v9 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_12:
        v11 = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v12 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v11)(resourceCatalog, *(_QWORD *)(v11 + 8));
      if ( v12 )
        resourceCatalog = *(UnityEngine_Object_o **)(v12 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL) )
    {
      v13 = this->fields.resourceCatalog;
      if ( !v13 )
        goto LABEL_34;
      v14 = v13->klass;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v16 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        p_method = (__int64)&v14->vtable[*v16].method;
      }
      else
      {
LABEL_27:
        p_method = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v18 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v13,
              *(_QWORD *)(p_method + 8));
      if ( !v18 )
LABEL_34:
        sub_B170D4();
      v19 = *(UILabel_o **)(v18 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v21 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     v19,
                                     transform,
                                     (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (BattleServantConfConponent_c *)v21;
      sub_B16F98(p_classBoardBackground, v21, v22, v23, v24, v25, v26, v27);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_B170D4();
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FB9CD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FB9CD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  UnityEngine_Component_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v23; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v26; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0
  AssetManager_o *Instance; // x0

  if ( (byte_40FB9CB & 1) == 0 )
  {
    sub_B16FFC(&System_GC_TypeInfo, method);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FB9CB = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_26;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = (UnityEngine_Component_o **)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    if ( !*p_classBoardBackground )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_classBoardBackground, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.classBoardBackground, 0LL, v16, v17, v18, v19, v20, v21);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (BattleServantConfConponent_o *)&this->fields.resourceCatalog;
  v23 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v26;
        p_offset += 2;
        if ( v26 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AAFEF8(v23, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v23, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_B16F98(p_resourceCatalog, 0LL, v9, v10, v11, v12, v13, v14);
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
LABEL_26:
    sub_B170D4();
  AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  ClassBoardResourceCatalogAssetBundle_o *v9; // x20
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_40FB9CA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v3);
    sub_B16FFC(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v4);
    byte_40FB9CA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v9 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B170CC(
                                                   ClassBoardResourceCatalogAssetBundle_TypeInfo,
                                                   v5,
                                                   v6,
                                                   v7,
                                                   v8);
  ClassBoardResourceCatalogAssetBundle___ctor(v9, v10);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_B170D4();
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v22, v23);
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
    sub_B170D4();
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