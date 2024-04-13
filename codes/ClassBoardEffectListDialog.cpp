void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1

  if ( (byte_42E9C2D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_22792/*"sy2"*/, v9, v10, v11);
    byte_42E9C2D = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_22792/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_22792/*"sy2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickCloseSe, v12, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *skillListComponentList; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int v31; // w9
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  int v34; // w19
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+0h] [xbp-80h] BYREF
  int v36[2]; // [xsp+18h] [xbp-68h]
  int v37; // [xsp+20h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_42E9C28 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      baseId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__,
      v24,
      v25,
      v26);
    byte_42E9C28 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    skillListComponentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v35;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields.current,
          v31 != 0,
          v30) )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v28 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v28, v29);
    if ( HIDWORD(i.fields.current[7].monitor) == baseId )
      v31 = LOBYTE(i.fields.current[9].monitor) ^ 1;
    else
      v31 = 0;
  }
  v36[0] = 76;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  v37 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_22:
    sub_B5D69C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    skillListComponentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v38.fields.current )
      sub_B5D69C(0LL, v32);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v38.fields.current,
      LODWORD(v38.fields.current[3].klass) == baseId,
      v33);
  }
  v36[0] = 145;
  v34 = ++v37;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
  if ( v34 && v36[v34 - 1] == 145 )
    v37 = v34 - 1;
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E9C2A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog_EndClose__, v5, v6, v7);
    byte_42E9C2A = 1;
  }
  this->fields.isButtonEnable = 0;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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

  if ( (byte_42E9C2B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9C2B = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B5D560(p_closeEndFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeEndFunc, 0LL);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char v22; // w1
  int v23; // w2
  __int64 v24; // x3
  char v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x2

  if ( (byte_42E9C22 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isResouceLoaded, (_DWORD)callback, method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__, v22, v23, v24);
    sub_B5D5C4(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo, v25, v26, v27);
    byte_42E9C22 = 1;
  }
  v28 = sub_B5D694(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  ClassBoardEffectListDialog___c__DisplayClass22_0___ctor(
    (ClassBoardEffectListDialog___c__DisplayClass22_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_9;
  *(_QWORD *)(v28 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)callback, v37, v38, v39, v40, v41, v42);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillListComponentList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tabComponentList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v28 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_B5D69C(gameObject, v30);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v28,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v57, v58);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v5; // s0

  if ( (byte_42E9C24 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6315/*"ExecuteCallback"*/, (_DWORD)method, v2, v3);
    byte_42E9C24 = 1;
  }
  v5 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6315/*"ExecuteCallback"*/, v5, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  AssetStorageLoadWrapper_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Action_Action__array *v55; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x20
  ChainableActionBase_o *v57; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  ChainableActionParallel_o *v65; // x20
  System_Action_array *v66; // x21
  System_Action_o *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x0
  __int64 v75; // x0

  if ( (byte_42E9C23 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action___TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Action_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&AssetStorageLoadWrapper_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ChainableActionParallel_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog_LoadEnd__, v31, v32, v33);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v37, v38, v39);
    byte_42E9C23 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v40 = (AssetStorageLoadWrapper_o *)sub_B5D694(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v40, 0LL);
  this->fields.assetStorageLoadWrapper = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetStorageLoadWrapper,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v48 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v48, (System_String_o *)StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 1LL);
  v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v56,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( !v55 )
LABEL_14:
    sub_B5D69C(v57, v58);
  if ( v56 )
  {
    v57 = (ChainableActionBase_o *)sub_B5D684(v56, v55->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_16;
  }
  if ( !v55->max_length )
    goto LABEL_15;
  v55->m_Items[0] = (System_Action_Action__o *)v56;
  sub_B5D560((BattleServantConfConponent_o *)v55->m_Items, (System_Int32_array **)v56, v59, v60, v61, v62, v63, v64);
  v65 = (ChainableActionParallel_o *)sub_B5D694(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30552664(v65, v55, 0LL);
  v66 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v66 )
    goto LABEL_14;
  if ( v67 )
  {
    v57 = (ChainableActionBase_o *)sub_B5D684(v67, v66->obj.klass->_1.element_class);
    if ( !v57 )
    {
LABEL_16:
      v75 = sub_B5D6BC(v57);
      sub_B5D668(v75, 0LL);
    }
  }
  if ( !v66->max_length )
  {
LABEL_15:
    v74 = sub_B5D6C8(v57);
    sub_B5D668(v74, 0LL);
  }
  v66->m_Items[0] = v67;
  sub_B5D560((BattleServantConfConponent_o *)v66->m_Items, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  if ( !v65 )
    goto LABEL_14;
  v57 = ChainableActionBase__Final((ChainableActionBase_o *)v65, v66, 0LL);
  if ( !v57 )
    goto LABEL_14;
  ChainableActionBase__Execute(v57, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v9; // w20
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E9C29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardEffectListDialog_OnClickClose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9C29 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v10 = Method_ClassBoardEffectListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 75) & 2) != 0 )
      v10 = (_QWORD *)sub_B5D5CC(Method_ClassBoardEffectListDialog_OnClickClose__);
    v11 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v10, v10[3]);
    if ( v9 )
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v11, this->fields.onClickCloseSe, 0LL);
    ClassBoardEffectListDialog__Close(this, v12);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_String_o **v86; // x8
  UILabel_o *TitleLabel; // x25
  System_String_o *v88; // x26
  void *tabListParent; // x0
  __int64 v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *v97; // x22
  ClassBoardEffectListDialog___c_c *v98; // x0
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x23
  Il2CppObject *v101; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Collections_Generic_List_TOutput__o *v109; // x0
  ClassBoardEffectListDialog___c_c *v110; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x22
  struct ClassBoardEffectListDialog___c_StaticFields *v112; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__27_1; // x23
  Il2CppObject *v114; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  const MethodInfo *v123; // x4
  const MethodInfo *v124; // x6
  int v125; // w8
  void *v126; // x22
  unsigned int v127; // w28
  ClassBoardBaseEntity_o *v128; // x23
  int32_t id; // w8
  bool v130; // w24
  const MethodInfo *v131; // x6
  struct System_Int32_array *v132; // x22
  _BOOL8 v133; // x0
  __int64 v134; // x1
  const MethodInfo *v135; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int klass; // w25
  bool v140; // w26
  const MethodInfo *v141; // x2
  const MethodInfo *v142; // x6
  UnityEngine_Object_o *v143; // x20
  System_String_o *v144; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v146; // x20
  System_Action_o *v147; // x20
  __int64 v148; // x0
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *v150; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E9C25 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeFunc, dispBaseId, isAllDisp);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog_EndOpen__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___, v35, v36, v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__,
      v41,
      v42,
      v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&Method_System_Func_ClassBoardBaseEntity__int___ctor__, v47, v48, v49);
    sub_B5D5C4(&System_Func_ClassBoardBaseEntity__int__TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__,
      v53,
      v54,
      v55);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___, v62, v63, v64);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__, v65, v66, v67);
    sub_B5D5C4(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__, v68, v69, v70);
    sub_B5D5C4(&ClassBoardEffectListDialog___c_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_3071/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_3072/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1/*""*/, v83, v84, v85);
    byte_42E9C25 = 1;
  }
  entity = 0LL;
  memset(&v151, 0, sizeof(v151));
  v150 = 0LL;
  v86 = (System_String_o **)&StringLiteral_3072/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  TitleLabel = this->fields.TitleLabel;
  if ( !supportClassBoard )
    v86 = (System_String_o **)&StringLiteral_3071/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  v88 = *v86;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  tabListParent = LocalizationManager__Get(v88, 0LL);
  if ( !TitleLabel )
    goto LABEL_85;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)closeFunc,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_85;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    v97 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v98 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v98 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    static_fields = v98->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v98);
        static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v101 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
      System_Converter_string__string____ctor(
        _9__27_0,
        v101,
        Method_ClassBoardEffectListDialog___c__Open_b__27_0__,
        (const MethodInfo_23F738C *)Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__);
      v102 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v102->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v102->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
    }
    v109 = ObservableCollectionExtensions__ConvertAll_object__object_(
             v97,
             (System_Converter_T__TOutput__o *)_9__27_0,
             (const MethodInfo_1E6698C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v110 = ClassBoardEffectListDialog___c_TypeInfo;
    v111 = (System_Collections_Generic_IEnumerable_TSource__o *)v109;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v110 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    v112 = v110->static_fields;
    _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v112->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        v112 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v114 = (Il2CppObject *)v112->__9;
      _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__27_1,
        v114,
        Method_ClassBoardEffectListDialog___c__Open_b__27_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardBaseEntity__int___ctor__);
      v115 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v115->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v115->__9__27_1,
        (System_Int32_array **)_9__27_1,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
    }
    v122 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                  v111,
                                                                  (System_Func_TSource__TKey__o *)_9__27_1,
                                                                  (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v122,
                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_85;
    v125 = *((_DWORD *)tabListParent + 6);
    v126 = tabListParent;
    if ( v125 >= 1 )
    {
      v127 = 0;
      while ( 1 )
      {
        if ( v127 >= v125 )
        {
          v148 = sub_B5D6C8(tabListParent);
          sub_B5D668(v148, 0LL);
        }
        v128 = (ClassBoardBaseEntity_o *)*((_QWORD *)v126 + (int)v127 + 4);
        if ( !v128 )
          break;
        id = v128->fields.id;
        v130 = id == 1;
        if ( supportClassBoard )
          v130 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v128, id == 1, dispType, 1, 0LL, v124);
        ClassBoardEffectListDialog__SetTab(this, v128, v130, supportClassBoard != 0LL, v123);
        v125 = *((_DWORD *)v126 + 6);
        if ( (int)++v127 >= v125 )
          goto LABEL_40;
      }
LABEL_85:
      sub_B5D69C(tabListParent, v90);
    }
LABEL_40:
    if ( supportClassBoard )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_85;
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v131);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_85;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v149,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tabListParent,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v132 = 0LL;
      v151 = v149;
      while ( 1 )
      {
        v133 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v151,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v133 )
          break;
        current = v151.fields.current;
        if ( !v151.fields.current )
          sub_B5D69C(v133, v134);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        klass = (int)v151.fields.current[3].klass;
        if ( squareIds )
          v132 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v132 )
            sub_B5D69C(v133, v134);
          v140 = v132->max_length != 0;
        }
        else
        {
          v140 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v151.fields.current,
          classBoardBaseId == klass,
          v135);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v140 && classBoardBaseId == klass,
          v141);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v151,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
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
      v146 = this->fields.closeButtonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v146 )
        goto LABEL_85;
      v144 = (System_String_o *)tabListParent;
      tabListParent = v146;
      goto LABEL_83;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
           &v150,
           dispBaseId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v150, 1, dispType, 0, 0LL, v142);
    }
    v143 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v143, 0LL, 0LL) )
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
      v144 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text((UILabel_o *)tabListParent, v144, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v147 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v147, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v147, 0, 0LL);
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
    sub_B5D69C(iconAtlasManagerUnit, sprite);
  }
  iconAtlasManagerUnit = ClassBoardGlobalObject__get_IconAtlasManagerUnit(0LL);
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
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *skillListObjectForAll; // x25
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v22; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x26
  const MethodInfo *v25; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x25
  bool v27; // w23
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x5
  int32_t v30; // w1
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9C26 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___,
      (_DWORD)baseEntity,
      isDisp,
      *(_QWORD *)&dispType);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42E9C26 = 1;
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
  v22 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v22, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_18;
  v24 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_18;
  v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v25);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillListParent,
    v26,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v24, one, 0LL);
  v27 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v26,
    baseEntity,
    v27,
    supportClassBoard,
    v28);
  v30 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v26,
    v30,
    dispType,
    v27,
    supportClassBoard,
    v29);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
  if ( !skillListParent )
LABEL_18:
    sub_B5D69C(skillListParent, baseEntity);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *tabObject; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x24
  ClassBoardEffectDialogTabComponent_o *v16; // x23
  UIGrid_o *tabGird; // x25
  const MethodInfo *v18; // x5
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9C27 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___,
      (_DWORD)baseEntity,
      isDisp,
      isSupport);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__, v9, v10, v11);
    byte_42E9C27 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_10;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_10;
  v15 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  if ( !this->fields.tabComponentList
    || (v16 = (ClassBoardEffectDialogTabComponent_o *)skillListParent,
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.tabComponentList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__),
        tabGird = this->fields.tabGird,
        skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL),
        !tabGird)
    || (UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v15, one, 0LL),
        !baseEntity)
    || !v16 )
  {
LABEL_10:
    sub_B5D69C(skillListParent, baseEntity);
  }
  ClassBoardEffectDialogTabComponent__Setup(v16, this, baseEntity->fields.id, isDisp, isSupport, v18);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_B5D69C(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9C2C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15668/*"Window/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42E9C2C = 1;
  }
  return (System_String_o *)StringLiteral_15668/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E7D & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectListDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5E7D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E5E7E & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBaseEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E5E7E = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&ClassBoardBaseEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (ClassBoardBaseEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == ClassBoardBaseEntity_TypeInfo )
    return (ClassBoardBaseEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall ClassBoardEffectListDialog___c___Open_b__27_1(
        ClassBoardEffectListDialog___c_o *this,
        ClassBoardBaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E5E7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5E7F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}