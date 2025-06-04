void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1

  if ( (byte_4B05886 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&StringLiteral_23655/*"sy2"*/, v5);
    byte_4B05886 = 1;
  }
  v6 = StringLiteral_23655/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23655/*"sy2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickCloseSe, v6, v2, v3);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *skillListComponentList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int v16; // w9
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B05881 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v11);
    byte_4B05881 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v20, 0, sizeof(v20));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    skillListComponentList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v19;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v16 != 0,
          v15) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( !i.fields._current )
      sub_1BC3264(v13, v14);
    if ( LODWORD(i.fields._current[10].klass) == baseId )
      v16 = LOBYTE(i.fields._current[12].klass) ^ 1;
    else
      v16 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1BC3264(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    skillListComponentList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1BC3264(0LL, v17);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v20.fields._current,
      LODWORD(v20.fields._current[3].monitor) == baseId,
      v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B05883 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ClassBoardEffectListDialog_EndClose__, v3);
    byte_4B05883 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  CGThumbnailListItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B05884 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05884 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BC2FAC(p_closeEndFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeEndFunc->fields.m_target)(
      closeEndFunc->fields.original_method_info,
      *(_QWORD *)&closeEndFunc->fields.extra_arg);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x2

  if ( (byte_4B0587B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isResouceLoaded);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BC3008(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v12);
    sub_1BC3008(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v13);
    byte_4B0587B = 1;
  }
  v14 = sub_1BC3254(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillListComponentList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.tabComponentList, (int32_t)v24, v25, v26);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1BC3264(gameObject, v16);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v14,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v27, v28);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float targetFrameRate; // s0

  if ( (byte_4B0587D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, method);
    sub_1BC3008(&StringLiteral_6244/*"ExecuteCallback"*/, v3);
    byte_4B0587D = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6244/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0LL);
}


void __fastcall ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  AssetStorageLoadWrapper_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x21
  System_Action_object__o *v23; // x20
  ChainableActionBase_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  ChainableActionParallel_o *v28; // x20
  __int64 v29; // x21
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x3

  if ( (byte_4B0587C & 1) == 0 )
  {
    sub_1BC3008(&System_Action___TypeInfo, callback);
    sub_1BC3008(&System_Action_Action____TypeInfo, v6);
    sub_1BC3008(&System_Action_Action__TypeInfo, v7);
    sub_1BC3008(&System_Action_TypeInfo, v8);
    sub_1BC3008(&AssetStorageLoadWrapper_TypeInfo, v9);
    sub_1BC3008(&AtlasManagerUnit_TypeInfo, v10);
    sub_1BC3008(&ChainableActionParallel_TypeInfo, v11);
    sub_1BC3008(&Method_ClassBoardEffectListDialog_LoadEnd__, v12);
    sub_1BC3008(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v13);
    sub_1BC3008(&StringLiteral_4422/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14);
    byte_4B0587C = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v15 = (AssetStorageLoadWrapper_o *)sub_1BC3254(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v15, 0LL);
  this->fields.assetStorageLoadWrapper = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)v15, v16, v17);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1BC3254(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4422/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v19, v20, v21);
  v22 = sub_1BC30B0(System_Action_Action____TypeInfo, 1LL);
  v23 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0LL);
  if ( !v22 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v22 + 32) = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v26, v27);
  v28 = (ChainableActionParallel_o *)sub_1BC3254(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48135236(v28, (System_Action_Action__array *)v22, 0LL);
  v29 = sub_1BC30B0(System_Action___TypeInfo, 1LL);
  v30 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v29 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v29 + 24) )
LABEL_11:
    sub_1BC326C(v24, v25, v26);
  *(_QWORD *)(v29 + 32) = v30;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v30, v26, v31);
  if ( !v28 || (v24 = ChainableActionBase__Final((ChainableActionBase_o *)v28, (System_Action_array *)v29, 0LL)) == 0LL )
LABEL_10:
    sub_1BC3264(v24, v25);
  ChainableActionBase__Execute(v24, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v5; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B05882 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardEffectListDialog_OnClickClose__, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B05882 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v6 = Method_ClassBoardEffectListDialog_OnClickClose__;
    v7 = v5;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_ClassBoardEffectListDialog_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    if ( v7 )
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v8, this->fields.onClickCloseSe, 0, 0LL);
    ClassBoardEffectListDialog__Close(this, v9);
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
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  UILabel_o *TitleLabel; // x23
  System_String_o **v45; // x8
  System_String_o *v46; // x24
  void *tabListParent; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v48; // x23
  ClassBoardEffectListDialog___c_c *v49; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x24
  Il2CppObject *v51; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_TOutput__o *v55; // x0
  ClassBoardEffectListDialog___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x23
  System_Func_object__int__o *_9__27_1; // x24
  Il2CppObject *v59; // x25
  struct ClassBoardEffectListDialog___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  __int64 v64; // x2
  const MethodInfo *v65; // x4
  int v66; // w8
  void *v67; // x23
  unsigned int v68; // w28
  ClassBoardBaseEntity_o *v69; // x24
  int32_t id; // w8
  bool v71; // w25
  struct System_Int32_array *v72; // x24
  struct System_Int32_array *v73; // x25
  _BOOL8 v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  Il2CppObject *current; // x23
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w21
  int monitor; // w27
  bool v81; // w26
  struct System_Int32_array *v82; // x8
  const MethodInfo *v83; // x2
  UILabel_o *v84; // x20
  System_String_o **v85; // x8
  System_String_o *v86; // x21
  UnityEngine_Object_o *v87; // x20
  System_String_o *v88; // x1
  struct System_Int32_array *v89; // x22
  _BOOL8 v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x2
  Il2CppObject *v93; // x21
  struct System_Int32_array *v94; // x9
  int klass; // w24
  int v96; // w25
  bool v97; // w26
  const MethodInfo *v98; // x2
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v100; // x20
  System_Action_o *v101; // x20
  const MethodInfo *v102; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+20h] [xbp-B0h] BYREF
  Il2CppObject *v104; // [xsp+38h] [xbp-98h] BYREF
  Il2CppObject *v105; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v106; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B0587E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, closeFunc);
    sub_1BC3008(&Method_ClassBoardEffectListDialog_EndOpen__, v18);
    sub_1BC3008(&System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo, v19);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v20);
    sub_1BC3008(&DataManager_TypeInfo, v21);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v22);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__, v23);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v24);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v27);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v28);
    sub_1BC3008(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v30);
    sub_1BC3008(&LocalizationManager_TypeInfo, v31);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v32);
    sub_1BC3008(&Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___, v33);
    sub_1BC3008(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v34);
    sub_1BC3008(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v35);
    sub_1BC3008(&ClassBoardEffectListDialog___c_TypeInfo, v36);
    sub_1BC3008(&StringLiteral_3360/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v37);
    sub_1BC3008(&StringLiteral_3363/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v38);
    sub_1BC3008(&StringLiteral_3361/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/, v39);
    sub_1BC3008(&StringLiteral_3362/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/, v40);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v41);
    sub_1BC3008(&StringLiteral_1/*""*/, v42);
    byte_4B0587E = 1;
  }
  entity = 0LL;
  memset(&v107, 0, sizeof(v107));
  v105 = 0LL;
  v106 = 0LL;
  v104 = 0LL;
  this->fields.closeEndFunc = closeFunc;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.closeEndFunc,
    (int32_t)closeFunc,
    dispBaseId,
    (const MethodInfo *)isAllDisp);
  if ( isAllDisp )
  {
    TitleLabel = this->fields.TitleLabel;
    v45 = (System_String_o **)&StringLiteral_3360/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
    if ( supportClassBoard )
      v45 = (System_String_o **)&StringLiteral_3363/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
    v46 = *v45;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    tabListParent = LocalizationManager__Get(v46, 0LL);
    if ( !TitleLabel )
      goto LABEL_115;
    UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_115;
    v48 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 5);
    v49 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v49 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v49->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1BC3254(System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v51, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0LL);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_ClassBoardBaseEntity__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v53, v54);
    }
    v55 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v48,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_308B8C0 *)Method_ObservableCollectionExtensions_ConvertAll_ClassBoardBaseEntity__ClassBoardBaseEntity___);
    v56 = ClassBoardEffectListDialog___c_TypeInfo;
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v56 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v56->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v56->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v59, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0LL);
      v60 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v60->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v60->__9__27_1, (int32_t)_9__27_1, v61, v62);
    }
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v57,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v63,
                      (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_115;
    v66 = *((_DWORD *)tabListParent + 6);
    v67 = tabListParent;
    if ( v66 >= 1 )
    {
      v68 = 0;
      while ( 1 )
      {
        if ( v68 >= v66 )
          sub_1BC326C(tabListParent, v43, v64);
        v69 = (ClassBoardBaseEntity_o *)*((_QWORD *)v67 + (int)v68 + 4);
        if ( !v69 )
          break;
        if ( v69->fields.parentClassBoardBaseId <= 0 )
        {
          id = v69->fields.id;
          v71 = id == 1;
          if ( supportClassBoard )
            v71 = id == supportClassBoard->fields.classBoardBaseId;
          else
            ClassBoardEffectListDialog__SetList(
              this,
              v69,
              id == 1,
              dispType,
              1,
              0LL,
              0LL,
              isDispGrandScore,
              classStatisticsInfos,
              v102);
          ClassBoardEffectListDialog__SetTab(this, v69, v71, supportClassBoard != 0LL, v65);
        }
        v66 = *((_DWORD *)v67 + 6);
        if ( (int)++v68 >= v66 )
          goto LABEL_36;
      }
LABEL_115:
      sub_1BC3264(tabListParent, v43);
    }
LABEL_36:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_115;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
        v102);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_115;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v103,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v107 = v103;
      v72 = 0LL;
      v73 = 0LL;
      while ( 1 )
      {
        v74 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v107,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v74 )
          goto LABEL_102;
        current = v107.fields._current;
        if ( !v107.fields._current )
          sub_1BC3264(v74, v75);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v107.fields._current[3].monitor;
        if ( squareIds )
          v73 = supportClassBoard->fields.squareIds;
        if ( !squareIds )
          break;
        if ( !v73 )
          sub_1BC3264(v74, v75);
        v81 = v73->max_length != 0;
        if ( supportGrandClassBoard != 0LL && isDispGrandScore )
          goto LABEL_51;
LABEL_57:
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v107.fields._current,
          classBoardBaseId == monitor,
          v76);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          classBoardBaseId == monitor && v81,
          v83);
      }
      v81 = 0;
      if ( supportGrandClassBoard == 0LL || !isDispGrandScore )
        goto LABEL_57;
LABEL_51:
      v82 = supportGrandClassBoard->fields.squareIds;
      if ( v82 )
        v72 = supportGrandClassBoard->fields.squareIds;
      if ( v82 )
      {
        if ( !v72 )
          sub_1BC3264(v74, v75);
        LODWORD(v82) = v72->max_length != 0;
      }
      v81 = (_DWORD)v82 != 0;
      goto LABEL_57;
    }
    if ( supportGrandClassBoard && isDispGrandScore )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_115;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v106,
        supportGrandClassBoard->fields.classBoardBaseId,
        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v106 )
        goto LABEL_115;
      if ( !tabListParent )
        goto LABEL_115;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &v105,
        (int32_t)v106[4].monitor,
        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v105,
        1,
        dispType,
        1,
        0LL,
        supportGrandClassBoard,
        1,
        classStatisticsInfos,
        v102);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_115;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v103,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v89 = 0LL;
      v107 = v103;
      while ( 1 )
      {
        v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v107,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v90 )
          break;
        if ( !v105 )
          sub_1BC3264(v90, v91);
        v93 = v107.fields._current;
        if ( !v107.fields._current )
          sub_1BC3264(v90, v91);
        v94 = supportGrandClassBoard->fields.squareIds;
        klass = (int)v105[1].klass;
        v96 = (int)v107.fields._current[3].monitor;
        if ( v94 )
          v89 = supportGrandClassBoard->fields.squareIds;
        if ( v94 )
        {
          if ( !v89 )
            sub_1BC3264(v90, v91);
          v97 = v89->max_length != 0;
        }
        else
        {
          v97 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v107.fields._current,
          klass == v96,
          v92);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)v93,
          v97 && klass == v96,
          v98);
      }
LABEL_102:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v107,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_115;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)tabListParent + 440LL))(
      tabListParent,
      *(_QWORD *)(*(_QWORD *)tabListParent + 448LL));
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_115;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
      v100 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v100 )
        goto LABEL_115;
      v88 = (System_String_o *)tabListParent;
      tabListParent = v100;
      goto LABEL_113;
    }
  }
  else
  {
    tabListParent = this->fields.tabListParent;
    if ( !tabListParent )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_115;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v104,
           dispBaseId,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)v104,
        1,
        dispType,
        0,
        0LL,
        0LL,
        0,
        classStatisticsInfos,
        v102);
      if ( !v104 )
        goto LABEL_115;
      v84 = this->fields.TitleLabel;
      if ( SLODWORD(v104[4].monitor) <= 0 )
        v85 = (System_String_o **)&StringLiteral_3362/*"CLASS_BOARD_EFFECT_LIST_TITLE_NORMAL"*/;
      else
        v85 = (System_String_o **)&StringLiteral_3361/*"CLASS_BOARD_EFFECT_LIST_TITLE_GRAND"*/;
      v86 = *v85;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get(v86, 0LL);
      if ( !v84 )
        goto LABEL_115;
      UILabel__set_text(v84, (System_String_o *)tabListParent, 0LL);
    }
    v87 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_115;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_115;
      v88 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_113:
      UILabel__set_text((UILabel_o *)tabListParent, v88, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v101 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v101, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v101, 0, 0LL);
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
    sub_1BC3264(iconAtlasManagerUnit, sprite);
  }
  iconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit((const MethodInfo *)this);
  if ( !iconAtlasManagerUnit )
    goto LABEL_5;
LABEL_3:
  AtlasManagerUnit__SetUI(iconAtlasManagerUnit, sprite, name, 0LL);
}


void __fastcall ClassBoardEffectListDialog__SetList(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x19
  UnityEngine_GameObject_o *skillListParent; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *skillListObjectForAll; // x21
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x22
  UnityEngine_GameObject_o *v38; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ClassBoardEffectListDialogSkillListComponent_o *v46; // x20
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x2

  if ( (byte_4B0587F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseEntity);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___, v18);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1BC3008(&Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__, v21);
    sub_1BC3008(&ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo, v22);
    byte_4B0587F = 1;
  }
  v23 = sub_1BC3254(ClassBoardEffectListDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_15;
  *(_QWORD *)(v23 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 24), (int32_t)this, v26, v27);
  *(_QWORD *)(v23 + 40) = baseEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 40), (int32_t)baseEntity, v28, v29);
  *(_BYTE *)(v23 + 48) = isAll;
  *(_QWORD *)(v23 + 56) = supportClassBoard;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 56), (int32_t)supportClassBoard, v30, v31);
  *(_DWORD *)(v23 + 64) = dispType;
  *(_QWORD *)(v23 + 72) = supportGrandClassBoard;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 72), (int32_t)supportGrandClassBoard, v32, v33);
  *(_QWORD *)(v23 + 88) = classStatisticsInfos;
  *(_BYTE *)(v23 + 80) = isDispGrandScore;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 88), (int32_t)classStatisticsInfos, v34, v35);
  *(_BYTE *)(v23 + 96) = isDisp;
  if ( !*(_BYTE *)(v23 + 48) )
    goto LABEL_8;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0LL, 0LL) )
LABEL_8:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_15;
  v38 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v38, transform, 0LL, 0LL);
  *(_QWORD *)(v23 + 32) = Object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)Object, v41, v42);
  skillListParent = *(UnityEngine_GameObject_o **)(v23 + 32);
  if ( !skillListParent )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       skillListParent,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  *(_QWORD *)(v23 + 16) = Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 16), (int32_t)Component_object, v44, v45);
  skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !skillListParent
    || (CommonUI__SetFadeMaskCollider((CommonUI_o *)skillListParent, 1, 0LL),
        (skillListParent = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)skillListParent, 1, 0LL),
        v46 = *(ClassBoardEffectListDialogSkillListComponent_o **)(v23 + 16),
        v47 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v47,
          (Il2CppObject *)v23,
          Method_ClassBoardEffectListDialog___c__DisplayClass28_0__SetList_b__0__,
          0LL),
        !v46) )
  {
LABEL_15:
    sub_1BC3264(skillListParent, v25);
  }
  ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(v46, v47, v48);
}


void __fastcall ClassBoardEffectListDialog__SetTab(
        ClassBoardEffectListDialog_o *this,
        ClassBoardBaseEntity_o *baseEntity,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *tabObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v20; // x23
  Il2CppClass **v21; // x0
  UIGrid_o *tabGird; // x25
  __int64 v23; // x1
  const MethodInfo *v24; // x5

  if ( (byte_4B05880 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9);
    byte_4B05880 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_16;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_16;
  v13 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  tabComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !tabComponentList )
    goto LABEL_16;
  items = tabComponentList->fields._items;
  v18 = Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__;
  ++tabComponentList->fields._version;
  if ( !items )
    goto LABEL_16;
  size = tabComponentList->fields._size;
  v20 = (ClassBoardEffectDialogTabComponent_o *)skillListParent;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tabComponentList,
      (Il2CppObject *)skillListParent,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v14, v15);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4AFBDB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !baseEntity || !v20 )
LABEL_16:
    sub_1BC3264(skillListParent, baseEntity);
  ClassBoardEffectDialogTabComponent__Setup(v20, this, baseEntity->fields.id, isDisp, isSupport, v24);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1BC3264(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B05885 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15496/*"Window/CloseBtn"*/, method);
    byte_4B05885 = 1;
  }
  return (System_String_o *)StringLiteral_15496/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05887 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardEffectListDialog___c_TypeInfo, v1);
    byte_4B05887 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ClassBoardEffectListDialog___c___ctor(ClassBoardEffectListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardBaseEntity_o *__fastcall ClassBoardEffectListDialog___c___Open_b__27_0(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int32_t __fastcall ClassBoardEffectListDialog___c___Open_b__27_1(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B05888 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B05888 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BC3264(Instance, v4);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall ClassBoardEffectListDialog___c__DisplayClass28_0___ctor(
        ClassBoardEffectListDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectListDialog___c__DisplayClass28_0___SetList_b__0(
        ClassBoardEffectListDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  Il2CppObject *skillListComponent; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ClassBoardEffectListDialog_o *_4__this; // x8
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v15; // x8
  __int64 v16; // x1
  UnityEngine_GameObject_o *prefab; // x20
  const MethodInfo *v18; // x4
  struct ClassBoardBaseEntity_o *baseEntity; // x8
  int32_t id; // w20
  struct ClassBoardBaseEntity_o *v21; // x8
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // [xsp+8h] [xbp-28h]

  if ( (byte_4B05889 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B05889 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)Instance,
    this->fields.__4__this,
    v8);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  Instance = (CommonUI_o *)_4__this->fields.skillListComponentList;
  if ( !Instance )
    goto LABEL_28;
  skillListComponent = (Il2CppObject *)this->fields.skillListComponent;
  v12 = *(_QWORD *)&Instance->fields.m_CachedPtr;
  v13 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !v12 )
    goto LABEL_28;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      skillListComponent,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = v12 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v15 + 32) = skillListComponent;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)skillListComponent, v9, v10);
  }
  prefab = this->fields.prefab;
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4AFBDB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(prefab, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v21 = this->fields.baseEntity;
  if ( !v21 || !Instance )
LABEL_28:
    sub_1BC3264(Instance, skillListComponent);
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                (ClassBoardBaseMaster_o *)Instance,
                                v21->fields.id,
                                0LL);
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
    v24);
  Instance = (CommonUI_o *)this->fields.skillListComponent;
  if ( !Instance )
    goto LABEL_28;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isDisp, 0LL);
}