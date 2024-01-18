void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4189552 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4189552 = 1;
  }
  v3 = (Il2CppObject *)sub_B2C42C(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v3;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantConfConponent_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  __int64 v7; // x3
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  struct IClassBoardResourceCatalog_o *v17; // x21
  IClassBoardResourceCatalog_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 p_method; // x0
  UILabel_o *v22; // x21
  UnityEngine_Transform_o *transform; // x20
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_418954F & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418954F = 1;
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
        v10 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v10;
          p_offset += 4;
          if ( v10 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_12:
        v12 = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v7);
      }
      v13 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v12)(resourceCatalog, *(_QWORD *)(v12 + 8));
      if ( v13 )
        resourceCatalog = *(UnityEngine_Object_o **)(v13 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL);
    if ( (v14 & 1) == 0 )
    {
      v17 = this->fields.resourceCatalog;
      if ( !v17 )
        goto LABEL_34;
      v18 = v17->klass;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v20 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        p_method = (__int64)&v18->vtable[*v20].method;
      }
      else
      {
LABEL_27:
        p_method = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v16);
      }
      v14 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v17,
              *(_QWORD *)(p_method + 8));
      if ( !v14 )
LABEL_34:
        sub_B2C434(v14, v15);
      v22 = *(UILabel_o **)(v14 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     v22,
                                     transform,
                                     (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (BattleServantConfConponent_c *)v24;
      sub_B2C2F8(p_classBoardBackground, v24, v25, v26, v27, v28, v29, v30);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_B2C434(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4189553 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4189553 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
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

  if ( (byte_4189551 & 1) == 0 )
  {
    sub_B2C35C(&System_GC_TypeInfo, method);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4189551 = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.classBoardBackground, 0LL, v16, v17, v18, v19, v20, v21);
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
      p_method = sub_AC5258(v23, IClassBoardResourceCatalog_TypeInfo, 2LL, v10);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v23, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_B2C2F8(p_resourceCatalog, 0LL, v9, v10, v11, v12, v13, v14);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_26:
    sub_B2C434(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ClassBoardResourceCatalogAssetBundle_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3

  if ( (byte_4189550 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v3);
    sub_B2C35C(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v4);
    byte_4189550 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v5 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B2C42C(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v5, v6);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_B2C434(v15, v16);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v14, v17);
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
    sub_B2C434(0LL, v4);
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