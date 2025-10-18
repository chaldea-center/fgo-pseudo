void ClassBoardRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C46B5D & 1) == 0 )
  {
    sub_1C37058(&ClassBoardRootComponent_TypeInfo);
    sub_1C37058(&StringLiteral_23989/*"talk_mov338"*/);
    byte_4C46B5D = 1;
  }
  ClassBoardRootComponent_TypeInfo->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME = (struct System_String_o *)StringLiteral_23989/*"talk_mov338"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardRootComponent_TypeInfo->static_fields, StringLiteral_23989/*"talk_mov338"*/, v1, v2);
  ClassBoardRootComponent_TypeInfo->static_fields->U_MEDAL_CREATE_EVENT_ID = -170;
}


void ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46B5C & 1) == 0 )
  {
    sub_1C37058(&ClassBoardPageSwitcher_TypeInfo);
    byte_4C46B5C = 1;
  }
  v3 = (ClassBoardPageSwitcher_o *)sub_1C372A4(ClassBoardPageSwitcher_TypeInfo);
  ClassBoardPageSwitcher___ctor(v3, 0);
  this->fields.pageSwitcher = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.pageSwitcher, (int32_t)v3, v4, v5);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Transform_o *transform; // x0
  struct IClassBoardResourceCatalog_o *v12; // x21
  IClassBoardResourceCatalog_c *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *m_CachedPtr; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46B54 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11420/*"Root"*/);
    byte_4C46B54 = 1;
  }
  p_classBoardBackground = (CGThumbnailListItem_o *)&this->fields.classBoardBackground;
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
        v9 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
      transform = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_11420/*"Root"*/, 0);
      v12 = this->fields.resourceCatalog;
      if ( !v12 )
        goto LABEL_34;
      v13 = v12->klass;
      v14 = transform;
      v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
      if ( *(_WORD *)&v12->klass->_2.rank )
      {
        v16 = &v13->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v16 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_26;
        }
        v17 = (__int64)&v13->vtable[*v16];
      }
      else
      {
LABEL_26:
        v17 = sub_1C87870(v12, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      transform = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v17)(
                                               v12,
                                               *(_QWORD *)(v17 + 8));
      if ( !transform )
        goto LABEL_34;
      m_CachedPtr = (Il2CppObject *)transform[6].fields.m_CachedPtr;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__Instantiate_object__51855596(
              m_CachedPtr,
              v14,
              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (CGThumbnailListItem_c *)v19;
      sub_1C36FFC(p_classBoardBackground, (int32_t)v19, v20, v21);
      transform = (UnityEngine_Transform_o *)p_classBoardBackground->klass;
      if ( !p_classBoardBackground->klass
        || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0)) == 0 )
      {
LABEL_34:
        sub_1C372B4(transform);
      }
      v22.fields.x = 288.0;
      v22.fields.y = 288.0;
      v22.fields.z = 288.0;
      UnityEngine_Transform__set_localScale(transform, v22, 0);
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

  if ( (byte_4C46B58 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4C46B58 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerObjectPath,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  return (UnityEngine_GameObject_o *)v7;
}


void ClassBoardRootComponent__InitResourceCatalog(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v4; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v9; // x0
  ClassBoardResourceCatalogAssetBundle_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C46B5B & 1) == 0 )
  {
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C46B5B = 1;
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (CGThumbnailListItem_o *)&this->fields.resourceCatalog;
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
      v9 = sub_1C87870(v4, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(v4, *(_QWORD *)(v9 + 8));
  }
  v10 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C372A4(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v10, 0);
  p_resourceCatalog->klass = (CGThumbnailListItem_c *)v10;
  sub_1C36FFC(p_resourceCatalog, (int32_t)v10, v11, v12);
}


void ClassBoardRootComponent__OnMovieEnd(
        ClassBoardRootComponent_o *this,
        System_Action_o *callBackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4C46B5A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardRootComponent___c__DisplayClass36_0__OnMovieEnd_b__0__);
    sub_1C37058(&ClassBoardRootComponent___c__DisplayClass36_0_TypeInfo);
    byte_4C46B5A = 1;
  }
  v5 = sub_1C372A4(ClassBoardRootComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callBackAfter;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callBackAfter, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ClassBoardRootComponent___c__DisplayClass36_0__OnMovieEnd_b__0__,
    0);
  if ( !v13 )
LABEL_8:
    sub_1C372B4(v6);
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v15, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v6, 0);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C46B59 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardRootComponent__PlayMovieCoroutine_d__35_TypeInfo);
    byte_4C46B59 = 1;
  }
  v9 = isPlayWithDelay;
  v10 = sub_1C372A4(ClassBoardRootComponent__PlayMovieCoroutine_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 64) = movieName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 64), (int32_t)movieName, v13, v14);
  *(_BYTE *)(v10 + 48) = v9;
  *(_QWORD *)(v10 + 40) = callBackAfter;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 40), (int32_t)callBackAfter, v15, v16);
  return (System_Collections_IEnumerator_o *)v10;
}


void ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1C372B4(0);
  ClassBoardPageSwitcher__Update(pageSwitcher, 0);
}


void ClassBoardRootComponent___beginInitialize_b__30_0(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46B5E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46B5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v12; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v15; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v17; // x0

  if ( (byte_4C46B57 & 1) == 0 )
  {
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C46B57 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, 0);
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
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    *p_classBoardBackground = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.classBoardBackground, 0, v9, v10);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (CGThumbnailListItem_o *)&this->fields.resourceCatalog;
  v12 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v12->klass;
    v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_16:
      v17 = sub_1C87870(v12, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v17)(v12, *(_QWORD *)(v17 + 8));
  }
  p_resourceCatalog->klass = 0;
  sub_1C36FFC(p_resourceCatalog, 0, v6, v7);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1C372B4(pageSwitcher);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
}


void ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *Instance; // x20
  Il2CppObject *v7; // x0
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C46B55 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    sub_1C37058(&Method_ClassBoardRootComponent__beginInitialize_b__30_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C46B55 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C372A4(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resourceCatalog, (int32_t)v3, v4, v5);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !v7 )
      goto LABEL_10;
    BYTE2(v7[12].klass) = 0;
  }
  pageSwitcher = this->fields.pageSwitcher;
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__30_0__, 0);
  if ( !pageSwitcher )
LABEL_10:
    sub_1C372B4(v7);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v9, 0);
}


void ClassBoardRootComponent__beginStartUp(
        ClassBoardRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  if ( (byte_4C46B56 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    byte_4C46B56 = 1;
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
      ClassBoardPageSwitcher__StartUp(pageSwitcher, data, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(pageSwitcher);
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_11;
  ClassBoardPageSwitcher__StartUpByTransitionInfo(pageSwitcher, data, 0);
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


void ClassBoardRootComponent__PlayMovieCoroutine_d__35___ctor(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardRootComponent__PlayMovieCoroutine_d__35__MoveNext(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *v4; // x19
  int32_t _1__state; // w8
  struct ClassBoardRootComponent_o *_4__this; // x20
  Il2CppObject *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Action_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Action_o *callBackAfter; // x1
  struct ClassBoardBackground_o *classBoardBackground; // x8
  float grandScoreNoneDialogUMedalCreateEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v18; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool result; // w0
  struct ClassBoardRootComponent___c__DisplayClass35_0_o *_8__1; // x21
  System_String_o *movieName; // x22
  System_String_o *MoviePath; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v31; // x8
  Il2CppObject *v32; // x23
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v34; // x22
  struct ClassBoardRootComponent___c__DisplayClass35_0_o *v35; // x8
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__35_o **p_criMoviePlayerPanelObj; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_GameObject_o *criMoviePlayerPanelObj; // x22
  Il2CppObject *Component_object; // x0
  ClassBoardRootComponent__PlayMovieCoroutine_d__35_o **p_moviePlayer; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct ClassBoardRootComponent___c__DisplayClass35_0_o *v45; // x8
  ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *v46; // x23
  System_String_o *movieFilePath; // x24
  System_String_o *Path; // x25
  BgmManager_c *v49; // x0
  Il2CppObject *v50; // x26
  float masterVolume; // s8
  System_Action_o *v52; // x19
  System_String_o *BgmName; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x19
  AvalonSceneManager_c *v57; // x8
  float v58; // s8
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ClassBoardRootComponent___c_StaticFields *static_fields; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  CGThumbnailListItem_o *v64; // x19

  v4 = this;
  if ( (byte_4C46B63 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&CommonUI_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__35_2__);
    sub_1C37058(&Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__0__);
    sub_1C37058(&Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__1__);
    sub_1C37058(&ClassBoardRootComponent___c__DisplayClass35_0_TypeInfo);
    sub_1C37058(&ClassBoardRootComponent___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)sub_1C37058(&StringLiteral_1374/*"2DUI"*/);
    byte_4C46B63 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1C372A4(ClassBoardRootComponent___c__DisplayClass35_0_TypeInfo);
      System_Object___ctor(v7, 0);
      v4->fields.__8__1 = (struct ClassBoardRootComponent___c__DisplayClass35_0_o *)v7;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v8, v9);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_56;
      v12 = (struct System_Action_o *)v4->fields.__4__this;
      this->fields.callBackAfter = v12;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callBackAfter, (int32_t)v12, v10, v11);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_56;
      callBackAfter = v4->fields.callBackAfter;
      *(_QWORD *)&this->fields.isPlayWithDelay = callBackAfter;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isPlayWithDelay, (int32_t)callBackAfter, v13, v14);
      if ( v4->fields.isPlayWithDelay )
      {
        if ( _4__this )
        {
          classBoardBackground = _4__this->fields.classBoardBackground;
          if ( classBoardBackground )
          {
            grandScoreNoneDialogUMedalCreateEffectDelayTime = classBoardBackground->fields.grandScoreNoneDialogUMedalCreateEffectDelayTime;
            v18 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v18, grandScoreNoneDialogUMedalCreateEffectDelayTime, 0);
            v4->fields.__2__current = (Il2CppObject *)v18;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v18, v20, v21);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
LABEL_56:
        sub_1C372B4(this);
      }
    }
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    _8__1->fields.isDownloaded = 0;
    movieName = v4->fields.movieName;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    MoviePath = CommonUI__CreateMoviePath(movieName, 0);
    _8__1->fields.movieFilePath = MoviePath;
    sub_1C36FFC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)MoviePath, v26, v27);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_56;
    this->fields.__2__current = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v28, v29);
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    v32 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
    v34 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v34, v32, Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__0__, 0);
    if ( !Instance )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)CommonUI__maskFadeout(
                                                                    (CommonUI_o *)Instance,
                                                                    1,
                                                                    DEFAULT_FADE_TIME,
                                                                    v34,
                                                                    0);
  }
  v35 = v4->fields.__8__1;
  if ( !v35 )
    goto LABEL_56;
  if ( v35->fields.isDownloaded )
  {
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)CommonUI_TypeInfo;
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
    p_criMoviePlayerPanelObj = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o **)&_4__this->fields.criMoviePlayerPanelObj;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&_4__this->fields.criMoviePlayerPanelObj,
      (int32_t)CriMoviePlayerObject,
      v38,
      v39);
    criMoviePlayerPanelObj = _4__this->fields.criMoviePlayerPanelObj;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)UnityEngine_LayerMask__NameToLayer(
                                                                    (System_String_o *)StringLiteral_1374/*"2DUI"*/,
                                                                    0);
    if ( !criMoviePlayerPanelObj )
      goto LABEL_56;
    UnityEngine_GameObject__set_layer(criMoviePlayerPanelObj, (int32_t)this, 0);
    this = *p_criMoviePlayerPanelObj;
    if ( !*p_criMoviePlayerPanelObj )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    _4__this->fields.moviePlayer = (struct CRIMoviePlayer_o *)Component_object;
    p_moviePlayer = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o **)&_4__this->fields.moviePlayer;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.moviePlayer, (int32_t)Component_object, v43, v44);
    v45 = v4->fields.__8__1;
    if ( !v45 )
      goto LABEL_56;
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)v45->fields.downloadedData;
    if ( !this )
      goto LABEL_56;
    v46 = *p_moviePlayer;
    movieFilePath = v45->fields.movieFilePath;
    Path = AssetData__get_Path((AssetData_o *)this, 0);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4C3DDFF )
    {
      sub_1C37058(&BgmManager_TypeInfo);
      byte_4C3DDFF = 1;
    }
    v49 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v49 = BgmManager_TypeInfo;
    }
    v50 = (Il2CppObject *)v4->fields.__8__1;
    masterVolume = v49->static_fields->masterVolume;
    v52 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v52, v50, Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__1__, 0);
    if ( !v46 )
      goto LABEL_56;
    CRIMoviePlayer__Initialize(
      (CRIMoviePlayer_o *)v46,
      movieFilePath,
      Path,
      masterVolume,
      0,
      0,
      v52,
      0,
      0,
      0,
      0,
      1,
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
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.bgmName, (int32_t)BgmName, v54, v55);
    BgmManager__StopBgm(0, 0.0, 0, 0);
    v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v57 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v57 = AvalonSceneManager_TypeInfo;
    }
    this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)ClassBoardRootComponent___c_TypeInfo;
    v58 = v57->static_fields->DEFAULT_FADE_TIME;
    if ( !ClassBoardRootComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent___c_TypeInfo);
      this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)ClassBoardRootComponent___c_TypeInfo;
    }
    monitor = (System_Action_o *)this[2].fields.callBackAfter->monitor;
    if ( !monitor )
    {
      if ( !LODWORD(this[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *)ClassBoardRootComponent___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[2].fields.callBackAfter->klass;
      monitor = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(monitor, klass, Method_ClassBoardRootComponent___c__PlayMovieCoroutine_b__35_2__, 0);
      static_fields = ClassBoardRootComponent___c_TypeInfo->static_fields;
      static_fields->__9__35_2 = monitor;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__35_2, (int32_t)monitor, v62, v63);
    }
    if ( !v56 )
      goto LABEL_56;
    CommonUI__maskFadein((CommonUI_o *)v56, v58, monitor, 0);
    return 0;
  }
  v4->fields.__2__current = 0;
  v64 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(v64, 0, v2, v3);
  LODWORD(v64[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *ClassBoardRootComponent__PlayMovieCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardRootComponent__PlayMovieCoroutine_d__35__System_Collections_IEnumerator_Reset(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardRootComponent__PlayMovieCoroutine_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardRootComponent__PlayMovieCoroutine_d__35__System_Collections_IEnumerator_get_Current(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardRootComponent__PlayMovieCoroutine_d__35__System_IDisposable_Dispose(
        ClassBoardRootComponent__PlayMovieCoroutine_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46B5F & 1) == 0 )
  {
    sub_1C37058(&ClassBoardRootComponent___c_TypeInfo);
    byte_4C46B5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardRootComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardRootComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardRootComponent___c___ctor(ClassBoardRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c___PlayMovieCoroutine_b__35_2(
        ClassBoardRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardRootComponent___c__DisplayClass35_0___ctor(
        ClassBoardRootComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c__DisplayClass35_0___PlayMovieCoroutine_b__0(
        ClassBoardRootComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *_9__3; // x21
  System_String_o *movieFilePath; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C46B60 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__3__);
    byte_4C46B60 = 1;
  }
  _9__3 = this->fields.__9__3;
  movieFilePath = this->fields.movieFilePath;
  if ( !_9__3 )
  {
    _9__3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardRootComponent___c__DisplayClass35_0__PlayMovieCoroutine_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v5, v6);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(movieFilePath, _9__3, 1, 0);
}


void ClassBoardRootComponent___c__DisplayClass35_0___PlayMovieCoroutine_b__1(
        ClassBoardRootComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  ClassBoardRootComponent__OnMovieEnd(this->fields.__4__this, this->fields.callBackAfter, v2);
}


void ClassBoardRootComponent___c__DisplayClass35_0___PlayMovieCoroutine_b__3(
        ClassBoardRootComponent___c__DisplayClass35_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AssetData_o **p_downloadedData; // x19

  this->fields.downloadedData = data;
  p_downloadedData = &this->fields.downloadedData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.downloadedData, (int32_t)data, (int32_t)method, v3);
  *((_BYTE *)p_downloadedData + 8) = 1;
}


void ClassBoardRootComponent___c__DisplayClass36_0___ctor(
        ClassBoardRootComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardRootComponent___c__DisplayClass36_0___OnMovieEnd_b__0(
        ClassBoardRootComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent___c__DisplayClass36_0_o *v2; // x19
  struct ClassBoardRootComponent_o *_4__this; // x8
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4C46B61 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ClassBoardRootComponent___c__DisplayClass36_0_o *)sub_1C37058(&Method_ClassBoardRootComponent___c__DisplayClass36_0__OnMovieEnd_b__1__);
    byte_4C46B61 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (ClassBoardRootComponent___c__DisplayClass36_0_o *)_4__this->fields.criMoviePlayerPanelObj;
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (ClassBoardRootComponent___c__DisplayClass36_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ClassBoardRootComponent___c__DisplayClass36_0__OnMovieEnd_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v5 )
LABEL_11:
    sub_1C372B4(this);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__1, 0);
}


void ClassBoardRootComponent___c__DisplayClass36_0___OnMovieEnd_b__1(
        ClassBoardRootComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  char *Instance; // x0
  struct ClassBoardRootComponent_o *_4__this; // x8
  System_String_o *bgmName; // x20
  struct ClassBoardRootComponent_o *v6; // x8
  UnityEngine_Object_o *criMoviePlayerPanelObj; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Action_o *callBackAfter; // x8

  if ( (byte_4C46B62 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C46B62 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_15;
  criMoviePlayerPanelObj = (UnityEngine_Object_o *)v6->fields.criMoviePlayerPanelObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(criMoviePlayerPanelObj, 0);
  Instance = (char *)this->fields.__4__this;
  if ( !Instance
    || (*((_QWORD *)Instance + 15) = 0,
        sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 120), 0, v8, v9),
        (Instance = (char *)this->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C372B4(Instance);
  }
  *((_QWORD *)Instance + 14) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 112), 0, v10, v11);
  callBackAfter = this->fields.callBackAfter;
  if ( callBackAfter )
    ((void (__fastcall *)(intptr_t, intptr_t))callBackAfter->fields.invoke_impl)(
      callBackAfter->fields.method_code,
      callBackAfter->fields.method);
}