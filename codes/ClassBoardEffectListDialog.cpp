void ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D3461C & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_24192/*"sy2"*/);
    byte_4D3461C = 1;
  }
  v9 = StringLiteral_24192/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_24192/*"sy2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onClickCloseSe, v9, v2, v3, v4, v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w9
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4D34617 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    byte_4D34617 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v13, 0, sizeof(v13));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    skillListComponentList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v12;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v9 != 0,
          v8) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields._current )
      sub_1C93D2C(v6, v7);
    if ( LODWORD(i.fields._current[8].klass) == baseId )
      v9 = LOBYTE(i.fields._current[9].monitor) ^ 1;
    else
      v9 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1C93D2C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    skillListComponentList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C93D2C(0, v10);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v13.fields._current,
      *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&word_38) == baseId,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D34619 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog_EndClose__);
    byte_4D34619 = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  GrandQuestFolderBoardItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D3461A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3461A = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
  p_closeEndFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C93A78(p_closeEndFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))closeEndFunc->fields.invoke_impl)(
      closeEndFunc->fields.method_code,
      closeEndFunc->fields.method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4D34611 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__);
    sub_1C93AD4(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
    byte_4D34611 = 1;
  }
  v7 = sub_1C93D20(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.isButtonEnable = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v22;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillListComponentList,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.tabComponentList, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1C93D2C(gameObject, v9);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0);
  v36 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v7, Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, 0);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v36, v37);
}


void ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float targetFrameRate; // s0

  if ( (byte_4D34613 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&StringLiteral_6332/*"ExecuteCallback"*/);
    byte_4D34613 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6332/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetStorageLoadWrapper_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x21
  System_Action_object__o *v26; // x20
  ChainableActionBase_o *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  ChainableActionParallel_o *v35; // x20
  __int64 v36; // x21
  System_Action_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4D34612 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action___TypeInfo);
    sub_1C93AD4(&System_Action_Action____TypeInfo);
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C93AD4(&AtlasManagerUnit_TypeInfo);
    sub_1C93AD4(&ChainableActionParallel_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog_LoadEnd__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__);
    sub_1C93AD4(&StringLiteral_4480/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4D34612 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (AssetStorageLoadWrapper_o *)sub_1C93D20(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0);
  this->fields.assetStorageLoadWrapper = v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v18 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v18, (System_String_o *)StringLiteral_4480/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.iconAtlasManagerUnit = v18;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.iconAtlasManagerUnit,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = sub_1C93B7C(System_Action_Action____TypeInfo, 1);
  v26 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)v26, v29, v30, v31, v32, v33, v34);
  v35 = (ChainableActionParallel_o *)sub_1C93D20(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49765204(v35, (System_Action_Action__array *)v25, 0);
  v36 = sub_1C93B7C(System_Action___TypeInfo, 1);
  v37 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0);
  if ( !v36 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v36 + 24) )
LABEL_11:
    sub_1C93D34(v27);
  *(_QWORD *)(v36 + 32) = v37;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  if ( !v35 || (v27 = ChainableActionBase__Final((ChainableActionBase_o *)v35, (System_Action_array *)v36, 0)) == 0 )
LABEL_10:
    sub_1C93D2C(v27, v28);
  ChainableActionBase__Execute(v27, 0);
}


void ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v4; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4D34618 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ClassBoardEffectListDialog_OnClickClose__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34618 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0, 0);
    v5 = Method_ClassBoardEffectListDialog_OnClickClose__;
    v6 = v4;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_ClassBoardEffectListDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    if ( v6 )
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    else
      OverwriteAssetSoundName__PlaySe(v7, this->fields.onClickCloseSe, 0, 0);
    ClassBoardEffectListDialog__Close(this, v8);
  }
}


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
  __int64 v19; // x1
  UILabel_o *TitleLabel; // x23
  System_String_o **v21; // x8
  System_String_o *v22; // x24
  void *tabListParent; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v24; // x23
  ClassBoardEffectListDialog___c_c *v25; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x24
  Il2CppObject *v27; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  char v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_TOutput__o *v35; // x0
  ClassBoardEffectListDialog___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x23
  System_Func_object__int__o *_9__27_1; // x24
  Il2CppObject *v39; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *v40; // x0
  int32_t v41; // w2
  char v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  const MethodInfo *v48; // x4
  int v49; // w8
  void *v50; // x23
  unsigned int v51; // w21
  ClassBoardBaseEntity_o *v52; // x24
  int32_t id; // w8
  bool v54; // w25
  _BOOL8 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  Il2CppObject *current; // x23
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w28
  int monitor; // w27
  bool v62; // w26
  struct System_Int32_array *v63; // x8
  const MethodInfo *v64; // x2
  UILabel_o *v65; // x20
  System_String_o **v66; // x8
  System_String_o *v67; // x21
  UnityEngine_Object_o *v68; // x20
  System_String_o *v69; // x1
  _BOOL8 v70; // x0
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  Il2CppObject *v73; // x21
  struct System_Int32_array *v74; // x9
  int klass; // w24
  int v76; // w25
  bool v77; // w26
  const MethodInfo *v78; // x2
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v80; // x20
  System_Action_o *v81; // x20
  const MethodInfo *v82; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+30h] [xbp-B0h] BYREF
  Il2CppObject *v84; // [xsp+48h] [xbp-98h] BYREF
  Il2CppObject *v85; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *v86; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+60h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4D34614 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog_EndOpen__);
    sub_1C93AD4(&System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1C93AD4(&System_Func_ClassBoardBaseEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__);
    sub_1C93AD4(&ClassBoardEffectListDialog___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_3411/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3414/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/);
    sub_1C93AD4(&StringLiteral_3412/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/);
    sub_1C93AD4(&StringLiteral_3413/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34614 = 1;
  }
  entity = 0;
  memset(&v87, 0, sizeof(v87));
  v85 = 0;
  v86 = 0;
  v84 = 0;
  this->fields.closeEndFunc = closeFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)closeFunc,
    dispBaseId,
    isAllDisp,
    (System_String_o *)callback,
    dispType,
    (int64_t)supportClassBoard,
    (System_String_o *)supportGrandClassBoard);
  if ( isAllDisp )
  {
    TitleLabel = this->fields.TitleLabel;
    v21 = (System_String_o **)&StringLiteral_3411/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
    if ( supportClassBoard )
      v21 = (System_String_o **)&StringLiteral_3414/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
    v22 = *v21;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    tabListParent = LocalizationManager__Get(v22, 0);
    if ( !TitleLabel )
      goto LABEL_104;
    UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0);
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_104;
    v24 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 5);
    v25 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v25 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v25->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1C93D20(System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v27, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
        (int32_t)_9__27_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v24,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_3231908 *)Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    v36 = ClassBoardEffectListDialog___c_TypeInfo;
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v36 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v36->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v39, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0);
      v40 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v40->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->__9__27_1, (int32_t)_9__27_1, v41, v42, v43, v44, v45, v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v37,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v47,
                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_104;
    v49 = *((_DWORD *)tabListParent + 6);
    v50 = tabListParent;
    if ( v49 >= 1 )
    {
      v51 = 0;
      while ( 1 )
      {
        if ( v51 >= v49 )
          sub_1C93D34(tabListParent);
        v52 = (ClassBoardBaseEntity_o *)*((_QWORD *)v50 + (int)v51 + 4);
        if ( !v52 )
          break;
        if ( v52->fields.parentClassBoardBaseId <= 0 )
        {
          id = v52->fields.id;
          v54 = id == 1;
          if ( supportClassBoard )
            v54 = id == supportClassBoard->fields.classBoardBaseId;
          else
            ClassBoardEffectListDialog__SetList(
              this,
              v52,
              id == 1,
              dispType,
              1,
              0,
              0,
              isDispGrandScore,
              classStatisticsInfos,
              battleServantList,
              v82);
          ClassBoardEffectListDialog__SetTab(this, v52, v54, supportClassBoard != 0, v48);
        }
        v49 = *((_DWORD *)v50 + 6);
        if ( (int)++v51 >= v49 )
          goto LABEL_36;
      }
LABEL_104:
      sub_1C93D2C(tabListParent, v19);
    }
LABEL_36:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
        v82);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_104;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v83,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v87 = v83;
      while ( 1 )
      {
        v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v87,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v55 )
          goto LABEL_91;
        current = v87.fields._current;
        if ( !v87.fields._current )
          sub_1C93D2C(v55, v56);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v87.fields._current[3].monitor;
        if ( squareIds )
        {
          v62 = LODWORD(squareIds->max_length) != 0;
          if ( supportGrandClassBoard == 0 || !isDispGrandScore )
            goto LABEL_51;
        }
        else
        {
          v62 = 0;
          if ( supportGrandClassBoard == 0 || !isDispGrandScore )
            goto LABEL_51;
        }
        v63 = supportGrandClassBoard->fields.squareIds;
        if ( v63 )
          LODWORD(v63) = LODWORD(v63->max_length) != 0;
        v62 = (_DWORD)v63 != 0;
LABEL_51:
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v87.fields._current,
          classBoardBaseId == monitor,
          v57);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          classBoardBaseId == monitor && v62,
          v64);
      }
    }
    if ( supportGrandClassBoard && isDispGrandScore )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v86,
        supportGrandClassBoard->fields.classBoardBaseId,
        (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v86 )
        goto LABEL_104;
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v85,
        (int32_t)v86[4].monitor,
        (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v85,
        1,
        dispType,
        1,
        0,
        supportGrandClassBoard,
        1,
        classStatisticsInfos,
        battleServantList,
        v82);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_104;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v83,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v87 = v83;
      while ( 1 )
      {
        v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v87,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v70 )
          break;
        if ( !v85 )
          sub_1C93D2C(v70, v71);
        v73 = v87.fields._current;
        if ( !v87.fields._current )
          sub_1C93D2C(v70, v71);
        v74 = supportGrandClassBoard->fields.squareIds;
        klass = (int)v85[1].klass;
        v76 = (int)v87.fields._current[3].monitor;
        if ( v74 )
          v77 = LODWORD(v74->max_length) != 0;
        else
          v77 = 0;
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v87.fields._current,
          klass == v76,
          v72);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)v73,
          v77 && klass == v76,
          v78);
      }
LABEL_91:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v87,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_104;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)tabListParent + 440LL))(
      tabListParent,
      *(_QWORD *)(*(_QWORD *)tabListParent + 448LL));
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0, 0) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_104;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0);
      if ( !tabListParent )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0);
      v80 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( !v80 )
        goto LABEL_104;
      v69 = (System_String_o *)tabListParent;
      tabListParent = v80;
      goto LABEL_102;
    }
  }
  else
  {
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_104;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v84,
           dispBaseId,
           (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v84,
        1,
        dispType,
        0,
        0,
        0,
        0,
        classStatisticsInfos,
        battleServantList,
        v82);
      if ( !v84 )
        goto LABEL_104;
      v65 = this->fields.TitleLabel;
      if ( SLODWORD(v84[4].monitor) <= 0 )
        v66 = (System_String_o **)&StringLiteral_3413/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/;
      else
        v66 = (System_String_o **)&StringLiteral_3412/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/;
      v67 = *v66;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get(v67, 0);
      if ( !v65 )
        goto LABEL_104;
      UILabel__set_text(v65, (System_String_o *)tabListParent, 0);
    }
    v68 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v68, 0, 0) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_104;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0);
      if ( !tabListParent )
        goto LABEL_104;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0);
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_104;
      v69 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_102:
      UILabel__set_text((UILabel_o *)tabListParent, v69, 0);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v81 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0, 0);
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
    sub_1C93D2C(iconAtlasManagerUnit, sprite);
  }
  iconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(0);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
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
  UnityEngine_Object_o *skillListObjectForAll; // x21
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x22
  UnityEngine_GameObject_o *v60; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *Component_object; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  ClassBoardEffectListDialogSkillListComponent_o *v76; // x20
  System_Action_o *v77; // x21
  const MethodInfo *v78; // x2

  if ( (byte_4D34615 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__);
    sub_1C93AD4(&ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
    byte_4D34615 = 1;
  }
  v19 = sub_1C93D20(ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = baseEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), (int32_t)baseEntity, v28, v29, v30, v31, v32, v33);
  *(_BYTE *)(v19 + 48) = isAll;
  *(_QWORD *)(v19 + 56) = supportClassBoard;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 56), (int32_t)supportClassBoard, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v19 + 64) = dispType;
  *(_QWORD *)(v19 + 72) = supportGrandClassBoard;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 72), (int32_t)supportGrandClassBoard, v40, v41, v42, v43, v44, v45);
  *(_BYTE *)(v19 + 80) = isDispGrandScore;
  *(_QWORD *)(v19 + 88) = classStatisticsInfos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 88), (int32_t)classStatisticsInfos, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v19 + 96) = battleServantList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 96), (int32_t)battleServantList, v52, v53, v54, v55, v56, v57);
  *(_BYTE *)(v19 + 104) = isDisp;
  if ( !*(_BYTE *)(v19 + 48) )
    goto LABEL_8;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0, 0) )
LABEL_8:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_15;
  v60 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v60, transform, 0, 0);
  *(_QWORD *)(v19 + 32) = Object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)Object, v63, v64, v65, v66, v67, v68);
  skillListParent = *(UnityEngine_GameObject_o **)(v19 + 32);
  if ( !skillListParent )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       skillListParent,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  *(_QWORD *)(v19 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 16), (int32_t)Component_object, v70, v71, v72, v73, v74, v75);
  skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !skillListParent
    || (CommonUI__SetFadeMaskCollider((CommonUI_o *)skillListParent, 1, 0),
        (skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)skillListParent, 1, 0),
        v76 = *(ClassBoardEffectListDialogSkillListComponent_o **)(v19 + 16),
        v77 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v77,
          (Il2CppObject *)v19,
          Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__,
          0),
        !v76) )
  {
LABEL_15:
    sub_1C93D2C(skillListParent, v21);
  }
  ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(v76, v77, v78);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v23; // x23
  Il2CppClass **v24; // x0
  UIGrid_o *tabGird; // x25
  const MethodInfo *v26; // x5

  if ( (byte_4D34616 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__);
    byte_4D34616 = 1;
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
                                                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v23, v13, v14, v15, v16, v17, v18);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0);
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !baseEntity || !v23 )
LABEL_16:
    sub_1C93D2C(skillListParent, baseEntity);
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
    sub_1C93D2C(0, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0);
}


System_String_o *ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3461B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15742/*"Window/CloseBtn"*/);
    byte_4D3461B = 1;
  }
  return (System_String_o *)StringLiteral_15742/*"Window/CloseBtn"*/;
}


void ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3461D & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardEffectListDialog___c_TypeInfo);
    byte_4D3461D = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D3461E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3461E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(Instance, v4);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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

  if ( (byte_4D3461F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3461F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetFadeMaskCollider(Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  skillListComponent = (Il2CppObject *)this->fields.skillListComponent;
  m_CachedPtr = Instance->fields.m_CachedPtr;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v16 + 32) = skillListComponent;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)skillListComponent, v6, v7, v8, v9, v10, v11);
  }
  prefab = this->fields.prefab;
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v21 = this->fields.baseEntity;
  if ( !v21 || !Instance )
LABEL_28:
    sub_1C93D2C(Instance, skillListComponent);
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                (ClassBoardBaseMaster_o *)Instance,
                                v21->fields.id,
                                0);
  v23 = -1;
  if ( GrandClassBoardBaseEntity && this->fields.isAll )
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