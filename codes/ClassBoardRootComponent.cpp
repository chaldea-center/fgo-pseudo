void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19722 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardPageSwitcher_TypeInfo, method, v2);
    byte_4B19722 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(ClassBoardPageSwitcher_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  this->fields.pageSwitcher = (struct ClassBoardPageSwitcher_o *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pageSwitcher, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__Awake(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardRootComponent__CreateBackground(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationUtility_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  struct IClassBoardResourceCatalog_o *v19; // x21
  IClassBoardResourceCatalog_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 p_method; // x0
  Il2CppObject *v24; // x21
  __int64 v25; // x1
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B1971F & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1971F = 1;
  }
  p_classBoardBackground = (PartyOrganizationUtility_o *)&this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    resourceCatalog = (UnityEngine_Object_o *)this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v13 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_11;
        }
        v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_11:
        v15 = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v16 = (*(__int64 (__fastcall **)(UnityEngine_Object_o *, _QWORD))v15)(resourceCatalog, *(_QWORD *)(v15 + 8));
      if ( v16 )
        resourceCatalog = *(UnityEngine_Object_o **)(v16 + 96);
      else
        resourceCatalog = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v17 = UnityEngine_Object__op_Equality(resourceCatalog, 0LL, 0LL);
    if ( (v17 & 1) == 0 )
    {
      v19 = this->fields.resourceCatalog;
      if ( !v19 )
        goto LABEL_31;
      v20 = v19->klass;
      v21 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
      {
        v22 = &v20->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_25;
        }
        p_method = (__int64)&v20->vtable[*v22].method;
      }
      else
      {
LABEL_25:
        p_method = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v17 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v19,
              *(_QWORD *)(p_method + 8));
      if ( !v17 )
LABEL_31:
        sub_1BCAA3C(v17, v18);
      v24 = *(Il2CppObject **)(v17 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      v27 = UnityEngine_Object__Instantiate_object__49903816(
              v24,
              transform,
              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (PartyOrganizationUtility_c *)v27;
      sub_1BCA784(p_classBoardBackground, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1BCAA3C(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, method);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19723 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B19723 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ClassBoardRootComponent__beginFinish(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ClassBoardPageSwitcher_o *pageSwitcher; // x0
  __int64 v11; // x1
  struct ClassBoardBackground_o **p_classBoardBackground; // x20
  UnityEngine_Object_o *classBoardBackground; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v29; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v32; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x1

  if ( (byte_4B19721 & 1) == 0 )
  {
    sub_1BCA7E0(&System_GC_TypeInfo, method, v2);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8, v9);
    byte_4B19721 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, method);
  p_classBoardBackground = &this->fields.classBoardBackground;
  classBoardBackground = (UnityEngine_Object_o *)this->fields.classBoardBackground;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(classBoardBackground, 0LL, 0LL) )
  {
    pageSwitcher = (ClassBoardPageSwitcher_o *)*p_classBoardBackground;
    if ( !*p_classBoardBackground )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)pageSwitcher,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.classBoardBackground, 0LL, v22, v23, v24, v25, v26, v27);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (PartyOrganizationUtility_o *)&this->fields.resourceCatalog;
  v29 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v29->klass;
    v32 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v32;
        p_offset += 2;
        if ( !v32 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C1C7C0(v29, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v29, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_1BCA784(p_resourceCatalog, 0LL, v14, v15, v16, v17, v18, v19);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1BCAA3C(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v35);
  System_GC__Collect_63447616(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ClassBoardResourceCatalogAssetBundle_o *v11; // x20
  const MethodInfo *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3

  if ( (byte_4B19720 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v6, v7);
    byte_4B19720 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v11 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BCAA2C(
                                                    ClassBoardResourceCatalogAssetBundle_TypeInfo,
                                                    v8,
                                                    v9,
                                                    v10);
  ClassBoardResourceCatalogAssetBundle___ctor(v11, v12);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resourceCatalog, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_1BCAA3C(v24, v25);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v23, v26);
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
    sub_1BCAA3C(0LL, v4);
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