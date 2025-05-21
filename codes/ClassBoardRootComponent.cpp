void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B48350 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4B48350 = 1;
  }
  v3 = (Il2CppObject *)sub_1BDBAC4(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.pageSwitcher, (int32_t)v3, v4, v5);
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
  __int64 v5; // x1
  CGThumbnailListItem_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  struct IClassBoardResourceCatalog_o *v16; // x21
  IClassBoardResourceCatalog_c *v17; // x8
  UnityEngine_Transform_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 p_method; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4834C & 1) == 0 )
  {
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_11390/*"Root"*/, v5);
    byte_4B4834C = 1;
  }
  p_classBoardBackground = (CGThumbnailListItem_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v10 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_11;
        }
        v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_11:
        v12 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v13 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v12)(resourceCatalog, *(_QWORD *)(v12 + 8));
      if ( v13 )
        resourceCatalog = *(UnityEngine_Object_o **)(v13 + 160);
      else
        resourceCatalog = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_34;
      transform = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_11390/*"Root"*/, 0LL);
      v16 = this->fields.resourceCatalog;
      if ( !v16 )
        goto LABEL_34;
      v17 = v16->klass;
      v18 = transform;
      v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        v20 = &v17->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v20 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_26;
        }
        p_method = (__int64)&v17->vtable[*v20].method;
      }
      else
      {
LABEL_26:
        p_method = sub_1C2C00C(v16, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                               v16,
                                               *(_QWORD *)(p_method + 8));
      if ( !transform )
        goto LABEL_34;
      v22 = *(Il2CppObject **)&transform[6].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v23 = UnityEngine_Object__Instantiate_object__51108816(
              v22,
              v18,
              (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (CGThumbnailListItem_c *)v23;
      sub_1BDB81C(p_classBoardBackground, (int32_t)v23, v24, v25);
      transform = (UnityEngine_Transform_o *)p_classBoardBackground->klass;
      if ( !p_classBoardBackground->klass
        || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
      {
LABEL_34:
        sub_1BDBAD4(transform, v15);
      }
      v26.fields.x = 288.0;
      v26.fields.y = 288.0;
      v26.fields.z = 288.0;
      UnityEngine_Transform__set_localScale(transform, v26, 0LL);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1BDBAD4(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B48351 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B48351 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
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
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v15; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v18; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B4834F & 1) == 0 )
  {
    sub_1BDB878(&System_GC_TypeInfo, method);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B4834F = 1;
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
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.classBoardBackground, 0, v12, v13);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (CGThumbnailListItem_o *)&this->fields.resourceCatalog;
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
      p_method = sub_1C2C00C(v15, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v15, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_1BDB81C(p_resourceCatalog, 0, v9, v10);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1BDBAD4(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardResourceCatalogAssetBundle_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3

  if ( (byte_4B4834D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v3);
    sub_1BDB878(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v6);
    byte_4B4834D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v7 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BDBAC4(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v7, v8);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resourceCatalog, (int32_t)v7, v9, v10);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !v12 )
      goto LABEL_10;
    BYTE2(v12[12].klass) = 0;
  }
  pageSwitcher = this->fields.pageSwitcher;
  v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
LABEL_10:
    sub_1BDBAD4(v12, v13);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v15, v16);
}


void __fastcall ClassBoardRootComponent__beginStartUp(
        ClassBoardRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x1
  const MethodInfo *v6; // x2
  __int64 methodPtr_low; // x10
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  if ( (byte_4B4834E & 1) == 0 )
  {
    sub_1BDB878(&SceneJumpInfo_TypeInfo, data);
    byte_4B4834E = 1;
  }
  ClassBoardRootComponent__CreateBackground(this, (const MethodInfo *)data);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( !data
    || (methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo
    || SLODWORD(data[1].monitor) < 1 )
  {
    pageSwitcher = this->fields.pageSwitcher;
    if ( pageSwitcher )
    {
      ClassBoardPageSwitcher__StartUp(pageSwitcher, v5, v6);
      return;
    }
LABEL_11:
    sub_1BDBAD4(pageSwitcher, v5);
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_11;
  ClassBoardPageSwitcher__StartUpByTransitionInfo(pageSwitcher, data, v6);
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