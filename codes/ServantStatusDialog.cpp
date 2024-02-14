void __fastcall ServantStatusDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4212E6F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_357/*"#4C4C4C"*/, v8);
    byte_4212E6F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantStatusDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_357/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_357/*"#4C4C4C"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
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

  if ( (byte_4212E6E & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_23268/*"wait"*/, v5);
    byte_4212E6E = 1;
  }
  LODWORD(this->fields.titleInfo) = 1083283866;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.y = 0xBFC666663F59999ALL;
  v6 = (struct System_Int32_array *)sub_B0D8BC(bool___TypeInfo, 4LL);
  this->fields.profileNewIdList = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.profileNewIdList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceDataList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voicePlayer = (struct SePlayer_o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voicePlayer,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_23268/*"wait"*/;
  *(_QWORD *)&this->fields.confirmDispLv = StringLiteral_23268/*"wait"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.confirmDispLv, v31, v32, v33, v34, v35, v36, v37);
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
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4212E20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4212E20 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.isBattlePlay = StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v10, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v12);
}


void __fastcall ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UICamera_c *v9; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_GameObject_o *v14; // x19
  Il2CppObject *v15; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v17; // x19
  Il2CppObject *v18; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  struct UICamera_StaticFields *static_fields; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UICamera_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UICamera_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  char v44[4]; // [xsp+4h] [xbp-3Ch] BYREF
  char v45[4]; // [xsp+8h] [xbp-38h] BYREF
  char v46[4]; // [xsp+Ch] [xbp-34h] BYREF
  char v47[4]; // [xsp+18h] [xbp-28h] BYREF
  char v48[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4212E1B & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&TouchEffectManager_TypeInfo, v3);
    sub_B0D8A4(&UICamera_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_10014/*"OnDragEnd"*/, v5);
    sub_B0D8A4(&StringLiteral_10034/*"OnHover"*/, v6);
    sub_B0D8A4(&StringLiteral_10064/*"OnPress"*/, v7);
    sub_B0D8A4(&StringLiteral_10073/*"OnScrollStop"*/, v8);
    byte_4212E1B = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  currentTouch = v9->static_fields->currentTouch;
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
      v12 = currentTouch->fields.last;
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v12, (System_String_o *)StringLiteral_10014/*"OnDragEnd"*/, 0LL, 0LL);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dragged, 0LL, 0LL) )
    {
      v14 = currentTouch->fields.dragged;
      v48[0] = 0;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v48);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v14, (System_String_o *)StringLiteral_10064/*"OnPress"*/, v15, 0LL);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(current, 0LL, 0LL) )
    {
      v17 = currentTouch->fields.current;
      v47[0] = 1;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v47);
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v17, (System_String_o *)StringLiteral_10034/*"OnHover"*/, v18, 0LL);
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
    v46[0] = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v46);
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10064/*"OnPress"*/, v20, 0LL);
    v45[0] = 1;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10034/*"OnHover"*/, v21, 0LL);
    v44[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10073/*"OnScrollStop"*/, v22, 0LL);
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->current, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = UICamera_TypeInfo->static_fields;
  v30->currentCamera = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v30->currentCamera, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->currentTouch = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v37->currentTouch, 0LL, v38, v39, v40, v41, v42, v43);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void __fastcall ServantStatusDialog__ChangeBattleActorSelectIndex(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v11; // x1
  __int64 DispLimitCount; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x8
  ServantStatusBattleListViewItem_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t index; // w1
  ServantStatusBattleListViewManager_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4212E38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_4212E38 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager
    || (voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                            voiceTabListViewManager,
                                                                            method)) == 0LL )
  {
    sub_B0D97C(voiceTabListViewManager);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceTabListViewManager,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v20,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B0D97C(v7);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v20.fields.current, v8);
    if ( !Item )
      sub_B0D97C(0LL);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v11);
    v14 = *(_QWORD *)&this->fields.isModify;
    if ( !v14 )
      sub_B0D97C(DispLimitCount);
    if ( (_DWORD)DispLimitCount == *(_DWORD *)(v14 + 240) )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v13);
      if ( !v15 )
        sub_B0D97C(0LL);
      index = v15->fields.index;
      v18 = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
      this->fields.currentMaskType = index;
      if ( !v18 )
        sub_B0D97C(0LL);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v18, index, v16);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusListViewItem_o *svtId; // x0
  struct System_Int32_array *dispSelectList; // x21
  __int64 currentMaskType; // x8
  int32_t v11; // w20
  int32_t v12; // w21
  const MethodInfo *v13; // x2
  bool v14; // w22
  __int64 i; // x23
  SkillInfo_o *v16; // x0
  SkillInfo_o *v17; // x1
  unsigned __int64 v18; // x25
  bool v19; // w22
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct UnityEngine_Camera_o *battleChrCamera; // x24
  TreasureDvcInfo_o *v23; // x25
  TreasureDvcInfo_o *v24; // x26
  SkillInfo_array *v25; // x21
  SkillInfo_array *v26; // x23
  int32_t nextLimitCount; // w28
  __int64 v28; // x1
  __int64 v29; // x2
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v30; // x27
  __int64 v31; // x0
  const MethodInfo *v32; // [xsp+18h] [xbp-88h]
  char isSkillModify; // [xsp+2Ch] [xbp-74h]
  SkillInfo_array *v34; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-68h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4212E28 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_B0D8A4(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_4212E28 = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v34 = 0LL;
  skillInfoList = 0LL;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  this->fields.currentMaskType = dispLv;
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
    v31 = sub_B0D9A8(svtId);
    sub_B0D948(v31, 0LL);
  }
  v11 = (int)svtId;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  v12 = dispSelectList->m_Items[currentMaskType + 1];
  ServantStatusListViewItem__GetNpInfo_33502736(svtId, &tdInfo, v11, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetNpInfo_33502736(svtId, &info, v12, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_33501876(svtId, &skillInfoList, v11, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_33501876(svtId, &v34, v12, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_38;
  v14 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v18 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v18 >= svtId->fields.commandCodeCommentEntity->fields.illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v18 >= skillInfoList->max_length )
      goto LABEL_39;
    if ( !v34 )
      goto LABEL_38;
    if ( v18 >= v34->max_length )
      goto LABEL_39;
    v16 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    v17 = (SkillInfo_o *)*((_QWORD *)&v34->obj.klass + i);
    if ( !v16 )
    {
      if ( !v17 )
        continue;
      v16 = (SkillInfo_o *)*((_QWORD *)&v34->obj.klass + i);
      v17 = 0LL;
    }
    if ( !SkillInfo__Equals(v16, v17, 0LL) )
    {
      isSkillModify = 1;
LABEL_31:
      v19 = !v14;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v11, 0LL);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v12, 0LL);
      battleChrCamera = this->fields.battleChrCamera;
      v24 = info;
      v23 = tdInfo;
      v26 = v34;
      v25 = skillInfoList;
      nextLimitCount = LimitCountByImageLimitCostumeIn;
      v30 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                  ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v28,
                                                                  v29);
      ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        v30,
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
            v23,
            v24,
            v19,
            v25,
            v26,
            isSkillModify,
            v30,
            (int32_t)svtId,
            nowLimitCount,
            nextLimitCount,
            v32);
          return;
        }
      }
LABEL_38:
      sub_B0D97C(svtId);
    }
  }
  if ( !v14 )
  {
    isSkillModify = 0;
    goto LABEL_31;
  }
  ServantStatusDialog__SetChangeBattleResource(this, 0, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_4212E52 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4212E52 = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 320) = type, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)this, 4, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B0D97C(this);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 v12; // x8
  int32_t v13; // w20
  int32_t v14; // w21
  System_String_o **p_loadVoiceData; // x20
  System_Int32_array **v16; // x21
  System_String_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *loadVoiceData; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  ServantStatusListViewManager_CallbackFunc_o *v37; // x21

  v4 = this;
  if ( (byte_4212E50 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&dispLv);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCardLoad__, v8);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v9);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4212E50 = 1;
  }
  v11 = *(_QWORD *)&v4->fields.isModify;
  if ( !v11 )
    goto LABEL_25;
  *(_DWORD *)(v11 + 256) = dispLv;
  this = *(ServantStatusDialog_o **)&v4->fields.isModify;
  if ( !this )
    goto LABEL_25;
  this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)this, 0LL);
  v12 = *(_QWORD *)&v4->fields.isModify;
  if ( !v12 )
    goto LABEL_25;
  v13 = (int)this;
  v14 = *(_DWORD *)(v12 + 256);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (ServantStatusDialog_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(v13, v14, 0LL);
  if ( !this )
    goto LABEL_25;
  p_loadVoiceData = &v4->fields.loadVoiceData;
  v16 = (System_Int32_array **)this;
  if ( System_String__Equals_43837244((System_String_o *)this, v4->fields.loadVoiceData, 0LL) )
  {
LABEL_22:
    this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager;
    if ( this )
    {
      ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)this, 4, 0LL);
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v37 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v35,
                                                             v36);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v37, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B0D97C(this);
  }
  if ( !System_String__IsNullOrEmpty(*p_loadVoiceData, 0LL) )
  {
    v17 = *p_loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v17, 0LL);
  }
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0LL);
  v4->fields.loadVoiceData = (struct System_String_o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.loadVoiceData, v16, v18, v19, v20, v21, v22, v23);
  loadVoiceData = v4->fields.loadVoiceData;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCardLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v27, 1, 0LL) )
  {
    v4->fields.loadVoiceData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v4->fields.loadVoiceData, 0LL, v28, v29, v30, v31, v32, v33);
    goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_4212E56 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4212E56 = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 280) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)this, 5, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B0D97C(this);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_4212E59 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4212E59 = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 296) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)this, 7, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B0D97C(this);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4212E51 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4212E51 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          type,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32074888(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v7 = this->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v7) )
  {
    sub_B0D97C(profileTabListViewManager);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v7, 1, v10, 0LL);
}


void __fastcall ServantStatusDialog__Close(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ServantStatusListViewManager_o *profileTabListViewManager; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *cardLoadAsset; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *loadVoiceData; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  System_String_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *changeSvtVoiceIdList; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212E36 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_4212E36 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusListViewManager__DestroyList(profileTabListViewManager, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.battleTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)profileTabListViewManager,
    0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)profileTabListViewManager,
    v14);
  *(_QWORD *)&this->fields.isModify = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isModify, 0LL, v15, v16, v17, v18, v19, v20);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v22, v23, v24, v25, v26, v27);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v29, v30, v31, v32, v33, v34);
  }
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    v36 = *(System_String_o **)&this->fields.isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v36, 0LL);
    *(_QWORD *)&this->fields.isBattlePlay = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.isBattlePlay, 0LL, v37, v38, v39, v40, v41, v42);
  }
  ServantStatusDialog__StopVoice(this, v35);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  if ( changeSvtVoiceIdList )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(changeSvtVoiceIdList, 0LL);
    this->fields.changeSvtVoiceIdList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v44, v45, v46, v47, v48, v49);
  }
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  if ( SLODWORD(profileTabListViewManager->fields.scrollView) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v51,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)profileTabListViewManager,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v51.fields.current;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
    if ( profileTabListViewManager )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
      goto LABEL_37;
    }
LABEL_42:
    sub_B0D97C(profileTabListViewManager);
  }
LABEL_37:
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusTabBase;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabListViewManager, 0, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !profileTabListViewManager )
    goto LABEL_42;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)profileTabListViewManager, 2, 0, 0LL);
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


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
  ServantStatusBattleConfirmDialog__Close_21329412(battleChrCamera, 0LL, method);
  if ( isDecide )
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( profileNewIdList )
    {
      if ( !profileNewIdList->max_length )
      {
        v8 = sub_B0D9A8(battleChrCamera);
        sub_B0D948(v8, 0LL);
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
    sub_B0D97C(battleChrCamera);
  }
}


void __fastcall ServantStatusDialog__EndCardLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4212E53 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4212E53 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        profileTabListViewManager = this->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
LABEL_8:
    sub_B0D97C(Instance);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v10, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItem_o *Instance; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  ServantLimitImageMaster_o *v9; // x21
  ServantStatusListViewItem_o *v10; // x8
  BattleFBXComponent_o *v11; // x19
  int32_t v12; // w20

  if ( (byte_4212E2B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4212E2B = 1;
  }
  LOBYTE(this->fields.battleActor) = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  Instance = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !Instance )
    goto LABEL_13;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          Instance,
                                          0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify
    || (v9 = (ServantLimitImageMaster_o *)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL),
        !v9)
    || (Instance = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v9,
                                                    (int32_t)Instance,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (v10 = *(ServantStatusListViewItem_o **)&this->fields.isModify) == 0LL)
    || (v11 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading,
        v12 = (int)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(v10, 0LL),
        !v11) )
  {
LABEL_13:
    sub_B0D97C(Instance);
  }
  BattleFBXComponent__SetEvolutionLevel(v11, (int32_t)Instance, v12, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212E41 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_4212E41 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B0D97C(v7);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v6, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212E3F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_4212E3F = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v6 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B0D97C(v7);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v6, 0LL);
}


void __fastcall ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_GameObject_o *statusTabBase; // x0
  __int64 v25; // x8
  int32_t v26; // w20
  int v27; // w8
  __int64 v28; // x8
  int32_t v29; // w20
  __int64 v30; // x8
  int v31; // w8
  bool v32; // w8
  bool v33; // w8
  int v34; // w8
  int v35; // w8
  bool v36; // zf
  unsigned __int64 v37; // x8
  struct System_Int32_array *profileNewIdList; // x9
  char *v39; // x9
  bool v40; // cf
  __int64 v41; // x8
  ServantCommentMaster_o *v42; // x21
  struct ServantStatusListViewItem_o *NewProfileEntities; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v51; // x1
  __int64 v52; // x8
  CommandCodeEntity_o *v53; // x0
  UIRangeLabel_o *v54; // x21
  UnityEngine_Object_o *v55; // x21
  const MethodInfo *v56; // x2
  UILabel_o *v57; // x21
  __int64 *v58; // x8
  System_String_o *v59; // x1
  UILabel_o *v60; // x0
  ServantLimitAddMaster_o *v61; // x21
  int v62; // w8
  char v63; // w21
  System_String_o *Name; // x22
  __int64 v65; // x8
  __int64 v66; // x8
  __int64 v67; // x8
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v70; // x22
  __int64 v71; // x8
  int32_t v72; // w2
  int32_t v73; // w1
  _QWORD *v74; // x9
  __int64 v75; // x0
  int32_t v76; // w21
  int32_t v77; // w21
  ServantLimitImageMaster_o *v78; // x22
  __int64 v79; // x8
  int32_t v80; // w2
  __int64 v81; // x8
  struct UILabel_o *servantClassNameLabel; // x22
  int32_t v83; // w1
  int32_t v84; // w2
  __int64 v85; // x9
  System_String_o *v86; // x1
  ServantLimitImageMaster_o *v87; // x21
  __int64 v88; // x8
  __int64 v89; // x8
  struct UILabel_o *v90; // x21
  UnityEngine_GameObject_o *v91; // x22
  __int64 v92; // x23
  __int64 v93; // x24
  int32_t v94; // w1
  UnityEngine_Object_o *battleExplanationLabel; // x21
  __int64 v96; // x8
  UILabel_o *v97; // x21
  __int64 v98; // x8
  UnityEngine_Object_o *markBase; // x21
  __int64 v100; // x8
  ServantLimitImageMaster_o *v101; // x21
  struct UnityEngine_GameObject_o *v102; // x22
  __int64 v103; // x8
  __int64 v104; // x8
  __int64 v105; // x22
  __int64 v106; // x23
  int32_t v107; // w22
  struct UnityEngine_GameObject_o *v108; // x23
  System_String_o *klass; // x25
  System_String_o *v110; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v112; // x0
  const MethodInfo *v113; // x1
  const MethodInfo *v114; // x2
  int v115; // w8
  unsigned int v116; // w8
  const MethodInfo *v117; // x1
  unsigned int v118; // w8
  __int64 v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_4212E19 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&OptionManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_11992/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_B0D8A4(&StringLiteral_11991/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v16);
    sub_B0D8A4(&StringLiteral_11993/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v17);
    sub_B0D8A4(&StringLiteral_11994/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v18);
    sub_B0D8A4(&StringLiteral_11999/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v19);
    sub_B0D8A4(&StringLiteral_11998/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v20);
    sub_B0D8A4(&StringLiteral_3574/*"CancelInput"*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    sub_B0D8A4(&StringLiteral_5979/*"EndLoadInit"*/, v23);
    byte_4212E19 = 1;
  }
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_219;
  UnityEngine_GameObject__SetActive(statusTabBase, 1, 0LL);
  v25 = *(_QWORD *)&this->fields.isModify;
  if ( !v25 )
    goto LABEL_219;
  if ( *(_QWORD *)(v25 + 176) )
  {
    switch ( *(_DWORD *)&this->fields.isInitTab )
    {
      case 3:
      case 0x15:
        v26 = 0;
        v27 = 21;
        break;
      case 4:
      case 0x16:
        v26 = 0;
        v27 = 22;
        break;
      case 5:
      case 0x17:
        v26 = 0;
        v27 = 23;
        break;
      case 6:
      case 0x18:
        v26 = 0;
        v27 = 24;
        break;
      case 7:
      case 0x19:
        v26 = 0;
        v27 = 25;
        break;
      case 8:
      case 0x1A:
        v26 = 0;
        v27 = 26;
        break;
      case 9:
      case 0x1B:
        v26 = 0;
        v27 = 27;
        break;
      case 0x1D:
      case 0x20:
        v26 = 0;
        v27 = 32;
        break;
      default:
        v26 = 0;
        v27 = 20;
        break;
    }
    goto LABEL_52;
  }
  v28 = *(_QWORD *)(v25 + 128);
  if ( !v28 )
    goto LABEL_219;
  v29 = *(_DWORD *)(v28 + 84);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  statusTabBase = (UnityEngine_GameObject_o *)TutorialFlag__Get_28088484(106, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
    goto LABEL_17;
  v30 = *(_QWORD *)&this->fields.isModify;
  if ( !v30 )
    goto LABEL_219;
  if ( *(__int64 *)(v30 + 160) >= 1
    && SvtType__IsOrganization(v29, 0LL)
    && (v31 = *(_DWORD *)&this->fields.isInitTab, v31 != 3) )
  {
    v32 = v31 != 12;
  }
  else
  {
LABEL_17:
    v32 = 0;
  }
  LOBYTE(this->fields.newProfileList) = v32;
  v33 = SvtType__IsOrganization(v29, 0LL) && *(_DWORD *)&this->fields.isInitTab != 12;
  BYTE1(this->fields.newProfileList) = v33;
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(v29, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v26 = 0;
    v27 = 28;
LABEL_52:
    *(_DWORD *)&this->fields.isInitTab = v27;
    goto LABEL_53;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(v29, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) != 0 )
  {
    v34 = *(_DWORD *)&this->fields.isInitTab;
    switch ( v34 )
    {
      case 3:
      case 12:
        v26 = 0;
        v27 = 12;
        break;
      case 4:
      case 13:
        v26 = 0;
        v27 = 13;
        break;
      case 5:
      case 14:
        v26 = 0;
        v27 = 14;
        break;
      case 6:
      case 15:
        v26 = 0;
        v27 = 15;
        break;
      case 7:
      case 16:
        v26 = 0;
        v27 = 16;
        break;
      case 8:
      case 17:
        v26 = 0;
        v27 = 17;
        break;
      case 9:
      case 18:
        v26 = 0;
        v27 = 18;
        break;
      case 19:
        v26 = 0;
        v27 = 19;
        break;
      case 29:
      case 31:
        v26 = 0;
        v27 = 31;
        break;
      default:
        v36 = v34 == 33;
        v27 = 11;
        v26 = v36;
        break;
    }
    goto LABEL_52;
  }
  statusTabBase = (UnityEngine_GameObject_o *)SvtType__IsServant(v29, 0LL);
  if ( ((unsigned __int8)statusTabBase & 1) == 0 )
  {
    v35 = *(_DWORD *)&this->fields.isInitTab;
    if ( v35 != 36 )
    {
      v26 = 0;
      if ( v35 == 29 )
        v27 = 30;
      else
        v27 = 10;
      goto LABEL_52;
    }
  }
  v26 = 0;
LABEL_53:
  v37 = 0LL;
  do
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_219;
    if ( v37 >= profileNewIdList->max_length )
    {
      v119 = sub_B0D9A8(statusTabBase);
      sub_B0D948(v119, 0LL);
    }
    v39 = (char *)profileNewIdList + v37;
    v40 = v37++ >= 3;
    v39[32] = 0;
  }
  while ( !v40 );
  v41 = *(_QWORD *)&this->fields.isModify;
  if ( !v41 )
    goto LABEL_219;
  if ( *(_QWORD *)(v41 + 80) )
  {
    statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !statusTabBase )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)statusTabBase,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v42 = (ServantCommentMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v42 )
      goto LABEL_219;
    NewProfileEntities = (struct ServantStatusListViewItem_o *)ServantCommentMaster__GetNewProfileEntities(
                                                                 v42,
                                                                 (int32_t)statusTabBase,
                                                                 0LL);
    this->fields.mainInfo = NewProfileEntities;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mainInfo,
      (System_Int32_array **)NewProfileEntities,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_219;
    ShiningIconComponent__Set_32504684(
      (ShiningIconComponent_o *)statusTabBase,
      SLODWORD(mainInfo->fields.partyItem) > 0,
      0LL);
  }
  else
  {
    statusTabBase = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !statusTabBase )
      goto LABEL_219;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)statusTabBase, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v51);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_219;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)statusTabBase, 0LL, 1, 0LL, 0, 0LL);
  statusTabBase = this->fields.baseObject;
  if ( !statusTabBase )
    goto LABEL_219;
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)statusTabBase, 1, 0, 0, 0LL);
  v52 = *(_QWORD *)&this->fields.isModify;
  if ( !v52 )
    goto LABEL_219;
  v53 = *(CommandCodeEntity_o **)(v52 + 176);
  if ( !v53 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v61 = (ServantLimitAddMaster_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                  *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                  0LL);
    if ( !v61 )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)ServantLimitAddMaster__IsOverwriteSvtDetailName(
                                                  v61,
                                                  (int32_t)statusTabBase,
                                                  0LL);
    v62 = *(_DWORD *)&this->fields.isInitTab;
    v63 = (char)statusTabBase;
    if ( (v62 & 0xFFFFFFFE) == 4 )
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
        v65 = *(_QWORD *)&this->fields.isModify;
        if ( !v65 )
          goto LABEL_219;
        v66 = *(_QWORD *)(v65 + 88);
        if ( !v66 )
          goto LABEL_219;
        Name = *(System_String_o **)(v66 + 248);
      }
      statusTabBase = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(Name, 0LL);
      if ( ((unsigned __int8)statusTabBase & 1) != 0 )
      {
        v67 = *(_QWORD *)&this->fields.isModify;
        if ( !v67 )
          goto LABEL_219;
        if ( (v63 & 1) != 0 )
        {
          statusTabBase = *(UnityEngine_GameObject_o **)(v67 + 88);
          if ( !statusTabBase )
            goto LABEL_219;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount((ServantLeaderInfo_o *)statusTabBase, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !statusTabBase )
            goto LABEL_219;
          statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)statusTabBase,
                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*(_QWORD *)&this->fields.isModify )
            goto LABEL_219;
          v70 = (ServantLimitImageMaster_o *)statusTabBase;
          statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                        *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                        0LL);
          if ( !v70 )
            goto LABEL_219;
          statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                        v70,
                                                        (int32_t)statusTabBase,
                                                        LimitCountByImageLimitCostumeIn,
                                                        0LL);
          v71 = *(_QWORD *)&this->fields.isModify;
          if ( !v71 )
            goto LABEL_219;
          v72 = (int)statusTabBase;
          statusTabBase = *(UnityEngine_GameObject_o **)(v71 + 128);
          if ( !statusTabBase )
            goto LABEL_219;
          v73 = -1;
        }
        else
        {
          v85 = *(_QWORD *)(v67 + 88);
          if ( !v85 )
            goto LABEL_219;
          statusTabBase = *(UnityEngine_GameObject_o **)(v67 + 128);
          if ( !statusTabBase )
            goto LABEL_219;
          v73 = *(_DWORD *)(v85 + 64);
          v72 = -1;
        }
        Name = ServantEntity__getName((ServantEntity_o *)statusTabBase, v73, v72, 0LL);
      }
      statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantClassNameLabel;
      if ( !statusTabBase )
        goto LABEL_219;
      v86 = Name;
      goto LABEL_157;
    }
    if ( (unsigned int)(v62 - 6) <= 2 )
    {
      v81 = *(_QWORD *)&this->fields.isModify;
      if ( !v81 )
        goto LABEL_219;
      statusTabBase = *(UnityEngine_GameObject_o **)(v81 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
      servantClassNameLabel = this->fields.servantClassNameLabel;
      if ( (v63 & 1) != 0 )
      {
        v83 = -1;
        v84 = 0;
      }
      else
      {
        v84 = -1;
        v83 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName(
                                                    (ServantEntity_o *)statusTabBase,
                                                    v83,
                                                    v84,
                                                    0LL);
      if ( !servantClassNameLabel )
        goto LABEL_219;
      v86 = (System_String_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)servantClassNameLabel;
      goto LABEL_157;
    }
    v74 = *(_QWORD **)&this->fields.isModify;
    if ( !v74 )
      goto LABEL_219;
    v75 = v74[7];
    if ( v75 )
    {
      if ( (v63 & 1) == 0 )
      {
        v90 = this->fields.servantClassNameLabel;
        v91 = (UnityEngine_GameObject_o *)v74[16];
        v93 = *(_QWORD *)(v75 + 96);
        v92 = *(_QWORD *)(v75 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v120.fields.currentCryptoKey = v93;
        *(_QWORD *)&v120.fields.fakeValue = v92;
        statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                      v120,
                                                      0LL);
        if ( !v91 )
          goto LABEL_219;
        v94 = (int)statusTabBase;
        v80 = -1;
        statusTabBase = v91;
        goto LABEL_155;
      }
      v76 = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v75, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v77 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v76, 0LL);
      statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !statusTabBase )
        goto LABEL_219;
      statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)statusTabBase,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_219;
      v78 = (ServantLimitImageMaster_o *)statusTabBase;
      statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL);
      if ( !v78 )
        goto LABEL_219;
      statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v78,
                                                    (int32_t)statusTabBase,
                                                    v77,
                                                    0LL);
      v79 = *(_QWORD *)&this->fields.isModify;
      if ( !v79 )
        goto LABEL_219;
      v80 = (int)statusTabBase;
      statusTabBase = *(UnityEngine_GameObject_o **)(v79 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
    }
    else
    {
      if ( (v63 & 1) == 0 )
      {
        statusTabBase = (UnityEngine_GameObject_o *)v74[16];
        if ( !statusTabBase )
          goto LABEL_219;
        v90 = this->fields.servantClassNameLabel;
        v94 = -1;
        v80 = -1;
        goto LABEL_155;
      }
      if ( v74[10] )
      {
        statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !statusTabBase )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)statusTabBase,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*(_QWORD *)&this->fields.isModify )
          goto LABEL_219;
        v87 = (ServantLimitImageMaster_o *)statusTabBase;
        statusTabBase = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_SvtId(
                                                      *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                      0LL);
        v88 = *(_QWORD *)&this->fields.isModify;
        if ( !v88 )
          goto LABEL_219;
        v89 = *(_QWORD *)(v88 + 80);
        if ( !v89 )
          goto LABEL_219;
        if ( !v87 )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                      v87,
                                                      (int32_t)statusTabBase,
                                                      *(_DWORD *)(v89 + 56),
                                                      0LL);
        v74 = *(_QWORD **)&this->fields.isModify;
        if ( !v74 )
          goto LABEL_219;
        v80 = (int)statusTabBase;
      }
      else
      {
        v80 = 0;
      }
      statusTabBase = (UnityEngine_GameObject_o *)v74[16];
      if ( !statusTabBase )
        goto LABEL_219;
    }
    v90 = this->fields.servantClassNameLabel;
    v94 = -1;
LABEL_155:
    statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getName((ServantEntity_o *)statusTabBase, v94, v80, 0LL);
    if ( !v90 )
      goto LABEL_219;
    v86 = (System_String_o *)statusTabBase;
    statusTabBase = (UnityEngine_GameObject_o *)v90;
LABEL_157:
    UIRangeLabel__Set((UIRangeLabel_o *)statusTabBase, v86, 0LL, 1, 0, 0LL);
    battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL);
    if ( ((unsigned __int8)statusTabBase & 1) != 0 )
    {
      v96 = *(_QWORD *)&this->fields.isModify;
      if ( !v96 )
        goto LABEL_219;
      statusTabBase = *(UnityEngine_GameObject_o **)(v96 + 128);
      if ( !statusTabBase )
        goto LABEL_219;
      v97 = this->fields.battleExplanationLabel;
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
                                                      (System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/,
                                                      0LL);
      }
      else
      {
        v98 = *(_QWORD *)&this->fields.isModify;
        if ( !v98 )
          goto LABEL_219;
        statusTabBase = *(UnityEngine_GameObject_o **)(v98 + 128);
        if ( !statusTabBase )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)statusTabBase, 0LL);
      }
      if ( !v97 )
        goto LABEL_219;
      UILabel__set_text(v97, (System_String_o *)statusTabBase, 0LL);
    }
    markBase = (UnityEngine_Object_o *)this->fields.markBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(markBase, 0LL, 0LL) )
      goto LABEL_195;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v100 = *(_QWORD *)&this->fields.isModify;
    if ( v100 )
    {
      if ( !*(_QWORD *)(v100 + 56) )
      {
        v57 = (UILabel_o *)this->fields.markBase;
        if ( *(_QWORD *)(v100 + 80) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v58 = &StringLiteral_11992/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v58 = &StringLiteral_11993/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        }
        goto LABEL_81;
      }
      v101 = (ServantLimitImageMaster_o *)statusTabBase;
      v102 = this->fields.markBase;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
      if ( v102 )
      {
        UILabel__set_text((UILabel_o *)v102, (System_String_o *)statusTabBase, 0LL);
        v103 = *(_QWORD *)&this->fields.isModify;
        if ( v103 )
        {
          v104 = *(_QWORD *)(v103 + 56);
          if ( v104 )
          {
            v106 = *(_QWORD *)(v104 + 80);
            v105 = *(_QWORD *)(v104 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v121.fields.currentCryptoKey = v106;
            *(_QWORD *)&v121.fields.fakeValue = v105;
            statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                          v121,
                                                          0LL);
            if ( v101 )
            {
              v107 = (int)statusTabBase;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v101, (int32_t)statusTabBase, 3, 0LL) )
              {
                statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                              v101,
                                                              (System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                              v107,
                                                              0LL);
                v108 = this->fields.markBase;
                if ( !v108 )
                  goto LABEL_219;
                klass = (System_String_o *)v108[17].klass;
                v110 = (System_String_o *)statusTabBase;
                LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                v101,
                                                                v107,
                                                                3,
                                                                0LL);
                v112 = System_String__Format(v110, LimitCountSealedServantName, 0LL);
                v59 = System_String__Concat_43849904(klass, v112, 0LL);
                v60 = (UILabel_o *)v108;
                goto LABEL_83;
              }
              goto LABEL_195;
            }
          }
        }
      }
    }
LABEL_219:
    sub_B0D97C(statusTabBase);
  }
  v54 = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
  statusTabBase = (UnityEngine_GameObject_o *)CommandCodeEntity__GetName(v53, 0LL);
  if ( !v54 )
    goto LABEL_219;
  UIRangeLabel__Set(v54, (System_String_o *)statusTabBase, 0LL, 1, 0, 0LL);
  v55 = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    v57 = this->fields.battleExplanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = &StringLiteral_11998/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
LABEL_81:
    statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v58, 0LL);
    if ( !v57 )
      goto LABEL_219;
    v59 = (System_String_o *)statusTabBase;
    v60 = v57;
LABEL_83:
    UILabel__set_text(v60, v59, 0LL);
  }
LABEL_195:
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !statusTabBase )
    goto LABEL_219;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabBase,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v56);
  ServantStatusDialog__SetMark(this, v113);
  v115 = *(_DWORD *)&this->fields.isInitTab;
  if ( v115 > 28 )
  {
    v116 = v115 - 30;
    if ( v116 < 7 )
    {
      v26 = dword_3202450[v116];
      goto LABEL_204;
    }
LABEL_202:
    v26 = 0;
    goto LABEL_204;
  }
  if ( v115 == 10 )
  {
    v26 = 1;
    goto LABEL_204;
  }
  if ( v115 != 11 )
  {
    v26 = 1;
    if ( v115 != 28 )
      goto LABEL_202;
  }
LABEL_204:
  ServantStatusDialog__SetTabKind(this, v26, v114);
  v118 = *(_DWORD *)&this->fields.isInitTab;
  LOBYTE(this->fields.battleActor) = 0;
  if ( v118 - 10 < 0x13 || v118 <= 0x24 && ((1LL << v118) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5979/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v117);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3574/*"CancelInput"*/,
    0.0,
    0LL);
}


void __fastcall ServantStatusDialog__EndLoadBattle(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4212E23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4212E23 = 1;
  }
  LOBYTE(this->fields.defaultAnimationName) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_QWORD *)&this->fields.isBattlePlay )
    ServantStatusDialog__EndLoadBattle_21396500(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadBattle_21396500(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_4212E24 & 1) == 0 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    byte_4212E24 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4212D36 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    byte_4212D36 = 1;
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
      sub_B0D97C(v4);
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
  const MethodInfo *v5; // x1

  if ( (byte_4212E2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4212E2A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v7; // x0

  if ( (byte_4212E1C & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_13552/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v5);
    byte_4212E1C = 1;
  }
  if ( LOBYTE(this->fields.newProfileList) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(106, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13552/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
      if ( !Instance )
        sub_B0D97C(v7);
      CommonUI__OpenTutorialNotificationDialog(Instance, v7, 106, 0LL, 0LL);
    }
  }
  ServantStatusDialog__InitList(this, method);
}


void __fastcall ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *changeSvtVoiceIdList; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *voicePlayer; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  struct System_Int32_array *v25; // x1
  System_String_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x21

  if ( (byte_4212E2E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_EndLoadVoice__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    byte_4212E2E = 1;
  }
  changeSvtVoiceIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.changeSvtVoiceIdList;
  if ( changeSvtVoiceIdList )
  {
    voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voicePlayer;
    if ( voicePlayer )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        voicePlayer,
        changeSvtVoiceIdList,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      this->fields.changeSvtVoiceIdList = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v12, v13, v14, v15, v16, v17);
      voiceDataList = this->fields.voiceDataList;
      if ( voiceDataList )
      {
        if ( voiceDataList->fields._size < 1 )
        {
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( voicePlayer )
          {
            CommonUI__SetLoadMode((CommonUI_o *)voicePlayer, 0, 0LL);
            return;
          }
        }
        else
        {
          v25 = (struct System_Int32_array *)voiceDataList->fields._items->m_Items[0];
          this->fields.changeSvtVoiceIdList = v25;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
            (System_Int32_array **)v25,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.voiceDataList;
          if ( voicePlayer )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)voicePlayer,
              0,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            v26 = (System_String_o *)this->fields.changeSvtVoiceIdList;
            v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
            System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__loadAudioAssetStorage(v26, v29, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B0D97C(voicePlayer);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x8
  int v17; // w9
  int v18; // w10
  __int64 v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_4212E32 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6005/*"EndWaitVoice"*/, method);
    byte_4212E32 = 1;
  }
  this->fields.voicePlayList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = *(_QWORD *)&this->fields.voicePlayNum;
  if ( v16 )
  {
    v17 = LODWORD(this->fields.voicePlayAssetName) + 1;
    LODWORD(this->fields.voicePlayAssetName) = v17;
    v18 = *(_DWORD *)(v16 + 24);
    if ( v17 < v18 )
    {
      if ( v17 >= (unsigned int)v18 )
      {
        v26 = sub_B0D9A8(servantNameRangeLabel);
        sub_B0D948(v26, 0LL);
      }
      v19 = *(_QWORD *)(v16 + 8LL * v17 + 32);
      if ( v19 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6005/*"EndWaitVoice"*/,
          *(float *)(v19 + 24),
          0LL);
        return;
      }
LABEL_18:
      sub_B0D97C(servantNameRangeLabel);
    }
    if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_29922968(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(this->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v10, v11, v12, v13, v14, v15);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v20, v21, v22, v23, v24, v25);
  }
  else if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_29922968(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  CommonUI_o *profileTabListViewManager; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  float ScrillBarValue; // s0
  struct ServantStatusFlavorTextListViewManager_o *v13; // x8
  struct ServantStatusFlavorTextListViewManager_o *v14; // x20
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21

  if ( (byte_4212E4A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4212E4A = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  profileTabListViewManager = **(CommonUI_o ***)(v8 + 184);
  if ( !profileTabListViewManager )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(profileTabListViewManager, 0LL);
  if ( !isDecide )
    goto LABEL_13;
  ServantStatusDialog__SetTabKind(this, 0, v11);
  profileTabListViewManager = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager
    || (ScrillBarValue = ServantStatusListViewManager__GetScrillBarValue(
                           (ServantStatusListViewManager_o *)profileTabListViewManager,
                           19,
                           0LL),
        (v13 = this->fields.profileTabListViewManager) == 0LL)
    || (profileTabListViewManager = (CommonUI_o *)v13->fields.scrollBar) == 0LL )
  {
LABEL_15:
    sub_B0D97C(profileTabListViewManager);
  }
  UIProgressBar__set_value((UIProgressBar_o *)profileTabListViewManager, ScrillBarValue, 0LL);
LABEL_13:
  v14 = this->fields.profileTabListViewManager;
  v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v10,
                                                         v11);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v14 )
    goto LABEL_15;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v14, 1, v15, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *loadVoiceData; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssetData_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4212E1E & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, data);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&Method_ServantStatusDialog_EndStatusLoad2__, v5);
    byte_4212E1E = 1;
  }
  loadVoiceData = this->fields.loadVoiceData;
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, data, method);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad2__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v7, 1, 0LL) )
  {
    this->fields.loadVoiceData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v8, v9, v10, v11, v12, v13);
    ServantStatusDialog__EndStatusLoad2(this, v14, v15);
  }
}


void __fastcall ServantStatusDialog__EndStatusLoad2(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4212E1F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_5979/*"EndLoadInit"*/, v6);
    byte_4212E1F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab != 33 )
  {
    Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v11,
            0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5979/*"EndLoadInit"*/,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 voicePlayAssetName_low; // x9
  int v13; // w10
  __int64 v14; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  SoundManager_c *v17; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v19; // x22
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantConfConponent_o *p_voicePlayList; // x0
  __int64 v28; // x0

  v8 = this;
  if ( (byte_4212E31 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusDialog_EndPlayVoice__, v9);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_4212E31 = 1;
  }
  v11 = *(_QWORD *)&v8->fields.voicePlayNum;
  if ( v11 )
  {
    voicePlayAssetName_low = SLODWORD(v8->fields.voicePlayAssetName);
    v13 = *(_DWORD *)(v11 + 24);
    if ( (int)voicePlayAssetName_low < v13 )
    {
      if ( (unsigned int)voicePlayAssetName_low >= v13 )
      {
        v28 = sub_B0D9A8(this);
        sub_B0D948(v28, 0LL);
      }
      v14 = *(_QWORD *)(v11 + 8 * voicePlayAssetName_low + 32);
      if ( v14 )
      {
        v15 = *(System_String_o **)&v8->fields.voiceListIndex;
        v16 = *(System_String_o **)(v14 + 16);
        v17 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v17 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v17->static_fields->DEFAULT_VOLUME;
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
        System_Action___ctor(v19, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v20 = (System_Int32_array **)SoundManager__playVoice_24977528(v15, v16, DEFAULT_VOLUME, v19, 0LL);
        p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voicePlayList;
        v8->fields.voicePlayList = (struct ServantVoiceData_array *)v20;
        goto LABEL_17;
      }
LABEL_18:
      sub_B0D97C(this);
    }
    if ( LODWORD(v8->fields.tabInitList) == 3 && ((__int64)v8->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.servantNameRangeLabel;
      if ( !this )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_29922968((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      LODWORD(v8->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&v8->fields.voicePlayNum = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&v8->fields.voicePlayNum, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voiceListIndex;
    v20 = 0LL;
    LODWORD(v8->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&v8->fields.voiceListIndex = 0LL;
LABEL_17:
    sub_B0D840(p_voicePlayList, v20, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int128 v16; // q1
  ServantStatusDialog_o *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  __int128 v20; // q0
  ServantStatusDialog_o *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  ServantStatusDialog_o *v24; // x20
  __int64 v25; // x21
  __int64 v26; // x22
  __int64 v27; // x8
  ServantStatusDialog_o *v28; // x22
  int32_t v29; // w21
  int32_t DispLimitCount; // w0
  int32_t v31; // w20
  ServantStatusDialog_o *v32; // x23
  int32_t LimitCount; // w0
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  ServantStatusDialog_o *v37; // x22
  __int64 v38; // x8
  ServantStatusDialog_o *v39; // x23
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-60h]
  TreasureDvcInfo_o *v44; // [xsp+60h] [xbp-40h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v3 = this;
  if ( (byte_4212E47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4212E47 = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  tdInfo = 0LL;
  v13 = *(_QWORD *)&v3->fields.isModify;
  if ( !v13 )
    goto LABEL_62;
  if ( !*(_QWORD *)(v13 + 56) )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v14 = *(_QWORD *)&v3->fields.isModify;
  if ( !v14 )
    goto LABEL_62;
  v15 = *(_QWORD *)(v14 + 56);
  if ( !v15 )
    goto LABEL_62;
  v16 = *(_OWORD *)(v15 + 32);
  v17 = this;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v15 + 16);
  *(_OWORD *)&v43.fields.fakeValue = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v42 = v43;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v42, 0LL);
  if ( !v17 )
    goto LABEL_62;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v18 = *(_QWORD *)&v3->fields.isModify;
    if ( !v18 )
      goto LABEL_62;
    v19 = *(_QWORD *)(v18 + 56);
    if ( !v19 )
      goto LABEL_62;
    v20 = *(_OWORD *)(v19 + 32);
    v21 = this;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v19 + 16);
    *(_OWORD *)&v43.fields.fakeValue = v20;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v41 = v43;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v41, 0LL);
    if ( !v21 )
      goto LABEL_62;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&v3->fields.isModify;
  if ( !v22 )
    goto LABEL_62;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_62;
  v24 = this;
  v26 = *(_QWORD *)(v23 + 80);
  v25 = *(_QWORD *)(v23 + 88);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v26;
  *(_QWORD *)&v47.fields.fakeValue = v25;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
  if ( !v24 )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v27 = *(_QWORD *)&v3->fields.isModify;
  if ( !v27 )
    goto LABEL_62;
  v28 = this;
  this = *(ServantStatusDialog_o **)(v27 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)this, 0, 0LL);
  if ( !entity )
    goto LABEL_62;
  v29 = (int)this;
  DispLimitCount = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( v29 == DispLimitCount )
    goto LABEL_61;
  v31 = DispLimitCount;
  this = *(ServantStatusDialog_o **)&v3->fields.isModify;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0LL),
        !v28)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v28, (int32_t)this, v29, 0LL),
        !*(_QWORD *)&v3->fields.isModify)
    || (v32 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(
                       *(ServantStatusListViewItem_o **)&v3->fields.isModify,
                       0LL),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v28, LimitCount, v31, 0LL),
        !v32)
    || !this )
  {
LABEL_62:
    sub_B0D97C(this);
  }
  v34 = *(_QWORD *)&v32->fields.CHARA_BASE_POSITION.fields.y;
  if ( (_DWORD)v34 != LODWORD(this->fields.CHARA_BASE_POSITION.fields.y) )
    goto LABEL_47;
  if ( v34 && v32 != this && (int)v34 >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v35 >= (unsigned int)v34 )
      {
        v40 = sub_B0D9A8(this);
        sub_B0D948(v40, 0LL);
      }
      if ( *((_DWORD *)&v32->fields.titleInfo + v35) != *((_DWORD *)&this->fields.titleInfo + v35) )
        break;
      if ( (int)++v35 >= (int)v34 )
        goto LABEL_48;
    }
LABEL_47:
    BYTE5(v3->fields.statusLoadAsset) = 1;
  }
LABEL_48:
  if ( BYTE5(v3->fields.statusLoadAsset) )
    goto LABEL_61;
  v36 = *(_QWORD *)&v3->fields.isModify;
  if ( !v36 )
    goto LABEL_62;
  this = *(ServantStatusDialog_o **)(v36 + 56);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v29, -1, 1, 0LL);
  if ( !entity )
    goto LABEL_62;
  v37 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList(entity, v31, -1, 1, 0LL);
  v38 = *(_QWORD *)&v3->fields.isModify;
  if ( !v38 )
    goto LABEL_62;
  v39 = this;
  this = *(ServantStatusDialog_o **)(v38 + 56);
  if ( !this )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v29, 0, 0LL);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo(entity, &v44, -1, v31, 0, 0LL);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                    (const MethodInfo_1B53798 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    BYTE5(v3->fields.statusLoadAsset) = 1;
  if ( !tdInfo || !v44 )
    goto LABEL_62;
  if ( tdInfo->fields.id != v44->fields.id )
    BYTE5(v3->fields.statusLoadAsset) = 1;
LABEL_61:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void __fastcall ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleFBXComponent_o *v10; // x0
  struct System_Action_o *openCallbackFunc; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ServantStatusDialog_ResultDelegate_o *individualityCallbackFunc; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ServantStatusDialog_FormationEndDelegate_o *resultCallbackFunc; // x20
  ServantStatusDialog_EndDelegate_o *formationCallbackFunc; // x20

  if ( (byte_4212E48 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212E48 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v10 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v10 )
      sub_B0D97C(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v10, 0LL);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.openCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.individualityCallbackFunc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
      0LL,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.formationCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v18, v19, v20, v21, v22, v23);
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
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
      this->fields.formationCallbackFunc = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
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
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.resultCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
          ServantStatusDialog_EndDelegate__Invoke(formationCallbackFunc, (bool)this->fields.statusLoadAsset, 0LL);
        }
      }
    }
  }
}


void __fastcall ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  int64_t IsModifyLock; // x0
  _QWORD *v17; // x8
  UserServantEntity_o *v18; // x0
  bool *p_isModify; // x27
  int v20; // w9
  UserServantCollectionEntity_o *v21; // x0
  UserCommandCodeEntity_o *v22; // x0
  UserCommandCodeCollectionEntity_o *v23; // x0
  __int64 v24; // x8
  int64_t v25; // x20
  int statusLoadAsset_low; // w20
  int v27; // w20
  int v28; // w20
  int v29; // w20
  int v30; // w20
  int v31; // w20
  const MethodInfo *v32; // x2
  ServantStatusListViewItem_o *v33; // x1
  int32_t ManualSetCardLimitCount; // w20
  __int64 v35; // x2
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  __int64 v37; // x8
  __int128 v38; // q1
  CommandCodeSetStatusRequest_o *v39; // x19
  __int64 v40; // x8
  __int64 v41; // x20
  __int64 v42; // x21
  int32_t v43; // w24
  int v44; // w22
  BalanceConfig_c *v45; // x0
  char v46; // w26
  int32_t ManualSetDispLimitCount; // w0
  int32_t v48; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x8
  char v50; // w23
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v52; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  char v54; // w20
  int32_t ManualSetIconLimitCount; // w0
  int32_t v56; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  ServantStatusListViewItem_o *v58; // x8
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v60; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userSvtEntity; // x8
  ServantStatusListViewItem_o *v62; // x8
  ServantStatusListViewItem_o *v63; // x8
  ServantStatusListViewItem_o *v64; // x8
  __int64 v65; // x8
  __int128 v66; // q1
  char v67; // w20
  __int64 v68; // x23
  char v69; // w23
  int32_t v70; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  __int64 v72; // x2
  NetworkManager_ResultCallbackFunc_o *v73; // x20
  __int64 v74; // x8
  __int128 v75; // q0
  CardFavoriteRequest_o *v76; // x19
  int32_t limitCountSupport; // [xsp+54h] [xbp-11Ch]
  int32_t randomSettingSupport; // [xsp+58h] [xbp-118h]
  int32_t randomSettingOwn; // [xsp+5Ch] [xbp-114h]
  int32_t battleVoice; // [xsp+60h] [xbp-110h]
  int32_t commonFlag; // [xsp+64h] [xbp-10Ch]
  int32_t v82; // [xsp+68h] [xbp-108h]
  int32_t v83; // [xsp+6Ch] [xbp-104h]
  int32_t imageLimitCount; // [xsp+70h] [xbp-100h]
  char v85; // [xsp+74h] [xbp-FCh]
  char v86; // [xsp+78h] [xbp-F8h]
  char v87; // [xsp+7Ch] [xbp-F4h]
  char v88; // [xsp+80h] [xbp-F0h]
  char v89; // [xsp+84h] [xbp-ECh]
  char v90; // [xsp+88h] [xbp-E8h]
  bool isPush; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4212E46 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B0D8A4(&OtherUserNewManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v10);
    sub_B0D8A4(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_B0D8A4(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_B0D8A4(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v14);
    sub_B0D8A4(&UserServantNewManager_TypeInfo, v15);
    byte_4212E46 = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  v17 = *(_QWORD **)&this->fields.isModify;
  if ( !v17 )
    goto LABEL_144;
  v18 = (UserServantEntity_o *)v17[7];
  p_isModify = &this->fields.isModify;
  if ( v18 )
  {
    v20 = *(_DWORD *)&this->fields.isInitTab;
    if ( v20 != 6 && v20 != 15 )
    {
      UserServantEntity__SetOld(v18, 0LL);
      v17 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v21 = (UserServantCollectionEntity_o *)v17[10];
  if ( v21 )
  {
    UserServantCollectionEntity__SetOld(v21, 0LL);
    v17 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v22 = (UserCommandCodeEntity_o *)v17[13];
  if ( v22 )
  {
    if ( *(_DWORD *)&this->fields.isInitTab != 24 )
    {
      UserCommandCodeEntity__SetOld(v22, 0LL);
      v17 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v23 = (UserCommandCodeCollectionEntity_o *)v17[14];
  if ( v23 )
  {
    UserCommandCodeCollectionEntity__SetOld(v23, 0LL);
    v17 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v24 = v17[11];
  if ( v24 && *(_DWORD *)&this->fields.isInitTab == 4 )
  {
    v25 = *(_QWORD *)(v24 + 24);
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    OtherUserNewManager__SetOld(v25, 0LL);
  }
  statusLoadAsset_low = LOBYTE(this->fields.statusLoadAsset);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  v27 = (statusLoadAsset_low != 0) | UserServantNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v27 & 1;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  v28 = v27 | UserServantCollectionManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v28 & 1;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  v29 = v28 | ServantCommentManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v29 & 1;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  v30 = v29 | OtherUserNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v30 & 1;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  v31 = v30 | UserCommandCodeNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v31 & 1;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v33 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  LOBYTE(this->fields.statusLoadAsset) = (v31 | IsModifyLock) & 1;
  if ( !v33 )
    goto LABEL_144;
  if ( !v33->fields.userSvtEntity )
  {
    if ( v33->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v33, 0LL);
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(
                                            *(ServantStatusListViewItem_o **)p_isModify,
                                            0LL)) & 1) != 0 )
      {
        LOBYTE(this->fields.statusLoadAsset) = 1;
        v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v33, v35);
        NetworkManager_ResultCallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                  v36,
                                  (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *(_QWORD *)p_isModify )
        {
          v37 = *(_QWORD *)(*(_QWORD *)p_isModify + 104LL);
          if ( v37 )
          {
            v38 = *(_OWORD *)(v37 + 32);
            v39 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
            *(_OWORD *)&v95.fields.fakeValue = v38;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v92 = v95;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v92, 0LL);
            if ( *(_QWORD *)p_isModify )
            {
              if ( v39 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v39,
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
    goto LABEL_141;
  }
  if ( v33->fields.isConvertOverwriteImage )
    goto LABEL_42;
  IsModifyLock = (int64_t)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsModifyLock )
    goto LABEL_144;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v33,
                            v32);
  if ( !IsModifyLock )
  {
    v33 = *(ServantStatusListViewItem_o **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
LABEL_42:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v33, 0LL);
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
    v45 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    v44 = 1;
    v43 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v45->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_147:
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v40 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
    if ( !v40 )
      goto LABEL_144;
    v42 = *(_QWORD *)(v40 + 112);
    v41 = *(_QWORD *)(v40 + 120);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v96.fields.currentCryptoKey = v42;
    *(_QWORD *)&v96.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v96, 0LL);
    v44 = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v46 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v48 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v49 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v49 )
      goto LABEL_144;
    v48 = BasicHelper__DecryptValue_18713680(v49[8], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v50 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
    v52 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v53 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v53 )
      goto LABEL_144;
    v52 = BasicHelper__DecryptValue_18713680(v53[9], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v54 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v56 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v57 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v57 )
      goto LABEL_144;
    v56 = BasicHelper__DecryptValue_18713680(v57[10], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  v58 = *(ServantStatusListViewItem_o **)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v89 = IsModifyLock;
  v90 = v54;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(v58, 0LL);
    v60 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
  }
  else
  {
    userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v58->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_144;
    v60 = BasicHelper__DecryptValue_18713680(userSvtEntity[11], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v62 = *(ServantStatusListViewItem_o **)p_isModify;
  v88 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  commonFlag = v62->fields.svtCommonFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v62, 0LL);
  v63 = *(ServantStatusListViewItem_o **)p_isModify;
  v87 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  battleVoice = v63->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v63, 0LL);
  v64 = *(ServantStatusListViewItem_o **)p_isModify;
  v86 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  randomSettingOwn = v64->fields.isEnableOwnRandomSetting;
  randomSettingSupport = v64->fields.isEnableSupportRandomSetting;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(v64, 0LL);
  v85 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  limitCountSupport = *(_DWORD *)(*(_QWORD *)p_isModify + 332LL);
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_144;
  v82 = v60;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v65 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
  if ( !v65 )
    goto LABEL_144;
  v66 = *(_OWORD *)(v65 + 32);
  v67 = v50;
  v68 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)(v65 + 16);
  *(_OWORD *)&v95.fields.fakeValue = v66;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v94 = v95;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v94, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  isPush = v68 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*(ServantStatusListViewItem_o **)p_isModify, 0LL);
  v69 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    if ( BYTE1(this->fields.newProfileList) )
    {
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      isPush = *(_QWORD *)(*(_QWORD *)p_isModify + 168LL) != 0LL;
    }
    else
    {
      isPush = 0;
    }
  }
  v83 = v56;
  imageLimitCount = v43;
  if ( LOBYTE(this->fields.newProfileList) )
  {
    IsModifyLock = *(_QWORD *)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v70 = v52;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0LL);
  }
  else
  {
    v70 = v52;
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0LL),
        !*(_QWORD *)p_isModify) )
  {
LABEL_144:
    sub_B0D97C(IsModifyLock);
  }
  if ( v44 | v46 & 1 | v67 & 1 | v90 & 1 | v89 & 1 | v88 & 1 | v87 & 1 | v86 & 1 | v85 & 1 | v69 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*(ServantStatusListViewItem_o **)p_isModify, 0LL)) & 1 )
  {
    LOBYTE(this->fields.statusLoadAsset) = 1;
    v73 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v33, v72);
    NetworkManager_ResultCallbackFunc___ctor(
      v73,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                              v73,
                              (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *(_QWORD *)p_isModify )
    {
      v74 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
      if ( v74 )
      {
        v75 = *(_OWORD *)(v74 + 32);
        v76 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)(v74 + 16);
        *(_OWORD *)&v95.fields.fakeValue = v75;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v93 = v95;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v93, 0LL);
        if ( *(_QWORD *)p_isModify )
        {
          if ( v76 )
          {
            CardFavoriteRequest__beginRequest(
              v76,
              IsModifyLock,
              imageLimitCount,
              v48,
              v70,
              v83,
              v82,
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
LABEL_141:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v33);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantStatusDialog__GetVoiceAssetName(
        ServantStatusDialog_o *this,
        int32_t assetType,
        int32_t svtId,
        int32_t limitCount,
        int32_t seqId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v16; // x19
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212E2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_9622/*"NoblePhantasm_"*/, v10);
    sub_B0D8A4(&StringLiteral_3976/*"ChrVoice_"*/, v11);
    sub_B0D8A4(&StringLiteral_12783/*"Servants_"*/, v12);
    byte_4212E2C = 1;
  }
  v18 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v18 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v16 = (System_String_o **)off_3E6EC80[assetType];
    v17 = System_Int32__ToString((int32_t)&v18, 0LL);
    return System_String__Concat_43849904(*v16, v17, 0LL);
  }
  return result;
}


void __fastcall ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *pushSprite; // x20
  ServantStatusDialog_c *v8; // x0
  UnityEngine_GameObject_o *statusTabBase; // x0
  struct UISprite_o *v10; // x8
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20
  unsigned __int128 v16; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4212E18 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_ServantStatusDialog__Init_b__125_0__, v5);
    sub_B0D8A4(&ServantStatusDialog_TypeInfo, v6);
    byte_4212E18 = 1;
  }
  v16 = 0uLL;
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v8 = ServantStatusDialog_TypeInfo;
    if ( (BYTE3(ServantStatusDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v8 = ServantStatusDialog_TypeInfo;
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  v8->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                                  (UnityEngine_Color_o *)&v16,
                                                  0LL);
    v10 = this->fields.pushSprite;
    if ( !v10 )
LABEL_21:
      sub_B0D97C(statusTabBase);
    *(_OWORD *)&v10->fields.bottomAnchor = v16;
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
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v11);
  }
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.noticeNumber;
  if ( !statusTabBase )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
  statusTabBase = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)statusTabBase & 1, 0LL);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__125_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v15, 2, 1, 0LL);
}


void __fastcall ServantStatusDialog__InitBattleActor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleFBXComponent_o *v4; // x0
  UnityEngine_Object_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x19
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4212E21 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212E21 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v4 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v4 )
      sub_B0D97C(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
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
    UnityEngine_Object__Destroy_34935276(klass, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Action_o *v12; // x20
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  System_Action_o *v26; // x21

  if ( (byte_4212E3A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectCharaGraph__, v10);
    sub_B0D8A4(&Method_ServantStatusDialog__InitList_b__162_0__, v11);
    byte_4212E3A = 1;
  }
  v12 = *(System_Action_o **)&this->fields.questId;
  if ( v12 )
  {
    *(_QWORD *)&this->fields.questId = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.questId, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v12, 0LL);
  }
  BYTE1(this->fields.statusLoadAsset) = 0;
  BYTE4(this->fields.statusLoadAsset) = 0;
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v14 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_10;
  servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel = (struct UILabel_o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ServantStatusCharaGraphListViewManager__SetMode_21350716(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    2,
    v22);
  if ( *((_BYTE *)&this->fields.currentMaskType + 4) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__162_0__, 0LL);
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        v26,
        0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(v15);
  }
}


bool __fastcall ServantStatusDialog__IsContainRandomIndex(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantLimitAddMaster_o *Master_WarQuestSelectionMaster; // x20
  ServantCostumeMaster_o *RandomGroupIndex; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  __int64 v14; // x8
  ServantCostumeMaster_o *v15; // x21
  signed int v16; // w25
  unsigned int v17; // w9
  int32_t v18; // w22
  BalanceConfig_c *v19; // x0
  ServantCostumeEntity_o *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x23
  __int64 v24; // x24
  ServantLimitAddEntity_o *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x23
  __int64 v29; // x24
  __int64 v30; // x8
  __int64 v32; // x0
  ServantCostumeEntity_o *v33; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4212E62 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&ServantCostumeEntity_TypeInfo, v7);
    sub_B0D8A4(&ServantLimitAddEntity_TypeInfo, v8);
    byte_4212E62 = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  v13 = *(_QWORD *)&this->fields.isModify;
  if ( !v13 )
LABEL_39:
    sub_B0D97C(RandomGroupIndex);
  v14 = *(_QWORD *)(v13 + 336);
  if ( v14 )
  {
    v15 = RandomGroupIndex;
    v16 = 0;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v14 + 24);
      if ( v16 > (int)v17 )
        break;
      if ( v16 )
      {
        if ( v16 - 1 >= v17 )
        {
          v32 = sub_B0D9A8(RandomGroupIndex);
          sub_B0D948(v32, 0LL);
        }
        v18 = *(_DWORD *)(v14 + 4LL * (v16 - 1) + 32);
      }
      else
      {
        v18 = 0;
      }
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( v18 <= v19->static_fields->ServantLimitMax )
      {
        v25 = (ServantLimitAddEntity_o *)sub_B0D974(ServantLimitAddEntity_TypeInfo, v11, v12);
        ServantLimitAddEntity___ctor(v25, 0LL);
        entity = v25;
        v26 = *(_QWORD *)&this->fields.isModify;
        if ( !v26 )
          goto LABEL_39;
        v27 = *(_QWORD *)(v26 + 56);
        if ( !v27 )
          goto LABEL_39;
        v29 = *(_QWORD *)(v27 + 80);
        v28 = *(_QWORD *)(v27 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v29;
        *(_QWORD *)&v36.fields.fakeValue = v28;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       v36,
                                                       0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       Master_WarQuestSelectionMaster,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v18,
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
        v20 = (ServantCostumeEntity_o *)sub_B0D974(ServantCostumeEntity_TypeInfo, v11, v12);
        ServantCostumeEntity___ctor(v20, 0LL);
        v33 = v20;
        v21 = *(_QWORD *)&this->fields.isModify;
        if ( !v21 )
          goto LABEL_39;
        v22 = *(_QWORD *)(v21 + 56);
        if ( !v22 )
          goto LABEL_39;
        v24 = *(_QWORD *)(v22 + 80);
        v23 = *(_QWORD *)(v22 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v24;
        *(_QWORD *)&v35.fields.fakeValue = v23;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       v35,
                                                       0LL);
        if ( !v15 )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v15,
                                                       &v33,
                                                       (int32_t)RandomGroupIndex,
                                                       v18,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_39;
          if ( v33->fields.groupIndex )
            return 1;
        }
      }
      v30 = *(_QWORD *)&this->fields.isModify;
      if ( v30 )
      {
        v14 = *(_QWORD *)(v30 + 336);
        ++v16;
        if ( v14 )
          continue;
      }
      goto LABEL_39;
    }
  }
  return 0;
}


void __fastcall ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4212E44 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E44 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickChangeVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4212E63 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E63 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 320) != type )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&type,
                                                            method);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4212E66 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E66 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4212E55 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E55 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 24) <= (unsigned int)costumeIndex )
        {
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
        }
        v9 = *(_DWORD *)(v8 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v7 + 256) != v9 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v4, v9, v12);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4212E54 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E54 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 256) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeCommandResource(v4, dispLv, v10);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x8
  UserServantCollectionEntity_o *v15; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v17; // x20
  CommonUI_o *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusDialog_EndDelegate_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x23
  ServantLeaderInfo_o *v25; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v27; // x20
  int v28; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  WebViewManager_o *v31; // x21
  ServantStatusDialog_EndDelegate_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x23
  int32_t v36; // w1
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  ServantStatusListViewManager_CallbackFunc_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  bool v43; // w3
  CommonUI_o *v44; // x0
  CommandCodeEntity_o *v45; // x2

  v4 = this;
  if ( (byte_4212E5C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_B0D8A4(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v9);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectEquipStatus__, v10);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v13);
    byte_4212E5C = 1;
  }
  v14 = *(_QWORD *)&v4->fields.isModify;
  if ( !v14 )
    goto LABEL_30;
  v15 = *(UserServantCollectionEntity_o **)(v14 + 80);
  if ( v15 )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(v15, index, 0LL);
    if ( UserCommandCodeEntity )
    {
      v17 = UserCommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v19, v20);
      ServantStatusDialog_EndDelegate___ctor(
        v21,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_17032384(Instance, 20, v17, v21, v24, 0LL);
        return;
      }
LABEL_30:
      sub_B0D97C(this);
    }
    goto LABEL_19;
  }
  v25 = *(ServantLeaderInfo_o **)(v14 + 88);
  if ( v25 )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(v25, index, 0LL);
    if ( CommandCodeEntity )
    {
      v27 = CommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v28 = *(_DWORD *)&v4->fields.isInitTab;
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v28 == 4 )
      {
        v32 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30);
        ServantStatusDialog_EndDelegate___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
        System_Action___ctor(v35, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v31 )
          goto LABEL_30;
        v36 = 22;
      }
      else
      {
        v32 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30);
        ServantStatusDialog_EndDelegate___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
        System_Action___ctor(v35, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v31 )
          goto LABEL_30;
        if ( v28 != 5 )
        {
          v36 = 25;
          v44 = (CommonUI_o *)v31;
          v45 = v27;
          v43 = 0;
          goto LABEL_29;
        }
        v36 = 23;
      }
      v43 = 1;
      v44 = (CommonUI_o *)v31;
      v45 = v27;
LABEL_29:
      CommonUI__OpenServantEquipStatusDialog_17033196(v44, v36, v45, v43, v32, v35, 0LL);
      return;
    }
  }
LABEL_19:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
  v40 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v38,
                                                         v39);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v40,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_30;
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4212E58 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E58 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 24) <= (unsigned int)costumeIndex )
        {
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
        }
        v9 = *(_DWORD *)(v8 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v7 + 280) != v9 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v4, v9, v12);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4212E57 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E57 = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 280) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeFaceResource(v4, dispLv, v10);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  _QWORD *v24; // x8
  __int64 v25; // x9
  __int128 v26; // q1
  int64_t v27; // x20
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  ServantEntity_o *v32; // x23
  ServantStatusDialog_o *v33; // x20
  int32_t v34; // w21
  int32_t v35; // w25
  __int64 v36; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  int32_t v38; // w21
  int32_t v39; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v41; // x20
  __int64 v42; // x21
  int32_t Rarity; // w24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x23
  __int64 v65; // x8
  int32_t v66; // w0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x23
  __int64 v74; // x8
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x23
  __int64 v82; // x8
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x22
  System_String_o *v90; // x20
  System_String_o *v91; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  System_String_o *v95; // x24
  __int64 v96; // x1
  __int64 v97; // x2
  CommonConfirmDialog_ClickDelegate_o *v98; // x25
  __int64 v99; // x20
  __int64 v100; // x8
  __int128 v101; // q0
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v2 = this;
  if ( (byte_4212E67 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&object___TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Rarity_TypeInfo, v14);
    sub_B0D8A4(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&SoundManager_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_B0D8A4(&StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_B0D8A4(&StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_4212E67 = 1;
  }
  if ( !BYTE2(v2->fields.statusLoadAsset) && !BYTE1(v2->fields.statusLoadAsset) )
  {
    v24 = *(_QWORD **)&v2->fields.isModify;
    if ( !v24 )
      goto LABEL_93;
    if ( !v24[2] )
      return;
    v25 = v24[7];
    if ( !v25 )
      return;
    v26 = *(_OWORD *)(v25 + 32);
    v27 = v24[20];
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v107.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v106 = v107;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v106, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      return;
    }
    if ( v27 <= 0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v99 = *(_QWORD *)&v2->fields.isModify;
      if ( v99 )
      {
        v100 = *(_QWORD *)(v99 + 56);
        if ( v100 )
        {
          v101 = *(_OWORD *)(v100 + 32);
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)(v100 + 16);
          *(_OWORD *)&v107.fields.fakeValue = v101;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v105 = v107;
          *(_QWORD *)(v99 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v105, 0LL);
          ServantStatusDialog__SetMark(v2, v102);
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
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_93;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v27,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_93;
    v29 = this;
    v31 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v108.fields.currentCryptoKey = v31;
    *(_QWORD *)&v108.fields.fakeValue = v30;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v108, 0LL);
    if ( !v29 )
      goto LABEL_93;
    v32 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v29,
                               (int32_t)this,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v32 )
      goto LABEL_93;
    v33 = this;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v33 )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v33,
                                      v34,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v2->fields.isModify )
      goto LABEL_93;
    v35 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                                      0LL);
    v36 = *(_QWORD *)&v2->fields.isModify;
    if ( !v36 )
      goto LABEL_93;
    v37 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v36 + 56);
    if ( !v37 )
      goto LABEL_93;
    v38 = (int)this;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v33,
                                   v38,
                                   v39,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v42 = sub_B0D8BC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v42 )
      goto LABEL_93;
    v50 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_94;
      *(_QWORD *)(v42 + 32) = v50;
      sub_B0D840((BattleServantConfConponent_o *)(v42 + 32), v50, v44, v45, v46, v47, v48, v49);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v32, 0LL);
      v57 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v42 + 24) <= 1u )
          goto LABEL_94;
        *(_QWORD *)(v42 + 40) = v57;
        sub_B0D840((BattleServantConfConponent_o *)(v42 + 40), v57, v51, v52, v53, v54, v55, v56);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v32, v35, -1, 0LL);
        v64 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v42 + 24) <= 2u )
            goto LABEL_94;
          *(_QWORD *)(v42 + 48) = v64;
          sub_B0D840((BattleServantConfConponent_o *)(v42 + 48), v64, v58, v59, v60, v61, v62, v63);
          v65 = *(_QWORD *)&v2->fields.isModify;
          if ( !v65 )
            goto LABEL_93;
          this = *(ServantStatusDialog_o **)(v65 + 56);
          if ( !this )
            goto LABEL_93;
          v66 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v66, 0LL);
          v73 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v42 + 24) <= 3u )
              goto LABEL_94;
            *(_QWORD *)(v42 + 56) = v73;
            sub_B0D840((BattleServantConfConponent_o *)(v42 + 56), v73, v67, v68, v69, v70, v71, v72);
            v74 = *(_QWORD *)&v2->fields.isModify;
            if ( !v74 )
              goto LABEL_93;
            this = *(ServantStatusDialog_o **)(v74 + 128);
            if ( !this )
              goto LABEL_93;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v81 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v42 + 24) <= 4u )
                goto LABEL_94;
              *(_QWORD *)(v42 + 64) = v81;
              sub_B0D840((BattleServantConfConponent_o *)(v42 + 64), v81, v75, v76, v77, v78, v79, v80);
              v82 = *(_QWORD *)&v2->fields.isModify;
              if ( !v82 )
                goto LABEL_93;
              this = *(ServantStatusDialog_o **)(v82 + 128);
              if ( !this )
                goto LABEL_93;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v89 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v42 + 24) > 5u )
                {
                  *(_QWORD *)(v42 + 72) = v89;
                  sub_B0D840((BattleServantConfConponent_o *)(v42 + 72), v89, v83, v84, v85, v86, v87, v88);
                  this = (ServantStatusDialog_o *)System_String__Format_43928628(v41, (System_Object_array *)v42, 0LL);
                  if ( !*(_QWORD *)&v2->fields.isModify )
                    goto LABEL_93;
                  v90 = (System_String_o *)this;
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
                      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v90 = System_String__Concat_43849904(v90, v91, 0LL);
                    }
                  }
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v98 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v96,
                                                                 v97);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v98,
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
                    CommonUI__OpenConfirmDialog_17016196(
                      Instance,
                      v93,
                      v90,
                      v94,
                      v95,
                      v98,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_93:
                  sub_B0D97C(this);
                }
LABEL_94:
                v103 = sub_B0D9A8(this);
                sub_B0D948(v103, 0LL);
              }
            }
          }
        }
      }
    }
    v104 = sub_B0D99C();
    sub_B0D948(v104, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4212E65 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E65 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  int32_t v9; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4212E5B & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E5B = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 24) <= (unsigned int)costumeIndex )
        {
          v13 = sub_B0D9A8(this);
          sub_B0D948(v13, 0LL);
        }
        v9 = *(_DWORD *)(v8 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v7 + 296) != v9 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v4, v9, v12);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v11, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4212E5A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E5A = 1;
  }
  if ( !BYTE2(v4->fields.statusLoadAsset) && !BYTE1(v4->fields.statusLoadAsset) )
  {
    v7 = *(_QWORD *)&v4->fields.isModify;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 296) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangePortraitResource(v4, dispLv, v10);
        return;
      }
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                            ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&dispLv,
                                                            method);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x9
  __int128 v26; // q1
  int64_t v27; // x20
  const MethodInfo *v28; // x1
  __int64 v29; // x8
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v31; // x20
  __int64 v32; // x21
  __int64 v33; // x22
  ServantEntity_o *v34; // x23
  ServantStatusDialog_o *v35; // x20
  int32_t v36; // w21
  int32_t v37; // w25
  __int64 v38; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  int32_t v40; // w21
  int32_t v41; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v43; // x20
  __int64 v44; // x21
  int32_t Rarity; // w24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x23
  __int64 v67; // x8
  int32_t v68; // w0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x23
  __int64 v76; // x8
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x23
  __int64 v84; // x8
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x22
  System_String_o *v92; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v94; // x22
  System_String_o *v95; // x23
  System_String_o *v96; // x24
  __int64 v97; // x1
  __int64 v98; // x2
  CommonConfirmDialog_ClickDelegate_o *v99; // x25
  __int64 v100; // x20
  __int64 v101; // x8
  __int128 v102; // q0
  __int64 v103; // x0
  __int64 v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v2 = this;
  if ( (byte_4212E69 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&object___TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Rarity_TypeInfo, v14);
    sub_B0D8A4(&Method_ServantStatusDialog_OnConfirmSelectPush__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&SoundManager_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_4212E69 = 1;
  }
  if ( !BYTE2(v2->fields.statusLoadAsset) && !BYTE1(v2->fields.statusLoadAsset) )
  {
    v23 = *(_QWORD *)&v2->fields.isModify;
    if ( !v23 )
      goto LABEL_86;
    if ( !*(_QWORD *)(v23 + 16) || !*(_QWORD *)(v23 + 56) )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v24 = *(_QWORD *)&v2->fields.isModify;
    if ( !v24 )
      goto LABEL_86;
    v25 = *(_QWORD *)(v24 + 56);
    if ( !v25 )
      goto LABEL_86;
    v26 = *(_OWORD *)(v25 + 32);
    v27 = *(_QWORD *)(v24 + 168);
    *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v107.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v106 = v107;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v106, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v29 = *(_QWORD *)&v2->fields.isModify;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 168) = 0LL;
LABEL_85:
        ServantStatusDialog__SetMark(v2, v28);
        return;
      }
      goto LABEL_86;
    }
    if ( v27 <= 0 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v100 = *(_QWORD *)&v2->fields.isModify;
      if ( v100 )
      {
        v101 = *(_QWORD *)(v100 + 56);
        if ( v101 )
        {
          v102 = *(_OWORD *)(v101 + 32);
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)(v101 + 16);
          *(_OWORD *)&v107.fields.fakeValue = v102;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v105 = v107;
          *(_QWORD *)(v100 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v105, 0LL);
          goto LABEL_85;
        }
      }
LABEL_86:
      sub_B0D97C(this);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_86;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v27,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_86;
    v31 = this;
    v33 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v108.fields.currentCryptoKey = v33;
    *(_QWORD *)&v108.fields.fakeValue = v32;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v108, 0LL);
    if ( !v31 )
      goto LABEL_86;
    v34 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v31,
                               (int32_t)this,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v34 )
      goto LABEL_86;
    v35 = this;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v35 )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v35,
                                      v36,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v2->fields.isModify )
      goto LABEL_86;
    v37 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                                      0LL);
    v38 = *(_QWORD *)&v2->fields.isModify;
    if ( !v38 )
      goto LABEL_86;
    v39 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v38 + 56);
    if ( !v39 )
      goto LABEL_86;
    v40 = (int)this;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v39[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v35,
                                   v40,
                                   v41,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v44 = sub_B0D8BC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v44 )
      goto LABEL_86;
    v52 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v44 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v44 + 32) = v52;
      sub_B0D840((BattleServantConfConponent_o *)(v44 + 32), v52, v46, v47, v48, v49, v50, v51);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v34, 0LL);
      v59 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v44 + 24) <= 1u )
          goto LABEL_87;
        *(_QWORD *)(v44 + 40) = v59;
        sub_B0D840((BattleServantConfConponent_o *)(v44 + 40), v59, v53, v54, v55, v56, v57, v58);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v34, v37, -1, 0LL);
        v66 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v44 + 24) <= 2u )
            goto LABEL_87;
          *(_QWORD *)(v44 + 48) = v66;
          sub_B0D840((BattleServantConfConponent_o *)(v44 + 48), v66, v60, v61, v62, v63, v64, v65);
          v67 = *(_QWORD *)&v2->fields.isModify;
          if ( !v67 )
            goto LABEL_86;
          this = *(ServantStatusDialog_o **)(v67 + 56);
          if ( !this )
            goto LABEL_86;
          v68 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v68, 0LL);
          v75 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v44 + 24) <= 3u )
              goto LABEL_87;
            *(_QWORD *)(v44 + 56) = v75;
            sub_B0D840((BattleServantConfConponent_o *)(v44 + 56), v75, v69, v70, v71, v72, v73, v74);
            v76 = *(_QWORD *)&v2->fields.isModify;
            if ( !v76 )
              goto LABEL_86;
            this = *(ServantStatusDialog_o **)(v76 + 128);
            if ( !this )
              goto LABEL_86;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v83 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v44 + 24) <= 4u )
                goto LABEL_87;
              *(_QWORD *)(v44 + 64) = v83;
              sub_B0D840((BattleServantConfConponent_o *)(v44 + 64), v83, v77, v78, v79, v80, v81, v82);
              v84 = *(_QWORD *)&v2->fields.isModify;
              if ( !v84 )
                goto LABEL_86;
              this = *(ServantStatusDialog_o **)(v84 + 128);
              if ( !this )
                goto LABEL_86;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v91 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v44 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v44 + 24) > 5u )
                {
                  *(_QWORD *)(v44 + 72) = v91;
                  sub_B0D840((BattleServantConfConponent_o *)(v44 + 72), v91, v85, v86, v87, v88, v89, v90);
                  v92 = System_String__Format_43928628(v43, (System_Object_array *)v44, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v97,
                                                                 v98);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v99,
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
                    CommonUI__OpenConfirmDialog_17016196(
                      Instance,
                      v94,
                      v92,
                      v95,
                      v96,
                      v99,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_86;
                }
LABEL_87:
                v103 = sub_B0D9A8(this);
                sub_B0D948(v103, 0LL);
              }
            }
          }
        }
      }
    }
    v104 = sub_B0D99C();
    sub_B0D948(v104, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t id,
        const MethodInfo *method)
{
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
    ServantStatusDialog__RandomLimitCountSettingResource(this, id == 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickRandomLimitCountSupport(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4212E5F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&index);
    byte_4212E5F = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickServantQuest(
        ServantStatusDialog_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  void *Mine; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v27; // x21
  int32_t QuestType; // w22
  QuestEntity_o *v29; // x23
  System_String_o *v30; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool v35; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  ServantStatusListViewManager_CallbackFunc_o *v39; // x21
  CommonUI_o *Instance; // x21
  System_String_o *v41; // x0
  __int64 *v42; // x8
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x20
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  CommonConfirmDialog_ClickDelegate_o *v50; // x25

  if ( (byte_4212E5D & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_ServantStatusDialog_OnConfirmServantQuest__, v9);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v16);
    sub_B0D8A4(&StringLiteral_12069/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v17);
    sub_B0D8A4(&StringLiteral_12071/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v18);
    sub_B0D8A4(&StringLiteral_12072/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v19);
    sub_B0D8A4(&StringLiteral_12065/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_12068/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v21);
    sub_B0D8A4(&StringLiteral_12070/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_12066/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v23);
    sub_B0D8A4(&StringLiteral_12067/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v24);
    byte_4212E5D = 1;
  }
  if ( !this->fields.individualityCallbackFunc && !this->fields.resultCallbackFunc )
    goto LABEL_51;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v39 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v37,
                                                           v38);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v39, 0LL);
      return;
    }
    goto LABEL_48;
  }
  v27 = QuestInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v27, 0LL);
  Mine = MapControl_QuestInfo__GetMine(v27, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v29 = (QuestEntity_o *)Mine;
  this->fields.tabKind = *((_DWORD *)Mine + 4);
  Mine = QuestEntity__getQuestName((QuestEntity_o *)Mine, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v30 = (System_String_o *)Mine;
  if ( System_String__Contains((System_String_o *)Mine, (System_String_o *)StringLiteral_23617/*"{0}"*/, 0LL) )
  {
    Mine = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Mine,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    Mine = (void *)QuestEntity__getServantId(v29, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Mine = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int32_t)Mine,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Mine )
      goto LABEL_48;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Mine, 0, -1, 0LL);
    v30 = System_String__Format(v30, BattleName, 0LL);
  }
  if ( QuestType == 3 )
  {
    warId = v27->fields.warId;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Mine )
    {
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Mine, warId, 0LL);
      if ( WarEntityByWarID )
        v35 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
      else
        v35 = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v35 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
        v42 = &StringLiteral_12067/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v42 = &StringLiteral_12069/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
      }
      goto LABEL_46;
    }
LABEL_48:
    sub_B0D97C(Mine);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
  v42 = &StringLiteral_12071/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_46:
  v43 = v41;
  v44 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
  v45 = System_String__Format(v44, (Il2CppObject *)v30, 0LL);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v48, v49);
  CommonConfirmDialog_ClickDelegate___ctor(
    v50,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__OpenConfirmDialog_17016196(Instance, v43, v45, v46, v47, v50, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4212E4D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E4D = 1;
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

  if ( (byte_4212E4C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E4C = 1;
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

  if ( (byte_4212E4B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E4B = 1;
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

  if ( (byte_4212E4E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212E4E = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickTdSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x19
  ServantStatusListViewItem_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v28; // x21
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v31; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  __int64 v34; // x21
  __int64 v35; // x21
  CommonUI_o *v36; // x22
  System_String_o *Empty; // x21
  System_String_o *v38; // x23
  System_String_o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  CommonConfirmDialog_ClickDelegate_o *v42; // x25

  if ( (byte_4212E5E & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B0D8A4(&ServantStatusListViewItemDrawButton_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&string_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__, v12);
    sub_B0D8A4(&ServantStatusDialog___c__DisplayClass202_0_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_12075/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_B0D8A4(&StringLiteral_12076/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_4212E5E = 1;
  }
  v17 = sub_B0D974(ServantStatusDialog___c__DisplayClass202_0_TypeInfo, *(_QWORD *)&type, method);
  ServantStatusDialog___c__DisplayClass202_0___ctor((ServantStatusDialog___c__DisplayClass202_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_27;
  *(_QWORD *)(v17 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v17 + 24) = type;
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v18 )
      goto LABEL_27;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v18, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v28 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v25,
                                                             v26);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v28, 0LL);
        return;
      }
LABEL_27:
      sub_B0D97C(v18);
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v18 )
      goto LABEL_27;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v18, 0LL);
    if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    }
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v31 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v17 + 24), 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12076/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v33 = System_String__Format_43845440(v32, TDSpeedLocalization, v31, 0LL);
    v34 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v35 = **(_QWORD **)(v34 + 192);
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AA65A4(v35);
    v36 = **(CommonUI_o ***)(v35 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v42 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v40, v41);
    CommonConfirmDialog_ClickDelegate___ctor(
      v42,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v36 )
      goto LABEL_27;
    CommonUI__OpenConfirmDecideDlg(v36, Empty, v33, v38, v39, v42, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x8
  __int128 v10; // q1
  const MethodInfo *v11; // x1
  CommonUI_o *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4212E68 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4212E68 = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&v4->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B0D97C(this);
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v17.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v16 = v17;
    *(_QWORD *)(v8 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_17017160(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x8
  __int128 v10; // q1
  const MethodInfo *v11; // x1
  CommonUI_o *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4212E6A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4212E6A = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&v4->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B0D97C(this);
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v17.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v16 = v17;
    *(_QWORD *)(v8 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v16, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_17017160(Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmServantQuest(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  QuestTree_o *v14; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v16; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  CommonUI_o *Instance; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  ServantStatusListViewManager_CallbackFunc_o *v25; // x21
  __int64 v26; // x1
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  CommonUI_o *v30; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_4212E64 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B0D8A4(&Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v12);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    byte_4212E64 = 1;
  }
  if ( !isDecide )
  {
    this->fields.tabKind = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_17017160(Instance, v21, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v25 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v23,
                                                             v24);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v25, 0LL);
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
  v14 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v14 )
    goto LABEL_31;
  QuestInfo = QuestTree__GetQuestInfo(v14, this->fields.tabKind, 0LL);
  v16 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v14 = (QuestTree_o *)v16->fields._WarInfo_k__BackingField;
      if ( !v14 )
        goto LABEL_31;
      LODWORD(v16) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v14, 0LL);
    }
    else
    {
      LODWORD(v16) = 0;
    }
  }
  v14 = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v14 )
    goto LABEL_31;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v14, (int32_t)v16, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210846 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    byte_4210846 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v30 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v31 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, 0LL);
  if ( !v30 )
LABEL_31:
    sub_B0D97C(v14);
  CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v33, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleFBXComponent_o *v4; // x0

  if ( (byte_4212E45 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212E45 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v4 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
    if ( !v4 )
      sub_B0D97C(0LL);
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4212E6D & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_2738/*"Base/TitlePrefab/BackObj/BtnBg"*/, v4);
    byte_4212E6D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_2738/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(transform);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v8; // x22
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  const MethodInfo *v19; // x2

  if ( (byte_4212E4F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212E4F = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&result,
                                                                method);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !voiceTabListViewManager
      || (voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v8,
          sub_B0D840(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v8,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15),
          ServantStatusBattleListViewManager__SetMode_21336760(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v16,
            v17),
          (v18 = *(_QWORD *)&this->fields.isModify) == 0) )
    {
      sub_B0D97C(v9);
    }
    if ( *(_DWORD *)(v18 + 240) != result )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v19);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_4212E40 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4212E40 = 1;
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
    ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(gameObject);
  CommonUI__CloseServantEquipStatusDialog(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectEquipStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_4212E3E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4212E3E = 1;
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
    ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(gameObject);
  CommonUI__CloseServantEquipStatusDialog(Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212E42 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_4212E42 = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                  ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&result,
                                                                  method);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !battleTabListViewManager )
    sub_B0D97C(v7);
  ServantStatusFlavorTextListViewManager__SetMode(
    (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
    1,
    v6,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v30; // x21
  __int64 v31; // x8
  _QWORD *v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x8
  int64_t v36; // x21
  CommonUI_o *v37; // x20
  ServantStatusDialog_EndDelegate_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x23
  __int64 v42; // x8
  __int64 v43; // x8
  __int128 v44; // q1
  int v45; // w24
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x8
  __int64 v49; // x8
  EquipTargetInfo_o *v50; // x21
  CommonUI_o *v51; // x20
  ServantStatusDialog_EndDelegate_o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  System_Action_o *v55; // x23
  int32_t v56; // w1
  ServantStatusListViewManager_o *v57; // x20
  ServantStatusListViewManager_CallbackFunc_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 *v65; // x8
  struct UISprite_o *v66; // x1
  __int64 v67; // x1
  __int64 v68; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v70; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x8
  __int64 v76; // x8
  __int64 v77; // x1
  __int64 v78; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-60h]

  v5 = result;
  v6 = this;
  if ( (byte_4212E3D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_B0D8A4(&Method_ServantStatusDialog_Exit__, v12);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectEquipStatus__, v13);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v17);
    sub_B0D8A4(&SoundManager_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12761/*"ServantLvExceed"*/, v19);
    sub_B0D8A4(&StringLiteral_12765/*"ServantSkillCombine"*/, v20);
    sub_B0D8A4(&StringLiteral_12762/*"ServantNpCombine"*/, v21);
    sub_B0D8A4(&StringLiteral_4177/*"CommandCardEquip"*/, v22);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v23);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v24);
    sub_B0D8A4(&StringLiteral_6827/*"FriendshipExceed"*/, v25);
    sub_B0D8A4(&StringLiteral_12759/*"ServantLimitCountUp"*/, v26);
    sub_B0D8A4(&StringLiteral_2001/*"AppendSkillCombine"*/, v27);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&StringLiteral_4178/*"CommandCardExceed"*/, v28);
    byte_4212E3D = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) )
  {
    if ( BYTE1(v6->fields.statusLoadAsset) )
    {
      profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
      v30 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&result,
                                                             *(_QWORD *)&id);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v30, 0LL);
        return;
      }
LABEL_116:
      sub_B0D97C(this);
    }
    if ( v5 == 1 )
    {
      v31 = *(_QWORD *)&v6->fields.isModify;
      if ( !v31 )
        goto LABEL_116;
      if ( *(_BYTE *)(v31 + 121) )
        v5 = 1;
      else
        v5 = 2;
    }
    switch ( v5 )
    {
      case 1:
      case 2:
        v32 = *(_QWORD **)&v6->fields.isModify;
        if ( !v32 )
          goto LABEL_116;
        if ( v32[7] && (__int64)v32[44] >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v35 = *(_QWORD *)&v6->fields.isModify;
          if ( !v35 )
            goto LABEL_116;
          v36 = *(_QWORD *)(v35 + 352);
          v37 = (CommonUI_o *)this;
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v33, v34);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
          System_Action___ctor(v41, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v37 )
            goto LABEL_116;
          CommonUI__OpenServantEquipStatusDialog(v37, 11, v36, 1, v38, v41, 0LL);
        }
        else
        {
          v42 = v32[11];
          if ( !v42 )
            goto LABEL_36;
          v43 = *(_QWORD *)(v42 + 144);
          if ( !v43 )
            goto LABEL_36;
          v44 = *(_OWORD *)(v43 + 40);
          *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)(v43 + 24);
          *(_OWORD *)&v80.fields.fakeValue = v44;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v79 = v80;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v79, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v45 = *(_DWORD *)&v6->fields.isInitTab;
            if ( v45 == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v48 = *(_QWORD *)&v6->fields.isModify;
              if ( !v48 )
                goto LABEL_116;
              v49 = *(_QWORD *)(v48 + 88);
              if ( !v49 )
                goto LABEL_116;
              v50 = *(EquipTargetInfo_o **)(v49 + 144);
              v51 = (CommonUI_o *)this;
              v52 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v46, v47);
              ServantStatusDialog_EndDelegate___ctor(
                v52,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v53, v54);
              System_Action___ctor(v55, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v51 )
                goto LABEL_116;
              v56 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v75 = *(_QWORD *)&v6->fields.isModify;
              if ( !v75 )
                goto LABEL_116;
              v76 = *(_QWORD *)(v75 + 88);
              if ( !v76 )
                goto LABEL_116;
              v50 = *(EquipTargetInfo_o **)(v76 + 144);
              v51 = (CommonUI_o *)this;
              v52 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v73, v74);
              ServantStatusDialog_EndDelegate___ctor(
                v52,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v77, v78);
              System_Action___ctor(v55, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v51 )
                goto LABEL_116;
              if ( v45 == 5 )
                v56 = 14;
              else
                v56 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_17032132(v51, v56, v50, v52, v55, 0LL);
          }
          else
          {
LABEL_36:
            v57 = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
            v58 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                   *(_QWORD *)&result,
                                                                   *(_QWORD *)&id);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v58,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v57 )
              goto LABEL_116;
            ServantStatusListViewManager__SetMode(v57, 1, v58, 0LL);
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
        ServantStatusDialog__RandomLimitCountSettingResource(v6, id == 1, *(const MethodInfo **)&id);
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
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12746/*"ServantCombine"*/;
        goto LABEL_101;
      case 14:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12749/*"ServantEQCombine"*/;
        goto LABEL_101;
      case 15:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12765/*"ServantSkillCombine"*/;
        goto LABEL_101;
      case 16:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12759/*"ServantLimitCountUp"*/;
        goto LABEL_101;
      case 17:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_6827/*"FriendshipExceed"*/;
        goto LABEL_101;
      case 18:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_4177/*"CommandCardEquip"*/;
        goto LABEL_101;
      case 19:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_4178/*"CommandCardExceed"*/;
        goto LABEL_101;
      case 20:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_2001/*"AppendSkillCombine"*/;
        goto LABEL_101;
      case 21:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12762/*"ServantNpCombine"*/;
        goto LABEL_101;
      case 22:
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        this = (ServantStatusDialog_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_116;
        v65 = &StringLiteral_12761/*"ServantLvExceed"*/;
LABEL_101:
        v66 = (struct UISprite_o *)*v65;
        this->fields.voiceTitleSprite = (struct UISprite_o *)*v65;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.voiceTitleSprite,
          (System_Int32_array **)v66,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v70 = AvalonSceneManager_TypeInfo;
        if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v70 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v70->static_fields->DEFAULT_FADE_TIME;
        v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v67, v68);
        System_Action___ctor(v72, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0LL);
        if ( !Instance )
          goto LABEL_116;
        CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v72, 0LL);
        return;
      default:
        goto LABEL_36;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v14; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ServantVoiceMaster_o *v18; // x23
  ServantStatusVoiceListViewItem_o *v19; // x25
  int32_t v20; // w22
  int32_t v21; // w21
  System_String_o *v22; // x24
  System_String_o *LabelName; // x0
  System_String_o *v24; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v26; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v28; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v30; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4212E43 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v12);
    byte_4212E43 = 1;
  }
  VoicePrefix = 0;
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&kind,
                                                                *(_QWORD *)&result);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !servantNameRangeLabel )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v14, 0LL);
    if ( !BYTE1(this->fields.statusLoadAsset) )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v16);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v18 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.servantNameRangeLabel;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v19 = (ServantStatusVoiceListViewItem_o *)Instance;
        v20 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v19, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_58;
        v21 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        MasterData_WarQuestSelectionMaster,
                        v20,
                        (int32_t)Instance,
                        0LL);
        v22 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v19, 0LL);
        v24 = System_String__Concat_43852188(v22, (System_String_o *)StringLiteral_15952/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v19, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList(v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v19, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v19->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v19, 0LL);
                  if ( v18 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_29963932(
                                      v18,
                                      v20,
                                      v21,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_B0D97C(Instance);
                }
                if ( !v18 )
                  goto LABEL_58;
                if ( !v19->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(v18, v20, v21, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(v18, v20, v21, v24, 0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v19, 0LL);
                  if ( v18 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v18, v20, (int32_t)Instance, 0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_21406252(this, v20, v21, HomeVoiceList, result, v26);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v18 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(v18, v20, v21, v24, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v19->fields.genderFlag && !v19->fields.voiceLabelSpecification )
              {
                if ( v18 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(v18, v20, v21, 2, 1, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v18 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList(v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList(v18, v20, v21, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList(v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v18 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList(v18, v20, v21, v24, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v20, v21, BattleVoiceList, result, v28);
            return;
          case 7:
            if ( !v18 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList(v18, v20, v21, v24, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v20, v21, NpVoiceList, result, v30);
            return;
          case 8:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          case 9:
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList(v18, v20, v21, v24, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v19, 0LL);
            if ( !v18 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_29961472(v18, (int32_t)Instance, v20, v21, v24, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusListViewManager_CallbackFunc_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x22
  __int64 v26; // x22
  CommonUI_o *v27; // x22
  System_String_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  CommonConfirmDialog_ClickDelegate_o *v31; // x24

  if ( (byte_4212E49 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&OptionManager_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B0D8A4(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12040/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v12);
    sub_B0D8A4(&StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    sub_B0D8A4(&StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v15);
    byte_4212E49 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  LODWORD(this[1].klass) = maskType;
  if ( (unsigned int)(maskType - 1) < 2 )
  {
LABEL_12:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v20,
                                                           v21);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v22, 0LL);
      return;
    }
LABEL_32:
    sub_B0D97C(v23);
  }
  if ( maskType == 3 )
  {
    v18 = v17;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetRandomLimitCountOwn(0LL) )
      goto LABEL_12;
    v24 = *(_QWORD *)&this->fields.isModify;
    if ( v24 && *(_BYTE *)(v24 + 329) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v25 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v26 = **(_QWORD **)(v25 + 192);
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AA65A4(v26);
      v27 = **(CommonUI_o ***)(v26 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v29, v30);
      CommonConfirmDialog_ClickDelegate___ctor(
        v31,
        (Il2CppObject *)this,
        Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__,
        0LL);
      if ( !v27 )
        goto LABEL_32;
      CommonUI__OpenConfirmDecideDlg(
        v27,
        (System_String_o *)StringLiteral_1/*""*/,
        v28,
        v16,
        v18,
        v31,
        28,
        0.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        0LL);
    }
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
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusListViewItem_o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4212DFE & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212DFE = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v21, v22);
  ServantStatusListViewItem___ctor(v23, partyItem, member, 0, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21375536(
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
  __int64 v21; // x1
  __int64 v22; // x2
  ServantStatusListViewItem_o *v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4212DFF & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212DFF = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)canMoveCombine,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v21, v22);
  ServantStatusListViewItem___ctor(v23, partyItem, member, callback != 0LL, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21375748(
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
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusListViewItem_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4212E00 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E00 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33481848(v22, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21375948(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 *v16; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v18; // x5

  if ( (byte_4212E01 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212E01 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)*v16);
  ServantStatusDialog__Open_21376240(this, kind, Entity, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21376240(
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  bool v22; // w21
  bool v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4212E05 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E05 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = 0;
  if ( v21 != 29 && v21 != 34 )
    v23 = v21 != 2 && v21 != 33;
  v24 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33483456(v24, userSvtEntity, 0LL, 0LL, 0, v22, v23, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21376536(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 *v16; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v18; // x5

  if ( (byte_4212E02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212E02 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)*v16);
  ServantStatusDialog__Open_21376828(this, kind, Entity, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21376828(
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  bool v22; // w22
  bool v23; // w23
  ServantStatusListViewItem_o *v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4212E06 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E06 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = 0;
  if ( v21 != 29 && v21 != 34 )
    v23 = v21 != 2 && v21 != 33;
  v24 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33483456(v24, userSvtEntity, 0LL, 0LL, callback != 0LL, v22, v23, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21377128(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 *v16; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v18; // x6

  if ( (byte_4212E03 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212E03 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)*v16);
  ServantStatusDialog__Open_21377424(this, kind, Entity, callback, openCallback, 0, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21377424(
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
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w8
  bool v23; // w22
  bool v24; // w23
  ServantStatusListViewItem_o *v25; // x24
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4212E07 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E07 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = *(_DWORD *)&this->fields.isInitTab;
  v23 = 0;
  if ( v22 != 29 && v22 != 34 )
    v23 = v22 != 2 && v22 != 33;
  v24 = 0;
  if ( v22 != 29 && v22 != 34 )
    v24 = v22 != 2 && v22 != 33;
  v25 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33483456(v25, userSvtEntity, 0LL, 0LL, 0, v23, v24, canMoveCombine, 0LL);
  *(_QWORD *)&this->fields.isModify = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21377732(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 *v16; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v18; // x6

  if ( (byte_4212E04 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212E04 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v16 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v16 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)*v16);
  ServantStatusDialog__Open_21378028(this, kind, Entity, callback, openCallback, 0, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21378028(
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
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w8
  bool v23; // w23
  bool v24; // w24
  ServantStatusListViewItem_o *v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4212E08 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E08 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)canMoveCombine,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = *(_DWORD *)&this->fields.isInitTab;
  v23 = 0;
  if ( v22 != 29 && v22 != 34 )
    v23 = v22 != 2 && v22 != 33;
  v24 = 0;
  if ( v22 != 29 && v22 != 34 )
    v24 = v22 != 2 && v22 != 33;
  v25 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33483456(
    v25,
    userSvtEntity,
    0LL,
    0LL,
    callback != 0LL,
    v23,
    v24,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21378444(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        System_Int64_array *equipIdList,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v16; // x7

  if ( (byte_4212E09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4212E09 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_21378652(this, kind, Entity, equipIdList, 0LL, callback, 0LL, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21378652(
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
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w8
  bool v24; // w23
  bool v25; // w24
  ServantStatusListViewItem_o *v26; // x25
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_4212E0A & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E0A = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v21, v22);
  ServantStatusListViewItem___ctor_33483456(v26, userSvtEntity, equipIdList, questRestrictionInfo, 0, v24, v25, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21378964(
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
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w8
  bool v26; // w24
  bool v27; // w25
  ServantStatusListViewItem_o *v28; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4212E0B & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E0B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = *(_DWORD *)&this->fields.isInitTab;
  v26 = 0;
  if ( v25 != 29 && v25 != 34 )
    v26 = v25 != 2 && v25 != 33;
  v27 = 0;
  if ( v25 != 29 && v25 != 34 )
    v27 = v25 != 2 && v25 != 33;
  v28 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v23, v24);
  ServantStatusListViewItem___ctor_33483456(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v26,
    v27,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21379288(
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
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w8
  bool v26; // w25
  bool v27; // w26
  ServantStatusListViewItem_o *v28; // x27
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4212E0C & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E0C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)canMoveCombine);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v25 = *(_DWORD *)&this->fields.isInitTab;
  v26 = 0;
  if ( v25 != 29 && v25 != 34 )
    v26 = v25 != 2 && v25 != 33;
  v27 = 0;
  if ( v25 != 29 && v25 != 34 )
    v27 = v25 != 2 && v25 != 33;
  v28 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v23, v24);
  ServantStatusListViewItem___ctor_33483456(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v26,
    v27,
    canMoveCombine,
    0LL);
  *(_QWORD *)&this->fields.isModify = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isModify,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ServantStatusDialog__Init(this, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21379616(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v17; // x6

  if ( (byte_4212E0D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4212E0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_21379832(this, kind, Entity, isUse, callback, openCallback, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21379832(
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
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusListViewItem_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4212E0E & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E0E = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33485836(v22, userSvtEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21380028(
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  bool v22; // w21
  ServantStatusListViewItem_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4212E0F & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E0F = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33487644(v23, userSvtCollectionEntity, 0, v22, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21380260(
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
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // w8
  bool v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4212E10 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E10 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    *(System_String_array ***)&imageLimitCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = *(_DWORD *)&this->fields.isInitTab;
  v23 = 0;
  if ( v22 != 29 && v22 != 34 )
    v23 = v22 != 2 && v22 != 33;
  v24 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33489328(v24, userSvtCollectionEntity, imageLimitCount, 0, v23, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21380508(
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  bool v22; // w22
  ServantStatusListViewItem_o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4212E11 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E11 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = *(_DWORD *)&this->fields.isInitTab;
  v22 = 0;
  if ( v21 != 29 && v21 != 34 )
    v22 = v21 != 2 && v21 != 33;
  v23 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33487644(v23, userSvtCollectionEntity, callback != 0LL, v22, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21380744(
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
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusListViewItem_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4212E12 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E12 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)servantLeaderInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33490768(v21, servantLeaderInfo, kind != 7, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21380932(
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
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusListViewItem_o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4212E13 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E13 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)equipTargetInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33492480(v21, equipTargetInfo, kind == 19, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21381120(
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
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusListViewItem_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4212E14 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E14 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)commandCodeEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v20, v21);
  ServantStatusListViewItem___ctor_33493308(v22, commandCodeEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B0D840(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21381316(
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
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusListViewItem_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4212E15 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E15 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33493704(v21, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21381496(
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
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusListViewItem_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4212E16 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E16 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33493704(v21, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__Open_21381676(
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
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusListViewItem_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4212E17 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4212E17 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v19, v20);
  ServantStatusListViewItem___ctor_33494840(v21, userCommandCodeCollectionEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B0D840(
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
void __fastcall ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        bool noupdate,
        const MethodInfo *method)
{
  bool v3; // w28
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *bgTxtSprite; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v26; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  unsigned int localScale; // s0
  float v29; // s8
  int32_t v30; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  UnityEngine_Object_o *v33; // x24
  int32_t v34; // w23
  BattleServantConfConponent_o *p_isBattleResourceLoading; // x21
  UnityEngine_Object_o *callbackFunc; // x25
  struct ServantStatusDialog_EndDelegate_o **p_callbackFunc; // x24
  UnityEngine_Object_o *v38; // x25
  int32_t v39; // w25
  UnityEngine_GameObject_o *gameObject; // x23
  System_Int32_array **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v48; // x24
  float32x2_t v49; // d8
  float v50; // s9
  unsigned __int64 v51; // d0 OVERLAPPED
  float v52; // s2
  int v53; // s1
  UnityEngine_Transform_o *v54; // x26
  int v55; // s0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x8
  __int64 v61; // x8
  int32_t v62; // w26
  System_Collections_Generic_Dictionary_int__float__o *v63; // x27
  UnityEngine_Transform_o *v64; // x28
  float Item; // s8
  float v66; // s9
  float v67; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x25
  UnityEngine_Object_o *v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t v77; // w21
  __int64 v78; // x1
  __int64 v79; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v81; // x21
  bool v82; // [xsp+Ch] [xbp-74h]
  System_String_o *assetPath; // [xsp+10h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v3 = noupdate;
  if ( (byte_4212E27 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v16);
    sub_B0D8A4(&NGUITools_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_2780/*"Battle2D"*/, v22);
    sub_B0D8A4(&StringLiteral_16260/*"_y0"*/, v23);
    byte_4212E27 = 1;
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
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_93;
      v26 = transform;
      while ( 1 )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v26,
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v26, 0LL);
        v26 = transform;
        if ( !transform )
          goto LABEL_93;
      }
      if ( !Component_WebViewObject )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)Component_WebViewObject,
                                               0LL);
      if ( !transform )
        goto LABEL_93;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      if ( !transform )
        goto LABEL_93;
      v29 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_93;
      v85.fields.x = 1.0 / v29;
      v85.fields.y = 1.0 / v29;
      v85.fields.z = 1.0 / v29;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v85, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.isModify;
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               0LL);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_93;
      v30 = (int)transform;
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
      v33 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      v34 = LimitCountByImageLimitCostumeIn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
      if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
      {
        transform = (UnityEngine_Component_o *)p_isBattleResourceLoading->klass;
        if ( !p_isBattleResourceLoading->klass )
          goto LABEL_93;
        BattleFBXComponent__RevertShaderFloatProperty((BattleFBXComponent_o *)transform, 0LL);
      }
      callbackFunc = (UnityEngine_Object_o *)this->fields.callbackFunc;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_callbackFunc = &this->fields.callbackFunc;
      if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
      {
        v38 = (UnityEngine_Object_o *)*p_callbackFunc;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v38, 0LL);
      }
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v30,
                                               v34,
                                               0LL);
      if ( !this->fields.bgTxtSprite )
        goto LABEL_93;
      v39 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.bgTxtSprite, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v41 = (System_Int32_array **)ServantAssetLoadManager__loadBattleActor(&assetPath, gameObject, v30, v39, 0, 0LL);
      *p_callbackFunc = (struct ServantStatusDialog_EndDelegate_o *)v41;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, v41, v42, v43, v44, v45, v46, v47);
      if ( !v41 )
        goto LABEL_93;
      v48 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)v41,
              (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
      if ( !v48 )
        goto LABEL_93;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v48, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v30,
                                               v39,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_93;
        v49.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v50 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v49.n64_u64[0] = 0LL;
        v50 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
      if ( !transform )
        goto LABEL_93;
      v51 = vadd_f32(v49, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.y).n64_u64[0];
      v52 = v50 + *(float *)&this->fields.titleInfo;
      v53 = HIDWORD(v51);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v51,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
      if ( !transform )
        goto LABEL_93;
      v86.fields.y = 270.0;
      v86.fields.x = 0.0;
      v86.fields.z = 0.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v86, 0LL);
      v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
      *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
      if ( !v54 )
        goto LABEL_93;
      UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
      v60 = *(_QWORD *)&this->fields.isModify;
      if ( v60 )
      {
        v61 = *(_QWORD *)(v60 + 128);
        if ( v61 )
        {
          v82 = v3;
          v62 = *(_DWORD *)(v61 + 156);
          v63 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B0D974(
                                                                         System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                         v58,
                                                                         v59);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v63,
            (const MethodInfo_2E934C0 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v63 )
            goto LABEL_93;
          System_Collections_Generic_Dictionary_int__float___Add(
            v63,
            5,
            0.75,
            (const MethodInfo_2E9406C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v63,
            8,
            0.75,
            (const MethodInfo_2E9406C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v63,
            9,
            0.75,
            (const MethodInfo_2E9406C *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v63,
                 v62,
                 (const MethodInfo_2E942DC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v64 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v63,
                     v62,
                     (const MethodInfo_2E93FAC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v66 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v63,
                    v62,
                    (const MethodInfo_2E93FAC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v67 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v63,
                    v62,
                    (const MethodInfo_2E93FAC *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v64 )
              goto LABEL_93;
            v87.fields.z = v67;
            v87.fields.x = Item;
            v87.fields.y = v66;
            UnityEngine_Transform__set_localScale(v64, v87, 0LL);
            v3 = v82;
            p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v48, v30, v39, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v48, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v48,
          5000.0,
          (System_String_o *)StringLiteral_16260/*"_y0"*/,
          0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v30, v39, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v48, Manager__loadAnimEvents, v30, v39, 0LL);
      BattleFBXComponent__SetWrapMode(
        (BattleFBXComponent_o *)v48,
        *(System_String_o **)&this->fields.confirmDispLv,
        2,
        0LL);
      BattleFBXComponent__playAnimation(
        (BattleFBXComponent_o *)v48,
        *(System_String_o **)&this->fields.confirmDispLv,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v48, 0LL);
      if ( !transform
        || (Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)transform,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v48,
                                                      0LL)) == 0LL) )
      {
LABEL_93:
        sub_B0D97C(transform);
      }
      v70 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)transform,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_93;
        SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v70 )
            goto LABEL_93;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v70, 0LL);
        }
      }
      p_isBattleResourceLoading->klass = (BattleServantConfConponent_c *)v48;
      sub_B0D840(p_isBattleResourceLoading, (System_Int32_array **)v48, v71, v72, v73, v74, v75, v76);
      v77 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v41, v77, 0LL);
      if ( !v3 )
      {
        transform = (UnityEngine_Component_o *)this->fields.profileTabListViewManager;
        if ( !transform )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)transform, 3, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        if ( BYTE2(this->fields.statusLoadAsset) )
        {
          if ( profileTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_32074888(
              (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager,
              2,
              0LL);
            return;
          }
          goto LABEL_93;
        }
        v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v78,
                                                               v79);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v81,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !profileTabListViewManager )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v81, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4212E33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4212E33 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v12);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayChrVoice_21406252(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4212E35 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4212E35 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_String_o *VoiceAssetName; // x22

  v10 = this;
  if ( (byte_4212E34 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_4212E34 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return ServantStatusDialog__PlayVoice(
           v10,
           VoiceAssetName,
           voicePlayListList->fields._items->m_Items[0],
           listIndex,
           v12);
}


bool __fastcall ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct SePlayer_o *voicePlayer; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  int v29; // w19
  int v30; // w20
  _BOOL4 v31; // w0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4212E30 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4212E30 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( voicePlayList && *(_QWORD *)&voicePlayList->max_length )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( !voicePlayer )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voicePlayer,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v34 = v33;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v13 )
      {
        v29 = 0;
        v30 = 1;
        goto LABEL_15;
      }
      if ( !assetName )
        sub_B0D97C(v13);
    }
    while ( !System_String__Equals_43837244(assetName, (System_String_o *)v34.fields.current, 0LL) );
    ServantStatusDialog__StopVoice(this, v14);
    if ( LODWORD(this->fields.tabInitList) == 3 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        sub_B0D97C(0LL);
      ServantStatusVoiceListViewManager__SetMode_29922968(servantNameRangeLabel, 2, listIndex, 0LL);
      LODWORD(this->fields.battleLoadAsset) = listIndex;
    }
    *(_QWORD *)&this->fields.voicePlayNum = voicePlayList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.voicePlayNum,
      (System_Int32_array **)voicePlayList,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    *(_QWORD *)&this->fields.voiceListIndex = assetName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.voiceListIndex,
      (System_Int32_array **)assetName,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    ServantStatusDialog__EndWaitVoice(this, v28);
    v29 = 1;
    v30 = 3;
LABEL_15:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    return v29 & ((unsigned int)(v30 + 1) >> 2);
  }
  else
  {
    LOBYTE(v31) = 0;
  }
  return v31;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int v5; // w8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0

  if ( (byte_4212E3B & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4212E3B = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    v5 = BYTE3(this->fields.statusLoadAsset);
    BYTE2(this->fields.statusLoadAsset) = 1;
    if ( v5 )
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
      ServantStatusCharaGraphListViewManager__SetMode_21350716(servantStatusBattleConfirmDialog, 1, v2);
      servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__SetMode_32074888(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          2,
          0LL);
        servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.battleTabListViewManager;
        if ( servantStatusBattleConfirmDialog )
        {
          ServantStatusFlavorTextListViewManager__SetMode_33470140(
            (ServantStatusFlavorTextListViewManager_o *)servantStatusBattleConfirmDialog,
            2,
            0LL);
          if ( !BYTE4(this->fields.statusLoadAsset) )
            return;
          servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( servantStatusBattleConfirmDialog )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)servantStatusBattleConfirmDialog, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B0D97C(servantStatusBattleConfirmDialog);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v26; // x20
  ServantStatusListViewItem_o *IsContainRandomIndex; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  unsigned __int8 *v35; // x8
  int v36; // w24
  const MethodInfo *v37; // x1
  int v38; // w21
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x22
  __int64 v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  int v45; // w22
  BalanceConfig_c *v46; // x8
  __int64 v47; // x8
  System_Int32_array *v48; // x22
  System_Func_int__bool__o *v49; // x23
  __int64 v50; // x19
  __int64 v51; // x19
  CommonUI_o *v52; // x19
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  System_String_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  CommonConfirmDialog_ClickDelegate_o *v58; // x0
  __int64 *v59; // x8
  __int64 v60; // x19
  __int64 v61; // x19
  __int64 v62; // x1
  __int64 v63; // x2
  CommonConfirmDialog_ClickDelegate_o *v64; // x24
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  ServantStatusListViewManager_CallbackFunc_o *v70; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4212E61 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, v5);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v13);
    sub_B0D8A4(&SoundManager_TypeInfo, v14);
    sub_B0D8A4(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__, v15);
    sub_B0D8A4(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__, v16);
    sub_B0D8A4(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__, v17);
    sub_B0D8A4(&ServantStatusDialog___c__DisplayClass206_0_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12055/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_12053/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    sub_B0D8A4(&StringLiteral_12039/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_B0D8A4(&StringLiteral_12054/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v24);
    sub_B0D8A4(&StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v25);
    byte_4212E61 = 1;
  }
  v26 = sub_B0D974(ServantStatusDialog___c__DisplayClass206_0_TypeInfo, isOwnSetting, method);
  ServantStatusDialog___c__DisplayClass206_0___ctor((ServantStatusDialog___c__DisplayClass206_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_53;
  *(_QWORD *)(v26 + 24) = this;
  *(_BYTE *)(v26 + 20) = isOwnSetting;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  v34 = *(_QWORD *)&this->fields.isModify;
  if ( *(_BYTE *)(v26 + 20) )
  {
    if ( !v34 )
      goto LABEL_53;
    v35 = (unsigned __int8 *)(v34 + 329);
  }
  else
  {
    if ( !v34 )
      goto LABEL_53;
    v35 = (unsigned __int8 *)(v34 + 330);
  }
  v36 = *v35 ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v36 == 0, 0LL);
  IsContainRandomIndex = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v37);
  v38 = (int)IsContainRandomIndex;
  *(_DWORD *)(v26 + 16) = 12;
  if ( v36 )
  {
    v39 = *(_QWORD *)&this->fields.isModify;
    if ( !v39 )
      goto LABEL_53;
    v40 = *(_QWORD *)(v39 + 56);
    if ( !v40 )
      goto LABEL_53;
    v42 = *(_QWORD *)(v40 + 80);
    v41 = *(_QWORD *)(v40 + 88);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v71.fields.currentCryptoKey = v42;
    *(_QWORD *)&v71.fields.fakeValue = v41;
    IsContainRandomIndex = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                            v71,
                                                            0LL);
    v45 = (int)IsContainRandomIndex;
    v46 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    if ( v45 == v46->static_fields->ServantIdMashu1 )
    {
      v47 = *(_QWORD *)&this->fields.isModify;
      if ( !v47 )
        goto LABEL_53;
      v48 = *(System_Int32_array **)(v47 + 336);
      if ( v48 )
      {
        v49 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v43, v44);
        System_Func_int__bool____ctor(
          v49,
          (Il2CppObject *)v26,
          Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        if ( BasicHelper__Any_int__24145568(
               v48,
               (System_Func_T__bool__o *)v49,
               (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
        {
          v50 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
            sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v51 = **(_QWORD **)(v50 + 192);
          if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
            sub_AA65A4(v51);
          v52 = **(CommonUI_o ***)(v51 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12053/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
          v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v56, v57);
          v59 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__;
          goto LABEL_42;
        }
      }
    }
  }
  if ( (v38 & v36 & 1) != 0 )
  {
    v60 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v61 = **(_QWORD **)(v60 + 192);
    if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
      sub_AA65A4(v61);
    v52 = **(CommonUI_o ***)(v61 + 184);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v62, v63);
    v59 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__;
LABEL_42:
    v64 = v58;
    CommonConfirmDialog_ClickDelegate___ctor(v58, (Il2CppObject *)v26, *v59, 0LL);
    if ( v52 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v52,
        (System_String_o *)StringLiteral_1/*""*/,
        v53,
        v54,
        v55,
        v64,
        28,
        0.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        0LL);
      return;
    }
LABEL_53:
    sub_B0D97C(IsContainRandomIndex);
  }
  IsContainRandomIndex = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !IsContainRandomIndex )
    goto LABEL_53;
  if ( *(_BYTE *)(v26 + 20) )
  {
    ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
      IsContainRandomIndex,
      !IsContainRandomIndex->fields.isEnableOwnRandomSetting,
      0LL);
    IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( !IsContainRandomIndex )
      goto LABEL_53;
    ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
      (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
      *(ServantStatusListViewItem_o **)&this->fields.isModify,
      v65);
    IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( !IsContainRandomIndex )
      goto LABEL_53;
    ServantStatusCharaGraphListViewManager__SetEnableScroll(
      (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
      *(ServantStatusListViewItem_o **)&this->fields.isModify,
      v66);
  }
  else
  {
    IsContainRandomIndex->fields.isEnableSupportRandomSetting ^= 1u;
  }
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !IsContainRandomIndex )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)IsContainRandomIndex, 10, 0LL);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v70 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v68,
                                                         v69);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v70,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v70, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4212E60 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4212E60 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          index,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32074888(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          9,
          0LL),
        v7 = this->fields.profileTabListViewManager,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v8,
                                                               v9),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v7) )
  {
    sub_B0D97C(profileTabListViewManager);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v7, 1, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleMaskBase; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4212E26 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flag);
    byte_4212E26 = 1;
  }
  battleMaskBase = (UnityEngine_Object_o *)this->fields.battleMaskBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleMaskBase, 0LL, 0LL) )
  {
    v6 = this->fields.battleMaskBase;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 currentMaskType; // x10
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  ServantLimitImageMaster_o *v16; // x21
  int32_t v17; // w20
  int32_t SvtId; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v20; // x20
  const MethodInfo *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *v28; // x22
  System_String_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  const MethodInfo *v33; // x1
  __int64 v34; // x0

  if ( (byte_4212E29 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, isModifyInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4212E29 = 1;
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  ServantStatusBattleListViewManager__ChangeSelectIndex(voiceTabListViewManager, this->fields.currentMaskType, method);
  v12 = *(_QWORD *)&this->fields.isModify;
  if ( !v12 )
    goto LABEL_32;
  v13 = *(_QWORD *)(v12 + 248);
  if ( !v13 )
    goto LABEL_32;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= *(_DWORD *)(v13 + 24) )
  {
    v34 = sub_B0D9A8(voiceTabListViewManager);
    sub_B0D948(v34, 0LL);
  }
  *(_DWORD *)(v12 + 240) = *(_DWORD *)(v13 + 4 * currentMaskType + 32);
  if ( isModifyInfo )
  {
    voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
    if ( !voiceTabListViewManager )
      goto LABEL_32;
    ServantStatusListViewItem__ModifyInfo((ServantStatusListViewItem_o *)voiceTabListViewManager, 0LL);
  }
  voiceTabListViewManager = *(ServantStatusBattleListViewManager_o **)&this->fields.isModify;
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          (ServantStatusListViewItem_o *)voiceTabListViewManager,
                                          0LL);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)voiceTabListViewManager,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v16 = (ServantLimitImageMaster_o *)voiceTabListViewManager;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusListViewItem__get_SvtId(
                                                                      *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                                      0LL);
  if ( !v16 )
    goto LABEL_32;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                                      v16,
                                                                      (int32_t)voiceTabListViewManager,
                                                                      ConvertOverwriteDispImageLimitCount,
                                                                      0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v17 = (int)voiceTabListViewManager;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(
                                                                      SvtId,
                                                                      v17,
                                                                      0LL);
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v20 = (System_Int32_array **)voiceTabListViewManager;
  if ( System_String__Equals_43837244(
         (System_String_o *)voiceTabListViewManager,
         *(System_String_o **)&this->fields.isBattlePlay,
         0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v21);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v28 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v28, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v20, v22, v23, v24, v25, v26, v27);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !voiceTabListViewManager )
LABEL_32:
    sub_B0D97C(voiceTabListViewManager);
  CommonUI__SetLoadMode((CommonUI_o *)voiceTabListViewManager, 1, 0LL);
  v29 = *(System_String_o **)&this->fields.isBattlePlay;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v29, v32, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v33);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x8
  unsigned int v15; // w9
  UserServantEntity_o *v16; // x0
  __int64 v17; // x8
  System_String_o **v18; // x8
  __int64 v19; // x8
  System_String_o **v20; // x8
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  System_String_o **v24; // x8
  __int64 v25; // x8
  System_String_o **v26; // x8
  __int64 v27; // x8
  __int64 v28; // x9
  UISprite_o *equipSprite; // x20
  __int128 v30; // q1
  ServantStatusDialog_o *v31; // x22
  System_String_o **v32; // x8
  UnityEngine_Object_o *pushSprite; // x20
  __int64 v34; // x8
  __int64 *v35; // x8
  __int64 v36; // x8
  __int64 v37; // x9
  __int128 v38; // q1
  ServantStatusDialog_o *charaGraphListViewManager; // x20
  ServantStatusDialog_o *v40; // x21
  bool v41; // zf
  __int64 v42; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-40h]

  v2 = this;
  if ( (byte_4212E39 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_17185/*"button_lock_reg"*/, v4);
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, v5);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v6);
    sub_B0D8A4(&StringLiteral_17186/*"button_lock_unreg"*/, v7);
    sub_B0D8A4(&StringLiteral_17180/*"button_choice_unreg"*/, v8);
    sub_B0D8A4(&StringLiteral_19391/*"icon_equip"*/, v9);
    sub_B0D8A4(&StringLiteral_17179/*"button_choice_reg"*/, v10);
    sub_B0D8A4(&StringLiteral_19392/*"icon_equip_cc"*/, v11);
    sub_B0D8A4(&StringLiteral_17181/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&StringLiteral_17182/*"button_favorite_unreg"*/, v13);
    byte_4212E39 = 1;
  }
  v14 = *(_QWORD **)&v2->fields.isModify;
  if ( !v14 )
    goto LABEL_87;
  if ( !v14[2] || (v15 = *(_DWORD *)&v2->fields.isInitTab, v15 <= 0x24) && ((1LL << v15) & 0x19E0000000LL) != 0 )
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
  v16 = (UserServantEntity_o *)v14[7];
  if ( v16 )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(v16, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v23 = *(_QWORD *)&v2->fields.isModify;
      if ( !v23 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_87;
      v24 = (System_String_o **)(*(_BYTE *)(v23 + 325) ? &StringLiteral_17185/*"button_lock_reg"*/ : &StringLiteral_17186/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = *(_QWORD *)&v2->fields.isModify;
      if ( !v25 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_87;
      v26 = (System_String_o **)(*(_BYTE *)(v25 + 326) ? &StringLiteral_17179/*"button_choice_reg"*/ : &StringLiteral_17180/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v26, 0LL);
      this = (ServantStatusDialog_o *)v2->fields.favoriteSprite;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)v2->fields.newProfileList, 0LL);
      v27 = *(_QWORD *)&v2->fields.isModify;
      if ( !v27 )
        goto LABEL_87;
      v28 = *(_QWORD *)(v27 + 56);
      if ( !v28 )
        goto LABEL_87;
      equipSprite = v2->fields.equipSprite;
      v30 = *(_OWORD *)(v28 + 32);
      v31 = *(ServantStatusDialog_o **)(v27 + 160);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
      *(_OWORD *)&v45.fields.fakeValue = v30;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v44 = v45;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v44, 0LL);
      if ( !equipSprite )
        goto LABEL_87;
      v32 = (System_String_o **)&StringLiteral_17181/*"button_favorite_reg"*/;
      if ( v31 != this )
        v32 = (System_String_o **)&StringLiteral_17182/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(equipSprite, *v32, 0LL);
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
        v34 = *(_QWORD *)&v2->fields.isModify;
        if ( !v34 )
          goto LABEL_87;
        this = *(ServantStatusDialog_o **)(v34 + 56);
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
          v35 = &StringLiteral_17190/*"button_push_unreg"*/;
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
          v36 = *(_QWORD *)&v2->fields.isModify;
          if ( !v36 )
            goto LABEL_87;
          v37 = *(_QWORD *)(v36 + 56);
          if ( !v37 )
            goto LABEL_87;
          v38 = *(_OWORD *)(v37 + 32);
          charaGraphListViewManager = (ServantStatusDialog_o *)v2->fields.charaGraphListViewManager;
          v40 = *(ServantStatusDialog_o **)(v36 + 168);
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
          *(_OWORD *)&v45.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v43 = v45;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                            &v43,
                                            0LL);
          if ( !charaGraphListViewManager )
            goto LABEL_87;
          v35 = &StringLiteral_17189/*"button_push_reg"*/;
          v41 = v40 == this;
          this = charaGraphListViewManager;
          if ( !v41 )
            v35 = &StringLiteral_17190/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v35, 0LL);
      }
      this = (ServantStatusDialog_o *)v2->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v42 = *(_QWORD *)&v2->fields.isModify;
      if ( !v42 )
        goto LABEL_87;
      if ( !this )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v42 + 327), 0LL);
      this = (ServantStatusDialog_o *)v2->fields.pushButton;
      if ( !this )
        goto LABEL_87;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19391/*"icon_equip"*/, 0LL);
      return;
    }
    v14 = *(_QWORD **)&v2->fields.isModify;
    if ( !v14 )
      goto LABEL_87;
  }
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_87;
  if ( !v14[13] )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v17 = *(_QWORD *)&v2->fields.isModify;
  if ( !v17 )
    goto LABEL_87;
  this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
  if ( !this )
    goto LABEL_87;
  v18 = (System_String_o **)(*(_BYTE *)(v17 + 325) ? &StringLiteral_17185/*"button_lock_reg"*/ : &StringLiteral_17186/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = *(_QWORD *)&v2->fields.isModify) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL
    || (*(_BYTE *)(v19 + 326)
      ? (v20 = (System_String_o **)&StringLiteral_17179/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17180/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteSprite) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_87:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v21 = (UnityEngine_Object_o *)v2->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
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
  v22 = *(_QWORD *)&v2->fields.isModify;
  if ( !v22 )
    goto LABEL_87;
  if ( !this )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, *(_BYTE *)(v22 + 327), 0LL);
  this = (ServantStatusDialog_o *)v2->fields.pushButton;
  if ( !this )
    goto LABEL_87;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19392/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t partyItem; // w20
  UnityEngine_Object_o *inputLockPanel; // x21
  struct UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4212E25 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212E25 = 1;
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
      sub_B0D97C(v7);
    }
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)v7, partyItem, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
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
  UnityEngine_GameObject_o *profileTabBase; // x0
  int v29; // w22
  bool v30; // w1
  System_String_o **v31; // x8
  System_String_o **v32; // x8
  UICommonButton_o *v33; // x21
  bool v34; // w0
  __int64 *v35; // x8
  System_String_o **v36; // x8
  UICommonButton_o *battleButton; // x21
  bool v38; // w0
  char v39; // w2
  bool v40; // w1
  System_String_o **v41; // x8
  __int64 *v42; // x8
  UICommonButton_o *v43; // x21
  bool v44; // w0
  UnityEngine_Object_o *v45; // x21
  __int64 *v46; // x8
  System_String_o **v47; // x8
  System_String_o **v48; // x8
  UICommonButton_o *profileButton; // x21
  bool enabled; // w0
  System_String_o **v51; // x8
  System_String_o **v52; // x8
  UICommonButton_o *voiceButton; // x21
  bool v54; // w0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  System_String_o **v57; // x8
  System_String_o **v58; // x8
  UICommonButton_o *v59; // x21
  bool v60; // w0
  System_String_o **v61; // x8
  System_String_o **v62; // x8
  UICommonButton_o *v63; // x21
  bool v64; // w0
  System_String_o **v65; // x8
  __int64 *v66; // x8
  UICommonButton_o *v67; // x21
  bool v68; // w0
  _BOOL4 v69; // w21
  System_String_o **v70; // x8
  System_String_o **v71; // x8
  UICommonButton_o *profileNewIcon; // x21
  bool v73; // w0
  struct System_Int32_array *profileNewIdList; // x8
  char *v75; // x8
  _BYTE *v76; // x8
  int v77; // t1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  ServantStatusListViewManager_CallbackFunc_o *v81; // x21
  struct ServantStatusFlavorTextListViewManager_o *v82; // x20
  ServantStatusListViewManager_CallbackFunc_o *v83; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v85; // x21
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v87; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x2
  __int64 v98; // x8
  float BgmVolume; // s8
  BgmManager_c *v100; // x0
  BgmManager_c *v101; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v104; // x21
  __int64 v105; // x0
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4212E37 & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&OptionManager_TypeInfo, v10);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectBattle__, v12);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectFlavor__, v13);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectVoice__, v15);
    sub_B0D8A4(&StringLiteral_17100/*"btn_txt_detail_off"*/, v16);
    sub_B0D8A4(&StringLiteral_17084/*"btn_txt_battlecharacter_on"*/, v17);
    sub_B0D8A4(&StringLiteral_17148/*"btn_txt_status_on"*/, v18);
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, v19);
    sub_B0D8A4(&StringLiteral_17147/*"btn_txt_status_off"*/, v20);
    sub_B0D8A4(&StringLiteral_17158/*"btn_txt_voice_on"*/, v21);
    sub_B0D8A4(&StringLiteral_17128/*"btn_txt_profile_on"*/, v22);
    sub_B0D8A4(&StringLiteral_17157/*"btn_txt_voice_off"*/, v23);
    sub_B0D8A4(&StringLiteral_17015/*"btn_bg_19"*/, v24);
    sub_B0D8A4(&StringLiteral_17101/*"btn_txt_detail_on"*/, v25);
    sub_B0D8A4(&StringLiteral_17127/*"btn_txt_profile_off"*/, v26);
    sub_B0D8A4(&StringLiteral_17083/*"btn_txt_battlecharacter_off"*/, v27);
    byte_4212E37 = 1;
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
      profileTabBase = this->fields.profileTabBase;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
        profileTabBase = this->fields.battleTabBase;
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
          profileTabBase = this->fields.voiceTabBase;
          if ( profileTabBase )
          {
            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
            if ( profileTabBase )
            {
              UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
              v45 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
                goto LABEL_27;
              profileTabBase = *(UnityEngine_GameObject_o **)&this->fields.isBattleResourceLoading;
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
      goto LABEL_288;
    }
    if ( kind == 1 )
    {
      profileTabBase = this->fields.profileTabBase;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = this->fields.battleTabBase;
      if ( !profileTabBase )
        goto LABEL_288;
      v30 = 1;
    }
    else
    {
      if ( kind )
      {
LABEL_27:
        v29 = 0;
        goto LABEL_28;
      }
      profileTabBase = this->fields.profileTabBase;
      if ( !profileTabBase
        || (UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL),
            (profileTabBase = this->fields.battleTabBase) == 0LL) )
      {
LABEL_288:
        sub_B0D97C(profileTabBase);
      }
      v30 = 0;
    }
    UnityEngine_GameObject__SetActive(profileTabBase, v30, 0LL);
    profileTabBase = this->fields.voiceTabBase;
    if ( profileTabBase )
    {
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
      if ( profileTabBase )
      {
        UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
        goto LABEL_27;
      }
    }
    goto LABEL_288;
  }
  if ( kind != 3 )
    goto LABEL_13;
  if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
    return;
  profileTabBase = this->fields.profileTabBase;
  LODWORD(this->fields.tabInitList) = 3;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = this->fields.battleTabBase;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = this->fields.voiceTabBase;
  if ( !profileTabBase )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
  profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
  if ( !profileTabBase )
    goto LABEL_288;
  v29 = 1;
  UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
LABEL_28:
  switch ( *(_DWORD *)&this->fields.isInitTab )
  {
    case 4:
    case 5:
    case 7:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( profileTabBase )
      {
        profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
        if ( profileTabBase )
        {
          UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
          if ( profileTabBase )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
              profileTabBase,
              1LL,
              profileTabBase->klass[1]._1.byval_arg.data);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
            if ( profileTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
              if ( profileTabBase )
              {
                v47 = (System_String_o **)&StringLiteral_17147/*"btn_txt_status_off"*/;
                if ( !kind )
                  v47 = (System_String_o **)&StringLiteral_17148/*"btn_txt_status_on"*/;
                UISprite__set_spriteName((UISprite_o *)profileTabBase, *v47, 0LL);
                profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
                if ( profileTabBase )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                    profileTabBase,
                    profileTabBase->klass[2]._1.interopData);
                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
                  if ( profileTabBase )
                  {
                    v48 = (System_String_o **)(kind ? &StringLiteral_17013/*"btn_bg_12"*/ : &StringLiteral_17015/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)profileTabBase, *v48, 0LL);
                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
                    if ( profileTabBase )
                    {
                      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                                     profileTabBase,
                                                                     0LL,
                                                                     BYTE4(this->fields.tabInitList),
                                                                     profileTabBase->klass[1]._1.interfaceOffsets);
                      profileButton = this->fields.profileButton;
                      if ( profileButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.profileButton,
                                    0LL);
                        UICommonButton__SetColliderEnable(profileButton, enabled, BYTE4(this->fields.tabInitList), 0LL);
                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                        if ( profileTabBase )
                        {
                          profileTabBase = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)profileTabBase,
                                             0LL);
                          if ( profileTabBase )
                          {
                            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                            profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                            if ( profileTabBase )
                            {
                              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                profileTabBase,
                                1LL,
                                profileTabBase->klass[1]._1.byval_arg.data);
                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                              if ( profileTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
                                if ( profileTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)profileTabBase,
                                    (System_String_o *)StringLiteral_17127/*"btn_txt_profile_off"*/,
                                    0LL);
                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
                                  if ( profileTabBase )
                                  {
                                    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                      profileTabBase,
                                      profileTabBase->klass[2]._1.interopData);
                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
                                    if ( profileTabBase )
                                    {
                                      UISprite__set_spriteName(
                                        (UISprite_o *)profileTabBase,
                                        (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/,
                                        0LL);
                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
                                      if ( profileTabBase )
                                      {
                                        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                          profileTabBase,
                                          3LL,
                                          1LL,
                                          profileTabBase->klass[1]._1.interfaceOffsets);
                                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                        if ( profileTabBase )
                                        {
                                          profileTabBase = UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)profileTabBase,
                                                             0LL);
                                          if ( profileTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                                            profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                            if ( profileTabBase )
                                            {
                                              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                                profileTabBase,
                                                1LL,
                                                profileTabBase->klass[1]._1.byval_arg.data);
                                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                              if ( profileTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)profileTabBase,
                                                  kind != 2,
                                                  0LL);
                                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
                                                if ( profileTabBase )
                                                {
                                                  v51 = (System_String_o **)&StringLiteral_17084/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17083/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)profileTabBase, *v51, 0LL);
                                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
                                                  if ( profileTabBase )
                                                  {
                                                    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                                      profileTabBase,
                                                      profileTabBase->klass[2]._1.interopData);
                                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceSprite;
                                                    if ( profileTabBase )
                                                    {
                                                      v52 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17015/*"btn_bg_19"*/
                                                                               : &StringLiteral_17013/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v52, 0LL);
                                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
                                                      if ( profileTabBase )
                                                      {
                                                        profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(profileTabBase, 0LL, BYTE4(this->fields.tabInitList), profileTabBase->klass[1]._1.interfaceOffsets);
                                                        voiceButton = this->fields.voiceButton;
                                                        if ( voiceButton )
                                                        {
                                                          v54 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.voiceButton,
                                                                  0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            voiceButton,
                                                            v54,
                                                            BYTE4(this->fields.tabInitList),
                                                            0LL);
                                                          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                          if ( profileTabBase )
                                                          {
                                                            profileTabBase = UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)profileTabBase,
                                                                               0LL);
                                                            if ( profileTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
                                                              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                              if ( profileTabBase )
                                                              {
                                                                ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
                                                                  profileTabBase,
                                                                  1LL,
                                                                  profileTabBase->klass[1]._1.byval_arg.data);
                                                                profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
                                                                if ( profileTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)profileTabBase,
                                                                    0,
                                                                    0LL);
                                                                  profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
                                                                  if ( profileTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)profileTabBase,
                                                                      (System_String_o *)StringLiteral_17157/*"btn_txt_voice_off"*/,
                                                                      0LL);
                                                                    profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
                                                                    if ( profileTabBase )
                                                                    {
                                                                      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
                                                                        profileTabBase,
                                                                        profileTabBase->klass[2]._1.interopData);
                                                                      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
                                                                      if ( profileTabBase )
                                                                      {
                                                                        UISprite__set_spriteName(
                                                                          (UISprite_o *)profileTabBase,
                                                                          (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/,
                                                                          0LL);
                                                                        profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
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
      goto LABEL_288;
    case 0xA:
    case 0x1E:
    case 0x24:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v46 = &StringLiteral_17101/*"btn_txt_detail_on"*/;
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
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v31 = (System_String_o **)&StringLiteral_17147/*"btn_txt_status_off"*/;
      if ( !kind )
        v31 = (System_String_o **)&StringLiteral_17148/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v31, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v32 = (System_String_o **)(kind ? &StringLiteral_17013/*"btn_bg_12"*/ : &StringLiteral_17015/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v32, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v33 = this->fields.profileButton;
      if ( !v33 )
        goto LABEL_288;
      v34 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v33, v34, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v35 = &StringLiteral_17101/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v35 = &StringLiteral_17100/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v35, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v36 = (System_String_o **)(kind == 1 ? &StringLiteral_17015/*"btn_bg_19"*/ : &StringLiteral_17013/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v36, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_288;
      v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v39 = BYTE4(this->fields.tabInitList);
      v40 = v38;
      goto LABEL_215;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v41 = (System_String_o **)&StringLiteral_17147/*"btn_txt_status_off"*/;
      if ( !kind )
        v41 = (System_String_o **)&StringLiteral_17148/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v41, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v42 = &StringLiteral_17015/*"btn_bg_19"*/;
      if ( kind )
        v42 = &StringLiteral_17013/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v42, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v43 = this->fields.profileButton;
      if ( !v43 )
        goto LABEL_288;
      v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v43, v44, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17100/*"btn_txt_detail_off"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
        profileTabBase,
        3LL,
        1LL,
        profileTabBase->klass[1]._1.interfaceOffsets);
      goto LABEL_216;
    case 0x1C:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v46 = &StringLiteral_17127/*"btn_txt_profile_off"*/;
LABEL_210:
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v46, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17015/*"btn_bg_19"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     1LL,
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      battleButton = this->fields.battleButton;
      if ( !battleButton )
        goto LABEL_288;
      v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v39 = 1;
LABEL_215:
      UICommonButton__SetColliderEnable(battleButton, v40, v39, 0LL);
LABEL_216:
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 0, 0LL);
      goto LABEL_221;
    default:
      profileTabBase = *(UnityEngine_GameObject_o **)&this->fields.isModify;
      if ( !profileTabBase )
        goto LABEL_288;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)profileTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 0, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v57 = (System_String_o **)&StringLiteral_17147/*"btn_txt_status_off"*/;
      if ( !kind )
        v57 = (System_String_o **)&StringLiteral_17148/*"btn_txt_status_on"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v57, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v58 = (System_String_o **)(kind ? &StringLiteral_17013/*"btn_bg_12"*/ : &StringLiteral_17015/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v58, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v59 = this->fields.profileButton;
      if ( !v59 )
        goto LABEL_288;
      v60 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v59, v60, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v61 = (System_String_o **)&StringLiteral_17128/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v61 = (System_String_o **)&StringLiteral_17127/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v61, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v62 = (System_String_o **)(kind == 1 ? &StringLiteral_17015/*"btn_bg_19"*/ : &StringLiteral_17013/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v62, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v63 = this->fields.battleButton;
      if ( !v63 )
        goto LABEL_288;
      v64 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v63, v64, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, kind != 2, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      v65 = (System_String_o **)&StringLiteral_17084/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v65 = (System_String_o **)&StringLiteral_17083/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v65, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      if ( kind == 2 )
        v66 = &StringLiteral_17015/*"btn_bg_19"*/;
      else
        v66 = &StringLiteral_17013/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)*v66, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !profileTabBase )
        goto LABEL_287;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      v67 = this->fields.voiceButton;
      if ( !v67 )
        goto LABEL_287;
      v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
      UICommonButton__SetColliderEnable(v67, v68, BYTE4(this->fields.tabInitList), 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      v69 = isPlayVoice;
      profileTabBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)profileTabBase, 0LL);
      if ( !profileTabBase )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive(profileTabBase, 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))profileTabBase->klass[1]._1.namespaze)(
        profileTabBase,
        1LL,
        profileTabBase->klass[1]._1.byval_arg.data);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      if ( !v69 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, 0, 0LL);
        profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
        if ( profileTabBase )
        {
          UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17157/*"btn_txt_voice_off"*/, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
          if ( profileTabBase )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
              profileTabBase,
              profileTabBase->klass[2]._1.interopData);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
            if ( profileTabBase )
            {
              UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17013/*"btn_bg_12"*/, 0LL);
              profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
              if ( profileTabBase )
              {
LABEL_142:
                profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                               profileTabBase,
                                                               3LL,
                                                               1LL,
                                                               profileTabBase->klass[1]._1.interfaceOffsets);
                goto LABEL_221;
              }
            }
          }
        }
LABEL_287:
        sub_B0D97C(profileTabBase);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, (unsigned __int8)v29 != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_287;
      v70 = (System_String_o **)&StringLiteral_17158/*"btn_txt_voice_on"*/;
      if ( !v29 )
        v70 = (System_String_o **)&StringLiteral_17157/*"btn_txt_voice_off"*/;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v70, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_287;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !profileTabBase )
        goto LABEL_287;
      v71 = (System_String_o **)(v29 ? &StringLiteral_17015/*"btn_bg_19"*/ : &StringLiteral_17013/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)profileTabBase, *v71, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
      if ( !profileTabBase )
        goto LABEL_287;
      profileTabBase = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))profileTabBase->klass[1]._1.implementedInterfaces)(
                                                     profileTabBase,
                                                     0LL,
                                                     BYTE4(this->fields.tabInitList),
                                                     profileTabBase->klass[1]._1.interfaceOffsets);
      profileNewIcon = (UICommonButton_o *)this->fields.profileNewIcon;
      if ( !profileNewIcon )
        goto LABEL_287;
      v73 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileNewIcon, 0LL);
      UICommonButton__SetColliderEnable(profileNewIcon, v73, BYTE4(this->fields.tabInitList), 0LL);
LABEL_221:
      profileNewIdList = this->fields.profileNewIdList;
      if ( !profileNewIdList )
        goto LABEL_287;
      if ( profileNewIdList->max_length <= kind )
      {
        v105 = sub_B0D9A8(profileTabBase);
        sub_B0D948(v105, 0LL);
      }
      v75 = (char *)profileNewIdList + kind;
      v77 = (unsigned __int8)v75[32];
      v76 = v75 + 32;
      if ( v77 )
      {
        switch ( kind )
        {
          case 0:
            goto LABEL_232;
          case 1:
            goto LABEL_235;
          case 2:
            goto LABEL_239;
          case 3:
            goto LABEL_255;
          default:
            goto LABEL_276;
        }
      }
      *v76 = 1;
      switch ( kind )
      {
        case 0:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            0LL);
          if ( BYTE1(this->fields.statusLoadAsset) )
            goto LABEL_232;
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)profileTabBase, 6, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_32074888((ServantStatusListViewManager_o *)profileTabBase, 4, 0LL);
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                 ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                 v79,
                                                                 v80);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v81,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v81,
            0LL);
LABEL_232:
          v82 = this->fields.profileTabListViewManager;
          v83 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                 ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                 v55,
                                                                 v56);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v83,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v82 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v82, 1, v83, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v56);
LABEL_235:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v85 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                           ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                           v55,
                                                                           v56);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v85,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            1,
            v85,
            0LL);
          break;
        case 2:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.voiceTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            v56);
LABEL_239:
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          v87 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                       ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                       v55,
                                                                       v56);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v87,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v87;
          sub_B0D840(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v87,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
          ServantStatusBattleListViewManager__SetMode_21336760(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v94,
            v95);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          if ( !byte_4212D36 )
          {
            sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v96);
            byte_4212D36 = 1;
          }
          profileTabBase = (UnityEngine_GameObject_o *)RandomLimitCountManager_TypeInfo;
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            profileTabBase = (UnityEngine_GameObject_o *)RandomLimitCountManager_TypeInfo;
          }
          if ( !*(_BYTE *)(*(_QWORD *)&profileTabBase[7].fields.m_CachedPtr + 8LL) )
            goto LABEL_252;
          v98 = *(_QWORD *)&this->fields.isModify;
          if ( !v98 )
            goto LABEL_287;
          if ( !*(_BYTE *)(v98 + 192) )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v96);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, *(ServantStatusListViewItem_o **)&this->fields.isModify, v97);
          break;
        case 3:
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.servantNameRangeLabel;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            (ServantStatusVoiceListViewManager_o *)profileTabBase,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            (System_Int32_array *)this->fields.requestVoiceDataList,
            0LL);
LABEL_255:
          if ( !BYTE3(this->fields.statusLoadAsset) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            BgmVolume = OptionManager__GetBgmVolume(0LL);
            v100 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v100 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v100->static_fields->LOW_VOLUME )
            {
              BYTE3(this->fields.statusLoadAsset) = 1;
              if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              }
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v101 = BgmManager_TypeInfo;
                if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v101 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v101->static_fields->LOW_VOLUME;
                if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !OptionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                }
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          v104 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                       ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                       v55,
                                                                       v56);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v104,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !servantNameRangeLabel )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v104, 0LL);
          break;
        default:
          break;
      }
LABEL_276:
      if ( !(v29 & 1 | (BYTE3(this->fields.statusLoadAsset) == 0)) )
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
  __int64 v5; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4212E3C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isVisible);
    sub_B0D8A4(&StringLiteral_23268/*"wait"*/, v5);
    byte_4212E3C = 1;
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
      v7 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
      {
        bgTxtSprite = *(UnityEngine_Component_o **)&this->fields.isBattleResourceLoading;
        if ( bgTxtSprite )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)bgTxtSprite,
            (System_String_o *)StringLiteral_23268/*"wait"*/,
            0LL);
          return;
        }
LABEL_14:
        sub_B0D97C(bgTxtSprite);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UILabel_o *battleMaskInfoLabel; // x8
  UILabel_o *battleChr; // x19
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_4212E1A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12045/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_BATTLE"*/, v6);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v7);
    byte_4212E1A = 1;
  }
  if ( !item )
    goto LABEL_26;
  if ( item->fields.userSvtEntity )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    this = (ServantStatusDialog_o *)OptionManager__GetRandomLimitCountOwn(0LL);
    battleMaskInfoLabel = v4->fields.battleMaskInfoLabel;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !battleMaskInfoLabel )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v4->fields.battleMaskInfoLabel, 1, 0LL);
      battleChr = (UILabel_o *)v4->fields.battleChr;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_12045/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_BATTLE"*/;
      goto LABEL_22;
    }
    if ( !battleMaskInfoLabel )
      goto LABEL_26;
    if ( item->fields.isEnableOwnRandomSetting )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v4->fields.battleMaskInfoLabel, 1, 0LL);
      battleChr = (UILabel_o *)v4->fields.battleChr;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_12049/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/;
LABEL_22:
      this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
      if ( battleChr )
      {
        UILabel__set_text(battleChr, (System_String_o *)this, 0LL);
        return;
      }
LABEL_26:
      sub_B0D97C(this);
    }
    this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel;
  }
  else
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel;
    if ( !this )
      goto LABEL_26;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantStatusListViewItem_o *Instance; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  ServantLimitImageMaster_o *v12; // x21
  int32_t v13; // w20
  int32_t SvtId; // w21
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v16; // x20
  const MethodInfo *v17; // x1
  bool v18; // w22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *v25; // x22
  const MethodInfo *v26; // x2
  System_String_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  const MethodInfo *v31; // x1
  __int64 v33; // x8

  if ( (byte_4212E22 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4212E22 = 1;
  }
  Instance = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !Instance )
    goto LABEL_39;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          Instance,
                                          0LL);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v12 = (ServantLimitImageMaster_o *)Instance;
  Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(
                                              *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                              0LL);
  if ( !v12 )
    goto LABEL_39;
  Instance = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                              v12,
                                              (int32_t)Instance,
                                              ConvertOverwriteDispImageLimitCount,
                                              0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v13 = (int)Instance;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Instance = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getActorFolderNameFromDisp(SvtId, v13, 0LL);
  if ( !Instance )
    goto LABEL_39;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v16 = (System_Int32_array **)Instance;
  if ( System_String__Equals_43837244((System_String_o *)Instance, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    if ( LOBYTE(this->fields.defaultAnimationName) )
      return 0;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4212D36 )
    {
      sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v17);
      byte_4212D36 = 1;
    }
    Instance = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      Instance = (ServantStatusListViewItem_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( !LOBYTE(Instance->fields.commandCodeCommentEntity->monitor) )
      return 0;
    v33 = *(_QWORD *)&this->fields.isModify;
    if ( v33 )
    {
      if ( !*(_BYTE *)(v33 + 192) )
        ServantStatusDialog__EndLoadBattle_21396500(this, v17);
      return 0;
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v25 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v25, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v16, v19, v20, v21, v22, v23, v24);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  LOBYTE(this->fields.defaultAnimationName) = 1;
  ServantStatusDialog__SetTabKind(this, 2, v26);
  v27 = *(System_String_o **)&this->fields.isBattlePlay;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v18 = 1;
  if ( !AssetManager__loadAssetStorage(v27, v30, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v31);
    return 1;
  }
  return v18;
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *SvtId; // x0
  int32_t v8; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x8
  struct System_String_o *CommandCardLoadFolderNameDisp; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *cardLoadAsset; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  AssetLoader_LoadEndDataHandler_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  AssetData_o *v35; // x1
  const MethodInfo *v36; // x2

  if ( (byte_4212E1D & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v4);
    sub_B0D8A4(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4212E1D = 1;
  }
  SvtId = *(WebViewManager_o **)&this->fields.isModify;
  if ( !SvtId )
    goto LABEL_16;
  SvtId = (WebViewManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)SvtId, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_16;
  v8 = (int)SvtId;
  LimitCount = ServantStatusListViewItem__get_LimitCount(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v8, LimitCount, 0LL);
  this->fields.cardLoadAsset = StatusImageFolderName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cardLoadAsset,
    (System_Int32_array **)StatusImageFolderName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SvtId = *(WebViewManager_o **)&this->fields.isModify;
  if ( !SvtId
    || (SvtId = (WebViewManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)SvtId, 0LL),
        (v17 = *(_QWORD *)&this->fields.isModify) == 0)
    || (CommandCardLoadFolderNameDisp = ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
                                          (int32_t)SvtId,
                                          *(_DWORD *)(v17 + 256),
                                          0LL),
        this->fields.loadVoiceData = CommandCardLoadFolderNameDisp,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.loadVoiceData,
          (System_Int32_array **)CommandCardLoadFolderNameDisp,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (SvtId = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(SvtId);
  }
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  cardLoadAsset = this->fields.cardLoadAsset;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27);
  AssetLoader_LoadEndDataHandler___ctor(v28, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(cardLoadAsset, v28, 1, 0LL) )
  {
    this->fields.cardLoadAsset = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v29, v30, v31, v32, v33, v34);
    ServantStatusDialog__EndStatusLoad(this, v35, v36);
  }
}


bool __fastcall ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  NetworkManager_c *v18; // x0
  bool v19; // w19
  DataManager_o *Instance; // x0
  ServantChangeMaster_o *v22; // x20
  struct System_Collections_Generic_List_string__o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  unsigned __int64 v31; // x22
  int32_t v32; // w20
  BalanceConfig_c *v33; // x8
  ServantLimitAddMaster_o *v34; // x21
  __int64 v35; // x9
  int32_t v36; // w4
  const MethodInfo *v37; // x5
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v39; // x21
  unsigned __int64 v40; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  struct System_Collections_Generic_List_string__o *v42; // x22
  int32_t v43; // w4
  const MethodInfo *v44; // x5
  struct System_Collections_Generic_List_string__o *v45; // x22
  int32_t v46; // w4
  const MethodInfo *v47; // x5
  struct System_Collections_Generic_List_string__o *v48; // x22
  int32_t v49; // w4
  const MethodInfo *v50; // x5
  BalanceConfig_c *v51; // x8
  int v52; // w22
  struct System_Collections_Generic_List_string__o *v53; // x22
  int32_t v54; // w4
  const MethodInfo *v55; // x5
  struct System_Collections_Generic_List_string__o *v56; // x22
  int32_t v57; // w4
  const MethodInfo *v58; // x5
  struct System_Collections_Generic_List_string__o *v59; // x22
  int32_t ServantIdMashu3; // w2
  BalanceConfig_c *v61; // x8
  int v62; // w22
  struct System_Collections_Generic_List_string__o *v63; // x22
  int32_t v64; // w4
  const MethodInfo *v65; // x5
  struct System_Collections_Generic_List_string__o *v66; // x22
  int32_t v67; // w4
  const MethodInfo *v68; // x5
  struct System_Collections_Generic_List_string__o *v69; // x22
  int64_t UserId; // x24
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w22
  int32_t MashuTdGradeUpQuestPhase; // w23
  struct System_Collections_Generic_List_string__o *v74; // x22
  int32_t v75; // w4
  const MethodInfo *v76; // x5
  struct System_Collections_Generic_List_string__o *v77; // x22
  ServantVoiceRelationEntity_array *v78; // x23
  signed int max_length; // w8
  unsigned int v80; // w24
  ServantVoiceRelationEntity_o *v81; // x25
  struct System_Collections_Generic_List_string__o *voiceDataList; // x20
  __int64 v83; // x21
  __int64 v84; // x22
  ServantStatusDialog_o *v85; // x0
  int32_t v86; // w4
  const MethodInfo *v87; // x5
  struct System_Collections_Generic_List_string__o *v88; // x20
  ServantStatusDialog_o *v89; // x0
  int32_t v90; // w4
  const MethodInfo *v91; // x5
  struct System_Collections_Generic_List_string__o *v92; // x20
  ServantStatusDialog_o *v93; // x0
  int32_t v94; // w4
  const MethodInfo *v95; // x5
  struct System_Collections_Generic_List_string__o *v96; // x8
  const MethodInfo *v97; // x2
  __int64 v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct System_Collections_Generic_List_string__o *v105; // x20
  struct System_Int32_array *v106; // x1
  System_String_o *changeSvtVoiceIdList; // x20
  __int64 v108; // x1
  __int64 v109; // x2
  System_Action_o *v110; // x21
  __int64 v111; // x0
  unsigned __int64 v112; // [xsp+8h] [xbp-68h]
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // [xsp+10h] [xbp-60h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_4212E2D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&CondType_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&Method_ServantStatusDialog_EndLoadVoice__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    byte_4212E2D = 1;
  }
  relationList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42124CA )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_42124CA = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  if ( v18->static_fields->isRebootBlock )
    return 1;
  if ( this->fields.requestVoiceDataList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_120;
  v22 = (ServantChangeMaster_o *)Instance;
  Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId(
                                *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                0LL);
  if ( !v22 )
    goto LABEL_120;
  v23 = (struct System_Collections_Generic_List_string__o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                                              v22,
                                                              (int32_t)Instance,
                                                              0LL);
  this->fields.requestVoiceDataList = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.requestVoiceDataList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_120;
  requestVoiceDataList = this->fields.requestVoiceDataList;
  v30 = *(_QWORD *)&requestVoiceDataList->fields._size;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v30 )
        goto LABEL_121;
      v32 = *((_DWORD *)&requestVoiceDataList->fields._syncRoot + v31);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v33 = BalanceConfig_TypeInfo;
      v34 = (ServantLimitAddMaster_o *)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      v35 = *(_QWORD *)&this->fields.isModify;
      if ( !v35 )
        goto LABEL_120;
      if ( !v34 )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                    v34,
                                    v32,
                                    v33->static_fields->ServantLimitMax,
                                    *(System_Int32_array **)(v35 + 208),
                                    0LL);
      if ( !Instance )
        goto LABEL_120;
      datalist = Instance->fields.datalist;
      v39 = Instance;
      v112 = v31;
      if ( (int)datalist >= 1 )
        break;
LABEL_85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !Instance )
        goto LABEL_120;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)Instance, &relationList, v32, 0LL);
      v78 = relationList;
      if ( !relationList )
        goto LABEL_120;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v80 = 0;
        while ( v80 < max_length )
        {
          v81 = v78->m_Items[v80];
          if ( !v81 )
            goto LABEL_120;
          voiceDataList = this->fields.voiceDataList;
          v84 = *(_QWORD *)&v81->fields.relationSvtId.fields.currentCryptoKey;
          v83 = *(_QWORD *)&v81->fields.relationSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v115.fields.currentCryptoKey = v84;
          *(_QWORD *)&v115.fields.fakeValue = v83;
          v85 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v115, 0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v85, 0, (int32_t)v85, 0, v86, v87);
          if ( !voiceDataList )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          v88 = this->fields.voiceDataList;
          v89 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                           v81->fields.relationSvtId,
                                           0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v89, 2, (int32_t)v89, 0, v90, v91);
          if ( !v88 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v88,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          v92 = this->fields.voiceDataList;
          v93 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                           v81->fields.relationSvtId,
                                           0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v93, 1, (int32_t)v93, 0, v94, v95);
          if ( !v92 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          max_length = v78->max_length;
          if ( (int)++v80 >= max_length )
            goto LABEL_99;
        }
LABEL_121:
        v111 = sub_B0D9A8(Instance);
        sub_B0D948(v111, 0LL);
      }
LABEL_99:
      LODWORD(v30) = requestVoiceDataList->fields._size;
      v31 = v112 + 1;
      if ( (__int64)(v112 + 1) >= (int)v30 )
        goto LABEL_100;
    }
    v40 = 0LL;
    p_lookup = &Instance->fields.lookup;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)datalist )
        goto LABEL_121;
      v42 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    0,
                                    v32,
                                    *((_DWORD *)p_lookup + v40),
                                    v36,
                                    v37);
      if ( !v42 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v40 >= LODWORD(v39->fields.datalist) )
        goto LABEL_121;
      v45 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    2,
                                    v32,
                                    *((_DWORD *)p_lookup + v40),
                                    v43,
                                    v44);
      if ( !v45 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v40 >= LODWORD(v39->fields.datalist) )
        goto LABEL_121;
      v48 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    1,
                                    v32,
                                    *((_DWORD *)p_lookup + v40),
                                    v46,
                                    v47);
      if ( !v48 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v48,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v51 = BalanceConfig_TypeInfo;
      v52 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      if ( v52 == v51->static_fields->ServantIdJekyll )
        break;
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v61 = BalanceConfig_TypeInfo;
      v62 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( v62 == v61->static_fields->ServantIdMashu1 )
      {
        v63 = this->fields.voiceDataList;
        if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v61);
        if ( v40 >= LODWORD(v39->fields.datalist) )
          goto LABEL_121;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      0,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v40),
                                      v36,
                                      v37);
        if ( !v63 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v40 >= LODWORD(v39->fields.datalist) )
          goto LABEL_121;
        v66 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      2,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v40),
                                      v64,
                                      v65);
        if ( !v66 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v66,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v40 >= LODWORD(v39->fields.datalist) )
          goto LABEL_121;
        v69 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      1,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v40),
                                      v67,
                                      v68);
        if ( !v69 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v69,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
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
        Instance = (DataManager_o *)CondType__IsQuestPhaseClear(
                                      UserId,
                                      MashuTdGradeUpQuestId,
                                      MashuTdGradeUpQuestPhase,
                                      -1,
                                      0,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)BalanceConfig_TypeInfo;
          v74 = this->fields.voiceDataList;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( v40 >= LODWORD(v39->fields.datalist) )
            goto LABEL_121;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        0,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v40),
                                        v36,
                                        v37);
          if ( !v74 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v74,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v40 >= LODWORD(v39->fields.datalist) )
            goto LABEL_121;
          v77 = this->fields.voiceDataList;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        2,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v40),
                                        v75,
                                        v76);
          if ( !v77 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v77,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v40 >= LODWORD(v39->fields.datalist) )
            goto LABEL_121;
          v59 = this->fields.voiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_52;
        }
      }
LABEL_84:
      LODWORD(datalist) = v39->fields.datalist;
      if ( (__int64)++v40 >= (int)datalist )
        goto LABEL_85;
    }
    v53 = this->fields.voiceDataList;
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( v40 >= LODWORD(v39->fields.datalist) )
      goto LABEL_121;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  0,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v40),
                                  v49,
                                  v50);
    if ( !v53 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v40 >= LODWORD(v39->fields.datalist) )
      goto LABEL_121;
    v56 = this->fields.voiceDataList;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  2,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v40),
                                  v54,
                                  v55);
    if ( !v56 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v40 >= LODWORD(v39->fields.datalist) )
      goto LABEL_121;
    v59 = this->fields.voiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_52:
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  1,
                                  ServantIdMashu3,
                                  *((_DWORD *)p_lookup + v40),
                                  v57,
                                  v58);
    if ( !v59 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_84;
  }
LABEL_100:
  v96 = this->fields.voiceDataList;
  if ( !v96 )
    goto LABEL_120;
  if ( v96->fields._size < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v97);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42124CA )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v98);
    byte_42124CA = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(Instance[1].fields.saveNameList[3].fields._items) )
    return 1;
  v105 = this->fields.voiceDataList;
  if ( !v105 )
    goto LABEL_120;
  if ( !v105->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v106 = (struct System_Int32_array *)v105->fields._items->m_Items[0];
  this->fields.changeSvtVoiceIdList = v106;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
    (System_Int32_array **)v106,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  Instance = (DataManager_o *)this->fields.voiceDataList;
  if ( !Instance )
LABEL_120:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    0,
    (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  v110 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v108, v109);
  System_Action___ctor(v110, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v19 = 1;
  SoundManager__loadAudioAssetStorage(changeSvtVoiceIdList, v110, 1, 0LL);
  return v19;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  SePlayer_o *voicePlayList; // x20
  System_Action_o *v20; // x21
  BattleServantConfConponent_o *p_voicePlayList; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4212E2F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusDialog_EndPlayVoice__, v4);
    sub_B0D8A4(&StringLiteral_6005/*"EndWaitVoice"*/, v5);
    byte_4212E2F = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_29922968(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
  if ( *(_QWORD *)&this->fields.voicePlayNum )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6005/*"EndWaitVoice"*/,
      0LL);
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v7, v8, v9, v10, v11, v12);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v13, v14, v15, v16, v17, v18);
  }
  voicePlayList = (SePlayer_o *)this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayList, v20, 0LL);
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayList;
    if ( servantNameRangeLabel )
    {
      p_voicePlayList = (BattleServantConfConponent_o *)&this->fields.voicePlayList;
      SePlayer__StopSe((SePlayer_o *)servantNameRangeLabel, 0.0, 0LL);
      p_voicePlayList->klass = 0LL;
      sub_B0D840(p_voicePlayList, 0LL, v22, v23, v24, v25, v26, v27);
      return;
    }
LABEL_13:
    sub_B0D97C(servantNameRangeLabel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x8

  if ( (byte_4212E6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_B0D8A4(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212E6C = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       cvId,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (battleTabListViewManager = this->fields.battleTabListViewManager) == 0LL )
    {
      sub_B0D97C(Instance);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  ServantStatusFlavorTextListViewManager_o *v21; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v22; // x21
  struct System_Int32_array *profileNewIdList; // x8
  __int64 v24; // x0

  v4 = this;
  if ( (byte_4212E6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantCommentEntity___ctor__, setMode);
    sub_B0D8A4(&System_Action_ServantCommentEntity__TypeInfo, v5);
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectFlavor__, v7);
    this = (ServantStatusDialog_o *)sub_B0D8A4(&Method_ServantStatusDialog__UpdateProfileList_b__219_0__, v8);
    byte_4212E6B = 1;
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
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_ServantCommentEntity__TypeInfo,
                                                                                 v10,
                                                                                 v11);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog__UpdateProfileList_b__219_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_ServantCommentEntity___ctor__);
    if ( !battleTabListViewManager )
      goto LABEL_13;
    battleTabListViewManager->fields.sortKindButton = (struct UICommonButton_o *)v12;
    sub_B0D840(
      (BattleServantConfConponent_o *)&battleTabListViewManager->fields.sortKindButton,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( setMode )
    {
      v21 = (ServantStatusFlavorTextListViewManager_o *)v4->fields.battleTabListViewManager;
      v22 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                       ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                       v19,
                                                                       v20);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v21 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v21, 1, v22, 0LL);
        return;
      }
LABEL_13:
      sub_B0D97C(this);
    }
  }
  else
  {
    profileNewIdList = v4->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_13;
    if ( profileNewIdList->max_length <= 1 )
    {
      v24 = sub_B0D9A8(this);
      sub_B0D948(v24, 0LL);
    }
    BYTE1(profileNewIdList->m_Items[1]) = 0;
  }
}


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
    sub_B0D97C(this);
  }
}


void __fastcall ServantStatusDialog__UpdateServantParameters(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x8

  v4 = *(_QWORD *)&this->fields.isModify;
  if ( !v4 )
    goto LABEL_7;
  if ( *(_QWORD *)(v4 + 56) || !*(_QWORD *)(v4 + 88) )
  {
    this = (ServantStatusDialog_o *)this->fields.battleTabListViewManager;
    if ( this )
    {
      ServantStatusFlavorTextListViewManager__UpdateParameter(
        (ServantStatusFlavorTextListViewManager_o *)this,
        svtId,
        imageLimitCount,
        0LL);
      return;
    }
LABEL_7:
    sub_B0D97C(this);
  }
}


void __fastcall ServantStatusDialog___InitList_b__162_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  *((_BYTE *)&this->fields.currentMaskType + 4) = 0;
}


void __fastcall ServantStatusDialog___Init_b__125_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AtlasManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4212E70 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_4212E70 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v7);
  }
  else
  {
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v9, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__209_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabKind; // w20
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  PartyOrganizationUtility_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4212E71 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_4212E71 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetAutoResumeByQuestId(tabKind, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_17017160(Instance, v12, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  v13 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !v13
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v13, 0LL),
        (v13 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(v13);
  }
  v13->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v14);
}


void __fastcall ServantStatusDialog___OnclickRandomLimitCountMask_b__181_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void __fastcall ServantStatusDialog___UpdateProfileList_b__219_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x8
  __int64 v13; // x8
  ServantCommentMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  int32_t v17; // w22
  System_Int32_array *v18; // x23
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4212E72 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4212E72 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo
    && System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mainInfo,
         (WarBoardManager_TaskList_o *)entity,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.mainInfo;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        Master_WarQuestSelectionMaster,
        (WarBoardManager_TaskList_o *)entity,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v12 = *(_QWORD *)&this->fields.isModify;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 128);
        if ( v13 )
        {
          v14 = (ServantCommentMaster_o *)Master_WarQuestSelectionMaster;
          v16 = *(_QWORD *)(v13 + 16);
          v15 = *(_QWORD *)(v13 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v21.fields.currentCryptoKey = v16;
          *(_QWORD *)&v21.fields.fakeValue = v15;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
          Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B0D8BC(int___TypeInfo, 1LL);
          if ( entity )
          {
            v18 = (System_Int32_array *)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              if ( !Master_WarQuestSelectionMaster->fields._size )
                goto LABEL_23;
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.id;
              Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B0D8BC(int___TypeInfo, 1LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_22;
              if ( !Master_WarQuestSelectionMaster->fields._size )
              {
LABEL_23:
                v20 = sub_B0D9A8(Master_WarQuestSelectionMaster);
                sub_B0D948(v20, 0LL);
              }
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.priority;
              if ( v14 )
              {
                ServantCommentMaster__SetOpen_27076460(
                  v14,
                  v17,
                  v18,
                  (System_Int32_array *)Master_WarQuestSelectionMaster,
                  0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v19);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4212269 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isModify);
    byte_4212269 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusDialog_EndDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantStatusDialog_EndDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ServantStatusDialog_EndDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusDialog_EndDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isModify, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isModify, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isModify, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isModify, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isModify,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isModify, v21);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  char v11[4]; // [xsp+18h] [xbp-28h] BYREF
  char v12[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_421226A & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isModify);
    byte_421226A = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_B0D848(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, isModify, isNeedSort, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v11);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = isModify;
  v12 = questId;
  if ( (byte_421226B & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isModify);
    sub_B0D8A4(&int_TypeInfo, v9);
    byte_421226B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, isModify, *(_QWORD *)&questId, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v11);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  char v14[4]; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  v13 = questId;
  if ( (byte_421226C & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isModify);
    sub_B0D8A4(&int_TypeInfo, v10);
    byte_421226C = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, isModify, isNeedSort, *(_QWORD *)&questId);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
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
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
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
            v20 = sub_AA67A0(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))sub_B0D954(v19, v24);
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
            v18 = sub_AA67A0(v23, class_0, v13);
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


void __fastcall ServantStatusDialog___c__DisplayClass202_0___ctor(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass202_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x19
  __int64 v9; // x20
  __int64 v10; // x20
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22

  v4 = this;
  if ( (byte_4212265 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v5);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B0D8A4(
                                                             &Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
                                                             v6);
    byte_4212265 = 1;
  }
  if ( isDecide )
  {
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)v4->fields.__4__this;
    if ( this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed((ServantStatusDialog_o *)this, v4->fields.type, 0LL);
      v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v8 = **(_QWORD **)(v7 + 192);
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AA65A4(v8);
      this = **(ServantStatusDialog___c__DisplayClass202_0_o ***)(v8 + 184);
      if ( this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B0D97C(this);
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__
                                                                      + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AA65A4(v10);
  v11 = **(CommonUI_o ***)(v10 + 184);
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(&v4->fields.__9__1, _9__1);
  }
  if ( !v11 )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_17017160(v11, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog___c__DisplayClass202_0_o *v3; // x19
  __int64 v4; // x1
  struct ServantStatusDialog_o *_4__this; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v7; // x21
  __int64 v8; // x9

  v3 = this;
  if ( (byte_4212266 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    byte_4212266 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (profileTabListViewManager = (ServantStatusListViewManager_o *)_4__this->fields.profileTabListViewManager,
        v7 = sub_B0D974(ServantStatusListViewManager_CallbackFunc_TypeInfo, method, v2),
        v8 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v7 + 40) = Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v7 + 16) = v8,
        *(_QWORD *)(v7 + 32) = _4__this,
        sub_B0D840(v7 + 32, _4__this),
        !profileTabListViewManager) )
  {
    sub_B0D97C(this);
  }
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v7,
    0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass206_0___ctor(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  struct ServantStatusFlavorTextListViewManager_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *v10; // x8
  struct ServantStatusDialog_o **p__4__this; // x19
  struct ServantStatusDialog_o *_4__this; // t1
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  struct ServantStatusDialog_o *v17; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v19; // x21
  __int64 v20; // x9

  if ( (byte_4212267 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4212267 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  servantStatusBattleConfirmDialog = **(struct ServantStatusFlavorTextListViewManager_o ***)(v8 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_17017160((CommonUI_o *)servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( !isDecide )
  {
    p__4__this = &this->fields.__4__this;
    goto LABEL_19;
  }
  _4__this = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v10 = _4__this;
  if ( !_4__this )
    goto LABEL_24;
  servantStatusBattleConfirmDialog = *(struct ServantStatusFlavorTextListViewManager_o **)&v10->fields.isModify;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  if ( !*((_BYTE *)p__4__this - 4) )
  {
    *(&servantStatusBattleConfirmDialog[1].fields.isInput + 2) ^= 1u;
    goto LABEL_19;
  }
  ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
    (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
    !*(&servantStatusBattleConfirmDialog[1].fields.isInput + 1),
    0LL);
  v13 = *p__4__this;
  if ( !*p__4__this
    || (servantStatusBattleConfirmDialog = (struct ServantStatusFlavorTextListViewManager_o *)v13->fields.servantStatusBattleConfirmDialog) == 0LL
    || (ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
          (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
          *(ServantStatusListViewItem_o **)&v13->fields.isModify,
          0LL),
        (v14 = *p__4__this) == 0LL)
    || (servantStatusBattleConfirmDialog = (struct ServantStatusFlavorTextListViewManager_o *)v14->fields.servantStatusBattleConfirmDialog) == 0LL )
  {
LABEL_24:
    sub_B0D97C(servantStatusBattleConfirmDialog);
  }
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    *(ServantStatusListViewItem_o **)&v14->fields.isModify,
    0LL);
LABEL_19:
  if ( !*p__4__this )
    goto LABEL_24;
  servantStatusBattleConfirmDialog = (*p__4__this)->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode_32074888(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v17 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v17->fields.profileTabListViewManager;
  v19 = sub_B0D974(ServantStatusListViewManager_CallbackFunc_TypeInfo, v15, v16);
  v20 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v19 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v19 + 16) = v20;
  *(_QWORD *)(v19 + 32) = v17;
  sub_B0D840(v19 + 32, v17);
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v19,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog___c__DisplayClass206_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass206_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x21
  struct ServantStatusFlavorTextListViewManager_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *v10; // x8
  struct ServantStatusDialog_o **p__4__this; // x19
  struct ServantStatusDialog_o *_4__this; // t1
  struct ServantStatusDialog_o *v13; // x8
  struct ServantStatusDialog_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  struct ServantStatusDialog_o *v17; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v19; // x21
  __int64 v20; // x9

  if ( (byte_4212268 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4212268 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  servantStatusBattleConfirmDialog = **(struct ServantStatusFlavorTextListViewManager_o ***)(v8 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_17017160((CommonUI_o *)servantStatusBattleConfirmDialog, 0LL, 0LL);
  if ( !isDecide )
  {
    p__4__this = &this->fields.__4__this;
    goto LABEL_19;
  }
  _4__this = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v10 = _4__this;
  if ( !_4__this )
    goto LABEL_24;
  servantStatusBattleConfirmDialog = *(struct ServantStatusFlavorTextListViewManager_o **)&v10->fields.isModify;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  if ( !*((_BYTE *)p__4__this - 4) )
  {
    *(&servantStatusBattleConfirmDialog[1].fields.isInput + 2) ^= 1u;
    goto LABEL_19;
  }
  ServantStatusListViewItem__set_IsEnableOwnRandomSetting(
    (ServantStatusListViewItem_o *)servantStatusBattleConfirmDialog,
    !*(&servantStatusBattleConfirmDialog[1].fields.isInput + 1),
    0LL);
  v13 = *p__4__this;
  if ( !*p__4__this
    || (servantStatusBattleConfirmDialog = (struct ServantStatusFlavorTextListViewManager_o *)v13->fields.servantStatusBattleConfirmDialog) == 0LL
    || (ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
          (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
          *(ServantStatusListViewItem_o **)&v13->fields.isModify,
          0LL),
        (v14 = *p__4__this) == 0LL)
    || (servantStatusBattleConfirmDialog = (struct ServantStatusFlavorTextListViewManager_o *)v14->fields.servantStatusBattleConfirmDialog) == 0LL )
  {
LABEL_24:
    sub_B0D97C(servantStatusBattleConfirmDialog);
  }
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    *(ServantStatusListViewItem_o **)&v14->fields.isModify,
    0LL);
LABEL_19:
  if ( !*p__4__this )
    goto LABEL_24;
  servantStatusBattleConfirmDialog = (*p__4__this)->fields.profileTabListViewManager;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode_32074888(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v17 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v17->fields.profileTabListViewManager;
  v19 = sub_B0D974(ServantStatusListViewManager_CallbackFunc_TypeInfo, v15, v16);
  v20 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v19 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v19 + 16) = v20;
  *(_QWORD *)(v19 + 32) = v17;
  sub_B0D840(v19 + 32, v17);
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v19,
    0LL);
}