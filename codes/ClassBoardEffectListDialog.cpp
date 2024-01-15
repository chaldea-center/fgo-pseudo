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

  if ( (byte_40FB94B & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22394/*"sy2"*/, v9);
    byte_40FB94B = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_22394/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_22394/*"sy2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClickCloseSe, v10, v2, v3, v4, v5, v6, v7);
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
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *skillListComponentList; // x0
  const MethodInfo *v13; // x2
  int v14; // w9
  struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *tabComponentList; // x0
  const MethodInfo *v16; // x2
  int v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+0h] [xbp-80h] BYREF
  int v19[2]; // [xsp+18h] [xbp-68h]
  int v20; // [xsp+20h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_40FB946 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      *(_QWORD *)&baseId);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v11);
    byte_40FB946 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v21, 0, sizeof(v21));
  v20 = 0;
  skillListComponentList = this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)skillListComponentList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields.current,
          v14 != 0,
          v13) )
  {
    if ( !i.fields.current )
      sub_B170D4();
    if ( HIDWORD(i.fields.current[7].monitor) == baseId )
      v14 = LOBYTE(i.fields.current[9].monitor) ^ 1;
    else
      v14 = 0;
  }
  v19[0] = 76;
  v20 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  v20 = 0;
  tabComponentList = this->fields.tabComponentList;
  if ( !tabComponentList )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tabComponentList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B170D4();
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v21.fields.current,
      LODWORD(v21.fields.current[3].klass) == baseId,
      v16);
  }
  v19[0] = 145;
  v17 = ++v20;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
  if ( v17 && v19[v17 - 1] == 145 )
    v20 = v17 - 1;
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FB948 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardEffectListDialog_EndClose__, v6);
    byte_40FB948 = 1;
  }
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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

  if ( (byte_40FB949 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB949 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B16F98(p_closeEndFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeEndFunc, 0LL);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  CommonUI_o *Instance; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_o *v56; // x20
  const MethodInfo *v57; // x2

  if ( (byte_40FB940 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isResouceLoaded);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v13);
    sub_B16FFC(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v14);
    byte_40FB940 = 1;
  }
  v15 = sub_B170CC(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, isResouceLoaded, callback, method, v4);
  ClassBoardEffectListDialog___c__DisplayClass22_0___ctor(
    (ClassBoardEffectListDialog___c__DisplayClass22_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillListComponentList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tabComponentList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v56 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v15,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v56, v57);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float v3; // s0

  if ( (byte_40FB942 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6218/*"ExecuteCallback"*/, method);
    byte_40FB942 = 1;
  }
  v3 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6218/*"ExecuteCallback"*/, v3, 0LL);
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
  __int64 v22; // x3
  __int64 v23; // x4
  AssetStorageLoadWrapper_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  AtlasManagerUnit_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x2
  System_Action_Action__array *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  ChainableActionParallel_o *v62; // x20
  __int64 v63; // x2
  System_Action_array *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x22
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  ChainableActionBase_o *v75; // x0

  if ( (byte_40FB941 & 1) == 0 )
  {
    sub_B16FFC(&System_Action___TypeInfo, callback);
    sub_B16FFC(&System_Action_Action____TypeInfo, v10);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v11);
    sub_B16FFC(&System_Action_Action__TypeInfo, v12);
    sub_B16FFC(&System_Action_TypeInfo, v13);
    sub_B16FFC(&AssetStorageLoadWrapper_TypeInfo, v14);
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, v15);
    sub_B16FFC(&ChainableActionParallel_TypeInfo, v16);
    sub_B16FFC(&Method_ClassBoardEffectListDialog_LoadEnd__, v17);
    sub_B16FFC(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v18);
    sub_B16FFC(&StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v19);
    byte_40FB941 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = (AssetStorageLoadWrapper_o *)sub_B170CC(AssetStorageLoadWrapper_TypeInfo, v20, v21, v22, v23);
  AssetStorageLoadWrapper___ctor(v24, 0LL);
  this->fields.assetStorageLoadWrapper = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetStorageLoadWrapper,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v36 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v32, v33, v34, v35);
  AtlasManagerUnit___ctor(v36, (System_String_o *)StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v44 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 1LL, v43);
  v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v45,
                                                                               v46,
                                                                               v47,
                                                                               v48);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v49,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( !v44 )
LABEL_14:
    sub_B170D4();
  if ( v49 )
  {
    v50 = sub_B170BC(v49, v44->obj.klass->_1.element_class);
    if ( !v50 )
      goto LABEL_16;
  }
  if ( !v44->max_length )
    goto LABEL_15;
  v44->m_Items[0] = (System_Action_Action__o *)v49;
  sub_B16F98((BattleServantConfConponent_o *)v44->m_Items, (System_Int32_array **)v49, v52, v53, v54, v55, v56, v57);
  v62 = (ChainableActionParallel_o *)sub_B170CC(ChainableActionParallel_TypeInfo, v58, v59, v60, v61);
  ChainableActionParallel___ctor_30586412(v62, v44, 0LL);
  v64 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v63);
  v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v64 )
    goto LABEL_14;
  if ( v69 )
  {
    v50 = sub_B170BC(v69, v64->obj.klass->_1.element_class);
    if ( !v50 )
    {
LABEL_16:
      sub_B170F4(v50);
      sub_B170A0();
    }
  }
  if ( !v64->max_length )
  {
LABEL_15:
    sub_B17100(v50, v51, v52);
    sub_B170A0();
  }
  v64->m_Items[0] = v69;
  sub_B16F98((BattleServantConfConponent_o *)v64->m_Items, (System_Int32_array **)v69, v52, v70, v71, v72, v73, v74);
  if ( !v62 )
    goto LABEL_14;
  v75 = ChainableActionBase__Final((ChainableActionBase_o *)v62, v64, 0LL);
  if ( !v75 )
    goto LABEL_14;
  ChainableActionBase__Execute(v75, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v5; // w20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_40FB947 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardEffectListDialog_OnClickClose__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB947 = 1;
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
      v6 = (_QWORD *)sub_B17004(Method_ClassBoardEffectListDialog_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
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
  System_String_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *tabListParent; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  ClassBoardEffectListDialog___c_c *v55; // x0
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x23
  Il2CppObject *v58; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_TOutput__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  ClassBoardEffectListDialog___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x22
  struct ClassBoardEffectListDialog___c_StaticFields *v73; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__27_1; // x23
  Il2CppObject *v75; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  const MethodInfo *v87; // x4
  const MethodInfo *v88; // x6
  int max_length; // w8
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v90; // x22
  unsigned int v91; // w28
  ClassBoardBaseEntity_o *v92; // x23
  int32_t id; // w8
  bool v94; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *v95; // x0
  const MethodInfo *v96; // x6
  struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *tabComponentList; // x0
  struct System_Int32_array *v98; // x22
  const MethodInfo *v99; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int klass; // w25
  bool v104; // w26
  const MethodInfo *v105; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x0
  const MethodInfo *v107; // x6
  UnityEngine_Object_o *v108; // x20
  UnityEngine_Component_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  UILabel_o *v111; // x0
  System_String_o *v112; // x1
  struct UIGrid_o *tabGird; // x0
  UnityEngine_Object_o *closeButtonLabel; // x20
  UnityEngine_Component_o *v115; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *v117; // x20
  System_String_o *v118; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  System_Action_o *v123; // x20
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *v125; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FB943 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeFunc);
    sub_B16FFC(&Method_ClassBoardEffectListDialog_EndOpen__, v14);
    sub_B16FFC(&Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__, v15);
    sub_B16FFC(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v19);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__, v23);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v24);
    sub_B16FFC(&Method_System_Func_ClassBoardBaseEntity__int___ctor__, v25);
    sub_B16FFC(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__, v27);
    sub_B16FFC(&LocalizationManager_TypeInfo, v28);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v29);
    sub_B16FFC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v30);
    sub_B16FFC(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v31);
    sub_B16FFC(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v32);
    sub_B16FFC(&ClassBoardEffectListDialog___c_TypeInfo, v33);
    sub_B16FFC(&StringLiteral_3003/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v34);
    sub_B16FFC(&StringLiteral_3004/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v35);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v36);
    sub_B16FFC(&StringLiteral_1/*""*/, v37);
    byte_40FB943 = 1;
  }
  entity = 0LL;
  memset(&v126, 0, sizeof(v126));
  v125 = 0LL;
  v38 = (System_String_o **)&StringLiteral_3004/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  TitleLabel = this->fields.TitleLabel;
  if ( !supportClassBoard )
    v38 = (System_String_o **)&StringLiteral_3003/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  v40 = *v38;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get(v40, 0LL);
  if ( !TitleLabel )
    goto LABEL_85;
  UILabel__set_text(TitleLabel, v41, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_B16F98(
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
    UnityEngine_GameObject__SetActive(tabListParent, 1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_85;
    list = (System_Collections_ObjectModel_ObservableCollection_T__o *)Master_WarQuestSelectionMaster->fields.list;
    v55 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v55 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                         System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo,
                                                         v50,
                                                         v51,
                                                         v52,
                                                         v53);
      System_Converter_string__string____ctor(
        _9__27_0,
        v58,
        Method_ClassBoardEffectListDialog___c__Open_b__27_0__,
        (const MethodInfo_266B904 *)Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__);
      v59 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v59->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v59->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = ObservableCollectionExtensions__ConvertAll_object__object_(
            list,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_19DE87C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v71 = ClassBoardEffectListDialog___c_TypeInfo;
    v72 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v71 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    v73 = v71->static_fields;
    _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v73->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71);
        v73 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v75 = (Il2CppObject *)v73->__9;
      _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_ClassBoardBaseEntity__int__TypeInfo,
                                                                                   v67,
                                                                                   v68,
                                                                                   v69,
                                                                                   v70);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__27_1,
        v75,
        Method_ClassBoardEffectListDialog___c__Open_b__27_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardBaseEntity__int___ctor__);
      v76 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v76->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v76->__9__27_1,
        (System_Int32_array **)_9__27_1,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v72,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    v84 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v83,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !v84 )
      goto LABEL_85;
    max_length = v84->max_length;
    v90 = v84;
    if ( max_length >= 1 )
    {
      v91 = 0;
      while ( 1 )
      {
        if ( v91 >= max_length )
        {
          sub_B17100(v84, v85, v86);
          sub_B170A0();
        }
        v92 = (ClassBoardBaseEntity_o *)v90->m_Items[v91];
        if ( !v92 )
          break;
        id = v92->fields.id;
        v94 = id == 1;
        if ( supportClassBoard )
          v94 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v92, id == 1, dispType, 1, 0LL, v88);
        ClassBoardEffectListDialog__SetTab(this, v92, v94, supportClassBoard != 0LL, v87);
        max_length = v90->max_length;
        if ( (int)++v91 >= max_length )
          goto LABEL_40;
      }
LABEL_85:
      sub_B170D4();
    }
LABEL_40:
    if ( supportClassBoard )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v95 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v95 )
        goto LABEL_85;
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v95,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v96);
      tabComponentList = this->fields.tabComponentList;
      if ( !tabComponentList )
        goto LABEL_85;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v124,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tabComponentList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v98 = 0LL;
      v126 = v124;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v126,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
      {
        current = v126.fields.current;
        if ( !v126.fields.current )
          sub_B170D4();
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        klass = (int)v126.fields.current[3].klass;
        if ( squareIds )
          v98 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v98 )
            sub_B170D4();
          v104 = v98->max_length != 0;
        }
        else
        {
          v104 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v126.fields.current,
          classBoardBaseId == klass,
          v99);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v104 && classBoardBaseId == klass,
          v105);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v126,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    }
    tabGird = this->fields.tabGird;
    if ( !tabGird )
      goto LABEL_85;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))tabGird->klass->vtable._8_Reposition.method)(
      tabGird,
      tabGird->klass->vtable._9_ResetPosition.methodPtr);
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL) )
    {
      v115 = (UnityEngine_Component_o *)this->fields.closeButtonLabel;
      if ( !v115 )
        goto LABEL_85;
      gameObject = UnityEngine_Component__get_gameObject(v115, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v117 = this->fields.closeButtonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v117 )
        goto LABEL_85;
      v112 = v118;
      v111 = v117;
      goto LABEL_83;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(tabListParent, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !v106 )
      goto LABEL_85;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v106,
           &v125,
           dispBaseId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v125, 1, dispType, 0, 0LL, v107);
    }
    v108 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v108, 0LL, 0LL) )
    {
      v109 = (UnityEngine_Component_o *)this->fields.closeButtonLabel;
      if ( !v109 )
        goto LABEL_85;
      v110 = UnityEngine_Component__get_gameObject(v109, 0LL);
      if ( !v110 )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive(v110, 0, 0LL);
      v111 = this->fields.closeButtonLabel;
      if ( !v111 )
        goto LABEL_85;
      v112 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text(v111, v112, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v123 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v119, v120, v121, v122);
  System_Action___ctor(v123, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v123, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v21; // x26
  ClassBoardEffectListDialogSkillListComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v23; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x25
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *skillListComponentList; // x0
  bool v26; // w23
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x5
  int32_t v29; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB944 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___, baseEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FB944 = 1;
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
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v18, transform, 0LL, 0LL);
  if ( !Object )
    goto LABEL_18;
  v21 = Object;
  Component_srcLineSprite = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                Object,
                                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_18;
  v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
  ClassBoardEffectListDialogSkillListComponent__Init(Component_srcLineSprite, this, v23);
  skillListComponentList = this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillListComponentList,
    v24,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v21, one, 0LL);
  v26 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v24,
    baseEntity,
    v26,
    supportClassBoard != 0LL,
    v27);
  v29 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v24,
    v29,
    dispType,
    v26,
    supportClassBoard,
    v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
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
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v14; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  ClassBoardEffectDialogTabComponent_o *v16; // x23
  UIGrid_o *tabGird; // x25
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x5
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB945 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___, baseEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9);
    byte_40FB945 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_10;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !Object )
    goto LABEL_10;
  v14 = Object;
  Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     Object,
                                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  if ( !this->fields.tabComponentList
    || (v16 = (ClassBoardEffectDialogTabComponent_o *)Component_srcLineSprite,
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.tabComponentList,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__),
        tabGird = this->fields.tabGird,
        v18 = UnityEngine_GameObject__get_transform(v14, 0LL),
        !tabGird)
    || (UIGrid__AddChild(tabGird, v18, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v14, one, 0LL),
        !baseEntity)
    || !v16 )
  {
LABEL_10:
    sub_B170D4();
  }
  ClassBoardEffectDialogTabComponent__Setup(v16, this, baseEntity->fields.id, isDisp, isSupport, v19);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB94A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15415/*"Window/CloseBtn"*/, method);
    byte_40FB94A = 1;
  }
  return (System_String_o *)StringLiteral_15415/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70DF & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectListDialog___c_TypeInfo, v1);
    byte_40F70DF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardEffectListDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectListDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F70E0 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBaseEntity_TypeInfo, entity);
    byte_40F70E0 = 1;
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
    sub_B170D4();
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
  BaseDialog_o *_4__this; // x0

  if ( (byte_40F70E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F70E1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (_4__this = (BaseDialog_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  BaseDialog__Init(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}