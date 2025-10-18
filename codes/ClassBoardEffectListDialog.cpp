void ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C46AB2 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&StringLiteral_23892/*"sy2"*/);
    byte_4C46AB2 = 1;
  }
  v5 = StringLiteral_23892/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23892/*"sy2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onClickCloseSe, v5, v2, v3);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardEffectListDialog__Awake(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void ClassBoardEffectListDialog__ChangeTab(
        ClassBoardEffectListDialog_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillListComponentList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  int v8; // w9
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C46AAD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    byte_4C46AAD = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v11, 0, sizeof(v11));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    skillListComponentList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v10;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v8 != 0,
          v7) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields._current )
      sub_1C372B4(v6);
    if ( LODWORD(i.fields._current[8].klass) == baseId )
      v8 = LOBYTE(i.fields._current[9].monitor) ^ 1;
    else
      v8 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1C372B4(skillListComponentList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    skillListComponentList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C372B4(0);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v11.fields._current,
      *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_38) == baseId,
      v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C46AAF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectListDialog_EndClose__);
    byte_4C46AAF = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  CGThumbnailListItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C46AB0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46AB0 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C36FFC(p_closeEndFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))closeEndFunc->fields.invoke_impl)(
      closeEndFunc->fields.method_code,
      closeEndFunc->fields.method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_4C46AA7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__);
    sub_1C37058(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
    byte_4C46AA7 = 1;
  }
  v7 = sub_1C372A4(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.isButtonEnable = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillListComponentList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.tabComponentList, (int32_t)v16, v17, v18);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0);
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1C372B4(gameObject);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0);
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v7, Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, 0);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v19, v20);
}


void ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float targetFrameRate; // s0

  if ( (byte_4C46AA9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&StringLiteral_6299/*"ExecuteCallback"*/);
    byte_4C46AA9 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6299/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetStorageLoadWrapper_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  System_Action_object__o *v14; // x20
  ChainableActionBase_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ChainableActionParallel_o *v18; // x20
  __int64 v19; // x21
  System_Action_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C46AA8 & 1) == 0 )
  {
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C37058(&AtlasManagerUnit_TypeInfo);
    sub_1C37058(&ChainableActionParallel_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectListDialog_LoadEnd__);
    sub_1C37058(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__);
    sub_1C37058(&StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C46AA8 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v6 = (AssetStorageLoadWrapper_o *)sub_1C372A4(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)v6, v7, v8);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v10 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v10, (System_String_o *)StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.iconAtlasManagerUnit = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v10, v11, v12);
  v13 = sub_1C37100(System_Action_Action____TypeInfo, 1);
  v14 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0);
  if ( !v13 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v13 + 32) = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v14, v16, v17);
  v18 = (ChainableActionParallel_o *)sub_1C372A4(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49042072(v18, (System_Action_Action__array *)v13, 0);
  v19 = sub_1C37100(System_Action___TypeInfo, 1);
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0);
  if ( !v19 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v19 + 24) )
LABEL_11:
    sub_1C372BC(v15);
  *(_QWORD *)(v19 + 32) = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
  if ( !v18 || (v15 = ChainableActionBase__Final((ChainableActionBase_o *)v18, (System_Action_array *)v19, 0)) == 0 )
LABEL_10:
    sub_1C372B4(v15);
  ChainableActionBase__Execute(v15, 0);
}


void ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v4; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C46AAE & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardEffectListDialog_OnClickClose__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46AAE = 1;
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
      v5 = (_QWORD *)sub_1C37070(Method_ClassBoardEffectListDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    if ( v6 )
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    else
      OverwriteAssetSoundName__PlaySe(v7, this->fields.onClickCloseSe, 0, 0);
    ClassBoardEffectListDialog__Close(this, v8);
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
  UILabel_o *TitleLabel; // x23
  System_String_o **v20; // x8
  System_String_o *v21; // x24
  void *tabListParent; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v23; // x23
  ClassBoardEffectListDialog___c_c *v24; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x24
  Il2CppObject *v26; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_TOutput__o *v30; // x0
  ClassBoardEffectListDialog___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  System_Func_object__int__o *_9__27_1; // x24
  Il2CppObject *v34; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  const MethodInfo *v39; // x4
  int v40; // w8
  void *v41; // x23
  unsigned int v42; // w21
  ClassBoardBaseEntity_o *v43; // x24
  int32_t id; // w8
  bool v45; // w25
  _BOOL8 v46; // x0
  const MethodInfo *v47; // x2
  Il2CppObject *current; // x23
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w28
  int monitor; // w27
  bool v52; // w26
  struct System_Int32_array *v53; // x8
  const MethodInfo *v54; // x2
  UILabel_o *v55; // x20
  System_String_o **v56; // x8
  System_String_o *v57; // x21
  UnityEngine_Object_o *v58; // x20
  System_String_o *v59; // x1
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x2
  Il2CppObject *v62; // x21
  struct System_Int32_array *v63; // x9
  int klass; // w24
  int v65; // w25
  bool v66; // w26
  const MethodInfo *v67; // x2
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v69; // x20
  System_Action_o *v70; // x20
  const MethodInfo *v71; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-B0h] BYREF
  Il2CppObject *v73; // [xsp+48h] [xbp-98h] BYREF
  Il2CppObject *v74; // [xsp+50h] [xbp-90h] BYREF
  Il2CppObject *v75; // [xsp+58h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+60h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C46AAA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectListDialog_EndOpen__);
    sub_1C37058(&System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1C37058(&System_Func_ClassBoardBaseEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    sub_1C37058(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__);
    sub_1C37058(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__);
    sub_1C37058(&ClassBoardEffectListDialog___c_TypeInfo);
    sub_1C37058(&StringLiteral_3391/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/);
    sub_1C37058(&StringLiteral_3394/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/);
    sub_1C37058(&StringLiteral_3392/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/);
    sub_1C37058(&StringLiteral_3393/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46AAA = 1;
  }
  entity = 0;
  memset(&v76, 0, sizeof(v76));
  v74 = 0;
  v75 = 0;
  v73 = 0;
  this->fields.closeEndFunc = closeFunc;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.closeEndFunc,
    (int32_t)closeFunc,
    dispBaseId,
    (const MethodInfo *)isAllDisp);
  if ( isAllDisp )
  {
    TitleLabel = this->fields.TitleLabel;
    v20 = (System_String_o **)&StringLiteral_3391/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
    if ( supportClassBoard )
      v20 = (System_String_o **)&StringLiteral_3394/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
    v21 = *v20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    tabListParent = LocalizationManager__Get(v21, 0);
    if ( !TitleLabel )
      goto LABEL_104;
    UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0);
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_104;
    v23 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 5);
    v24 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v24 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v24->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1C372A4(System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v26, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v28, v29);
    }
    v30 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v23,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_3174A5C *)Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    v31 = ClassBoardEffectListDialog___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v31 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v31->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v34, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0);
      v35 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v35->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v35->__9__27_1, (int32_t)_9__27_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v38,
                      (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_104;
    v40 = *((_DWORD *)tabListParent + 6);
    v41 = tabListParent;
    if ( v40 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= v40 )
          sub_1C372BC(tabListParent);
        v43 = (ClassBoardBaseEntity_o *)*((_QWORD *)v41 + (int)v42 + 4);
        if ( !v43 )
          break;
        if ( v43->fields.parentClassBoardBaseId <= 0 )
        {
          id = v43->fields.id;
          v45 = id == 1;
          if ( supportClassBoard )
            v45 = id == supportClassBoard->fields.classBoardBaseId;
          else
            ClassBoardEffectListDialog__SetList(
              this,
              v43,
              id == 1,
              dispType,
              1,
              0,
              0,
              isDispGrandScore,
              classStatisticsInfos,
              battleServantList,
              v71);
          ClassBoardEffectListDialog__SetTab(this, v43, v45, supportClassBoard != 0, v39);
        }
        v40 = *((_DWORD *)v41 + 6);
        if ( (int)++v42 >= v40 )
          goto LABEL_36;
      }
LABEL_104:
      sub_1C372B4(tabListParent);
    }
LABEL_36:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
        v71);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_104;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v76 = v72;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v76,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v46 )
          goto LABEL_91;
        current = v76.fields._current;
        if ( !v76.fields._current )
          sub_1C372B4(v46);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v76.fields._current[3].monitor;
        if ( squareIds )
        {
          v52 = LODWORD(squareIds->max_length) != 0;
          if ( supportGrandClassBoard == 0 || !isDispGrandScore )
            goto LABEL_51;
        }
        else
        {
          v52 = 0;
          if ( supportGrandClassBoard == 0 || !isDispGrandScore )
            goto LABEL_51;
        }
        v53 = supportGrandClassBoard->fields.squareIds;
        if ( v53 )
          LODWORD(v53) = LODWORD(v53->max_length) != 0;
        v52 = (_DWORD)v53 != 0;
LABEL_51:
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v76.fields._current,
          classBoardBaseId == monitor,
          v47);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          classBoardBaseId == monitor && v52,
          v54);
      }
    }
    if ( supportGrandClassBoard && isDispGrandScore )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v75,
        supportGrandClassBoard->fields.classBoardBaseId,
        (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v75 )
        goto LABEL_104;
      if ( !tabListParent )
        goto LABEL_104;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v74,
        (int32_t)v75[4].monitor,
        (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v74,
        1,
        dispType,
        1,
        0,
        supportGrandClassBoard,
        1,
        classStatisticsInfos,
        battleServantList,
        v71);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_104;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v76 = v72;
      while ( 1 )
      {
        v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v76,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v60 )
          break;
        if ( !v74 )
          sub_1C372B4(v60);
        v62 = v76.fields._current;
        if ( !v76.fields._current )
          sub_1C372B4(v60);
        v63 = supportGrandClassBoard->fields.squareIds;
        klass = (int)v74[1].klass;
        v65 = (int)v76.fields._current[3].monitor;
        if ( v63 )
          v66 = LODWORD(v63->max_length) != 0;
        else
          v66 = 0;
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v76.fields._current,
          klass == v65,
          v61);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)v62,
          v66 && klass == v65,
          v67);
      }
LABEL_91:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v76,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
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
      v69 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( !v69 )
        goto LABEL_104;
      v59 = (System_String_o *)tabListParent;
      tabListParent = v69;
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
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_104;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v73,
           dispBaseId,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v73,
        1,
        dispType,
        0,
        0,
        0,
        0,
        classStatisticsInfos,
        battleServantList,
        v71);
      if ( !v73 )
        goto LABEL_104;
      v55 = this->fields.TitleLabel;
      if ( SLODWORD(v73[4].monitor) <= 0 )
        v56 = (System_String_o **)&StringLiteral_3393/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/;
      else
        v56 = (System_String_o **)&StringLiteral_3392/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/;
      v57 = *v56;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get(v57, 0);
      if ( !v55 )
        goto LABEL_104;
      UILabel__set_text(v55, (System_String_o *)tabListParent, 0);
    }
    v58 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
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
      v59 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_102:
      UILabel__set_text((UILabel_o *)tabListParent, v59, 0);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v70 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0, 0);
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
    sub_1C372B4(iconAtlasManagerUnit);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *skillListObjectForAll; // x21
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x22
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *Component_object; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  ClassBoardEffectListDialogSkillListComponent_o *v43; // x20
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x2

  if ( (byte_4C46AAB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__);
    sub_1C37058(&ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
    byte_4C46AAB = 1;
  }
  v19 = sub_1C372A4(ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)this, v21, v22);
  *(_QWORD *)(v19 + 40) = baseEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 40), (int32_t)baseEntity, v23, v24);
  *(_BYTE *)(v19 + 48) = isAll;
  *(_QWORD *)(v19 + 56) = supportClassBoard;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 56), (int32_t)supportClassBoard, v25, v26);
  *(_DWORD *)(v19 + 64) = dispType;
  *(_QWORD *)(v19 + 72) = supportGrandClassBoard;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 72), (int32_t)supportGrandClassBoard, v27, v28);
  *(_BYTE *)(v19 + 80) = isDispGrandScore;
  *(_QWORD *)(v19 + 88) = classStatisticsInfos;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 88), (int32_t)classStatisticsInfos, v29, v30);
  *(_QWORD *)(v19 + 96) = battleServantList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 96), (int32_t)battleServantList, v31, v32);
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
  v35 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v35, transform, 0, 0);
  *(_QWORD *)(v19 + 32) = Object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)Object, v38, v39);
  skillListParent = *(UnityEngine_GameObject_o **)(v19 + 32);
  if ( !skillListParent )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       skillListParent,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  *(_QWORD *)(v19 + 16) = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 16), (int32_t)Component_object, v41, v42);
  skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !skillListParent
    || (CommonUI__SetFadeMaskCollider((CommonUI_o *)skillListParent, 1, 0),
        (skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)skillListParent, 1, 0),
        v43 = *(ClassBoardEffectListDialogSkillListComponent_o **)(v19 + 16),
        v44 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v44,
          (Il2CppObject *)v19,
          Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__,
          0),
        !v43) )
  {
LABEL_15:
    sub_1C372B4(skillListParent);
  }
  ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(v43, v44, v45);
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v19; // x23
  Il2CppClass **v20; // x0
  UIGrid_o *tabGird; // x25
  const MethodInfo *v22; // x5

  if ( (byte_4C46AAC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__);
    byte_4C46AAC = 1;
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
                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  tabComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !tabComponentList )
    goto LABEL_16;
  items = tabComponentList->fields._items;
  v17 = Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__;
  ++tabComponentList->fields._version;
  if ( !items )
    goto LABEL_16;
  size = tabComponentList->fields._size;
  v19 = (ClassBoardEffectDialogTabComponent_o *)skillListParent;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tabComponentList,
      (Il2CppObject *)skillListParent,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v13, v14);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0);
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !baseEntity || !v19 )
LABEL_16:
    sub_1C372B4(skillListParent);
  ClassBoardEffectDialogTabComponent__Setup(v19, this, baseEntity->fields.id, isDisp, isSupport, v22);
}


void ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1C372B4(0);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0);
}


System_String_o *ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46AB1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15642/*"Window/CloseBtn"*/);
    byte_4C46AB1 = 1;
  }
  return (System_String_o *)StringLiteral_15642/*"Window/CloseBtn"*/;
}


void ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46AB3 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardEffectListDialog___c_TypeInfo);
    byte_4C46AB3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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

  if ( (byte_4C46AB4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46AB4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C372B4(Instance);
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
  const MethodInfo *v4; // x2
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct ClassBoardEffectListDialog_o *_4__this; // x8
  Il2CppObject *skillListComponent; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v12; // x8
  UnityEngine_GameObject_o *prefab; // x20
  const MethodInfo *v14; // x4
  struct ClassBoardBaseEntity_o *baseEntity; // x8
  int32_t id; // w20
  struct ClassBoardBaseEntity_o *v17; // x8
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // [xsp+10h] [xbp-30h]

  if ( (byte_4C46AB5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46AB5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetFadeMaskCollider(Instance, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetLoadMode(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    this->fields.__4__this,
    v4);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  Instance = (CommonUI_o *)_4__this->fields.skillListComponentList;
  if ( !Instance )
    goto LABEL_28;
  skillListComponent = (Il2CppObject *)this->fields.skillListComponent;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_28;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      skillListComponent,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v12 + 32) = skillListComponent;
    sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)skillListComponent, v5, v6);
  }
  prefab = this->fields.prefab;
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
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
    v14);
  baseEntity = this->fields.baseEntity;
  if ( !baseEntity )
  {
    id = 0;
    v19 = -1;
    goto LABEL_24;
  }
  id = baseEntity->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v17 = this->fields.baseEntity;
  if ( !v17 || !Instance )
LABEL_28:
    sub_1C372B4(Instance);
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                (ClassBoardBaseMaster_o *)Instance,
                                v17->fields.id,
                                0);
  v19 = -1;
  if ( GrandClassBoardBaseEntity && this->fields.isAll )
    v19 = GrandClassBoardBaseEntity->fields.id;
LABEL_24:
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    id,
    v19,
    this->fields.dispType,
    this->fields.isAll,
    this->fields.supportClassBoard,
    this->fields.supportGrandClassBoard,
    this->fields.isDispGrandScore,
    this->fields.classStatisticsInfos,
    this->fields.battleServantList,
    v20);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isDisp, 0);
}