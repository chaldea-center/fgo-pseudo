void ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1

  if ( (byte_597468E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&StringLiteral_25165/*"sy2"*/);
    byte_597468E = 1;
  }
  v9 = StringLiteral_25165/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_25165/*"sy2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClickCloseSe, v9, v2, v3, v4, v5, v6, v7);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardEffectListDialog__Awake(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectListDialog__ChangeTab(
        ClassBoardEffectListDialog_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillListComponentList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool v8; // w1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_5974689 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    byte_5974689 = 1;
  }
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  memset(&v13, 0, sizeof(v13));
  memset(&v12, 0, sizeof(v12));
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    skillListComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  v13 = v11;
  v11.fields._list = 0;
  *(_QWORD *)&v11.fields._index = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_2213CDC(0, v6);
    v8 = LODWORD(v13.fields._current[8].klass) == baseId && LOBYTE(v13.fields._current[9].monitor) == 0;
    ClassBoardEffectListDialogSkillListComponent__SetDisp(
      (ClassBoardEffectListDialogSkillListComponent_o *)v13.fields._current,
      v8,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_2213CDC(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    skillListComponentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  v11.fields._list = 0;
  *(_QWORD *)&v11.fields._index = &v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_2213CDC(0, v9);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v12.fields._current,
      *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&word_38) == baseId,
      v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_597468B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialog_EndClose__);
    byte_597468B = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_597468C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597468C = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_2213A04(p_closeEndFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))closeEndFunc->fields.invoke_impl)(
      closeEndFunc->fields.method_code,
      closeEndFunc->fields.method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardEffectListDialog__EndOpen(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardEffectListDialog__ExecuteCallback(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.loadEndCallback, 0);
}


void ClassBoardEffectListDialog__Init(
        ClassBoardEffectListDialog_o *this,
        bool isResouceLoaded,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x2

  if ( (byte_5974683 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__);
    sub_2213A60(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
    byte_5974683 = 1;
  }
  v7 = sub_2213CCC(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v22 = System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo;
  this->fields.isButtonEnable = 0;
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillListComponentList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tabComponentList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_2213CDC(gameObject, v9);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0);
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v7, Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, 0);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v37, v38);
}


void ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float targetFrameRate; // s0

  if ( (byte_5974685 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&StringLiteral_6570/*"ExecuteCallback"*/);
    byte_5974685 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6570/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetStorageLoadWrapper_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x21
  System_Action_object__o *v26; // x20
  ChainableActionBase_o *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  ChainableActionParallel_o *v35; // x20
  __int64 v36; // x21
  System_Action_o *v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_5974684 & 1) == 0 )
  {
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetStorageLoadWrapper_TypeInfo);
    sub_2213A60(&AtlasManagerUnit_TypeInfo);
    sub_2213A60(&ChainableActionParallel_TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialog_LoadEnd__);
    sub_2213A60(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__);
    sub_2213A60(&StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_5974684 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (AssetStorageLoadWrapper_o *)sub_2213CCC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0);
  this->fields.assetStorageLoadWrapper = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v18 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v18, (System_String_o *)StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.iconAtlasManagerUnit = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconAtlasManagerUnit,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = sub_2213B20(System_Action_Action____TypeInfo, 1);
  v26 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0);
  if ( !v25 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v25 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v25 + 32) = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v26, v29, v30, v31, v32, v33, v34);
  v35 = (ChainableActionParallel_o *)sub_2213CCC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_56108200(v35, (System_Action_Action__array *)v25, 0);
  v36 = sub_2213B20(System_Action___TypeInfo, 1);
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0);
  if ( !v36 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v36 + 24) )
LABEL_11:
    sub_2213CE4(v27);
  *(_QWORD *)(v36 + 32) = v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  if ( !v35 || (v27 = ChainableActionBase__Final((ChainableActionBase_o *)v35, (System_Action_array *)v36, 0)) == 0 )
LABEL_10:
    sub_2213CDC(v27, v28);
  ChainableActionBase__Execute(v27, 0);
}


void ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v4; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_597468A & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardEffectListDialog_OnClickClose__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597468A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0, 0);
    v5 = Method_ClassBoardEffectListDialog_OnClickClose__;
    if ( v4 )
    {
      if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ClassBoardEffectListDialog_OnClickClose__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    }
    else
    {
      if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ClassBoardEffectListDialog_OnClickClose__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySe(v8, this->fields.onClickCloseSe, 0, 0);
    }
    ClassBoardEffectListDialog__Close(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectListDialog__Open(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *closeFunc,
        int32_t dispBaseId,
        bool isAllDisp,
        System_Action_o *callback,
        int32_t dispType,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        BattleServantData_array *battleServantList,
        const MethodInfo *method)
{
  __int64 v18; // x1
  System_String_o **v19; // x8
  UILabel_o *TitleLabel; // x23
  System_String_o *v21; // x24
  void *tabListParent; // x0
  __int64 v23; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *v24; // x23
  ClassBoardEffectListDialog___c_c *v25; // x0
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__27_0; // x24
  Il2CppObject *v28; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_TOutput__o *v36; // x0
  __int64 v37; // x1
  ClassBoardEffectListDialog___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x23
  struct ClassBoardEffectListDialog___c_StaticFields *v40; // x9
  System_Func_object__int__o *_9__27_1; // x24
  Il2CppObject *v42; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  const MethodInfo *v51; // x4
  int v52; // w8
  void *v53; // x23
  unsigned int v54; // w29
  ClassBoardBaseEntity_o *v55; // x24
  int32_t id; // w8
  bool v57; // w25
  _BOOL8 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  Il2CppObject *current; // x23
  struct System_Int32_array *squareIds; // x8
  bool v63; // w29
  struct System_Int32_array *v64; // x8
  int32_t classBoardBaseId; // w21
  int monitor; // w28
  const MethodInfo *v67; // x2
  bool v68; // w1
  __int64 v69; // x1
  __int64 v70; // x1
  UILabel_o *v71; // x20
  System_String_o **v72; // x8
  System_String_o *v73; // x21
  UnityEngine_Object_o *v74; // x20
  System_String_o *v75; // x1
  _BOOL8 v76; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x2
  Il2CppObject *v79; // x21
  struct System_Int32_array *v80; // x9
  bool v81; // w23
  int klass; // w24
  int v83; // w25
  const MethodInfo *v84; // x2
  bool v85; // w1
  __int64 v86; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  __int64 v88; // x1
  struct UILabel_o *v89; // x20
  System_Action_o *v90; // x20
  const MethodInfo *v91; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+30h] [xbp-B0h] BYREF
  Il2CppObject *v94; // [xsp+48h] [xbp-98h] BYREF
  Il2CppObject *v95; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *v96; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+60h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_5974686 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialog_EndOpen__);
    sub_2213A60(&System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_2213A60(&System_Func_ClassBoardBaseEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    sub_2213A60(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__);
    sub_2213A60(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__);
    sub_2213A60(&ClassBoardEffectListDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_3530/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/);
    sub_2213A60(&StringLiteral_3533/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_3531/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/);
    sub_2213A60(&StringLiteral_3532/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974686 = 1;
  }
  entity = 0;
  memset(&v97, 0, sizeof(v97));
  v95 = 0;
  v96 = 0;
  v94 = 0;
  this->fields.closeEndFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)closeFunc,
    *(System_String_o **)&dispBaseId,
    (System_String_o *)isAllDisp,
    (int32_t)callback,
    dispType,
    (bool)supportClassBoard,
    (bool)supportGrandClassBoard);
  if ( isAllDisp )
  {
    v19 = (System_String_o **)&StringLiteral_3530/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
    TitleLabel = this->fields.TitleLabel;
    if ( supportClassBoard )
      v19 = (System_String_o **)&StringLiteral_3533/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
    v21 = *v19;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    tabListParent = LocalizationManager__Get(v21, 0);
    if ( !TitleLabel )
      goto LABEL_109;
    UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0);
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_109;
    v24 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 5);
    v25 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !*(&ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo, v18);
      v25 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__27_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v18);
        static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v28, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0);
      v29 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v29->__9__27_0 = (struct System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__o *)_9__27_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__27_0, (int32_t)_9__27_0, v30, v31, v32, v33, v34, v35);
    }
    v36 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v24,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_38F3F3C *)Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    v38 = ClassBoardEffectListDialog___c_TypeInfo;
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
    if ( !*(&ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo, v37);
      v38 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    v40 = v38->static_fields;
    _9__27_1 = (System_Func_object__int__o *)v40->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !*(&v38->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v38, v37);
        v40 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)v40->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v42, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0);
      v43 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v43->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__27_1, (int32_t)_9__27_1, v44, v45, v46, v47, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v39,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v50,
                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_109;
    v52 = *((_DWORD *)tabListParent + 6);
    v53 = tabListParent;
    if ( v52 >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( v54 >= v52 )
          sub_2213CE4(tabListParent);
        v55 = (ClassBoardBaseEntity_o *)*((_QWORD *)v53 + (int)v54 + 4);
        if ( !v55 )
          break;
        if ( v55->fields.parentClassBoardBaseId <= 0 )
        {
          id = v55->fields.id;
          if ( supportClassBoard )
          {
            v57 = id == supportClassBoard->fields.classBoardBaseId;
          }
          else
          {
            v57 = id == 1;
            ClassBoardEffectListDialog__SetList(
              this,
              v55,
              id == 1,
              dispType,
              1,
              0,
              0,
              isDispGrandScore,
              classStatisticsInfos,
              battleServantList,
              v91);
          }
          ClassBoardEffectListDialog__SetTab(this, v55, v57, supportClassBoard != 0, v51);
        }
        v52 = *((_DWORD *)v53 + 6);
        if ( (int)++v54 >= v52 )
          goto LABEL_36;
      }
LABEL_109:
      sub_2213CDC(tabListParent, v18);
    }
LABEL_36:
    if ( supportClassBoard )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_109;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        supportGrandClassBoard,
        isDispGrandScore,
        classStatisticsInfos,
        0,
        v91);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_109;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v97 = v93;
      v93.fields._list = 0;
      *(_QWORD *)&v93.fields._index = &v97;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v97,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v58 )
          goto LABEL_96;
        current = v97.fields._current;
        if ( !v97.fields._current )
          sub_2213CDC(v58, v59);
        squareIds = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          v63 = LODWORD(squareIds->max_length) != 0;
          if ( supportGrandClassBoard != 0 && isDispGrandScore )
            goto LABEL_48;
        }
        else
        {
          v63 = 0;
          if ( supportGrandClassBoard != 0 && isDispGrandScore )
          {
LABEL_48:
            v64 = supportGrandClassBoard->fields.squareIds;
            if ( v64 )
              v63 = LODWORD(v64->max_length) != 0;
            else
              v63 = 0;
          }
        }
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v97.fields._current[3].monitor;
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v97.fields._current,
          classBoardBaseId == monitor,
          v60);
        v68 = classBoardBaseId == monitor && v63;
        ClassBoardEffectDialogTabComponent__SetButtonEnable((ClassBoardEffectDialogTabComponent_o *)current, v68, v67);
      }
    }
    if ( supportGrandClassBoard && isDispGrandScore )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_109;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v96,
        supportGrandClassBoard->fields.classBoardBaseId,
        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v96 )
        goto LABEL_109;
      if ( !tabListParent )
        goto LABEL_109;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v95,
        (int32_t)v96[4].monitor,
        (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v95,
        1,
        dispType,
        1,
        0,
        supportGrandClassBoard,
        1,
        classStatisticsInfos,
        battleServantList,
        v91);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_109;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v97 = v93;
      v93.fields._list = 0;
      *(_QWORD *)&v93.fields._index = &v97;
      while ( 1 )
      {
        v76 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v97,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v76 )
          break;
        if ( !v95 )
          sub_2213CDC(v76, v77);
        v79 = v97.fields._current;
        if ( !v97.fields._current )
          sub_2213CDC(v76, v77);
        v80 = supportGrandClassBoard->fields.squareIds;
        if ( v80 )
          v81 = LODWORD(v80->max_length) != 0;
        else
          v81 = 0;
        klass = (int)v95[1].klass;
        v83 = (int)v97.fields._current[3].monitor;
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v97.fields._current,
          klass == v83,
          v78);
        v85 = klass == v83 && v81;
        ClassBoardEffectDialogTabComponent__SetButtonEnable((ClassBoardEffectDialogTabComponent_o *)v79, v85, v84);
      }
LABEL_96:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v97,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_109;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)tabListParent + 440LL))(
      tabListParent,
      *(_QWORD *)(*(_QWORD *)tabListParent + 448LL));
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0, 0) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_109;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0);
      if ( !tabListParent )
        goto LABEL_109;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0);
      v89 = this->fields.closeButtonLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v88);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( !v89 )
        goto LABEL_109;
      v75 = (System_String_o *)tabListParent;
      tabListParent = v89;
      goto LABEL_107;
    }
  }
  else
  {
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_109;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v94,
           dispBaseId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v94,
        1,
        dispType,
        0,
        0,
        0,
        0,
        classStatisticsInfos,
        battleServantList,
        v91);
      if ( !v94 )
        goto LABEL_109;
      v71 = this->fields.TitleLabel;
      if ( SLODWORD(v94[4].monitor) <= 0 )
        v72 = (System_String_o **)&StringLiteral_3532/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/;
      else
        v72 = (System_String_o **)&StringLiteral_3531/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/;
      v73 = *v72;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      tabListParent = LocalizationManager__Get(v73, 0);
      if ( !v71 )
        goto LABEL_109;
      UILabel__set_text(v71, (System_String_o *)tabListParent, 0);
    }
    v74 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    if ( UnityEngine_Object__op_Inequality(v74, 0, 0) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_109;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0);
      if ( !tabListParent )
        goto LABEL_109;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0);
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_109;
      v75 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_107:
      UILabel__set_text((UILabel_o *)tabListParent, v75, 0);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v90 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v90, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v90, 0, 0, 0);
}


void ClassBoardEffectListDialog__ReleaseAll(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void ClassBoardEffectListDialog__SetIcon(
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
    sub_2213CDC(iconAtlasManagerUnit, sprite);
  }
  iconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
  if ( !iconAtlasManagerUnit )
    goto LABEL_5;
LABEL_3:
  AtlasManagerUnit__SetUI(iconAtlasManagerUnit, sprite, name, 0);
}


void ClassBoardEffectListDialog__SetList(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        BattleServantData_array *battleServantList,
        const MethodInfo *method)
{
  __int64 v19; // x19
  UnityEngine_GameObject_o *skillListParent; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
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
  int v58; // w8
  UnityEngine_Object_o *skillListObjectForAll; // x21
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x22
  UnityEngine_GameObject_o *v61; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  ClassBoardEffectListDialogSkillListComponent_o *v77; // x20
  System_Action_o *v78; // x21
  const MethodInfo *v79; // x2

  if ( (byte_5974687 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__);
    sub_2213A60(&ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
    byte_5974687 = 1;
  }
  v19 = sub_2213CCC(ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = baseEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), (int32_t)baseEntity, v28, v29, v30, v31, v32, v33);
  *(_BYTE *)(v19 + 48) = isAll;
  *(_QWORD *)(v19 + 56) = supportClassBoard;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 56), (int32_t)supportClassBoard, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v19 + 64) = dispType;
  *(_QWORD *)(v19 + 72) = supportGrandClassBoard;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v19 + 72),
    (int32_t)supportGrandClassBoard,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  *(_BYTE *)(v19 + 80) = isDispGrandScore;
  *(_QWORD *)(v19 + 88) = classStatisticsInfos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v19 + 88),
    (int32_t)classStatisticsInfos,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  *(_QWORD *)(v19 + 96) = battleServantList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 96), (int32_t)battleServantList, v52, v53, v54, v55, v56, v57);
  v58 = *(unsigned __int8 *)(v19 + 48);
  *(_BYTE *)(v19 + 104) = isDisp;
  if ( !v58 )
    goto LABEL_8;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0, 0) )
LABEL_8:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_15;
  v61 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v61, transform, 0, 0);
  *(_QWORD *)(v19 + 32) = Object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)Object, v64, v65, v66, v67, v68, v69);
  skillListParent = *(UnityEngine_GameObject_o **)(v19 + 32);
  if ( !skillListParent )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       skillListParent,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  *(_QWORD *)(v19 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 16), (int32_t)Component_object, v71, v72, v73, v74, v75, v76);
  skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !skillListParent
    || (CommonUI__SetFadeMaskCollider((CommonUI_o *)skillListParent, 1, 0),
        (skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)skillListParent, 1, 0),
        v77 = *(ClassBoardEffectListDialogSkillListComponent_o **)(v19 + 16),
        v78 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v78,
          (Il2CppObject *)v19,
          Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__,
          0),
        !v77) )
  {
LABEL_15:
    sub_2213CDC(skillListParent, v21);
  }
  ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(v77, v78, v79);
}


void ClassBoardEffectListDialog__SetTab(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *tabObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v23; // x23
  Il2CppClass **v24; // x0
  UIGrid_o *tabGird; // x25
  const MethodInfo *v26; // x5

  if ( (byte_5974688 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__);
    byte_5974688 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_16;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0, 0);
  if ( !skillListParent )
    goto LABEL_16;
  v12 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  tabComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !tabComponentList )
    goto LABEL_16;
  items = tabComponentList->fields._items;
  v21 = Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__;
  ++tabComponentList->fields._version;
  if ( !items )
    goto LABEL_16;
  size = tabComponentList->fields._size;
  v23 = (ClassBoardEffectDialogTabComponent_o *)skillListParent;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tabComponentList,
      (Il2CppObject *)skillListParent,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v13, v14, v15, v16, v17, v18);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !baseEntity || !v23 )
LABEL_16:
    sub_2213CDC(skillListParent, baseEntity);
  ClassBoardEffectDialogTabComponent__Setup(v23, this, baseEntity->fields.id, isDisp, isSupport, v26);
}


void ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_2213CDC(0, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0);
}


System_String_o *ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_597468D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16260/*"Window/CloseBtn"*/);
    byte_597468D = 1;
  }
  return (System_String_o *)StringLiteral_16260/*"Window/CloseBtn"*/;
}


void ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597468F & 1) == 0 )
  {
    sub_2213A60(&ClassBoardEffectListDialog___c_TypeInfo);
    byte_597468F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardEffectListDialog___c___ctor(ClassBoardEffectListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ClassBoardBaseEntity_o *ClassBoardEffectListDialog___c___Open_b__27_0(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int32_t ClassBoardEffectListDialog___c___Open_b__27_1(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id;
}


void ClassBoardEffectListDialog___c__DisplayClass22_0___ctor(
        ClassBoardEffectListDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardEffectListDialog___c__DisplayClass22_0___Init_b__0(
        ClassBoardEffectListDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974690 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974690 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardEffectListDialog___c__DisplayClass28_0___ctor(
        ClassBoardEffectListDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardEffectListDialog___c__DisplayClass28_0___SetList_b__0(
        ClassBoardEffectListDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  Il2CppObject *skillListComponent; // x1
  const MethodInfo *v5; // x2
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ClassBoardEffectListDialog_o *_4__this; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v16; // x8
  UnityEngine_GameObject_o *prefab; // x20
  const MethodInfo *v18; // x4
  struct ClassBoardBaseEntity_o *baseEntity; // x8
  int32_t id; // w20
  struct ClassBoardBaseEntity_o *v21; // x8
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // [xsp+10h] [xbp-30h]

  if ( (byte_5974691 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974691 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetFadeMaskCollider(Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetLoadMode(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    this->fields.__4__this,
    v5);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  Instance = (CommonUI_o *)_4__this->fields.skillListComponentList;
  if ( !Instance )
    goto LABEL_28;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  skillListComponent = (Il2CppObject *)this->fields.skillListComponent;
  v14 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_28;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      skillListComponent,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v16 + 32) = skillListComponent;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), (int32_t)skillListComponent, v6, v7, v8, v9, v10, v11);
  }
  prefab = this->fields.prefab;
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(prefab, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    this->fields.baseEntity,
    this->fields.isAll,
    this->fields.supportClassBoard,
    v18);
  baseEntity = this->fields.baseEntity;
  if ( !baseEntity )
  {
    id = 0;
    v23 = -1;
    goto LABEL_24;
  }
  id = baseEntity->fields.id;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillListComponent);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v21 = this->fields.baseEntity;
  if ( !v21 || !Instance )
LABEL_28:
    sub_2213CDC(Instance, skillListComponent);
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                (ClassBoardBaseMaster_o *)Instance,
                                v21->fields.id,
                                0);
  v23 = -1;
  if ( this->fields.isAll && GrandClassBoardBaseEntity )
    v23 = GrandClassBoardBaseEntity->fields.id;
LABEL_24:
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    id,
    v23,
    this->fields.dispType,
    this->fields.isAll,
    this->fields.supportClassBoard,
    this->fields.supportGrandClassBoard,
    this->fields.isDispGrandScore,
    this->fields.classStatisticsInfos,
    this->fields.battleServantList,
    v24);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isDisp, 0);
}