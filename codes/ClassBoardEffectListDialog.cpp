void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5E581 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_23730/*"sy2"*/);
    byte_4A5E581 = 1;
  }
  v5 = StringLiteral_23730/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23730/*"sy2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickCloseSe, v5, v2, v3);
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

  if ( (byte_4A5E57C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    byte_4A5E57C = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v13, 0, sizeof(v13));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    skillListComponentList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v12;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v9 != 0,
          v8) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields._current )
      sub_1B8880C(v6, v7);
    if ( HIDWORD(i.fields._current[8].klass) == baseId )
      v9 = LOBYTE(i.fields._current[10].klass) ^ 1;
    else
      v9 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1B8880C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    skillListComponentList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1B8880C(0LL, v10);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v13.fields._current,
      LODWORD(v13.fields._current[3].monitor) == baseId,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E57E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialog_EndClose__);
    byte_4A5E57E = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E57F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E57F = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B88554(p_closeEndFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeEndFunc->fields.m_target)(
      closeEndFunc->fields.original_method_info,
      *(_QWORD *)&closeEndFunc->fields.extra_arg);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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


void __fastcall ClassBoardEffectListDialog__Init(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4A5E576 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__);
    sub_1B885B0(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
    byte_4A5E576 = 1;
  }
  v7 = sub_1B887FC(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillListComponentList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tabComponentList, (int32_t)v17, v18, v19);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1B8880C(gameObject, v9);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v7,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v20, v21);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float targetFrameRate; // s0

  if ( (byte_4A5E578 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&StringLiteral_6259/*"ExecuteCallback"*/);
    byte_4A5E578 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6259/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0LL);
}


void __fastcall ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  System_Action_object__o *v14; // x20
  ChainableActionBase_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  ChainableActionParallel_o *v19; // x20
  __int64 v20; // x21
  System_Action_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5E577 & 1) == 0 )
  {
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetStorageLoadWrapper_TypeInfo);
    sub_1B885B0(&AtlasManagerUnit_TypeInfo);
    sub_1B885B0(&ChainableActionParallel_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialog_LoadEnd__);
    sub_1B885B0(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__);
    sub_1B885B0(&StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4A5E577 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v6 = (AssetStorageLoadWrapper_o *)sub_1B887FC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0LL);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)v6, v7, v8);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v10 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v10, (System_String_o *)StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v10, v11, v12);
  v13 = sub_1B88658(System_Action_Action____TypeInfo, 1LL);
  v14 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0LL);
  if ( !v13 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v13 + 32) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v14, v17, v18);
  v19 = (ChainableActionParallel_o *)sub_1B887FC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46557384(v19, (System_Action_Action__array *)v13, 0LL);
  v20 = sub_1B88658(System_Action___TypeInfo, 1LL);
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v20 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v20 + 24) )
LABEL_11:
    sub_1B88814(v15, v16);
  *(_QWORD *)(v20 + 32) = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v21, v22, v23);
  if ( !v19 || (v15 = ChainableActionBase__Final((ChainableActionBase_o *)v19, (System_Action_array *)v20, 0LL)) == 0LL )
LABEL_10:
    sub_1B8880C(v15, v16);
  ChainableActionBase__Execute(v15, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v4; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4A5E57D & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardEffectListDialog_OnClickClose__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E57D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v5 = Method_ClassBoardEffectListDialog_OnClickClose__;
    v6 = v4;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_ClassBoardEffectListDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    if ( v6 )
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v7, this->fields.onClickCloseSe, 0LL);
    ClassBoardEffectListDialog__Close(this, v8);
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
  System_String_o **v14; // x8
  UILabel_o *TitleLabel; // x25
  System_String_o *v16; // x26
  void *tabListParent; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_ObjectModel_ObservableCollection_T__o *v21; // x22
  ClassBoardEffectListDialog___c_c *v22; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x23
  Il2CppObject *v24; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_TOutput__o *v28; // x0
  ClassBoardEffectListDialog___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v32; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x6
  int v39; // w8
  void *v40; // x22
  unsigned int v41; // w28
  ClassBoardBaseEntity_o *v42; // x23
  int32_t id; // w8
  bool v44; // w24
  const MethodInfo *v45; // x6
  struct System_Int32_array *v46; // x22
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int monitor; // w25
  bool v54; // w26
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x6
  UnityEngine_Object_o *v57; // x20
  System_String_o *v58; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v60; // x20
  System_Action_o *v61; // x20
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *v63; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4A5E579 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialog_EndOpen__);
    sub_1B885B0(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_1B885B0(&System_Func_ClassBoardBaseEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    sub_1B885B0(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__);
    sub_1B885B0(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__);
    sub_1B885B0(&ClassBoardEffectListDialog___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3496/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/);
    sub_1B885B0(&StringLiteral_3497/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E579 = 1;
  }
  entity = 0LL;
  memset(&v64, 0, sizeof(v64));
  v63 = 0LL;
  if ( supportClassBoard )
    v14 = (System_String_o **)&StringLiteral_3497/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  else
    v14 = (System_String_o **)&StringLiteral_3496/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  TitleLabel = this->fields.TitleLabel;
  v16 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  tabListParent = LocalizationManager__Get(v16, 0LL);
  if ( !TitleLabel )
    goto LABEL_75;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)closeFunc, v19, v20);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_75;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    v21 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v22 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v22 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v22->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
      System_Converter_object__object____ctor(_9__27_0, v24, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0LL);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v26, v27);
    }
    v28 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v21,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_2F042F8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v29 = ClassBoardEffectListDialog___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v29 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v29->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__27_1, v32, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0LL);
      v33 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v33->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->__9__27_1, (int32_t)_9__27_1, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v30,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v36,
                      (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_75;
    v39 = *((_DWORD *)tabListParent + 6);
    v40 = tabListParent;
    if ( v39 >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        if ( v41 >= v39 )
          sub_1B88814(tabListParent, v18);
        v42 = (ClassBoardBaseEntity_o *)*((_QWORD *)v40 + (int)v41 + 4);
        if ( !v42 )
          break;
        id = v42->fields.id;
        v44 = id == 1;
        if ( supportClassBoard )
          v44 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v42, id == 1, dispType, 1, 0LL, v38);
        ClassBoardEffectListDialog__SetTab(this, v42, v44, supportClassBoard != 0LL, v37);
        v39 = *((_DWORD *)v40 + 6);
        if ( (int)++v41 >= v39 )
          goto LABEL_35;
      }
LABEL_75:
      sub_1B8880C(tabListParent, v18);
    }
LABEL_35:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_75;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_311D988 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v45);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_75;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v46 = 0LL;
      v64 = v62;
      while ( 1 )
      {
        v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v64,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v47 )
          break;
        current = v64.fields._current;
        if ( !v64.fields._current )
          sub_1B8880C(v47, v48);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v64.fields._current[3].monitor;
        if ( squareIds )
          v46 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v46 )
            sub_1B8880C(v47, v48);
          v54 = v46->max_length != 0;
        }
        else
        {
          v54 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v64.fields._current,
          classBoardBaseId == monitor,
          v49);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v54 && classBoardBaseId == monitor,
          v55);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v64,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
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
      v60 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v60 )
        goto LABEL_75;
      v58 = (System_String_o *)tabListParent;
      tabListParent = v60;
      goto LABEL_73;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v63,
           dispBaseId,
           (const MethodInfo_311D988 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v63, 1, dispType, 0, 0LL, v56);
    }
    v57 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
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
      v58 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
      UILabel__set_text((UILabel_o *)tabListParent, v58, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v61 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
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
    sub_1B8880C(iconAtlasManagerUnit, sprite);
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
  UnityEngine_Object_o *skillListObjectForAll; // x24
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v16; // x24
  UnityEngine_GameObject_o *v17; // x26
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  __int64 v25; // x8
  bool v26; // w23
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x5
  int32_t v29; // w1

  if ( (byte_4A5E57A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E57A = 1;
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
  v16 = *p_skillListObjectForAll;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  if ( !this )
    goto LABEL_24;
  skillListParent = BaseMonoBehaviour__createObject(
                      (BaseMonoBehaviour_o *)this,
                      v16,
                      (UnityEngine_Transform_o *)skillListParent,
                      0LL,
                      0LL);
  if ( !skillListParent )
    goto LABEL_24;
  v17 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_24;
  v19 = (Il2CppObject *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v18);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_24;
  v22 = *(_QWORD *)&skillListParent->fields.m_CachedPtr;
  v23 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__;
  ++HIDWORD(skillListParent[1].klass);
  if ( !v22 )
    goto LABEL_24;
  klass_low = SLODWORD(skillListParent[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skillListParent,
      v19,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * klass_low;
    LODWORD(skillListParent[1].klass) = klass_low + 1;
    *(_QWORD *)(v25 + 32) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v19, v20, v21);
  }
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v26 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v19,
    baseEntity,
    v26,
    supportClassBoard,
    v27);
  v29 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v19,
    v29,
    dispType,
    v26,
    supportClassBoard,
    v28);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
  if ( !skillListParent )
LABEL_24:
    sub_1B8880C(skillListParent, baseEntity);
  UnityEngine_GameObject__SetActive(skillListParent, isDisp, 0LL);
}


void __fastcall ClassBoardEffectListDialog__SetTab(
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
  System_Collections_Generic_List_object__o *tabComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  ClassBoardEffectDialogTabComponent_o *v19; // x23
  Il2CppClass **v20; // x0
  UIGrid_o *tabGird; // x25
  const MethodInfo *v22; // x5

  if ( (byte_4A5E57B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__);
    byte_4A5E57B = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_16;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_16;
  v12 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  skillListParent,
                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tabComponentList,
      (Il2CppObject *)skillListParent,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v13, v14);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !baseEntity || !v19 )
LABEL_16:
    sub_1B8880C(skillListParent, baseEntity);
  ClassBoardEffectDialogTabComponent__Setup(v19, this, baseEntity->fields.id, isDisp, isSupport, v22);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1B8880C(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E580 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15642/*"Window/CloseBtn"*/);
    byte_4A5E580 = 1;
  }
  return (System_String_o *)StringLiteral_15642/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E582 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectListDialog___c_TypeInfo);
    byte_4A5E582 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5E583 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBaseEntity_TypeInfo);
    byte_4A5E583 = 1;
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5E584 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E584 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}