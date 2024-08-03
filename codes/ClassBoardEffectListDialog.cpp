void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1

  if ( (byte_49FF79A & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&StringLiteral_23633/*"sy2"*/, v5);
    byte_49FF79A = 1;
  }
  v6 = StringLiteral_23633/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_23633/*"sy2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickCloseSe, v6, v2, v3);
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
  const MethodInfo *v14; // x2
  int v15; // w9
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49FF795 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v11);
    byte_49FF795 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v18, 0, sizeof(v18));
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    skillListComponentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v17;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields._current,
          v15 != 0,
          v14) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( !i.fields._current )
      sub_1B64324(v13);
    if ( HIDWORD(i.fields._current[8].klass) == baseId )
      v15 = LOBYTE(i.fields._current[10].klass) ^ 1;
    else
      v15 = 0;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  skillListComponentList = (System_Collections_Generic_List_object__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_19:
    sub_1B64324(skillListComponentList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    skillListComponentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1B64324(0LL);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v18.fields._current,
      LODWORD(v18.fields._current[3].monitor) == baseId,
      v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49FF797 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardEffectListDialog_EndClose__, v4);
    byte_49FF797 = 1;
  }
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x0
  struct System_Action_o *closeEndFunc; // x21
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF798 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF798 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B6406C(p_closeEndFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeEndFunc->fields.m_target)(
      closeEndFunc->fields.original_method_info,
      *(_QWORD *)&closeEndFunc->fields.extra_arg);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2

  if ( (byte_49FF78F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isResouceLoaded);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v12);
    sub_1B640C8(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v13);
    byte_49FF78F = 1;
  }
  v14 = sub_1B64314(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, isResouceLoaded, callback);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillListComponentList, (int32_t)v22, v23, v24);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tabComponentList, (int32_t)v27, v28, v29);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_1B64324(gameObject);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v32 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v32, v33);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float targetFrameRate; // s0

  if ( (byte_49FF791 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6231/*"ExecuteCallback"*/, v3);
    byte_49FF791 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6231/*"ExecuteCallback"*/,
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
  __int64 v15; // x1
  __int64 v16; // x2
  AssetStorageLoadWrapper_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  AtlasManagerUnit_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_object__o *v29; // x20
  ChainableActionBase_o *v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  ChainableActionParallel_o *v36; // x20
  __int64 v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_49FF790 & 1) == 0 )
  {
    sub_1B640C8(&System_Action___TypeInfo, callback);
    sub_1B640C8(&System_Action_Action____TypeInfo, v6);
    sub_1B640C8(&System_Action_Action__TypeInfo, v7);
    sub_1B640C8(&System_Action_TypeInfo, v8);
    sub_1B640C8(&AssetStorageLoadWrapper_TypeInfo, v9);
    sub_1B640C8(&AtlasManagerUnit_TypeInfo, v10);
    sub_1B640C8(&ChainableActionParallel_TypeInfo, v11);
    sub_1B640C8(&Method_ClassBoardEffectListDialog_LoadEnd__, v12);
    sub_1B640C8(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v13);
    sub_1B640C8(&StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14);
    byte_49FF790 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v17 = (AssetStorageLoadWrapper_o *)sub_1B64314(AssetStorageLoadWrapper_TypeInfo, v15, v16);
  AssetStorageLoadWrapper___ctor(v17, 0LL);
  this->fields.assetStorageLoadWrapper = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)v17, v18, v19);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v23 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v21, v22);
  AtlasManagerUnit___ctor(v23, (System_String_o *)StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v23, v24, v25);
  v26 = sub_1B64170(System_Action_Action____TypeInfo, 1LL);
  v29 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v27, v28);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    0LL);
  if ( !v26 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v26 + 32) = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v29, v32, v33);
  v36 = (ChainableActionParallel_o *)sub_1B64314(ChainableActionParallel_TypeInfo, v34, v35);
  ChainableActionParallel___ctor_46279192(v36, (System_Action_Action__array *)v26, 0LL);
  v37 = sub_1B64170(System_Action___TypeInfo, 1LL);
  v40 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v37 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v37 + 24) )
LABEL_11:
    sub_1B6432C(v30, v31);
  *(_QWORD *)(v37 + 32) = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v40, v41, v42);
  if ( !v36 || (v30 = ChainableActionBase__Final((ChainableActionBase_o *)v36, (System_Action_array *)v37, 0LL)) == 0LL )
LABEL_10:
    sub_1B64324(v30);
  ChainableActionBase__Execute(v30, 0LL);
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

  if ( (byte_49FF796 & 1) == 0 )
  {
    sub_1B640C8(&Method_ClassBoardEffectListDialog_OnClickClose__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF796 = 1;
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
      v6 = (_QWORD *)sub_1B640E0(Method_ClassBoardEffectListDialog_OnClickClose__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
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
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *v44; // x22
  ClassBoardEffectListDialog___c_c *v45; // x0
  System_Converter_TInput__TOutput__o *_9__27_0; // x23
  Il2CppObject *v47; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_List_TOutput__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  ClassBoardEffectListDialog___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v57; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x4
  const MethodInfo *v64; // x6
  int v65; // w8
  void *v66; // x22
  unsigned int v67; // w28
  ClassBoardBaseEntity_o *v68; // x23
  int32_t id; // w8
  bool v70; // w24
  const MethodInfo *v71; // x6
  struct System_Int32_array *v72; // x22
  _BOOL8 v73; // x0
  const MethodInfo *v74; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int monitor; // w25
  bool v79; // w26
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x6
  UnityEngine_Object_o *v82; // x20
  System_String_o *v83; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  System_Action_o *v88; // x20
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+0h] [xbp-A0h] BYREF
  Il2CppObject *v90; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_49FF792 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, closeFunc);
    sub_1B640C8(&Method_ClassBoardEffectListDialog_EndOpen__, v14);
    sub_1B640C8(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v19);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v22);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v23);
    sub_1B640C8(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B640C8(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v28);
    sub_1B640C8(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v29);
    sub_1B640C8(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v30);
    sub_1B640C8(&ClassBoardEffectListDialog___c_TypeInfo, v31);
    sub_1B640C8(&StringLiteral_3474/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v32);
    sub_1B640C8(&StringLiteral_3475/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v33);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v34);
    sub_1B640C8(&StringLiteral_1/*""*/, v35);
    byte_49FF792 = 1;
  }
  entity = 0LL;
  memset(&v91, 0, sizeof(v91));
  v90 = 0LL;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)closeFunc, v40, v41);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_75;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    v44 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v45 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v45 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_0 = (System_Converter_TInput__TOutput__o *)v45->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v45->static_fields->__9;
      _9__27_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(
                                                          System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo,
                                                          v42,
                                                          v43);
      System_Converter_object__object____ctor(_9__27_0, v47, Method_ClassBoardEffectListDialog___c__Open_b__27_0__, 0LL);
      static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v49, v50);
    }
    v51 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v44,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_2EBC73C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v54 = ClassBoardEffectListDialog___c_TypeInfo;
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v51;
    if ( !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v54 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    _9__27_1 = (System_Func_object__int__o *)v54->static_fields->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = ClassBoardEffectListDialog___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v54->static_fields->__9;
      _9__27_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_ClassBoardBaseEntity__int__TypeInfo, v52, v53);
      System_Func_object__int____ctor(_9__27_1, v57, Method_ClassBoardEffectListDialog___c__Open_b__27_1__, 0LL);
      v58 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v58->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->__9__27_1, (int32_t)_9__27_1, v59, v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v55,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_object_(
                      v61,
                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_75;
    v65 = *((_DWORD *)tabListParent + 6);
    v66 = tabListParent;
    if ( v65 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= v65 )
          sub_1B6432C(tabListParent, v62);
        v68 = (ClassBoardBaseEntity_o *)*((_QWORD *)v66 + (int)v67 + 4);
        if ( !v68 )
          break;
        id = v68->fields.id;
        v70 = id == 1;
        if ( supportClassBoard )
          v70 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v68, id == 1, dispType, 1, 0LL, v64);
        ClassBoardEffectListDialog__SetTab(this, v68, v70, supportClassBoard != 0LL, v63);
        v65 = *((_DWORD *)v66 + 6);
        if ( (int)++v67 >= v65 )
          goto LABEL_35;
      }
LABEL_75:
      sub_1B64324(tabListParent);
    }
LABEL_35:
    if ( supportClassBoard )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_75;
      DataMasterBase_object__object__int___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v71);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_75;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v89,
        (System_Collections_Generic_List_object__o *)tabListParent,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v72 = 0LL;
      v91 = v89;
      while ( 1 )
      {
        v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v91,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v73 )
          break;
        current = v91.fields._current;
        if ( !v91.fields._current )
          sub_1B64324(v73);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        monitor = (int)v91.fields._current[3].monitor;
        if ( squareIds )
          v72 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v72 )
            sub_1B64324(v73);
          v79 = v72->max_length != 0;
        }
        else
        {
          v79 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v91.fields._current,
          classBoardBaseId == monitor,
          v74);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v79 && classBoardBaseId == monitor,
          v80);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v91,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
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
      v85 = this->fields.closeButtonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v85 )
        goto LABEL_75;
      v83 = (System_String_o *)tabListParent;
      tabListParent = v85;
      goto LABEL_73;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_75;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)tabListParent,
           &v90,
           dispBaseId,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v90, 1, dispType, 0, 0LL, v81);
    }
    v82 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
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
      v83 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_73:
      UILabel__set_text((UILabel_o *)tabListParent, v83, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v88 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v86, v87);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0LL);
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
    sub_1B64324(iconAtlasManagerUnit);
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

  if ( (byte_49FF793 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___, baseEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    byte_49FF793 = 1;
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
                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
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
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * klass_low;
    LODWORD(skillListParent[1].klass) = klass_low + 1;
    *(_QWORD *)(v27 + 32) = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v21, v22, v23);
  }
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
    byte_49F7116 = 1;
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
    sub_1B64324(skillListParent);
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

  if ( (byte_49FF794 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9);
    byte_49FF794 = 1;
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
                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
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
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    tabComponentList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v14, v15);
  }
  tabGird = this->fields.tabGird;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
  if ( !tabGird )
    goto LABEL_16;
  UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F7116 = 1;
  }
  GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !baseEntity || !v20 )
LABEL_16:
    sub_1B64324(skillListParent);
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
    sub_1B64324(0LL);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF799 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15574/*"Window/CloseBtn"*/, method);
    byte_49FF799 = 1;
  }
  return (System_String_o *)StringLiteral_15574/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF79B & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectListDialog___c_TypeInfo, v1);
    byte_49FF79B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardEffectListDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardEffectListDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FF79C & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBaseEntity_TypeInfo, entity);
    byte_49FF79C = 1;
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
    sub_1B64324(this);
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

  if ( (byte_49FF79D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF79D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}