void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B0722 & 1) == 0 )
  {
    sub_B52984(&ClassBoardPageSwitcher_TypeInfo);
    byte_42B0722 = 1;
  }
  v3 = (Il2CppObject *)sub_B52A54(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.pageSwitcher,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  __int64 v5; // x3
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  struct IClassBoardResourceCatalog_o *v15; // x21
  IClassBoardResourceCatalog_c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 p_method; // x0
  UILabel_o *v20; // x21
  UnityEngine_Transform_o *transform; // x20
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42B071F & 1) == 0 )
  {
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B071F = 1;
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
        v8 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v8;
          p_offset += 4;
          if ( v8 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_12:
        v10 = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v5);
      }
      v11 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v10)(resourceCatalog, *(_QWORD *)(v10 + 8));
      if ( v11 )
        resourceCatalog = *(UnityEngine_Object_o **)(v11 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL);
    if ( (v12 & 1) == 0 )
    {
      v15 = this->fields.resourceCatalog;
      if ( !v15 )
        goto LABEL_34;
      v16 = v15->klass;
      if ( *(_WORD *)&v15->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v18 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        p_method = (__int64)&v16->vtable[*v18].method;
      }
      else
      {
LABEL_27:
        p_method = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v14);
      }
      v12 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v15,
              *(_QWORD *)(p_method + 8));
      if ( !v12 )
LABEL_34:
        sub_B52A5C(v12, v13);
      v20 = *(UILabel_o **)(v12 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     v20,
                                     transform,
                                     (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (BattleServantConfConponent_c *)v22;
      sub_B52920(p_classBoardBackground, v22, v23, v24, v25, v26, v27, v28);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_B52A5C(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B0723 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B0723 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v20; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v23; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42B0721 & 1) == 0 )
  {
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_42B0721 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_26;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = &this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    pageSwitcher = (ClassBoardPageSwitcher_o *)*p_classBoardBackground;
    if ( !*p_classBoardBackground )
      goto LABEL_26;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)pageSwitcher,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.classBoardBackground, 0LL, v13, v14, v15, v16, v17, v18);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (BattleServantConfConponent_o *)&this->fields.resourceCatalog;
  v20 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v23;
        p_offset += 2;
        if ( v23 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AEB880(v20, IClassBoardResourceCatalog_TypeInfo, 2LL, v7);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v20, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_B52920(p_resourceCatalog, 0LL, v6, v7, v8, v9, v10, v11);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_26:
    sub_B52A5C(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44029184(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_42B0720 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_B52984(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__);
    byte_42B0720 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B52A54(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, v4);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_B52A5C(v13, v14);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v12, v15);
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
    sub_B52A5C(0LL, v4);
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