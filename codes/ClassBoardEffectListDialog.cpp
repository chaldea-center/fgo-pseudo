void __fastcall ClassBoardEffectListDialog___ctor(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4353AD9 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&StringLiteral_22863/*"sy2"*/);
    byte_4353AD9 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_22863/*"sy2"*/;
  this->fields.onClickCloseSe = (struct System_String_o *)StringLiteral_22863/*"sy2"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.onClickCloseSe, v9, v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *skillListComponentList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w9
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int v12; // w19
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+0h] [xbp-80h] BYREF
  int v14[2]; // [xsp+18h] [xbp-68h]
  int v15; // [xsp+20h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_4353AD4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    byte_4353AD4 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v16, 0, sizeof(v16));
  v15 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillListComponentList;
  if ( !skillListComponentList )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    skillListComponentList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__GetEnumerator__);
  for ( i = v13;
        ;
        ClassBoardEffectListDialogSkillListComponent__SetDisp(
          (ClassBoardEffectListDialogSkillListComponent_o *)i.fields.current,
          v9 != 0,
          v8) )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &i,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v6, v7);
    if ( HIDWORD(i.fields.current[7].monitor) == baseId )
      v9 = LOBYTE(i.fields.current[9].monitor) ^ 1;
    else
      v9 = 0;
  }
  v14[0] = 76;
  v15 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent__Dispose__);
  v15 = 0;
  skillListComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.tabComponentList;
  if ( !skillListComponentList )
LABEL_22:
    sub_B7076C(skillListComponentList, *(_QWORD *)&baseId);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    skillListComponentList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B7076C(0LL, v10);
    ClassBoardEffectDialogTabComponent__SetButtonState(
      (ClassBoardEffectDialogTabComponent_o *)v16.fields.current,
      LODWORD(v16.fields.current[3].klass) == baseId,
      v11);
  }
  v14[0] = 145;
  v12 = ++v15;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
  if ( v12 && v14[v12 - 1] == 145 )
    v15 = v12 - 1;
}


void __fastcall ClassBoardEffectListDialog__Close(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4353AD6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardEffectListDialog_EndClose__);
    byte_4353AD6 = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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

  if ( (byte_4353AD7 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353AD7 = 1;
  }
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( assetStorageLoadWrapper )
    AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B70630(p_closeEndFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeEndFunc, 0LL);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4353ACE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__);
    sub_B70694(&ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
    byte_4353ACE = 1;
  }
  v7 = sub_B70764(ClassBoardEffectListDialog___c__DisplayClass22_0_TypeInfo);
  ClassBoardEffectListDialog___c__DisplayClass22_0___ctor((ClassBoardEffectListDialog___c__DisplayClass22_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isButtonEnable = 0;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent___ctor__);
  this->fields.skillListComponentList = (struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__o *)v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillListComponentList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent___ctor__);
  this->fields.tabComponentList = (struct System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__o *)v29;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tabComponentList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.isResouceLoaded = isResouceLoaded;
  if ( isResouceLoaded )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
LABEL_9:
    sub_B7076C(gameObject, v9);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)gameObject, 1, 0LL);
  v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ClassBoardEffectListDialog___c__DisplayClass22_0__Init_b__0__,
    0LL);
  ClassBoardEffectListDialog__LoadSystemAsset(this, v36, v37);
}


void __fastcall ClassBoardEffectListDialog__LoadEnd(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  float v3; // s0

  if ( (byte_4353AD0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6328/*"ExecuteCallback"*/);
    byte_4353AD0 = 1;
  }
  v3 = 1.0 / (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6328/*"ExecuteCallback"*/, v3, 0LL);
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
  AssetStorageLoadWrapper_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_Action__array *v25; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x20
  ChainableActionBase_o *v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ChainableActionParallel_o *v35; // x20
  System_Action_array *v36; // x21
  System_Action_o *v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_4353ACF & 1) == 0 )
  {
    sub_B70694(&System_Action___TypeInfo);
    sub_B70694(&System_Action_Action____TypeInfo);
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AssetStorageLoadWrapper_TypeInfo);
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&ChainableActionParallel_TypeInfo);
    sub_B70694(&Method_ClassBoardEffectListDialog_LoadEnd__);
    sub_B70694(&Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__);
    sub_B70694(&StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4353ACF = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (AssetStorageLoadWrapper_o *)sub_B70764(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0LL);
  this->fields.assetStorageLoadWrapper = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetStorageLoadWrapper,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v18 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v18, (System_String_o *)StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.iconAtlasManagerUnit = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Action_Action__array *)sub_B706AC(System_Action_Action____TypeInfo, 1LL);
  v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v26,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialog__LoadSystemAsset_b__23_0__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( !v25 )
LABEL_14:
    sub_B7076C(v27, v28);
  if ( v26 )
  {
    v27 = (ChainableActionBase_o *)sub_B70754(v26, v25->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_16;
  }
  if ( !v25->max_length )
    goto LABEL_15;
  v25->m_Items[0] = (System_Action_Action__o *)v26;
  sub_B70630((BattleServantConfConponent_o *)v25->m_Items, (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
  v35 = (ChainableActionParallel_o *)sub_B70764(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30691392(v35, v25, 0LL);
  v36 = (System_Action_array *)sub_B706AC(System_Action___TypeInfo, 1LL);
  v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_LoadEnd__, 0LL);
  if ( !v36 )
    goto LABEL_14;
  if ( v37 )
  {
    v27 = (ChainableActionBase_o *)sub_B70754(v37, v36->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_16:
      v45 = sub_B7078C(v27);
      sub_B70738(v45, 0LL);
    }
  }
  if ( !v36->max_length )
  {
LABEL_15:
    v44 = sub_B70798(v27);
    sub_B70738(v44, 0LL);
  }
  v36->m_Items[0] = v37;
  sub_B70630((BattleServantConfConponent_o *)v36->m_Items, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  if ( !v35 )
    goto LABEL_14;
  v27 = ChainableActionBase__Final((ChainableActionBase_o *)v35, v36, 0LL);
  if ( !v27 )
    goto LABEL_14;
  ChainableActionBase__Execute(v27, 0LL);
}


void __fastcall ClassBoardEffectListDialog__OnClickClose(ClassBoardEffectListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeButtonLabel; // x20
  bool v4; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4353AD5 & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardEffectListDialog_OnClickClose__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353AD5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    closeButtonLabel = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__op_Inequality(closeButtonLabel, 0LL, 0LL);
    v5 = Method_ClassBoardEffectListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardEffectListDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B7069C(Method_ClassBoardEffectListDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
    if ( v4 )
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    else
      OverwriteAssetSoundName__PlaySe(v6, this->fields.onClickCloseSe, 0LL);
    ClassBoardEffectListDialog__Close(this, v7);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *v25; // x22
  ClassBoardEffectListDialog___c_c *v26; // x0
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x23
  Il2CppObject *v29; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_TOutput__o *v37; // x0
  ClassBoardEffectListDialog___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x22
  struct ClassBoardEffectListDialog___c_StaticFields *v40; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__27_1; // x23
  Il2CppObject *v42; // x24
  struct ClassBoardEffectListDialog___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x6
  int v53; // w8
  void *v54; // x22
  unsigned int v55; // w28
  ClassBoardBaseEntity_o *v56; // x23
  int32_t id; // w8
  bool v58; // w24
  const MethodInfo *v59; // x6
  struct System_Int32_array *v60; // x22
  _BOOL8 v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  Il2CppObject *current; // x21
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w24
  int klass; // w25
  bool v68; // w26
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x6
  UnityEngine_Object_o *v71; // x20
  System_String_o *v72; // x1
  UnityEngine_Object_o *closeButtonLabel; // x20
  struct UILabel_o *v74; // x20
  System_Action_o *v75; // x20
  __int64 v76; // x0
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+0h] [xbp-90h] BYREF
  WarEntity_o *v78; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4353AD1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardEffectListDialog_EndOpen__);
    sub_B70694(&Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__);
    sub_B70694(&System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__get_Current__);
    sub_B70694(&Method_System_Func_ClassBoardBaseEntity__int___ctor__);
    sub_B70694(&System_Func_ClassBoardBaseEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    sub_B70694(&Method_ClassBoardEffectListDialog___c__Open_b__27_0__);
    sub_B70694(&Method_ClassBoardEffectListDialog___c__Open_b__27_1__);
    sub_B70694(&ClassBoardEffectListDialog___c_TypeInfo);
    sub_B70694(&StringLiteral_3080/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/);
    sub_B70694(&StringLiteral_3081/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353AD1 = 1;
  }
  entity = 0LL;
  memset(&v79, 0, sizeof(v79));
  v78 = 0LL;
  v14 = (System_String_o **)&StringLiteral_3081/*"CLASS_BOARD_EFFECT_LIST_TITLE_SUPPORT"*/;
  TitleLabel = this->fields.TitleLabel;
  if ( !supportClassBoard )
    v14 = (System_String_o **)&StringLiteral_3080/*"CLASS_BOARD_EFFECT_LIST_TITLE"*/;
  v16 = *v14;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  tabListParent = LocalizationManager__Get(v16, 0LL);
  if ( !TitleLabel )
    goto LABEL_85;
  UILabel__set_text(TitleLabel, (System_String_o *)tabListParent, 0LL);
  this->fields.closeEndFunc = closeFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)closeFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  tabListParent = this->fields.tabListParent;
  if ( !tabListParent )
    goto LABEL_85;
  if ( isAllDisp )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    v25 = (System_Collections_ObjectModel_ObservableCollection_T__o *)*((_QWORD *)tabListParent + 4);
    v26 = ClassBoardEffectListDialog___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v26 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B70764(System_Converter_DataEntityBase__ClassBoardBaseEntity__TypeInfo);
      System_Converter_string__string____ctor(
        _9__27_0,
        v29,
        Method_ClassBoardEffectListDialog___c__Open_b__27_0__,
        (const MethodInfo_21BC9BC *)Method_System_Converter_DataEntityBase__ClassBoardBaseEntity___ctor__);
      v30 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v30->__9__27_0 = (struct System_Converter_DataEntityBase__ClassBoardBaseEntity__o *)_9__27_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v30->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = ObservableCollectionExtensions__ConvertAll_object__object_(
            v25,
            (System_Converter_T__TOutput__o *)_9__27_0,
            (const MethodInfo_1D58E18 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__ClassBoardBaseEntity___);
    v38 = ClassBoardEffectListDialog___c_TypeInfo;
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
    if ( (BYTE3(ClassBoardEffectListDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialog___c_TypeInfo);
      v38 = ClassBoardEffectListDialog___c_TypeInfo;
    }
    v40 = v38->static_fields;
    _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v40->__9__27_1;
    if ( !_9__27_1 )
    {
      if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v40 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)v40->__9;
      _9__27_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_ClassBoardBaseEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__27_1,
        v42,
        Method_ClassBoardEffectListDialog___c__Open_b__27_1__,
        (const MethodInfo_29AD124 *)Method_System_Func_ClassBoardBaseEntity__int___ctor__);
      v43 = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
      v43->__9__27_1 = (struct System_Func_ClassBoardBaseEntity__int__o *)_9__27_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v43->__9__27_1,
        (System_Int32_array **)_9__27_1,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 v39,
                                                                 (System_Func_TSource__TKey__o *)_9__27_1,
                                                                 (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardBaseEntity__int___);
    tabListParent = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                      v50,
                      (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_ClassBoardBaseEntity___);
    if ( !tabListParent )
      goto LABEL_85;
    v53 = *((_DWORD *)tabListParent + 6);
    v54 = tabListParent;
    if ( v53 >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= v53 )
        {
          v76 = sub_B70798(tabListParent);
          sub_B70738(v76, 0LL);
        }
        v56 = (ClassBoardBaseEntity_o *)*((_QWORD *)v54 + (int)v55 + 4);
        if ( !v56 )
          break;
        id = v56->fields.id;
        v58 = id == 1;
        if ( supportClassBoard )
          v58 = id == supportClassBoard->fields.classBoardBaseId;
        else
          ClassBoardEffectListDialog__SetList(this, v56, id == 1, dispType, 1, 0LL, v52);
        ClassBoardEffectListDialog__SetTab(this, v56, v58, supportClassBoard != 0LL, v51);
        v53 = *((_DWORD *)v54 + 6);
        if ( (int)++v55 >= v53 )
          goto LABEL_40;
      }
LABEL_85:
      sub_B7076C(tabListParent, v18);
    }
LABEL_40:
    if ( supportClassBoard )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !tabListParent )
        goto LABEL_85;
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
        &entity,
        supportClassBoard->fields.classBoardBaseId,
        (const MethodInfo_21C049C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      ClassBoardEffectListDialog__SetList(
        this,
        (ClassBoardBaseEntity_o *)entity,
        1,
        dispType,
        1,
        supportClassBoard,
        v59);
      tabListParent = this->fields.tabComponentList;
      if ( !tabListParent )
        goto LABEL_85;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v77,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tabListParent,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__GetEnumerator__);
      v60 = 0LL;
      v79 = v77;
      while ( 1 )
      {
        v61 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v79,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__MoveNext__);
        if ( !v61 )
          break;
        current = v79.fields.current;
        if ( !v79.fields.current )
          sub_B7076C(v61, v62);
        squareIds = supportClassBoard->fields.squareIds;
        classBoardBaseId = supportClassBoard->fields.classBoardBaseId;
        klass = (int)v79.fields.current[3].klass;
        if ( squareIds )
          v60 = supportClassBoard->fields.squareIds;
        if ( squareIds )
        {
          if ( !v60 )
            sub_B7076C(v61, v62);
          v68 = v60->max_length != 0;
        }
        else
        {
          v68 = 0;
        }
        ClassBoardEffectDialogTabComponent__SetButtonState(
          (ClassBoardEffectDialogTabComponent_o *)v79.fields.current,
          classBoardBaseId == klass,
          v63);
        ClassBoardEffectDialogTabComponent__SetButtonEnable(
          (ClassBoardEffectDialogTabComponent_o *)current,
          v68 && classBoardBaseId == klass,
          v69);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v79,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectDialogTabComponent__Dispose__);
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
      v74 = this->fields.closeButtonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      tabListParent = LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v74 )
        goto LABEL_85;
      v72 = (System_String_o *)tabListParent;
      tabListParent = v74;
      goto LABEL_83;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tabListParent, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    tabListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !tabListParent )
      goto LABEL_85;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)tabListParent,
           &v78,
           dispBaseId,
           (const MethodInfo_21C049C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    {
      ClassBoardEffectListDialog__SetList(this, (ClassBoardBaseEntity_o *)v78, 1, dispType, 0, 0LL, v70);
    }
    v71 = (UnityEngine_Object_o *)this->fields.closeButtonLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
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
      v72 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_83:
      UILabel__set_text((UILabel_o *)tabListParent, v72, 0LL);
    }
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v75 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_ClassBoardEffectListDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
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
    sub_B7076C(iconAtlasManagerUnit, sprite);
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
  UnityEngine_Object_o *skillListObjectForAll; // x25
  struct UnityEngine_GameObject_o **p_skillListObjectForAll; // x26
  UnityEngine_GameObject_o *skillListParent; // x0
  UnityEngine_GameObject_o *v16; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x26
  const MethodInfo *v19; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x25
  bool v21; // w23
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x5
  int32_t v24; // w1
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353AD2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353AD2 = 1;
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
  v16 = *p_skillListObjectForAll;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v16, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_18;
  v18 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillListComponent___);
  if ( !skillListParent )
    goto LABEL_18;
  v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent;
  ClassBoardEffectListDialogSkillListComponent__Init(
    (ClassBoardEffectListDialogSkillListComponent_o *)skillListParent,
    this,
    v19);
  skillListParent = (UnityEngine_GameObject_o *)this->fields.skillListComponentList;
  if ( !skillListParent )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillListParent,
    v20,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent__Add__);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v18, one, 0LL);
  v21 = isAll;
  ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v20,
    baseEntity,
    v21,
    supportClassBoard,
    v22);
  v24 = baseEntity ? baseEntity->fields.id : 0;
  ClassBoardEffectListDialogSkillListComponent__SetList(
    (ClassBoardEffectListDialogSkillListComponent_o *)v20,
    v24,
    dispType,
    v21,
    supportClassBoard,
    v23);
  skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
  if ( !skillListParent )
LABEL_18:
    sub_B7076C(skillListParent, baseEntity);
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
  ClassBoardEffectDialogTabComponent_o *v13; // x23
  UIGrid_o *tabGird; // x25
  const MethodInfo *v15; // x5
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353AD3 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__);
    byte_4353AD3 = 1;
  }
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_10;
  tabObject = this->fields.tabObject;
  transform = UnityEngine_GameObject__get_transform(skillListParent, 0LL);
  skillListParent = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, tabObject, transform, 0LL, 0LL);
  if ( !skillListParent )
    goto LABEL_10;
  v12 = skillListParent;
  skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  skillListParent,
                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectDialogTabComponent___);
  if ( !this->fields.tabComponentList
    || (v13 = (ClassBoardEffectDialogTabComponent_o *)skillListParent,
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.tabComponentList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)skillListParent,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectDialogTabComponent__Add__),
        tabGird = this->fields.tabGird,
        skillListParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL),
        !tabGird)
    || (UIGrid__AddChild(tabGird, (UnityEngine_Transform_o *)skillListParent, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v12, one, 0LL),
        !baseEntity)
    || !v13 )
  {
LABEL_10:
    sub_B7076C(skillListParent, baseEntity);
  }
  ClassBoardEffectDialogTabComponent__Setup(v13, this, baseEntity->fields.id, isDisp, isSupport, v15);
}


void __fastcall ClassBoardEffectListDialog___LoadSystemAsset_b__23_0(
        ClassBoardEffectListDialog_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_B7076C(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialog__get_closeBtnPath(
        ClassBoardEffectListDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353AD8 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15699/*"Window/CloseBtn"*/);
    byte_4353AD8 = 1;
  }
  return (System_String_o *)StringLiteral_15699/*"Window/CloseBtn"*/;
}


void __fastcall ClassBoardEffectListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardEffectListDialog___c_StaticFields *static_fields; // x0

  if ( (byte_434ED98 & 1) == 0 )
  {
    sub_B70694(&ClassBoardEffectListDialog___c_TypeInfo);
    byte_434ED98 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ClassBoardEffectListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardEffectListDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialog___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434ED99 & 1) == 0 )
  {
    sub_B70694(&ClassBoardBaseEntity_TypeInfo);
    byte_434ED99 = 1;
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
    sub_B7076C(this, 0LL);
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

  if ( (byte_434ED9A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434ED9A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetFadeMaskCollider(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  BaseDialog__Init((BaseDialog_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}