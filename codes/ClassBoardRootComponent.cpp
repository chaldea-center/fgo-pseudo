void ClassBoardRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D346C9 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardRootComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_24291/*"talk_mov338"*/);
    byte_4D346C9 = 1;
  }
  ClassBoardRootComponent_TypeInfo->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME = (struct System_String_o *)StringLiteral_24291/*"talk_mov338"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardRootComponent_TypeInfo->static_fields,
    StringLiteral_24291/*"talk_mov338"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  ClassBoardRootComponent_TypeInfo->static_fields->U_MEDAL_CREATE_EVENT_ID = -170;
}


void ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D346C8 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardPageSwitcher_TypeInfo);
    byte_4D346C8 = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pageSwitcher, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  struct IClassBoardResourceCatalog_o *v13; // x21
  IClassBoardResourceCatalog_c *v14; // x8
  UnityEngine_Transform_o *v15; // x20
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  Il2CppObject *m_CachedPtr; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D346C0 & 1) == 0 )
  {
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_11506/*"Root"*/);
    byte_4D346C0 = 1;
  }
  p_classBoardBackground = (GrandQuestFolderBoardItem_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0, 0) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v7 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
      if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v7;
          p_offset += 4;
          if ( !v7 )
            goto LABEL_11;
        }
        v9 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_11:
        v9 = sub_1C69E5C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v10 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v9)(resourceCatalog, *(_QWORD *)(v9 + 8));
      if ( v10 )
        resourceCatalog = *(UnityEngine_Object_o **)(v10 + 160);
      else
        resourceCatalog = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(resourceCatalog, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_34;
      transform = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_11506/*"Root"*/, 0);
      v13 = this->fields.resourceCatalog;
      if ( !v13 )
        goto LABEL_34;
      v14 = v13->klass;
      v15 = transform;
      v16 = *(unsigned __int16 *)&v13->klass->_2.rank;
      if ( *(_WORD *)&v13->klass->_2.rank )
      {
        v17 = &v14->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_26;
        }
        v18 = (__int64)&v14->vtable[*v17];
      }
      else
      {
LABEL_26:
        v18 = sub_1C69E5C(v13, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v18)(
                                               v13,
                                               *(_QWORD *)(v18 + 8));
      if ( !transform )
        goto LABEL_34;
      m_CachedPtr = (Il2CppObject *)transform[6].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__Instantiate_object__52629400(
              m_CachedPtr,
              v15,
              (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (GrandQuestFolderBoardItem_c *)v20;
      sub_1C93A78(p_classBoardBackground, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      transform = (UnityEngine_Transform_o *)p_classBoardBackground->klass;
      if ( !p_classBoardBackground->klass
        || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
      {
LABEL_34:
        sub_1C93D2C(transform, v12);
      }
      v27.fields.x = 288.0;
      v27.fields.y = 288.0;
      v27.fields.z = 288.0;
      UnityEngine_Transform__set_localScale(transform, v27, 0);
    }
  }
}


UnityEngine_GameObject_o *ClassBoardRootComponent__CreateCriMoviePlayerObject(
        ClassBoardRootComponent_o *this,
        System_String_o *moviePlayerObjectPath,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *object; // x20
  Il2CppObject *v7; // x20

  if ( (byte_4D346C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4D346C4 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerObjectPath,
             (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  return (UnityEngine_GameObject_o *)v7;
}


void ClassBoardRootComponent__InitResourceCatalog(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v4; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v9; // x0
  ClassBoardResourceCatalogAssetBundle_o *v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D346C7 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    byte_4D346C7 = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog;
  v4 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v4->klass;
    v7 = *(unsigned __int16 *)&v4->klass->_2.rank;
    if ( *(_WORD *)&v4->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v7;
        p_offset += 2;
        if ( !v7 )
          goto LABEL_8;
      }
      v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_8:
      v9 = sub_1C69E5C(v4, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(v4, *(_QWORD *)(v9 + 8));
  }
  v10 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C93D20(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v10, v11);
  p_resourceCatalog->klass = (GrandQuestFolderBoardItem_c *)v10;
  sub_1C93A78(p_resourceCatalog, (int32_t)v10, v12, v13, v14, v15, v16, v17);
}


void ClassBoardRootComponent__OnMovieEnd(
        ClassBoardRootComponent_o *this,
        System_Action_o *callBackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4D346C6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__0__);
    sub_1C93AD4(&ClassBoardRootComponent___c__DisplayClass38_0_TypeInfo);
    byte_4D346C6 = 1;
  }
  v5 = sub_1C93D20(ClassBoardRootComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBackAfter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callBackAfter, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__0__,
    0);
  if ( !v22 )
LABEL_8:
    sub_1C93D2C(v6, v7);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0);
}


void ClassBoardRootComponent__PlayMovie(
        ClassBoardRootComponent_o *this,
        System_String_o *movieName,
        bool isPlayWithDelay,
        System_Action_o *callBackAfter,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = ClassBoardRootComponent__PlayMovieCoroutine(this, movieName, isPlayWithDelay, callBackAfter, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


System_Collections_IEnumerator_o *ClassBoardRootComponent__PlayMovieCoroutine(
        ClassBoardRootComponent_o *this,
        System_String_o *movieName,
        bool isPlayWithDelay,
        System_Action_o *callBackAfter,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D346C5 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardRootComponent__PlayMovieCoroutine_d__37_TypeInfo);
    byte_4D346C5 = 1;
  }
  v9 = isPlayWithDelay;
  v10 = sub_1C93D20(ClassBoardRootComponent__PlayMovieCoroutine_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 64) = movieName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 64), (int32_t)movieName, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 48) = v9;
  *(_QWORD *)(v10 + 40) = callBackAfter;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 40), (int32_t)callBackAfter, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v10;
}


void ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1C93D2C(0, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void ClassBoardRootComponent___beginInitialize_b__32_0(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D346CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D346CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *gameObject; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GrandQuestFolderBoardItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v20; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v23; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v25; // x0

  if ( (byte_4D346C3 & 1) == 0 )
  {
    sub_1C93AD4(&System_GC_TypeInfo);
    sub_1C93AD4(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D346C3 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = &this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0, 0) )
  {
    pageSwitcher = (ClassBoardPageSwitcher_o *)*p_classBoardBackground;
    if ( !*p_classBoardBackground )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)pageSwitcher,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_classBoardBackground = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.classBoardBackground, 0, v13, v14, v15, v16, v17, v18);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog;
  v20 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v20->klass;
    v23 = *(unsigned __int16 *)&v20->klass->_2.rank;
    if ( *(_WORD *)&v20->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v23;
        p_offset += 2;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_16:
      v25 = sub_1C69E5C(v20, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8));
  }
  p_resourceCatalog->klass = 0;
  sub_1C93A78(p_resourceCatalog, 0, v6, v7, v8, v9, v10, v11);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1C93D2C(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
}


void ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Instance; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3

  if ( (byte_4D346C1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardRootComponent__beginInitialize_b__32_0__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4D346C1 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C93D20(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, v4);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !v12 )
      goto LABEL_10;
    BYTE2(v12[12].monitor) = 0;
  }
  pageSwitcher = this->fields.pageSwitcher;
  v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__32_0__, 0);
  if ( !pageSwitcher )
LABEL_10:
    sub_1C93D2C(v12, v13);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v15, v16);
}


void ClassBoardRootComponent__beginStartUp(
        ClassBoardRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  __int64 naturalAligment; // x10
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  if ( (byte_4D346C2 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    byte_4D346C2 = 1;
  }
  ClassBoardRootComponent__CreateBackground(this, (const MethodInfo *)data);
  MainMenuBar__setMenuActive(1, 0, 0);
  if ( !data
    || (naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] != SceneJumpInfo_TypeInfo
    || SLODWORD(data[1].monitor) < 1 )
  {
    pageSwitcher = this->fields.pageSwitcher;
    if ( pageSwitcher )
    {
      ClassBoardPageSwitcher__StartUp(pageSwitcher, data, v6);
      return;
    }
LABEL_11:
    sub_1C93D2C(pageSwitcher, v5);
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_11;
  ClassBoardPageSwitcher__StartUpByTransitionInfo(pageSwitcher, data, v6);
}


ClassBoardBackground_o *ClassBoardRootComponent__get_ClassBoardBackground(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardBackground;
}


UnityEngine_GameObject_o *ClassBoardRootComponent__get_ClassBoardRoot(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.classBoardRoot;
}


ClassBoardController_o *ClassBoardRootComponent__get_Controller(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.controller;
}


UnityEngine_GameObject_o *ClassBoardRootComponent__get_ForwardUiRoot(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.forwardUiRoot;
}


ClassBoardPageSwitcher_o *ClassBoardRootComponent__get_PageSwitcher(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pageSwitcher;
}


IClassBoardResourceCatalog_o *ClassBoardRootComponent__get_ResourceCatalog(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceCatalog;
}


UnityEngine_GameObject_o *ClassBoardRootComponent__get_TouchBlock(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.touchBlock;
}


UnityEngine_Camera_o *ClassBoardRootComponent__get_UiCamera(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.uiCamera;
}


void ClassBoardRootComponent__PlayMovieCoroutine_d__37___ctor(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardRootComponent__PlayMovieCoroutine_d__37__MoveNext(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *v8; // x19
  int32_t _1__state; // w8
  struct ClassBoardRootComponent_o *_4__this; // x20
  Il2CppObject *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Action_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Action_o *callBackAfter; // x1
  struct ClassBoardBackground_o *classBoardBackground; // x8
  float grandScoreNoneDialogUMedalCreateEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v34; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *_8__1; // x21
  System_String_o *movieName; // x22
  System_String_o *MoviePath; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v59; // x8
  Il2CppObject *v60; // x23
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v62; // x22
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *v63; // x8
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **p_criMoviePlayerPanelObj; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  UnityEngine_GameObject_o *criMoviePlayerPanelObj; // x22
  Il2CppObject *Component_object; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **p_moviePlayer; // x22
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *v81; // x8
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *v82; // x23
  System_String_o *movieFilePath; // x24
  System_String_o *Path; // x25
  BgmManager_c *v85; // x0
  Il2CppObject *v86; // x26
  float masterVolume; // s8
  System_Action_o *v88; // x19
  System_String_o *BgmName; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x19
  AvalonSceneManager_c *v97; // x8
  float v98; // s8
  System_Action_o *v99; // x20
  Il2CppObject *v100; // x21
  struct ClassBoardRootComponent___c_StaticFields *static_fields; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  GrandQuestFolderBoardItem_o *v108; // x19

  v8 = this;
  if ( (byte_4D346CF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&CommonUI_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__37_2__);
    sub_1C93AD4(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__0__);
    sub_1C93AD4(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__1__);
    sub_1C93AD4(&ClassBoardRootComponent___c__DisplayClass37_0_TypeInfo);
    sub_1C93AD4(&ClassBoardRootComponent___c_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)sub_1C93AD4(&StringLiteral_1368/*"2DUI"*/);
    byte_4D346CF = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v8->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_1C93D20(ClassBoardRootComponent___c__DisplayClass37_0_TypeInfo);
      System_Object___ctor(v11, 0);
      v8->fields.__8__1 = (struct ClassBoardRootComponent___c__DisplayClass37_0_o *)v11;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_56;
      v24 = (struct System_Action_o *)v8->fields.__4__this;
      this->fields.callBackAfter = v24;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.callBackAfter,
        (int32_t)v24,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_56;
      callBackAfter = v8->fields.callBackAfter;
      *(_QWORD *)&this->fields.isPlayWithDelay = callBackAfter;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.isPlayWithDelay,
        (int32_t)callBackAfter,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      if ( v8->fields.isPlayWithDelay )
      {
        if ( _4__this )
        {
          classBoardBackground = _4__this->fields.classBoardBackground;
          if ( classBoardBackground )
          {
            grandScoreNoneDialogUMedalCreateEffectDelayTime = classBoardBackground->fields.grandScoreNoneDialogUMedalCreateEffectDelayTime;
            v34 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v34, grandScoreNoneDialogUMedalCreateEffectDelayTime, 0);
            v8->fields.__2__current = (Il2CppObject *)v34;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C93A78(p__2__current, (int32_t)v34, v36, v37, v38, v39, v40, v41);
            LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
            return 1;
          }
        }
LABEL_56:
        sub_1C93D2C(this, method);
      }
    }
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    _8__1->fields.isDownloaded = 0;
    movieName = v8->fields.movieName;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    MoviePath = CommonUI__CreateMoviePath(movieName, 0);
    _8__1->fields.movieFilePath = MoviePath;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&_8__1->fields, (int32_t)MoviePath, v46, v47, v48, v49, v50, v51);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_56;
    this->fields.__2__current = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v52, v53, v54, v55, v56, v57);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v59 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v59 = AvalonSceneManager_TypeInfo;
    }
    v60 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_FADE_TIME = v59->static_fields->DEFAULT_FADE_TIME;
    v62 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v62, v60, Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__0__, 0);
    if ( !Instance )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)CommonUI__maskFadeout(
                                                                    (CommonUI_o *)Instance,
                                                                    1,
                                                                    DEFAULT_FADE_TIME,
                                                                    v62,
                                                                    0);
  }
  v63 = v8->fields.__8__1;
  if ( !v63 )
    goto LABEL_56;
  if ( v63->fields.isDownloaded )
  {
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)CommonUI_TypeInfo;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    if ( !_4__this )
      goto LABEL_56;
    CriMoviePlayerObject = ClassBoardRootComponent__CreateCriMoviePlayerObject(
                             (ClassBoardRootComponent_o *)this,
                             CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                             (UnityEngine_Component_o *)_4__this,
                             v3);
    _4__this->fields.criMoviePlayerPanelObj = CriMoviePlayerObject;
    p_criMoviePlayerPanelObj = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **)&_4__this->fields.criMoviePlayerPanelObj;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.criMoviePlayerPanelObj,
      (int32_t)CriMoviePlayerObject,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    criMoviePlayerPanelObj = _4__this->fields.criMoviePlayerPanelObj;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)UnityEngine_LayerMask__NameToLayer(
                                                                    (System_String_o *)StringLiteral_1368/*"2DUI"*/,
                                                                    0);
    if ( !criMoviePlayerPanelObj )
      goto LABEL_56;
    UnityEngine_GameObject__set_layer(criMoviePlayerPanelObj, (int32_t)this, 0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_56;
    UIPanel__set_depth((UIPanel_o *)this, 50, 0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    _4__this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
    p_moviePlayer = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **)&_4__this->fields.moviePlayer;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.moviePlayer,
      (int32_t)Component_object,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    v81 = v8->fields.__8__1;
    if ( !v81 )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v81->fields.downloadedData;
    if ( !this )
      goto LABEL_56;
    v82 = *p_moviePlayer;
    movieFilePath = v81->fields.movieFilePath;
    Path = AssetData__get_Path((AssetData_o *)this, 0);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4D2B5DC )
    {
      sub_1C93AD4(&BgmManager_TypeInfo);
      byte_4D2B5DC = 1;
    }
    v85 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v85 = BgmManager_TypeInfo;
    }
    v86 = (Il2CppObject *)v8->fields.__8__1;
    masterVolume = v85->static_fields->masterVolume;
    v88 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v88, v86, Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__1__, 0);
    if ( !v82 )
      goto LABEL_56;
    CRIMoviePlayer__Initialize(
      (CRIMoviePlayer_o *)v82,
      movieFilePath,
      Path,
      masterVolume,
      0,
      0,
      v88,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = *p_moviePlayer;
    if ( !*p_moviePlayer )
      goto LABEL_56;
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 0, 0, 0, 0, 0);
    BgmName = BgmManager__GetBgmName(0);
    _4__this->fields.bgmName = BgmName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.bgmName,
      (int32_t)BgmName,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    BgmManager__StopBgm(0, 0.0, 0, 0);
    v96 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v97 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v97 = AvalonSceneManager_TypeInfo;
    }
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)ClassBoardRootComponent___c_TypeInfo;
    v98 = v97->static_fields->DEFAULT_FADE_TIME;
    if ( !ClassBoardRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent___c_TypeInfo);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)ClassBoardRootComponent___c_TypeInfo;
    }
    v99 = *(System_Action_o **)(*((_QWORD *)this + 23) + 8LL);
    if ( !v99 )
    {
      if ( !*((_DWORD *)this + 56) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)ClassBoardRootComponent___c_TypeInfo;
      }
      v100 = (Il2CppObject *)**((_QWORD **)this + 23);
      v99 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v99, v100, Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__37_2__, 0);
      static_fields = ClassBoardRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__37_2 = v99;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_2,
        (int32_t)v99,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
    }
    if ( !v96 )
      goto LABEL_56;
    CommonUI__maskFadein((CommonUI_o *)v96, v98, v99, 0);
    return 0;
  }
  v8->fields.__2__current = 0;
  v108 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C93A78(v108, 0, v2, (int32_t)v3, v4, v5, v6, v7);
  LODWORD(v108[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *ClassBoardRootComponent__PlayMovieCoroutine_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardRootComponent__PlayMovieCoroutine_d__37__System_Collections_IEnumerator_Reset(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ClassBoardRootComponent__PlayMovieCoroutine_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *ClassBoardRootComponent__PlayMovieCoroutine_d__37__System_Collections_IEnumerator_get_Current(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardRootComponent__PlayMovieCoroutine_d__37__System_IDisposable_Dispose(
        ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D346CB & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardRootComponent___c_TypeInfo);
    byte_4D346CB = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ClassBoardRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardRootComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardRootComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardRootComponent___c___ctor(ClassBoardRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c___PlayMovieCoroutine_b__37_2(
        ClassBoardRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent___c__DisplayClass37_0___ctor(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c__DisplayClass37_0___PlayMovieCoroutine_b__0(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *_9__3; // x21
  System_String_o *movieFilePath; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D346CC & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__3__);
    byte_4D346CC = 1;
  }
  _9__3 = this->fields.__9__3;
  movieFilePath = this->fields.movieFilePath;
  if ( !_9__3 )
  {
    _9__3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v5, v6, v7, v8, v9, v10);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(movieFilePath, _9__3, 1, 0);
}


void ClassBoardRootComponent___c__DisplayClass37_0___PlayMovieCoroutine_b__1(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  ClassBoardRootComponent__OnMovieEnd(this->fields.__4__this, this->fields.callBackAfter, v2);
}


void ClassBoardRootComponent___c__DisplayClass37_0___PlayMovieCoroutine_b__3(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct AssetData_o **p_downloadedData; // x19

  this->fields.downloadedData = data;
  p_downloadedData = &this->fields.downloadedData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.downloadedData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_downloadedData + 8) = 1;
}


void ClassBoardRootComponent___c__DisplayClass38_0___ctor(
        ClassBoardRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c__DisplayClass38_0___OnMovieEnd_b__0(
        ClassBoardRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent___c__DisplayClass38_0_o *v2; // x19
  struct ClassBoardRootComponent_o *_4__this; // x8
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v2 = this;
  if ( (byte_4D346CD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)sub_1C93AD4(&Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__1__);
    byte_4D346CD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)_4__this->fields.criMoviePlayerPanelObj;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
LABEL_11:
    sub_1C93D2C(this, method);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__1, 0);
}


void ClassBoardRootComponent___c__DisplayClass38_0___OnMovieEnd_b__1(
        ClassBoardRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v4; // x1
  struct ClassBoardRootComponent_o *_4__this; // x8
  System_String_o *bgmName; // x20
  struct ClassBoardRootComponent_o *v7; // x8
  UnityEngine_Object_o *criMoviePlayerPanelObj; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Action_o *callBackAfter; // x8

  if ( (byte_4D346CE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D346CE = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  bgmName = _4__this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  criMoviePlayerPanelObj = (UnityEngine_Object_o *)v7->fields.criMoviePlayerPanelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(criMoviePlayerPanelObj, 0);
  Instance = (char *)this->fields.__4__this;
  if ( !Instance
    || (*((_QWORD *)Instance + 15) = 0,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 120), 0, v9, v10, v11, v12, v13, v14),
        (Instance = (char *)this->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C93D2C(Instance, v4);
  }
  *((_QWORD *)Instance + 14) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 112), 0, v15, v16, v17, v18, v19, v20);
  callBackAfter = this->fields.callBackAfter;
  if ( callBackAfter )
    ((void (__fastcall *)(intptr_t, intptr_t))callBackAfter->fields.invoke_impl)(
      callBackAfter->fields.method_code,
      callBackAfter->fields.method);
}