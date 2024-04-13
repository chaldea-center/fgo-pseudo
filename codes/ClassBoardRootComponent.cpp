void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EA867 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardPageSwitcher_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA867 = 1;
  }
  v5 = (Il2CppObject *)sub_B5D694(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pageSwitcher,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  __int64 v13; // x3
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  struct IClassBoardResourceCatalog_o *v23; // x21
  IClassBoardResourceCatalog_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 p_method; // x0
  UILabel_o *v28; // x21
  UnityEngine_Transform_o *transform; // x20
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42EA864 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EA864 = 1;
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
        v16 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v16;
          p_offset += 4;
          if ( v16 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_12:
        v18 = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v13);
      }
      v19 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v18)(resourceCatalog, *(_QWORD *)(v18 + 8));
      if ( v19 )
        resourceCatalog = *(UnityEngine_Object_o **)(v19 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL);
    if ( (v20 & 1) == 0 )
    {
      v23 = this->fields.resourceCatalog;
      if ( !v23 )
        goto LABEL_34;
      v24 = v23->klass;
      if ( *(_WORD *)&v23->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v26 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v25;
          v26 += 4;
          if ( v25 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
            goto LABEL_27;
        }
        p_method = (__int64)&v24->vtable[*v26].method;
      }
      else
      {
LABEL_27:
        p_method = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v22);
      }
      v20 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v23,
              *(_QWORD *)(p_method + 8));
      if ( !v20 )
LABEL_34:
        sub_B5D69C(v20, v21);
      v28 = *(UILabel_o **)(v20 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     v28,
                                     transform,
                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (BattleServantConfConponent_c *)v30;
      sub_B5D560(p_classBoardBackground, v30, v31, v32, v33, v34, v35, v36);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_B5D69C(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EA868 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EA868 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleServantConfConponent_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v31; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v34; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42EA866 & 1) == 0 )
  {
    sub_B5D5C4(&System_GC_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11, v12, v13);
    byte_42EA866 = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.classBoardBackground, 0LL, v24, v25, v26, v27, v28, v29);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (BattleServantConfConponent_o *)&this->fields.resourceCatalog;
  v31 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v31->klass;
    if ( *(_WORD *)&v31->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v34;
        p_offset += 2;
        if ( v34 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AF54C0(v31, IClassBoardResourceCatalog_TypeInfo, 2LL, v18);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v31, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_B5D560(p_resourceCatalog, 0LL, v17, v18, v19, v20, v21, v22);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_26:
    sub_B5D69C(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ClassBoardResourceCatalogAssetBundle_o *v11; // x20
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3

  if ( (byte_42EA865 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v8, v9, v10);
    byte_42EA865 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v11 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B5D694(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v11, v12);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_B5D69C(v21, v22);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v20, v23);
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
    sub_B5D69C(0LL, v4);
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