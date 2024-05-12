void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_43896B8 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusDialog_TypeInfo);
    sub_B775C4(&StringLiteral_362/*"#4C4C4C"*/);
    byte_43896B8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantStatusDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_362/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_362/*"#4C4C4C"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_43896B7 & 1) == 0 )
  {
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_43896B7 = 1;
  }
  LODWORD(this->fields.titleInfo) = 1083283866;
  LODWORD(this->fields.battleChr) = -18;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.y = 0xBFC666663F59999ALL;
  v3 = (struct System_Int32_array *)sub_B775DC(bool___TypeInfo, 4LL);
  this->fields.profileNewIdList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.profileNewIdList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.requestVoiceDataList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.voiceDataList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.voicePlayer = (struct SePlayer_o *)v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.voicePlayer,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_23673/*"wait"*/;
  *(_QWORD *)&this->fields.confirmDispLv = StringLiteral_23673/*"wait"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.confirmDispLv, v31, v32, v33, v34, v35, v36, v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4389661 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389661 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.isBattlePlay = StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v9, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v11);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v12);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UICamera_c *v2; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v5; // x19
  UnityEngine_Object_o *dragged; // x19
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x20
  UnityEngine_Object_o *current; // x19
  __int64 v11; // x2
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  struct UICamera_StaticFields *static_fields; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UICamera_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UICamera_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  char v42[4]; // [xsp+4h] [xbp-3Ch] BYREF
  char v43[4]; // [xsp+8h] [xbp-38h] BYREF
  char v44[4]; // [xsp+Ch] [xbp-34h] BYREF
  char v45[4]; // [xsp+18h] [xbp-28h] BYREF
  char v46[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4389658 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TouchEffectManager_TypeInfo);
    sub_B775C4(&UICamera_TypeInfo);
    sub_B775C4(&StringLiteral_10172/*"OnDragEnd"*/);
    sub_B775C4(&StringLiteral_10192/*"OnHover"*/);
    sub_B775C4(&StringLiteral_10222/*"OnPress"*/);
    sub_B775C4(&StringLiteral_10231/*"OnScrollStop"*/);
    byte_4389658 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v2 = UICamera_TypeInfo;
  }
  currentTouch = v2->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    }
    TouchEffectManager__UnPress(0LL);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(last, 0LL, 0LL) )
    {
      v5 = currentTouch->fields.last;
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v5, (System_String_o *)StringLiteral_10172/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v8 = currentTouch->fields.dragged;
      v46[0] = 0;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v46, v7);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v8, (System_String_o *)StringLiteral_10222/*"OnPress"*/, v9, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v12 = currentTouch->fields.current;
      v45[0] = 1;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45, v11);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v12, (System_String_o *)StringLiteral_10192/*"OnHover"*/, v13, 0LL);
    }
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0LL, 0LL) )
  {
    v44[0] = 0;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44, v15);
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10222/*"OnPress"*/, v16, 0LL);
    v43[0] = 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v17);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10192/*"OnHover"*/, v18, 0LL);
    v42[0] = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v42, v19);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10231/*"OnScrollStop"*/, v20, 0LL);
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->current, 0LL, v22, v23, v24, v25, v26, v27);
  v28 = UICamera_TypeInfo->static_fields;
  v28->currentCamera = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v28->currentCamera, 0LL, v29, v30, v31, v32, v33, v34);
  v35 = UICamera_TypeInfo->static_fields;
  v35->currentTouch = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v35->currentTouch, 0LL, v36, v37, v38, v39, v40, v41);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  ServantStatusBattleListViewItem_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438967B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    byte_438967B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager
    || (voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                            voiceTabListViewManager,
                                                                            method)) == 0LL )
  {
    sub_B7769C(voiceTabListViewManager, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceTabListViewManager,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v18,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B7769C(v4, v5);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v18.fields.current, v5);
    if ( !Item )
      sub_B7769C(0LL, v8);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v8);
    v11 = *(_QWORD *)&this->fields.isModify;
    if ( !v11 )
      sub_B7769C(DispLimitCount, v10);
    if ( (_DWORD)DispLimitCount == *(_DWORD *)(v11 + 240) )
    {
      v12 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v10);
      if ( !v12 )
        sub_B7769C(0LL, v13);
      index = (unsigned int)v12->fields.index;
      v16 = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
      this->fields.currentMaskType = index;
      if ( !v16 )
        sub_B7769C(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v16, index, v14);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  int32_t v3; // w20
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 currentMaskType; // x8
  int32_t v8; // w20
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  bool v11; // w22
  __int64 i; // x23
  SkillInfo_o *v13; // x0
  unsigned __int64 v14; // x25
  bool v15; // w22
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct UnityEngine_Camera_o *battleChrCamera; // x24
  TreasureDvcInfo_o *v19; // x25
  TreasureDvcInfo_o *v20; // x26
  SkillInfo_array *v21; // x21
  SkillInfo_array *v22; // x23
  int32_t nextLimitCount; // w28
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v24; // x27
  __int64 v25; // x0
  const MethodInfo *v26; // [xsp+18h] [xbp-88h]
  char isSkillModify; // [xsp+2Ch] [xbp-74h]
  SkillInfo_array *v28; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-68h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF

  v3 = dispLv;
  if ( (byte_438966A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndBattleConfirm__);
    byte_438966A = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v28 = 0LL;
  skillInfoList = 0LL;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  this->fields.currentMaskType = v3;
  if ( !svtId )
    goto LABEL_38;
  if ( !svtId->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, method);
    return;
  }
  dispSelectList = svtId->fields.dispSelectList;
  svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(svtId, 0LL);
  if ( !dispSelectList )
    goto LABEL_38;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= dispSelectList->max_length )
  {
LABEL_39:
    v25 = sub_B776C8(svtId);
    sub_B77668(v25, 0LL);
  }
  v8 = (int)svtId;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  v9 = dispSelectList->m_Items[currentMaskType + 1];
  ServantStatusListViewItem__GetNpInfo_36492388(svtId, &tdInfo, v8, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetNpInfo_36492388(svtId, &info, v9, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_36491392(svtId, &skillInfoList, v8, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_36491392(svtId, &v28, v9, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_38;
  v11 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v14 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= svtId->fields.commandCodeCommentEntity->fields.illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v14 >= skillInfoList->max_length )
      goto LABEL_39;
    if ( !v28 )
      goto LABEL_38;
    if ( v14 >= v28->max_length )
      goto LABEL_39;
    v13 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v28->obj.klass + i);
    if ( !v13 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v13 = (SkillInfo_o *)*((_QWORD *)&v28->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v13, *(SkillInfo_o **)&dispLv, 0LL) )
    {
      isSkillModify = 1;
LABEL_31:
      v15 = !v11;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v8, 0LL);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v9, 0LL);
      battleChrCamera = this->fields.battleChrCamera;
      v20 = info;
      v19 = tdInfo;
      v22 = v28;
      v21 = skillInfoList;
      nextLimitCount = LimitCountByImageLimitCostumeIn;
      v24 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_B77694(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
      ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_EndBattleConfirm__,
        0LL);
      svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( svtId )
      {
        svtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(svtId, 0LL);
        if ( battleChrCamera )
        {
          ServantStatusBattleConfirmDialog__Open(
            (ServantStatusBattleConfirmDialog_o *)battleChrCamera,
            v19,
            v20,
            v15,
            v21,
            v22,
            isSkillModify,
            v24,
            (int32_t)svtId,
            nowLimitCount,
            nextLimitCount,
            v26);
          return;
        }
      }
LABEL_38:
      sub_B7769C(svtId, *(_QWORD *)&dispLv);
    }
  }
  if ( !v11 )
  {
    isSkillModify = 0;
    goto LABEL_31;
  }
  ServantStatusDialog__SetChangeBattleResource(this, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_438969A & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_438969A = 1;
  }
  v5 = *(_QWORD *)&v4->fields.isModify;
  if ( !v5
    || (*(_DWORD *)(v5 + 320) = type, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)this, 4, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B7769C(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppClass *klass; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4389697 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData___ctor__);
    sub_B775C4(&System_Action_AssetData__TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog_EnddChangeCommandResourceLoad__);
    byte_4389697 = 1;
  }
  klass = v4[32].klass;
  if ( !klass )
    sub_B7769C(this, *(_QWORD *)&dispLv);
  klass->_2.static_fields_size = dispLv;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AssetData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    v4,
    Method_ServantStatusDialog_EnddChangeCommandResourceLoad__,
    (const MethodInfo_26A0868 *)Method_System_Action_AssetData___ctor__);
  ServantStatusDialog__StartCommandCardLoad((ServantStatusDialog_o *)v4, (System_Action_AssetData__o *)v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_438969E & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_438969E = 1;
  }
  v5 = *(_QWORD *)&v4->fields.isModify;
  if ( !v5
    || (*(_DWORD *)(v5 + 280) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)this, 5, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B7769C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_43896A1 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_43896A1 = 1;
  }
  v5 = *(_QWORD *)&v4->fields.isModify;
  if ( !v5
    || (*(_DWORD *)(v5 + 296) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)this, 7, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B7769C(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v6; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4389699 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4389699 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          type,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v6 = this->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v6) )
  {
    sub_B7769C(profileTabListViewManager, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v6, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *profileTabListViewManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *cardLoadAsset; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o *transformedStatusLoadAsset; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  System_String_o *loadVoiceData; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *dictChangeSvtVoiceIdList; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4389678 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389678 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  ServantStatusListViewManager__DestroyList(profileTabListViewManager, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.battleTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)profileTabListViewManager,
    0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)profileTabListViewManager,
    (const MethodInfo *)callback);
  *(_QWORD *)&this->fields.isModify = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isModify, 0LL, v6, v7, v8, v9, v10, v11);
  if ( !System_String__IsNullOrEmpty(this->fields.cardLoadAsset, 0LL) )
  {
    cardLoadAsset = this->fields.cardLoadAsset;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(cardLoadAsset, 0LL);
    this->fields.cardLoadAsset = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v13, v14, v15, v16, v17, v18);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
  {
    transformedStatusLoadAsset = this->fields.transformedStatusLoadAsset;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(transformedStatusLoadAsset, 0LL);
    this->fields.transformedStatusLoadAsset = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.transformedStatusLoadAsset,
      0LL,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    v26 = *(System_String_o **)&this->fields.isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v26, 0LL);
    *(_QWORD *)&this->fields.isBattlePlay = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, 0LL, v27, v28, v29, v30, v31, v32);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
  {
    loadVoiceData = this->fields.loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(loadVoiceData, 0LL);
    this->fields.loadVoiceData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v35, v36, v37, v38, v39, v40);
  }
  ServantStatusDialog__StopVoice(this, v33);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  dictChangeSvtVoiceIdList = (System_String_o *)this->fields.dictChangeSvtVoiceIdList;
  if ( dictChangeSvtVoiceIdList )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(dictChangeSvtVoiceIdList, 0LL);
    this->fields.dictChangeSvtVoiceIdList = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.dictChangeSvtVoiceIdList,
      0LL,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  if ( SLODWORD(profileTabListViewManager->fields.scrollView) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)profileTabListViewManager,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v49.fields.current;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
    if ( profileTabListViewManager )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
      goto LABEL_42;
    }
LABEL_47:
    sub_B7769C(profileTabListViewManager, callback);
  }
LABEL_42:
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusTabBase;
  if ( !profileTabListViewManager )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabListViewManager, 0, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !profileTabListViewManager )
    goto LABEL_47;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)profileTabListViewManager, 2, 0, 0LL);
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantStatusDialog__CoWaitForEndOfFrame(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4389690 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusDialog__CoWaitForEndOfFrame_d__196_TypeInfo);
    byte_4389690 = 1;
  }
  v4 = sub_B77694(ServantStatusDialog__CoWaitForEndOfFrame_d__196_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__196___ctor(
    (ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B7769C(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *callbackFunc; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4389668 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389668 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v5 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
  callbackFunc = (UnityEngine_Object_o *)this->fields.callbackFunc;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.callbackFunc;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusBattleConfirmDialog_o *battleChrCamera; // x0
  struct System_Int32_array *profileNewIdList; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  battleChrCamera = (ServantStatusBattleConfirmDialog_o *)this->fields.battleChrCamera;
  if ( !battleChrCamera )
    goto LABEL_8;
  ServantStatusBattleConfirmDialog__Close_22010932(battleChrCamera, 0LL, method);
  if ( isDecide )
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( profileNewIdList )
    {
      if ( !profileNewIdList->max_length )
      {
        v8 = sub_B776C8(battleChrCamera);
        sub_B77668(v8, 0LL);
      }
      LOBYTE(profileNewIdList->m_Items[1]) = 0;
      battleChrCamera = (ServantStatusBattleConfirmDialog_o *)this->fields.profileTabListViewManager;
      if ( battleChrCamera )
      {
        ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)battleChrCamera, 0LL);
        ServantStatusDialog__SetChangeBattleResource(this, 1, v7);
        return;
      }
    }
LABEL_8:
    sub_B7769C(battleChrCamera, isDecide);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_438969B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438969B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.transformedStatusLoadAsset, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        profileTabListViewManager = this->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
LABEL_8:
    sub_B7769C(Instance, v5);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ServantStatusListViewItem_o *SvtId; // x0
  int32_t v6; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  BattleFBXComponent_o *v9; // x8

  if ( (byte_438966D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438966D = 1;
  }
  LOBYTE(this->fields.battleActor) = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  SvtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_12;
  SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(SvtId, 1, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_12;
  v6 = (int)SvtId;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                          0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SvtId
    || (SvtId = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)SvtId,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL
    || (SvtId = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                 (ServantLimitImageMaster_o *)SvtId,
                                                 v6,
                                                 LimitCountByImageLimitCostumeIn,
                                                 0LL),
        (v9 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading) == 0LL) )
  {
LABEL_12:
    sub_B7769C(SvtId, v4);
  }
  BattleFBXComponent__SetEvolutionLevel(v9, v6, (int32_t)SvtId, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseConfirmSelectPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseConfirmServantQuest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__EndCloseSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4389684 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4389684 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B7769C(v5, v6);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v4, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4389682 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4389682 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B7769C(v5, v6);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v4, 0LL);
}


void __fastcall ServantStatusDialog__EndCommandCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438965E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData___ctor__);
    sub_B775C4(&System_Action_AssetData__TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndTransformedStatusLoad__);
    byte_438965E = 1;
  }
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AssetData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndTransformedStatusLoad__,
    (const MethodInfo_26A0868 *)Method_System_Action_AssetData___ctor__);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *statusTabBase; // x0
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x8
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int battleChr; // w21
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s0
  int v13; // w22
  UnityEngine_GameObject_o *v14; // x20
  int v15; // w21
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s0
  int v18; // w22
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s0
  bool v22; // w1
  __int64 v23; // x8
  int32_t v24; // w20
  int v25; // w8
  __int64 v26; // x8
  int32_t v27; // w20
  __int64 v28; // x8
  int v29; // w8
  bool v30; // w8
  bool v31; // w8
  int v32; // w8
  int v33; // w8
  bool v34; // zf
  unsigned __int64 v35; // x8
  struct System_Int32_array *profileNewIdList; // x9
  char *v37; // x9
  bool v38; // cf
  __int64 v39; // x8
  ServantCommentMaster_o *v40; // x21
  struct ServantStatusListViewItem_o *NewProfileEntities; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v49; // x1
  __int64 v50; // x8
  CommandCodeEntity_o *v51; // x0
  UIRangeLabel_o *v52; // x21
  UnityEngine_Object_o *v53; // x21
  const MethodInfo *v54; // x2
  UILabel_o *v55; // x21
  __int64 *v56; // x8
  System_String_o *v57; // x1
  UILabel_o *v58; // x0
  ServantLimitAddMaster_o *v59; // x21
  int v60; // w8
  char v61; // w21
  System_String_o *Name; // x22
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v68; // x22
  __int64 v69; // x8
  int32_t v70; // w2
  int32_t v71; // w1
  _QWORD *v72; // x9
  __int64 v73; // x0
  int32_t v74; // w21
  int32_t v75; // w21
  ServantLimitImageMaster_o *v76; // x22
  __int64 v77; // x8
  int32_t v78; // w2
  __int64 v79; // x8
  struct UILabel_o *servantClassNameLabel; // x22
  int32_t v81; // w1
  int32_t v82; // w2
  __int64 v83; // x9
  System_String_o *v84; // x1
  ServantLimitImageMaster_o *v85; // x21
  __int64 v86; // x8
  __int64 v87; // x8
  struct UILabel_o *v88; // x21
  UnityEngine_GameObject_o *v89; // x22
  __int64 v90; // x23
  __int64 v91; // x24
  int32_t v92; // w1
  UnityEngine_Object_o *battleExplanationLabel; // x21
  __int64 v94; // x8
  UILabel_o *v95; // x21
  __int64 v96; // x8
  UnityEngine_Object_o *markBase; // x21
  __int64 v98; // x8
  ServantLimitImageMaster_o *v99; // x21
  struct UnityEngine_GameObject_o *v100; // x22
  __int64 v101; // x8
  __int64 v102; // x8
  __int64 v103; // x22
  __int64 v104; // x23
  int32_t v105; // w22
  struct UnityEngine_GameObject_o *v106; // x23
  System_String_o *klass; // x25
  System_String_o *v108; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v110; // x0
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x2
  int v113; // w8
  unsigned int v114; // w8
  const MethodInfo *v115; // x1
  unsigned int v116; // w8
  __int64 v117; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_4389656 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_12189/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_B775C4(&StringLiteral_12188/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12190/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_B775C4(&StringLiteral_12191/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_B775C4(&StringLiteral_12196/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_B775C4(&StringLiteral_12195/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_B775C4(&StringLiteral_3687/*"CancelInput"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_6110/*"EndLoadInit"*/);
    byte_4389656 = 1;
  }
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_240;
  UnityEngine_GameObject__SetActive(statusTabBase, 1, 0LL);
  v4 = *(UnityEngine_Object_o **)&this->fields.changeTransformAddTabMargin;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v5 = *(_QWORD *)&this->fields.isModify;
    if ( !v5 )
      goto LABEL_240;
    if ( *(_BYTE *)(v5 + 523) )
    {
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_240;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !this->fields.profileButton )
        goto LABEL_240;
      v6 = statusTabBase;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v6, LocalPositionX + 0.0, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_240;
      battleChr = (int)this->fields.battleChr;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !this->fields.battleButton )
        goto LABEL_240;
      v10 = statusTabBase;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0LL);
      v12 = GameObjectExtensions__GetLocalPositionX(v11, 0LL);
      GameObjectExtensions__SetLocalPositionX(v10, v12 + (float)battleChr, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_240;
      v13 = (int)this->fields.battleChr;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !this->fields.voiceButton )
        goto LABEL_240;
      v14 = statusTabBase;
      v15 = v13 + battleChr;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0LL);
      v17 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      GameObjectExtensions__SetLocalPositionX(v14, v17 + (float)v15, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !statusTabBase )
        goto LABEL_240;
      v18 = (int)this->fields.battleChr;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !this->fields.profileNewIcon )
        goto LABEL_240;
      v19 = statusTabBase;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileNewIcon, 0LL);
      v21 = GameObjectExtensions__GetLocalPositionX(v20, 0LL);
      GameObjectExtensions__SetLocalPositionX(v19, v21 + (float)(v18 + v15), 0LL);
      statusTabBase = *(UnityEngine_GameObject_o **)&this->fields.changeTransformAddTabMargin;
      if ( !statusTabBase )
        goto LABEL_240;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_240;
      v22 = 1;
    }
    else
    {
      statusTabBase = *(UnityEngine_GameObject_o **)&this->fields.changeTransformAddTabMargin;
      if ( !statusTabBase )
        goto LABEL_240;
      statusTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
      if ( !statusTabBase )
        goto LABEL_240;
      v22 = 0;
    }
    UnityEngine_GameObject__SetActive(statusTabBase, v22, 0LL);
  }
  v23 = *(_QWORD *)&this->fields.isModify;
  if ( !v23 )
    goto LABEL_240;
  if ( *(_QWORD *)(v23 + 176) )
  {
    switch ( *(_DWORD *)&this->fields.isInitTab )
    {
      case 3:
      case 0x15:
        v24 = 0;
        v25 = 21;
        break;
      case 4:
      case 0x16:
        v24 = 0;
        v25 = 22;
        break;
      case 5:
      case 0x17:
        v24 = 0;
        v25 = 23;
        break;
      case 6:
      case 0x18:
        v24 = 0;
        v25 = 24;
        break;
      case 7:
      case 0x19:
        v24 = 0;
        v25 = 25;
        break;
      case 8:
      case 0x1A:
        v24 = 0;
        v25 = 26;
        break;
      case 9:
      case 0x1B:
        v24 = 0;
        v25 = 27;
        break;
      case 0x1D:
      case 0x20:
        v24 = 0;
        v25 = 32;
        break;
      default:
        v24 = 0;
        v25 = 20;
        break;
    }
    goto LABEL_73;
  }
  v26 = *(_QWORD *)(v23 + 128);
  if ( !v26 )
    goto LABEL_240;
  v27 = *(_DWORD *)(v26 + 84);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  statusTabBase = (UnityEngine_GameObject_o *)TutorialFlag__Get_29515752(106, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
    goto LABEL_38;
  v28 = *(_QWORD *)&this->fields.isModify;
  if ( !v28 )
    goto LABEL_240;
  if ( *(__int64 *)(v28 + 160) >= 1
    && SvtType__IsOrganization(v27, 0LL)
    && (v29 = *(_DWORD *)&this->fields.isInitTab, v29 != 3) )
  {
    v30 = v29 != 12;
  }
  else
  {
LABEL_38:
    v30 = 0;
  }
  LOBYTE(this->fields.newProfileList) = v30;
  v31 = SvtType__IsOrganization(v27, 0LL) && *(_DWORD *)&this->fields.isInitTab != 12;
  BYTE1(this->fields.newProfileList) = v31;
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(v27, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v24 = 0;
    v25 = 28;
LABEL_73:
    *(_DWORD *)&this->fields.isInitTab = v25;
    goto LABEL_74;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(v27, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v32 = *(_DWORD *)&this->fields.isInitTab;
    switch ( v32 )
    {
      case 3:
      case 12:
        v24 = 0;
        v25 = 12;
        break;
      case 4:
      case 13:
        v24 = 0;
        v25 = 13;
        break;
      case 5:
      case 14:
        v24 = 0;
        v25 = 14;
        break;
      case 6:
      case 15:
        v24 = 0;
        v25 = 15;
        break;
      case 7:
      case 16:
        v24 = 0;
        v25 = 16;
        break;
      case 8:
      case 17:
        v24 = 0;
        v25 = 17;
        break;
      case 9:
      case 18:
        v24 = 0;
        v25 = 18;
        break;
      case 19:
        v24 = 0;
        v25 = 19;
        break;
      case 29:
      case 31:
        v24 = 0;
        v25 = 31;
        break;
      default:
        v34 = v32 == 33;
        v25 = 11;
        v24 = v34;
        break;
    }
    goto LABEL_73;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServant(v27, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
  {
    v33 = *(_DWORD *)&this->fields.isInitTab;
    if ( v33 != 36 )
    {
      v24 = 0;
      if ( v33 == 29 )
        v25 = 30;
      else
        v25 = 10;
      goto LABEL_73;
    }
  }
  v24 = 0;
LABEL_74:
  v35 = 0LL;
  do
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_240;
    if ( v35 >= profileNewIdList->max_length )
    {
      v117 = sub_B776C8(statusTabBase);
      sub_B77668(v117, 0LL);
    }
    v37 = (char *)profileNewIdList + v35;
    v38 = v35++ >= 3;
    v37[32] = 0;
  }
  while ( !v38 );
  v39 = *(_QWORD *)&this->fields.isModify;
  if ( !v39 )
    goto LABEL_240;
  if ( *(_QWORD *)(v39 + 80) )
  {
    statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !statusTabBase )
      goto LABEL_240;
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)statusTabBase,
                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_240;
    v40 = (ServantCommentMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v40 )
      goto LABEL_240;
    NewProfileEntities = (struct ServantStatusListViewItem_o *)ServantCommentMaster__GetNewProfileEntities(
                                                                 v40,
                                                                 (int32_t)statusTabBase,
                                                                 0LL);
    this->fields.mainInfo = NewProfileEntities;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mainInfo,
      (System_Int32_array **)NewProfileEntities,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_240;
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_240;
    ShiningIconComponent__Set_34095244(
      (ShiningIconComponent_o *)statusTabBase,
      SLODWORD(mainInfo->fields.partyItem) > 0,
      0LL);
  }
  else
  {
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_240;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)statusTabBase, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v49);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_240;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)statusTabBase, 0LL, 1, 0LL, 0, 0LL);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_240;
  TitleInfoControl__changeTitleInfo_18674844((TitleInfoControl_o *)statusTabBase, 1, 0, 0, 0LL);
  v50 = *(_QWORD *)&this->fields.isModify;
  if ( !v50 )
    goto LABEL_240;
  v51 = *(CommandCodeEntity_o **)(v50 + 176);
  if ( !v51 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_240;
    v59 = (ServantLimitAddMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v59 )
      goto LABEL_240;
    statusTabBase = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                                  v59,
                                                  (int32_t)statusTabBase,
                                                  0LL);
    v60 = *(_DWORD *)&this->fields.isInitTab;
    v61 = (char)statusTabBase;
    if ( (v60 & 0xFFFFFFFE) == 4 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      statusTabBase = (UnityEngine_GameObject_o *)OptionManager__GetSpoilerSetting(0LL);
      if ( ((unsigned __int8)statusTabBase & 1) == 0 )
      {
        v63 = *(_QWORD *)&this->fields.isModify;
        if ( !v63 )
          goto LABEL_240;
        v64 = *(_QWORD *)(v63 + 88);
        if ( !v64 )
          goto LABEL_240;
        Name = *(System_String_o **)(v64 + 256);
      }
      statusTabBase = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(Name, 0LL);
      if ( ((unsigned __int8)statusTabBase & 1) != 0 )
      {
        v65 = *(_QWORD *)&this->fields.isModify;
        if ( !v65 )
          goto LABEL_240;
        if ( (v61 & 1) != 0 )
        {
          statusTabBase = *(UnityEngine_GameObject_o **)(v65 + 88);
          if ( !statusTabBase )
            goto LABEL_240;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)statusTabBase, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !statusTabBase )
            goto LABEL_240;
          statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)statusTabBase,
                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*(_QWORD *)&this->fields.isModify )
            goto LABEL_240;
          v68 = (ServantLimitImageMaster_o *)statusTabBase;
          statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                        *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                        0LL);
          if ( !v68 )
            goto LABEL_240;
          statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        v68,
                                                        (int32_t)statusTabBase,
                                                        LimitCountByImageLimitCostumeIn,
                                                        0LL);
          v69 = *(_QWORD *)&this->fields.isModify;
          if ( !v69 )
            goto LABEL_240;
          v70 = (int)statusTabBase;
          statusTabBase = *(UnityEngine_GameObject_o **)(v69 + 128);
          if ( !statusTabBase )
            goto LABEL_240;
          v71 = -1;
        }
        else
        {
          v83 = *(_QWORD *)(v65 + 88);
          if ( !v83 )
            goto LABEL_240;
          statusTabBase = *(UnityEngine_GameObject_o **)(v65 + 128);
          if ( !statusTabBase )
            goto LABEL_240;
          v71 = *(_DWORD *)(v83 + 64);
          v70 = -1;
        }
        Name = ServantEntity__getName((ServantEntity_o *)statusTabBase, v71, v70, 0LL);
      }
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantClassNameLabel;
      if ( !statusTabBase )
        goto LABEL_240;
      v84 = Name;
      goto LABEL_178;
    }
    if ( (unsigned int)(v60 - 6) <= 2 )
    {
      v79 = *(_QWORD *)&this->fields.isModify;
      if ( !v79 )
        goto LABEL_240;
      statusTabBase = *(UnityEngine_GameObject_o **)(v79 + 128);
      if ( !statusTabBase )
        goto LABEL_240;
      servantClassNameLabel = this->fields.servantClassNameLabel;
      if ( (v61 & 1) != 0 )
      {
        v81 = -1;
        v82 = 0;
      }
      else
      {
        v82 = -1;
        v81 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)statusTabBase,
                                                    v81,
                                                    v82,
                                                    0LL);
      if ( !servantClassNameLabel )
        goto LABEL_240;
      v84 = (System_String_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)servantClassNameLabel;
      goto LABEL_178;
    }
    v72 = *(_QWORD **)&this->fields.isModify;
    if ( !v72 )
      goto LABEL_240;
    v73 = v72[7];
    if ( v73 )
    {
      if ( (v61 & 1) == 0 )
      {
        v88 = this->fields.servantClassNameLabel;
        v89 = (UnityEngine_GameObject_o *)v72[16];
        v91 = *(_QWORD *)(v73 + 96);
        v90 = *(_QWORD *)(v73 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v118.fields.currentCryptoKey = v91;
        *(_QWORD *)&v118.fields.fakeValue = v90;
        statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                      v118,
                                                      0LL);
        if ( !v89 )
          goto LABEL_240;
        v92 = (int)statusTabBase;
        v78 = -1;
        statusTabBase = v89;
        goto LABEL_176;
      }
      v74 = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v73, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v75 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v74, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !statusTabBase )
        goto LABEL_240;
      statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)statusTabBase,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_240;
      v76 = (ServantLimitImageMaster_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL);
      if ( !v76 )
        goto LABEL_240;
      statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v76,
                                                    (int32_t)statusTabBase,
                                                    v75,
                                                    0LL);
      v77 = *(_QWORD *)&this->fields.isModify;
      if ( !v77 )
        goto LABEL_240;
      v78 = (int)statusTabBase;
      statusTabBase = *(UnityEngine_GameObject_o **)(v77 + 128);
      if ( !statusTabBase )
        goto LABEL_240;
    }
    else
    {
      if ( (v61 & 1) == 0 )
      {
        statusTabBase = (UnityEngine_GameObject_o *)v72[16];
        if ( !statusTabBase )
          goto LABEL_240;
        v88 = this->fields.servantClassNameLabel;
        v92 = -1;
        v78 = -1;
        goto LABEL_176;
      }
      if ( v72[10] )
      {
        statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !statusTabBase )
          goto LABEL_240;
        statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)statusTabBase,
                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*(_QWORD *)&this->fields.isModify )
          goto LABEL_240;
        v85 = (ServantLimitImageMaster_o *)statusTabBase;
        statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                      *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                      0LL);
        v86 = *(_QWORD *)&this->fields.isModify;
        if ( !v86 )
          goto LABEL_240;
        v87 = *(_QWORD *)(v86 + 80);
        if ( !v87 )
          goto LABEL_240;
        if ( !v85 )
          goto LABEL_240;
        statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                      v85,
                                                      (int32_t)statusTabBase,
                                                      *(_DWORD *)(v87 + 56),
                                                      0LL);
        v72 = *(_QWORD **)&this->fields.isModify;
        if ( !v72 )
          goto LABEL_240;
        v78 = (int)statusTabBase;
      }
      else
      {
        v78 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)v72[16];
      if ( !statusTabBase )
        goto LABEL_240;
    }
    v88 = this->fields.servantClassNameLabel;
    v92 = -1;
LABEL_176:
    statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)statusTabBase, v92, v78, 0LL);
    if ( !v88 )
      goto LABEL_240;
    v84 = (System_String_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)v88;
LABEL_178:
    UIRangeLabel__Set((UIRangeLabel_o *)statusTabBase, v84, 0LL, 1, 0, 0LL);
    battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL);
    if ( ((unsigned __int8)statusTabBase & 1) != 0 )
    {
      v94 = *(_QWORD *)&this->fields.isModify;
      if ( !v94 )
        goto LABEL_240;
      statusTabBase = *(UnityEngine_GameObject_o **)(v94 + 128);
      if ( !statusTabBase )
        goto LABEL_240;
      v95 = this->fields.battleExplanationLabel;
      statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__get_IsServantEquip(
                                                    (ServantEntity_o *)statusTabBase,
                                                    0LL);
      if ( ((unsigned __int8)statusTabBase & 1) != 0 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_12196/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/,
                                                      0LL);
      }
      else
      {
        v96 = *(_QWORD *)&this->fields.isModify;
        if ( !v96 )
          goto LABEL_240;
        statusTabBase = *(UnityEngine_GameObject_o **)(v96 + 128);
        if ( !statusTabBase )
          goto LABEL_240;
        statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)statusTabBase, 0LL);
      }
      method = (const MethodInfo *)statusTabBase;
      if ( !v95 )
        goto LABEL_240;
      UILabel__set_text(v95, (System_String_o *)statusTabBase, 0LL);
    }
    markBase = (UnityEngine_Object_o *)this->fields.markBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(markBase, 0LL, 0LL) )
      goto LABEL_216;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v98 = *(_QWORD *)&this->fields.isModify;
    if ( v98 )
    {
      if ( !*(_QWORD *)(v98 + 56) )
      {
        v55 = (UILabel_o *)this->fields.markBase;
        if ( *(_QWORD *)(v98 + 80) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v56 = &StringLiteral_12189/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v56 = &StringLiteral_12190/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        }
        goto LABEL_102;
      }
      v99 = (ServantLimitImageMaster_o *)statusTabBase;
      v100 = this->fields.markBase;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
      if ( v100 )
      {
        UILabel__set_text((UILabel_o *)v100, (System_String_o *)statusTabBase, 0LL);
        v101 = *(_QWORD *)&this->fields.isModify;
        if ( v101 )
        {
          v102 = *(_QWORD *)(v101 + 56);
          if ( v102 )
          {
            v104 = *(_QWORD *)(v102 + 80);
            v103 = *(_QWORD *)(v102 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v119.fields.currentCryptoKey = v104;
            *(_QWORD *)&v119.fields.fakeValue = v103;
            statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          v119,
                                                          0LL);
            if ( v99 )
            {
              v105 = (int)statusTabBase;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v99, (int32_t)statusTabBase, 3, 0LL) )
              {
                statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                              v99,
                                                              (System_String_o *)StringLiteral_12191/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                              v105,
                                                              0LL);
                v106 = this->fields.markBase;
                if ( !v106 )
                  goto LABEL_240;
                klass = (System_String_o *)v106[17].klass;
                v108 = (System_String_o *)statusTabBase;
                LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                v99,
                                                                v105,
                                                                3,
                                                                0LL);
                v110 = System_String__Format(v108, LimitCountSealedServantName, 0LL);
                v57 = System_String__Concat_44901936(klass, v110, 0LL);
                v58 = (UILabel_o *)v106;
                goto LABEL_104;
              }
              goto LABEL_216;
            }
          }
        }
      }
    }
LABEL_240:
    sub_B7769C(statusTabBase, method);
  }
  v52 = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
  statusTabBase = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(v51, 0LL);
  if ( !v52 )
    goto LABEL_240;
  UIRangeLabel__Set(v52, (System_String_o *)statusTabBase, 0LL, 1, 0, 0LL);
  v53 = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    v55 = this->fields.battleExplanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = &StringLiteral_12195/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
LABEL_102:
    statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v56, 0LL);
    if ( !v55 )
      goto LABEL_240;
    v57 = (System_String_o *)statusTabBase;
    v58 = v55;
LABEL_104:
    UILabel__set_text(v58, v57, 0LL);
  }
LABEL_216:
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !statusTabBase )
    goto LABEL_240;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabBase,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v54);
  ServantStatusDialog__SetMark(this, v111);
  v113 = *(_DWORD *)&this->fields.isInitTab;
  if ( v113 > 28 )
  {
    v114 = v113 - 30;
    if ( v114 < 7 )
    {
      v24 = dword_331C260[v114];
      goto LABEL_225;
    }
LABEL_223:
    v24 = 0;
    goto LABEL_225;
  }
  if ( v113 == 10 )
  {
    v24 = 1;
    goto LABEL_225;
  }
  if ( v113 != 11 )
  {
    v24 = 1;
    if ( v113 != 28 )
      goto LABEL_223;
  }
LABEL_225:
  ServantStatusDialog__SetTabKind(this, v24, v112);
  v116 = *(_DWORD *)&this->fields.isInitTab;
  LOBYTE(this->fields.battleActor) = 0;
  if ( v116 - 10 < 0x13 || v116 <= 0x24 && ((1LL << v116) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6110/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v115);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3687/*"CancelInput"*/,
    0.0,
    0LL);
}


void __fastcall ServantStatusDialog__EndLoadBattle(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4389664 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389664 = 1;
  }
  LOBYTE(this->fields.defaultAnimationName) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_QWORD *)&this->fields.isBattlePlay )
    ServantStatusDialog__EndLoadBattle_22079568(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_22079568(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4389665 & 1) == 0 )
  {
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    byte_4389665 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4389478 )
  {
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    byte_4389478 = 1;
  }
  v4 = RandomLimitCountManager_TypeInfo;
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    v4 = RandomLimitCountManager_TypeInfo;
  }
  if ( v4->static_fields->enableRandomLimitCount )
  {
    v5 = *(_QWORD *)&this->fields.isModify;
    if ( !v5 )
      sub_B7769C(v4, method);
    if ( !*(_BYTE *)(v5 + 192) )
      LOBYTE(this->fields.battleActor) = 0;
  }
  ServantStatusDialog__PlayBattleEffect(this, 0, v2);
}


void __fastcall ServantStatusDialog__EndLoadChangeBattleResource(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_438966C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438966C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4389659 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog__EndLoadInit_b__134_0__);
    byte_4389659 = 1;
  }
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__134_0__, 0LL);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v3, v4);
  ServantStatusDialog__InitList(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct System_Int32_array *profileNewIdList; // x8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int32_array *v8; // x8
  const MethodInfo *tabInitList_low; // x1
  __int64 v10; // x0

  if ( (byte_4389691 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389691 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  profileNewIdList = this->fields.profileNewIdList;
  if ( !profileNewIdList )
    goto LABEL_12;
  if ( !profileNewIdList->max_length )
    goto LABEL_13;
  LOBYTE(profileNewIdList->m_Items[1]) = 0;
  Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__CacheViewTopContentsAndGap((ServantStatusListViewManager_o *)Instance, 0LL),
        ServantStatusDialog__DestroyBattleChr(this, v6),
        v8 = this->fields.profileNewIdList,
        LOBYTE(this->fields.battleActor) = 0,
        !v8) )
  {
LABEL_12:
    sub_B7769C(Instance, v4);
  }
  if ( v8->max_length <= 3 )
  {
LABEL_13:
    v10 = sub_B776C8(Instance);
    sub_B77668(v10, 0LL);
  }
  HIBYTE(v8->m_Items[1]) = 0;
  tabInitList_low = (const MethodInfo *)LODWORD(this->fields.tabInitList);
  if ( (_DWORD)tabInitList_low == 3 )
  {
    ServantStatusDialog__StopVoice(this, tabInitList_low);
    LODWORD(tabInitList_low) = this->fields.tabInitList;
  }
  ServantStatusDialog__SetTabKind(this, (int32_t)tabInitList_low, v7);
}


void __fastcall ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  EventMissionProgressRequest_Argument_ProgressData_o *dictChangeSvtVoiceIdList; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlayer; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  struct System_Collections_Generic_Dictionary_int__int____o *v18; // x1
  System_String_o *v19; // x20
  System_Action_o *v20; // x21

  if ( (byte_4389670 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389670 = 1;
  }
  dictChangeSvtVoiceIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.dictChangeSvtVoiceIdList;
  if ( dictChangeSvtVoiceIdList )
  {
    voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voicePlayer;
    if ( voicePlayer )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        voicePlayer,
        dictChangeSvtVoiceIdList,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      this->fields.dictChangeSvtVoiceIdList = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.dictChangeSvtVoiceIdList, 0LL, v5, v6, v7, v8, v9, v10);
      voiceDataList = this->fields.voiceDataList;
      if ( voiceDataList )
      {
        if ( voiceDataList->fields._size < 1 )
        {
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( voicePlayer )
          {
            CommonUI__SetLoadMode((CommonUI_o *)voicePlayer, 0, 0LL);
            return;
          }
        }
        else
        {
          v18 = (struct System_Collections_Generic_Dictionary_int__int____o *)voiceDataList->fields._items->m_Items[0];
          this->fields.dictChangeSvtVoiceIdList = v18;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.dictChangeSvtVoiceIdList,
            (System_Int32_array **)v18,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voiceDataList;
          if ( voicePlayer )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)voicePlayer,
              0,
              (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            v19 = (System_String_o *)this->fields.dictChangeSvtVoiceIdList;
            v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__loadAudioAssetStorage(v19, v20, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B7769C(voicePlayer, dictChangeSvtVoiceIdList);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x8
  int v18; // w9
  int v19; // w10
  __int64 v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_4389674 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6136/*"EndWaitVoice"*/);
    byte_4389674 = 1;
  }
  this->fields.voicePlayList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
  v17 = *(_QWORD *)&this->fields.voicePlayNum;
  if ( v17 )
  {
    v18 = LODWORD(this->fields.voicePlayAssetName) + 1;
    LODWORD(this->fields.voicePlayAssetName) = v18;
    v19 = *(_DWORD *)(v17 + 24);
    if ( v18 < v19 )
    {
      if ( v18 >= (unsigned int)v19 )
      {
        v27 = sub_B776C8(servantNameRangeLabel);
        sub_B77668(v27, 0LL);
      }
      v20 = *(_QWORD *)(v17 + 8LL * v18 + 32);
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6136/*"EndWaitVoice"*/,
          *(float *)(v20 + 24),
          0LL);
        return;
      }
LABEL_18:
      sub_B7769C(servantNameRangeLabel, v10);
    }
    if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_30246704(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(this->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v11, v12, v13, v14, v15, v16);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v21, v22, v23, v24, v25, v26);
  }
  else if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_30246704(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  CommonUI_o *profileTabListViewManager; // x0
  const MethodInfo *v8; // x2
  struct ServantStatusFlavorTextListViewManager_o *v9; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_438968D & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_438968D = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  profileTabListViewManager = **(CommonUI_o ***)(v6 + 184);
  if ( !profileTabListViewManager )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(profileTabListViewManager, 0LL);
  if ( isDecide )
  {
    profileTabListViewManager = (CommonUI_o *)this->fields.profileTabListViewManager;
    if ( !profileTabListViewManager )
      goto LABEL_13;
    ServantStatusListViewManager__CacheViewTopTargetContents(
      (ServantStatusListViewManager_o *)profileTabListViewManager,
      19,
      0LL);
    ServantStatusDialog__SetTabKind(this, 0, v8);
  }
  v9 = this->fields.profileTabListViewManager;
  v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v9 )
LABEL_13:
    sub_B7769C(profileTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v9, 1, v10, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438965C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData___ctor__);
    sub_B775C4(&System_Action_AssetData__TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCommandCardLoad__);
    byte_438965C = 1;
  }
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AssetData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndCommandCardLoad__,
    (const MethodInfo_26A0868 *)Method_System_Action_AssetData___ctor__);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog__EndTransformedStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4389660 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_6110/*"EndLoadInit"*/);
    byte_4389660 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab != 33 )
  {
    Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v7, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_B7769C(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6110/*"EndLoadInit"*/,
    0.1,
    0LL);
}


void __fastcall ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusDialog_o *v8; // x19
  __int64 v9; // x8
  __int64 voicePlayAssetName_low; // x9
  int v11; // w10
  __int64 v12; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  SoundManager_c *v15; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v17; // x22
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p_voicePlayList; // x0
  __int64 v26; // x0

  v8 = this;
  if ( (byte_4389673 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_4389673 = 1;
  }
  v9 = *(_QWORD *)&v8->fields.voicePlayNum;
  if ( v9 )
  {
    voicePlayAssetName_low = SLODWORD(v8->fields.voicePlayAssetName);
    v11 = *(_DWORD *)(v9 + 24);
    if ( (int)voicePlayAssetName_low < v11 )
    {
      if ( (unsigned int)voicePlayAssetName_low >= v11 )
      {
        v26 = sub_B776C8(this);
        sub_B77668(v26, 0LL);
      }
      v12 = *(_QWORD *)(v9 + 8 * voicePlayAssetName_low + 32);
      if ( v12 )
      {
        v13 = *(System_String_o **)&v8->fields.voiceListIndex;
        v14 = *(System_String_o **)(v12 + 16);
        v15 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v15 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
        v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v18 = (System_Int32_array **)SoundManager__playVoice_23512556(v13, v14, DEFAULT_VOLUME, v17, 0LL);
        p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voicePlayList;
        v8->fields.voicePlayList = (struct ServantVoiceData_array *)v18;
        goto LABEL_17;
      }
LABEL_18:
      sub_B7769C(this, method);
    }
    if ( LODWORD(v8->fields.tabInitList) == 3 && ((__int64)v8->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.servantNameRangeLabel;
      if ( !this )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_30246704((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      LODWORD(v8->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&v8->fields.voicePlayNum = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields.voicePlayNum, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voiceListIndex;
    v18 = 0LL;
    LODWORD(v8->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&v8->fields.voiceListIndex = 0LL;
LABEL_17:
    sub_B77560(p_voicePlayList, v18, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall ServantStatusDialog__EnddChangeCommandResourceLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4389698 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389698 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 0, 0LL), (Instance = (CommonUI_o *)this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        profileTabListViewManager = this->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B7769C(Instance, v5);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int128 v7; // q1
  ServantStatusDialog_o *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int128 v11; // q0
  ServantStatusDialog_o *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  ServantStatusDialog_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  __int64 v18; // x8
  ServantStatusDialog_o *v19; // x22
  int32_t v20; // w21
  int32_t DispLimitCount; // w0
  int32_t v22; // w20
  ServantStatusDialog_o *v23; // x23
  int32_t LimitCount; // w0
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  ServantStatusDialog_o *v28; // x22
  __int64 v29; // x8
  ServantStatusDialog_o *v30; // x23
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-60h]
  TreasureDvcInfo_o *v35; // [xsp+60h] [xbp-40h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v3 = this;
  if ( (byte_438968A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438968A = 1;
  }
  entity = 0LL;
  v35 = 0LL;
  tdInfo = 0LL;
  v4 = *(_QWORD *)&v3->fields.isModify;
  if ( !v4 )
    goto LABEL_62;
  if ( !*(_QWORD *)(v4 + 56) )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = *(_QWORD *)&v3->fields.isModify;
  if ( !v5 )
    goto LABEL_62;
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    goto LABEL_62;
  v7 = *(_OWORD *)(v6 + 32);
  v8 = this;
  *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
  *(_OWORD *)&v34.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v33 = v34;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
  if ( !v8 )
    goto LABEL_62;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v8,
          &entity,
          (int64_t)this,
          (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v9 = *(_QWORD *)&v3->fields.isModify;
    if ( !v9 )
      goto LABEL_62;
    v10 = *(_QWORD *)(v9 + 56);
    if ( !v10 )
      goto LABEL_62;
    v11 = *(_OWORD *)(v10 + 32);
    v12 = this;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
    *(_OWORD *)&v34.fields.fakeValue = v11;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v32 = v34;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v32, 0LL);
    if ( !v12 )
      goto LABEL_62;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v12,
      &entity,
      (int64_t)this,
      (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *(_QWORD *)&v3->fields.isModify;
  if ( !v13 )
    goto LABEL_62;
  v14 = *(_QWORD *)(v13 + 56);
  if ( !v14 )
    goto LABEL_62;
  v15 = this;
  v17 = *(_QWORD *)(v14 + 80);
  v16 = *(_QWORD *)(v14 + 88);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v17;
  *(_QWORD *)&v38.fields.fakeValue = v16;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v38, 0LL);
  if ( !v15 )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v15,
                                    (int32_t)this,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = *(_QWORD *)&v3->fields.isModify;
  if ( !v18 )
    goto LABEL_62;
  v19 = this;
  this = *(ServantStatusDialog_o **)(v18 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_62;
  v20 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( v20 == DispLimitCount )
    goto LABEL_61;
  v22 = DispLimitCount;
  this = *(ServantStatusDialog_o **)&v3->fields.isModify;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v19)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, (int32_t)this, v20, 0LL),
        !*(_QWORD *)&v3->fields.isModify)
    || (v23 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(
                       *(ServantStatusListViewItem_o **)&v3->fields.isModify,
                       0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v19, LimitCount, v22, 0LL),
        !v23)
    || !this )
  {
LABEL_62:
    sub_B7769C(this, result);
  }
  v25 = *(_QWORD *)&v23->fields.CHARA_BASE_POSITION.fields.y;
  if ( (_DWORD)v25 != LODWORD(this->fields.CHARA_BASE_POSITION.fields.y) )
    goto LABEL_47;
  if ( v25 && v23 != this && (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= (unsigned int)v25 )
      {
        v31 = sub_B776C8(this);
        sub_B77668(v31, 0LL);
      }
      if ( *((_DWORD *)&v23->fields.titleInfo + v26) != *((_DWORD *)&this->fields.titleInfo + v26) )
        break;
      if ( (int)++v26 >= (int)v25 )
        goto LABEL_48;
    }
LABEL_47:
    BYTE5(v3->fields.statusLoadAsset) = 1;
  }
LABEL_48:
  if ( BYTE5(v3->fields.statusLoadAsset) )
    goto LABEL_61;
  v27 = *(_QWORD *)&v3->fields.isModify;
  if ( !v27 )
    goto LABEL_62;
  this = *(ServantStatusDialog_o **)(v27 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v20, -1, 1, -1, 0LL);
  if ( !entity )
    goto LABEL_62;
  v28 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList(entity, v22, -1, 1, -1, 0LL);
  v29 = *(_QWORD *)&v3->fields.isModify;
  if ( !v29 )
    goto LABEL_62;
  v30 = this;
  this = *(ServantStatusDialog_o **)(v29 + 56);
  if ( !this )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v20, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo(entity, &v35, -1, v22, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                    (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    BYTE5(v3->fields.statusLoadAsset) = 1;
  if ( !tdInfo || !v35 )
    goto LABEL_62;
  if ( tdInfo->fields.id != v35->fields.id )
    BYTE5(v3->fields.statusLoadAsset) = 1;
LABEL_61:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleFBXComponent_o *v11; // x0
  struct System_Action_o *openCallbackFunc; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ServantStatusDialog_ResultDelegate_o *individualityCallbackFunc; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantStatusDialog_FormationEndDelegate_o *resultCallbackFunc; // x20
  ServantStatusDialog_EndDelegate_o *formationCallbackFunc; // x20

  if ( (byte_438968B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438968B = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v11 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v11 )
      sub_B7769C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v11, 0LL);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.openCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.individualityCallbackFunc = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.formationCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
    ServantStatusDialog_EndIndividualityDelegate__Invoke(
      (ServantStatusDialog_EndIndividualityDelegate_o *)openCallbackFunc,
      (bool)this->fields.statusLoadAsset,
      BYTE5(this->fields.statusLoadAsset),
      0LL);
  }
  else
  {
    individualityCallbackFunc = (ServantStatusDialog_ResultDelegate_o *)this->fields.individualityCallbackFunc;
    if ( individualityCallbackFunc )
    {
      this->fields.individualityCallbackFunc = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      this->fields.formationCallbackFunc = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
      ServantStatusDialog_ResultDelegate__Invoke(
        individualityCallbackFunc,
        (bool)this->fields.statusLoadAsset,
        BYTE5(this->fields.statusLoadAsset),
        this->fields.tabKind,
        0LL);
    }
    else
    {
      resultCallbackFunc = (ServantStatusDialog_FormationEndDelegate_o *)this->fields.resultCallbackFunc;
      if ( resultCallbackFunc )
      {
        this->fields.resultCallbackFunc = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.resultCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
        ServantStatusDialog_FormationEndDelegate__Invoke(
          resultCallbackFunc,
          (bool)this->fields.statusLoadAsset,
          this->fields.tabKind,
          0LL);
      }
      else
      {
        formationCallbackFunc = (ServantStatusDialog_EndDelegate_o *)this->fields.formationCallbackFunc;
        if ( formationCallbackFunc )
        {
          this->fields.formationCallbackFunc = 0LL;
          sub_B77560((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
          ServantStatusDialog_EndDelegate__Invoke(formationCallbackFunc, (bool)this->fields.statusLoadAsset, 0LL);
        }
      }
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t IsModifyLock; // x0
  ServantStatusListViewItem_o *v4; // x1
  _QWORD *v5; // x8
  UserServantEntity_o *v6; // x0
  bool *p_isModify; // x27
  int v8; // w9
  UserServantCollectionEntity_o *v9; // x0
  UserCommandCodeEntity_o *v10; // x0
  UserCommandCodeCollectionEntity_o *v11; // x0
  __int64 v12; // x8
  int64_t v13; // x20
  int statusLoadAsset_low; // w20
  int v15; // w20
  int v16; // w20
  int v17; // w20
  int v18; // w20
  int v19; // w20
  const MethodInfo *v20; // x2
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x8
  __int128 v24; // q1
  CommandCodeSetStatusRequest_o *v25; // x19
  __int64 v26; // x8
  __int64 v27; // x20
  __int64 v28; // x21
  int32_t v29; // w25
  int v30; // w24
  BalanceConfig_c *v31; // x0
  char v32; // w23
  int32_t ManualSetDispLimitCount; // w0
  int32_t v34; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x8
  char v36; // w28
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v38; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  char v40; // w20
  int32_t ManualSetIconLimitCount; // w0
  int32_t v42; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  ServantStatusListViewItem_o *v44; // x8
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v46; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userSvtEntity; // x8
  ServantStatusListViewItem_o *v48; // x8
  ServantStatusListViewItem_o *v49; // x8
  ServantStatusListViewItem_o *v50; // x8
  char v51; // w28
  __int64 v52; // x8
  __int128 v53; // q1
  __int64 v54; // x21
  char v55; // w20
  int v56; // w23
  bool v57; // w21
  char v58; // w24
  int32_t v59; // w21
  _BOOL4 IsModifyFavoriteUserSvtId; // w25
  NetworkManager_ResultCallbackFunc_o *v61; // x20
  __int64 v62; // x8
  __int128 v63; // q0
  CardFavoriteRequest_o *v64; // x19
  bool isPush; // [xsp+54h] [xbp-11Ch]
  int32_t limitCountSupport; // [xsp+58h] [xbp-118h]
  int32_t randomSettingSupport; // [xsp+5Ch] [xbp-114h]
  int32_t randomSettingOwn; // [xsp+60h] [xbp-110h]
  int32_t battleVoice; // [xsp+64h] [xbp-10Ch]
  int32_t commonFlag; // [xsp+68h] [xbp-108h]
  int32_t v71; // [xsp+6Ch] [xbp-104h]
  int32_t v72; // [xsp+70h] [xbp-100h]
  int32_t imageLimitCount; // [xsp+74h] [xbp-FCh]
  char v74; // [xsp+78h] [xbp-F8h]
  char v75; // [xsp+7Ch] [xbp-F4h]
  char v76; // [xsp+80h] [xbp-F0h]
  char v77; // [xsp+84h] [xbp-ECh]
  char v78; // [xsp+88h] [xbp-E8h]
  char v79; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4389689 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&OtherUserNewManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&ServantCommentManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B775C4(&UserCommandCodeNewManager_TypeInfo);
    sub_B775C4(&UserServantCollectionManager_TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4389689 = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  v5 = *(_QWORD **)&this->fields.isModify;
  if ( !v5 )
    goto LABEL_144;
  v6 = (UserServantEntity_o *)v5[7];
  p_isModify = &this->fields.isModify;
  if ( v6 )
  {
    v8 = *(_DWORD *)&this->fields.isInitTab;
    if ( v8 != 6 && v8 != 15 )
    {
      UserServantEntity__SetOld(v6, 0LL);
      v5 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v9 = (UserServantCollectionEntity_o *)v5[10];
  if ( v9 )
  {
    UserServantCollectionEntity__SetOld(v9, 0LL);
    v5 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v10 = (UserCommandCodeEntity_o *)v5[13];
  if ( v10 )
  {
    if ( *(_DWORD *)&this->fields.isInitTab != 24 )
    {
      UserCommandCodeEntity__SetOld(v10, 0LL);
      v5 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v11 = (UserCommandCodeCollectionEntity_o *)v5[14];
  if ( v11 )
  {
    UserCommandCodeCollectionEntity__SetOld(v11, 0LL);
    v5 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v12 = v5[11];
  if ( v12 && *(_DWORD *)&this->fields.isInitTab == 4 )
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    OtherUserNewManager__SetOld(v13, 0LL);
  }
  statusLoadAsset_low = LOBYTE(this->fields.statusLoadAsset);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  v15 = (statusLoadAsset_low != 0) | UserServantNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v15 & 1;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  v16 = v15 | UserServantCollectionManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v16 & 1;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  v17 = v16 | ServantCommentManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v17 & 1;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  v18 = v17 | OtherUserNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v18 & 1;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  v19 = v18 | UserCommandCodeNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v19 & 1;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v4 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  LOBYTE(this->fields.statusLoadAsset) = (v19 | IsModifyLock) & 1;
  if ( !v4 )
    goto LABEL_144;
  if ( !v4->fields.userSvtEntity )
  {
    if ( v4->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v4, 0LL);
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(
                                            *(ServantStatusListViewItem_o **)p_isModify,
                                            0LL)) & 1) != 0 )
      {
        LOBYTE(this->fields.statusLoadAsset) = 1;
        v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                  v22,
                                  (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *(_QWORD *)p_isModify )
        {
          v23 = *(_QWORD *)(*(_QWORD *)p_isModify + 104LL);
          if ( v23 )
          {
            v24 = *(_OWORD *)(v23 + 32);
            v25 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v23 + 16);
            *(_OWORD *)&v83.fields.fakeValue = v24;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v80 = v83;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v80, 0LL);
            if ( *(_QWORD *)p_isModify )
            {
              if ( v25 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v25,
                  IsModifyLock,
                  *(_BYTE *)(*(_QWORD *)p_isModify + 325LL),
                  *(_BYTE *)(*(_QWORD *)p_isModify + 326LL),
                  0LL);
                return;
              }
            }
          }
        }
        goto LABEL_144;
      }
    }
    goto LABEL_142;
  }
  if ( v4->fields.isConvertOverwriteImage )
    goto LABEL_42;
  IsModifyLock = (int64_t)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsModifyLock )
    goto LABEL_144;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v4,
                            v20);
  if ( !IsModifyLock )
  {
    v4 = *(ServantStatusListViewItem_o **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
LABEL_42:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v4, 0LL);
    goto LABEL_60;
  }
  ManualSetCardLimitCount = *(_DWORD *)(IsModifyLock + 120);
LABEL_60:
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsChangeImageLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( (IsModifyLock & 1) == 0 )
    goto LABEL_147;
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_ManualSetCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( ManualSetCardLimitCount != (_DWORD)IsModifyLock )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v30 = 1;
    v29 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v31->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_147:
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v26 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
    if ( !v26 )
      goto LABEL_144;
    v28 = *(_QWORD *)(v26 + 112);
    v27 = *(_QWORD *)(v26 + 120);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v84.fields.currentCryptoKey = v28;
    *(_QWORD *)&v84.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v84, 0LL);
    v30 = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v32 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v34 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v35 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v35 )
      goto LABEL_144;
    v34 = BasicHelper__DecryptValue_22415800(v35[8], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v36 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
    v38 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v39 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v39 )
      goto LABEL_144;
    v38 = BasicHelper__DecryptValue_22415800(v39[9], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v40 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v42 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v43 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v43 )
      goto LABEL_144;
    v42 = BasicHelper__DecryptValue_22415800(v43[10], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  v44 = *(ServantStatusListViewItem_o **)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v77 = IsModifyLock;
  v78 = v40;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(v44, 0LL);
    v46 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
  }
  else
  {
    userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v44->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_144;
    v46 = BasicHelper__DecryptValue_22415800(userSvtEntity[11], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v48 = *(ServantStatusListViewItem_o **)p_isModify;
  v76 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  commonFlag = v48->fields.svtCommonFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v48, 0LL);
  v49 = *(ServantStatusListViewItem_o **)p_isModify;
  v75 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  battleVoice = v49->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v49, 0LL);
  v50 = *(ServantStatusListViewItem_o **)p_isModify;
  v74 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v79 = v36;
  randomSettingOwn = v50->fields.ownRandomSettingButtonIndex;
  IsModifyLock = ServantStatusListViewItem__get_SupportRandomSettingParam(v50, 0LL);
  randomSettingSupport = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(
                   *(ServantStatusListViewItem_o **)p_isModify,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v51 = IsModifyLock;
  limitCountSupport = *(_DWORD *)(*(_QWORD *)p_isModify + 332LL);
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_144;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v71 = v46;
  v72 = v42;
  v52 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
  if ( !v52 )
    goto LABEL_144;
  v53 = *(_OWORD *)(v52 + 32);
  v54 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v52 + 16);
  *(_OWORD *)&v83.fields.fakeValue = v53;
  v55 = v32;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v56 = v30;
  v82 = v83;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v82, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v57 = v54 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*(ServantStatusListViewItem_o **)p_isModify, 0LL);
  v58 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    if ( BYTE1(this->fields.newProfileList) )
    {
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      v57 = *(_QWORD *)(*(_QWORD *)p_isModify + 168LL) != 0LL;
    }
    else
    {
      v57 = 0;
    }
  }
  imageLimitCount = v29;
  isPush = v57;
  if ( LOBYTE(this->fields.newProfileList) )
  {
    IsModifyLock = *(_QWORD *)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v59 = v38;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0LL);
  }
  else
  {
    v59 = v38;
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0LL),
        !*(_QWORD *)p_isModify) )
  {
LABEL_144:
    sub_B7769C(IsModifyLock, v4);
  }
  if ( v56 | v55 & 1 | v79 & 1 | v78 & 1 | v77 & 1 | v76 & 1 | v75 & 1 | v74 & 1 | v51 & 1 | v58 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*(ServantStatusListViewItem_o **)p_isModify, 0LL)) & 1 )
  {
    LOBYTE(this->fields.statusLoadAsset) = 1;
    v61 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v61,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                              v61,
                              (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *(_QWORD *)p_isModify )
    {
      v62 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
      if ( v62 )
      {
        v63 = *(_OWORD *)(v62 + 32);
        v64 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)(v62 + 16);
        *(_OWORD *)&v83.fields.fakeValue = v63;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v81 = v83;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v81, 0LL);
        if ( *(_QWORD *)p_isModify )
        {
          if ( v64 )
          {
            CardFavoriteRequest__beginRequest(
              v64,
              IsModifyLock,
              imageLimitCount,
              v34,
              v59,
              v72,
              v71,
              IsModifyFavoriteUserSvtId,
              *(_BYTE *)(*(_QWORD *)p_isModify + 325LL),
              *(_BYTE *)(*(_QWORD *)p_isModify + 326LL),
              commonFlag,
              battleVoice,
              randomSettingOwn,
              randomSettingSupport,
              limitCountSupport,
              isPush,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_144;
  }
LABEL_142:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v4);
}


int32_t __fastcall ServantStatusDialog__GetBattleTransformNamePosition(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 markBase; // x0
  struct UnityEngine_GameObject_o *v4; // x8
  struct UnityEngine_GameObject_o *v6; // x8
  System_String_o *klass; // x20
  struct UnityEngine_GameObject_o *v8; // x8
  __int64 v9; // x0

  if ( (byte_438967A & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    byte_438967A = 1;
  }
  markBase = (__int64)this->fields.markBase;
  if ( !markBase )
    goto LABEL_16;
  markBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)markBase, 0LL);
  if ( !markBase )
    goto LABEL_16;
  markBase = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)markBase, 0LL);
  if ( (markBase & 1) == 0 )
    return 196;
  v4 = this->fields.markBase;
  if ( !v4 )
    goto LABEL_16;
  markBase = System_String__IsNullOrEmpty((System_String_o *)v4[17].klass, 0LL);
  if ( (markBase & 1) != 0 )
    return 196;
  v6 = this->fields.markBase;
  if ( !v6 )
    goto LABEL_16;
  klass = (System_String_o *)v6[17].klass;
  markBase = sub_B775DC(char___TypeInfo, 1LL);
  if ( !markBase )
    goto LABEL_16;
  method = (const MethodInfo *)markBase;
  if ( !*(_DWORD *)(markBase + 24) )
  {
    v9 = sub_B776C8(markBase);
    sub_B77668(v9, 0LL);
  }
  *(_WORD *)(markBase + 32) = 10;
  if ( !klass
    || (markBase = (__int64)System_String__Split(klass, (System_Char_array *)markBase, 0LL)) == 0
    || (v8 = this->fields.markBase) == 0LL )
  {
LABEL_16:
    sub_B7769C(markBase, method);
  }
  return 188 - LODWORD(v8[17].monitor) * *(_DWORD *)(markBase + 24);
}


bool __fastcall ServantStatusDialog__GetEnableBattleVoiceFromKind(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w8

  v2 = *(_DWORD *)&this->fields.isInitTab;
  return v2 != 29 && v2 != 34 && v2 != 2 && v2 != 33;
}


bool __fastcall ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = *(_DWORD *)&this->fields.isInitTab;
  return v2 != 29 && v2 != 34 && v2 != 2 && v2 != 33;
}


int32_t __fastcall ServantStatusDialog__GetTabKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return (int32_t)this->fields.tabInitList;
}


System_String_o *__fastcall ServantStatusDialog__GetVoiceAssetName(
        ServantStatusDialog_o *this,
        int32_t assetType,
        int32_t svtId,
        int32_t limitCount,
        int32_t seqId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v13; // x19
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438966E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9771/*"NoblePhantasm_"*/);
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    sub_B775C4(&StringLiteral_12980/*"Servants_"*/);
    byte_438966E = 1;
  }
  v15 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_3FDA740[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0LL);
    return System_String__Concat_44901936(*v13, v14, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pushSprite; // x20
  __int64 v4; // x1
  ServantStatusDialog_c *v5; // x0
  UnityEngine_GameObject_o *statusTabBase; // x0
  struct UISprite_o *v7; // x8
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v10; // x20
  unsigned __int128 v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4389655 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog__Init_b__130_0__);
    sub_B775C4(&ServantStatusDialog_TypeInfo);
    byte_4389655 = 1;
  }
  v11 = 0uLL;
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v5 = ServantStatusDialog_TypeInfo;
    if ( (BYTE3(ServantStatusDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v5 = ServantStatusDialog_TypeInfo;
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  v5->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                                  (UnityEngine_Color_o *)&v11,
                                                  0LL);
    v7 = this->fields.pushSprite;
    if ( !v7 )
LABEL_21:
      sub_B7769C(statusTabBase, v4);
    *(_OWORD *)&v7->fields.bottomAnchor = v11;
  }
  BYTE4(this->fields.tabInitList) = 0;
  LOWORD(this->fields.statusLoadAsset) = 256;
  *(_DWORD *)((char *)&this->fields.statusLoadAsset + 2) = 0;
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(statusTabBase, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab == 33 )
  {
    *((_BYTE *)&this->fields.currentMaskType + 4) = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v8);
  }
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.noticeNumber;
  if ( !statusTabBase )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
  statusTabBase = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)statusTabBase & 1, 0LL);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__130_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v10, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0
  UnityEngine_Object_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4389662 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389662 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v5 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
  callbackFunc = (UnityEngine_Object_o *)this->fields.callbackFunc;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    klass = (UnityEngine_Object_o *)p_callbackFunc->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(klass, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v9; // x20
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  System_Action_o *v22; // x21

  if ( (byte_438967D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_B775C4(&Method_ServantStatusDialog__InitList_b__173_0__);
    byte_438967D = 1;
  }
  v9 = *(System_Action_o **)&this->fields.questId;
  if ( v9 )
  {
    *(_QWORD *)&this->fields.questId = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.questId, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
  BYTE1(this->fields.statusLoadAsset) = 0;
  BYTE4(this->fields.statusLoadAsset) = 0;
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v11 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_10;
  servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel = (struct UILabel_o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel,
    (System_Int32_array **)v11,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ServantStatusCharaGraphListViewManager__SetMode_22032064(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    2,
    v20);
  if ( *((_BYTE *)&this->fields.currentMaskType + 4) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__173_0__, 0LL);
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        v22,
        0LL);
      return;
    }
LABEL_10:
    sub_B7769C(v12, v13);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantLimitAddMaster_o *Master_WarQuestSelectionMaster; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 v7; // x8
  ServantCostumeMaster_o *v8; // x21
  signed int v9; // w25
  unsigned int v10; // w9
  int32_t v11; // w22
  BalanceConfig_c *v12; // x0
  ServantCostumeEntity_o *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitAddEntity_o *v18; // x23
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x23
  __int64 v22; // x24
  __int64 v23; // x8
  __int64 v25; // x0
  ServantCostumeEntity_o *v26; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_43896AB & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantCostumeEntity_TypeInfo);
    sub_B775C4(&ServantLimitAddEntity_TypeInfo);
    byte_43896AB = 1;
  }
  v26 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  v6 = *(_QWORD *)&this->fields.isModify;
  if ( !v6 )
LABEL_39:
    sub_B7769C(RandomGroupIndex, v5);
  v7 = *(_QWORD *)(v6 + 336);
  if ( v7 )
  {
    v8 = RandomGroupIndex;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v7 + 24);
      if ( v9 > (int)v10 )
        break;
      if ( v9 )
      {
        if ( v9 - 1 >= v10 )
        {
          v25 = sub_B776C8(RandomGroupIndex);
          sub_B77668(v25, 0LL);
        }
        v11 = *(_DWORD *)(v7 + 4LL * (v9 - 1) + 32);
      }
      else
      {
        v11 = 0;
      }
      v12 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( v11 <= v12->static_fields->ServantLimitMax )
      {
        v18 = (ServantLimitAddEntity_o *)sub_B77694(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v18, 0LL);
        entity = v18;
        v19 = *(_QWORD *)&this->fields.isModify;
        if ( !v19 )
          goto LABEL_39;
        v20 = *(_QWORD *)(v19 + 56);
        if ( !v20 )
          goto LABEL_39;
        v22 = *(_QWORD *)(v20 + 80);
        v21 = *(_QWORD *)(v20 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v29.fields.currentCryptoKey = v22;
        *(_QWORD *)&v29.fields.fakeValue = v21;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                       v29,
                                                       0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       Master_WarQuestSelectionMaster,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          RandomGroupIndex = (ServantCostumeMaster_o *)entity;
          if ( !entity )
            goto LABEL_39;
          RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddEntity__GetRandomGroupIndex(entity, 0LL);
          if ( (_DWORD)RandomGroupIndex )
            return 1;
        }
      }
      else
      {
        v13 = (ServantCostumeEntity_o *)sub_B77694(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v13, 0LL);
        v26 = v13;
        v14 = *(_QWORD *)&this->fields.isModify;
        if ( !v14 )
          goto LABEL_39;
        v15 = *(_QWORD *)(v14 + 56);
        if ( !v15 )
          goto LABEL_39;
        v17 = *(_QWORD *)(v15 + 80);
        v16 = *(_QWORD *)(v15 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v17;
        *(_QWORD *)&v28.fields.fakeValue = v16;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                       v28,
                                                       0LL);
        if ( !v8 )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v8,
                                                       &v26,
                                                       (int32_t)RandomGroupIndex,
                                                       v11,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_39;
          if ( v26->fields.groupIndex )
            return 1;
        }
      }
      v23 = *(_QWORD *)&this->fields.isModify;
      if ( v23 )
      {
        v7 = *(_QWORD *)(v23 + 336);
        ++v9;
        if ( v7 )
          continue;
      }
      goto LABEL_39;
    }
  }
  return 0;
}


void __fastcall ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438968F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData___ctor__);
    sub_B775C4(&System_Action_AssetData__TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog__LoadTransformedResource_b__195_0__);
    byte_438968F = 1;
  }
  v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AssetData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__195_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AssetData___ctor__);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v3, v4);
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4389687 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389687 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantStatusDialog__Exit(this, v3);
  }
}


void __fastcall ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  __int64 v3; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x8

  v2 = this;
  if ( (byte_438968E & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_438968E = 1;
  }
  if ( !BYTE2(v2->fields.statusLoadAsset) && !BYTE1(v2->fields.statusLoadAsset) )
  {
    v3 = *(_QWORD *)&v2->fields.isModify;
    if ( v3 )
    {
      if ( !*(_BYTE *)(v3 + 523) )
        return;
      v4 = Method_ServantStatusDialog_OnClickChangeTransform__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeTransform__ + 75) & 2) != 0 )
        v4 = (_QWORD *)sub_B775CC(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_B775A8(v4, v4[3]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
      v6 = *(_QWORD *)&v2->fields.isModify;
      if ( v6 )
      {
        *(_BYTE *)(v6 + 522) ^= 1u;
        ServantStatusDialog__LoadTransformedResource(v2, method);
        return;
      }
    }
    sub_B7769C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickChangeVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_43896AC & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_43896AC = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 320) != type )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v8);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_B7769C(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_43896AF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896AF = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B7769C(0LL, method);
    if ( v3->fields.userGameEntity && (v3->fields.userSvtEntity || v3->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(v3, 0LL);
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__SetMark(this, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  v4 = this;
  if ( (byte_438969D & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438969D = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 208);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 24) <= (unsigned int)costumeIndex )
        {
          v11 = sub_B776C8(this);
          sub_B77668(v11, 0LL);
        }
        v7 = *(_DWORD *)(v6 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v5 + 256) != v7 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v7, v10);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v9, 0LL);
          return;
        }
      }
    }
    sub_B7769C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_438969C & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438969C = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 256) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v8);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_B7769C(this, *(_QWORD *)&dispLv);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  UserServantCollectionEntity_o *v6; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v8; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22
  System_Action_o *v11; // x23
  ServantLeaderInfo_o *v12; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v14; // x20
  int v15; // w24
  WebViewManager_o *v16; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  System_Action_o *v18; // x23
  int32_t v19; // w1
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v21; // x21
  bool v22; // w3
  CommonUI_o *v23; // x0
  CommandCodeEntity_o *v24; // x2

  v4 = this;
  if ( (byte_43896A4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_B775C4(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_43896A4 = 1;
  }
  v5 = *(_QWORD *)&v4->fields.isModify;
  if ( !v5 )
    goto LABEL_30;
  v6 = *(UserServantCollectionEntity_o **)(v5 + 80);
  if ( v6 )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(v6, index, 0LL);
    if ( UserCommandCodeEntity )
    {
      v8 = UserCommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v10,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_18071552(Instance, 20, v8, v10, v11, 0LL);
        return;
      }
LABEL_30:
      sub_B7769C(this, *(_QWORD *)&index);
    }
    goto LABEL_19;
  }
  v12 = *(ServantLeaderInfo_o **)(v5 + 88);
  if ( v12 )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(v12, index, 0LL);
    if ( CommandCodeEntity )
    {
      v14 = CommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v15 = *(_DWORD *)&v4->fields.isInitTab;
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v15 == 4 )
      {
        v17 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v17,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v16 )
          goto LABEL_30;
        v19 = 22;
      }
      else
      {
        v17 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v17,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v16 )
          goto LABEL_30;
        if ( v15 != 5 )
        {
          v19 = 25;
          v23 = (CommonUI_o *)v16;
          v24 = v14;
          v22 = 0;
          goto LABEL_29;
        }
        v19 = 23;
      }
      v22 = 1;
      v23 = (CommonUI_o *)v16;
      v24 = v14;
LABEL_29:
      CommonUI__OpenServantEquipStatusDialog_18072364(v23, v19, v24, v22, v17, v18, 0LL);
      return;
    }
  }
LABEL_19:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
  v21 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_30;
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  v4 = this;
  if ( (byte_43896A0 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_43896A0 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 208);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 24) <= (unsigned int)costumeIndex )
        {
          v11 = sub_B776C8(this);
          sub_B77668(v11, 0LL);
        }
        v7 = *(_DWORD *)(v6 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v5 + 280) != v7 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v7, v10);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v9, 0LL);
          return;
        }
      }
    }
    sub_B7769C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_438969F & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438969F = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 280) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v8);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_B7769C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  _QWORD *v3; // x8
  __int64 v4; // x9
  __int128 v5; // q1
  int64_t v6; // x20
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  ServantEntity_o *v11; // x23
  ServantStatusDialog_o *v12; // x20
  int32_t v13; // w21
  int32_t v14; // w25
  __int64 v15; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  int32_t v17; // w21
  int32_t v18; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v20; // x20
  __int64 v21; // x21
  int32_t Rarity; // w24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x24
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x23
  __int64 v44; // x8
  int32_t v45; // w0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x23
  __int64 v53; // x8
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x23
  __int64 v61; // x8
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x22
  System_String_o *v69; // x20
  System_String_o *v70; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v72; // x22
  System_String_o *v73; // x23
  System_String_o *v74; // x24
  CommonConfirmDialog_ClickDelegate_o *v75; // x25
  __int64 v76; // x20
  __int64 v77; // x8
  __int128 v78; // q0
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v2 = this;
  if ( (byte_43896B0 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12220/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12218/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12217/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12221/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_B775C4(&StringLiteral_12219/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_43896B0 = 1;
  }
  if ( !BYTE2(v2->fields.statusLoadAsset) && !BYTE1(v2->fields.statusLoadAsset) )
  {
    v3 = *(_QWORD **)&v2->fields.isModify;
    if ( !v3 )
      goto LABEL_93;
    if ( !v3[2] )
      return;
    v4 = v3[7];
    if ( !v4 )
      return;
    v5 = *(_OWORD *)(v4 + 32);
    v6 = v3[20];
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v4 + 16);
    *(_OWORD *)&v84.fields.fakeValue = v5;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v83 = v84;
    if ( v6 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v83, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      return;
    }
    if ( v6 <= 0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v76 = *(_QWORD *)&v2->fields.isModify;
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 56);
        if ( v77 )
        {
          v78 = *(_OWORD *)(v77 + 32);
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v77 + 16);
          *(_OWORD *)&v84.fields.fakeValue = v78;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v82 = v84;
          *(_QWORD *)(v76 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v82, 0LL);
          ServantStatusDialog__SetMark(v2, v79);
          return;
        }
      }
      goto LABEL_93;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_93;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v6,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_93;
    v8 = this;
    v10 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v10;
    *(_QWORD *)&v85.fields.fakeValue = v9;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v85, 0LL);
    if ( !v8 )
      goto LABEL_93;
    v11 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v8,
                               (int32_t)this,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v11 )
      goto LABEL_93;
    v12 = this;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v11->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v12 )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v12,
                                      v13,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v2->fields.isModify )
      goto LABEL_93;
    v14 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                                      0LL);
    v15 = *(_QWORD *)&v2->fields.isModify;
    if ( !v15 )
      goto LABEL_93;
    v16 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v15 + 56);
    if ( !v16 )
      goto LABEL_93;
    v17 = (int)this;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v12,
                                   v17,
                                   v18,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v21 = sub_B775DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v21 )
      goto LABEL_93;
    v29 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v21 + 24) )
        goto LABEL_94;
      *(_QWORD *)(v21 + 32) = v29;
      sub_B77560((BattleServantConfConponent_o *)(v21 + 32), v29, v23, v24, v25, v26, v27, v28);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v11, 0LL);
      v36 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_94;
        *(_QWORD *)(v21 + 40) = v36;
        sub_B77560((BattleServantConfConponent_o *)(v21 + 40), v36, v30, v31, v32, v33, v34, v35);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v11, v14, -1, 0LL);
        v43 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v21 + 24) <= 2u )
            goto LABEL_94;
          *(_QWORD *)(v21 + 48) = v43;
          sub_B77560((BattleServantConfConponent_o *)(v21 + 48), v43, v37, v38, v39, v40, v41, v42);
          v44 = *(_QWORD *)&v2->fields.isModify;
          if ( !v44 )
            goto LABEL_93;
          this = *(ServantStatusDialog_o **)(v44 + 56);
          if ( !this )
            goto LABEL_93;
          v45 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v45, 0LL);
          v52 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v21 + 24) <= 3u )
              goto LABEL_94;
            *(_QWORD *)(v21 + 56) = v52;
            sub_B77560((BattleServantConfConponent_o *)(v21 + 56), v52, v46, v47, v48, v49, v50, v51);
            v53 = *(_QWORD *)&v2->fields.isModify;
            if ( !v53 )
              goto LABEL_93;
            this = *(ServantStatusDialog_o **)(v53 + 128);
            if ( !this )
              goto LABEL_93;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v60 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v21 + 24) <= 4u )
                goto LABEL_94;
              *(_QWORD *)(v21 + 64) = v60;
              sub_B77560((BattleServantConfConponent_o *)(v21 + 64), v60, v54, v55, v56, v57, v58, v59);
              v61 = *(_QWORD *)&v2->fields.isModify;
              if ( !v61 )
                goto LABEL_93;
              this = *(ServantStatusDialog_o **)(v61 + 128);
              if ( !this )
                goto LABEL_93;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v68 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v21 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v21 + 24) > 5u )
                {
                  *(_QWORD *)(v21 + 72) = v68;
                  sub_B77560((BattleServantConfConponent_o *)(v21 + 72), v68, v62, v63, v64, v65, v66, v67);
                  this = (ServantStatusDialog_o *)System_String__Format_44980660(v20, (System_Object_array *)v21, 0LL);
                  if ( !*(_QWORD *)&v2->fields.isModify )
                    goto LABEL_93;
                  v69 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(
                         *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                         0LL) )
                  {
                    this = *(ServantStatusDialog_o **)&v2->fields.isModify;
                    if ( !this )
                      goto LABEL_93;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0LL) )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12219/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v69 = System_String__Concat_44901936(v69, v70, 0LL);
                    }
                  }
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12218/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12217/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v75,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_18055364(
                      Instance,
                      v72,
                      v69,
                      v73,
                      v74,
                      v75,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_93:
                  sub_B7769C(this, method);
                }
LABEL_94:
                v80 = sub_B776C8(this);
                sub_B77668(v80, 0LL);
              }
            }
          }
        }
      }
    }
    v81 = sub_B776BC();
    sub_B77668(v81, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_43896AE & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896AE = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B7769C(0LL, method);
    if ( v3->fields.userGameEntity && (v3->fields.userSvtEntity || v3->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(v3, 0LL);
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      ServantStatusDialog__SetMark(this, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x9
  int32_t v7; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  v4 = this;
  if ( (byte_43896A3 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_43896A3 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 208);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 24) <= (unsigned int)costumeIndex )
        {
          v11 = sub_B776C8(this);
          sub_B77668(v11, 0LL);
        }
        v7 = *(_DWORD *)(v6 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v5 + 296) != v7 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v7, v10);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v9, 0LL);
          return;
        }
      }
    }
    sub_B7769C(this, *(_QWORD *)&costumeIndex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_43896A2 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_43896A2 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 296) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v8);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v7, 0LL);
        return;
      }
    }
    sub_B7769C(this, *(_QWORD *)&dispLv);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x9
  __int128 v6; // q1
  int64_t v7; // x20
  __int64 v8; // x8
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  ServantEntity_o *v13; // x23
  ServantStatusDialog_o *v14; // x20
  int32_t v15; // w21
  int32_t v16; // w25
  __int64 v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v22; // x20
  __int64 v23; // x21
  int32_t Rarity; // w24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x23
  __int64 v46; // x8
  int32_t v47; // w0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x23
  __int64 v55; // x8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x23
  __int64 v63; // x8
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_o *v71; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v73; // x22
  System_String_o *v74; // x23
  System_String_o *v75; // x24
  CommonConfirmDialog_ClickDelegate_o *v76; // x25
  __int64 v77; // x20
  __int64 v78; // x8
  __int128 v79; // q0
  __int64 v80; // x0
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  v2 = this;
  if ( (byte_43896B2 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_43896B2 = 1;
  }
  if ( !BYTE2(v2->fields.statusLoadAsset) && !BYTE1(v2->fields.statusLoadAsset) )
  {
    v3 = *(_QWORD *)&v2->fields.isModify;
    if ( !v3 )
      goto LABEL_86;
    if ( !*(_QWORD *)(v3 + 16) || !*(_QWORD *)(v3 + 56) )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v4 = *(_QWORD *)&v2->fields.isModify;
    if ( !v4 )
      goto LABEL_86;
    v5 = *(_QWORD *)(v4 + 56);
    if ( !v5 )
      goto LABEL_86;
    v6 = *(_OWORD *)(v5 + 32);
    v7 = *(_QWORD *)(v4 + 168);
    *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v5 + 16);
    *(_OWORD *)&v84.fields.fakeValue = v6;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v83 = v84;
    if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v83, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v8 = *(_QWORD *)&v2->fields.isModify;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 168) = 0LL;
LABEL_85:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_86;
    }
    if ( v7 <= 0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v77 = *(_QWORD *)&v2->fields.isModify;
      if ( v77 )
      {
        v78 = *(_QWORD *)(v77 + 56);
        if ( v78 )
        {
          v79 = *(_OWORD *)(v78 + 32);
          *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)(v78 + 16);
          *(_OWORD *)&v84.fields.fakeValue = v79;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v82 = v84;
          *(_QWORD *)(v77 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v82, 0LL);
          goto LABEL_85;
        }
      }
LABEL_86:
      sub_B7769C(this, method);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_86;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v7,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_86;
    v10 = this;
    v12 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v12;
    *(_QWORD *)&v85.fields.fakeValue = v11;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v85, 0LL);
    if ( !v10 )
      goto LABEL_86;
    v13 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v10,
                               (int32_t)this,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v13 )
      goto LABEL_86;
    v14 = this;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v13->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v14 )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v14,
                                      v15,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v2->fields.isModify )
      goto LABEL_86;
    v16 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                                      0LL);
    v17 = *(_QWORD *)&v2->fields.isModify;
    if ( !v17 )
      goto LABEL_86;
    v18 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v17 + 56);
    if ( !v18 )
      goto LABEL_86;
    v19 = (int)this;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v18[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v14,
                                   v19,
                                   v20,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v23 = sub_B775DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v23 )
      goto LABEL_86;
    v31 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v23 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v23 + 32) = v31;
      sub_B77560((BattleServantConfConponent_o *)(v23 + 32), v31, v25, v26, v27, v28, v29, v30);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v13, 0LL);
      v38 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v23 + 24) <= 1u )
          goto LABEL_87;
        *(_QWORD *)(v23 + 40) = v38;
        sub_B77560((BattleServantConfConponent_o *)(v23 + 40), v38, v32, v33, v34, v35, v36, v37);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v13, v16, -1, 0LL);
        v45 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v23 + 24) <= 2u )
            goto LABEL_87;
          *(_QWORD *)(v23 + 48) = v45;
          sub_B77560((BattleServantConfConponent_o *)(v23 + 48), v45, v39, v40, v41, v42, v43, v44);
          v46 = *(_QWORD *)&v2->fields.isModify;
          if ( !v46 )
            goto LABEL_86;
          this = *(ServantStatusDialog_o **)(v46 + 56);
          if ( !this )
            goto LABEL_86;
          v47 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v47, 0LL);
          v54 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v23 + 24) <= 3u )
              goto LABEL_87;
            *(_QWORD *)(v23 + 56) = v54;
            sub_B77560((BattleServantConfConponent_o *)(v23 + 56), v54, v48, v49, v50, v51, v52, v53);
            v55 = *(_QWORD *)&v2->fields.isModify;
            if ( !v55 )
              goto LABEL_86;
            this = *(ServantStatusDialog_o **)(v55 + 128);
            if ( !this )
              goto LABEL_86;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v62 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v23 + 24) <= 4u )
                goto LABEL_87;
              *(_QWORD *)(v23 + 64) = v62;
              sub_B77560((BattleServantConfConponent_o *)(v23 + 64), v62, v56, v57, v58, v59, v60, v61);
              v63 = *(_QWORD *)&v2->fields.isModify;
              if ( !v63 )
                goto LABEL_86;
              this = *(ServantStatusDialog_o **)(v63 + 128);
              if ( !this )
                goto LABEL_86;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v70 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B77684(this, *(_QWORD *)(*(_QWORD *)v23 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v23 + 24) > 5u )
                {
                  *(_QWORD *)(v23 + 72) = v70;
                  sub_B77560((BattleServantConfConponent_o *)(v23 + 72), v70, v64, v65, v66, v67, v68, v69);
                  v71 = System_String__Format_44980660(v22, (System_Object_array *)v23, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v76,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_18055364(
                      Instance,
                      v73,
                      v71,
                      v74,
                      v75,
                      v76,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_86;
                }
LABEL_87:
                v80 = sub_B776C8(this);
                sub_B77668(v80, 0LL);
              }
            }
          }
        }
      }
    }
    v81 = sub_B776BC();
    sub_B77668(v81, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_43896A9 & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_43896A9 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B775CC(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, (unsigned int)index < 3, RandomLimitCountOwn, index, v7);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_43896A7 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_43896A7 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__RandomLimitCountSupportResource(this, index, v5);
  }
}


void __fastcall ServantStatusDialog__OnClickServantQuest(
        ServantStatusDialog_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  void *Mine; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x21
  int32_t QuestType; // w22
  QuestEntity_o *v10; // x23
  System_String_o *v11; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool v16; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v18; // x21
  CommonUI_o *Instance; // x21
  System_String_o *v20; // x0
  __int64 *v21; // x8
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25

  if ( (byte_43896A5 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_12263/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12265/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12266/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_12259/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12262/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_12264/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_12260/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12261/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_43896A5 = 1;
  }
  if ( !this->fields.individualityCallbackFunc && !this->fields.resultCallbackFunc )
    goto LABEL_51;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Mine )
    goto LABEL_48;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Mine, questId, 0LL);
  if ( !QuestInfo )
  {
LABEL_51:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v18, 0LL);
      return;
    }
    goto LABEL_48;
  }
  v8 = QuestInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v8, 0LL);
  Mine = MapControl_QuestInfo__GetMine(v8, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v10 = (QuestEntity_o *)Mine;
  this->fields.tabKind = *((_DWORD *)Mine + 4);
  Mine = QuestEntity__getQuestName((QuestEntity_o *)Mine, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v11 = (System_String_o *)Mine;
  if ( System_String__Contains((System_String_o *)Mine, (System_String_o *)StringLiteral_24025/*"{0}"*/, 0LL) )
  {
    Mine = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Mine,
                                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    Mine = (void *)QuestEntity__getServantId(v10, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Mine = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int32_t)Mine,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Mine )
      goto LABEL_48;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Mine, 0, -1, 0LL);
    v11 = System_String__Format(v11, BattleName, 0LL);
  }
  if ( QuestType == 3 )
  {
    warId = v8->fields.warId;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Mine )
    {
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Mine, warId, 0LL);
      if ( WarEntityByWarID )
        v16 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
      else
        v16 = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v16 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
        v21 = &StringLiteral_12261/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v21 = &StringLiteral_12263/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
      }
      goto LABEL_46;
    }
LABEL_48:
    sub_B7769C(Mine, v6);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12266/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
  v21 = &StringLiteral_12265/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_46:
  v22 = v20;
  v23 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  v24 = System_String__Format(v23, (Il2CppObject *)v11, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12260/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__OpenConfirmDialog_18055364(Instance, v22, v24, v25, v26, v27, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4389694 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389694 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 2, v3);
  }
}


void __fastcall ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4389693 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389693 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 1, v3);
  }
}


void __fastcall ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4389692 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389692 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 0, v3);
  }
}


void __fastcall ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4389695 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389695 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantStatusDialog__SetTabKind(this, 3, v3);
  }
}


void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ServantStatusListViewItem_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v18; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  __int64 v21; // x21
  __int64 v22; // x21
  CommonUI_o *v23; // x22
  System_String_o *Empty; // x21
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25

  if ( (byte_43896A6 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass218_0__OnClickTdSpeed_b__0__);
    sub_B775C4(&ServantStatusDialog___c__DisplayClass218_0_TypeInfo);
    sub_B775C4(&StringLiteral_12268/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_B775C4(&StringLiteral_12269/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_12270/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_43896A6 = 1;
  }
  v5 = sub_B77694(ServantStatusDialog___c__DisplayClass218_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass218_0___ctor((ServantStatusDialog___c__DisplayClass218_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = type;
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v6 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v6 )
      goto LABEL_27;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v6, 0LL) == *(_DWORD *)(v5 + 24) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v15, 0LL);
        return;
      }
LABEL_27:
      sub_B7769C(v6, v7);
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v6 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v6 )
      goto LABEL_27;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v6, 0LL);
    if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    }
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v18 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v20 = System_String__Format_44897472(v19, TDSpeedLocalization, v18, 0LL);
    v21 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v22 = **(_QWORD **)(v21 + 192);
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_B0F2C4(v22);
    v23 = **(CommonUI_o ***)(v22 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12268/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass218_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v23 )
      goto LABEL_27;
    CommonUI__OpenConfirmDecideDlg(v23, Empty, v20, v25, v26, v27, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_43896B1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43896B1 = 1;
  }
  if ( isDecide )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( !v5 || (v6 = *(_QWORD *)(v5 + 56)) == 0 )
LABEL_12:
      sub_B7769C(this, isDecide);
    v7 = *(_OWORD *)(v6 + 32);
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v11 = v12;
    *(_QWORD *)(v5 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v11, 0LL);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18056328(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_43896B3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43896B3 = 1;
  }
  if ( isDecide )
  {
    v5 = *(_QWORD *)&v4->fields.isModify;
    if ( !v5 || (v6 = *(_QWORD *)(v5 + 56)) == 0 )
LABEL_12:
      sub_B7769C(this, isDecide);
    v7 = *(_OWORD *)(v6 + 32);
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)(v6 + 16);
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v11 = v12;
    *(_QWORD *)(v5 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v11, 0LL);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18056328(Instance, v10, 0LL);
}


void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  QuestTree_o *v5; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v11; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  CommonUI_o *v15; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_43896AD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_ServantStatusDialog__OnConfirmServantQuest_b__225_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43896AD = 1;
  }
  if ( !isDecide )
  {
    this->fields.tabKind = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_18056328(Instance, v11, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v13, 0LL);
        return;
      }
    }
    goto LABEL_31;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v5 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v5 )
    goto LABEL_31;
  QuestInfo = QuestTree__GetQuestInfo(v5, this->fields.tabKind, 0LL);
  v8 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v5 = (QuestTree_o *)v8->fields._WarInfo_k__BackingField;
      if ( !v5 )
        goto LABEL_31;
      LODWORD(v8) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v5, 0LL);
    }
    else
    {
      LODWORD(v8) = 0;
    }
  }
  v5 = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_31;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438746C )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v15 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__225_0__, 0LL);
  if ( !v15 )
LABEL_31:
    sub_B7769C(v5, v6);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4389688 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389688 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v5 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_43896B6 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2835/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_43896B6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_2835/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(transform, v4);
  }
}


void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  const MethodInfo *v18; // x2

  if ( (byte_4389696 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389696 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !voiceTabListViewManager
      || (voiceTabListViewManager->fields.transformNameLabel = (struct UILabel_o *)v6,
          sub_B77560(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.transformNameLabel,
            (System_Int32_array **)v6,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14),
          ServantStatusBattleListViewManager__SetMode_22018280(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v15,
            v16),
          (v17 = *(_QWORD *)&this->fields.isModify) == 0) )
    {
      sub_B7769C(v7, v8);
    }
    if ( *(_DWORD *)(v17 + 240) != result )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v18);
    }
  }
}


void __fastcall ServantStatusDialog__OnSelectCharaGraph(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4389683 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389683 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B7769C(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog(Instance, v8, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4389681 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389681 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B7769C(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog(Instance, v8, 0LL);
}


void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4389685 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_4389685 = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !battleTabListViewManager )
    sub_B7769C(v6, v7);
  ServantStatusFlavorTextListViewManager__SetMode(
    (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
    1,
    v5,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v5; // w21
  ServantStatusDialog_o *v6; // x19
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x8
  _QWORD *v10; // x8
  __int64 v11; // x8
  int64_t v12; // x21
  CommonUI_o *v13; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  System_Action_o *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x8
  __int128 v18; // q1
  int v19; // w24
  __int64 v20; // x8
  __int64 v21; // x8
  EquipTargetInfo_o *v22; // x21
  CommonUI_o *v23; // x20
  ServantStatusDialog_EndDelegate_o *v24; // x22
  System_Action_o *v25; // x23
  int32_t v26; // w1
  ServantStatusListViewManager_o *v27; // x20
  ServantStatusListViewManager_CallbackFunc_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 *v35; // x8
  struct UISprite_o *v36; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v38; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-60h]

  v5 = result;
  v6 = this;
  if ( (byte_4389680 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_B775C4(&Method_ServantStatusDialog_Exit__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12958/*"ServantLvExceed"*/);
    sub_B775C4(&StringLiteral_12962/*"ServantSkillCombine"*/);
    sub_B775C4(&StringLiteral_12959/*"ServantNpCombine"*/);
    sub_B775C4(&StringLiteral_4293/*"CommandCardEquip"*/);
    sub_B775C4(&StringLiteral_12946/*"ServantEQCombine"*/);
    sub_B775C4(&StringLiteral_12943/*"ServantCombine"*/);
    sub_B775C4(&StringLiteral_6959/*"FriendshipExceed"*/);
    sub_B775C4(&StringLiteral_12956/*"ServantLimitCountUp"*/);
    sub_B775C4(&StringLiteral_2071/*"AppendSkillCombine"*/);
    this = (ServantStatusDialog_o *)sub_B775C4(&StringLiteral_4294/*"CommandCardExceed"*/);
    byte_4389680 = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) )
  {
    if ( BYTE1(v6->fields.statusLoadAsset) )
    {
      profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v8, 0LL);
        return;
      }
LABEL_116:
      sub_B7769C(this, *(_QWORD *)&result);
    }
    if ( v5 == 1 )
    {
      v9 = *(_QWORD *)&v6->fields.isModify;
      if ( !v9 )
        goto LABEL_116;
      if ( *(_BYTE *)(v9 + 121) )
        v5 = 1;
      else
        v5 = 2;
    }
    switch ( v5 )
    {
      case 1:
      case 2:
        v10 = *(_QWORD **)&v6->fields.isModify;
        if ( !v10 )
          goto LABEL_116;
        if ( v10[7] && (__int64)v10[45] >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v11 = *(_QWORD *)&v6->fields.isModify;
          if ( !v11 )
            goto LABEL_116;
          v12 = *(_QWORD *)(v11 + 360);
          v13 = (CommonUI_o *)this;
          v14 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v14,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v13 )
            goto LABEL_116;
          CommonUI__OpenServantEquipStatusDialog(v13, 11, v12, 1, v14, v15, 0LL);
        }
        else
        {
          v16 = v10[11];
          if ( !v16 )
            goto LABEL_36;
          v17 = *(_QWORD *)(v16 + 144);
          if ( !v17 )
            goto LABEL_36;
          v18 = *(_OWORD *)(v17 + 40);
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v17 + 24);
          *(_OWORD *)&v44.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v43 = v44;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v19 = *(_DWORD *)&v6->fields.isInitTab;
            if ( v19 == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v20 = *(_QWORD *)&v6->fields.isModify;
              if ( !v20 )
                goto LABEL_116;
              v21 = *(_QWORD *)(v20 + 88);
              if ( !v21 )
                goto LABEL_116;
              v22 = *(EquipTargetInfo_o **)(v21 + 144);
              v23 = (CommonUI_o *)this;
              v24 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v24,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(v25, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v23 )
                goto LABEL_116;
              v26 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v41 = *(_QWORD *)&v6->fields.isModify;
              if ( !v41 )
                goto LABEL_116;
              v42 = *(_QWORD *)(v41 + 88);
              if ( !v42 )
                goto LABEL_116;
              v22 = *(EquipTargetInfo_o **)(v42 + 144);
              v23 = (CommonUI_o *)this;
              v24 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v24,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(v25, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v23 )
                goto LABEL_116;
              if ( v19 == 5 )
                v26 = 14;
              else
                v26 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_18071300(v23, v26, v22, v24, v25, 0LL);
          }
          else
          {
LABEL_36:
            v27 = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
            v28 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v28,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v27 )
              goto LABEL_116;
            ServantStatusListViewManager__SetMode(v27, 1, v28, 0LL);
          }
        }
        break;
      case 3:
        if ( id > 2 )
          ServantStatusDialog__OnClickCommandCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickCommandCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 4:
        if ( id > 3 )
          ServantStatusDialog__OnClickFaceCharaCostume(v6, id - 4, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickFaceCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 5:
        if ( id > 2 )
          ServantStatusDialog__OnClickPortraitCharaCostume(v6, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickPortraitCharaLevel(v6, id, *(const MethodInfo **)&id);
        return;
      case 6:
        ServantStatusDialog__OnClickCommandCodeShow(v6, id, *(const MethodInfo **)&id);
        return;
      case 7:
        ServantStatusDialog__OnClickServantQuest(v6, id, *(const MethodInfo **)&id);
        return;
      case 8:
        ServantStatusDialog__OnClickTdSpeed(v6, id, *(const MethodInfo **)&id);
        return;
      case 9:
        ServantStatusDialog__OnClickChangeVoice(v6, id, *(const MethodInfo **)&id);
        return;
      case 10:
        ServantStatusDialog__OnClickRandomLimitCountSupport(v6, id, *(const MethodInfo **)&id);
        return;
      case 11:
        ServantStatusDialog__OnClickRandomLimitCountSetting(v6, id, *(const MethodInfo **)&id);
        return;
      case 12:
        ServantStatusDialog__OnclickRandomLimitCountMask(v6, id, *(const MethodInfo **)&id);
        return;
      case 13:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12943/*"ServantCombine"*/;
        goto LABEL_101;
      case 14:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12946/*"ServantEQCombine"*/;
        goto LABEL_101;
      case 15:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12962/*"ServantSkillCombine"*/;
        goto LABEL_101;
      case 16:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12956/*"ServantLimitCountUp"*/;
        goto LABEL_101;
      case 17:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_6959/*"FriendshipExceed"*/;
        goto LABEL_101;
      case 18:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_4293/*"CommandCardEquip"*/;
        goto LABEL_101;
      case 19:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_4294/*"CommandCardExceed"*/;
        goto LABEL_101;
      case 20:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_2071/*"AppendSkillCombine"*/;
        goto LABEL_101;
      case 21:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12959/*"ServantNpCombine"*/;
        goto LABEL_101;
      case 22:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v35 = &StringLiteral_12958/*"ServantLvExceed"*/;
LABEL_101:
        v36 = (struct UISprite_o *)*v35;
        this->fields.profileSprite = (struct UISprite_o *)*v35;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.profileSprite,
          (System_Int32_array **)v36,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v38 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v38 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
        v40 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v40, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_116;
        CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v40, 0LL);
        return;
      default:
        goto LABEL_36;
    }
  }
}


void __fastcall ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v8; // x23
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ServantVoiceMaster_o *v13; // x23
  ServantStatusVoiceListViewItem_o *v14; // x25
  int32_t v15; // w22
  int32_t v16; // w21
  System_String_o *v17; // x24
  System_String_o *LabelName; // x0
  System_String_o *v19; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v21; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v23; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v25; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4389686 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    byte_4389686 = 1;
  }
  VoicePrefix = 0;
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !servantNameRangeLabel )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v8, 0LL);
    if ( !BYTE1(this->fields.statusLoadAsset) )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v11);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v13 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.servantNameRangeLabel;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v14 = (ServantStatusVoiceListViewItem_o *)Instance;
        v15 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_58;
        v16 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        MasterData_WarQuestSelectionMaster,
                        v15,
                        (int32_t)Instance,
                        0LL);
        v17 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v14, 0LL);
        v19 = System_String__Concat_44904220(v17, (System_String_o *)StringLiteral_16197/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList(v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v14, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v14->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0LL);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_30287648(
                                      v13,
                                      v15,
                                      v16,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_B7769C(Instance, v10);
                }
                if ( !v13 )
                  goto LABEL_58;
                if ( !v14->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(v13, v15, v16, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(v13, v15, v16, v19, 0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0LL);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v13, v15, (int32_t)Instance, 0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_22089444(this, v15, v16, HomeVoiceList, result, v21);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(v13, v15, v16, v19, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v14->fields.genderFlag && !v14->fields.voiceLabelSpecification )
              {
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(v13, v15, v16, 2, 1, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v13 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList(v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList(v13, v15, v16, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList(v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v13 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList(v13, v15, v16, v19, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v15, v16, BattleVoiceList, result, v23);
            return;
          case 7:
            if ( !v13 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList(v13, v15, v16, v19, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v15, v16, NpVoiceList, result, v25);
            return;
          case 8:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          case 9:
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList(v13, v15, v16, v19, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0LL);
            if ( !v13 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_30285188(v13, (int32_t)Instance, v15, v16, v19, 0LL);
            goto LABEL_52;
        }
      }
    }
  }
}


void __fastcall ServantStatusDialog__OnclickRandomLimitCountBattleMask(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__OnclickRandomLimitCountMask(this, 3, v2);
}


void __fastcall ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x22
  __int64 v16; // x23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x22
  __int64 v20; // x22
  CommonUI_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x0
  __int64 *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x22
  __int64 v28; // x23
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x22
  __int64 v32; // x22
  CommonConfirmDialog_ClickDelegate_o *v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_438968C & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_B775C4(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__192_0__);
    sub_B775C4(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__192_1__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B775C4(&StringLiteral_12237/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_B775C4(&StringLiteral_12238/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_B775C4(&StringLiteral_12235/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_12234/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_438968C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  LODWORD(this[1].klass) = maskType;
  switch ( maskType )
  {
    case 3:
      v25 = *(_QWORD *)&this->fields.isModify;
      if ( !v25 )
        return;
      v26 = *(_QWORD *)(v25 + 56);
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 96);
        v27 = *(_QWORD *)(v26 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v28;
        *(_QWORD *)&v35.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v35, 0LL) )
          goto LABEL_9;
        v25 = *(_QWORD *)&this->fields.isModify;
        if ( !v25 )
          return;
      }
      if ( !*(_BYTE *)(v25 + 329) )
        return;
      v29 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
        v29 = (_QWORD *)sub_B775CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v30 = (System_Reflection_MethodBase_o *)sub_B775A8(v29, v29[3]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
      v31 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
        sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v32 = **(_QWORD **)(v31 + 192);
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        sub_B0F2C4(v32);
      v21 = **(CommonUI_o ***)(v32 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12237/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v24 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__192_0__;
      goto LABEL_49;
    case 2:
      v13 = *(_QWORD *)&this->fields.isModify;
      if ( !v13 )
        return;
      v14 = *(_QWORD *)(v13 + 56);
      if ( !v14 )
      {
LABEL_20:
        if ( !*(_BYTE *)(v13 + 330) )
          return;
        v17 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
          v17 = (_QWORD *)sub_B775CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v18 = (System_Reflection_MethodBase_o *)sub_B775A8(v17, v17[3]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
        v19 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
        v20 = **(_QWORD **)(v19 + 192);
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_B0F2C4(v20);
        v21 = **(CommonUI_o ***)(v20 + 184);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0LL);
        v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v24 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__192_1__;
LABEL_49:
        v33 = v23;
        CommonConfirmDialog_ClickDelegate___ctor(v23, (Il2CppObject *)this, *v24, 0LL);
        if ( !v21 )
          goto LABEL_52;
        CommonUI__OpenConfirmDialog_18056028(
          v21,
          (System_String_o *)StringLiteral_1/*""*/,
          v22,
          v5,
          v6,
          v33,
          22,
          22,
          15.0,
          750,
          2,
          470,
          -162.5,
          0,
          0,
          240,
          1,
          0LL);
        return;
      }
      v16 = *(_QWORD *)(v14 + 96);
      v15 = *(_QWORD *)(v14 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v34.fields.currentCryptoKey = v16;
      *(_QWORD *)&v34.fields.fakeValue = v15;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v34, 0LL) )
      {
        v13 = *(_QWORD *)&this->fields.isModify;
        if ( !v13 )
          return;
        goto LABEL_20;
      }
LABEL_9:
      v7 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 75) & 2) != 0 )
        v7 = (_QWORD *)sub_B775CC(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v8 = (System_Reflection_MethodBase_o *)sub_B775A8(v7, v7[3]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v10, 0LL);
        return;
      }
LABEL_52:
      sub_B7769C(v11, v12);
    case 1:
      goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_438963B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438963B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


void __fastcall ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_438965A & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_13758/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_438965A = 1;
  }
  if ( !LOBYTE(this->fields.newProfileList) )
    goto LABEL_8;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29515752(106, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13758/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
    if ( !Instance )
      sub_B7769C(v6, v7);
    CommonUI__OpenTutorialNotificationDialog(Instance, v6, 106, callback, 0LL);
  }
  else
  {
LABEL_8:
    ActionExtensions__Call(callback, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22056700(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantStatusListViewItem_o *v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_438963C & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438963C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22056912(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_438963D & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438963D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36469772(v20, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22057112(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v15; // x5

  if ( (byte_438963E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438963E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7769C(Instance, v12);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)*v13);
  ServantStatusDialog__Open_22057404(this, kind, Entity, callback, openCallback, v15);
}


void __fastcall ServantStatusDialog__Open_22057404(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w21
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4389642 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389642 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = 0;
  if ( v19 != 29 && v19 != 34 )
    v21 = v19 != 2 && v19 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(v22, userSvtEntity, 0LL, 0LL, 0, v20, v21, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22057700(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v15; // x5

  if ( (byte_438963F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438963F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7769C(Instance, v12);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)*v13);
  ServantStatusDialog__Open_22057992(this, kind, Entity, callback, openCallback, v15);
}


void __fastcall ServantStatusDialog__Open_22057992(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w22
  bool v21; // w23
  ServantStatusListViewItem_o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4389643 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389643 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = 0;
  if ( v19 != 29 && v19 != 34 )
    v21 = v19 != 2 && v19 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(v22, userSvtEntity, 0LL, 0LL, callback != 0LL, v20, v21, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22058292(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_4389640 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389640 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7769C(Instance, v12);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)*v13);
  ServantStatusDialog__Open_22058588(this, kind, Entity, callback, openCallback, 0, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22058588(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w22
  bool v22; // w23
  ServantStatusListViewItem_o *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4389644 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389644 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = 0;
  if ( v20 != 29 && v20 != 34 )
    v22 = v20 != 2 && v20 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(v23, userSvtEntity, 0LL, 0LL, 0, v21, v22, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantStatusDialog__Init(this, v30);
}


void __fastcall ServantStatusDialog__Open_22058896(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_4389641 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389641 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B7769C(Instance, v12);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)*v13);
  ServantStatusDialog__Open_22059192(this, kind, Entity, callback, openCallback, 0, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22059192(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w23
  bool v22; // w24
  ServantStatusListViewItem_o *v23; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4389645 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389645 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = 0;
  if ( v20 != 29 && v20 != 34 )
    v22 = v20 != 2 && v20 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(
    v23,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v21,
    v22,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantStatusDialog__Init(this, v30);
}


void __fastcall ServantStatusDialog__Open_22059608(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v15; // x7

  if ( (byte_4389646 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389646 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v13);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22059816(this, kind, Entity, equipIdList, 0LL, callback, 0LL, v15);
}


void __fastcall ServantStatusDialog__Open_22059816(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // w8
  bool v22; // w23
  bool v23; // w24
  ServantStatusListViewItem_o *v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4389647 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389647 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = 0;
  if ( v21 != 29 && v21 != 34 )
    v23 = v21 != 2 && v21 != 33;
  v24 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(v24, userSvtEntity, equipIdList, questRestrictionInfo, 0, v22, v23, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22060128(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w8
  bool v24; // w24
  bool v25; // w25
  ServantStatusListViewItem_o *v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_4389648 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389648 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v24,
    v25,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusDialog__Init(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22060452(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w8
  bool v24; // w25
  bool v25; // w26
  ServantStatusListViewItem_o *v26; // x27
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_4389649 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389649 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36471448(
    v26,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v24,
    v25,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusDialog__Init(this, v33);
}


void __fastcall ServantStatusDialog__Open_22060780(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v16; // x6

  if ( (byte_438964A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438964A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v14);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22060996(this, kind, Entity, isUse, callback, openCallback, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22060996(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_438964B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438964B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36473980(v20, userSvtEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22061192(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w21
  ServantStatusListViewItem_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_438964C & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438964C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36475856(v21, userSvtCollectionEntity, 0, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22061424(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w8
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_438964D & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438964D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    *(System_String_array ***)&imageLimitCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(_DWORD *)&this->fields.isInitTab;
  v21 = 0;
  if ( v20 != 29 && v20 != 34 )
    v21 = v20 != 2 && v20 != 33;
  v22 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36477540(v22, userSvtCollectionEntity, imageLimitCount, 0, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantStatusDialog__Init(this, v29);
}


void __fastcall ServantStatusDialog__Open_22061672(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w8
  bool v20; // w22
  ServantStatusListViewItem_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_438964E & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438964E = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = *(_DWORD *)&this->fields.isInitTab;
  v20 = 0;
  if ( v19 != 29 && v19 != 34 )
    v20 = v19 != 2 && v19 != 33;
  v21 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36475856(v21, userSvtCollectionEntity, callback != 0LL, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantStatusDialog__Init(this, v28);
}


void __fastcall ServantStatusDialog__Open_22061908(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_438964F & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_438964F = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)servantLeaderInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36478980(v19, servantLeaderInfo, kind != 7, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22062096(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4389650 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389650 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)equipTargetInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36480692(v19, equipTargetInfo, kind == 19, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22062284(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4389651 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389651 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)commandCodeEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36481520(v20, commandCodeEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantStatusDialog__Init(this, v27);
}


void __fastcall ServantStatusDialog__Open_22062480(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4389652 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389652 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36481916(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22062660(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4389653 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389653 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36481916(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


void __fastcall ServantStatusDialog__Open_22062840(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4389654 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItem_TypeInfo);
    byte_4389654 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B77694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36483052(v19, userCommandCodeCollectionEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgTxtSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v8; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  unsigned int localScale; // s0
  float v11; // s8
  int32_t v12; // w23
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  const MethodInfo *v15; // x1
  int32_t v16; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v25; // x22
  float32x2_t v26; // d8
  float v27; // s9
  unsigned __int64 v28; // d0 OVERLAPPED
  float v29; // s2
  int v30; // s1
  UnityEngine_Transform_o *v31; // x25
  int v32; // s0
  __int64 v35; // x8
  __int64 v36; // x8
  int32_t v37; // w25
  System_Collections_Generic_Dictionary_int__float__o *v38; // x26
  UnityEngine_Transform_o *v39; // x27
  float Item; // s8
  float v41; // s9
  float v42; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x24
  UnityEngine_Object_o *v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v54; // x21
  System_String_o *assetPath; // [xsp+10h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389669 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2879/*"Battle2D"*/);
    sub_B775C4(&StringLiteral_16520/*"_y0"*/);
    byte_4389669 = 1;
  }
  assetPath = 0LL;
  entity = 0LL;
  if ( !LOBYTE(this->fields.battleActor) )
  {
    bgTxtSprite = (UnityEngine_Object_o *)this->fields.bgTxtSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(bgTxtSprite, 0LL, 0LL) )
    {
      transform = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      LOBYTE(this->fields.battleActor) = 1;
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_79;
      v8 = transform;
      while ( 1 )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v8,
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v8, 0LL);
        v8 = transform;
        if ( !transform )
          goto LABEL_79;
      }
      if ( !Component_WebViewObject )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Component_WebViewObject,
                                               0LL);
      if ( !transform )
        goto LABEL_79;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      if ( !transform )
        goto LABEL_79;
      v11 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_79;
      v57.fields.x = 1.0 / v11;
      v57.fields.y = 1.0 / v11;
      v57.fields.z = 1.0 / v11;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v57, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.isModify;
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__GetSvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               1,
                                               0LL);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_79;
      v12 = (int)transform;
      ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                              *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                              0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                          ConvertOverwriteDispImageLimitCount,
                                          0LL);
      ServantStatusDialog__DestroyBattleChr(this, v15);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v12,
                                               LimitCountByImageLimitCostumeIn,
                                               0LL);
      if ( !this->fields.bgTxtSprite )
        goto LABEL_79;
      v16 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.bgTxtSprite, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v18 = ServantAssetLoadManager__loadBattleActor(&assetPath, gameObject, v12, v16, 0, 0LL);
      this->fields.callbackFunc = (struct ServantStatusDialog_EndDelegate_o *)v18;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( !v18 )
        goto LABEL_79;
      v25 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              v18,
              (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !v25 )
        goto LABEL_79;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v25, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_79;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v12,
                                               v16,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_79;
        v26.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v27 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v26.n64_u64[0] = 0LL;
        v27 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_79;
      v28 = vadd_f32(v26, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.y).n64_u64[0];
      v29 = v27 + *(float *)&this->fields.titleInfo;
      v30 = HIDWORD(v28);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v28,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_79;
      v58.fields.y = 270.0;
      v58.fields.x = 0.0;
      v58.fields.z = 0.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v58, 0LL);
      v31 = UnityEngine_GameObject__get_transform(v18, 0LL);
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
      if ( !v31 )
        goto LABEL_79;
      UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
      v35 = *(_QWORD *)&this->fields.isModify;
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 128);
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 156);
          v38 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B77694(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v38,
            (const MethodInfo_2FF7210 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v38 )
            goto LABEL_79;
          System_Collections_Generic_Dictionary_int__float___Add(
            v38,
            5,
            0.75,
            (const MethodInfo_2FF7DBC *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v38,
            8,
            0.75,
            (const MethodInfo_2FF7DBC *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v38,
            9,
            0.75,
            (const MethodInfo_2FF7DBC *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v38,
                 v37,
                 (const MethodInfo_2FF802C *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v39 = UnityEngine_GameObject__get_transform(v18, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v38,
                     v37,
                     (const MethodInfo_2FF7CFC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v41 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v38,
                    v37,
                    (const MethodInfo_2FF7CFC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v42 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v38,
                    v37,
                    (const MethodInfo_2FF7CFC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v39 )
              goto LABEL_79;
            v59.fields.z = v42;
            v59.fields.x = Item;
            v59.fields.y = v41;
            UnityEngine_Transform__set_localScale(v39, v59, 0LL);
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v25, v12, v16, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v25, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v25,
          5000.0,
          (System_String_o *)StringLiteral_16520/*"_y0"*/,
          0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v12, v16, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v25, Manager__loadAnimEvents, v12, v16, 0LL);
      BattleFBXComponent__SetWrapMode(
        (BattleFBXComponent_o *)v25,
        *(System_String_o **)&this->fields.confirmDispLv,
        2,
        0LL);
      BattleFBXComponent__playAnimation(
        (BattleFBXComponent_o *)v25,
        *(System_String_o **)&this->fields.confirmDispLv,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
      if ( !transform
        || (Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)transform,
                                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v25,
                                                      0LL)) == 0LL) )
      {
LABEL_79:
        sub_B7769C(transform, v6);
      }
      v45 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)transform,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_79;
        SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_79;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v45, 0LL);
        }
      }
      *(_QWORD *)&this->fields.isBattleResourceLoading = v25;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading,
        (System_Int32_array **)v25,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v52 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2879/*"Battle2D"*/, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer(v18, v52, 0LL);
      if ( !noupdate )
      {
        transform = (UnityEngine_Component_o *)this->fields.profileTabListViewManager;
        if ( !transform )
          goto LABEL_79;
        ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)transform, 3, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        if ( BYTE2(this->fields.statusLoadAsset) )
        {
          if ( profileTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_33001440(
              (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager,
              2,
              0LL);
            return;
          }
          goto LABEL_79;
        }
        v54 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v54,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !profileTabListViewManager )
          goto LABEL_79;
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v54, 0LL);
      }
    }
  }
}


bool __fastcall ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  const MethodInfo *v11; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4389675 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4389675 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v11);
}


bool __fastcall ServantStatusDialog__PlayChrVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  System_String_o *VoiceAssetName; // x0
  const MethodInfo *v10; // x4

  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  return ServantStatusDialog__PlayVoice(this, VoiceAssetName, voicePlayList, listIndex, v10);
}


bool __fastcall ServantStatusDialog__PlayChrVoice_22089444(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  const MethodInfo *v11; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4389677 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4389677 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v11);
}


bool __fastcall ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  const MethodInfo *v11; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4389676 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4389676 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v11);
}


bool __fastcall ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  struct SePlayer_o *voicePlayer; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  int v28; // w19
  int v29; // w20
  _BOOL4 v30; // w0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4389672 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4389672 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( voicePlayList && *(_QWORD *)&voicePlayList->max_length )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( !voicePlayer )
      sub_B7769C(0LL, assetName);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voicePlayer,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v33 = v32;
    do
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v10 )
      {
        v28 = 0;
        v29 = 1;
        goto LABEL_15;
      }
      if ( !assetName )
        sub_B7769C(v10, v11);
    }
    while ( !System_String__Equals_44889276(assetName, (System_String_o *)v33.fields.current, 0LL) );
    ServantStatusDialog__StopVoice(this, v12);
    if ( LODWORD(this->fields.tabInitList) == 3 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        sub_B7769C(0LL, v13);
      ServantStatusVoiceListViewManager__SetMode_30246704(servantNameRangeLabel, 2, listIndex, 0LL);
      LODWORD(this->fields.battleLoadAsset) = listIndex;
    }
    *(_QWORD *)&this->fields.voicePlayNum = voicePlayList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.voicePlayNum,
      (System_Int32_array **)voicePlayList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    *(_QWORD *)&this->fields.voiceListIndex = assetName;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.voiceListIndex,
      (System_Int32_array **)assetName,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    ServantStatusDialog__EndWaitVoice(this, v27);
    v28 = 1;
    v29 = 3;
LABEL_15:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    return v28 & ((unsigned int)(v29 + 1) >> 2);
  }
  else
  {
    LOBYTE(v30) = 0;
  }
  return v30;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int v4; // w8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0

  if ( (byte_438967E & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438967E = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    v4 = BYTE3(this->fields.statusLoadAsset);
    BYTE2(this->fields.statusLoadAsset) = 1;
    if ( v4 )
    {
      BYTE3(this->fields.statusLoadAsset) = 0;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      OptionManager__Recover(0LL);
    }
    servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( servantStatusBattleConfirmDialog )
    {
      ServantStatusCharaGraphListViewManager__SetMode_22032064(servantStatusBattleConfirmDialog, 1, v2);
      servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__SetMode_33001440(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          2,
          0LL);
        servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.battleTabListViewManager;
        if ( servantStatusBattleConfirmDialog )
        {
          ServantStatusFlavorTextListViewManager__SetMode_36457424(
            (ServantStatusFlavorTextListViewManager_o *)servantStatusBattleConfirmDialog,
            2,
            0LL);
          if ( !BYTE4(this->fields.statusLoadAsset) )
            return;
          servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( servantStatusBattleConfirmDialog )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)servantStatusBattleConfirmDialog, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B7769C(servantStatusBattleConfirmDialog, method);
  }
}


void __fastcall ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        bool isRandomOn,
        int32_t index,
        const MethodInfo *method)
{
  _BOOL4 v6; // w22
  __int64 v9; // x20
  ServantStatusListViewItem_o *IsContainRandomIndex; // x0
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  int v19; // w8
  char v20; // w21
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  int v25; // w22
  BalanceConfig_c *v26; // x8
  __int64 v27; // x8
  System_Int32_array *v28; // x22
  System_Func_int__bool__o *v29; // x23
  __int64 v30; // x19
  __int64 v31; // x19
  CommonUI_o *v32; // x19
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  System_String_o *v35; // x23
  CommonConfirmDialog_ClickDelegate_o *v36; // x0
  __int64 *v37; // x8
  __int64 v38; // x19
  __int64 v39; // x19
  CommonConfirmDialog_ClickDelegate_o *v40; // x24
  int v41; // w8
  const MethodInfo *v42; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v44; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v6 = isRandomOn;
  if ( (byte_43896AA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__0__);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__1__);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__2__);
    sub_B775C4(&ServantStatusDialog___c__DisplayClass222_0_TypeInfo);
    sub_B775C4(&StringLiteral_12248/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12246/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_B775C4(&StringLiteral_12235/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_12236/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12247/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_12234/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_43896AA = 1;
  }
  v9 = sub_B77694(ServantStatusDialog___c__DisplayClass222_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass222_0___ctor((ServantStatusDialog___c__DisplayClass222_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_57;
  *(_QWORD *)(v9 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = index;
  *(_BYTE *)(v9 + 36) = isOwnSetting;
  *(_BYTE *)(v9 + 37) = v6;
  IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !isOwnSetting )
  {
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    if ( ((IsContainRandomIndex->fields.isEnableSupportRandomSetting ^ v6) & 1) == 0 )
    {
      if ( IsContainRandomIndex->fields.supportRandomSettingButtonIndex != index )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, index, 0LL);
        IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
        if ( !IsContainRandomIndex )
          goto LABEL_57;
      }
      LOBYTE(v41) = *(_BYTE *)(v9 + 37);
      goto LABEL_53;
    }
LABEL_11:
    IsContainRandomIndex = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v11);
    v19 = *(unsigned __int8 *)(v9 + 37);
    v20 = (char)IsContainRandomIndex;
    *(_DWORD *)(v9 + 16) = 12;
    if ( v19 )
    {
      v21 = *(_QWORD *)&this->fields.isModify;
      if ( !v21 )
        goto LABEL_57;
      v22 = *(_QWORD *)(v21 + 56);
      if ( !v22 )
        goto LABEL_57;
      v24 = *(_QWORD *)(v22 + 80);
      v23 = *(_QWORD *)(v22 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v45.fields.currentCryptoKey = v24;
      *(_QWORD *)&v45.fields.fakeValue = v23;
      IsContainRandomIndex = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                              v45,
                                                              0LL);
      v25 = (int)IsContainRandomIndex;
      v26 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      if ( v25 == v26->static_fields->ServantIdMashu1 )
      {
        v27 = *(_QWORD *)&this->fields.isModify;
        if ( !v27 )
          goto LABEL_57;
        v28 = *(System_Int32_array **)(v27 + 336);
        if ( v28 )
        {
          v29 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v29,
            (Il2CppObject *)v9,
            Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__0__,
            (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
          if ( BasicHelper__Any_int__29777580(
                 v28,
                 (System_Func_T__bool__o *)v29,
                 (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304) )
          {
            v30 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
            if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
              sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
            v31 = **(_QWORD **)(v30 + 192);
            if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
              sub_B0F2C4(v31);
            v32 = **(CommonUI_o ***)(v31 + 184);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12247/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
            v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12246/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
            v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
            v37 = &Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__1__;
            goto LABEL_41;
          }
        }
      }
    }
    if ( *(_BYTE *)(v9 + 37) != 0 && (v20 & 1) != 0 )
    {
      v38 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
        sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v39 = **(_QWORD **)(v38 + 192);
      if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
        sub_B0F2C4(v39);
      v32 = **(CommonUI_o ***)(v39 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
      v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v37 = &Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__2__;
LABEL_41:
      v40 = v36;
      CommonConfirmDialog_ClickDelegate___ctor(v36, (Il2CppObject *)v9, *v37, 0LL);
      if ( v32 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v32,
          (System_String_o *)StringLiteral_1/*""*/,
          v33,
          v34,
          v35,
          v40,
          28,
          0.0,
          15.0,
          0,
          1,
          0,
          240,
          0,
          1,
          0,
          0LL);
        return;
      }
LABEL_57:
      sub_B7769C(IsContainRandomIndex, v11);
    }
    IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, *(_DWORD *)(v9 + 32), 0LL);
    IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !IsContainRandomIndex )
      goto LABEL_57;
    v41 = *(unsigned __int8 *)(v9 + 37);
    if ( *(_BYTE *)(v9 + 36) )
    {
      ServantStatusListViewItem__set_IsEnableOwnRandomSetting(IsContainRandomIndex, v41 != 0, 0LL);
      IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
      if ( !IsContainRandomIndex )
        goto LABEL_57;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
        *(ServantStatusListViewItem_o **)&this->fields.isModify,
        v42);
      goto LABEL_51;
    }
LABEL_53:
    IsContainRandomIndex->fields.isEnableSupportRandomSetting = v41;
    goto LABEL_54;
  }
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  if ( ((IsContainRandomIndex->fields.isEnableOwnRandomSetting ^ v6) & 1) != 0 )
    goto LABEL_11;
  if ( IsContainRandomIndex->fields.ownRandomSettingButtonIndex != index )
    ServantStatusListViewItem__SetRandomSettingByIndex(IsContainRandomIndex, index, 0LL);
LABEL_51:
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v18);
LABEL_54:
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !IsContainRandomIndex )
    goto LABEL_57;
  ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)IsContainRandomIndex, 10, 0LL);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v44 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_57;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v44, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v6; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_43896A8 & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_43896A8 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          index,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_33001440(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          9,
          0LL),
        v6 = this->fields.profileTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v6) )
  {
    sub_B7769C(profileTabListViewManager, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v6, 1, v7, 0LL);
}


void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleMaskBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4389667 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389667 = 1;
  }
  battleMaskBase = (UnityEngine_Object_o *)this->fields.battleMaskBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleMaskBase, 0LL, 0LL) )
  {
    v7 = this->fields.battleMaskBase;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 currentMaskType; // x10
  int32_t v9; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v13; // x20
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x22
  System_String_o *v22; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  const MethodInfo *v24; // x1
  __int64 v25; // x0

  if ( (byte_438966B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndLoadChangeBattleResource__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438966B = 1;
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  ServantStatusBattleListViewManager__ChangeSelectIndex(voiceTabListViewManager, this->fields.currentMaskType, method);
  v6 = *(_QWORD *)&this->fields.isModify;
  if ( !v6 )
    goto LABEL_33;
  v7 = *(_QWORD *)(v6 + 248);
  if ( !v7 )
    goto LABEL_33;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= *(_DWORD *)(v7 + 24) )
  {
    v25 = sub_B776C8(voiceTabListViewManager);
    sub_B77668(v25, 0LL);
  }
  *(_DWORD *)(v6 + 240) = *(_DWORD *)(v7 + 4 * currentMaskType + 32);
  voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  if ( isModifyInfo )
  {
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)voiceTabListViewManager, 0LL);
  }
  else if ( HIBYTE(voiceTabListViewManager[1].fields.topFocusOffset) )
  {
    ServantStatusListViewItem__SetTransformData((ServantStatusListViewItem_o *)voiceTabListViewManager, 0LL);
  }
  voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__GetSvtId(
                                                                      (ServantStatusListViewItem_o *)voiceTabListViewManager,
                                                                      1,
                                                                      0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_33;
  v9 = (int)voiceTabListViewManager;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                          0LL);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)voiceTabListViewManager,
                                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)voiceTabListViewManager,
                                 v9,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                      v9,
                                                                      ServantImageLimitSealAfter,
                                                                      0LL);
  if ( !voiceTabListViewManager )
    goto LABEL_33;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v13 = (System_Int32_array **)voiceTabListViewManager;
  if ( System_String__Equals_44889276(
         (System_String_o *)voiceTabListViewManager,
         *(System_String_o **)&this->fields.isBattlePlay,
         0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v14);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v21 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v21, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v13;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v13, v15, v16, v17, v18, v19, v20);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !voiceTabListViewManager )
LABEL_33:
    sub_B7769C(voiceTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)voiceTabListViewManager, 1, 0LL);
  v22 = *(System_String_o **)&this->fields.isBattlePlay;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v24);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  _QWORD *v3; // x8
  unsigned int v4; // w9
  UserServantEntity_o *v5; // x0
  __int64 v6; // x8
  System_String_o **v7; // x8
  __int64 v8; // x8
  System_String_o **v9; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  System_String_o **v13; // x8
  __int64 v14; // x8
  System_String_o **v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  UISprite_o *equipSprite; // x20
  __int128 v19; // q1
  ServantStatusDialog_o *v20; // x22
  System_String_o **v21; // x8
  UnityEngine_Object_o *pushSprite; // x20
  __int64 v23; // x8
  __int64 *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  __int128 v27; // q1
  ServantStatusDialog_o *charaGraphListViewManager; // x20
  ServantStatusDialog_o *v29; // x21
  bool v30; // zf
  __int64 v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-40h]

  v2 = this;
  if ( (byte_438967C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&StringLiteral_17473/*"button_lock_reg"*/);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17474/*"button_lock_unreg"*/);
    sub_B775C4(&StringLiteral_17468/*"button_choice_unreg"*/);
    sub_B775C4(&StringLiteral_19722/*"icon_equip"*/);
    sub_B775C4(&StringLiteral_17467/*"button_choice_reg"*/);
    sub_B775C4(&StringLiteral_19723/*"icon_equip_cc"*/);
    sub_B775C4(&StringLiteral_17469/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_B775C4(&StringLiteral_17470/*"button_favorite_unreg"*/);
    byte_438967C = 1;
  }
  v3 = *(_QWORD **)&v2->fields.isModify;
  if ( !v3 )
    goto LABEL_87;
  if ( !v3[2] || (v4 = *(_DWORD *)&v2->fields.isInitTab, v4 <= 0x24) && ((1LL << v4) & 0x19E0000000LL) != 0 )
  {
    this = (ServantStatusDialog_o *)v2->fields.lockSprite;
    if ( this )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_87;
  }
  v5 = (UserServantEntity_o *)v3[7];
  if ( v5 )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(v5, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v12 = *(_QWORD *)&v2->fields.isModify;
      if ( !v12 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_87;
      v13 = (System_String_o **)(*(_BYTE *)(v12 + 325) ? &StringLiteral_17473/*"button_lock_reg"*/ : &StringLiteral_17474/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v13, 0LL);
      v14 = *(_QWORD *)&v2->fields.isModify;
      if ( !v14 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_87;
      v15 = (System_String_o **)(*(_BYTE *)(v14 + 326) ? &StringLiteral_17467/*"button_choice_reg"*/ : &StringLiteral_17468/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v15, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.favoriteSprite;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)v2->fields.newProfileList, 0LL);
      v16 = *(_QWORD *)&v2->fields.isModify;
      if ( !v16 )
        goto LABEL_87;
      v17 = *(_QWORD *)(v16 + 56);
      if ( !v17 )
        goto LABEL_87;
      equipSprite = v2->fields.equipSprite;
      v19 = *(_OWORD *)(v17 + 32);
      v20 = *(ServantStatusDialog_o **)(v16 + 160);
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
      *(_OWORD *)&v34.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v33 = v34;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v33, 0LL);
      if ( !equipSprite )
        goto LABEL_87;
      v21 = (System_String_o **)&StringLiteral_17469/*"button_favorite_reg"*/;
      if ( v20 != this )
        v21 = (System_String_o **)&StringLiteral_17470/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(equipSprite, *v21, 0LL);
      pushSprite = (UnityEngine_Object_o *)v2->fields.pushSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
        this = (ServantStatusDialog_o *)v2->fields.pushSprite;
        if ( !this )
          goto LABEL_87;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, BYTE1(v2->fields.newProfileList), 0LL);
        v23 = *(_QWORD *)&v2->fields.isModify;
        if ( !v23 )
          goto LABEL_87;
        this = *(ServantStatusDialog_o **)(v23 + 56);
        if ( !this )
          goto LABEL_87;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL) || *(_DWORD *)&v2->fields.isInitTab == 3 )
        {
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_87;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
            this,
            3LL,
            1LL,
            this->klass[1]._1.interfaceOffsets);
          this = (ServantStatusDialog_o *)v2->fields.charaGraphListViewManager;
          if ( !this )
            goto LABEL_87;
          v24 = &StringLiteral_17478/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_87;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                            this,
                                            0LL,
                                            1LL,
                                            this->klass[1]._1.interfaceOffsets);
          v25 = *(_QWORD *)&v2->fields.isModify;
          if ( !v25 )
            goto LABEL_87;
          v26 = *(_QWORD *)(v25 + 56);
          if ( !v26 )
            goto LABEL_87;
          v27 = *(_OWORD *)(v26 + 32);
          charaGraphListViewManager = (ServantStatusDialog_o *)v2->fields.charaGraphListViewManager;
          v29 = *(ServantStatusDialog_o **)(v25 + 168);
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
          *(_OWORD *)&v34.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v32 = v34;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                            &v32,
                                            0LL);
          if ( !charaGraphListViewManager )
            goto LABEL_87;
          v24 = &StringLiteral_17477/*"button_push_reg"*/;
          v30 = v29 == this;
          this = charaGraphListViewManager;
          if ( !v30 )
            v24 = &StringLiteral_17478/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0LL);
      }
      this = (ServantStatusDialog_o *)v2->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v31 = *(_QWORD *)&v2->fields.isModify;
      if ( !v31 )
        goto LABEL_87;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v31 + 327), 0LL);
      this = (ServantStatusDialog_o *)v2->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19722/*"icon_equip"*/, 0LL);
      return;
    }
    v3 = *(_QWORD **)&v2->fields.isModify;
    if ( !v3 )
      goto LABEL_87;
  }
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_87;
  if ( !v3[13] )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6 = *(_QWORD *)&v2->fields.isModify;
  if ( !v6 )
    goto LABEL_87;
  this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
  if ( !this )
    goto LABEL_87;
  v7 = (System_String_o **)(*(_BYTE *)(v6 + 325) ? &StringLiteral_17473/*"button_lock_reg"*/ : &StringLiteral_17474/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v7, 0LL), (v8 = *(_QWORD *)&v2->fields.isModify) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL
    || (*(_BYTE *)(v8 + 326)
      ? (v9 = (System_String_o **)&StringLiteral_17467/*"button_choice_reg"*/)
      : (v9 = (System_String_o **)&StringLiteral_17468/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v9, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteSprite) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_87:
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10 = (UnityEngine_Object_o *)v2->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    this = (ServantStatusDialog_o *)v2->fields.pushSprite;
    if ( !this )
      goto LABEL_87;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  this = (ServantStatusDialog_o *)v2->fields.pushButton;
  if ( !this )
    goto LABEL_87;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = *(_QWORD *)&v2->fields.isModify;
  if ( !v11 )
    goto LABEL_87;
  if ( !this )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v11 + 327), 0LL);
  this = (ServantStatusDialog_o *)v2->fields.pushButton;
  if ( !this )
    goto LABEL_87;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19723/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t partyItem; // w20
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4389666 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389666 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo )
    partyItem = (int32_t)mainInfo->fields.partyItem;
  else
    partyItem = 0;
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0LL, 0LL) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7
      || (NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)v7, partyItem > 0, 0LL),
          (v7 = this->fields.inputLockPanel) == 0LL) )
    {
      sub_B7769C(v7, v6);
    }
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)v7, partyItem, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 profileTabBase; // x0
  int v6; // w23
  bool v7; // w1
  System_String_o **v8; // x8
  System_String_o **v9; // x8
  UICommonButton_o *v10; // x21
  bool v11; // w0
  __int64 *v12; // x8
  System_String_o **v13; // x8
  UICommonButton_o *battleButton; // x21
  bool v15; // w0
  char v16; // w2
  bool v17; // w1
  System_String_o **v18; // x8
  __int64 *v19; // x8
  UICommonButton_o *v20; // x21
  bool v21; // w0
  UnityEngine_Object_o *v22; // x21
  __int64 *v23; // x8
  System_String_o **v24; // x8
  System_String_o **v25; // x8
  UICommonButton_o *profileButton; // x21
  bool enabled; // w0
  System_String_o **v28; // x8
  System_String_o **v29; // x8
  UICommonButton_o *voiceButton; // x21
  bool v31; // w0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  System_String_o **v34; // x8
  System_String_o **v35; // x8
  UICommonButton_o *v36; // x21
  bool v37; // w0
  System_String_o **v38; // x8
  System_String_o **v39; // x8
  UICommonButton_o *v40; // x21
  bool v41; // w0
  System_String_o **v42; // x8
  __int64 *v43; // x8
  UICommonButton_o *v44; // x21
  bool v45; // w0
  _BOOL4 v46; // w21
  System_String_o **v47; // x8
  System_String_o **v48; // x8
  UICommonButton_o *profileNewIcon; // x21
  bool v50; // w0
  struct System_Int32_array *profileNewIdList; // x8
  char *v52; // x8
  _BYTE *v53; // x8
  int v54; // t1
  struct ServantStatusVoiceListViewManager_o **p_voiceTabListViewManager; // x22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v57; // x21
  struct ServantStatusFlavorTextListViewManager_o *v58; // x20
  ServantStatusListViewManager_CallbackFunc_o *v59; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v61; // x21
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x8
  const MethodInfo *v73; // x2
  __int64 v74; // x8
  __int64 v75; // x8
  __int64 v76; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v78; // x1
  int32_t BattleTransformNamePosition; // w0
  struct UICommonButton_o *changeTransformButton; // x20
  ServantStatusListViewItem_o *v81; // x20
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x21
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x22
  float BgmVolume; // s8
  BgmManager_c *v85; // x0
  BgmManager_c *v86; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v88; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v89; // x21
  __int64 v90; // x0
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4389679 & 1) == 0 )
  {
    sub_B775C4(&BgmManager_TypeInfo);
    sub_B775C4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_B775C4(&StringLiteral_17388/*"btn_txt_detail_off"*/);
    sub_B775C4(&StringLiteral_17372/*"btn_txt_battlecharacter_on"*/);
    sub_B775C4(&StringLiteral_17436/*"btn_txt_status_on"*/);
    sub_B775C4(&StringLiteral_17301/*"btn_bg_12"*/);
    sub_B775C4(&StringLiteral_17435/*"btn_txt_status_off"*/);
    sub_B775C4(&StringLiteral_17446/*"btn_txt_voice_on"*/);
    sub_B775C4(&StringLiteral_17416/*"btn_txt_profile_on"*/);
    sub_B775C4(&StringLiteral_17445/*"btn_txt_voice_off"*/);
    sub_B775C4(&StringLiteral_17303/*"btn_bg_19"*/);
    sub_B775C4(&StringLiteral_17389/*"btn_txt_detail_on"*/);
    sub_B775C4(&StringLiteral_17415/*"btn_txt_profile_off"*/);
    sub_B775C4(&StringLiteral_17371/*"btn_txt_battlecharacter_off"*/);
    byte_4389679 = 1;
  }
  illust = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  if ( kind == 2 )
  {
    if ( ServantStatusDialog__StartBattleLoad(this, *(const MethodInfo **)&kind) )
      return;
LABEL_13:
    if ( LODWORD(this->fields.tabInitList) == 3 )
      ServantStatusDialog__StopVoice(this, *(const MethodInfo **)&kind);
    LODWORD(this->fields.tabInitList) = kind;
    if ( kind == 2 )
    {
      profileTabBase = (__int64)this->fields.profileTabBase;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
        profileTabBase = (__int64)this->fields.battleTabBase;
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
          profileTabBase = (__int64)this->fields.voiceTabBase;
          if ( profileTabBase )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
            profileTabBase = (__int64)this->fields.statusTitleSprite;
            if ( profileTabBase )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
              v22 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
                goto LABEL_27;
              profileTabBase = *(_QWORD *)&this->fields.isBattleResourceLoading;
              if ( profileTabBase )
              {
                BattleFBXComponent__playAnimation(
                  (BattleFBXComponent_o *)profileTabBase,
                  *(System_String_o **)&this->fields.confirmDispLv,
                  0LL);
                goto LABEL_27;
              }
            }
          }
        }
      }
      goto LABEL_303;
    }
    if ( kind == 1 )
    {
      profileTabBase = (__int64)this->fields.profileTabBase;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleTabBase;
      if ( !profileTabBase )
        goto LABEL_303;
      v7 = 1;
    }
    else
    {
      if ( kind )
      {
LABEL_27:
        v6 = 0;
        goto LABEL_28;
      }
      profileTabBase = (__int64)this->fields.profileTabBase;
      if ( !profileTabBase
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL),
            (profileTabBase = (__int64)this->fields.battleTabBase) == 0) )
      {
LABEL_303:
        sub_B7769C(profileTabBase, *(_QWORD *)&kind);
      }
      v7 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, v7, 0LL);
    profileTabBase = (__int64)this->fields.voiceTabBase;
    if ( profileTabBase )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.statusTitleSprite;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
        goto LABEL_27;
      }
    }
    goto LABEL_303;
  }
  if ( kind != 3 )
    goto LABEL_13;
  if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
    return;
  profileTabBase = (__int64)this->fields.profileTabBase;
  LODWORD(this->fields.tabInitList) = 3;
  if ( !profileTabBase )
    goto LABEL_303;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
  profileTabBase = (__int64)this->fields.battleTabBase;
  if ( !profileTabBase )
    goto LABEL_303;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
  profileTabBase = (__int64)this->fields.voiceTabBase;
  if ( !profileTabBase )
    goto LABEL_303;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
  profileTabBase = (__int64)this->fields.statusTitleSprite;
  if ( !profileTabBase )
    goto LABEL_303;
  v6 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
LABEL_28:
  switch ( *(_DWORD *)&this->fields.isInitTab )
  {
    case 4:
    case 5:
    case 7:
      profileTabBase = (__int64)this->fields.profileButton;
      if ( profileTabBase )
      {
        profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
          profileTabBase = (__int64)this->fields.profileButton;
          if ( profileTabBase )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
              profileTabBase,
              1LL,
              *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
            profileTabBase = (__int64)this->fields.profileButton;
            if ( profileTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
              profileTabBase = (__int64)this->fields.profileTitleSprite;
              if ( profileTabBase )
              {
                v24 = (System_String_o **)&StringLiteral_17435/*"btn_txt_status_off"*/;
                if ( !kind )
                  v24 = (System_String_o **)&StringLiteral_17436/*"btn_txt_status_on"*/;
                UISprite__set_spriteName((UISprite_o *)profileTabBase, *v24, 0LL);
                profileTabBase = (__int64)this->fields.profileTitleSprite;
                if ( profileTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
                    profileTabBase,
                    *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
                  profileTabBase = (__int64)this->fields.profileSprite;
                  if ( profileTabBase )
                  {
                    v25 = (System_String_o **)(kind ? &StringLiteral_17301/*"btn_bg_12"*/ : &StringLiteral_17303/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)profileTabBase, *v25, 0LL);
                    profileTabBase = (__int64)this->fields.profileButton;
                    if ( profileTabBase )
                    {
                      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase
                                                                                                  + 536LL))(
                                         profileTabBase,
                                         0LL,
                                         BYTE4(this->fields.tabInitList),
                                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
                      profileButton = this->fields.profileButton;
                      if ( profileButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.profileButton,
                                    0LL);
                        UICommonButton__SetColliderEnable(profileButton, enabled, BYTE4(this->fields.tabInitList), 0LL);
                        profileTabBase = (__int64)this->fields.battleButton;
                        if ( profileTabBase )
                        {
                          profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)profileTabBase,
                                                      0LL);
                          if ( profileTabBase )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
                            profileTabBase = (__int64)this->fields.battleButton;
                            if ( profileTabBase )
                            {
                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
                                profileTabBase,
                                1LL,
                                *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
                              profileTabBase = (__int64)this->fields.battleButton;
                              if ( profileTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
                                profileTabBase = (__int64)this->fields.battleTitleSprite;
                                if ( profileTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)profileTabBase,
                                    (System_String_o *)StringLiteral_17415/*"btn_txt_profile_off"*/,
                                    0LL);
                                  profileTabBase = (__int64)this->fields.battleTitleSprite;
                                  if ( profileTabBase )
                                  {
                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
                                      profileTabBase,
                                      *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
                                    profileTabBase = (__int64)this->fields.battleSprite;
                                    if ( profileTabBase )
                                    {
                                      UISprite__set_spriteName(
                                        (UISprite_o *)profileTabBase,
                                        (System_String_o *)StringLiteral_17301/*"btn_bg_12"*/,
                                        0LL);
                                      profileTabBase = (__int64)this->fields.battleButton;
                                      if ( profileTabBase )
                                      {
                                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)profileTabBase
                                                                                                  + 536LL))(
                                          profileTabBase,
                                          3LL,
                                          1LL,
                                          *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
                                        profileTabBase = (__int64)this->fields.voiceButton;
                                        if ( profileTabBase )
                                        {
                                          profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)profileTabBase,
                                                                      0LL);
                                          if ( profileTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)profileTabBase,
                                              1,
                                              0LL);
                                            profileTabBase = (__int64)this->fields.voiceButton;
                                            if ( profileTabBase )
                                            {
                                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase
                                                                                               + 392LL))(
                                                profileTabBase,
                                                1LL,
                                                *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
                                              profileTabBase = (__int64)this->fields.voiceButton;
                                              if ( profileTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)profileTabBase,
                                                  kind != 2,
                                                  0LL);
                                                profileTabBase = (__int64)this->fields.voiceTitleSprite;
                                                if ( profileTabBase )
                                                {
                                                  v28 = (System_String_o **)&StringLiteral_17372/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v28 = (System_String_o **)&StringLiteral_17371/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)profileTabBase, *v28, 0LL);
                                                  profileTabBase = (__int64)this->fields.voiceTitleSprite;
                                                  if ( profileTabBase )
                                                  {
                                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase
                                                                                            + 840LL))(
                                                      profileTabBase,
                                                      *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
                                                    profileTabBase = (__int64)this->fields.voiceSprite;
                                                    if ( profileTabBase )
                                                    {
                                                      v29 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17303/*"btn_bg_19"*/
                                                                               : &StringLiteral_17301/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v29, 0LL);
                                                      profileTabBase = (__int64)this->fields.voiceButton;
                                                      if ( profileTabBase )
                                                      {
                                                        profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                                                                           profileTabBase,
                                                                           0LL,
                                                                           BYTE4(this->fields.tabInitList),
                                                                           *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
                                                        voiceButton = this->fields.voiceButton;
                                                        if ( voiceButton )
                                                        {
                                                          v31 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.voiceButton,
                                                                  0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            voiceButton,
                                                            v31,
                                                            BYTE4(this->fields.tabInitList),
                                                            0LL);
                                                          profileTabBase = (__int64)this->fields.profileNewIcon;
                                                          if ( profileTabBase )
                                                          {
                                                            profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)profileTabBase,
                                                                                        0LL);
                                                            if ( profileTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)profileTabBase,
                                                                1,
                                                                0LL);
                                                              profileTabBase = (__int64)this->fields.profileNewIcon;
                                                              if ( profileTabBase )
                                                              {
                                                                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
                                                                  profileTabBase,
                                                                  1LL,
                                                                  *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
                                                                profileTabBase = (__int64)this->fields.profileNewIcon;
                                                                if ( profileTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)profileTabBase,
                                                                    0,
                                                                    0LL);
                                                                  profileTabBase = (__int64)this->fields.statusSprite;
                                                                  if ( profileTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)profileTabBase,
                                                                      (System_String_o *)StringLiteral_17445/*"btn_txt_voice_off"*/,
                                                                      0LL);
                                                                    profileTabBase = (__int64)this->fields.statusSprite;
                                                                    if ( profileTabBase )
                                                                    {
                                                                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
                                                                        profileTabBase,
                                                                        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
                                                                      profileTabBase = (__int64)this->fields.statusButton;
                                                                      if ( profileTabBase )
                                                                      {
                                                                        UISprite__set_spriteName(
                                                                          (UISprite_o *)profileTabBase,
                                                                          (System_String_o *)StringLiteral_17301/*"btn_bg_12"*/,
                                                                          0LL);
                                                                        profileTabBase = (__int64)this->fields.profileNewIcon;
                                                                        if ( profileTabBase )
                                                                          goto LABEL_142;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_303;
    case 0xA:
    case 0x1E:
    case 0x24:
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v23 = &StringLiteral_17389/*"btn_txt_detail_on"*/;
      goto LABEL_210;
    case 0xB:
    case 0xC:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x18:
    case 0x1A:
    case 0x1B:
    case 0x1F:
    case 0x20:
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v8 = (System_String_o **)&StringLiteral_17435/*"btn_txt_status_off"*/;
      if ( !kind )
        v8 = (System_String_o **)&StringLiteral_17436/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v8, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v9 = (System_String_o **)(kind ? &StringLiteral_17301/*"btn_bg_12"*/ : &StringLiteral_17303/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v9, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      v10 = this->fields.profileButton;
      if ( !v10 )
        goto LABEL_303;
      v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v10, v11, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v12 = &StringLiteral_17389/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v12 = &StringLiteral_17388/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v12, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v13 = (System_String_o **)(kind == 1 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v13, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_303;
      v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v16 = BYTE4(this->fields.tabInitList);
      v17 = v15;
      goto LABEL_215;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v18 = (System_String_o **)&StringLiteral_17435/*"btn_txt_status_off"*/;
      if ( !kind )
        v18 = (System_String_o **)&StringLiteral_17436/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v18, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v19 = &StringLiteral_17303/*"btn_bg_19"*/;
      if ( kind )
        v19 = &StringLiteral_17301/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v19, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      v20 = this->fields.profileButton;
      if ( !v20 )
        goto LABEL_303;
      v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v20, v21, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17388/*"btn_txt_detail_off"*/, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17301/*"btn_bg_12"*/, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
        profileTabBase,
        3LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      goto LABEL_216;
    case 0x1C:
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v23 = &StringLiteral_17415/*"btn_txt_profile_off"*/;
LABEL_210:
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v23, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17303/*"btn_bg_19"*/, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         1LL,
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_303;
      v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v16 = 1;
LABEL_215:
      UICommonButton__SetColliderEnable(battleButton, v17, v16, 0LL);
LABEL_216:
      profileTabBase = (__int64)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      profileTabBase = (__int64)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 0, 0LL);
      goto LABEL_221;
    default:
      profileTabBase = *(_QWORD *)&this->fields.isModify;
      if ( !profileTabBase )
        goto LABEL_303;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)profileTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v34 = (System_String_o **)&StringLiteral_17435/*"btn_txt_status_off"*/;
      if ( !kind )
        v34 = (System_String_o **)&StringLiteral_17436/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v34, 0LL);
      profileTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v35 = (System_String_o **)(kind ? &StringLiteral_17301/*"btn_bg_12"*/ : &StringLiteral_17303/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v35, 0LL);
      profileTabBase = (__int64)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      v36 = this->fields.profileButton;
      if ( !v36 )
        goto LABEL_303;
      v37 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v36, v37, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v38 = (System_String_o **)&StringLiteral_17416/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v38 = (System_String_o **)&StringLiteral_17415/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v38, 0LL);
      profileTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v39 = (System_String_o **)(kind == 1 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v39, 0LL);
      profileTabBase = (__int64)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      v40 = this->fields.battleButton;
      if ( !v40 )
        goto LABEL_303;
      v41 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v40, v41, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (__int64)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_303;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_303;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 2, 0LL);
      profileTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      v42 = (System_String_o **)&StringLiteral_17372/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v42 = (System_String_o **)&StringLiteral_17371/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v42, 0LL);
      profileTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.voiceSprite;
      if ( !profileTabBase )
        goto LABEL_303;
      if ( kind == 2 )
        v43 = &StringLiteral_17303/*"btn_bg_19"*/;
      else
        v43 = &StringLiteral_17301/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v43, 0LL);
      profileTabBase = (__int64)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_302;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      v44 = this->fields.voiceButton;
      if ( !v44 )
        goto LABEL_302;
      v45 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
      UICommonButton__SetColliderEnable(v44, v45, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (__int64)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_302;
      v46 = isPlayVoice;
      profileTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_302;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, 1, 0LL);
      profileTabBase = (__int64)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_302;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)profileTabBase + 392LL))(
        profileTabBase,
        1LL,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 400LL));
      profileTabBase = (__int64)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_302;
      if ( !v46 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
        profileTabBase = (__int64)this->fields.statusSprite;
        if ( profileTabBase )
        {
          UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17445/*"btn_txt_voice_off"*/, 0LL);
          profileTabBase = (__int64)this->fields.statusSprite;
          if ( profileTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
              profileTabBase,
              *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
            profileTabBase = (__int64)this->fields.statusButton;
            if ( profileTabBase )
            {
              UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17301/*"btn_bg_12"*/, 0LL);
              profileTabBase = (__int64)this->fields.profileNewIcon;
              if ( profileTabBase )
              {
LABEL_142:
                profileTabBase = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)profileTabBase
                                                                                              + 536LL))(
                                   profileTabBase,
                                   3LL,
                                   1LL,
                                   *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
                goto LABEL_221;
              }
            }
          }
        }
LABEL_302:
        sub_B7769C(profileTabBase, v32);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, (unsigned __int8)v6 != 1, 0LL);
      profileTabBase = (__int64)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_302;
      v47 = (System_String_o **)&StringLiteral_17446/*"btn_txt_voice_on"*/;
      if ( !v6 )
        v47 = (System_String_o **)&StringLiteral_17445/*"btn_txt_voice_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v47, 0LL);
      profileTabBase = (__int64)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_302;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)profileTabBase + 840LL))(
        profileTabBase,
        *(_QWORD *)(*(_QWORD *)profileTabBase + 848LL));
      profileTabBase = (__int64)this->fields.statusButton;
      if ( !profileTabBase )
        goto LABEL_302;
      v48 = (System_String_o **)(v6 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v48, 0LL);
      profileTabBase = (__int64)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_302;
      profileTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)profileTabBase + 536LL))(
                         profileTabBase,
                         0LL,
                         BYTE4(this->fields.tabInitList),
                         *(_QWORD *)(*(_QWORD *)profileTabBase + 544LL));
      profileNewIcon = (UICommonButton_o *)this->fields.profileNewIcon;
      if ( !profileNewIcon )
        goto LABEL_302;
      v50 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileNewIcon, 0LL);
      UICommonButton__SetColliderEnable(profileNewIcon, v50, BYTE4(this->fields.tabInitList), 0LL);
LABEL_221:
      profileNewIdList = this->fields.profileNewIdList;
      if ( !profileNewIdList )
        goto LABEL_302;
      if ( profileNewIdList->max_length <= kind )
      {
        v90 = sub_B776C8(profileTabBase);
        sub_B77668(v90, 0LL);
      }
      v52 = (char *)profileNewIdList + kind;
      v54 = (unsigned __int8)v52[32];
      v53 = v52 + 32;
      if ( v54 )
      {
        switch ( kind )
        {
          case 0:
            goto LABEL_233;
          case 1:
            goto LABEL_236;
          case 2:
            p_voiceTabListViewManager = &this->fields.voiceTabListViewManager;
            goto LABEL_240;
          case 3:
            goto LABEL_270;
          default:
            goto LABEL_291;
        }
      }
      *v53 = 1;
      switch ( kind )
      {
        case 0:
          profileTabBase = (__int64)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_302;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            0LL);
          if ( BYTE1(this->fields.statusLoadAsset) )
            goto LABEL_233;
          profileTabBase = (__int64)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_302;
          ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)profileTabBase, 6, 0LL);
          profileTabBase = (__int64)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_302;
          ServantStatusListViewManager__SetMode_33001440((ServantStatusListViewManager_o *)profileTabBase, 4, 0LL);
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v57 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_302;
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v57,
            0LL);
LABEL_233:
          v58 = this->fields.profileTabListViewManager;
          v59 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v59,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v58 )
            goto LABEL_302;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v58, 1, v59, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v33);
LABEL_236:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v61 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v61,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_302;
          ServantStatusFlavorTextListViewManager__SetMode(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            1,
            v61,
            0LL);
          break;
        case 2:
          p_voiceTabListViewManager = &this->fields.voiceTabListViewManager;
          profileTabBase = (__int64)this->fields.voiceTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_302;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            v33);
LABEL_240:
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          v63 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v63,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !voiceTabListViewManager )
            goto LABEL_302;
          voiceTabListViewManager->fields.transformNameLabel = (struct UILabel_o *)v63;
          sub_B77560(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.transformNameLabel,
            (System_Int32_array **)v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
          ServantStatusBattleListViewManager__SetMode_22018280(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v70,
            v71);
          profileTabBase = (__int64)*p_voiceTabListViewManager;
          if ( !*p_voiceTabListViewManager )
            goto LABEL_302;
          profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)profileTabBase,
                                      0LL);
          v72 = *(_QWORD *)&this->fields.isModify;
          if ( !v72 || !profileTabBase )
            goto LABEL_302;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, *(_BYTE *)(v72 + 522) == 0, 0LL);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          if ( !byte_4389478 )
          {
            sub_B775C4(&RandomLimitCountManager_TypeInfo);
            byte_4389478 = 1;
          }
          profileTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            profileTabBase = (__int64)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(profileTabBase + 184) + 8LL) )
            goto LABEL_256;
          v74 = *(_QWORD *)&this->fields.isModify;
          if ( !v74 )
            goto LABEL_302;
          if ( !*(_BYTE *)(v74 + 192) )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v32);
LABEL_256:
          ServantStatusDialog__SetupBattleMask(this, *(ServantStatusListViewItem_o **)&this->fields.isModify, v73);
          profileTabBase = (__int64)this->fields.markBase;
          if ( !profileTabBase )
            goto LABEL_302;
          profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)profileTabBase,
                                      0LL);
          v75 = *(_QWORD *)&this->fields.isModify;
          if ( !v75 )
            goto LABEL_302;
          if ( !profileTabBase )
            goto LABEL_302;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, *(_BYTE *)(v75 + 522) == 0, 0LL);
          profileTabBase = (__int64)this->fields.battleTransformNameLabel;
          if ( !profileTabBase )
            goto LABEL_302;
          profileTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)profileTabBase,
                                      0LL);
          v76 = *(_QWORD *)&this->fields.isModify;
          if ( !v76 )
            goto LABEL_302;
          if ( !profileTabBase )
            goto LABEL_302;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabBase, *(_BYTE *)(v76 + 523), 0LL);
          profileTabBase = (__int64)this->fields.battleTransformNameLabel;
          if ( !profileTabBase )
            goto LABEL_302;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
          BattleTransformNamePosition = ServantStatusDialog__GetBattleTransformNamePosition(this, v78);
          GameObjectExtensions__SetLocalPositionY(gameObject, (float)BattleTransformNamePosition, 0LL);
          profileTabBase = *(_QWORD *)&this->fields.isModify;
          if ( !profileTabBase )
            goto LABEL_302;
          changeTransformButton = this->fields.changeTransformButton;
          profileTabBase = (__int64)ServantStatusListViewItem__GetTransformName(
                                      (ServantStatusListViewItem_o *)profileTabBase,
                                      0LL);
          if ( !changeTransformButton )
            goto LABEL_302;
          UILabel__set_text((UILabel_o *)changeTransformButton, (System_String_o *)profileTabBase, 0LL);
          break;
        case 3:
          v81 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
          if ( !v81 )
            goto LABEL_302;
          servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          requestVoiceDataList = this->fields.requestVoiceDataList;
          profileTabBase = ServantStatusListViewItem__GetSvtId(
                             *(ServantStatusListViewItem_o **)&this->fields.isModify,
                             1,
                             0LL);
          if ( !requestVoiceDataList )
            goto LABEL_302;
          profileTabBase = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)requestVoiceDataList,
                                      profileTabBase,
                                      (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !servantNameRangeLabel )
            goto LABEL_302;
          ServantStatusVoiceListViewManager__CreateList(
            servantNameRangeLabel,
            v81,
            (System_Int32_array *)profileTabBase,
            0LL);
LABEL_270:
          if ( !BYTE3(this->fields.statusLoadAsset) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v85 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v85 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v85->static_fields->LOW_VOLUME )
            {
              BYTE3(this->fields.statusLoadAsset) = 1;
              if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              }
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v86 = BgmManager_TypeInfo;
                if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v86 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v86->static_fields->LOW_VOLUME;
                if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !OptionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                }
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v88 = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          v89 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v89,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v88 )
            goto LABEL_302;
          ServantStatusVoiceListViewManager__SetMode(v88, 1, v89, 0LL);
          break;
        default:
          break;
      }
LABEL_291:
      if ( !(v6 & 1 | (BYTE3(this->fields.statusLoadAsset) == 0)) )
      {
        BYTE3(this->fields.statusLoadAsset) = 0;
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        OptionManager__Recover(0LL);
      }
      BYTE4(this->fields.tabInitList) = 1;
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetVisibleHighPriorityObject(
        ServantStatusDialog_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_Object_o *v6; // x20

  if ( (byte_438967F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_438967F = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 2 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
    if ( !bgTxtSprite )
      goto LABEL_14;
    bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
    if ( !bgTxtSprite )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgTxtSprite, isVisible, 0LL);
    if ( isVisible )
    {
      v6 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
      {
        bgTxtSprite = *(UnityEngine_Component_o **)&this->fields.isBattleResourceLoading;
        if ( bgTxtSprite )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)bgTxtSprite,
            (System_String_o *)StringLiteral_23673/*"wait"*/,
            0LL);
          return;
        }
LABEL_14:
        sub_B7769C(bgTxtSprite, isVisible);
      }
    }
  }
}


void __fastcall ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  UILabel_o *battleTransformNameSprite; // x20

  v4 = this;
  if ( (byte_4389657 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_B775C4(&StringLiteral_12242/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_4389657 = 1;
  }
  if ( !item )
    goto LABEL_16;
  if ( !item->fields.userSvtEntity || item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel;
    if ( this )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_16;
  }
  this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel;
  if ( !this )
    goto LABEL_16;
  if ( !item->fields.isEnableOwnRandomSetting )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  battleTransformNameSprite = (UILabel_o *)v4->fields.battleTransformNameSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12242/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0LL);
  if ( !battleTransformNameSprite
    || (UILabel__set_text(battleTransformNameSprite, (System_String_o *)this, 0LL),
        (this = (ServantStatusDialog_o *)v4->fields.battleTransformNameSprite) == 0LL) )
  {
LABEL_16:
    sub_B7769C(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *SvtId; // x0
  int32_t v4; // w20
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t ServantImageLimitSealAfter; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v8; // x20
  __int64 v9; // x8
  bool v10; // w22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o *v17; // x22
  const MethodInfo *v18; // x2
  System_String_o *v19; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  const MethodInfo *v21; // x1

  if ( (byte_4389663 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389663 = 1;
  }
  SvtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_39;
  SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(SvtId, 1, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v4 = (int)SvtId;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                          0LL);
  SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SvtId )
    goto LABEL_39;
  SvtId = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)SvtId,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !SvtId )
    goto LABEL_39;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)SvtId,
                                 v4,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  SvtId = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                           v4,
                                           ServantImageLimitSealAfter,
                                           0LL);
  if ( !SvtId )
    goto LABEL_39;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v8 = (System_Int32_array **)SvtId;
  if ( System_String__Equals_44889276((System_String_o *)SvtId, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    if ( LOBYTE(this->fields.defaultAnimationName) )
      return 0;
    if ( !LOBYTE(this->fields.battleActor) )
    {
LABEL_25:
      ServantStatusDialog__EndLoadBattle_22079568(this, method);
      return 0;
    }
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4389478 )
    {
      sub_B775C4(&RandomLimitCountManager_TypeInfo);
      byte_4389478 = 1;
    }
    SvtId = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      SvtId = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(SvtId->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v9 = *(_QWORD *)&this->fields.isModify;
    if ( v9 )
    {
      if ( !*(_BYTE *)(v9 + 192) )
        goto LABEL_25;
      return 0;
    }
LABEL_39:
    sub_B7769C(SvtId, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v17 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v17, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v8;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v8, v11, v12, v13, v14, v15, v16);
  SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !SvtId )
    goto LABEL_39;
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  LOBYTE(this->fields.defaultAnimationName) = 1;
  ServantStatusDialog__SetTabKind(this, 2, v18);
  v19 = *(System_String_o **)&this->fields.isBattlePlay;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v10 = 1;
  if ( !AssetManager__loadAssetStorage(v19, v20, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v21);
    return 1;
  }
  return v10;
}


void __fastcall ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *CommandCardLoadFolderNameDisp; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ServantStatusListViewItem_o **v14; // x19
  int32_t SvtId; // w22
  System_String_o **p_transformedStatusLoadAsset; // x21
  System_Int32_array **v17; // x22
  System_String_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *v25; // x22
  AssetLoader_LoadEndDataHandler_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_438965D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData__Invoke__);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__);
    sub_B775C4(&ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
    byte_438965D = 1;
  }
  v5 = sub_B77694(ServantStatusDialog___c__DisplayClass138_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass138_0___ctor((ServantStatusDialog___c__DisplayClass138_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = (ServantStatusListViewItem_o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)onComplete, v8, v9, v10, v11, v12, v13);
  CommandCardLoadFolderNameDisp = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !CommandCardLoadFolderNameDisp )
    goto LABEL_23;
  SvtId = ServantStatusListViewItem__GetSvtId(CommandCardLoadFolderNameDisp, 1, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderNameDisp = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
                                                                   SvtId,
                                                                   0,
                                                                   0LL);
  if ( !CommandCardLoadFolderNameDisp )
    goto LABEL_23;
  p_transformedStatusLoadAsset = &this->fields.transformedStatusLoadAsset;
  v17 = (System_Int32_array **)CommandCardLoadFolderNameDisp;
  if ( System_String__Equals_44889276(
         (System_String_o *)CommandCardLoadFolderNameDisp,
         *p_transformedStatusLoadAsset,
         0LL) )
  {
LABEL_21:
    CommandCardLoadFolderNameDisp = *v14;
    if ( *v14 )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)CommandCardLoadFolderNameDisp,
        0LL,
        (const MethodInfo_26A087C *)Method_System_Action_AssetData__Invoke__);
      return;
    }
LABEL_23:
    sub_B7769C(CommandCardLoadFolderNameDisp, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_transformedStatusLoadAsset, 0LL) )
  {
    v18 = *p_transformedStatusLoadAsset;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v18, 0LL);
  }
  CommandCardLoadFolderNameDisp = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !CommandCardLoadFolderNameDisp )
    goto LABEL_23;
  CommonUI__SetLoadMode((CommonUI_o *)CommandCardLoadFolderNameDisp, 1, 0LL);
  *p_transformedStatusLoadAsset = (System_String_o *)v17;
  sub_B77560((BattleServantConfConponent_o *)p_transformedStatusLoadAsset, v17, v19, v20, v21, v22, v23, v24);
  v25 = *p_transformedStatusLoadAsset;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass138_0__StartCommandCardLoad_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0LL) )
  {
    *p_transformedStatusLoadAsset = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_transformedStatusLoadAsset, 0LL, v27, v28, v29, v30, v31, v32);
    goto LABEL_21;
  }
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *SvtId; // x0
  int32_t v4; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_o *cardLoadAsset; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  AssetData_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_438965B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndStatusLoad__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438965B = 1;
  }
  SvtId = *(WebViewManager_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_14;
  SvtId = (WebViewManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)SvtId, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_14;
  v4 = (int)SvtId;
  LimitCount = ServantStatusListViewItem__get_LimitCount(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v4, LimitCount, 0LL);
  this->fields.cardLoadAsset = StatusImageFolderName;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cardLoadAsset,
    (System_Int32_array **)StatusImageFolderName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SvtId = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !SvtId )
LABEL_14:
    sub_B7769C(SvtId, method);
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  cardLoadAsset = this->fields.cardLoadAsset;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(cardLoadAsset, v14, 1, 0LL) )
  {
    this->fields.cardLoadAsset = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v15, v16, v17, v18, v19, v20);
    ServantStatusDialog__EndStatusLoad(this, v21, v22);
  }
}


void __fastcall ServantStatusDialog__StartTransformedStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Action_Uri__o *StatusImageFolderName; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_Uri__o **v14; // x19
  __int64 v15; // x8
  int32_t v16; // w22
  System_String_o **p_loadVoiceData; // x21
  System_Int32_array **v18; // x22
  System_String_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_o *v26; // x22
  AssetLoader_LoadEndDataHandler_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_438965F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData__Invoke__);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__);
    sub_B775C4(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
    byte_438965F = 1;
  }
  v5 = sub_B77694(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass140_0___ctor((ServantStatusDialog___c__DisplayClass140_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = (System_Action_Uri__o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)onComplete, v8, v9, v10, v11, v12, v13);
  v15 = *(_QWORD *)&this->fields.isModify;
  if ( !v15 )
    goto LABEL_24;
  if ( !*(_BYTE *)(v15 + 522) )
    goto LABEL_22;
  v16 = *(_DWORD *)(v15 + 524);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = (System_Action_Uri__o *)ServantAssetLoadManager__getStatusImageFolderName(v16, 0, 0LL);
  if ( !StatusImageFolderName )
    goto LABEL_24;
  p_loadVoiceData = &this->fields.loadVoiceData;
  v18 = (System_Int32_array **)StatusImageFolderName;
  if ( System_String__Equals_44889276((System_String_o *)StatusImageFolderName, *p_loadVoiceData, 0LL) )
  {
LABEL_22:
    StatusImageFolderName = *v14;
    if ( *v14 )
    {
      System_Action_Uri___Invoke(
        StatusImageFolderName,
        0LL,
        (const MethodInfo_26A087C *)Method_System_Action_AssetData__Invoke__);
      return;
    }
LABEL_24:
    sub_B7769C(StatusImageFolderName, v7);
  }
  if ( !System_String__IsNullOrEmpty(*p_loadVoiceData, 0LL) )
  {
    v19 = *p_loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v19, 0LL);
  }
  StatusImageFolderName = (System_Action_Uri__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !StatusImageFolderName )
    goto LABEL_24;
  CommonUI__SetLoadMode((CommonUI_o *)StatusImageFolderName, 1, 0LL);
  *p_loadVoiceData = (System_String_o *)v18;
  sub_B77560((BattleServantConfConponent_o *)p_loadVoiceData, v18, v20, v21, v22, v23, v24, v25);
  v26 = *p_loadVoiceData;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass140_0__StartTransformedStatusLoad_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v26, v27, 1, 0LL) )
  {
    *p_loadVoiceData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_loadVoiceData, 0LL, v28, v29, v30, v31, v32, v33);
    goto LABEL_22;
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  bool v4; // w19
  ServantStatusListViewItem_o *SvtId; // x0
  int32_t v6; // w21
  ServantStatusListViewItem_o *v7; // x20
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v9; // x23
  int32_t v10; // w21
  BalanceConfig_c *v11; // x8
  ServantLimitAddMaster_o *v12; // x22
  __int64 v13; // x9
  int32_t v14; // w4
  const MethodInfo *v15; // x5
  struct PartyListViewItem_o *v16; // x8
  ServantStatusListViewItem_o *v17; // x22
  unsigned __int64 v18; // x27
  struct PartyOrganizationListViewItem_o **p_memberItem; // x26
  struct System_Collections_Generic_List_string__o *v20; // x23
  int32_t v21; // w4
  const MethodInfo *v22; // x5
  struct System_Collections_Generic_List_string__o *v23; // x23
  int32_t v24; // w4
  const MethodInfo *v25; // x5
  struct System_Collections_Generic_List_string__o *v26; // x23
  int32_t v27; // w4
  const MethodInfo *v28; // x5
  BalanceConfig_c *v29; // x8
  int v30; // w23
  struct System_Collections_Generic_List_string__o *v31; // x23
  int32_t v32; // w4
  const MethodInfo *v33; // x5
  struct System_Collections_Generic_List_string__o *v34; // x23
  int32_t v35; // w4
  const MethodInfo *v36; // x5
  struct System_Collections_Generic_List_string__o *v37; // x23
  int32_t ServantIdMashu3; // w2
  BalanceConfig_c *v39; // x8
  int v40; // w23
  struct System_Collections_Generic_List_string__o *v41; // x23
  int32_t v42; // w4
  const MethodInfo *v43; // x5
  struct System_Collections_Generic_List_string__o *v44; // x23
  int32_t v45; // w4
  const MethodInfo *v46; // x5
  struct System_Collections_Generic_List_string__o *v47; // x23
  int64_t UserId; // x25
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w23
  int32_t MashuTdGradeUpQuestPhase; // w24
  struct System_Collections_Generic_List_string__o *v52; // x23
  int32_t v53; // w4
  const MethodInfo *v54; // x5
  struct System_Collections_Generic_List_string__o *v55; // x23
  ServantVoiceRelationEntity_array *v56; // x24
  signed int max_length; // w8
  unsigned int v58; // w25
  ServantVoiceRelationEntity_o *v59; // x26
  struct System_Collections_Generic_List_string__o *voiceDataList; // x21
  __int64 v61; // x22
  __int64 v62; // x23
  ServantStatusDialog_o *v63; // x0
  int32_t v64; // w4
  const MethodInfo *v65; // x5
  struct System_Collections_Generic_List_string__o *v66; // x21
  ServantStatusDialog_o *v67; // x0
  int32_t v68; // w4
  const MethodInfo *v69; // x5
  struct System_Collections_Generic_List_string__o *v70; // x21
  ServantStatusDialog_o *v71; // x0
  int32_t v72; // w4
  const MethodInfo *v73; // x5
  struct System_Collections_Generic_List_string__o *v74; // x8
  const MethodInfo *v75; // x2
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct System_Collections_Generic_List_string__o *v82; // x20
  struct System_Collections_Generic_Dictionary_int__int____o *v83; // x1
  System_String_o *dictChangeSvtVoiceIdList; // x20
  System_Action_o *v85; // x21
  __int64 v87; // x0
  unsigned __int64 v88; // [xsp+8h] [xbp-68h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_438966F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438966F = 1;
  }
  relationList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4388A01 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4388A01 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->isRebootBlock )
    return 1;
  SvtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_122;
  SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(SvtId, 1, 0LL);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_122;
  v6 = (int)SvtId;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.requestVoiceDataList,
         (int32_t)SvtId,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SvtId )
    goto LABEL_122;
  SvtId = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)SvtId,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !SvtId )
    goto LABEL_122;
  SvtId = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                           (ServantChangeMaster_o *)SvtId,
                                           v6,
                                           0LL);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_122;
  v7 = SvtId;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.requestVoiceDataList,
    v6,
    (WarBoardAIRoute_RouteData_o *)SvtId,
    (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  if ( !v7 )
    goto LABEL_122;
  partyItem = v7->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)partyItem )
        goto LABEL_123;
      v10 = *((_DWORD *)&v7->fields.memberItem + v9);
      SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SvtId )
        goto LABEL_122;
      SvtId = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)SvtId,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v11 = BalanceConfig_TypeInfo;
      v12 = (ServantLimitAddMaster_o *)SvtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      v13 = *(_QWORD *)&this->fields.isModify;
      if ( !v13 )
        goto LABEL_122;
      if ( !v12 )
        goto LABEL_122;
      SvtId = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                               v12,
                                               v10,
                                               v11->static_fields->ServantLimitMax,
                                               *(System_Int32_array **)(v13 + 208),
                                               0LL);
      if ( !SvtId )
        goto LABEL_122;
      v16 = SvtId->fields.partyItem;
      v17 = SvtId;
      v88 = v9;
      if ( (int)v16 >= 1 )
        break;
LABEL_85:
      SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SvtId )
        goto LABEL_122;
      SvtId = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)SvtId,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !SvtId )
        goto LABEL_122;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)SvtId, &relationList, v10, 0LL);
      v56 = relationList;
      if ( !relationList )
        goto LABEL_122;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v58 = 0;
        while ( v58 < max_length )
        {
          v59 = v56->m_Items[v58];
          if ( !v59 )
            goto LABEL_122;
          voiceDataList = this->fields.voiceDataList;
          v62 = *(_QWORD *)&v59->fields.relationSvtId.fields.currentCryptoKey;
          v61 = *(_QWORD *)&v59->fields.relationSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v90.fields.currentCryptoKey = v62;
          *(_QWORD *)&v90.fields.fakeValue = v61;
          v63 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v90, 0LL);
          SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                   v63,
                                                   0,
                                                   (int32_t)v63,
                                                   0,
                                                   v64,
                                                   v65);
          if ( !voiceDataList )
            goto LABEL_122;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          v66 = this->fields.voiceDataList;
          v67 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                           v59->fields.relationSvtId,
                                           0LL);
          SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                   v67,
                                                   2,
                                                   (int32_t)v67,
                                                   0,
                                                   v68,
                                                   v69);
          if ( !v66 )
            goto LABEL_122;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v66,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          v70 = this->fields.voiceDataList;
          v71 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                           v59->fields.relationSvtId,
                                           0LL);
          SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                   v71,
                                                   1,
                                                   (int32_t)v71,
                                                   0,
                                                   v72,
                                                   v73);
          if ( !v70 )
            goto LABEL_122;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v70,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          max_length = v56->max_length;
          if ( (int)++v58 >= max_length )
            goto LABEL_99;
        }
LABEL_123:
        v87 = sub_B776C8(SvtId);
        sub_B77668(v87, 0LL);
      }
LABEL_99:
      LODWORD(partyItem) = v7->fields.partyItem;
      v9 = v88 + 1;
      if ( (__int64)(v88 + 1) >= (int)partyItem )
        goto LABEL_100;
    }
    v18 = 0LL;
    p_memberItem = &SvtId->fields.memberItem;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_123;
      v20 = this->fields.voiceDataList;
      SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                               (ServantStatusDialog_o *)SvtId,
                                               0,
                                               v10,
                                               *((_DWORD *)p_memberItem + v18),
                                               v14,
                                               v15);
      if ( !v20 )
        goto LABEL_122;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_123;
      v23 = this->fields.voiceDataList;
      SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                               (ServantStatusDialog_o *)SvtId,
                                               2,
                                               v10,
                                               *((_DWORD *)p_memberItem + v18),
                                               v21,
                                               v22);
      if ( !v23 )
        goto LABEL_122;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v18 >= LODWORD(v17->fields.partyItem) )
        goto LABEL_123;
      v26 = this->fields.voiceDataList;
      SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                               (ServantStatusDialog_o *)SvtId,
                                               1,
                                               v10,
                                               *((_DWORD *)p_memberItem + v18),
                                               v24,
                                               v25);
      if ( !v26 )
        goto LABEL_122;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      SvtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !SvtId )
        goto LABEL_122;
      SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(SvtId, 0LL);
      v29 = BalanceConfig_TypeInfo;
      v30 = (int)SvtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      if ( v30 == v29->static_fields->ServantIdJekyll )
        break;
      SvtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !SvtId )
        goto LABEL_122;
      SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(SvtId, 0LL);
      v39 = BalanceConfig_TypeInfo;
      v40 = (int)SvtId;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v39 = BalanceConfig_TypeInfo;
      }
      if ( v40 == v39->static_fields->ServantIdMashu1 )
      {
        v41 = this->fields.voiceDataList;
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v39);
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_123;
        SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                 (ServantStatusDialog_o *)SvtId,
                                                 0,
                                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                 *((_DWORD *)p_memberItem + v18),
                                                 v14,
                                                 v15);
        if ( !v41 )
          goto LABEL_122;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_123;
        v44 = this->fields.voiceDataList;
        SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                 (ServantStatusDialog_o *)SvtId,
                                                 2,
                                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                 *((_DWORD *)p_memberItem + v18),
                                                 v42,
                                                 v43);
        if ( !v44 )
          goto LABEL_122;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v18 >= LODWORD(v17->fields.partyItem) )
          goto LABEL_123;
        v47 = this->fields.voiceDataList;
        SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                 (ServantStatusDialog_o *)SvtId,
                                                 1,
                                                 BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                 *((_DWORD *)p_memberItem + v18),
                                                 v45,
                                                 v46);
        if ( !v47 )
          goto LABEL_122;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47,
          (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        static_fields = BalanceConfig_TypeInfo->static_fields;
        MashuTdGradeUpQuestId = static_fields->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = static_fields->MashuTdGradeUpQuestPhase;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        SvtId = (ServantStatusListViewItem_o *)CondType__IsQuestPhaseClear(
                                                 UserId,
                                                 MashuTdGradeUpQuestId,
                                                 MashuTdGradeUpQuestPhase,
                                                 -1,
                                                 0,
                                                 0LL);
        if ( ((unsigned __int8)SvtId & 1) != 0 )
        {
          SvtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
          v52 = this->fields.voiceDataList;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_123;
          SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                   (ServantStatusDialog_o *)SvtId,
                                                   0,
                                                   BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                   *((_DWORD *)p_memberItem + v18),
                                                   v14,
                                                   v15);
          if ( !v52 )
            goto LABEL_122;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_123;
          v55 = this->fields.voiceDataList;
          SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                   (ServantStatusDialog_o *)SvtId,
                                                   2,
                                                   BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                   *((_DWORD *)p_memberItem + v18),
                                                   v53,
                                                   v54);
          if ( !v55 )
            goto LABEL_122;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v18 >= LODWORD(v17->fields.partyItem) )
            goto LABEL_123;
          v37 = this->fields.voiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_52;
        }
      }
LABEL_84:
      LODWORD(v16) = v17->fields.partyItem;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_85;
    }
    v31 = this->fields.voiceDataList;
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v29);
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_123;
    SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                             (ServantStatusDialog_o *)SvtId,
                                             0,
                                             BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                             *((_DWORD *)p_memberItem + v18),
                                             v27,
                                             v28);
    if ( !v31 )
      goto LABEL_122;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_123;
    v34 = this->fields.voiceDataList;
    SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                             (ServantStatusDialog_o *)SvtId,
                                             2,
                                             BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                             *((_DWORD *)p_memberItem + v18),
                                             v32,
                                             v33);
    if ( !v34 )
      goto LABEL_122;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v18 >= LODWORD(v17->fields.partyItem) )
      goto LABEL_123;
    v37 = this->fields.voiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_52:
    SvtId = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                             (ServantStatusDialog_o *)SvtId,
                                             1,
                                             ServantIdMashu3,
                                             *((_DWORD *)p_memberItem + v18),
                                             v35,
                                             v36);
    if ( !v37 )
      goto LABEL_122;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37,
      (EventMissionProgressRequest_Argument_ProgressData_o *)SvtId,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_84;
  }
LABEL_100:
  v74 = this->fields.voiceDataList;
  if ( !v74 )
LABEL_122:
    sub_B7769C(SvtId, method);
  if ( v74->fields._size < 1 )
    return 0;
  SvtId = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !SvtId )
    goto LABEL_122;
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v75);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4388A01 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4388A01 = 1;
  }
  SvtId = (ServantStatusListViewItem_o *)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    SvtId = (ServantStatusListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(SvtId->fields.commandCodeCommentEntity[3].fields.commandCodeId) )
    return 1;
  v82 = this->fields.voiceDataList;
  if ( !v82 )
    goto LABEL_122;
  if ( !v82->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v83 = (struct System_Collections_Generic_Dictionary_int__int____o *)v82->fields._items->m_Items[0];
  this->fields.dictChangeSvtVoiceIdList = v83;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dictChangeSvtVoiceIdList,
    (System_Int32_array **)v83,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  SvtId = (ServantStatusListViewItem_o *)this->fields.voiceDataList;
  if ( !SvtId )
    goto LABEL_122;
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)SvtId,
    0,
    (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  dictChangeSvtVoiceIdList = (System_String_o *)this->fields.dictChangeSvtVoiceIdList;
  v85 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v85, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v4 = 1;
  SoundManager__loadAudioAssetStorage(dictChangeSvtVoiceIdList, v85, 1, 0LL);
  return v4;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SePlayer_o *voicePlayList; // x20
  System_Action_o *v17; // x21
  BattleServantConfConponent_o *p_voicePlayList; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4389671 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_B775C4(&StringLiteral_6136/*"EndWaitVoice"*/);
    byte_4389671 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_30246704(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
  if ( *(_QWORD *)&this->fields.voicePlayNum )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_36304080(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6136/*"EndWaitVoice"*/,
      0LL);
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v4, v5, v6, v7, v8, v9);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v10, v11, v12, v13, v14, v15);
  }
  voicePlayList = (SePlayer_o *)this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayList, v17, 0LL);
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayList;
    if ( servantNameRangeLabel )
    {
      p_voicePlayList = (BattleServantConfConponent_o *)&this->fields.voicePlayList;
      SePlayer__StopSe((SePlayer_o *)servantNameRangeLabel, 0.0, 0LL);
      p_voicePlayList->klass = 0LL;
      sub_B77560(p_voicePlayList, 0LL, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_13:
    sub_B7769C(servantNameRangeLabel, method);
  }
}


void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x8

  if ( (byte_43896B5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CvMaster___);
    sub_B775C4(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43896B5 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       cvId,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (battleTabListViewManager = this->fields.battleTabListViewManager) == 0LL )
    {
      sub_B7769C(Instance, v6);
    }
    ServantStatusFlavorTextListViewManager__UpdateCvName(
      (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
      *((System_String_o **)Instance + 3),
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateProfileList(
        ServantStatusDialog_o *this,
        bool setMode,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ServantStatusFlavorTextListViewManager_o *v13; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v14; // x21
  struct System_Int32_array *profileNewIdList; // x8
  __int64 v16; // x0

  v4 = this;
  if ( (byte_43896B4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ServantCommentEntity___ctor__);
    sub_B775C4(&System_Action_ServantCommentEntity__TypeInfo);
    sub_B775C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_B775C4(&Method_ServantStatusDialog__UpdateProfileList_b__235_0__);
    byte_43896B4 = 1;
  }
  if ( LODWORD(v4->fields.tabInitList) == 1 )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleTabListViewManager;
    if ( !this )
      goto LABEL_13;
    ServantStatusFlavorTextListViewManager__CreateList(
      (ServantStatusFlavorTextListViewManager_o *)this,
      *(ServantStatusListViewItem_o **)&v4->fields.isModify,
      0LL);
    battleTabListViewManager = v4->fields.battleTabListViewManager;
    v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v6,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog__UpdateProfileList_b__235_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_ServantCommentEntity___ctor__);
    if ( !battleTabListViewManager )
      goto LABEL_13;
    battleTabListViewManager->fields.sortKindButton = (struct UICommonButton_o *)v6;
    sub_B77560(
      (BattleServantConfConponent_o *)&battleTabListViewManager->fields.sortKindButton,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( setMode )
    {
      v13 = (ServantStatusFlavorTextListViewManager_o *)v4->fields.battleTabListViewManager;
      v14 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B77694(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v13 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v13, 1, v14, 0LL);
        return;
      }
LABEL_13:
      sub_B7769C(this, setMode);
    }
  }
  else
  {
    profileNewIdList = v4->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_13;
    if ( profileNewIdList->max_length <= 1 )
    {
      v16 = sub_B776C8(this);
      sub_B77668(v16, 0LL);
    }
    BYTE1(profileNewIdList->m_Items[1]) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateServantDetailName(
        ServantStatusDialog_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  _QWORD *v3; // x8
  ServantEntity_o *v4; // x8
  UIRangeLabel_o *servantClassNameLabel; // x19

  v3 = *(_QWORD **)&this->fields.isModify;
  if ( !v3 )
    goto LABEL_8;
  if ( v3[7] || !v3[11] )
  {
    v4 = (ServantEntity_o *)v3[16];
    if ( v4 )
    {
      servantClassNameLabel = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
      this = (ServantStatusDialog_o *)ServantEntity__getName(v4, -1, imageLimitCount, 0LL);
      if ( servantClassNameLabel )
      {
        UIRangeLabel__Set(servantClassNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B7769C(this, *(_QWORD *)&imageLimitCount);
  }
}


void __fastcall ServantStatusDialog__UpdateServantParameters(
        ServantStatusDialog_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = *(_QWORD *)&this->fields.isModify;
  if ( !v3 )
    goto LABEL_7;
  if ( *(_QWORD *)(v3 + 56) || !*(_QWORD *)(v3 + 88) )
  {
    this = (ServantStatusDialog_o *)this->fields.battleTabListViewManager;
    if ( this )
    {
      ServantStatusFlavorTextListViewManager__UpdateParameter(
        (ServantStatusFlavorTextListViewManager_o *)this,
        imageLimitCount,
        0LL);
      return;
    }
LABEL_7:
    sub_B7769C(this, imageLimitCount);
  }
}


void __fastcall ServantStatusDialog___EndLoadInit_b__134_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)&this->fields.isModify;
  if ( !v2 )
    sub_B7769C(this, method);
  if ( *(_BYTE *)(v2 + 523) )
    EventTutorialMaster__CheckTutorial(0, 86, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog___InitList_b__173_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  *((_BYTE *)&this->fields.currentMaskType + 4) = 0;
}


void __fastcall ServantStatusDialog___Init_b__130_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  AtlasManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_43896B9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndInitLoad__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_43896B9 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v6, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__195_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_43896BA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData___ctor__);
    sub_B775C4(&System_Action_AssetData__TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog__LoadTransformedResource_b__195_1__);
    byte_43896BA = 1;
  }
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AssetData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__195_1__,
    (const MethodInfo_26A0868 *)Method_System_Action_AssetData___ctor__);
  ServantStatusDialog__StartTransformedStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void __fastcall ServantStatusDialog___LoadTransformedResource_b__195_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  ServantStatusDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_43896BB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_43896BB = 1;
  }
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0LL);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__225_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  int32_t tabKind; // w20
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  PartyOrganizationUtility_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_43896BC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43896BC = 1;
  }
  tabKind = this->fields.tabKind;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetAutoResumeByQuestId(tabKind, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18056328(Instance, v5, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v6 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v6
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v6, 0LL),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B7769C(v6, v7);
  }
  v6->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v7);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__192_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__192_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___UpdateProfileList_b__235_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  ServantCommentMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w22
  System_Int32_array *v14; // x23
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_43896BD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43896BD = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo
    && System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mainInfo,
         (WarBoardManager_TaskList_o *)entity,
         (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.mainInfo;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        Master_WarQuestSelectionMaster,
        (WarBoardManager_TaskList_o *)entity,
        (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v8 = *(_QWORD *)&this->fields.isModify;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 128);
        if ( v9 )
        {
          v10 = (ServantCommentMaster_o *)Master_WarQuestSelectionMaster;
          v12 = *(_QWORD *)(v9 + 16);
          v11 = *(_QWORD *)(v9 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v17.fields.currentCryptoKey = v12;
          *(_QWORD *)&v17.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL);
          Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B775DC(int___TypeInfo, 1LL);
          if ( entity )
          {
            v14 = (System_Int32_array *)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              if ( !Master_WarQuestSelectionMaster->fields._size )
                goto LABEL_23;
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.id;
              Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B775DC(int___TypeInfo, 1LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_22;
              if ( !Master_WarQuestSelectionMaster->fields._size )
              {
LABEL_23:
                v16 = sub_B776C8(Master_WarQuestSelectionMaster);
                sub_B77668(v16, 0LL);
              }
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.priority;
              if ( v10 )
              {
                ServantCommentMaster__SetOpen_27848412(
                  v10,
                  v13,
                  v14,
                  (System_Int32_array *)Master_WarQuestSelectionMaster,
                  0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isModify;
  if ( (byte_4388E4E & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4388E4E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantStatusDialog_EndDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantStatusDialog_EndDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantStatusDialog_EndDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantStatusDialog_EndDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isModify);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isModify, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isModify, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isModify, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isModify,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isModify, v20);
    goto LABEL_37;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndIndividualityDelegate___ctor(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  char v12[4]; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = isModify;
  v12[0] = isNeedSort;
  if ( (byte_4388E4F & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4388E4F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, isNeedSort);
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndIndividualityDelegate__Invoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantStatusDialog_EndIndividualityDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, bool, _QWORD); // x0
  ServantStatusDialog_EndIndividualityDelegate_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, bool, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusDialog_EndIndividualityDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantStatusDialog_EndIndividualityDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, isModify);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(isModify, isNeedSort, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_B0F4C0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, isModify, isNeedSort, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))v16)(v21, isModify, isNeedSort, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isModify,
            isNeedSort,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, bool, __int64))v23)(v21, isModify, isNeedSort, v22);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_FormationEndDelegate___ctor(
        ServantStatusDialog_FormationEndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = isModify;
  v12 = questId;
  if ( (byte_4388E50 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_4388E50 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, *(_QWORD *)&questId);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_FormationEndDelegate__Invoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantStatusDialog_FormationEndDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_FormationEndDelegate_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusDialog_FormationEndDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantStatusDialog_FormationEndDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, isModify);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(isModify, (unsigned int)questId, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_B0F4C0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, isModify, (unsigned int)questId, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B0F4C0(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v16)(
            v21,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v23)(v21, isModify, (unsigned int)questId, v22);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_ResultDelegate___ctor(
        ServantStatusDialog_ResultDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusDialog_ResultDelegate__BeginInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  char v15[4]; // [xsp+28h] [xbp-28h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v16[0] = isModify;
  v15[0] = isNeedSort;
  v14 = questId;
  if ( (byte_4388E51 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_4388E51 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, isNeedSort);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B77568(this, v13, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_ResultDelegate__Invoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  ServantStatusDialog_ResultDelegate_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, bool, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_ResultDelegate_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(bool, bool, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantStatusDialog_ResultDelegate_o *v33; // [xsp+8h] [xbp-58h] BYREF

  v33 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v33;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (ServantStatusDialog_ResultDelegate_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v22 = v11[v12];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(bool, bool, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v22->fields.extra_arg, isModify);
      if ( (sub_B775F4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25(isModify, isNeedSort, (unsigned int)questId, v24);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B775EC(v24);
      v27 = sub_B779F0(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v28 = *v23;
          v29 = *(_QWORD *)(v24 + 24);
          v30 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_B0F4C0(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))sub_B77674(v19, v24);
        (*v21)(v23, isModify, isNeedSort, (unsigned int)questId, v21);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v15 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v13) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_B0F4C0(v23, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))v18)(
            v23,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))(*v23
                                                                        + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                        + 312))(
            v23,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, bool, _QWORD, __int64))v25)(
      v23,
      isModify,
      isNeedSort,
      (unsigned int)questId,
      v24);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__196___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__196__MoveNext(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4388E4D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4388E4D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      sub_B7769C(0LL, method);
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__196__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__196__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__196_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__196__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusDialog__CoWaitForEndOfFrame_d__196__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__196_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusDialog___c__DisplayClass138_0___ctor(
        ServantStatusDialog___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass138_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass138_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x0

  if ( (byte_4388E47 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData__Invoke__);
    byte_4388E47 = 1;
  }
  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_B7769C(0LL, data);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)onComplete,
    (System_Uri_o *)data,
    (const MethodInfo_26A087C *)Method_System_Action_AssetData__Invoke__);
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___ctor(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass140_0___StartTransformedStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x0

  if ( (byte_4388E48 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AssetData__Invoke__);
    byte_4388E48 = 1;
  }
  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_B7769C(0LL, data);
  System_Action_Uri___Invoke(
    (System_Action_Uri__o *)onComplete,
    (System_Uri_o *)data,
    (const MethodInfo_26A087C *)Method_System_Action_AssetData__Invoke__);
}


void __fastcall ServantStatusDialog___c__DisplayClass218_0___ctor(
        ServantStatusDialog___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass218_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass218_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass218_0_o *v4; // x19
  __int64 v5; // x19
  __int64 v6; // x19
  __int64 v7; // x20
  __int64 v8; // x20
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v4 = this;
  if ( (byte_4388E49 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    this = (ServantStatusDialog___c__DisplayClass218_0_o *)sub_B775C4(&Method_ServantStatusDialog___c__DisplayClass218_0__OnClickTdSpeed_b__1__);
    byte_4388E49 = 1;
  }
  if ( isDecide )
  {
    this = (ServantStatusDialog___c__DisplayClass218_0_o *)v4->fields.__4__this;
    if ( this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed((ServantStatusDialog_o *)this, v4->fields.type, 0LL);
      v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
        sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v6 = **(_QWORD **)(v5 + 192);
      if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
        sub_B0F2C4(v6);
      this = **(ServantStatusDialog___c__DisplayClass218_0_o ***)(v6 + 184);
      if ( this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B7769C(this, isDecide);
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass218_0_o *)sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__
                                                                      + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass218_0_o *)sub_B0F2C4(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog___c__DisplayClass218_0__OnClickTdSpeed_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v9 )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_18056328(v9, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass218_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass218_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass218_0_o *v2; // x19
  struct ServantStatusDialog_o *_4__this; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v5; // x21
  __int64 v6; // x9
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_4388E4A & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass218_0_o *)sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4388E4A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (profileTabListViewManager = (ServantStatusListViewManager_o *)_4__this->fields.profileTabListViewManager,
        v5 = sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        v6 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v5 + 40) = Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v5 + 16) = v6,
        *(_QWORD *)(v5 + 32) = _4__this,
        sub_B77560(
          (BattleServantConfConponent_o *)(v5 + 32),
          (System_Int32_array **)_4__this,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !profileTabListViewManager) )
  {
    sub_B7769C(this, method);
  }
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v5,
    0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass222_0___ctor(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  CommonUI_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *_4__this; // x8
  struct ServantStatusDialog_o *v9; // x8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v11; // x8
  struct ServantStatusDialog_o *v12; // x8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4388E4B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4388E4B = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  servantStatusBattleConfirmDialog = **(CommonUI_o ***)(v6 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_18056328(servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      servantStatusBattleConfirmDialog = *(CommonUI_o **)&_4__this->fields.isModify;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(
          (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
          this->fields.index,
          0LL);
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          servantStatusBattleConfirmDialog = *(CommonUI_o **)&v9->fields.isModify;
          if ( servantStatusBattleConfirmDialog )
          {
            isRandomOn = this->fields.isRandomOn;
            if ( !this->fields.isOwnSetting )
            {
              BYTE2(servantStatusBattleConfirmDialog->fields.servantEquipFramePurchaseMenuPrefab) = isRandomOn;
              goto LABEL_20;
            }
            ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
              (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
              isRandomOn,
              0LL);
            v11 = this->fields.__4__this;
            if ( v11 )
            {
              servantStatusBattleConfirmDialog = (CommonUI_o *)v11->fields.servantStatusBattleConfirmDialog;
              if ( servantStatusBattleConfirmDialog )
              {
                ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
                  (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                  *(ServantStatusListViewItem_o **)&v11->fields.isModify,
                  0LL);
                v12 = this->fields.__4__this;
                if ( v12 )
                {
                  servantStatusBattleConfirmDialog = (CommonUI_o *)v12->fields.servantStatusBattleConfirmDialog;
                  if ( servantStatusBattleConfirmDialog )
                  {
                    ServantStatusCharaGraphListViewManager__SetEnableScroll(
                      (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                      *(ServantStatusListViewItem_o **)&v12->fields.isModify,
                      0LL);
                    goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7769C(servantStatusBattleConfirmDialog, isDecide);
  }
LABEL_20:
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  servantStatusBattleConfirmDialog = (CommonUI_o *)v13->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode_33001440(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v14->fields.profileTabListViewManager;
  v16 = sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v16 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v14, v18, v19, v20, v21, v22, v23);
  if ( !profileTabListViewManager )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v16,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x21
  CommonUI_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *_4__this; // x8
  struct ServantStatusDialog_o *v9; // x8
  _BOOL4 isRandomOn; // w8
  struct ServantStatusDialog_o *v11; // x8
  struct ServantStatusDialog_o *v12; // x8
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4388E4C & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4388E4C = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  servantStatusBattleConfirmDialog = **(CommonUI_o ***)(v6 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  CommonUI__CloseConfirmDialog_18056328(servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      servantStatusBattleConfirmDialog = *(CommonUI_o **)&_4__this->fields.isModify;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewItem__SetRandomSettingByIndex(
          (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
          this->fields.index,
          0LL);
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          servantStatusBattleConfirmDialog = *(CommonUI_o **)&v9->fields.isModify;
          if ( servantStatusBattleConfirmDialog )
          {
            isRandomOn = this->fields.isRandomOn;
            if ( !this->fields.isOwnSetting )
            {
              BYTE2(servantStatusBattleConfirmDialog->fields.servantEquipFramePurchaseMenuPrefab) = isRandomOn;
              goto LABEL_20;
            }
            ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
              (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
              isRandomOn,
              0LL);
            v11 = this->fields.__4__this;
            if ( v11 )
            {
              servantStatusBattleConfirmDialog = (CommonUI_o *)v11->fields.servantStatusBattleConfirmDialog;
              if ( servantStatusBattleConfirmDialog )
              {
                ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
                  (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                  *(ServantStatusListViewItem_o **)&v11->fields.isModify,
                  0LL);
                v12 = this->fields.__4__this;
                if ( v12 )
                {
                  servantStatusBattleConfirmDialog = (CommonUI_o *)v12->fields.servantStatusBattleConfirmDialog;
                  if ( servantStatusBattleConfirmDialog )
                  {
                    ServantStatusCharaGraphListViewManager__SetEnableScroll(
                      (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                      *(ServantStatusListViewItem_o **)&v12->fields.isModify,
                      0LL);
                    goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7769C(servantStatusBattleConfirmDialog, isDecide);
  }
LABEL_20:
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  servantStatusBattleConfirmDialog = (CommonUI_o *)v13->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode_33001440(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v14->fields.profileTabListViewManager;
  v16 = sub_B77694(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v16 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B77560((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v14, v18, v19, v20, v21, v22, v23);
  if ( !profileTabListViewManager )
    goto LABEL_25;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v16,
    0LL);
}