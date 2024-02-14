void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1

  if ( (byte_4217B00 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22563/*"sy2"*/, v9);
    byte_4217B00 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_22563/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_22563/*"sy2"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClickCloseSe, v10, v2, v3, v4, v5, v6, v7);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *skillListComponentList; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  int v15; // w9
  const MethodInfo *v16; // x2
  int v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+0h] [xbp-80h] BYREF
  int v19[2]; // [xsp+18h] [xbp-68h]
  int v20; // [xsp+20h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_4217AFB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v11);
    byte_4217AFB = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v21, 0, sizeof(v21));
  v20 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    skillListComponentList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v18;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields.current,
          v15 != 0,
          v14) )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v13);
    if ( HIDWORD(i.fields.current[7].monitor) == baseId )
      v15 = LOBYTE(i.fields.current[9].monitor) ^ 1;
    else
      v15 = 0;
  }
  v19[0] = 76;
  v20 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  v20 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_22:
    sub_B0D97C(skillListComponentList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    skillListComponentList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B0D97C(0LL);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v21.fields.current,
      LODWORD(v21.fields.current[3].klass) == baseId,
      v16);
  }
  v19[0] = 145;
  v17 = ++v20;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
  if ( v17 && v19[v17 - 1] == 145 )
    v20 = v17 - 1;
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4217AFD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog_EndClose__, v4);
    byte_4217AFD = 1;
  }
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ClassBoardEffectListDialog__EndClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  BattleServantConfConponent_o *p_closeEndFunc; // x0
  System_Action_o *closeEndFunc; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4217AFE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217AFE = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B0D840(p_closeEndFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeEndFunc, 0LL);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x2

  if ( (byte_4217AF5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isResouceLoaded);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v12);
    sub_B0D8A4(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v13);
    byte_4217AF5 = 1;
  }
  v14 = sub_B0D974(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, isResouceLoaded, callback);
  ClassBoardEffectListDialog___c__DisplayClass22_0___ctor(
    (ClassBoardEffectListDialog___c__DisplayClass22_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillListComponentList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tabComponentList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_B0D97C(gameObject);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v14,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v48, v49);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float v3; // s0

  if ( (byte_4217AF7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6253/*"ExecuteCallback"*/, method);
    byte_4217AF7 = 1;
  }
  v3 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6253/*"ExecuteCallback"*/, v3, 0LL);
}


void __fastcall ClassBoardEffectListDialog__LoadSystemAsset(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  AssetStorageLoadWrapper_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  AtlasManagerUnit_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_Action__array *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x20
  ChainableActionBase_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  ChainableActionParallel_o *v52; // x20
  System_Action_array *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x0

  if ( (byte_4217AF6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action___TypeInfo, callback);
    sub_B0D8A4(&System_Action_Action____TypeInfo, v10);
    sub_B0D8A4(&Method_System_Action_Action___ctor__, v11);
    sub_B0D8A4(&System_Action_Action__TypeInfo, v12);
    sub_B0D8A4(&System_Action_TypeInfo, v13);
    sub_B0D8A4(&AssetStorageLoadWrapper_TypeInfo, v14);
    sub_B0D8A4(&AtlasManagerUnit_TypeInfo, v15);
    sub_B0D8A4(&ChainableActionParallel_TypeInfo, v16);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog_LoadEnd__, v17);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v18);
    sub_B0D8A4(&StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v19);
    byte_4217AF6 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = (AssetStorageLoadWrapper_o *)sub_B0D974(AssetStorageLoadWrapper_TypeInfo, v20, v21);
  AssetStorageLoadWrapper___ctor(v22, 0LL);
  this->fields.assetStorageLoadWrapper = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetStorageLoadWrapper,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v32 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v30, v31);
  AtlasManagerUnit___ctor(v32, (System_String_o *)StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Action_Action__array *)sub_B0D8BC(System_Action_Action____TypeInfo, 1LL);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v40,
                                                                               v41);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( !v39 )
LABEL_14:
    sub_B0D97C(v43);
  if ( v42 )
  {
    v43 = (ChainableActionBase_o *)sub_B0D964(v42, v39->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_16;
  }
  if ( !v39->max_length )
    goto LABEL_15;
  v39->m_Items[0] = (System_Action_Action__o *)v42;
  sub_B0D840((BattleServantConfConponent_o *)v39->m_Items, (System_Int32_array **)v42, v44, v45, v46, v47, v48, v49);
  v52 = (ChainableActionParallel_o *)sub_B0D974(ChainableActionParallel_TypeInfo, v50, v51);
  ChainableActionParallel___ctor_26942624(v52, v39, 0LL);
  v53 = (System_Action_array *)sub_B0D8BC(System_Action___TypeInfo, 1LL);
  v56 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v53 )
    goto LABEL_14;
  if ( v56 )
  {
    v43 = (ChainableActionBase_o *)sub_B0D964(v56, v53->obj.klass->_1.element_class);
    if ( !v43 )
    {
LABEL_16:
      v64 = sub_B0D99C(v43);
      sub_B0D948(v64, 0LL);
    }
  }
  if ( !v53->max_length )
  {
LABEL_15:
    v63 = sub_B0D9A8(v43);
    sub_B0D948(v63, 0LL);
  }
  v53->m_Items[0] = v56;
  sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  if ( !v52 )
    goto LABEL_14;
  v43 = ChainableActionBase__Final((ChainableActionBase_o *)v52, v53, 0LL);
  if ( !v43 )
    goto LABEL_14;
  ChainableActionBase__Execute(v43, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v5; // w20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4217AFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardEffectListDialog_OnClickClose__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4217AFC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v6 = Method_ClassBoardEffectListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B0D8AC(Method_ClassBoardEffectListDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
    if ( v5 )
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
  __int64 v36; // x1
  __int64 v37; // x1
  System_String_o **v38; // x8
  UILabel_o *TitleLabel; // x25
  System_String_o *v40; // x26
  void *tabListParent; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *v50; // x22
  ClassBoardEffectListDialog___c_c *v51; // x0
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x23
  Il2CppObject *v54; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_TOutput__o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  ClassBoardEffectListDialog___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x22
  struct ClassBoardEffectListDialog___c_StaticFields *v67; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__27_1; // x23
  Il2CppObject *v69; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  const MethodInfo *v78; // x4
  const MethodInfo *v79; // x6
  int v80; // w8
  void *v81; // x22
  unsigned int v82; // w28
  ClassBoardBaseEntity_o *v83; // x23
  int32_t id; // w8
  bool v85; // w24
  const MethodInfo *v86; // x6
  struct System_Int32_array *v87; // x22
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int klass; // w25
  bool v94; // w26
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x6
  UnityEngine_Object_o *v97; // x20
  System_String_o *v98; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v100; // x20
  __int64 v101; // x1
  __int64 v102; // x2
  System_Action_o *v103; // x20
  __int64 v104; // x0
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *v106; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4217AF8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, closeFunc);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog_EndOpen__, v14);
    sub_B0D8A4(&Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__, v15);
    sub_B0D8A4(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v23);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v24);
    sub_B0D8A4(&Method_System_Func_ClassBoardBaseEntity__int___ctor__, v25);
    sub_B0D8A4(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v27);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v28);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v29);
    sub_B0D8A4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v30);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v31);
    sub_B0D8A4(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v32);
    sub_B0D8A4(&ClassBoardEffectListDialog___c_TypeInfo, v33);
    sub_B0D8A4(&StringLiteral_3024/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v34);
    sub_B0D8A4(&StringLiteral_3025/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v35);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v36);
    sub_B0D8A4(&StringLiteral_1/*""*/, v37);
    byte_4217AF8 = 1;
  }
  entity = 0LL;
  memset(&v107, 0, sizeof(v107));
  v106 = 0LL;
  v38 = (System_String_o **)&StringLiteral_3025/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  TitleLabel = this->fields.TitleLabel;
  if ( !supportClassBoard )
    v38 = (System_String_o **)&StringLiteral_3024/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  v40 = *v38;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  tabListParent = LocalizationManager__Get(v40, 0LL);
  if ( !TitleLabel )
    goto LABEL_85;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)closeFunc,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_85;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    v50 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v51 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v51 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B0D974(
                                                         System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo,
                                                         v48,
                                                         v49);
      System_Converter_string__string____ctor(
        _9__27_0,
        v54,
        Method_ClassBoardEffectListDialog___c__Open_b__27_0__,
        (const MethodInfo_2666150 *)Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__);
      v55 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v55->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v55->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v50,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_204B038 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v65 = ClassBoardEffectListDialog___c_TypeInfo;
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v62;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v65 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    v67 = v65->static_fields;
    _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v67->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v67 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v69 = (Il2CppObject *)v67->__9;
      _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_ClassBoardBaseEntity__int__TypeInfo,
                                                                                   v63,
                                                                                   v64);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__27_1,
        v69,
        Method_ClassBoardEffectListDialog___c__Open_b__27_1__,
        (const MethodInfo_2619564 *)Method_System_Func_ClassBoardBaseEntity__int___ctor__);
      v70 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v70->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v70->__9__27_1,
        (System_Int32_array **)_9__27_1,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
    }
    v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v66,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v77,
                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_85;
    v80 = *((_DWORD *)tabListParent + 6);
    v81 = tabListParent;
    if ( v80 >= 1 )
    {
      v82 = 0;
      while ( 1 )
      {
        if ( v82 >= v80 )
        {
          v104 = sub_B0D9A8(tabListParent);
          sub_B0D948(v104, 0LL);
        }
        v83 = (ClassBoardBaseEntity_o *)*((_QWORD *)v81 + (int)v82 + 4);
        if ( !v83 )
          break;
        id = v83->fields.id;
        v85 = id == 1;
        if ( supportClassBoard )
          v85 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v83, id == 1, dispType, 1, 0LL, v79);
        ClassBoardEffectListDialog__SetTab(this, v83, v85, supportClassBoard != 0LL, v78);
        v80 = *((_DWORD *)v81 + 6);
        if ( (int)++v82 >= v80 )
          goto LABEL_40;
      }
LABEL_85:
      sub_B0D97C(tabListParent);
    }
LABEL_40:
    if ( supportClassBoard )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_85;
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_2669C30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v86);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_85;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v105,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tabListParent,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v87 = 0LL;
      v107 = v105;
      while ( 1 )
      {
        v88 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v107,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v88 )
          break;
        current = v107.fields.current;
        if ( !v107.fields.current )
          sub_B0D97C(v88);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        klass = (int)v107.fields.current[3].klass;
        if ( squareIds )
          v87 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v87 )
            sub_B0D97C(v88);
          v94 = v87->max_length != 0;
        }
        else
        {
          v94 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v107.fields.current,
          classBoardBaseId == klass,
          v89);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v94 && classBoardBaseId == klass,
          v95);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v107,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabListParent = this->fields.tabGird;
    if ( !tabListParent )
      goto LABEL_85;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)tabListParent + 440LL))(
      tabListParent,
      *(_QWORD *)(*(_QWORD *)tabListParent + 448LL));
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_85;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
      v100 = this->fields.closeButtonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v100 )
        goto LABEL_85;
      v98 = (System_String_o *)tabListParent;
      tabListParent = v100;
      goto LABEL_83;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
           &v106,
           dispBaseId,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v106, 1, dispType, 0, 0LL, v96);
    }
    v97 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
    {
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_85;
      tabListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tabListParent, 0LL);
      if ( !tabListParent )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
      tabListParent = this->fields.closeButtonLabel;
      if ( !tabListParent )
        goto LABEL_85;
      v98 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text((UILabel_o *)tabListParent, v98, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v103 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v101, v102);
  System_Action___ctor(v103, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
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
    sub_B0D97C(iconAtlasManagerUnit);
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
  UnityEngine_Object_o *skillListObjectForAll; // x25
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x26
  const MethodInfo *v21; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x25
  bool v23; // w23
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x5
  int32_t v26; // w1
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217AF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___, baseEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    byte_4217AF9 = 1;
  }
  if ( !isAll )
    goto LABEL_8;
  p_skillListObjectForAll = &this->fields.skillListObjectForAll;
  skillListObjectForAll = (UnityEngine_Object_o *)this->fields.skillListObjectForAll;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(skillListObjectForAll, 0LL, 0LL) )
LABEL_8:
    p_skillListObjectForAll = &this->fields.skillListObject;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_18;
  v18 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v18, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_18;
  v20 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_18;
  v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v21);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillListParent,
    v22,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v20, one, 0LL);
  v23 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v22,
    baseEntity,
    v23,
    supportClassBoard != 0LL,
    v24);
  v26 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v22,
    v26,
    dispType,
    v23,
    supportClassBoard,
    v25);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  if ( !skillListParent )
LABEL_18:
    sub_B0D97C(skillListParent);
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
  ClassBoardEffectDialogTabComponent_o *v14; // x23
  UIGrid_o *tabGird; // x25
  const MethodInfo *v16; // x5
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217AFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9);
    byte_4217AFA = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_10;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_10;
  v13 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  if ( !this->fields.tabComponentList
    || (v14 = (ClassBoardEffectDialogTabComponent_o *)skillListParent,
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.tabComponentList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__),
        tabGird = this->fields.tabGird,
        skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL),
        !tabGird)
    || (UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v13, one, 0LL),
        !baseEntity)
    || !v14 )
  {
LABEL_10:
    sub_B0D97C(skillListParent);
  }
  ClassBoardEffectDialogTabComponent__Setup(v14, this, baseEntity->fields.id, isDisp, isSupport, v16);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_B0D97C(0LL);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4217AFF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15525/*"Window/CloseBtn"*/, method);
    byte_4217AFF = 1;
  }
  return (System_String_o *)StringLiteral_15525/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4211E24 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectListDialog___c_TypeInfo, v1);
    byte_4211E24 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardEffectListDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x10

  if ( (byte_4211E25 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardBaseEntity_TypeInfo, entity);
    byte_4211E25 = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ClassBoardBaseEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == ClassBoardBaseEntity_TypeInfo )
    return (ClassBoardBaseEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall ClassBoardEffectListDialog___c___Open_b__27_1(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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

  if ( (byte_4211E26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211E26 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}