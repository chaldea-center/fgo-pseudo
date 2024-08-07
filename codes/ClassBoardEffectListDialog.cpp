void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1

  if ( (byte_4A01EBB & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    sub_1B64A00(&StringLiteral_23637/*"sy2"*/, v5);
    byte_4A01EBB = 1;
  }
  v6 = StringLiteral_23637/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23637/*"sy2"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.onClickCloseSe, v6, v2, v3);
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

  if ( (byte_4A01EB6 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v6);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v7);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v8);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v9);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v11);
    byte_4A01EB6 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v20, 0, sizeof(v20));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    skillListComponentList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v19;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v16 != 0,
          v15) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( !i.fields._current )
      sub_1B64C5C(v13, v14);
    if ( HIDWORD(i.fields._current[8].klass) == baseId )
      v16 = LOBYTE(i.fields._current[10].klass) ^ 1;
    else
      v16 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1B64C5C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    skillListComponentList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1B64C5C(0LL, v17);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v20.fields._current,
      LODWORD(v20.fields._current[3].monitor) == baseId,
      v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A01EB8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_ClassBoardEffectListDialog_EndClose__, v3);
    byte_4A01EB8 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A01EB9 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A01EB9 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B649A4(p_closeEndFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeEndFunc->fields.m_target)(
      closeEndFunc->fields.original_method_info,
      *(_QWORD *)&closeEndFunc->fields.extra_arg);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x2

  if ( (byte_4A01EB0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isResouceLoaded);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v9);
    sub_1B64A00(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64A00(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v12);
    sub_1B64A00(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v13);
    byte_4A01EB0 = 1;
  }
  v14 = sub_1B64C4C(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v21;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.skillListComponentList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v24;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tabComponentList, (int32_t)v24, v25, v26);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1B64C5C(gameObject, v16);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v27 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
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

  if ( (byte_4A01EB2 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, method);
    sub_1B64A00(&StringLiteral_6232/*"ExecuteCallback"*/, v3);
    byte_4A01EB2 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6232/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0LL);
}


void __fastcall ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  int32_t v17; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x21
  System_Action_object__o *v23; // x20
  ChainableActionBase_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  ChainableActionParallel_o *v28; // x20
  __int64 v29; // x21
  System_Action_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A01EB1 & 1) == 0 )
  {
    sub_1B64A00(&System_Action___TypeInfo, callback);
    sub_1B64A00(&System_Action_Action____TypeInfo, v6);
    sub_1B64A00(&System_Action_Action__TypeInfo, v7);
    sub_1B64A00(&System_Action_TypeInfo, v8);
    sub_1B64A00(&AssetStorageLoadWrapper_TypeInfo, v9);
    sub_1B64A00(&AtlasManagerUnit_TypeInfo, v10);
    sub_1B64A00(&ChainableActionParallel_TypeInfo, v11);
    sub_1B64A00(&Method_ClassBoardEffectListDialog_LoadEnd__, v12);
    sub_1B64A00(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v13);
    sub_1B64A00(&StringLiteral_4472/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14);
    byte_4A01EB1 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v15 = (AssetStorageLoadWrapper_o *)sub_1B64C4C(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v15, 0LL);
  this->fields.assetStorageLoadWrapper = v15;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)v15, v16, v17);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1B64C4C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4472/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v19;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v19, v20, v21);
  v22 = sub_1B64AA8(System_Action_Action____TypeInfo, 1LL);
  v23 = (System_Action_object__o *)sub_1B64C4C(System_Action_Action__TypeInfo);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v23, v26, v27);
  v28 = (ChainableActionParallel_o *)sub_1B64C4C(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46289676(v28, (System_Action_Action__array *)v22, 0LL);
  v29 = sub_1B64AA8(System_Action___TypeInfo, 1LL);
  v30 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v29 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v29 + 24) )
LABEL_11:
    sub_1B64C64(v24, v25);
  *(_QWORD *)(v29 + 32) = v30;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v30, v31, v32);
  if ( !v28 || (v24 = ChainableActionBase__Final((ChainableActionBase_o *)v28, (System_Action_array *)v29, 0LL)) == 0LL )
LABEL_10:
    sub_1B64C5C(v24, v25);
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

  if ( (byte_4A01EB7 & 1) == 0 )
  {
    sub_1B64A00(&Method_ClassBoardEffectListDialog_OnClickClose__, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A01EB7 = 1;
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
      v6 = (_QWORD *)sub_1B64A18(Method_ClassBoardEffectListDialog_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    if ( v7 )
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v8, this->fields.onClickCloseSe, 0LL);
    ClassBoardEffectListDialog__Close(this, v9);
  }
}


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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
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
  System_String_o **v36; // x8
  UILabel_o *TitleLabel; // x25
  System_String_o *v38; // x26
  void *tabListParent; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_ObjectModel_ObservableCollection_T__o *v43; // x22
  ClassBoardEffectListDialog___c_c *v44; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x23
  Il2CppObject *v46; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_List_TOutput__o *v50; // x0
  ClassBoardEffectListDialog___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v54; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  const MethodInfo *v59; // x4
  const MethodInfo *v60; // x6
  int v61; // w8
  void *v62; // x22
  unsigned int v63; // w28
  ClassBoardBaseEntity_o *v64; // x23
  int32_t id; // w8
  bool v66; // w24
  const MethodInfo *v67; // x6
  struct System_Int32_array *v68; // x22
  _BOOL8 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int monitor; // w25
  bool v76; // w26
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x6
  UnityEngine_Object_o *v79; // x20
  System_String_o *v80; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v82; // x20
  System_Action_o *v83; // x20
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *v85; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A01EB3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, closeFunc);
    sub_1B64A00(&Method_ClassBoardEffectListDialog_EndOpen__, v14);
    sub_1B64A00(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v15);
    sub_1B64A00(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v16);
    sub_1B64A00(&DataManager_TypeInfo, v17);
    sub_1B64A00(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v18);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v19);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v22);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v23);
    sub_1B64A00(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v25);
    sub_1B64A00(&LocalizationManager_TypeInfo, v26);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v27);
    sub_1B64A00(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v28);
    sub_1B64A00(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v29);
    sub_1B64A00(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v30);
    sub_1B64A00(&ClassBoardEffectListDialog___c_TypeInfo, v31);
    sub_1B64A00(&StringLiteral_3474/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v32);
    sub_1B64A00(&StringLiteral_3475/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v33);
    sub_1B64A00(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v34);
    sub_1B64A00(&StringLiteral_1/*""*/, v35);
    byte_4A01EB3 = 1;
  }
  entity = 0LL;
  memset(&v86, 0, sizeof(v86));
  v85 = 0LL;
  if ( supportClassBoard )
    v36 = (System_String_o **)&StringLiteral_3475/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  else
    v36 = (System_String_o **)&StringLiteral_3474/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  TitleLabel = this->fields.TitleLabel;
  v38 = *v36;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  tabListParent = LocalizationManager__Get(v38, 0LL);
  if ( !TitleLabel )
    goto LABEL_75;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)closeFunc, v41, v42);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_75;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    v43 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v44 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v44 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v44->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1B64C4C(System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v46, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0LL);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v48, v49);
    }
    v50 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v43,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_2EBF030 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v51 = ClassBoardEffectListDialog___c_TypeInfo;
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v51 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v51->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v54, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0LL);
      v55 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v55->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v55->__9__27_1, (int32_t)_9__27_1, v56, v57);
    }
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v52,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_2E659B4 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v58,
                      (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_75;
    v61 = *((_DWORD *)tabListParent + 6);
    v62 = tabListParent;
    if ( v61 >= 1 )
    {
      v63 = 0;
      while ( 1 )
      {
        if ( v63 >= v61 )
          sub_1B64C64(tabListParent, v40);
        v64 = (ClassBoardBaseEntity_o *)*((_QWORD *)v62 + (int)v63 + 4);
        if ( !v64 )
          break;
        id = v64->fields.id;
        v66 = id == 1;
        if ( supportClassBoard )
          v66 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v64, id == 1, dispType, 1, 0LL, v60);
        ClassBoardEffectListDialog__SetTab(this, v64, v66, supportClassBoard != 0LL, v59);
        v61 = *((_DWORD *)v62 + 6);
        if ( (int)++v63 >= v61 )
          goto LABEL_35;
      }
LABEL_75:
      sub_1B64C5C(tabListParent, v40);
    }
LABEL_35:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_75;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_30D67EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v67);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_75;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v84,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v68 = 0LL;
      v86 = v84;
      while ( 1 )
      {
        v69 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v86,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v69 )
          break;
        current = v86.fields._current;
        if ( !v86.fields._current )
          sub_1B64C5C(v69, v70);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v86.fields._current[3].monitor;
        if ( squareIds )
          v68 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v68 )
            sub_1B64C5C(v69, v70);
          v76 = v68->max_length != 0;
        }
        else
        {
          v76 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v86.fields._current,
          classBoardBaseId == monitor,
          v71);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v76 && classBoardBaseId == monitor,
          v77);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v86,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_75;
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
        goto LABEL_75;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_75;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
      v82 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v82 )
        goto LABEL_75;
      v80 = (System_String_o *)tabListParent;
      tabListParent = v82;
      goto LABEL_73;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v85,
           dispBaseId,
           (const MethodInfo_30D67EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v85, 1, dispType, 0, 0LL, v78);
    }
    v79 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
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
      v80 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
      UILabel__set_text((UILabel_o *)tabListParent, v80, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v83 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
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
    sub_1B64C5C(iconAtlasManagerUnit, sprite);
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
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *skillListObjectForAll; // x24
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v18; // x24
  UnityEngine_GameObject_o *v19; // x26
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  __int64 v27; // x8
  __int64 v28; // x1
  bool v29; // w23
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x5
  int32_t v32; // w1

  if ( (byte_4A01EB4 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___, baseEntity);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    byte_4A01EB4 = 1;
  }
  if ( !isAll )
    goto LABEL_7;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0LL, 0LL) )
LABEL_7:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_24;
  v18 = *p_skillListObjectForAll;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  if ( !this )
    goto LABEL_24;
  skillListParent = BaseMonoBehaviour__createObject(
                      (BaseMonoBehaviour_o *)this,
                      v18,
                      (UnityEngine_Transform_o *)skillListParent,
                      0LL,
                      0LL);
  if ( !skillListParent )
    goto LABEL_24;
  v19 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_24;
  v21 = (Il2CppObject *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v20);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_24;
  v24 = *(_QWORD *)&skillListParent->fields.m_CachedPtr;
  v25 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(skillListParent[1].klass);
  if ( !v24 )
    goto LABEL_24;
  klass_low = SLODWORD(skillListParent[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skillListParent,
      v21,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * klass_low;
    LODWORD(skillListParent[1].klass) = klass_low + 1;
    *(_QWORD *)(v27 + 32) = v21;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v21, v22, v23);
  }
  if ( !byte_49F9826 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v28);
    byte_49F9826 = 1;
  }
  GameObjectExtensions__SetLocalScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v29 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v21,
    baseEntity,
    v29,
    supportClassBoard,
    v30);
  v32 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v21,
    v32,
    dispType,
    v29,
    supportClassBoard,
    v31);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
  if ( !skillListParent )
LABEL_24:
    sub_1B64C5C(skillListParent, baseEntity);
  UnityEngine_GameObject__SetActive(skillListParent, isDisp, 0LL);
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
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v20; // x23
  Il2CppClass **v21; // x0
  UIGrid_o *tabGird; // x25
  __int64 v23; // x1
  const MethodInfo *v24; // x5

  if ( (byte_4A01EB5 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9);
    byte_4A01EB5 = 1;
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
                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v14, v15);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL);
  if ( !byte_49F9826 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F9826 = 1;
  }
  GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !baseEntity || !v20 )
LABEL_16:
    sub_1B64C5C(skillListParent, baseEntity);
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
    sub_1B64C5C(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01EBA & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15577/*"Window/CloseBtn"*/, method);
    byte_4A01EBA = 1;
  }
  return (System_String_o *)StringLiteral_15577/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A01EBC & 1) == 0 )
  {
    sub_1B64A00(&ClassBoardEffectListDialog___c_TypeInfo, v1);
    byte_4A01EBC = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A01EBD & 1) == 0 )
  {
    sub_1B64A00(&ClassBoardBaseEntity_TypeInfo, entity);
    byte_4A01EBD = 1;
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
    sub_1B64C5C(this, 0LL);
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

  if ( (byte_4A01EBE & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A01EBE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64C5C(Instance, v4);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}