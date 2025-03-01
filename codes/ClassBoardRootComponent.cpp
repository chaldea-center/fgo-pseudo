void __fastcall ClassBoardRootComponent___ctor(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C00E15 & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardPageSwitcher_TypeInfo, method);
    byte_4C00E15 = 1;
  }
  v3 = (ClassBoardPageSwitcher_o *)sub_1C2E378(ClassBoardPageSwitcher_TypeInfo);
  ClassBoardPageSwitcher___ctor(v3, 0LL);
  this->fields.pageSwitcher = v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.pageSwitcher, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  PartyOrganizationUtility_o *p_classBoardBackground; // x19
  UnityEngine_Object_o *classBoardBackground; // x21
  UnityEngine_Object_o *resourceCatalog; // x21
  UnityEngine_Object_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  struct IClassBoardResourceCatalog_o *v15; // x21
  IClassBoardResourceCatalog_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 p_method; // x0
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *transform; // x20
  Il2CppObject *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C00E12 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_ClassBoardBackground___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C00E12 = 1;
  }
  p_classBoardBackground = (PartyOrganizationUtility_o *)&this->fields.classBoardBackground;
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
        v11 = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
      v15 = this->fields.resourceCatalog;
      if ( !v15 )
        goto LABEL_31;
      v16 = v15->klass;
      v17 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
      {
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v18 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_25;
        }
        p_method = (__int64)&v16->vtable[*v18].method;
      }
      else
      {
LABEL_25:
        p_method = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v13 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              v15,
              *(_QWORD *)(p_method + 8));
      if ( !v13 )
LABEL_31:
        sub_1C2E388(v13, v14);
      v20 = *(Il2CppObject **)(v13 + 96);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object__50692032(
              v20,
              transform,
              (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_ClassBoardBackground___);
      p_classBoardBackground->klass = (PartyOrganizationUtility_c *)v22;
      sub_1C2E0D0(p_classBoardBackground, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    }
  }
}


void __fastcall ClassBoardRootComponent__Update(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1C2E388(0LL, method);
  ClassBoardPageSwitcher__Update(pageSwitcher, 0LL);
}


void __fastcall ClassBoardRootComponent___beginInitialize_b__25_0(
        ClassBoardRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C00E16 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C00E16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *gameObject; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  PartyOrganizationUtility_o *p_resourceCatalog; // x19
  struct IClassBoardResourceCatalog_o *v23; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // t1
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v26; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4C00E14 & 1) == 0 )
  {
    sub_1C2E12C(&System_GC_TypeInfo, method);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C00E14 = 1;
  }
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_23;
  ClassBoardPageSwitcher__Release(pageSwitcher, 0LL);
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
    UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
    *p_classBoardBackground = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.classBoardBackground, 0LL, v16, v17, v18, v19, v20, v21);
  }
  resourceCatalog = this->fields.resourceCatalog;
  p_resourceCatalog = (PartyOrganizationUtility_o *)&this->fields.resourceCatalog;
  v23 = resourceCatalog;
  if ( resourceCatalog )
  {
    klass = v23->klass;
    v26 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v26;
        p_offset += 2;
        if ( !v26 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C8010C(v23, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(v23, *(_QWORD *)(p_method + 8));
  }
  p_resourceCatalog->klass = 0LL;
  sub_1C2E0D0(p_resourceCatalog, 0LL, v9, v10, v11, v12, v13, v14);
  pageSwitcher = (ClassBoardPageSwitcher_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !pageSwitcher )
LABEL_23:
    sub_1C2E388(pageSwitcher, method);
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)pageSwitcher, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64282240(0LL);
}


void __fastcall ClassBoardRootComponent__beginInitialize(ClassBoardRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ClassBoardResourceCatalogAssetBundle_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ClassBoardPageSwitcher_o *pageSwitcher; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4C00E13 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v3);
    sub_1C2E12C(&Method_ClassBoardRootComponent__beginInitialize_b__25_0__, v4);
    byte_4C00E13 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  v5 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C2E378(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v5, 0LL);
  this->fields.resourceCatalog = (struct IClassBoardResourceCatalog_o *)v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.resourceCatalog, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 5, 20, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  v13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardRootComponent__beginInitialize_b__25_0__, 0LL);
  if ( !pageSwitcher )
    sub_1C2E388(v14, v15);
  ClassBoardPageSwitcher__Init(pageSwitcher, this, v13, 0LL);
}


void __fastcall ClassBoardRootComponent__beginStartUp(
        ClassBoardRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardPageSwitcher_o *pageSwitcher; // x0

  ClassBoardRootComponent__CreateBackground(this, (const MethodInfo *)data);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  pageSwitcher = this->fields.pageSwitcher;
  if ( !pageSwitcher )
    sub_1C2E388(0LL, v5);
  ClassBoardPageSwitcher__StartUp(pageSwitcher, data, 0LL);
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