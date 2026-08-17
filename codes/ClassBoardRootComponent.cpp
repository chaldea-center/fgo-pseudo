void ClassBoardRootComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5974739 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardRootComponent_TypeInfo);
    sub_2213A60(&StringLiteral_25265/*"talk_mov338"*/);
    byte_5974739 = 1;
  }
  v7 = StringLiteral_25265/*"talk_mov338"*/;
  ClassBoardRootComponent_TypeInfo->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME = (struct System_String_o *)StringLiteral_25265/*"talk_mov338"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardRootComponent_TypeInfo->static_fields,
    v7,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974738 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    byte_5974738 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(ClassBoardPageSwitcher_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.pageSwitcher, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  struct IClassBoardResourceCatalog_o *v14; // x21
  IClassBoardResourceCatalog_c *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  Il2CppObject *m_CachedPtr; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974730 & 1) == 0 )
  {
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11921/*"Root"*/);
    byte_5974730 = 1;
  }
  p_classBoardBackground = (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0, 0) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v8 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
      if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_11;
        }
        v10 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_11:
        v10 = sub_224BC3C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v11 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v10)(resourceCatalog, *(_QWORD *)(v10 + 8));
      if ( v11 )
        resourceCatalog = *(UnityEngine_Object_o **)(v11 + 160);
      else
        resourceCatalog = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(resourceCatalog, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_34;
      transform = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_11921/*"Root"*/, 0);
      v14 = this->fields.resourceCatalog;
      if ( !v14 )
        goto LABEL_34;
      v15 = v14->klass;
      v16 = transform;
      v17 = *(unsigned __int16 *)&v14->klass->_2.rank;
      if ( *(_WORD *)&v14->klass->_2.rank )
      {
        v18 = &v15->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v18 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_26;
        }
        v19 = (__int64)&v15->vtable[*v18];
      }
      else
      {
LABEL_26:
        v19 = sub_224BC3C(v14, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v19)(
                                               v14,
                                               *(_QWORD *)(v19 + 8));
      if ( !transform )
        goto LABEL_34;
      m_CachedPtr = (Il2CppObject *)transform[6].fields.m_CachedPtr;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v21 = UnityEngine_Object__Instantiate_object__59717116(
              m_CachedPtr,
              v16,
              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (MissionNaviTransitionBoardItem_c *)v21;
      sub_2213A04(p_classBoardBackground, (int32_t)v21, v22, v23, v24, v25, v26, v27);
      transform = (UnityEngine_Transform_o *)p_classBoardBackground->klass;
      if ( !p_classBoardBackground->klass
        || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
      {
LABEL_34:
        sub_2213CDC(transform, v13);
      }
      v28.fields.x = 288.0;
      v28.fields.y = 288.0;
      v28.fields.z = 288.0;
      UnityEngine_Transform__set_localScale(transform, v28, 0);
    }
  }
}


UnityEngine_GameObject_o *ClassBoardRootComponent__CreateCriMoviePlayerObject(
        ClassBoardRootComponent_o *this,
        System_String_o *moviePlayerObjectPath,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *object; // x20
  Il2CppObject *v8; // x20

  if ( (byte_5974734 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_5974734 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerObjectPath,
             (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, parent, 0);
  return (UnityEngine_GameObject_o *)v8;
}


void ClassBoardRootComponent__InitResourceCatalog(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v4; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v9; // x0
  ClassBoardResourceCatalogAssetBundle_o *v10; // x20
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974737 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    byte_5974737 = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog;
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
      v9 = sub_224BC3C(v4, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(v4, *(_QWORD *)(v9 + 8));
  }
  v10 = (ClassBoardResourceCatalogAssetBundle_o *)sub_2213CCC(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v10, v11);
  p_resourceCatalog->klass = (MissionNaviTransitionBoardItem_c *)v10;
  sub_2213A04(p_resourceCatalog, (int32_t)v10, v12, v13, v14, v15, v16, v17);
}


void ClassBoardRootComponent__OnMovieEnd(
        ClassBoardRootComponent_o *this,
        System_Action_o *callBackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_5974736 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__0__);
    sub_2213A60(&ClassBoardRootComponent___c__DisplayClass38_0_TypeInfo);
    byte_5974736 = 1;
  }
  v5 = sub_2213CCC(ClassBoardRootComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBackAfter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callBackAfter, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__0__,
    0);
  if ( !v23 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5974735 & 1) == 0 )
  {
    sub_2213A60(&ClassBoardRootComponent__PlayMovieCoroutine_d__37_TypeInfo);
    byte_5974735 = 1;
  }
  v9 = isPlayWithDelay;
  v10 = sub_2213CCC(ClassBoardRootComponent__PlayMovieCoroutine_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 64) = movieName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 64), (int32_t)movieName, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 48) = v9;
  *(_QWORD *)(v10 + 40) = callBackAfter;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), (int32_t)callBackAfter, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v10;
}


void ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_2213CDC(0, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void ClassBoardRootComponent___beginInitialize_b__32_0(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_597473A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_597473A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  __int64 v4; // x1
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  MissionNaviTransitionBoardItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v22; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v25; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1

  if ( (byte_5974733 & 1) == 0 )
  {
    sub_2213A60(&System_GC_TypeInfo);
    sub_2213A60(&IClassBoardResourceCatalog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_5974733 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = &this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0, 0) )
  {
    pageSwitcher = (ClassBoardPageSwitcher_o *)*p_classBoardBackground;
    if ( !*p_classBoardBackground )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)pageSwitcher,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_classBoardBackground = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.classBoardBackground, 0, v15, v16, v17, v18, v19, v20);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog;
  v22 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v22->klass;
    v25 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v25;
        p_offset += 2;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_16:
      v27 = sub_224BC3C(v22, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v27)(v22, *(_QWORD *)(v27 + 8));
  }
  p_resourceCatalog->klass = 0;
  sub_2213A04(p_resourceCatalog, 0, v7, v8, v9, v10, v11, v12);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_2213CDC(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0, 0);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v28);
  System_GC__Collect(0);
}


void ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_5974731 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_2213A60(&Method_ClassBoardRootComponent__beginInitialize_b__32_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_5974731 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_2213CCC(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, v4);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resourceCatalog, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 20, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !v13 )
      goto LABEL_10;
    BYTE2(v13[12].klass) = 0;
  }
  pageSwitcher = this->fields.pageSwitcher;
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__32_0__, 0);
  if ( !pageSwitcher )
LABEL_10:
    sub_2213CDC(v13, v14);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v16, v17);
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

  if ( (byte_5974732 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    byte_5974732 = 1;
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
    sub_2213CDC(pageSwitcher, v5);
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
  System_String_o *v2; // x2
  MethodInfo *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *v8; // x19
  int32_t _1__state; // w8
  struct ClassBoardRootComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Action_o *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Action_o *callBackAfter; // x1
  struct ClassBoardBackground_o *classBoardBackground; // x8
  float grandScoreNoneDialogUMedalCreateEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v34; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  bool result; // w0
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *_8__1; // x21
  System_String_o *movieName; // x22
  System_String_o *MoviePath; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v60; // x8
  Il2CppObject *v61; // x23
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v63; // x22
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *v64; // x8
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **p_criMoviePlayerPanelObj; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  UnityEngine_GameObject_o *criMoviePlayerPanelObj; // x22
  Il2CppObject *Component_object; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **p_moviePlayer; // x22
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct ClassBoardRootComponent___c__DisplayClass37_0_o *v82; // x8
  ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *v83; // x23
  System_String_o *movieFilePath; // x24
  __int64 v85; // x1
  System_String_o *Path; // x25
  BgmManager_c *v87; // x0
  Il2CppObject *v88; // x26
  float masterVolume; // s8
  System_Action_o *v90; // x19
  System_String_o *BgmName; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  Il2CppObject *v98; // x19
  AvalonSceneManager_c *v99; // x8
  float v100; // s8
  void *static_fields; // x8
  System_Action_o *v102; // x20
  Il2CppObject *v103; // x21
  struct ClassBoardRootComponent___c_StaticFields *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  MissionNaviTransitionBoardItem_o *v111; // x19

  v8 = this;
  if ( (byte_597473F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__37_2__);
    sub_2213A60(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__0__);
    sub_2213A60(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__1__);
    sub_2213A60(&ClassBoardRootComponent___c__DisplayClass37_0_TypeInfo);
    sub_2213A60(&ClassBoardRootComponent___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)sub_2213A60(&StringLiteral_1450/*"2DUI"*/);
    byte_597473F = 1;
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
      v11 = (Il2CppObject *)sub_2213CCC(ClassBoardRootComponent___c__DisplayClass37_0_TypeInfo);
      System_Object___ctor(v11, 0);
      v8->fields.__8__1 = (struct ClassBoardRootComponent___c__DisplayClass37_0_o *)v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_56;
      v24 = (struct System_Action_o *)v8->fields.__4__this;
      this->fields.callBackAfter = v24;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callBackAfter,
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.isPlayWithDelay,
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
            v34 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v34, grandScoreNoneDialogUMedalCreateEffectDelayTime, 0);
            v8->fields.__2__current = (Il2CppObject *)v34;
            p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_2213A04(p__2__current, (int32_t)v34, v36, v37, v38, v39, v40, v41);
            result = 1;
            p__2__current[-1].fields._BoardType_k__BackingField = 1;
            return result;
          }
        }
LABEL_56:
        sub_2213CDC(this, method);
      }
    }
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    movieName = v8->fields.movieName;
    _8__1->fields.isDownloaded = 0;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method);
    MoviePath = CommonUI__CreateMoviePath(movieName, 0);
    _8__1->fields.movieFilePath = MoviePath;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_8__1->fields, (int32_t)MoviePath, v46, v47, v48, v49, v50, v51);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_56;
    this->fields.__2__current = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v52, v53, v54, v55, v56, v57);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v60 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v58);
      v60 = AvalonSceneManager_TypeInfo;
    }
    v61 = (Il2CppObject *)v8->fields.__8__1;
    DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
    v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v63, v61, Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__0__, 0);
    if ( !Instance )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)CommonUI__maskFadeout(
                                                                    (CommonUI_o *)Instance,
                                                                    1,
                                                                    DEFAULT_FADE_TIME,
                                                                    v63,
                                                                    0);
  }
  v64 = v8->fields.__8__1;
  if ( !v64 )
    goto LABEL_56;
  if ( v64->fields.isDownloaded )
  {
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)CommonUI_TypeInfo;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method);
    if ( !_4__this )
      goto LABEL_56;
    CriMoviePlayerObject = ClassBoardRootComponent__CreateCriMoviePlayerObject(
                             (ClassBoardRootComponent_o *)this,
                             CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                             (UnityEngine_Component_o *)_4__this,
                             v3);
    _4__this->fields.criMoviePlayerPanelObj = CriMoviePlayerObject;
    p_criMoviePlayerPanelObj = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **)&_4__this->fields.criMoviePlayerPanelObj;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.criMoviePlayerPanelObj,
      (int32_t)CriMoviePlayerObject,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    criMoviePlayerPanelObj = _4__this->fields.criMoviePlayerPanelObj;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)UnityEngine_LayerMask__NameToLayer(
                                                                    (System_String_o *)StringLiteral_1450/*"2DUI"*/,
                                                                    0);
    if ( !criMoviePlayerPanelObj )
      goto LABEL_56;
    UnityEngine_GameObject__set_layer(criMoviePlayerPanelObj, (int32_t)this, 0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    _4__this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
    p_moviePlayer = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o **)&_4__this->fields.moviePlayer;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.moviePlayer,
      (int32_t)Component_object,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    v82 = v8->fields.__8__1;
    if ( !v82 )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)v82->fields.downloadedData;
    if ( !this )
      goto LABEL_56;
    v83 = *p_moviePlayer;
    movieFilePath = v82->fields.movieFilePath;
    Path = AssetData__get_Path((AssetData_o *)this, 0);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v85);
    if ( !byte_596B2FF )
    {
      sub_2213A60(&BgmManager_TypeInfo);
      byte_596B2FF = 1;
    }
    v87 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v85);
      v87 = BgmManager_TypeInfo;
    }
    v88 = (Il2CppObject *)v8->fields.__8__1;
    masterVolume = v87->static_fields->masterVolume;
    v90 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v90, v88, Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__1__, 0);
    if ( !v83 )
      goto LABEL_56;
    CRIMoviePlayer__Initialize(
      (CRIMoviePlayer_o *)v83,
      movieFilePath,
      Path,
      masterVolume,
      0,
      0,
      v90,
      0,
      0,
      0,
      0,
      1,
      0,
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.bgmName,
      (int32_t)BgmName,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    BgmManager__StopBgm(0, 0.0, 0, 0);
    v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v99 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v99 = AvalonSceneManager_TypeInfo;
    }
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)ClassBoardRootComponent___c_TypeInfo;
    v100 = v99->static_fields->DEFAULT_FADE_TIME;
    if ( !*(&ClassBoardRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent___c_TypeInfo, method);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__37_o *)ClassBoardRootComponent___c_TypeInfo;
    }
    static_fields = this[2].fields.callBackAfter;
    v102 = (System_Action_o *)*((_QWORD *)static_fields + 1);
    if ( !v102 )
    {
      if ( !HIDWORD(this[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(this, method);
        static_fields = ClassBoardRootComponent___c_TypeInfo->static_fields;
      }
      v103 = *(Il2CppObject **)static_fields;
      v102 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v102, v103, Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__37_2__, 0);
      v104 = ClassBoardRootComponent___c_TypeInfo->static_fields;
      v104->__9__37_2 = v102;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v104->__9__37_2,
        (int32_t)v102,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
    }
    if ( !v98 )
      goto LABEL_56;
    CommonUI__maskFadein((CommonUI_o *)v98, v100, v102, 0);
    return 0;
  }
  v8->fields.__2__current = 0;
  v111 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v111, 0, v2, (System_String_o *)v3, v4, v5, v6, v7);
  result = 1;
  v111[-1].fields._BoardType_k__BackingField = 2;
  return result;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ClassBoardRootComponent__PlayMovieCoroutine_d__37_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597473B & 1) == 0 )
  {
    sub_2213A60(&ClassBoardRootComponent___c_TypeInfo);
    byte_597473B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardRootComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardRootComponent___c_TypeInfo->static_fields,
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
  System_String_o *movieFilePath; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597473C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__3__);
    byte_597473C = 1;
  }
  _9__3 = this->fields.__9__3;
  movieFilePath = this->fields.movieFilePath;
  if ( !_9__3 )
  {
    _9__3 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardRootComponent___c__DisplayClass37_0__PlayMovieCoroutine_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v5, v6, v7, v8, v9, v10);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__downloadAssetStorage(movieFilePath, _9__3, 1, 0);
}


void ClassBoardRootComponent___c__DisplayClass37_0___PlayMovieCoroutine_b__1(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ClassBoardRootComponent__OnMovieEnd(this->fields.__4__this, this->fields.callBackAfter, v2);
}


void ClassBoardRootComponent___c__DisplayClass37_0___PlayMovieCoroutine_b__3(
        ClassBoardRootComponent___c__DisplayClass37_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct AssetData_o **p_downloadedData; // x19

  this->fields.downloadedData = data;
  p_downloadedData = &this->fields.downloadedData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.downloadedData,
    (int32_t)data,
    (System_String_o *)method,
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
  System_Action_o *_9__1; // x22
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_597473D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)sub_2213A60(&Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__1__);
    byte_597473D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)_4__this->fields.criMoviePlayerPanelObj;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (ClassBoardRootComponent___c__DisplayClass38_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)this;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
    v4 = AvalonSceneManager_TypeInfo;
  }
  _9__1 = v2->fields.__9__1;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ClassBoardRootComponent___c__DisplayClass38_0__OnMovieEnd_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
LABEL_11:
    sub_2213CDC(this, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Action_o *callBackAfter; // x8

  if ( (byte_597473E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597473E = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  bgmName = _4__this->fields.bgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4);
  SoundManager__playBgm(bgmName, 0);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  criMoviePlayerPanelObj = (UnityEngine_Object_o *)v7->fields.criMoviePlayerPanelObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(criMoviePlayerPanelObj, 0);
  Instance = (char *)this->fields.__4__this;
  if ( !Instance
    || (*((_QWORD *)Instance + 15) = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 120), 0, v9, v10, v11, v12, v13, v14),
        (Instance = (char *)this->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_2213CDC(Instance, v4);
  }
  *((_QWORD *)Instance + 14) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 112), 0, v15, v16, v17, v18, v19, v20);
  callBackAfter = this->fields.callBackAfter;
  if ( callBackAfter )
    ((void (__fastcall *)(intptr_t, intptr_t))callBackAfter->fields.invoke_impl)(
      callBackAfter->fields.method_code,
      callBackAfter->fields.method);
}