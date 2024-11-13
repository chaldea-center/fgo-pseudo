void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  __int64 v12; // x1

  if ( (byte_4B196AF & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23978/*"sy2"*/, v9, v10);
    byte_4B196AF = 1;
  }
  v11 = StringLiteral_23978/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23978/*"sy2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClickCloseSe, v11, v2, v3, v4, v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardEffectListDialog__Awake(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialog__ChangeTab(
        ClassBoardEffectListDialog_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *skillListComponentList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int v23; // w9
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B196AA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v17, v18);
    byte_4B196AA = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v27, 0, sizeof(v27));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    skillListComponentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v26;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v23 != 0,
          v22) )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v20 )
      break;
    if ( !i.fields._current )
      sub_1BCAA3C(v20, v21);
    if ( HIDWORD(i.fields._current[8].klass) == baseId )
      v23 = LOBYTE(i.fields._current[10].klass) ^ 1;
    else
      v23 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1BCAA3C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    skillListComponentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1BCAA3C(0LL, v24);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v27.fields._current,
      LODWORD(v27.fields._current[3].monitor) == baseId,
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B196AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog_EndClose__, v5, v6);
    byte_4B196AC = 1;
  }
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  PartyOrganizationUtility_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B196AD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B196AD = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeEndFunc->fields.m_target)(
      closeEndFunc->fields.original_method_info,
      *(_QWORD *)&closeEndFunc->fields.extra_arg);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndOpen(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardEffectListDialog__ExecuteCallback(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.loadEndCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialog__Init(
        ClassBoardEffectListDialog_o *this,
        bool isResouceLoaded,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x23
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x20
  const MethodInfo *v60; // x2

  if ( (byte_4B196A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isResouceLoaded, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v17, v18);
    sub_1BCA7E0(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v19, v20);
    byte_4B196A4 = 1;
  }
  v21 = sub_1BCAA2C(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, isResouceLoaded, callback, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_9;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillListComponentList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tabComponentList, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v21 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1BCAA3C(gameObject, v23);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v21,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v59, v60);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float targetFrameRate; // s0

  if ( (byte_4B196A6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6382/*"ExecuteCallback"*/, v4, v5);
    byte_4B196A6 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6382/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0LL);
}


void __fastcall ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  AssetStorageLoadWrapper_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AtlasManagerUnit_o *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_object__o *v53; // x20
  ChainableActionBase_o *v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  ChainableActionParallel_o *v65; // x20
  __int64 v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4B196A5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action___TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Action_TypeInfo, v14, v15);
    sub_1BCA7E0(&AssetStorageLoadWrapper_TypeInfo, v16, v17);
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, v18, v19);
    sub_1BCA7E0(&ChainableActionParallel_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog_LoadEnd__, v22, v23);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v24, v25);
    sub_1BCA7E0(&StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v26, v27);
    byte_4B196A5 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadEndCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v31 = (AssetStorageLoadWrapper_o *)sub_1BCAA2C(AssetStorageLoadWrapper_TypeInfo, v28, v29, v30);
  AssetStorageLoadWrapper___ctor(v31, 0LL);
  this->fields.assetStorageLoadWrapper = v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assetStorageLoadWrapper,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v42 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v39, v40, v41);
  AtlasManagerUnit___ctor(v42, (System_String_o *)StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v42;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconAtlasManagerUnit,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = sub_1BCA888(System_Action_Action____TypeInfo, 1LL);
  v53 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v50, v51, v52);
  System_Action_object____ctor(
    v53,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0LL);
  if ( !v49 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v49 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v49 + 32) = v53;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v53, v56, v57, v58, v59, v60, v61);
  v65 = (ChainableActionParallel_o *)sub_1BCAA2C(ChainableActionParallel_TypeInfo, v62, v63, v64);
  ChainableActionParallel___ctor_47119316(v65, (System_Action_Action__array *)v49, 0LL);
  v66 = sub_1BCA888(System_Action___TypeInfo, 1LL);
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v66 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v66 + 24) )
LABEL_11:
    sub_1BCAA44(v54, v55);
  *(_QWORD *)(v66 + 32) = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v70, v71, v72, v73, v74, v75, v76);
  if ( !v65 || (v54 = ChainableActionBase__Final((ChainableActionBase_o *)v65, (System_Action_array *)v66, 0LL)) == 0LL )
LABEL_10:
    sub_1BCAA3C(v54, v55);
  ChainableActionBase__Execute(v54, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v7; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B196AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog_OnClickClose__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B196AB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v7 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v8 = Method_ClassBoardEffectListDialog_OnClickClose__;
    v9 = v7;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardEffectListDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    if ( v9 )
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v10, this->fields.onClickCloseSe, 0LL);
    ClassBoardEffectListDialog__Close(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialog__Open(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *closeFunc,
        int32_t dispBaseId,
        bool isAllDisp,
        System_Action_o *callback,
        int32_t dispType,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  System_String_o **v58; // x8
  UILabel_o *TitleLabel; // x25
  System_String_o *v60; // x26
  void *tabListParent; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *v72; // x22
  ClassBoardEffectListDialog___c_c *v73; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x23
  Il2CppObject *v75; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Collections_Generic_List_TOutput__o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  ClassBoardEffectListDialog___c_c *v87; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x22
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v90; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  const MethodInfo *v99; // x4
  const MethodInfo *v100; // x6
  int v101; // w8
  void *v102; // x22
  unsigned int v103; // w28
  ClassBoardBaseEntity_o *v104; // x23
  int32_t id; // w8
  bool v106; // w24
  const MethodInfo *v107; // x6
  struct System_Int32_array *v108; // x22
  _BOOL8 v109; // x0
  __int64 v110; // x1
  const MethodInfo *v111; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int monitor; // w25
  bool v116; // w26
  const MethodInfo *v117; // x2
  __int64 v118; // x1
  __int64 v119; // x1
  const MethodInfo *v120; // x6
  UnityEngine_Object_o *v121; // x20
  System_String_o *v122; // x1
  __int64 v123; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  __int64 v125; // x1
  struct UILabel_o *v126; // x20
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  System_Action_o *v130; // x20
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *v132; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B196A7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeFunc, *(_QWORD *)&dispBaseId);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog_EndOpen__, v14, v15);
    sub_1BCA7E0(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v18, v19);
    sub_1BCA7E0(&DataManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v24, v25);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v26, v27);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      v28,
      v29);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__,
      v30,
      v31);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v32,
      v33);
    sub_1BCA7E0(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v42, v43);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v44, v45);
    sub_1BCA7E0(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v46, v47);
    sub_1BCA7E0(&ClassBoardEffectListDialog___c_TypeInfo, v48, v49);
    sub_1BCA7E0(&StringLiteral_3522/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_3523/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v56, v57);
    byte_4B196A7 = 1;
  }
  entity = 0LL;
  memset(&v133, 0, sizeof(v133));
  v132 = 0LL;
  if ( supportClassBoard )
    v58 = (System_String_o **)&StringLiteral_3523/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  else
    v58 = (System_String_o **)&StringLiteral_3522/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  TitleLabel = this->fields.TitleLabel;
  v60 = *v58;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, closeFunc);
  tabListParent = LocalizationManager__Get(v60, 0LL);
  if ( !TitleLabel )
    goto LABEL_75;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)closeFunc,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_75;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    v72 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v73 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo, v62);
      v73 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v73->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v73->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v73, v62);
        v73 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v75 = (Il2CppObject *)v73->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo,
                                                          v62,
                                                          v70,
                                                          v71);
      System_Converter_object__object____ctor(_9__27_0, v75, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0LL);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
        (int64_t)_9__27_0,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    v83 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v72,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v87 = ClassBoardEffectListDialog___c_TypeInfo;
    v88 = (System_Collections_Generic_IEnumerable_TSource__o *)v83;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo, v84);
      v87 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v87->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v87->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v87, v84);
        v87 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v90 = (Il2CppObject *)v87->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_ClassBoardBaseEntity__int__TypeInfo,
                                                 v84,
                                                 v85,
                                                 v86);
      System_Func_object__int____ctor(_9__27_1, v90, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0LL);
      v91 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v91->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v91->__9__27_1, (int64_t)_9__27_1, v92, v93, v94, v95, v96, v97);
    }
    v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v88,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v98,
                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_75;
    v101 = *((_DWORD *)tabListParent + 6);
    v102 = tabListParent;
    if ( v101 >= 1 )
    {
      v103 = 0;
      while ( 1 )
      {
        if ( v103 >= v101 )
          sub_1BCAA44(tabListParent, v62);
        v104 = (ClassBoardBaseEntity_o *)*((_QWORD *)v102 + (int)v103 + 4);
        if ( !v104 )
          break;
        id = v104->fields.id;
        v106 = id == 1;
        if ( supportClassBoard )
          v106 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v104, id == 1, dispType, 1, 0LL, v100);
        ClassBoardEffectListDialog__SetTab(this, v104, v106, supportClassBoard != 0LL, v99);
        v101 = *((_DWORD *)v102 + 6);
        if ( (int)++v103 >= v101 )
          goto LABEL_35;
      }
LABEL_75:
      sub_1BCAA3C(tabListParent, v62);
    }
LABEL_35:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_75;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v107);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_75;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v131,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v108 = 0LL;
      v133 = v131;
      while ( 1 )
      {
        v109 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v133,
                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v109 )
          break;
        current = v133.fields._current;
        if ( !v133.fields._current )
          sub_1BCAA3C(v109, v110);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v133.fields._current[3].monitor;
        if ( squareIds )
          v108 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v108 )
            sub_1BCAA3C(v109, v110);
          v116 = v108->max_length != 0;
        }
        else
        {
          v116 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v133.fields._current,
          classBoardBaseId == monitor,
          v111);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v116 && classBoardBaseId == monitor,
          v117);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v133,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_75;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)tabListParent + 440LL))(
      tabListParent,
      *(_QWORD *)(*(_QWORD *)tabListParent + 448LL));
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_75;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
      v126 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v126 )
        goto LABEL_75;
      v122 = (System_String_o *)tabListParent;
      tabListParent = v126;
      goto LABEL_73;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v118);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v132,
           dispBaseId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v132, 1, dispType, 0, 0LL, v120);
    }
    v121 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
    if ( UnityEngine_Object__op_Inequality(v121, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_75;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_75;
      v122 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
      UILabel__set_text((UILabel_o *)tabListParent, v122, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v130 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v127, v128, v129);
  System_Action___ctor(v130, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v130, 0, 0LL);
}


void __fastcall ClassBoardEffectListDialog__ReleaseAll(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardEffectListDialog__SetIcon(
        ClassBoardEffectListDialog_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  if ( !this->fields.isResouceLoaded )
  {
    iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
    if ( iconAtlasManagerUnit )
      goto LABEL_3;
LABEL_5:
    sub_1BCAA3C(iconAtlasManagerUnit, sprite);
  }
  iconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
  if ( !iconAtlasManagerUnit )
    goto LABEL_5;
LABEL_3:
  AtlasManagerUnit__SetUI(iconAtlasManagerUnit, sprite, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialog__SetList(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *skillListObjectForAll; // x24
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x26
  const MethodInfo *v22; // x2
  Il2CppObject *v23; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  __int64 v34; // x1
  __int64 v35; // x2
  bool v36; // w23
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x5
  int32_t v39; // w1

  if ( (byte_4B196A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___,
      baseEntity,
      isDisp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B196A8 = 1;
  }
  if ( !isAll )
    goto LABEL_7;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, baseEntity);
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0LL, 0LL) )
LABEL_7:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_24;
  v20 = *p_skillListObjectForAll;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  if ( !this )
    goto LABEL_24;
  skillListParent = BaseMonoBehaviour__createObject(
                      (BaseMonoBehaviour_o *)this,
                      v20,
                      (UnityEngine_Transform_o *)skillListParent,
                      0LL,
                      0LL);
  if ( !skillListParent )
    goto LABEL_24;
  v21 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_24;
  v23 = (Il2CppObject *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v22);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_24;
  v30 = *(_QWORD *)&skillListParent->fields.m_CachedPtr;
  v31 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(skillListParent[1].klass);
  if ( !v30 )
    goto LABEL_24;
  klass_low = SLODWORD(skillListParent[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skillListParent,
      v23,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * klass_low;
    LODWORD(skillListParent[1].klass) = klass_low + 1;
    *(_QWORD *)(v33 + 32) = v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
  }
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v34, v35);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v36 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v23,
    baseEntity,
    v36,
    supportClassBoard,
    v37);
  v39 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v23,
    v39,
    dispType,
    v36,
    supportClassBoard,
    v38);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
  if ( !skillListParent )
LABEL_24:
    sub_1BCAA3C(skillListParent, baseEntity);
  UnityEngine_GameObject__SetActive(skillListParent, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialog__SetTab(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *tabObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v23; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v25; // x23
  Il2CppClass **v26; // x0
  UIGrid_o *tabGird; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x5

  if ( (byte_4B196A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity, isDisp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9, v10);
    byte_4B196A9 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_16;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_16;
  v14 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  tabComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !tabComponentList )
    goto LABEL_16;
  items = tabComponentList->fields._items;
  v23 = Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__;
  ++tabComponentList->fields._version;
  if ( !items )
    goto LABEL_16;
  size = tabComponentList->fields._size;
  v25 = (ClassBoardEffectDialogTabComponent_o *)skillListParent;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tabComponentList,
      (Il2CppObject *)skillListParent,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v25, v15, v16, v17, v18, v19, v20);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !baseEntity || !v25 )
LABEL_16:
    sub_1BCAA3C(skillListParent, baseEntity);
  ClassBoardEffectDialogTabComponent__Setup(v25, this, baseEntity->fields.id, isDisp, isSupport, v30);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1BCAA3C(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B196AE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15809/*"Window/CloseBtn"*/, method, v2);
    byte_4B196AE = 1;
  }
  return (System_String_o *)StringLiteral_15809/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B196B0 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectListDialog___c_TypeInfo, v1, v2);
    byte_4B196B0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardEffectListDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ClassBoardEffectListDialog___c___ctor(ClassBoardEffectListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardBaseEntity_o *__fastcall ClassBoardEffectListDialog___c___Open_b__27_0(
        ClassBoardEffectListDialog___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B196B1 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBaseEntity_TypeInfo, entity, method);
    byte_4B196B1 = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ClassBoardBaseEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardBaseEntity_TypeInfo )
    return (ClassBoardBaseEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall ClassBoardEffectListDialog___c___Open_b__27_1(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.id;
}


void __fastcall ClassBoardEffectListDialog___c__DisplayClass22_0___ctor(
        ClassBoardEffectListDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectListDialog___c__DisplayClass22_0___Init_b__0(
        ClassBoardEffectListDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B196B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B196B2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}