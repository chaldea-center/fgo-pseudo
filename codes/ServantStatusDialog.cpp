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

  if ( (byte_40F87E1 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_352, v8);
    byte_40F87E1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantStatusDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_352;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_352;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Int32_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40F87E0 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23096, v6);
    byte_40F87E0 = 1;
  }
  LODWORD(this->fields.titleInfo) = 1083283866;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.y = 0xBFC666663F59999ALL;
  v7 = (struct System_Int32_array *)sub_B17014(bool___TypeInfo, 4LL, v2);
  this->fields.profileNewIdList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.profileNewIdList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceDataList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voicePlayer = (struct SePlayer_o *)v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voicePlayer,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Int32_array **)StringLiteral_23096;
  *(_QWORD *)&this->fields.confirmDispLv = StringLiteral_23096;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.confirmDispLv, v36, v37, v38, v39, v40, v41, v42);
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

  if ( (byte_40F8792 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F8792 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1;
  *(_QWORD *)&this->fields.isBattlePlay = StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v10, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F878D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&TouchEffectManager_TypeInfo, v3);
    sub_B16FFC(&UICamera_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9958, v5);
    sub_B16FFC(&StringLiteral_9978, v6);
    sub_B16FFC(&StringLiteral_10008, v7);
    sub_B16FFC(&StringLiteral_10017, v8);
    byte_40F878D = 1;
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
      UICamera__Notify(v12, (System_String_o *)StringLiteral_9958, 0LL, 0LL);
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
      UICamera__Notify(v14, (System_String_o *)StringLiteral_10008, v15, 0LL);
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
      UICamera__Notify(v17, (System_String_o *)StringLiteral_9978, v18, 0LL);
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
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10008, v20, 0LL);
    v45[0] = 1;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9978, v21, 0LL);
    v44[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10017, v22, 0LL);
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->current, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = UICamera_TypeInfo->static_fields;
  v30->currentCamera = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v30->currentCamera, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->currentTouch = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v37->currentTouch, 0LL, v38, v39, v40, v41, v42, v43);
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
  System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ObjectList; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  ServantStatusBattleListViewItem_o *Item; // x0
  const MethodInfo *v11; // x1
  int32_t DispLimitCount; // w0
  const MethodInfo *v13; // x1
  __int64 v14; // x8
  ServantStatusBattleListViewItem_o *v15; // x0
  const MethodInfo *v16; // x2
  int32_t index; // w1
  ServantStatusBattleListViewManager_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F87AA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_40F87AA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager
    || (ObjectList = ServantStatusBattleListViewManager__get_ObjectList(voiceTabListViewManager, method)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B170D4();
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v20.fields.current, v8);
    if ( !Item )
      sub_B170D4();
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v11);
    v14 = *(_QWORD *)&this->fields.isModify;
    if ( !v14 )
      sub_B170D4();
    if ( DispLimitCount == *(_DWORD *)(v14 + 240) )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v13);
      if ( !v15 )
        sub_B170D4();
      index = v15->fields.index;
      v18 = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
      this->fields.currentMaskType = index;
      if ( !v18 )
        sub_B170D4();
      ServantStatusBattleListViewManager__ChangeSelectIndex(v18, index, v16);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
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
  ServantStatusListViewItem_o *v8; // x0
  struct System_Int32_array *dispSelectList; // x21
  BalanceConfig_c *ConvertOverwriteDispImageLimitCount; // x0
  SkillInfo_o *v11; // x1
  const MethodInfo *v12; // x2
  __int64 currentMaskType; // x8
  int32_t v14; // w20
  ServantStatusListViewItem_o *v15; // x0
  int32_t v16; // w21
  ServantStatusListViewItem_o *v17; // x0
  ServantStatusListViewItem_o *v18; // x0
  ServantStatusListViewItem_o *v19; // x0
  bool v20; // w22
  __int64 i; // x23
  SkillInfo_o *v22; // x0
  unsigned __int64 v23; // x25
  bool v24; // w22
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct UnityEngine_Camera_o *battleChrCamera; // x24
  TreasureDvcInfo_o *v28; // x25
  TreasureDvcInfo_o *v29; // x26
  SkillInfo_array *v30; // x21
  SkillInfo_array *v31; // x23
  int32_t nextLimitCount; // w28
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v37; // x27
  ServantStatusListViewItem_o *v38; // x0
  int32_t svtId; // w0
  const MethodInfo *v40; // [xsp+18h] [xbp-88h]
  char isSkillModify; // [xsp+2Ch] [xbp-74h]
  SkillInfo_array *v42; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-68h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40F879A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_40F879A = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v42 = 0LL;
  skillInfoList = 0LL;
  v8 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  this->fields.currentMaskType = dispLv;
  if ( !v8 )
    goto LABEL_38;
  if ( !v8->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, method);
    return;
  }
  dispSelectList = v8->fields.dispSelectList;
  ConvertOverwriteDispImageLimitCount = (BalanceConfig_c *)ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                                             v8,
                                                             0LL);
  if ( !dispSelectList )
    goto LABEL_38;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= dispSelectList->max_length )
  {
LABEL_39:
    sub_B17100(ConvertOverwriteDispImageLimitCount, v11, v12);
    sub_B170A0();
  }
  v14 = (int)ConvertOverwriteDispImageLimitCount;
  v15 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v15 )
    goto LABEL_38;
  v16 = dispSelectList->m_Items[currentMaskType + 1];
  ServantStatusListViewItem__GetNpInfo_36667804(v15, &tdInfo, v14, 0LL);
  v17 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v17 )
    goto LABEL_38;
  ServantStatusListViewItem__GetNpInfo_36667804(v17, &info, v16, 0LL);
  v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v18 )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_36666944(v18, &skillInfoList, v14, 0LL);
  v19 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v19 )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_36666944(v19, &v42, v16, 0LL);
  if ( !tdInfo )
    goto LABEL_38;
  v20 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    ConvertOverwriteDispImageLimitCount = BalanceConfig_TypeInfo;
    v23 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      ConvertOverwriteDispImageLimitCount = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v23 >= ConvertOverwriteDispImageLimitCount->static_fields->SvtSkillListMax )
      break;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v23 >= skillInfoList->max_length )
      goto LABEL_39;
    if ( !v42 )
      goto LABEL_38;
    if ( v23 >= v42->max_length )
      goto LABEL_39;
    v22 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    v11 = (SkillInfo_o *)*((_QWORD *)&v42->obj.klass + i);
    if ( !v22 )
    {
      if ( !v11 )
        continue;
      v22 = (SkillInfo_o *)*((_QWORD *)&v42->obj.klass + i);
      v11 = 0LL;
    }
    if ( !SkillInfo__Equals(v22, v11, 0LL) )
    {
      isSkillModify = 1;
LABEL_31:
      v24 = !v20;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v14, 0LL);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v16, 0LL);
      battleChrCamera = this->fields.battleChrCamera;
      v29 = info;
      v28 = tdInfo;
      v31 = v42;
      v30 = skillInfoList;
      nextLimitCount = LimitCountByImageLimitCostumeIn;
      v37 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v33,
                                                                  v34,
                                                                  v35,
                                                                  v36);
      ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        v37,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_EndBattleConfirm__,
        0LL);
      v38 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( v38 )
      {
        svtId = ServantStatusListViewItem__get_SvtId(v38, 0LL);
        if ( battleChrCamera )
        {
          ServantStatusBattleConfirmDialog__Open(
            (ServantStatusBattleConfirmDialog_o *)battleChrCamera,
            v28,
            v29,
            v24,
            v30,
            v31,
            isSkillModify,
            v37,
            svtId,
            nowLimitCount,
            nextLimitCount,
            v40);
          return;
        }
      }
LABEL_38:
      sub_B170D4();
    }
  }
  if ( !v20 )
  {
    isSkillModify = 0;
    goto LABEL_31;
  }
  ServantStatusDialog__SetChangeBattleResource(this, 0, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleVoice(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87C4 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_40F87C4 = 1;
  }
  v6 = *(_QWORD *)&this->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 320) = type, (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeCommandResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  ServantStatusListViewItem_o *v12; // x0
  int32_t SvtId; // w0
  __int64 v14; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  System_String_o *CommandCardLoadFolderNameDisp; // x0
  System_String_o **p_loadVoiceData; // x20
  struct System_String_o *v19; // x21
  System_String_o *v20; // x22
  CommonUI_o *Instance; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *loadVoiceData; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  AssetLoader_LoadEndDataHandler_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  ServantStatusListViewManager_CallbackFunc_o *v46; // x21

  if ( (byte_40F87C2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B16FFC(&Method_ServantStatusDialog_EndCardLoad__, v8);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40F87C2 = 1;
  }
  v11 = *(_QWORD *)&this->fields.isModify;
  if ( !v11 )
    goto LABEL_25;
  *(_DWORD *)(v11 + 256) = dispLv;
  v12 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v12 )
    goto LABEL_25;
  SvtId = ServantStatusListViewItem__get_SvtId(v12, 0LL);
  v14 = *(_QWORD *)&this->fields.isModify;
  if ( !v14 )
    goto LABEL_25;
  v15 = SvtId;
  v16 = *(_DWORD *)(v14 + 256);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  CommandCardLoadFolderNameDisp = ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(v15, v16, 0LL);
  if ( !CommandCardLoadFolderNameDisp )
    goto LABEL_25;
  p_loadVoiceData = &this->fields.loadVoiceData;
  v19 = CommandCardLoadFolderNameDisp;
  if ( System_String__Equals_43731072(CommandCardLoadFolderNameDisp, this->fields.loadVoiceData, 0LL) )
  {
LABEL_22:
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode_32653296(
        (ServantStatusListViewManager_o *)profileTabListViewManager,
        4,
        0LL);
      v41 = this->fields.profileTabListViewManager;
      v46 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v42,
                                                             v43,
                                                             v44,
                                                             v45);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( v41 )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v41, 1, v46, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B170D4();
  }
  if ( !System_String__IsNullOrEmpty(*p_loadVoiceData, 0LL) )
  {
    v20 = *p_loadVoiceData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  this->fields.loadVoiceData = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadVoiceData,
    (System_Int32_array **)v19,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  loadVoiceData = this->fields.loadVoiceData;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31, v32);
  AssetLoader_LoadEndDataHandler___ctor(v33, (Il2CppObject *)this, Method_ServantStatusDialog_EndCardLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v33, 1, 0LL) )
  {
    this->fields.loadVoiceData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v34, v35, v36, v37, v38, v39);
    goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeFaceResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87C8 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_40F87C8 = 1;
  }
  v6 = *(_QWORD *)&this->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 280) = dispLv, (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          5,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangePortraitResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87CB & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_40F87CB = 1;
  }
  v6 = *(_QWORD *)&this->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 296) = dispLv, (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          7,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusListViewItem_o *v6; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87C3 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_40F87C3 = 1;
  }
  v6 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v6
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(v6, type, 0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
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
  __int64 v13; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  const MethodInfo *v16; // x1
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *cardLoadAsset; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *loadVoiceData; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  System_String_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_string__o *voiceDataList; // x0
  System_String_o *changeSvtVoiceIdList; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *voicePlayer; // x0
  Il2CppObject *current; // x21
  struct SePlayer_o *v56; // x0
  UnityEngine_GameObject_o *statusTabBase; // x0
  AtlasManager_o *Instance; // x0
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F87A8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B16FFC(&ScriptManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    byte_40F87A8 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  profileTabListViewManager = this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_45;
  ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)profileTabListViewManager, 0LL);
  battleTabListViewManager = this->fields.battleTabListViewManager;
  if ( !battleTabListViewManager )
    goto LABEL_45;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
    0LL);
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_45;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    v16);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteDialogKey(0LL);
  *(_QWORD *)&this->fields.isModify = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.isModify, 0LL, v18, v19, v20, v21, v22, v23);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v25, v26, v27, v28, v29, v30);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v32, v33, v34, v35, v36, v37);
  }
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    v39 = *(System_String_o **)&this->fields.isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v39, 0LL);
    *(_QWORD *)&this->fields.isBattlePlay = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.isBattlePlay, 0LL, v40, v41, v42, v43, v44, v45);
  }
  ServantStatusDialog__StopVoice(this, v38);
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    goto LABEL_45;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)voiceDataList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v48, v49, v50, v51, v52, v53);
  }
  voicePlayer = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.voicePlayer;
  if ( !voicePlayer )
    goto LABEL_45;
  if ( voicePlayer->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v59,
      voicePlayer,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v59,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v59.fields.current;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v59,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v56 = this->fields.voicePlayer;
    if ( v56 )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v56,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
      goto LABEL_40;
    }
LABEL_45:
    sub_B170D4();
  }
LABEL_40:
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(statusTabBase, 0, 0LL);
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
  if ( callback )
    System_Action__Invoke(callback, 0LL);
}


void __fastcall ServantStatusDialog__EndBattleConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct UnityEngine_Camera_o *battleChrCamera; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *profileNewIdList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  const MethodInfo *v11; // x2

  battleChrCamera = this->fields.battleChrCamera;
  if ( !battleChrCamera )
    goto LABEL_8;
  ServantStatusBattleConfirmDialog__Close_22344208((ServantStatusBattleConfirmDialog_o *)battleChrCamera, 0LL, method);
  if ( isDecide )
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( profileNewIdList )
    {
      if ( !profileNewIdList->max_length )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      LOBYTE(profileNewIdList->m_Items[1]) = 0;
      profileTabListViewManager = this->fields.profileTabListViewManager;
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)profileTabListViewManager, 0LL);
        ServantStatusDialog__SetChangeBattleResource(this, 1, v11);
        return;
      }
    }
LABEL_8:
    sub_B170D4();
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
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87C5 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F87C5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
    return;
  profileTabListViewManager = this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
LABEL_8:
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItem_o *v6; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v11; // x21
  int32_t SvtId; // w0
  int32_t ServantLimitCountSealAfter; // w0
  ServantStatusListViewItem_o *v14; // x8
  BattleFBXComponent_o *v15; // x19
  int32_t v16; // w20
  int32_t v17; // w0

  if ( (byte_40F879D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F879D = 1;
  }
  LOBYTE(this->fields.battleActor) = 0;
  ServantStatusDialog__PlayBattleEffect(this, 1, v2);
  v6 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v6 )
    goto LABEL_13;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v6, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                      ConvertOverwriteDispImageLimitCount,
                                      0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify
    || (v11 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster,
        SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL),
        !v11)
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v11,
                                       SvtId,
                                       LimitCountByImageLimitCostumeIn,
                                       0LL),
        (v14 = *(ServantStatusListViewItem_o **)&this->fields.isModify) == 0LL)
    || (v15 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading,
        v16 = ServantLimitCountSealAfter,
        v17 = ServantStatusListViewItem__get_SvtId(v14, 0LL),
        !v15) )
  {
LABEL_13:
    sub_B170D4();
  }
  BattleFBXComponent__SetEvolutionLevel(v15, v17, v16, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F87B3 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_40F87B3 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B170D4();
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v8, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F87B1 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_40F87B1 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                        ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B170D4();
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v8, 0LL);
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
  _BOOL8 IsEnemyCollectionDetail; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  int32_t v29; // w20
  int v30; // w8
  __int64 v31; // x8
  int32_t v32; // w20
  __int64 v33; // x8
  int v34; // w8
  bool v35; // w8
  bool v36; // w8
  int v37; // w8
  int v38; // w8
  bool v39; // zf
  unsigned __int64 v40; // x8
  struct System_Int32_array *profileNewIdList; // x9
  char *v42; // x9
  bool v43; // cf
  __int64 v44; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCommentMaster_o *v47; // x21
  int32_t SvtId; // w0
  struct ServantStatusListViewItem_o *NewProfileEntities; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewManager_o *statusTabListViewManager; // x0
  const MethodInfo *v58; // x1
  struct ServantStatusListViewManager_o *v59; // x0
  struct UnityEngine_GameObject_o *baseObject; // x0
  struct UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x8
  CommandCodeEntity_o *v63; // x0
  UIRangeLabel_o *v64; // x21
  System_String_o *v65; // x0
  UnityEngine_Object_o *v66; // x21
  const MethodInfo *v67; // x2
  UILabel_o *v68; // x21
  __int64 *v69; // x8
  System_String_o *v70; // x0
  System_String_o *v71; // x1
  UILabel_o *v72; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantLimitAddMaster_o *v74; // x21
  int32_t v75; // w0
  bool IsOverwriteSvtDetailName; // w0
  int v77; // w8
  bool v78; // w21
  System_String_o *Name; // x22
  __int64 v80; // x8
  __int64 v81; // x8
  __int64 v82; // x8
  ServantLeaderInfo_o *v83; // x0
  int32_t CardImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w21
  WebViewManager_o *v86; // x0
  WarQuestSelectionMaster_o *v87; // x0
  ServantLimitImageMaster_o *v88; // x22
  int32_t v89; // w0
  int32_t ServantLimitCountSealAfter; // w0
  __int64 v91; // x8
  int32_t v92; // w2
  ServantEntity_o *v93; // x0
  int32_t v94; // w1
  _QWORD *v95; // x9
  __int64 v96; // x0
  int32_t v97; // w21
  int32_t v98; // w21
  WebViewManager_o *v99; // x0
  WarQuestSelectionMaster_o *v100; // x0
  ServantLimitImageMaster_o *v101; // x22
  int32_t v102; // w0
  int32_t v103; // w0
  __int64 v104; // x8
  int32_t v105; // w2
  ServantEntity_o *v106; // x0
  __int64 v107; // x8
  ServantEntity_o *v108; // x0
  struct UILabel_o *v109; // x22
  int32_t v110; // w1
  int32_t v111; // w2
  __int64 v112; // x9
  UIRangeLabel_o *servantClassNameLabel; // x0
  System_String_o *v114; // x1
  System_String_o *v115; // x0
  WebViewManager_o *v116; // x0
  WarQuestSelectionMaster_o *v117; // x0
  ServantLimitImageMaster_o *v118; // x21
  int32_t v119; // w0
  __int64 v120; // x8
  __int64 v121; // x8
  int32_t v122; // w0
  struct UILabel_o *v123; // x21
  ServantEntity_o *v124; // x22
  __int64 v125; // x23
  __int64 v126; // x24
  int32_t v127; // w0
  int32_t v128; // w1
  System_String_o *v129; // x0
  UnityEngine_Object_o *battleExplanationLabel; // x21
  __int64 v131; // x8
  ServantEntity_o *v132; // x0
  UILabel_o *v133; // x21
  System_String_o *ClassName; // x0
  __int64 v135; // x8
  ServantEntity_o *v136; // x0
  UnityEngine_Object_o *markBase; // x21
  WarQuestSelectionMaster_o *v138; // x0
  __int64 v139; // x8
  ServantLimitImageMaster_o *v140; // x21
  struct UnityEngine_GameObject_o *v141; // x22
  System_String_o *v142; // x0
  __int64 v143; // x8
  __int64 v144; // x8
  __int64 v145; // x22
  __int64 v146; // x23
  int32_t v147; // w0
  int32_t v148; // w22
  System_String_o *ServantStatusExplanationText; // x0
  struct UnityEngine_GameObject_o *v150; // x23
  System_String_o *klass; // x25
  System_String_o *v152; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v154; // x0
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  const MethodInfo *v156; // x1
  const MethodInfo *v157; // x2
  int v158; // w8
  unsigned int v159; // w8
  const MethodInfo *v160; // x1
  unsigned int v161; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_40F878B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&OptionManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&TutorialFlag_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11905, v15);
    sub_B16FFC(&StringLiteral_11904, v16);
    sub_B16FFC(&StringLiteral_11906, v17);
    sub_B16FFC(&StringLiteral_11907, v18);
    sub_B16FFC(&StringLiteral_11912, v19);
    sub_B16FFC(&StringLiteral_11911, v20);
    sub_B16FFC(&StringLiteral_3547, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    sub_B16FFC(&StringLiteral_5945, v23);
    byte_40F878B = 1;
  }
  statusTabBase = this->fields.statusTabBase;
  if ( !statusTabBase )
    goto LABEL_219;
  UnityEngine_GameObject__SetActive(statusTabBase, 1, 0LL);
  v28 = *(_QWORD *)&this->fields.isModify;
  if ( !v28 )
    goto LABEL_219;
  if ( *(_QWORD *)(v28 + 176) )
  {
    switch ( *(_DWORD *)&this->fields.isInitTab )
    {
      case 3:
      case 0x15:
        v29 = 0;
        v30 = 21;
        break;
      case 4:
      case 0x16:
        v29 = 0;
        v30 = 22;
        break;
      case 5:
      case 0x17:
        v29 = 0;
        v30 = 23;
        break;
      case 6:
      case 0x18:
        v29 = 0;
        v30 = 24;
        break;
      case 7:
      case 0x19:
        v29 = 0;
        v30 = 25;
        break;
      case 8:
      case 0x1A:
        v29 = 0;
        v30 = 26;
        break;
      case 9:
      case 0x1B:
        v29 = 0;
        v30 = 27;
        break;
      case 0x1D:
      case 0x20:
        v29 = 0;
        v30 = 32;
        break;
      default:
        v29 = 0;
        v30 = 20;
        break;
    }
    goto LABEL_52;
  }
  v31 = *(_QWORD *)(v28 + 128);
  if ( !v31 )
    goto LABEL_219;
  v32 = *(_DWORD *)(v31 + 84);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28023340(106, 0LL) )
    goto LABEL_17;
  v33 = *(_QWORD *)&this->fields.isModify;
  if ( !v33 )
    goto LABEL_219;
  if ( *(__int64 *)(v33 + 160) >= 1
    && SvtType__IsOrganization(v32, 0LL)
    && (v34 = *(_DWORD *)&this->fields.isInitTab, v34 != 3) )
  {
    v35 = v34 != 12;
  }
  else
  {
LABEL_17:
    v35 = 0;
  }
  LOBYTE(this->fields.newProfileList) = v35;
  v36 = SvtType__IsOrganization(v32, 0LL) && *(_DWORD *)&this->fields.isInitTab != 12;
  BYTE1(this->fields.newProfileList) = v36;
  IsEnemyCollectionDetail = SvtType__IsEnemyCollectionDetail(v32, 0LL);
  if ( IsEnemyCollectionDetail )
  {
    v29 = 0;
    v30 = 28;
LABEL_52:
    *(_DWORD *)&this->fields.isInitTab = v30;
    goto LABEL_53;
  }
  IsEnemyCollectionDetail = SvtType__IsServantEquip(v32, 0LL);
  if ( IsEnemyCollectionDetail )
  {
    v37 = *(_DWORD *)&this->fields.isInitTab;
    switch ( v37 )
    {
      case 3:
      case 12:
        v29 = 0;
        v30 = 12;
        break;
      case 4:
      case 13:
        v29 = 0;
        v30 = 13;
        break;
      case 5:
      case 14:
        v29 = 0;
        v30 = 14;
        break;
      case 6:
      case 15:
        v29 = 0;
        v30 = 15;
        break;
      case 7:
      case 16:
        v29 = 0;
        v30 = 16;
        break;
      case 8:
      case 17:
        v29 = 0;
        v30 = 17;
        break;
      case 9:
      case 18:
        v29 = 0;
        v30 = 18;
        break;
      case 19:
        v29 = 0;
        v30 = 19;
        break;
      case 29:
      case 31:
        v29 = 0;
        v30 = 31;
        break;
      default:
        v39 = v37 == 33;
        v30 = 11;
        v29 = v39;
        break;
    }
    goto LABEL_52;
  }
  IsEnemyCollectionDetail = SvtType__IsServant(v32, 0LL);
  if ( !IsEnemyCollectionDetail )
  {
    v38 = *(_DWORD *)&this->fields.isInitTab;
    if ( v38 != 36 )
    {
      v29 = 0;
      if ( v38 == 29 )
        v30 = 30;
      else
        v30 = 10;
      goto LABEL_52;
    }
  }
  v29 = 0;
LABEL_53:
  v40 = 0LL;
  do
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_219;
    if ( v40 >= profileNewIdList->max_length )
    {
      sub_B17100(IsEnemyCollectionDetail, v26, v27);
      sub_B170A0();
    }
    v42 = (char *)profileNewIdList + v40;
    v43 = v40++ >= 3;
    v42[32] = 0;
  }
  while ( !v43 );
  v44 = *(_QWORD *)&this->fields.isModify;
  if ( !v44 )
    goto LABEL_219;
  if ( *(_QWORD *)(v44 + 80) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_219;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v47 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
    SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
    if ( !v47 )
      goto LABEL_219;
    NewProfileEntities = (struct ServantStatusListViewItem_o *)ServantCommentMaster__GetNewProfileEntities(
                                                                 v47,
                                                                 SvtId,
                                                                 0LL);
    this->fields.mainInfo = NewProfileEntities;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mainInfo,
      (System_Int32_array **)NewProfileEntities,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_219;
    statusTabListViewManager = this->fields.statusTabListViewManager;
    if ( !statusTabListViewManager )
      goto LABEL_219;
    ShiningIconComponent__Set_33652660(
      (ShiningIconComponent_o *)statusTabListViewManager,
      SLODWORD(mainInfo->fields.partyItem) > 0,
      0LL);
  }
  else
  {
    v59 = this->fields.statusTabListViewManager;
    if ( !v59 )
      goto LABEL_219;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)v59, 0LL);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v58);
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_219;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0LL, 1, 0LL, 0, 0LL);
  v61 = this->fields.baseObject;
  if ( !v61 )
    goto LABEL_219;
  TitleInfoControl__changeTitleInfo_19612684((TitleInfoControl_o *)v61, 1, 0, 0, 0LL);
  v62 = *(_QWORD *)&this->fields.isModify;
  if ( !v62 )
    goto LABEL_219;
  v63 = *(CommandCodeEntity_o **)(v62 + 176);
  if ( !v63 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_219;
    v74 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    v75 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
    if ( !v74 )
      goto LABEL_219;
    IsOverwriteSvtDetailName = ServantLimitAddMaster__IsOverwriteSvtDetailName(v74, v75, 0LL);
    v77 = *(_DWORD *)&this->fields.isInitTab;
    v78 = IsOverwriteSvtDetailName;
    if ( (v77 & 0xFFFFFFFE) == 4 )
    {
      Name = (System_String_o *)StringLiteral_1;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        v80 = *(_QWORD *)&this->fields.isModify;
        if ( !v80 )
          goto LABEL_219;
        v81 = *(_QWORD *)(v80 + 88);
        if ( !v81 )
          goto LABEL_219;
        Name = *(System_String_o **)(v81 + 248);
      }
      if ( System_String__IsNullOrEmpty(Name, 0LL) )
      {
        v82 = *(_QWORD *)&this->fields.isModify;
        if ( !v82 )
          goto LABEL_219;
        if ( v78 )
        {
          v83 = *(ServantLeaderInfo_o **)(v82 + 88);
          if ( !v83 )
            goto LABEL_219;
          CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(v83, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                              CardImageLimitCount,
                                              0LL);
          v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v86 )
            goto LABEL_219;
          v87 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v86,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( !*(_QWORD *)&this->fields.isModify )
            goto LABEL_219;
          v88 = (ServantLimitImageMaster_o *)v87;
          v89 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
          if ( !v88 )
            goto LABEL_219;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         v88,
                                         v89,
                                         LimitCountByImageLimitCostumeIn,
                                         0LL);
          v91 = *(_QWORD *)&this->fields.isModify;
          if ( !v91 )
            goto LABEL_219;
          v92 = ServantLimitCountSealAfter;
          v93 = *(ServantEntity_o **)(v91 + 128);
          if ( !v93 )
            goto LABEL_219;
          v94 = -1;
        }
        else
        {
          v112 = *(_QWORD *)(v82 + 88);
          if ( !v112 )
            goto LABEL_219;
          v93 = *(ServantEntity_o **)(v82 + 128);
          if ( !v93 )
            goto LABEL_219;
          v94 = *(_DWORD *)(v112 + 64);
          v92 = -1;
        }
        Name = ServantEntity__getName(v93, v94, v92, 0LL);
      }
      servantClassNameLabel = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
      if ( !servantClassNameLabel )
        goto LABEL_219;
      v114 = Name;
      goto LABEL_157;
    }
    if ( (unsigned int)(v77 - 6) <= 2 )
    {
      v107 = *(_QWORD *)&this->fields.isModify;
      if ( !v107 )
        goto LABEL_219;
      v108 = *(ServantEntity_o **)(v107 + 128);
      if ( !v108 )
        goto LABEL_219;
      v109 = this->fields.servantClassNameLabel;
      if ( v78 )
      {
        v110 = -1;
        v111 = 0;
      }
      else
      {
        v111 = -1;
        v110 = 0;
      }
      v115 = ServantEntity__getName(v108, v110, v111, 0LL);
      if ( !v109 )
        goto LABEL_219;
      v114 = v115;
      servantClassNameLabel = (UIRangeLabel_o *)v109;
      goto LABEL_157;
    }
    v95 = *(_QWORD **)&this->fields.isModify;
    if ( !v95 )
      goto LABEL_219;
    v96 = v95[7];
    if ( v96 )
    {
      if ( !v78 )
      {
        v123 = this->fields.servantClassNameLabel;
        v124 = (ServantEntity_o *)v95[16];
        v126 = *(_QWORD *)(v96 + 96);
        v125 = *(_QWORD *)(v96 + 104);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v162.fields.currentCryptoKey = v126;
        *(_QWORD *)&v162.fields.fakeValue = v125;
        v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v162, 0LL);
        if ( !v124 )
          goto LABEL_219;
        v128 = v127;
        v105 = -1;
        v106 = v124;
        goto LABEL_155;
      }
      v97 = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v96, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v98 = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v97, 0LL);
      v99 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v99 )
        goto LABEL_219;
      v100 = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)v99,
               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_219;
      v101 = (ServantLimitImageMaster_o *)v100;
      v102 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
      if ( !v101 )
        goto LABEL_219;
      v103 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v101, v102, v98, 0LL);
      v104 = *(_QWORD *)&this->fields.isModify;
      if ( !v104 )
        goto LABEL_219;
      v105 = v103;
      v106 = *(ServantEntity_o **)(v104 + 128);
      if ( !v106 )
        goto LABEL_219;
    }
    else
    {
      if ( !v78 )
      {
        v106 = (ServantEntity_o *)v95[16];
        if ( !v106 )
          goto LABEL_219;
        v123 = this->fields.servantClassNameLabel;
        v128 = -1;
        v105 = -1;
        goto LABEL_155;
      }
      if ( v95[10] )
      {
        v116 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v116 )
          goto LABEL_219;
        v117 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)v116,
                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !*(_QWORD *)&this->fields.isModify )
          goto LABEL_219;
        v118 = (ServantLimitImageMaster_o *)v117;
        v119 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
        v120 = *(_QWORD *)&this->fields.isModify;
        if ( !v120 )
          goto LABEL_219;
        v121 = *(_QWORD *)(v120 + 80);
        if ( !v121 )
          goto LABEL_219;
        if ( !v118 )
          goto LABEL_219;
        v122 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v118, v119, *(_DWORD *)(v121 + 56), 0LL);
        v95 = *(_QWORD **)&this->fields.isModify;
        if ( !v95 )
          goto LABEL_219;
        v105 = v122;
      }
      else
      {
        v105 = 0;
      }
      v106 = (ServantEntity_o *)v95[16];
      if ( !v106 )
        goto LABEL_219;
    }
    v123 = this->fields.servantClassNameLabel;
    v128 = -1;
LABEL_155:
    v129 = ServantEntity__getName(v106, v128, v105, 0LL);
    if ( !v123 )
      goto LABEL_219;
    v114 = v129;
    servantClassNameLabel = (UIRangeLabel_o *)v123;
LABEL_157:
    UIRangeLabel__Set(servantClassNameLabel, v114, 0LL, 1, 0, 0LL);
    battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(battleExplanationLabel, 0LL, 0LL) )
    {
      v131 = *(_QWORD *)&this->fields.isModify;
      if ( !v131 )
        goto LABEL_219;
      v132 = *(ServantEntity_o **)(v131 + 128);
      if ( !v132 )
        goto LABEL_219;
      v133 = this->fields.battleExplanationLabel;
      if ( ServantEntity__get_IsServantEquip(v132, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        ClassName = LocalizationManager__Get((System_String_o *)StringLiteral_11912, 0LL);
      }
      else
      {
        v135 = *(_QWORD *)&this->fields.isModify;
        if ( !v135 )
          goto LABEL_219;
        v136 = *(ServantEntity_o **)(v135 + 128);
        if ( !v136 )
          goto LABEL_219;
        ClassName = ServantEntity__getClassName(v136, 0LL);
      }
      if ( !v133 )
        goto LABEL_219;
      UILabel__set_text(v133, ClassName, 0LL);
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
    v138 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v139 = *(_QWORD *)&this->fields.isModify;
    if ( v139 )
    {
      if ( !*(_QWORD *)(v139 + 56) )
      {
        v68 = (UILabel_o *)this->fields.markBase;
        if ( *(_QWORD *)(v139 + 80) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v69 = &StringLiteral_11905;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v69 = &StringLiteral_11906;
        }
        goto LABEL_81;
      }
      v140 = (ServantLimitImageMaster_o *)v138;
      v141 = this->fields.markBase;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v142 = LocalizationManager__Get((System_String_o *)StringLiteral_11904, 0LL);
      if ( v141 )
      {
        UILabel__set_text((UILabel_o *)v141, v142, 0LL);
        v143 = *(_QWORD *)&this->fields.isModify;
        if ( v143 )
        {
          v144 = *(_QWORD *)(v143 + 56);
          if ( v144 )
          {
            v146 = *(_QWORD *)(v144 + 80);
            v145 = *(_QWORD *)(v144 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v163.fields.currentCryptoKey = v146;
            *(_QWORD *)&v163.fields.fakeValue = v145;
            v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v163, 0LL);
            if ( v140 )
            {
              v148 = v147;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v140, v147, 3, 0LL) )
              {
                ServantStatusExplanationText = ServantLimitImageMaster__GetServantStatusExplanationText(
                                                 v140,
                                                 (System_String_o *)StringLiteral_11907,
                                                 v148,
                                                 0LL);
                v150 = this->fields.markBase;
                if ( !v150 )
                  goto LABEL_219;
                klass = (System_String_o *)v150[17].klass;
                v152 = ServantStatusExplanationText;
                LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                v140,
                                                                v148,
                                                                3,
                                                                0LL);
                v154 = System_String__Format(v152, LimitCountSealedServantName, 0LL);
                v71 = System_String__Concat_43743732(klass, v154, 0LL);
                v72 = (UILabel_o *)v150;
                goto LABEL_83;
              }
              goto LABEL_195;
            }
          }
        }
      }
    }
LABEL_219:
    sub_B170D4();
  }
  v64 = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
  v65 = CommandCodeEntity__GetName(v63, 0LL);
  if ( !v64 )
    goto LABEL_219;
  UIRangeLabel__Set(v64, v65, 0LL, 1, 0, 0LL);
  v66 = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
  {
    v68 = this->fields.battleExplanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = &StringLiteral_11911;
LABEL_81:
    v70 = LocalizationManager__Get((System_String_o *)*v69, 0LL);
    if ( !v68 )
      goto LABEL_219;
    v71 = v70;
    v72 = v68;
LABEL_83:
    UILabel__set_text(v72, v71, 0LL);
  }
LABEL_195:
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_219;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    *(ServantStatusListViewItem_o **)&this->fields.isModify,
    v67);
  ServantStatusDialog__SetMark(this, v156);
  v158 = *(_DWORD *)&this->fields.isInitTab;
  if ( v158 > 28 )
  {
    v159 = v158 - 30;
    if ( v159 < 7 )
    {
      v29 = dword_3134460[v159];
      goto LABEL_204;
    }
LABEL_202:
    v29 = 0;
    goto LABEL_204;
  }
  if ( v158 == 10 )
  {
    v29 = 1;
    goto LABEL_204;
  }
  if ( v158 != 11 )
  {
    v29 = 1;
    if ( v158 != 28 )
      goto LABEL_202;
  }
LABEL_204:
  ServantStatusDialog__SetTabKind(this, v29, v157);
  v161 = *(_DWORD *)&this->fields.isInitTab;
  LOBYTE(this->fields.battleActor) = 0;
  if ( v161 - 10 < 0x13 || v161 <= 0x24 && ((1LL << v161) & 0x11C0000000LL) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5945,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v160);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3547,
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

  if ( (byte_40F8795 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_40F8795 = 1;
  }
  LOBYTE(this->fields.defaultAnimationName) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_QWORD *)&this->fields.isBattlePlay )
    ServantStatusDialog__EndLoadBattle_22411092(this, v5);
}


void __fastcall ServantStatusDialog__EndLoadBattle_22411092(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_40F8796 & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8796 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_40F8215 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40F8215 = 1;
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
      sub_B170D4();
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

  if ( (byte_40F879C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_40F879C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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

  if ( (byte_40F878E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_13452, v5);
    byte_40F878E = 1;
  }
  if ( LOBYTE(this->fields.newProfileList) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(106, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13452, 0LL);
      if ( !Instance )
        sub_B170D4();
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
  struct SePlayer_o *voicePlayer; // x0
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
  struct System_Collections_Generic_List_string__o *v26; // x0
  System_String_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x21
  CommonUI_o *Instance; // x0

  if ( (byte_40F87A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndLoadVoice__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40F87A0 = 1;
  }
  changeSvtVoiceIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.changeSvtVoiceIdList;
  if ( changeSvtVoiceIdList )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( voicePlayer )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voicePlayer,
        changeSvtVoiceIdList,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      this->fields.changeSvtVoiceIdList = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v12, v13, v14, v15, v16, v17);
      voiceDataList = this->fields.voiceDataList;
      if ( voiceDataList )
      {
        if ( voiceDataList->fields._size < 1 )
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Instance )
          {
            CommonUI__SetLoadMode(Instance, 0, 0LL);
            return;
          }
        }
        else
        {
          v25 = (struct System_Int32_array *)voiceDataList->fields._items->m_Items[0];
          this->fields.changeSvtVoiceIdList = v25;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
            (System_Int32_array **)v25,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          v26 = this->fields.voiceDataList;
          if ( v26 )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v26,
              0,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            v27 = (System_String_o *)this->fields.changeSvtVoiceIdList;
            v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
            System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__loadAudioAssetStorage(v27, v32, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  __int64 v9; // x0
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
  ServantStatusVoiceListViewManager_o *v21; // x0
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F87A4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5970, method);
    byte_40F87A4 = 1;
  }
  this->fields.voicePlayList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
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
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v20 = *(_QWORD *)(v17 + 8LL * v18 + 32);
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5970,
          *(float *)(v20 + 24),
          0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
    }
    if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_30015892(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(this->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v11, v12, v13, v14, v15, v16);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v23, v24, v25, v26, v27, v28);
  }
  else if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    v21 = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !v21 )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_30015892(v21, 2, -1, 0LL);
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
  CommonUI_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  float ScrillBarValue; // s0
  struct ServantStatusFlavorTextListViewManager_o *v16; // x8
  UIProgressBar_o *scrollBar; // x0
  struct ServantStatusFlavorTextListViewManager_o *v18; // x20
  ServantStatusListViewManager_CallbackFunc_o *v19; // x21

  if ( (byte_40F87BC & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_40F87BC = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(v9, 0LL);
  if ( !isDecide )
    goto LABEL_13;
  ServantStatusDialog__SetTabKind(this, 0, v11);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager
    || (ScrillBarValue = ServantStatusListViewManager__GetScrillBarValue(
                           (ServantStatusListViewManager_o *)profileTabListViewManager,
                           19,
                           0LL),
        (v16 = this->fields.profileTabListViewManager) == 0LL)
    || (scrollBar = (UIProgressBar_o *)v16->fields.scrollBar) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  UIProgressBar__set_value(scrollBar, ScrillBarValue, 0LL);
LABEL_13:
  v18 = this->fields.profileTabListViewManager;
  v19 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v10,
                                                         v11,
                                                         v12,
                                                         v13);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v18 )
    goto LABEL_15;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v18, 1, v19, 0LL);
}


void __fastcall ServantStatusDialog__EndStatusLoad(
        ServantStatusDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *loadVoiceData; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AssetData_o *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_40F8790 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, data);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndStatusLoad2__, v7);
    byte_40F8790 = 1;
  }
  loadVoiceData = this->fields.loadVoiceData;
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, data, method, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad2__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v9, 1, 0LL) )
  {
    this->fields.loadVoiceData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v10, v11, v12, v13, v14, v15);
    ServantStatusDialog__EndStatusLoad2(this, v16, v17);
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
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v9; // x0
  struct ServantStatusFlavorTextListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21

  if ( (byte_40F8791 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_5945, v6);
    byte_40F8791 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab != 33 )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode_32653296(
        (ServantStatusListViewManager_o *)profileTabListViewManager,
        6,
        0LL);
      v9 = this->fields.profileTabListViewManager;
      if ( v9 )
      {
        ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)v9, 4, 0LL);
        v10 = this->fields.profileTabListViewManager;
        v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13,
                                                               v14);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( v10 )
        {
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v10, 1, v15, 0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5945,
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
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0

  v8 = this;
  if ( (byte_40F87A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_EndPlayVoice__, v9);
    this = (ServantStatusDialog_o *)sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40F87A3 = 1;
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
        sub_B17100(this, method, v2);
        sub_B170A0();
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
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
        System_Action___ctor(v19, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v20 = (System_Int32_array **)SoundManager__playVoice_24824004(v15, v16, DEFAULT_VOLUME, v19, 0LL);
        p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voicePlayList;
        v8->fields.voicePlayList = (struct ServantVoiceData_array *)v20;
        goto LABEL_17;
      }
LABEL_18:
      sub_B170D4();
    }
    if ( LODWORD(v8->fields.tabInitList) == 3 && ((__int64)v8->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)v8->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_30015892(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(v8->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&v8->fields.voicePlayNum = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields.voicePlayNum, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voiceListIndex;
    v20 = 0LL;
    LODWORD(v8->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&v8->fields.voiceListIndex = 0LL;
LABEL_17:
    sub_B16F98(p_voicePlayList, v20, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  __int128 v18; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v19; // x20
  int64_t v20; // x0
  WebViewManager_o *v21; // x0
  WarQuestSelectionMaster_o *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  __int128 v25; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v26; // x20
  int64_t v27; // x0
  WebViewManager_o *v28; // x0
  WarQuestSelectionMaster_o *v29; // x0
  __int64 v30; // x8
  __int64 v31; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  WarEntity_o *v36; // x0
  __int64 v37; // x8
  ServantEntity_o *v38; // x22
  UserServantEntity_o *v39; // x0
  int32_t DispLimitCount; // w0
  int32_t v41; // w21
  int32_t v42; // w0
  int32_t v43; // w20
  ServantStatusListViewItem_o *v44; // x0
  int32_t LimitCount; // w0
  System_Int32_array *Individuality; // x0
  System_Int32_array *v47; // x23
  int32_t v48; // w0
  System_Int32_array *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x8
  UserServantEntity_o *v54; // x0
  System_Int32_array *SkillIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x22
  System_Int32_array *v57; // x0
  __int64 v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x23
  UserServantEntity_o *v60; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+40h] [xbp-60h]
  TreasureDvcInfo_o *v64; // [xsp+60h] [xbp-40h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+78h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_40F87B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40F87B9 = 1;
  }
  entity = 0LL;
  v64 = 0LL;
  tdInfo = 0LL;
  v13 = *(_QWORD *)&this->fields.isModify;
  if ( !v13 )
    goto LABEL_62;
  if ( !*(_QWORD *)(v13 + 56) )
    goto LABEL_61;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v16 = *(_QWORD *)&this->fields.isModify;
  if ( !v16 )
    goto LABEL_62;
  v17 = *(_QWORD *)(v16 + 56);
  if ( !v17 )
    goto LABEL_62;
  v18 = *(_OWORD *)(v17 + 32);
  v19 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v17 + 16);
  *(_OWORD *)&v63.fields.fakeValue = v18;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v62 = v63;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v62, 0LL);
  if ( !v19 )
    goto LABEL_62;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v19,
          &entity,
          v20,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v21 )
      goto LABEL_62;
    v22 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v21,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v23 = *(_QWORD *)&this->fields.isModify;
    if ( !v23 )
      goto LABEL_62;
    v24 = *(_QWORD *)(v23 + 56);
    if ( !v24 )
      goto LABEL_62;
    v25 = *(_OWORD *)(v24 + 32);
    v26 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v22;
    *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
    *(_OWORD *)&v63.fields.fakeValue = v25;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v61 = v63;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v61, 0LL);
    if ( !v26 )
      goto LABEL_62;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      v26,
      &entity,
      v27,
      (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_61;
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_62;
  v29 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v28,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = *(_QWORD *)&this->fields.isModify;
  if ( !v30 )
    goto LABEL_62;
  v31 = *(_QWORD *)(v30 + 56);
  if ( !v31 )
    goto LABEL_62;
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)v29;
  v34 = *(_QWORD *)(v31 + 80);
  v33 = *(_QWORD *)(v31 + 88);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v34;
  *(_QWORD *)&v67.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v67, 0LL);
  if ( !v32 )
    goto LABEL_62;
  v36 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v32,
          v35,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v37 = *(_QWORD *)&this->fields.isModify;
  if ( !v37 )
    goto LABEL_62;
  v38 = (ServantEntity_o *)v36;
  v39 = *(UserServantEntity_o **)(v37 + 56);
  if ( !v39 )
    goto LABEL_62;
  DispLimitCount = UserServantEntity__getDispLimitCount(v39, 0, 0LL);
  if ( !entity )
    goto LABEL_62;
  v41 = DispLimitCount;
  v42 = UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( v41 == v42 )
    goto LABEL_61;
  v43 = v42;
  v44 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v44
    || (LimitCount = ServantStatusListViewItem__get_LimitCount(v44, 0LL), !v38)
    || (Individuality = ServantEntity__getIndividuality(v38, LimitCount, v41, 0LL), !*(_QWORD *)&this->fields.isModify)
    || (v47 = Individuality,
        v48 = ServantStatusListViewItem__get_LimitCount(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL),
        v49 = ServantEntity__getIndividuality(v38, v48, v43, 0LL),
        !v47)
    || !v49 )
  {
LABEL_62:
    sub_B170D4();
  }
  v51 = *(_QWORD *)&v47->max_length;
  if ( (_DWORD)v51 != v49->max_length )
    goto LABEL_47;
  if ( v51 && v47 != v49 && (int)v51 >= 1 )
  {
    v52 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v52 >= (unsigned int)v51 )
      {
        sub_B17100(v49, result, v50);
        sub_B170A0();
      }
      if ( v47->m_Items[v52 + 1] != v49->m_Items[v52 + 1] )
        break;
      if ( (int)++v52 >= (int)v51 )
        goto LABEL_48;
    }
LABEL_47:
    BYTE5(this->fields.statusLoadAsset) = 1;
  }
LABEL_48:
  if ( BYTE5(this->fields.statusLoadAsset) )
    goto LABEL_61;
  v53 = *(_QWORD *)&this->fields.isModify;
  if ( !v53 )
    goto LABEL_62;
  v54 = *(UserServantEntity_o **)(v53 + 56);
  if ( !v54 )
    goto LABEL_62;
  SkillIdList = UserServantEntity__getSkillIdList(v54, v41, -1, 1, 0LL);
  if ( !entity )
    goto LABEL_62;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)SkillIdList;
  v57 = UserServantEntity__getSkillIdList(entity, v43, -1, 1, 0LL);
  v58 = *(_QWORD *)&this->fields.isModify;
  if ( !v58 )
    goto LABEL_62;
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v57;
  v60 = *(UserServantEntity_o **)(v58 + 56);
  if ( !v60 )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo(v60, &tdInfo, -1, v41, 0, 0LL);
  if ( !entity )
    goto LABEL_62;
  UserServantEntity__getTreasureDeviceInfo(entity, &v64, -1, v43, 0, 0LL);
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          v56,
          v59,
          (const MethodInfo_19C21B0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    BYTE5(this->fields.statusLoadAsset) = 1;
  if ( !tdInfo || !v64 )
    goto LABEL_62;
  if ( tdInfo->fields.id != v64->fields.id )
    BYTE5(this->fields.statusLoadAsset) = 1;
LABEL_61:
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)result);
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

  if ( (byte_40F87BA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F87BA = 1;
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
      sub_B170D4();
    BattleFBXComponent__RevertShaderFloatProperty(v10, 0LL);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.openCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.individualityCallbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
      0LL,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.formationCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v18, v19, v20, v21, v22, v23);
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
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
      this->fields.formationCallbackFunc = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
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
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.resultCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  _QWORD *v16; // x8
  UserServantEntity_o *v17; // x0
  bool *p_isModify; // x27
  int v19; // w9
  UserServantCollectionEntity_o *v20; // x0
  UserCommandCodeEntity_o *v21; // x0
  UserCommandCodeCollectionEntity_o *v22; // x0
  __int64 v23; // x8
  int64_t v24; // x20
  int statusLoadAsset_low; // w20
  int v26; // w20
  int v27; // w20
  int v28; // w20
  int v29; // w20
  int v30; // w20
  bool v31; // w0
  const MethodInfo *v32; // x2
  ServantStatusListViewItem_o *v33; // x1
  int32_t ManualSetCardLimitCount; // w20
  _BOOL4 IsModifyLock; // w0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v41; // x8
  __int128 v42; // q1
  CommandCodeSetStatusRequest_o *v43; // x19
  int64_t v44; // x0
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  ServantStatusCharaGraphListViewItem_o *ManualSelectItem; // x0
  __int64 v47; // x8
  __int64 v48; // x20
  __int64 v49; // x21
  int32_t v50; // w24
  int v51; // w22
  BalanceConfig_c *v52; // x0
  bool IsModifyDispLimitCount; // w0
  bool v54; // w26
  int32_t ManualSetDispLimitCount; // w0
  int32_t v56; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x8
  bool IsModifyCommandCardLimitCount; // w0
  bool v59; // w23
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v61; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  bool IsModifyIconLimitCount; // w0
  bool v64; // w20
  int32_t ManualSetIconLimitCount; // w0
  int32_t v66; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  bool IsModifyPortraitLimitCount; // w0
  ServantStatusListViewItem_o *v69; // x8
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v71; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userSvtEntity; // x8
  bool IsModifySvtCommonFlag; // w0
  ServantStatusListViewItem_o *v74; // x8
  bool IsModifyBattleVoice; // w0
  ServantStatusListViewItem_o *v76; // x8
  bool IsModifyRandomLimitCountSetting; // w0
  ServantStatusListViewItem_o *v78; // x8
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v80; // x8
  __int128 v81; // q1
  bool v82; // w20
  int64_t pushUserSvtId; // x23
  int64_t v84; // x0
  bool IsModifyPushUserSvtId; // w23
  int32_t v86; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  _BOOL4 v88; // w0
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  NetworkManager_ResultCallbackFunc_o *v92; // x20
  WarBoardWallAttackRequest_o *v93; // x0
  __int64 v94; // x8
  __int128 v95; // q0
  CardFavoriteRequest_o *v96; // x19
  int64_t v97; // x0
  int32_t limitCountSupport; // [xsp+54h] [xbp-11Ch]
  int32_t randomSettingSupport; // [xsp+58h] [xbp-118h]
  int32_t randomSettingOwn; // [xsp+5Ch] [xbp-114h]
  int32_t battleVoice; // [xsp+60h] [xbp-110h]
  int32_t commonFlag; // [xsp+64h] [xbp-10Ch]
  int32_t v103; // [xsp+68h] [xbp-108h]
  int32_t v104; // [xsp+6Ch] [xbp-104h]
  int32_t imageLimitCount; // [xsp+70h] [xbp-100h]
  bool IsModifySupportRandomLimitCount; // [xsp+74h] [xbp-FCh]
  bool v107; // [xsp+78h] [xbp-F8h]
  bool v108; // [xsp+7Ch] [xbp-F4h]
  bool v109; // [xsp+80h] [xbp-F0h]
  bool v110; // [xsp+84h] [xbp-ECh]
  bool v111; // [xsp+88h] [xbp-E8h]
  bool isPush; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_40F87B8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v10);
    sub_B16FFC(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_B16FFC(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_B16FFC(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_B16FFC(&UserServantCollectionManager_TypeInfo, v14);
    sub_B16FFC(&UserServantNewManager_TypeInfo, v15);
    byte_40F87B8 = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  v16 = *(_QWORD **)&this->fields.isModify;
  if ( !v16 )
    goto LABEL_144;
  v17 = (UserServantEntity_o *)v16[7];
  p_isModify = &this->fields.isModify;
  if ( v17 )
  {
    v19 = *(_DWORD *)&this->fields.isInitTab;
    if ( v19 != 6 && v19 != 15 )
    {
      UserServantEntity__SetOld(v17, 0LL);
      v16 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v20 = (UserServantCollectionEntity_o *)v16[10];
  if ( v20 )
  {
    UserServantCollectionEntity__SetOld(v20, 0LL);
    v16 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v21 = (UserCommandCodeEntity_o *)v16[13];
  if ( v21 )
  {
    if ( *(_DWORD *)&this->fields.isInitTab != 24 )
    {
      UserCommandCodeEntity__SetOld(v21, 0LL);
      v16 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v22 = (UserCommandCodeCollectionEntity_o *)v16[14];
  if ( v22 )
  {
    UserCommandCodeCollectionEntity__SetOld(v22, 0LL);
    v16 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v23 = v16[11];
  if ( v23 && *(_DWORD *)&this->fields.isInitTab == 4 )
  {
    v24 = *(_QWORD *)(v23 + 24);
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    OtherUserNewManager__SetOld(v24, 0LL);
  }
  statusLoadAsset_low = LOBYTE(this->fields.statusLoadAsset);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  v26 = (statusLoadAsset_low != 0) | UserServantNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v26 & 1;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  v27 = v26 | UserServantCollectionManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v27 & 1;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  v28 = v27 | ServantCommentManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v28 & 1;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  v29 = v28 | OtherUserNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v29 & 1;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  v30 = v29 | UserCommandCodeNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v30 & 1;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  v31 = UserCommandCodeCollectionManager__WriteData(0LL);
  v33 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  LOBYTE(this->fields.statusLoadAsset) = (v30 | v31) & 1;
  if ( !v33 )
    goto LABEL_144;
  if ( !v33->fields.userSvtEntity )
  {
    if ( v33->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v33, 0LL);
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      if ( ((IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(
                              *(ServantStatusListViewItem_o **)p_isModify,
                              0LL)) & 1) != 0 )
      {
        LOBYTE(this->fields.statusLoadAsset) = 1;
        v39 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v33,
                                                       v36,
                                                       v37,
                                                       v38);
        NetworkManager_ResultCallbackFunc___ctor(
          v39,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                              v39,
                                              (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *(_QWORD *)p_isModify )
        {
          v41 = *(_QWORD *)(*(_QWORD *)p_isModify + 104LL);
          if ( v41 )
          {
            v42 = *(_OWORD *)(v41 + 32);
            v43 = (CommandCodeSetStatusRequest_o *)Request_WarBoardWallAttackRequest;
            *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v41 + 16);
            *(_OWORD *)&v116.fields.fakeValue = v42;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v113 = v116;
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v113, 0LL);
            if ( *(_QWORD *)p_isModify )
            {
              if ( v43 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v43,
                  v44,
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
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_144;
  ManualSelectItem = ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                       (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
                       v33,
                       v32);
  if ( !ManualSelectItem )
  {
    v33 = *(ServantStatusListViewItem_o **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
LABEL_42:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v33, 0LL);
    goto LABEL_60;
  }
  ManualSetCardLimitCount = ManualSelectItem->fields.imageLimitCount;
LABEL_60:
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  if ( !ServantStatusListViewItem__get_IsChangeImageLimitCount(*(ServantStatusListViewItem_o **)p_isModify, 0LL) )
    goto LABEL_147;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  if ( ManualSetCardLimitCount != ServantStatusListViewItem__get_ManualSetCardLimitCount(
                                    *(ServantStatusListViewItem_o **)p_isModify,
                                    0LL) )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v51 = 1;
    v50 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v52->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_147:
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v47 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
    if ( !v47 )
      goto LABEL_144;
    v49 = *(_QWORD *)(v47 + 112);
    v48 = *(_QWORD *)(v47 + 120);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v117.fields.currentCryptoKey = v49;
    *(_QWORD *)&v117.fields.fakeValue = v48;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v117, 0LL);
    v51 = 0;
  }
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyDispLimitCount = ServantStatusListViewItem__get_IsModifyDispLimitCount(
                             *(ServantStatusListViewItem_o **)p_isModify,
                             0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v54 = IsModifyDispLimitCount;
  if ( IsModifyDispLimitCount )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v56 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v57 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v57 )
      goto LABEL_144;
    v56 = BasicHelper__DecryptValue_19259816(v57[8], 0LL);
  }
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyCommandCardLimitCount = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                                    *(ServantStatusListViewItem_o **)p_isModify,
                                    0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v59 = IsModifyCommandCardLimitCount;
  if ( IsModifyCommandCardLimitCount )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
    v61 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v62 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v62 )
      goto LABEL_144;
    v61 = BasicHelper__DecryptValue_19259816(v62[9], 0LL);
  }
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyIconLimitCount = ServantStatusListViewItem__get_IsModifyIconLimitCount(
                             *(ServantStatusListViewItem_o **)p_isModify,
                             0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v64 = IsModifyIconLimitCount;
  if ( IsModifyIconLimitCount )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v66 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v67 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v67 )
      goto LABEL_144;
    v66 = BasicHelper__DecryptValue_19259816(v67[10], 0LL);
  }
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyPortraitLimitCount = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                                 *(ServantStatusListViewItem_o **)p_isModify,
                                 0LL);
  v69 = *(ServantStatusListViewItem_o **)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v110 = IsModifyPortraitLimitCount;
  v111 = v64;
  if ( IsModifyPortraitLimitCount )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(v69, 0LL);
    v71 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
  }
  else
  {
    userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v69->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_144;
    v71 = BasicHelper__DecryptValue_19259816(userSvtEntity[11], 0LL);
  }
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifySvtCommonFlag = ServantStatusListViewItem__get_IsModifySvtCommonFlag(
                            *(ServantStatusListViewItem_o **)p_isModify,
                            0LL);
  v74 = *(ServantStatusListViewItem_o **)p_isModify;
  v109 = IsModifySvtCommonFlag;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  commonFlag = v74->fields.svtCommonFlag;
  IsModifyBattleVoice = ServantStatusListViewItem__get_IsModifyBattleVoice(v74, 0LL);
  v76 = *(ServantStatusListViewItem_o **)p_isModify;
  v108 = IsModifyBattleVoice;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  battleVoice = v76->fields.changeVoiceFlag;
  IsModifyRandomLimitCountSetting = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v76, 0LL);
  v78 = *(ServantStatusListViewItem_o **)p_isModify;
  v107 = IsModifyRandomLimitCountSetting;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  randomSettingOwn = v78->fields.isEnableOwnRandomSetting;
  randomSettingSupport = v78->fields.isEnableSupportRandomSetting;
  IsModifySupportRandomLimitCount = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(v78, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  limitCountSupport = *(_DWORD *)(*(_QWORD *)p_isModify + 332LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_144;
  v103 = v71;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v80 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
  if ( !v80 )
    goto LABEL_144;
  v81 = *(_OWORD *)(v80 + 32);
  v82 = v59;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v80 + 16);
  *(_OWORD *)&v116.fields.fakeValue = v81;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v115 = v116;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v115, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  isPush = pushUserSvtId == v84;
  IsModifyPushUserSvtId = ServantStatusListViewItem__IsModifyPushUserSvtId(
                            *(ServantStatusListViewItem_o **)p_isModify,
                            0LL);
  if ( IsModifyPushUserSvtId )
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
  v104 = v66;
  imageLimitCount = v50;
  if ( LOBYTE(this->fields.newProfileList) )
  {
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v86 = v61;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
  }
  else
  {
    v86 = v61;
    IsModifyFavoriteUserSvtId = 0;
  }
  if ( !*(_QWORD *)p_isModify
    || (v88 = ServantStatusListViewItem__get_IsModifyLock(*(ServantStatusListViewItem_o **)p_isModify, 0LL),
        !*(_QWORD *)p_isModify) )
  {
LABEL_144:
    sub_B170D4();
  }
  if ( v51 | v54 | v82 | v111 | v110 | v109 | v108 | v107 | IsModifySupportRandomLimitCount | IsModifyPushUserSvtId | ((IsModifyFavoriteUserSvtId || v88) | ServantStatusListViewItem__get_IsModifyChoice(*(ServantStatusListViewItem_o **)p_isModify, 0LL)) & 1 )
  {
    LOBYTE(this->fields.statusLoadAsset) = 1;
    v92 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v33,
                                                   v89,
                                                   v90,
                                                   v91);
    NetworkManager_ResultCallbackFunc___ctor(
      v92,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v93 = NetworkManager__getRequest_WarBoardWallAttackRequest_(
            v92,
            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *(_QWORD *)p_isModify )
    {
      v94 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
      if ( v94 )
      {
        v95 = *(_OWORD *)(v94 + 32);
        v96 = (CardFavoriteRequest_o *)v93;
        *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)(v94 + 16);
        *(_OWORD *)&v116.fields.fakeValue = v95;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v114 = v116;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v114, 0LL);
        if ( *(_QWORD *)p_isModify )
        {
          if ( v96 )
          {
            CardFavoriteRequest__beginRequest(
              v96,
              v97,
              imageLimitCount,
              v56,
              v86,
              v104,
              v103,
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v17; // x19
  System_String_o *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F879E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_9568, v10);
    sub_B16FFC(&StringLiteral_3947, v11);
    sub_B16FFC(&StringLiteral_12683, v12);
    byte_40F879E = 1;
  }
  v19 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  VoiceId = ServantLimitAddMaster__getVoiceId(MasterData_WarQuestSelectionMaster, svtId, limitCount, 0LL);
  result = 0LL;
  v19 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v17 = (System_String_o **)off_3D6A740[assetType];
    v18 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_43743732(*v17, v18, 0LL);
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
  struct UISprite_o *v9; // x8
  UnityEngine_GameObject_o *statusTabBase; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *noticeNumber; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20
  unsigned __int128 v20; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_40F878A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_ServantStatusDialog__Init_b__125_0__, v5);
    sub_B16FFC(&ServantStatusDialog_TypeInfo, v6);
    byte_40F878A = 1;
  }
  v20 = 0uLL;
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
    UnityEngine_ColorUtility__TryParseHtmlString(
      v8->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
      (UnityEngine_Color_o *)&v20,
      0LL);
    v9 = this->fields.pushSprite;
    if ( !v9 )
LABEL_21:
      sub_B170D4();
    *(_OWORD *)&v9->fields.bottomAnchor = v20;
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
  noticeNumber = (UnityEngine_Component_o *)this->fields.noticeNumber;
  if ( !noticeNumber )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(noticeNumber, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__125_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v19, 2, 1, 0LL);
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

  if ( (byte_40F8793 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8793 = 1;
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
      sub_B170D4();
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  System_Action_o *v27; // x21

  if ( (byte_40F87AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectCharaGraph__, v10);
    sub_B16FFC(&Method_ServantStatusDialog__InitList_b__162_0__, v11);
    byte_40F87AC = 1;
  }
  v12 = *(System_Action_o **)&this->fields.questId;
  if ( v12 )
  {
    *(_QWORD *)&this->fields.questId = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.questId, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v12, 0LL);
  }
  BYTE1(this->fields.statusLoadAsset) = 0;
  BYTE4(this->fields.statusLoadAsset) = 0;
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v14 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                   ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_10;
  servantStatusBattleConfirmDialog[1].fields.nextNpNameLabel = (struct UILabel_o *)v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantStatusBattleConfirmDialog[1].fields.nextNpNameLabel,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ServantStatusCharaGraphListViewManager__SetMode_22365496(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    2,
    v21);
  if ( *((_BYTE *)&this->fields.currentMaskType + 4) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__162_0__, 0LL);
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        v27,
        0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
  WarQuestSelectionMaster_o *RandomGroupIndex; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x8
  __int64 v16; // x8
  ServantCostumeMaster_o *v17; // x21
  signed int v18; // w25
  unsigned int v19; // w9
  int32_t v20; // w22
  BalanceConfig_c *v21; // x0
  ServantCostumeEntity_o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w0
  ServantLimitAddEntity_o *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x23
  __int64 v32; // x24
  int32_t v33; // w0
  __int64 v34; // x8
  ServantCostumeEntity_o *v36; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40F87D4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&ServantCostumeEntity_TypeInfo, v7);
    sub_B16FFC(&ServantLimitAddEntity_TypeInfo, v8);
    byte_40F87D4 = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  v15 = *(_QWORD *)&this->fields.isModify;
  if ( !v15 )
LABEL_39:
    sub_B170D4();
  v16 = *(_QWORD *)(v15 + 336);
  if ( v16 )
  {
    v17 = (ServantCostumeMaster_o *)RandomGroupIndex;
    v18 = 0;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v16 + 24);
      if ( v18 > (int)v19 )
        break;
      if ( v18 )
      {
        if ( v18 - 1 >= v19 )
        {
          sub_B17100(RandomGroupIndex, v11, v12);
          sub_B170A0();
        }
        v20 = *(_DWORD *)(v16 + 4LL * (v18 - 1) + 32);
      }
      else
      {
        v20 = 0;
      }
      v21 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( v20 <= v21->static_fields->ServantLimitMax )
      {
        v28 = (ServantLimitAddEntity_o *)sub_B170CC(ServantLimitAddEntity_TypeInfo, v11, v12, v13, v14);
        ServantLimitAddEntity___ctor(v28, 0LL);
        entity = v28;
        v29 = *(_QWORD *)&this->fields.isModify;
        if ( !v29 )
          goto LABEL_39;
        v30 = *(_QWORD *)(v29 + 56);
        if ( !v30 )
          goto LABEL_39;
        v32 = *(_QWORD *)(v30 + 80);
        v31 = *(_QWORD *)(v30 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v39.fields.currentCryptoKey = v32;
        *(_QWORD *)&v39.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_39;
        RandomGroupIndex = (WarQuestSelectionMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          &entity,
                                                          v33,
                                                          v20,
                                                          0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_39;
          RandomGroupIndex = (WarQuestSelectionMaster_o *)ServantLimitAddEntity__GetRandomGroupIndex(entity, 0LL);
          if ( (_DWORD)RandomGroupIndex )
            return 1;
        }
      }
      else
      {
        v22 = (ServantCostumeEntity_o *)sub_B170CC(ServantCostumeEntity_TypeInfo, v11, v12, v13, v14);
        ServantCostumeEntity___ctor(v22, 0LL);
        v36 = v22;
        v23 = *(_QWORD *)&this->fields.isModify;
        if ( !v23 )
          goto LABEL_39;
        v24 = *(_QWORD *)(v23 + 56);
        if ( !v24 )
          goto LABEL_39;
        v26 = *(_QWORD *)(v24 + 80);
        v25 = *(_QWORD *)(v24 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v26;
        *(_QWORD *)&v38.fields.fakeValue = v25;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
        if ( !v17 )
          goto LABEL_39;
        RandomGroupIndex = (WarQuestSelectionMaster_o *)ServantCostumeMaster__TryGetEntity(v17, &v36, v27, v20, 0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_39;
          if ( v36->fields.groupIndex )
            return 1;
        }
      }
      v34 = *(_QWORD *)&this->fields.isModify;
      if ( v34 )
      {
        v16 = *(_QWORD *)(v34 + 336);
        ++v18;
        if ( v16 )
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

  if ( (byte_40F87B6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87B6 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F87D5 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87D5 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&this->fields.isModify;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 320) != type )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeBattleVoice(this, type, v12);
        return;
      }
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&type,
                                                             method,
                                                             v3,
                                                             v4);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v11, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F87D8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87D8 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  ServantStatusDialog_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int32_t v11; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2

  v6 = this;
  if ( (byte_40F87C7 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    this = (ServantStatusDialog_o *)sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87C7 = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) && !BYTE1(v6->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&v6->fields.isModify;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 208);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 24) <= (unsigned int)costumeIndex )
        {
          sub_B17100(this, *(_QWORD *)&costumeIndex, method);
          sub_B170A0();
        }
        v11 = *(_DWORD *)(v10 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v9 + 256) != v11 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeCommandResource(v6, v11, v14);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3,
                                                               v4);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)v6,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v13, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F87C6 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87C6 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&this->fields.isModify;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 256) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeCommandResource(this, dispLv, v12);
        return;
      }
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3,
                                                             v4);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v11, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickCommandCodeShow(
        ServantStatusDialog_o *this,
        int32_t index,
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
  __int64 v14; // x8
  UserServantCollectionEntity_o *v15; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v17; // x20
  CommonUI_o *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusDialog_EndDelegate_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x23
  ServantLeaderInfo_o *v29; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v31; // x20
  int v32; // w24
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  WebViewManager_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x23
  int32_t v44; // w1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ServantStatusListViewManager_CallbackFunc_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  bool v55; // w3
  CommonUI_o *v56; // x0
  CommandCodeEntity_o *v57; // x2

  if ( (byte_40F87CE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_B16FFC(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v9);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectEquipStatus__, v10);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    byte_40F87CE = 1;
  }
  v14 = *(_QWORD *)&this->fields.isModify;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v19,
                                                   v20,
                                                   v21,
                                                   v22);
      ServantStatusDialog_EndDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_18252928(Instance, 20, v17, v23, v28, 0LL);
        return;
      }
LABEL_30:
      sub_B170D4();
    }
    goto LABEL_19;
  }
  v29 = *(ServantLeaderInfo_o **)(v14 + 88);
  if ( v29 )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(v29, index, 0LL);
    if ( CommandCodeEntity )
    {
      v31 = CommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v32 = *(_DWORD *)&this->fields.isInitTab;
      v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v32 == 4 )
      {
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
        System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v37 )
          goto LABEL_30;
        v44 = 22;
      }
      else
      {
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
        System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v37 )
          goto LABEL_30;
        if ( v32 != 5 )
        {
          v44 = 25;
          v56 = (CommonUI_o *)v37;
          v57 = v31;
          v55 = 0;
          goto LABEL_29;
        }
        v44 = 23;
      }
      v55 = 1;
      v56 = (CommonUI_o *)v37;
      v57 = v31;
LABEL_29:
      CommonUI__OpenServantEquipStatusDialog_18253740(v56, v44, v57, v55, v38, v43, 0LL);
      return;
    }
  }
LABEL_19:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v50 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v46,
                                                         v47,
                                                         v48,
                                                         v49);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v50,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_30;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v50, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaCostume(
        ServantStatusDialog_o *this,
        int32_t costumeIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ServantStatusDialog_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int32_t v11; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2

  v6 = this;
  if ( (byte_40F87CA & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    this = (ServantStatusDialog_o *)sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87CA = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) && !BYTE1(v6->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&v6->fields.isModify;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 208);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 24) <= (unsigned int)costumeIndex )
        {
          sub_B17100(this, *(_QWORD *)&costumeIndex, method);
          sub_B170A0();
        }
        v11 = *(_DWORD *)(v10 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v9 + 280) != v11 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangeFaceResource(v6, v11, v14);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3,
                                                               v4);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)v6,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v13, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickFaceCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F87C9 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87C9 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&this->fields.isModify;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 280) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangeFaceResource(this, dispLv, v12);
        return;
      }
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3,
                                                             v4);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v11, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
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
  _QWORD *v24; // x8
  __int64 v25; // x9
  __int128 v26; // q1
  int64_t v27; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x24
  WebViewManager_o *v31; // x0
  WarQuestSelectionMaster_o *v32; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x20
  __int64 v34; // x21
  __int64 v35; // x22
  int32_t v36; // w0
  ServantEntity_o *v37; // x23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v39; // x20
  int32_t v40; // w21
  int32_t v41; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v43; // w25
  int32_t SvtId; // w0
  __int64 v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v46; // x8
  int32_t v47; // w21
  int32_t v48; // w0
  int32_t v49; // w22
  System_String_o *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x21
  int32_t Rarity; // w24
  System_String_o *RarityType; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x24
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x24
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x23
  __int64 v75; // x8
  UserServantEntity_o *v76; // x0
  int32_t v77; // w0
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x23
  __int64 v84; // x8
  ServantEntity_o *v85; // x0
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x23
  __int64 v92; // x8
  ServantEntity_o *v93; // x0
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x22
  System_String_o *v100; // x0
  System_String_o *v101; // x20
  ServantStatusListViewItem_o *v102; // x0
  System_String_o *v103; // x0
  CommonUI_o *v104; // x21
  System_String_o *v105; // x22
  System_String_o *v106; // x23
  System_String_o *v107; // x24
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  CommonConfirmDialog_ClickDelegate_o *v112; // x25
  __int64 v113; // x20
  __int64 v114; // x8
  __int128 v115; // q0
  const MethodInfo *v116; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16

  if ( (byte_40F87D9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&object___TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Rarity_TypeInfo, v14);
    sub_B16FFC(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B16FFC(&SoundManager_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_11936, v19);
    sub_B16FFC(&StringLiteral_11934, v20);
    sub_B16FFC(&StringLiteral_11933, v21);
    sub_B16FFC(&StringLiteral_11937, v22);
    sub_B16FFC(&StringLiteral_11935, v23);
    byte_40F87D9 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v24 = *(_QWORD **)&this->fields.isModify;
    if ( !v24 )
      goto LABEL_93;
    if ( !v24[2] )
      return;
    v25 = v24[7];
    if ( !v25 )
      return;
    v26 = *(_OWORD *)(v25 + 32);
    v27 = v24[20];
    *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v119.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v118 = v119;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v118, 0LL) )
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
      v113 = *(_QWORD *)&this->fields.isModify;
      if ( v113 )
      {
        v114 = *(_QWORD *)(v113 + 56);
        if ( v114 )
        {
          v115 = *(_OWORD *)(v114 + 32);
          *(_OWORD *)&v119.fields.currentCryptoKey = *(_OWORD *)(v114 + 16);
          *(_OWORD *)&v119.fields.fakeValue = v115;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v117 = v119;
          *(_QWORD *)(v113 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v117, 0LL);
          ServantStatusDialog__SetMark(this, v116);
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_93;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_93;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v27,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v31 )
      goto LABEL_93;
    v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v31,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_93;
    v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)v32;
    v35 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v34 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v120.fields.currentCryptoKey = v35;
    *(_QWORD *)&v120.fields.fakeValue = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v120, 0LL);
    if ( !v33 )
      goto LABEL_93;
    v37 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v33,
                               v36,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v37 )
      goto LABEL_93;
    v39 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37->fields.id, 0LL);
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
    if ( !v39 )
      goto LABEL_93;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v39, v40, v41, 0LL);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_93;
    v43 = ServantLimitCountSealAfter;
    SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
    v45 = *(_QWORD *)&this->fields.isModify;
    if ( !v45 )
      goto LABEL_93;
    v46 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v45 + 56);
    if ( !v46 )
      goto LABEL_93;
    v47 = SvtId;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46[6], 0LL);
    v49 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v39, v47, v48, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11936, 0LL);
    v52 = sub_B17014(object___TypeInfo, 6LL, v51);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    RarityType = Rarity__getRarityType(Rarity, 0LL);
    if ( !v52 )
      goto LABEL_93;
    v62 = (System_Int32_array **)RarityType;
    if ( !RarityType
      || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v52 + 24) )
        goto LABEL_94;
      *(_QWORD *)(v52 + 32) = v62;
      sub_B16F98((BattleServantConfConponent_o *)(v52 + 32), v62, v56, v57, v58, v59, v60, v61);
      RarityType = ServantEntity__getClassName(v37, 0LL);
      v68 = (System_Int32_array **)RarityType;
      if ( !RarityType
        || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v52 + 24) <= 1u )
          goto LABEL_94;
        *(_QWORD *)(v52 + 40) = v68;
        sub_B16F98((BattleServantConfConponent_o *)(v52 + 40), v68, v56, v63, v64, v65, v66, v67);
        RarityType = ServantEntity__getName(v37, v43, -1, 0LL);
        v74 = (System_Int32_array **)RarityType;
        if ( !RarityType
          || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v52 + 24) <= 2u )
            goto LABEL_94;
          *(_QWORD *)(v52 + 48) = v74;
          sub_B16F98((BattleServantConfConponent_o *)(v52 + 48), v74, v56, v69, v70, v71, v72, v73);
          v75 = *(_QWORD *)&this->fields.isModify;
          if ( !v75 )
            goto LABEL_93;
          v76 = *(UserServantEntity_o **)(v75 + 56);
          if ( !v76 )
            goto LABEL_93;
          v77 = UserServantEntity__getRarity(v76, 0LL);
          RarityType = Rarity__getRarityType(v77, 0LL);
          v83 = (System_Int32_array **)RarityType;
          if ( !RarityType
            || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v52 + 24) <= 3u )
              goto LABEL_94;
            *(_QWORD *)(v52 + 56) = v83;
            sub_B16F98((BattleServantConfConponent_o *)(v52 + 56), v83, v56, v78, v79, v80, v81, v82);
            v84 = *(_QWORD *)&this->fields.isModify;
            if ( !v84 )
              goto LABEL_93;
            v85 = *(ServantEntity_o **)(v84 + 128);
            if ( !v85 )
              goto LABEL_93;
            RarityType = ServantEntity__getClassName(v85, 0LL);
            v91 = (System_Int32_array **)RarityType;
            if ( !RarityType
              || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v52 + 24) <= 4u )
                goto LABEL_94;
              *(_QWORD *)(v52 + 64) = v91;
              sub_B16F98((BattleServantConfConponent_o *)(v52 + 64), v91, v56, v86, v87, v88, v89, v90);
              v92 = *(_QWORD *)&this->fields.isModify;
              if ( !v92 )
                goto LABEL_93;
              v93 = *(ServantEntity_o **)(v92 + 128);
              if ( !v93 )
                goto LABEL_93;
              RarityType = ServantEntity__getName(v93, v49, -1, 0LL);
              v99 = (System_Int32_array **)RarityType;
              if ( !RarityType
                || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v52 + 24) > 5u )
                {
                  *(_QWORD *)(v52 + 72) = v99;
                  sub_B16F98((BattleServantConfConponent_o *)(v52 + 72), v99, v56, v94, v95, v96, v97, v98);
                  v100 = System_String__Format_43822456(v50, (System_Object_array *)v52, 0LL);
                  if ( !*(_QWORD *)&this->fields.isModify )
                    goto LABEL_93;
                  v101 = v100;
                  if ( ServantStatusListViewItem__get_IsEventJoin(
                         *(ServantStatusListViewItem_o **)&this->fields.isModify,
                         0LL) )
                  {
                    v102 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
                    if ( !v102 )
                      goto LABEL_93;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod(v102, 0LL) )
                    {
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11935, 0LL);
                      v101 = System_String__Concat_43743732(v101, v103, 0LL);
                    }
                  }
                  v104 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11937, 0LL);
                  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11934, 0LL);
                  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11933, 0LL);
                  v112 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v108,
                                                                  v109,
                                                                  v110,
                                                                  v111);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v112,
                    (Il2CppObject *)this,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0LL);
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v104 )
                  {
                    CommonUI__OpenConfirmDialog_18236860(
                      v104,
                      v105,
                      v101,
                      v106,
                      v107,
                      v112,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_93:
                  sub_B170D4();
                }
LABEL_94:
                sub_B17100(RarityType, v55, v56);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
    sub_B170F4(RarityType);
    sub_B170A0();
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F87D7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87D7 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  ServantStatusDialog_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int32_t v11; // w20
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2

  v6 = this;
  if ( (byte_40F87CD & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    this = (ServantStatusDialog_o *)sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87CD = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) && !BYTE1(v6->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&v6->fields.isModify;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 208);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 24) <= (unsigned int)costumeIndex )
        {
          sub_B17100(this, *(_QWORD *)&costumeIndex, method);
          sub_B170A0();
        }
        v11 = *(_DWORD *)(v10 + 4LL * costumeIndex + 32);
        if ( *(_DWORD *)(v9 + 296) != v11 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          ServantStatusDialog__ChangePortraitResource(v6, v11, v14);
          return;
        }
        profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               *(_QWORD *)&costumeIndex,
                                                               method,
                                                               v3,
                                                               v4);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)v6,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v13, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnClickPortraitCharaLevel(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F87CC & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87CC = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v9 = *(_QWORD *)&this->fields.isModify;
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 296) != dispLv )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        ServantStatusDialog__ChangePortraitResource(this, dispLv, v12);
        return;
      }
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&dispLv,
                                                             method,
                                                             v3,
                                                             v4);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v11, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
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
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x9
  __int128 v26; // q1
  int64_t v27; // x20
  const MethodInfo *v28; // x1
  __int64 v29; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x24
  WebViewManager_o *v33; // x0
  WarQuestSelectionMaster_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x20
  __int64 v36; // x21
  __int64 v37; // x22
  int32_t v38; // w0
  ServantEntity_o *v39; // x23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v41; // x20
  int32_t v42; // w21
  int32_t v43; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v45; // w25
  int32_t SvtId; // w0
  __int64 v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  int32_t v49; // w21
  int32_t v50; // w0
  int32_t v51; // w22
  System_String_o *v52; // x20
  __int64 v53; // x2
  __int64 v54; // x21
  int32_t Rarity; // w24
  System_String_o *RarityType; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x24
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x24
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x23
  __int64 v77; // x8
  UserServantEntity_o *v78; // x0
  int32_t v79; // w0
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x23
  __int64 v86; // x8
  ServantEntity_o *v87; // x0
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x23
  __int64 v94; // x8
  ServantEntity_o *v95; // x0
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x22
  System_String_o *v102; // x20
  CommonUI_o *v103; // x21
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  System_String_o *v106; // x24
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  CommonConfirmDialog_ClickDelegate_o *v111; // x25
  __int64 v112; // x20
  __int64 v113; // x8
  __int128 v114; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_40F87DB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&object___TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Rarity_TypeInfo, v14);
    sub_B16FFC(&Method_ServantStatusDialog_OnConfirmSelectPush__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B16FFC(&SoundManager_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_11946, v19);
    sub_B16FFC(&StringLiteral_11944, v20);
    sub_B16FFC(&StringLiteral_11945, v21);
    sub_B16FFC(&StringLiteral_11947, v22);
    byte_40F87DB = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v23 = *(_QWORD *)&this->fields.isModify;
    if ( !v23 )
      goto LABEL_86;
    if ( !*(_QWORD *)(v23 + 16) || !*(_QWORD *)(v23 + 56) )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v24 = *(_QWORD *)&this->fields.isModify;
    if ( !v24 )
      goto LABEL_86;
    v25 = *(_QWORD *)(v24 + 56);
    if ( !v25 )
      goto LABEL_86;
    v26 = *(_OWORD *)(v25 + 32);
    v27 = *(_QWORD *)(v24 + 168);
    *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v117.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v116 = v117;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v116, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v29 = *(_QWORD *)&this->fields.isModify;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 168) = 0LL;
LABEL_85:
        ServantStatusDialog__SetMark(this, v28);
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
      v112 = *(_QWORD *)&this->fields.isModify;
      if ( v112 )
      {
        v113 = *(_QWORD *)(v112 + 56);
        if ( v113 )
        {
          v114 = *(_OWORD *)(v113 + 32);
          *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(v113 + 16);
          *(_OWORD *)&v117.fields.fakeValue = v114;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v115 = v117;
          *(_QWORD *)(v112 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v115, 0LL);
          goto LABEL_85;
        }
      }
LABEL_86:
      sub_B170D4();
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_86;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v27,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v33 )
      goto LABEL_86;
    v34 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v33,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_86;
    v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)v34;
    v37 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v118.fields.currentCryptoKey = v37;
    *(_QWORD *)&v118.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v118, 0LL);
    if ( !v35 )
      goto LABEL_86;
    v39 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v35,
                               v38,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v39 )
      goto LABEL_86;
    v41 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39->fields.id, 0LL);
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
    if ( !v41 )
      goto LABEL_86;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v41, v42, v43, 0LL);
    if ( !*(_QWORD *)&this->fields.isModify )
      goto LABEL_86;
    v45 = ServantLimitCountSealAfter;
    SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
    v47 = *(_QWORD *)&this->fields.isModify;
    if ( !v47 )
      goto LABEL_86;
    v48 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v47 + 56);
    if ( !v48 )
      goto LABEL_86;
    v49 = SvtId;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48[6], 0LL);
    v51 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v41, v49, v50, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
    v54 = sub_B17014(object___TypeInfo, 6LL, v53);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    RarityType = Rarity__getRarityType(Rarity, 0LL);
    if ( !v54 )
      goto LABEL_86;
    v64 = (System_Int32_array **)RarityType;
    if ( !RarityType
      || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v54 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v54 + 32) = v64;
      sub_B16F98((BattleServantConfConponent_o *)(v54 + 32), v64, v58, v59, v60, v61, v62, v63);
      RarityType = ServantEntity__getClassName(v39, 0LL);
      v70 = (System_Int32_array **)RarityType;
      if ( !RarityType
        || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v54 + 24) <= 1u )
          goto LABEL_87;
        *(_QWORD *)(v54 + 40) = v70;
        sub_B16F98((BattleServantConfConponent_o *)(v54 + 40), v70, v58, v65, v66, v67, v68, v69);
        RarityType = ServantEntity__getName(v39, v45, -1, 0LL);
        v76 = (System_Int32_array **)RarityType;
        if ( !RarityType
          || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v54 + 24) <= 2u )
            goto LABEL_87;
          *(_QWORD *)(v54 + 48) = v76;
          sub_B16F98((BattleServantConfConponent_o *)(v54 + 48), v76, v58, v71, v72, v73, v74, v75);
          v77 = *(_QWORD *)&this->fields.isModify;
          if ( !v77 )
            goto LABEL_86;
          v78 = *(UserServantEntity_o **)(v77 + 56);
          if ( !v78 )
            goto LABEL_86;
          v79 = UserServantEntity__getRarity(v78, 0LL);
          RarityType = Rarity__getRarityType(v79, 0LL);
          v85 = (System_Int32_array **)RarityType;
          if ( !RarityType
            || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v54 + 24) <= 3u )
              goto LABEL_87;
            *(_QWORD *)(v54 + 56) = v85;
            sub_B16F98((BattleServantConfConponent_o *)(v54 + 56), v85, v58, v80, v81, v82, v83, v84);
            v86 = *(_QWORD *)&this->fields.isModify;
            if ( !v86 )
              goto LABEL_86;
            v87 = *(ServantEntity_o **)(v86 + 128);
            if ( !v87 )
              goto LABEL_86;
            RarityType = ServantEntity__getClassName(v87, 0LL);
            v93 = (System_Int32_array **)RarityType;
            if ( !RarityType
              || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v54 + 24) <= 4u )
                goto LABEL_87;
              *(_QWORD *)(v54 + 64) = v93;
              sub_B16F98((BattleServantConfConponent_o *)(v54 + 64), v93, v58, v88, v89, v90, v91, v92);
              v94 = *(_QWORD *)&this->fields.isModify;
              if ( !v94 )
                goto LABEL_86;
              v95 = *(ServantEntity_o **)(v94 + 128);
              if ( !v95 )
                goto LABEL_86;
              RarityType = ServantEntity__getName(v95, v51, -1, 0LL);
              v101 = (System_Int32_array **)RarityType;
              if ( !RarityType
                || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v54 + 24) > 5u )
                {
                  *(_QWORD *)(v54 + 72) = v101;
                  sub_B16F98((BattleServantConfConponent_o *)(v54 + 72), v101, v58, v96, v97, v98, v99, v100);
                  v102 = System_String__Format_43822456(v52, (System_Object_array *)v54, 0LL);
                  v103 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
                  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
                  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
                  v111 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                  v107,
                                                                  v108,
                                                                  v109,
                                                                  v110);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v111,
                    (Il2CppObject *)this,
                    Method_ServantStatusDialog_OnConfirmSelectPush__,
                    0LL);
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  }
                  if ( v103 )
                  {
                    CommonUI__OpenConfirmDialog_18236860(
                      v103,
                      v104,
                      v102,
                      v105,
                      v106,
                      v111,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_86;
                }
LABEL_87:
                sub_B17100(RarityType, v57, v58);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
    sub_B170F4(RarityType);
    sub_B170A0();
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

  if ( (byte_40F87D1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&index);
    byte_40F87D1 = 1;
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
  QuestTree_o *v25; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v27; // x21
  int32_t QuestType; // w22
  QuestEntity_o *Mine; // x0
  QuestEntity_o *v30; // x23
  System_String_o *QuestName; // x0
  System_String_o *v32; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  int32_t ServantId; // w0
  ServantEntity_o *Entity; // x0
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  QuestTree_o *v39; // x0
  WarEntity_o *WarEntityByWarID; // x0
  bool v41; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  ServantStatusListViewManager_CallbackFunc_o *v47; // x21
  CommonUI_o *v48; // x21
  System_String_o *v49; // x0
  __int64 *v50; // x8
  System_String_o *v51; // x22
  System_String_o *v52; // x0
  System_String_o *v53; // x20
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  CommonConfirmDialog_ClickDelegate_o *v60; // x25

  if ( (byte_40F87CF & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantStatusDialog_OnConfirmServantQuest__, v9);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_23445, v16);
    sub_B16FFC(&StringLiteral_11981, v17);
    sub_B16FFC(&StringLiteral_11983, v18);
    sub_B16FFC(&StringLiteral_11984, v19);
    sub_B16FFC(&StringLiteral_11977, v20);
    sub_B16FFC(&StringLiteral_11980, v21);
    sub_B16FFC(&StringLiteral_11982, v22);
    sub_B16FFC(&StringLiteral_11978, v23);
    sub_B16FFC(&StringLiteral_11979, v24);
    byte_40F87CF = 1;
  }
  if ( !this->fields.individualityCallbackFunc && !this->fields.resultCallbackFunc )
    goto LABEL_51;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v25 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v25 )
    goto LABEL_48;
  QuestInfo = QuestTree__GetQuestInfo(v25, questId, 0LL);
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
    v47 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v43,
                                                           v44,
                                                           v45,
                                                           v46);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v47,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v47, 0LL);
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
  v30 = Mine;
  this->fields.tabKind = Mine->fields.id;
  QuestName = QuestEntity__getQuestName(Mine, 0LL);
  if ( !QuestName )
    goto LABEL_48;
  v32 = QuestName;
  if ( System_String__Contains(QuestName, (System_String_o *)StringLiteral_23445, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    ServantId = QuestEntity__getServantId(v30, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  ServantId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_48;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName(Entity, 0, -1, 0LL);
    v32 = System_String__Format(v32, BattleName, 0LL);
  }
  if ( QuestType == 3 )
  {
    warId = v27->fields.warId;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v39 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v39 )
    {
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v39, warId, 0LL);
      if ( WarEntityByWarID )
        v41 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
      else
        v41 = 0;
      v48 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v41 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11980, 0LL);
        v50 = &StringLiteral_11979;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11982, 0LL);
        v50 = &StringLiteral_11981;
      }
      goto LABEL_46;
    }
LABEL_48:
    sub_B170D4();
  }
  v48 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11984, 0LL);
  v50 = &StringLiteral_11983;
LABEL_46:
  v51 = v49;
  v52 = LocalizationManager__Get((System_String_o *)*v50, 0LL);
  v53 = System_String__Format(v52, (Il2CppObject *)v32, 0LL);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11978, 0LL);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11977, 0LL);
  v60 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v56,
                                                 v57,
                                                 v58,
                                                 v59);
  CommonConfirmDialog_ClickDelegate___ctor(
    v60,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !v48 )
    goto LABEL_48;
  CommonUI__OpenConfirmDialog_18236860(v48, v51, v53, v54, v55, v60, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F87BF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87BF = 1;
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

  if ( (byte_40F87BE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87BE = 1;
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

  if ( (byte_40F87BD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87BD = 1;
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

  if ( (byte_40F87C0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F87C0 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantStatusListViewItem_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v32; // x21
  ServantStatusListViewItem_o *v33; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v36; // x21
  System_String_o *v37; // x0
  System_String_o *v38; // x20
  __int64 v39; // x21
  __int64 v40; // x21
  CommonUI_o *v41; // x22
  System_String_o *Empty; // x21
  System_String_o *v43; // x23
  System_String_o *v44; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  CommonConfirmDialog_ClickDelegate_o *v49; // x25

  if ( (byte_40F87D0 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v9);
    sub_B16FFC(&ServantStatusListViewItemDrawButton_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    sub_B16FFC(&string_TypeInfo, v13);
    sub_B16FFC(&Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__, v14);
    sub_B16FFC(&ServantStatusDialog___c__DisplayClass202_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_11986, v16);
    sub_B16FFC(&StringLiteral_11987, v17);
    sub_B16FFC(&StringLiteral_11988, v18);
    byte_40F87D0 = 1;
  }
  v19 = sub_B170CC(ServantStatusDialog___c__DisplayClass202_0_TypeInfo, *(_QWORD *)&type, method, v3, v4);
  ServantStatusDialog___c__DisplayClass202_0___ctor((ServantStatusDialog___c__DisplayClass202_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_27;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v19 + 24) = type;
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v26 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v26 )
      goto LABEL_27;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v26, 0LL) == *(_DWORD *)(v19 + 24) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v32 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v27,
                                                             v28,
                                                             v29,
                                                             v30);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v32, 0LL);
        return;
      }
LABEL_27:
      sub_B170D4();
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v33 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v33 )
      goto LABEL_27;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v33, 0LL);
    if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    }
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0LL);
    v36 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v19 + 24), 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11988, 0LL);
    v38 = System_String__Format_43739268(v37, TDSpeedLocalization, v36, 0LL);
    v39 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v40 = **(_QWORD **)(v39 + 192);
    if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
      sub_AAFCFC(v40);
    v41 = **(CommonUI_o ***)(v40 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11987, 0LL);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11986, 0LL);
    v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v45,
                                                   v46,
                                                   v47,
                                                   v48);
    CommonConfirmDialog_ClickDelegate___ctor(
      v49,
      (Il2CppObject *)v19,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v41 )
      goto LABEL_27;
    CommonUI__OpenConfirmDecideDlg(v41, Empty, v38, v43, v44, v49, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectFavorite(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40F87DA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F87DA = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&this->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B170D4();
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v19.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v18 = v19;
    *(_QWORD *)(v8 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
    ServantStatusDialog__SetMark(this, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18237824(Instance, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnConfirmSelectPush(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_40F87DC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40F87DC = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&this->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B170D4();
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v19.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v18 = v19;
    *(_QWORD *)(v8 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
    ServantStatusDialog__SetMark(this, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_18237824(Instance, v17, 0LL);
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
  MapControl_WarInfo_o *v18; // x0
  CommonUI_o *Instance; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantStatusListViewManager_CallbackFunc_o *v30; // x21
  CommonUI_o *v31; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  CommonUI_o *v38; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_40F87D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v5);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B16FFC(&Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F87D6 = 1;
  }
  if ( !isDecide )
  {
    this->fields.tabKind = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_18237824(Instance, v24, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v30 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             v26,
                                                             v27,
                                                             v28,
                                                             v29);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v30, 0LL);
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
  v14 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v14 )
    goto LABEL_31;
  QuestInfo = QuestTree__GetQuestInfo(v14, this->fields.tabKind, 0LL);
  v16 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v18 = v16->fields._WarInfo_k__BackingField;
      if ( !v18 )
        goto LABEL_31;
      LODWORD(v16) = MapControl_WarInfo__GetEventId(v18, 0LL);
    }
    else
    {
      LODWORD(v16) = 0;
    }
  }
  v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v31 )
    goto LABEL_31;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(v31, (int32_t)v16, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v32);
    byte_40F604B = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, 0LL);
  if ( !v38 )
LABEL_31:
    sub_B170D4();
  CommonUI__maskFadeout(v38, 1, DEFAULT_FADE_TIME, v41, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleFBXComponent_o *v4; // x0

  if ( (byte_40F87B7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F87B7 = 1;
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
      sub_B170D4();
    BattleFBXComponent__RevertShaderFloatProperty(v4, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40F87DF & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2715, v4);
    byte_40F87DF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  v6 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_2715, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectBattle(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  const MethodInfo *v20; // x2

  if ( (byte_40F87C1 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectBattle__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40F87C1 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v10 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                 ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                 *(_QWORD *)&result,
                                                                 method,
                                                                 v3,
                                                                 v4);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !voiceTabListViewManager
      || (voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v10,
          sub_B16F98(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          ServantStatusBattleListViewManager__SetMode_22351556(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v17,
            v18),
          (v19 = *(_QWORD *)&this->fields.isModify) == 0) )
    {
      sub_B170D4();
    }
    if ( *(_DWORD *)(v19 + 240) != result )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantStatusDialog__ChangeBattleResource(this, result, v20);
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
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F87B2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F87B2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( !profileTabListViewManager )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)profileTabListViewManager, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v14, 0LL);
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
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F87B0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F87B0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( isDecide )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( !profileTabListViewManager )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)profileTabListViewManager, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectFlavor(
        ServantStatusDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40F87B4 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectFlavor__, v6);
    byte_40F87B4 = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  v8 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                  *(_QWORD *)&result,
                                                                  method,
                                                                  v3,
                                                                  v4);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !battleTabListViewManager )
    sub_B170D4();
  ServantStatusFlavorTextListViewManager__SetMode(
    (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
    1,
    v8,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v6; // w21
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v17; // x21
  __int64 v18; // x8
  _QWORD *v19; // x8
  WebViewManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x8
  int64_t v26; // x21
  CommonUI_o *v27; // x20
  ServantStatusDialog_EndDelegate_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x8
  __int128 v36; // q1
  int v37; // w24
  WebViewManager_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x8
  __int64 v44; // x8
  EquipTargetInfo_o *v45; // x21
  CommonUI_o *v46; // x20
  ServantStatusDialog_EndDelegate_o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x23
  int32_t v53; // w1
  struct ServantStatusFlavorTextListViewManager_o *v54; // x20
  ServantStatusListViewManager_CallbackFunc_o *v55; // x21
  WebViewManager_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-50h]

  v6 = result;
  if ( (byte_40F87AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_ServantStatusDialog_EndOpenEquipStatus__, v11);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectEquipStatus__, v12);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    byte_40F87AF = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    if ( BYTE1(this->fields.statusLoadAsset) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v17 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                             ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&result,
                                                             *(_QWORD *)&id,
                                                             method,
                                                             v4);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v17, 0LL);
        return;
      }
LABEL_61:
      sub_B170D4();
    }
    if ( v6 == 1 )
    {
      v18 = *(_QWORD *)&this->fields.isModify;
      if ( !v18 )
        goto LABEL_61;
      if ( *(_BYTE *)(v18 + 121) )
        v6 = 1;
      else
        v6 = 2;
    }
    switch ( v6 )
    {
      case 1:
      case 2:
        v19 = *(_QWORD **)&this->fields.isModify;
        if ( !v19 )
          goto LABEL_61;
        if ( v19[7] && (__int64)v19[44] >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v25 = *(_QWORD *)&this->fields.isModify;
          if ( !v25 )
            goto LABEL_61;
          v26 = *(_QWORD *)(v25 + 352);
          v27 = (CommonUI_o *)Instance;
          v28 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
          ServantStatusDialog_EndDelegate___ctor(
            v28,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v27 )
            goto LABEL_61;
          CommonUI__OpenServantEquipStatusDialog(v27, 11, v26, 1, v28, v33, 0LL);
        }
        else
        {
          v34 = v19[11];
          if ( !v34 )
            goto LABEL_36;
          v35 = *(_QWORD *)(v34 + 144);
          if ( !v35 )
            goto LABEL_36;
          v36 = *(_OWORD *)(v35 + 40);
          *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v35 + 24);
          *(_OWORD *)&v68.fields.fakeValue = v36;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v67 = v68;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v37 = *(_DWORD *)&this->fields.isInitTab;
            if ( v37 == 4 )
            {
              v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v43 = *(_QWORD *)&this->fields.isModify;
              if ( !v43 )
                goto LABEL_61;
              v44 = *(_QWORD *)(v43 + 88);
              if ( !v44 )
                goto LABEL_61;
              v45 = *(EquipTargetInfo_o **)(v44 + 144);
              v46 = (CommonUI_o *)v38;
              v47 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                           ServantStatusDialog_EndDelegate_TypeInfo,
                                                           v39,
                                                           v40,
                                                           v41,
                                                           v42);
              ServantStatusDialog_EndDelegate___ctor(
                v47,
                (Il2CppObject *)this,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
              System_Action___ctor(v52, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v46 )
                goto LABEL_61;
              v53 = 13;
            }
            else
            {
              v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v61 = *(_QWORD *)&this->fields.isModify;
              if ( !v61 )
                goto LABEL_61;
              v62 = *(_QWORD *)(v61 + 88);
              if ( !v62 )
                goto LABEL_61;
              v45 = *(EquipTargetInfo_o **)(v62 + 144);
              v46 = (CommonUI_o *)v56;
              v47 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                           ServantStatusDialog_EndDelegate_TypeInfo,
                                                           v57,
                                                           v58,
                                                           v59,
                                                           v60);
              ServantStatusDialog_EndDelegate___ctor(
                v47,
                (Il2CppObject *)this,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v63, v64, v65, v66);
              System_Action___ctor(v52, (Il2CppObject *)this, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v46 )
                goto LABEL_61;
              if ( v37 == 5 )
                v53 = 14;
              else
                v53 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_18252676(v46, v53, v45, v47, v52, 0LL);
          }
          else
          {
LABEL_36:
            v54 = this->fields.profileTabListViewManager;
            v55 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                   ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                   *(_QWORD *)&result,
                                                                   *(_QWORD *)&id,
                                                                   method,
                                                                   v4);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v55,
              (Il2CppObject *)this,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v54 )
              goto LABEL_61;
            ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v54, 1, v55, 0LL);
          }
        }
        break;
      case 3:
        if ( id > 2 )
          ServantStatusDialog__OnClickCommandCharaCostume(this, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickCommandCharaLevel(this, id, *(const MethodInfo **)&id);
        return;
      case 4:
        if ( id > 3 )
          ServantStatusDialog__OnClickFaceCharaCostume(this, id - 4, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickFaceCharaLevel(this, id, *(const MethodInfo **)&id);
        return;
      case 5:
        if ( id > 2 )
          ServantStatusDialog__OnClickPortraitCharaCostume(this, id - 3, *(const MethodInfo **)&id);
        else
          ServantStatusDialog__OnClickPortraitCharaLevel(this, id, *(const MethodInfo **)&id);
        return;
      case 6:
        ServantStatusDialog__OnClickCommandCodeShow(this, id, *(const MethodInfo **)&id);
        return;
      case 7:
        ServantStatusDialog__OnClickServantQuest(this, id, *(const MethodInfo **)&id);
        return;
      case 8:
        ServantStatusDialog__OnClickTdSpeed(this, id, *(const MethodInfo **)&id);
        return;
      case 9:
        ServantStatusDialog__OnClickChangeVoice(this, id, *(const MethodInfo **)&id);
        return;
      case 10:
        ServantStatusDialog__OnClickRandomLimitCountSupport(this, id, *(const MethodInfo **)&id);
        return;
      case 11:
        ServantStatusDialog__RandomLimitCountSettingResource(this, id == 1, *(const MethodInfo **)&id);
        return;
      case 12:
        ServantStatusDialog__OnclickRandomLimitCountMask(this, id, *(const MethodInfo **)&id);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v15; // x23
  const MethodInfo *v16; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v19; // x0
  ServantVoiceMaster_o *v20; // x23
  WebViewManager_o *v21; // x0
  ServantStatusVoiceListViewManager_o *v22; // x0
  ServantStatusVoiceListViewItem_o *Item; // x0
  ServantStatusVoiceListViewItem_o *v24; // x25
  int32_t v25; // w22
  int32_t LimitCount; // w0
  int32_t v27; // w21
  System_String_o *v28; // x24
  System_String_o *LabelName; // x0
  System_String_o *v30; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v32; // x5
  int32_t CondType; // w0
  int32_t v34; // w0
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v36; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v38; // x5
  int32_t PlayType; // w0
  int32_t CondValue; // w0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F87B5 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v10);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectVoice__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_15842, v13);
    byte_40F87B5 = 1;
  }
  VoicePrefix = 0;
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    v15 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                *(_QWORD *)&kind,
                                                                *(_QWORD *)&result,
                                                                method,
                                                                v4);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0LL);
    if ( !servantNameRangeLabel )
      goto LABEL_58;
    ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v15, 0LL);
    if ( !BYTE1(this->fields.statusLoadAsset) )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v16);
        return;
      }
      if ( kind == 1 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v19 )
          goto LABEL_58;
        v20 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v21 )
          goto LABEL_58;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v21,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v22 = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
        if ( !v22 )
          goto LABEL_58;
        Item = ServantStatusVoiceListViewManager__GetItem(v22, result, 0LL);
        if ( !Item )
          goto LABEL_58;
        v24 = Item;
        v25 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(Item, 0LL);
        LimitCount = ServantStatusVoiceListViewItem__get_LimitCount(v24, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_58;
        v27 = LimitCount;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(MasterData_WarQuestSelectionMaster, v25, LimitCount, 0LL);
        v28 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v24, 0LL);
        v30 = System_String__Concat_43746016(v28, (System_String_o *)StringLiteral_15842, LabelName, 0LL);
        switch ( ServantStatusVoiceListViewItem__get_PlayType(v24, 0LL) )
        {
          case 1:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList(v20, v25, v27, v30, 0LL);
            goto LABEL_52;
          case 2:
            CondType = ServantStatusVoiceListViewItem__get_CondType(v24, 0LL);
            if ( CondType <= 7 )
            {
              if ( CondType != 7 )
                goto LABEL_50;
              if ( !v24->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v24, 0LL) == 1
                  || ServantStatusVoiceListViewItem__get_CondValue(v24, 0LL) == 3 )
                {
                  CondValue = ServantStatusVoiceListViewItem__get_CondValue(v24, 0LL);
                  if ( v20 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_30056592(
                                      v20,
                                      v25,
                                      v27,
                                      CondValue,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_B170D4();
                }
                if ( !v20 )
                  goto LABEL_58;
                if ( !v24->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(v20, v25, v27, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(v20, v25, v27, v30, 0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( CondType != 18 )
              {
                if ( CondType == 54 )
                {
                  v34 = ServantStatusVoiceListViewItem__get_LimitCount(v24, 0LL);
                  if ( v20 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v20, v25, v34, 0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_22420840(this, v25, v27, HomeVoiceList, result, v32);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v20 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(v20, v25, v27, v30, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v24->fields.genderFlag && !v24->fields.voiceLabelSpecification )
              {
                if ( v20 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(v20, v25, v27, 2, 1, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v20 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList(v20, v25, v27, v30, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList(v20, v25, v27, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList(v20, v25, v27, v30, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v20 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList(v20, v25, v27, v30, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v25, v27, BattleVoiceList, result, v36);
            return;
          case 7:
            if ( !v20 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList(v20, v25, v27, v30, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v25, v27, NpVoiceList, result, v38);
            return;
          case 8:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(v20, v25, v27, v30, 0LL);
            goto LABEL_52;
          case 9:
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList(v20, v25, v27, v30, 0LL);
            goto LABEL_52;
          default:
            PlayType = ServantStatusVoiceListViewItem__get_PlayType(v24, 0LL);
            if ( !v20 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_30054132(v20, PlayType, v25, v27, v30, 0LL);
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewManager_CallbackFunc_o *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x22
  __int64 v27; // x22
  CommonUI_o *v28; // x22
  System_String_o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  CommonConfirmDialog_ClickDelegate_o *v34; // x24

  if ( (byte_40F87BB & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&OptionManager_TypeInfo, v7);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B16FFC(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11952, v12);
    sub_B16FFC(&StringLiteral_11950, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    sub_B16FFC(&StringLiteral_11949, v15);
    byte_40F87BB = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11950, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11949, 0LL);
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
    v24 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                           ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                           v20,
                                                           v21,
                                                           v22,
                                                           v23);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v24, 0LL);
      return;
    }
LABEL_32:
    sub_B170D4();
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
    v25 = *(_QWORD *)&this->fields.isModify;
    if ( v25 && *(_BYTE *)(v25 + 329) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v26 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v27 = **(_QWORD **)(v26 + 192);
      if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
        sub_AAFCFC(v27);
      v28 = **(CommonUI_o ***)(v27 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11952, 0LL);
      v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v30,
                                                     v31,
                                                     v32,
                                                     v33);
      CommonConfirmDialog_ClickDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__,
        0LL);
      if ( !v28 )
        goto LABEL_32;
      CommonUI__OpenConfirmDecideDlg(
        v28,
        (System_String_o *)StringLiteral_1,
        v29,
        v16,
        v18,
        v34,
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewItem_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_40F8770 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8770 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor(v24, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22390276(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewItem_o *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_40F8771 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8771 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor(v24, partyItem, member, callback != 0LL, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22390480(
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewItem_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_40F8772 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8772 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor_36647016(v24, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22390680(
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
  WebViewManager_o *v15; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 *v17; // x8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v20; // x5

  if ( (byte_40F8773 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8773 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v15, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)*v17);
  ServantStatusDialog__Open_22390972(this, kind, Entity, callback, openCallback, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22390972(
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w21
  bool v25; // w22
  ServantStatusListViewItem_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_40F8777 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8777 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36648624(v26, userSvtEntity, 0LL, 0LL, 0, v24, v25, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22391256(
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
  WebViewManager_o *v15; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 *v17; // x8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v20; // x5

  if ( (byte_40F8774 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8774 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v15, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)*v17);
  ServantStatusDialog__Open_22391548(this, kind, Entity, callback, openCallback, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22391548(
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w22
  bool v25; // w23
  ServantStatusListViewItem_o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_40F8778 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8778 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36648624(v26, userSvtEntity, 0LL, 0LL, callback != 0LL, v24, v25, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22391836(
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
  WebViewManager_o *v15; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 *v17; // x8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v20; // x5

  if ( (byte_40F8775 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8775 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v15, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)*v17);
  ServantStatusDialog__Open_22392128(this, kind, Entity, callback, openCallback, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22392128(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w21
  bool v25; // w22
  ServantStatusListViewItem_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_40F8779 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8779 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36648624(v26, userSvtEntity, 0LL, 0LL, 0, v24, v25, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22392412(
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
  WebViewManager_o *v15; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 *v17; // x8
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v20; // x5

  if ( (byte_40F8776 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F8776 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v15, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)*v17);
  ServantStatusDialog__Open_22392704(this, kind, Entity, callback, openCallback, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22392704(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w22
  bool v25; // w23
  ServantStatusListViewItem_o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_40F877A & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F877A = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = 0;
  if ( v23 != 29 && v23 != 34 )
    v25 = v23 != 2 && v23 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36648624(v26, userSvtEntity, 0LL, 0LL, callback != 0LL, v24, v25, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22393096(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v17; // x7

  if ( (byte_40F877B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F877B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22393304(this, kind, Entity, equipIdList, 0LL, callback, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22393304(
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
  __int64 v23; // x3
  __int64 v24; // x4
  int v25; // w8
  bool v26; // w23
  bool v27; // w24
  ServantStatusListViewItem_o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_40F877C & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F877C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = *(_DWORD *)&this->fields.isInitTab;
  v26 = 0;
  if ( v25 != 29 && v25 != 34 )
    v26 = v25 != 2 && v25 != 33;
  v27 = 0;
  if ( v25 != 29 && v25 != 34 )
    v27 = v25 != 2 && v25 != 33;
  v28 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v21, v22, v23, v24);
  ServantStatusListViewItem___ctor_36648624(v28, userSvtEntity, equipIdList, questRestrictionInfo, 0, v26, v27, 0LL);
  *(_QWORD *)&this->fields.isModify = v28;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22393604(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
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
  __int64 v23; // x3
  __int64 v24; // x4
  int v25; // w8
  bool v26; // w23
  bool v27; // w24
  ServantStatusListViewItem_o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_40F877D & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F877D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = *(_DWORD *)&this->fields.isInitTab;
  v26 = 0;
  if ( v25 != 29 && v25 != 34 )
    v26 = v25 != 2 && v25 != 33;
  v27 = 0;
  if ( v25 != 29 && v25 != 34 )
    v27 = v25 != 2 && v25 != 33;
  v28 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v21, v22, v23, v24);
  ServantStatusListViewItem___ctor_36648624(v28, userSvtEntity, equipIdList, questRestrictionInfo, 0, v26, v27, 0LL);
  *(_QWORD *)&this->fields.isModify = v28;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22393904(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_ResultDelegate_o *callback,
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
  __int64 v23; // x3
  __int64 v24; // x4
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

  if ( (byte_40F877E & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F877E = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = *(_DWORD *)&this->fields.isInitTab;
  v26 = 0;
  if ( v25 != 29 && v25 != 34 )
    v26 = v25 != 2 && v25 != 33;
  v27 = 0;
  if ( v25 != 29 && v25 != 34 )
    v27 = v25 != 2 && v25 != 33;
  v28 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v21, v22, v23, v24);
  ServantStatusListViewItem___ctor_36648624(
    v28,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v26,
    v27,
    0LL);
  *(_QWORD *)&this->fields.isModify = v28;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22394208(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v18; // x6

  if ( (byte_40F877F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F877F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_22394424(this, kind, Entity, isUse, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_22394424(
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewItem_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_40F8780 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8780 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor_36650904(v24, userSvtEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22394620(
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w21
  ServantStatusListViewItem_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_40F8781 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8781 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36652712(v25, userSvtCollectionEntity, 0, v24, 0LL);
  *(_QWORD *)&this->fields.isModify = v25;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22394852(
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
  __int64 v22; // x3
  __int64 v23; // x4
  int v24; // w8
  bool v25; // w22
  ServantStatusListViewItem_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1

  if ( (byte_40F8782 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8782 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    *(System_String_array ***)&imageLimitCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = *(_DWORD *)&this->fields.isInitTab;
  v25 = 0;
  if ( v24 != 29 && v24 != 34 )
    v25 = v24 != 2 && v24 != 33;
  v26 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor_36654396(v26, userSvtCollectionEntity, imageLimitCount, 0, v25, 0LL);
  *(_QWORD *)&this->fields.isModify = v26;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22395100(
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
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w8
  bool v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_40F8783 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8783 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = *(_DWORD *)&this->fields.isInitTab;
  v24 = 0;
  if ( v23 != 29 && v23 != 34 )
    v24 = v23 != 2 && v23 != 33;
  v25 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36652712(v25, userSvtCollectionEntity, callback != 0LL, v24, 0LL);
  *(_QWORD *)&this->fields.isModify = v25;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22395336(
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusListViewItem_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40F8784 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8784 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)servantLeaderInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36655836(v23, servantLeaderInfo, kind != 7, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22395524(
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusListViewItem_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40F8785 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8785 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)equipTargetInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36657548(v23, equipTargetInfo, kind == 19, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22395712(
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
  __int64 v22; // x3
  __int64 v23; // x4
  ServantStatusListViewItem_o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_40F8786 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8786 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)commandCodeEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v20, v21, v22, v23);
  ServantStatusListViewItem___ctor_36658376(v24, commandCodeEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22395908(
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusListViewItem_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40F8787 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8787 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36658772(v23, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22396088(
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusListViewItem_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40F8788 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8788 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36658772(v23, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B16F98(
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
void __fastcall ServantStatusDialog__Open_22396268(
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
  __int64 v21; // x3
  __int64 v22; // x4
  ServantStatusListViewItem_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40F8789 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_40F8789 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v19, v20, v21, v22);
  ServantStatusListViewItem___ctor_36659908(v23, userCommandCodeCollectionEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v23;
  sub_B16F98(
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
  UnityEngine_Component_o *v25; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UnityEngine_Transform_o *v29; // x0
  unsigned int localScale; // s0
  UnityEngine_Component_o *v31; // x0
  float v32; // s8
  UnityEngine_Transform_o *v33; // x0
  ServantStatusListViewItem_o *v34; // x0
  int32_t SvtId; // w0
  int32_t v36; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  UnityEngine_Object_o *v39; // x24
  int32_t v40; // w23
  BattleFBXComponent_o **p_isBattleResourceLoading; // x21
  UnityEngine_Object_o *callbackFunc; // x25
  struct ServantStatusDialog_EndDelegate_o **p_callbackFunc; // x24
  UnityEngine_Object_o *v44; // x25
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v48; // w25
  UnityEngine_GameObject_o *gameObject; // x23
  System_Int32_array **Manager__loadBattleActor; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v57; // x24
  UnityEngine_Transform_o *v58; // x0
  WebViewManager_o *v59; // x0
  ServantLimitAddMaster_o *v60; // x0
  float32x2_t v61; // d8
  float v62; // s9
  UnityEngine_Transform_o *v63; // x0
  unsigned __int64 v64; // d0 OVERLAPPED
  float v65; // s2
  int v66; // s1
  UnityEngine_Transform_o *v67; // x0
  UnityEngine_Transform_o *v68; // x26
  int v69; // s0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x8
  __int64 v77; // x8
  int32_t v78; // w26
  System_Collections_Generic_Dictionary_int__float__o *v79; // x27
  UnityEngine_Transform_o *v80; // x28
  float Item; // s8
  float v82; // s9
  float v83; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  UnityEngine_GameObject_o *v85; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x25
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Animation_o *v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t v95; // w21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  struct ServantStatusFlavorTextListViewManager_o *v101; // x20
  ServantStatusListViewManager_CallbackFunc_o *v102; // x21
  bool v103; // [xsp+14h] [xbp-6Ch]
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  v3 = noupdate;
  if ( (byte_40F8799 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v16);
    sub_B16FFC(&NGUITools_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_2757, v22);
    sub_B16FFC(&StringLiteral_16147, v23);
    byte_40F8799 = 1;
  }
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
      v25 = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      LOBYTE(this->fields.battleActor) = 1;
      if ( !v25 )
        goto LABEL_93;
      transform = UnityEngine_Component__get_transform(v25, 0LL);
      if ( !transform )
        goto LABEL_93;
      parent = (UnityEngine_Component_o *)transform;
      while ( 1 )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            parent,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
          break;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)parent, 0LL);
        if ( !parent )
          goto LABEL_93;
      }
      if ( !Component_WebViewObject )
        goto LABEL_93;
      v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
      if ( !v29 )
        goto LABEL_93;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale(v29, 0LL);
      v31 = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
      if ( !v31 )
        goto LABEL_93;
      v32 = *(float *)&localScale;
      v33 = UnityEngine_Component__get_transform(v31, 0LL);
      if ( !v33 )
        goto LABEL_93;
      v105.fields.x = 1.0 / v32;
      v105.fields.y = 1.0 / v32;
      v105.fields.z = 1.0 / v32;
      UnityEngine_Transform__set_localScale(v33, v105, 0LL);
      v34 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !v34 )
        goto LABEL_93;
      SvtId = ServantStatusListViewItem__get_SvtId(v34, 0LL);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_93;
      v36 = SvtId;
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
      v39 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      v40 = LimitCountByImageLimitCostumeIn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_isBattleResourceLoading = (BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
      if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
      {
        if ( !*p_isBattleResourceLoading )
          goto LABEL_93;
        BattleFBXComponent__RevertShaderFloatProperty(*p_isBattleResourceLoading, 0LL);
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
        v44 = (UnityEngine_Object_o *)*p_callbackFunc;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v44, 0LL);
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_93;
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_93;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     MasterData_WarQuestSelectionMaster,
                                     v36,
                                     v40,
                                     0LL);
      if ( !this->fields.bgTxtSprite )
        goto LABEL_93;
      v48 = ServantLimitCountSealAfter;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.bgTxtSprite, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadBattleActor = (System_Int32_array **)ServantAssetLoadManager__loadBattleActor(
                                                          gameObject,
                                                          v36,
                                                          v48,
                                                          0,
                                                          0LL);
      *p_callbackFunc = (struct ServantStatusDialog_EndDelegate_o *)Manager__loadBattleActor;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        Manager__loadBattleActor,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      if ( !Manager__loadBattleActor )
        goto LABEL_93;
      v57 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)Manager__loadBattleActor,
              (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      v58 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadBattleActor, 0LL);
      if ( !v57 )
        goto LABEL_93;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v57, v58, 0LL);
      v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v59 )
        goto LABEL_93;
      v60 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v59,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !v60 )
        goto LABEL_93;
      if ( ServantLimitAddMaster__TryGetEntity(v60, &entity, v36, v48, 0LL) )
      {
        if ( !entity )
          goto LABEL_93;
        v61.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v62 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v61.n64_u64[0] = 0LL;
        v62 = 0.0;
      }
      v63 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadBattleActor, 0LL);
      if ( !v63 )
        goto LABEL_93;
      v64 = vadd_f32(v61, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.y).n64_u64[0];
      v65 = v62 + *(float *)&this->fields.titleInfo;
      v66 = HIDWORD(v64);
      UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
      v67 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadBattleActor, 0LL);
      if ( !v67 )
        goto LABEL_93;
      v106.fields.y = 270.0;
      v106.fields.x = 0.0;
      v106.fields.z = 0.0;
      UnityEngine_Transform__set_localEulerAngles(v67, v106, 0LL);
      v68 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadBattleActor, 0LL);
      *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_one(0LL);
      if ( !v68 )
        goto LABEL_93;
      UnityEngine_Transform__set_localScale(v68, *(UnityEngine_Vector3_o *)&v69, 0LL);
      v76 = *(_QWORD *)&this->fields.isModify;
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 128);
        if ( v77 )
        {
          v103 = v3;
          v78 = *(_DWORD *)(v77 + 156);
          v79 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B170CC(
                                                                         System_Collections_Generic_Dictionary_int__float__TypeInfo,
                                                                         v72,
                                                                         v73,
                                                                         v74,
                                                                         v75);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v79,
            (const MethodInfo_2DEC454 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v79 )
            goto LABEL_93;
          System_Collections_Generic_Dictionary_int__float___Add(
            v79,
            5,
            0.75,
            (const MethodInfo_2DED000 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v79,
            8,
            0.75,
            (const MethodInfo_2DED000 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v79,
            9,
            0.75,
            (const MethodInfo_2DED000 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v79,
                 v78,
                 (const MethodInfo_2DED270 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v80 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadBattleActor, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v79,
                     v78,
                     (const MethodInfo_2DECF40 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v82 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v79,
                    v78,
                    (const MethodInfo_2DECF40 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v83 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v79,
                    v78,
                    (const MethodInfo_2DECF40 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v80 )
              goto LABEL_93;
            v107.fields.z = v83;
            v107.fields.x = Item;
            v107.fields.y = v82;
            UnityEngine_Transform__set_localScale(v80, v107, 0LL);
            v3 = v103;
            p_isBattleResourceLoading = (BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v57, v36, v48, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v57, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v57,
          5000.0,
          (System_String_o *)StringLiteral_16147,
          0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v36, v48, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v57, Manager__loadAnimEvents, v36, v48, 0LL);
      BattleFBXComponent__SetWrapMode(
        (BattleFBXComponent_o *)v57,
        *(System_String_o **)&this->fields.confirmDispLv,
        2,
        0LL);
      BattleFBXComponent__playAnimation(
        (BattleFBXComponent_o *)v57,
        *(System_String_o **)&this->fields.confirmDispLv,
        0LL);
      v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v57, 0LL);
      if ( !v85
        || (Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v85,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v57, 0LL)) == 0LL) )
      {
LABEL_93:
        sub_B170D4();
      }
      v88 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         v87,
                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_93;
        SimpleAnimation__Sample(Component_srcLineSprite, 0LL);
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v88, 0LL, 0LL) )
        {
          if ( !v88 )
            goto LABEL_93;
          UnityEngine_Animation__Sample(v88, 0LL);
        }
      }
      *p_isBattleResourceLoading = (BattleFBXComponent_o *)v57;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_isBattleResourceLoading,
        (System_Int32_array **)v57,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)Manager__loadBattleActor, v95, 0LL);
      if ( !v3 )
      {
        profileTabListViewManager = this->fields.profileTabListViewManager;
        if ( !profileTabListViewManager )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          3,
          0LL);
        v101 = this->fields.profileTabListViewManager;
        if ( BYTE2(this->fields.statusLoadAsset) )
        {
          if ( v101 )
          {
            ServantStatusListViewManager__SetMode_32653296(
              (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager,
              2,
              0LL);
            return;
          }
          goto LABEL_93;
        }
        v102 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                v97,
                                                                v98,
                                                                v99,
                                                                v100);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v102,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !v101 )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v101, 1, v102, 0LL);
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
  if ( (byte_40F87A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B16FFC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_40F87A5 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_22420840(
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
  if ( (byte_40F87A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B16FFC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_40F87A7 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  if ( (byte_40F87A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B16FFC(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_40F87A6 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  const MethodInfo *v13; // x1
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

  if ( (byte_40F87A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_40F87A2 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( voicePlayList && *(_QWORD *)&voicePlayList->max_length )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( !voicePlayer )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voicePlayer,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v33 = v32;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v28 = 0;
        v29 = 1;
        goto LABEL_15;
      }
      if ( !assetName )
        sub_B170D4();
    }
    while ( !System_String__Equals_43731072(assetName, (System_String_o *)v33.fields.current, 0LL) );
    ServantStatusDialog__StopVoice(this, v13);
    if ( LODWORD(this->fields.tabInitList) == 3 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        sub_B170D4();
      ServantStatusVoiceListViewManager__SetMode_30015892(servantNameRangeLabel, 2, listIndex, 0LL);
      LODWORD(this->fields.battleLoadAsset) = listIndex;
    }
    *(_QWORD *)&this->fields.voicePlayNum = voicePlayList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.voicePlayNum,
      (System_Int32_array **)voicePlayList,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    *(_QWORD *)&this->fields.voiceListIndex = assetName;
    sub_B16F98(
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
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  __int64 v4; // x1
  int v5; // w8
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F87AD & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_40F87AD = 1;
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
    servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
    if ( servantStatusBattleConfirmDialog )
    {
      ServantStatusCharaGraphListViewManager__SetMode_22365496(
        (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
        1,
        v2);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          2,
          0LL);
        battleTabListViewManager = this->fields.battleTabListViewManager;
        if ( battleTabListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_36635448(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            2,
            0LL);
          if ( !BYTE4(this->fields.statusLoadAsset) )
            return;
          Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__setTargetRootActive(Instance, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x8
  unsigned __int8 *v36; // x8
  int v37; // w24
  const MethodInfo *v38; // x1
  _BOOL4 IsContainRandomIndex; // w21
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int32_t v48; // w22
  BalanceConfig_c *v49; // x8
  __int64 v50; // x8
  System_Int32_array *v51; // x22
  System_Func_int__bool__o *v52; // x23
  __int64 v53; // x19
  __int64 v54; // x19
  CommonUI_o *v55; // x19
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  System_String_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  CommonConfirmDialog_ClickDelegate_o *v63; // x0
  __int64 *v64; // x8
  __int64 v65; // x19
  __int64 v66; // x19
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  CommonConfirmDialog_ClickDelegate_o *v71; // x24
  ServantStatusListViewItem_o *v72; // x0
  const MethodInfo *v73; // x2
  struct ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x0
  const MethodInfo *v75; // x2
  struct ServantStatusBattleConfirmDialog_o *v76; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  ServantStatusListViewManager_CallbackFunc_o *v83; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_40F87D3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, v7);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v15);
    sub_B16FFC(&SoundManager_TypeInfo, v16);
    sub_B16FFC(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__, v17);
    sub_B16FFC(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__, v18);
    sub_B16FFC(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__, v19);
    sub_B16FFC(&ServantStatusDialog___c__DisplayClass206_0_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_11967, v21);
    sub_B16FFC(&StringLiteral_11965, v22);
    sub_B16FFC(&StringLiteral_11950, v23);
    sub_B16FFC(&StringLiteral_1, v24);
    sub_B16FFC(&StringLiteral_11951, v25);
    sub_B16FFC(&StringLiteral_11966, v26);
    sub_B16FFC(&StringLiteral_11949, v27);
    byte_40F87D3 = 1;
  }
  v28 = sub_B170CC(ServantStatusDialog___c__DisplayClass206_0_TypeInfo, isOwnSetting, method, v3, v4);
  ServantStatusDialog___c__DisplayClass206_0___ctor((ServantStatusDialog___c__DisplayClass206_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_53;
  *(_QWORD *)(v28 + 24) = this;
  *(_BYTE *)(v28 + 20) = isOwnSetting;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  v35 = *(_QWORD *)&this->fields.isModify;
  if ( *(_BYTE *)(v28 + 20) )
  {
    if ( !v35 )
      goto LABEL_53;
    v36 = (unsigned __int8 *)(v35 + 329);
  }
  else
  {
    if ( !v35 )
      goto LABEL_53;
    v36 = (unsigned __int8 *)(v35 + 330);
  }
  v37 = *v36 ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v37 == 0, 0LL);
  IsContainRandomIndex = ServantStatusDialog__IsContainRandomIndex(this, v38);
  *(_DWORD *)(v28 + 16) = 12;
  if ( v37 )
  {
    v40 = *(_QWORD *)&this->fields.isModify;
    if ( !v40 )
      goto LABEL_53;
    v41 = *(_QWORD *)(v40 + 56);
    if ( !v41 )
      goto LABEL_53;
    v43 = *(_QWORD *)(v41 + 80);
    v42 = *(_QWORD *)(v41 + 88);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v84.fields.currentCryptoKey = v43;
    *(_QWORD *)&v84.fields.fakeValue = v42;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v84, 0LL);
    v49 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( v48 == v49->static_fields->ServantIdMashu1 )
    {
      v50 = *(_QWORD *)&this->fields.isModify;
      if ( !v50 )
        goto LABEL_53;
      v51 = *(System_Int32_array **)(v50 + 336);
      if ( v51 )
      {
        v52 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v44, v45, v46, v47);
        System_Func_int__bool____ctor(
          v52,
          (Il2CppObject *)v28,
          Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        if ( BasicHelper__Any_int__25910576(
               v51,
               (System_Func_T__bool__o *)v52,
               (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
        {
          v53 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
            sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v54 = **(_QWORD **)(v53 + 192);
          if ( (*(_BYTE *)(v54 + 306) & 1) == 0 )
            sub_AAFCFC(v54);
          v55 = **(CommonUI_o ***)(v54 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11967, 0LL);
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11966, 0LL);
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11965, 0LL);
          v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                         CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                         v59,
                                                         v60,
                                                         v61,
                                                         v62);
          v64 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__;
          goto LABEL_42;
        }
      }
    }
  }
  if ( (IsContainRandomIndex & v37 & 1) != 0 )
  {
    v65 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v66 = **(_QWORD **)(v65 + 192);
    if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
      sub_AAFCFC(v66);
    v55 = **(CommonUI_o ***)(v66 + 184);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11951, 0LL);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11950, 0LL);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11949, 0LL);
    v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v67,
                                                   v68,
                                                   v69,
                                                   v70);
    v64 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__;
LABEL_42:
    v71 = v63;
    CommonConfirmDialog_ClickDelegate___ctor(v63, (Il2CppObject *)v28, *v64, 0LL);
    if ( v55 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v55,
        (System_String_o *)StringLiteral_1,
        v56,
        v57,
        v58,
        v71,
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
    sub_B170D4();
  }
  v72 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v72 )
    goto LABEL_53;
  if ( *(_BYTE *)(v28 + 20) )
  {
    ServantStatusListViewItem__set_IsEnableOwnRandomSetting(v72, !v72->fields.isEnableOwnRandomSetting, 0LL);
    servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
    if ( !servantStatusBattleConfirmDialog )
      goto LABEL_53;
    ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
      (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
      *(ServantStatusListViewItem_o **)&this->fields.isModify,
      v73);
    v76 = this->fields.servantStatusBattleConfirmDialog;
    if ( !v76 )
      goto LABEL_53;
    ServantStatusCharaGraphListViewManager__SetEnableScroll(
      (ServantStatusCharaGraphListViewManager_o *)v76,
      *(ServantStatusListViewItem_o **)&this->fields.isModify,
      v75);
  }
  else
  {
    v72->fields.isEnableSupportRandomSetting ^= 1u;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)profileTabListViewManager, 10, 0LL);
  v78 = this->fields.profileTabListViewManager;
  v83 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                         v79,
                                                         v80,
                                                         v81,
                                                         v82);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v83,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v78 )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v78, 1, v83, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__RandomLimitCountSupportResource(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusListViewItem_o *v6; // x0
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_40F87D2 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_40F87D2 = 1;
  }
  v6 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v6
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(v6, index, 0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          9,
          0LL),
        v8 = this->fields.profileTabListViewManager,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10,
                                                               v11,
                                                               v12),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v8, 1, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleMaskBase; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F8798 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flag);
    byte_40F8798 = 1;
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
      sub_B170D4();
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
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 currentMaskType; // x10
  ServantStatusListViewItem_o *v18; // x0
  ServantStatusListViewItem_o *v19; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v23; // x21
  int32_t SvtId; // w0
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v26; // w20
  int32_t v27; // w21
  System_String_o *ActorFolderNameFromDisp; // x0
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v30; // x20
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x22
  CommonUI_o *v39; // x0
  System_String_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  AssetLoader_LoadEndDataHandler_o *v45; // x21
  const MethodInfo *v46; // x1

  if ( (byte_40F879B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, isModifyInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B16FFC(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40F879B = 1;
  }
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  ServantStatusBattleListViewManager__ChangeSelectIndex(voiceTabListViewManager, this->fields.currentMaskType, method);
  v15 = *(_QWORD *)&this->fields.isModify;
  if ( !v15 )
    goto LABEL_32;
  v16 = *(_QWORD *)(v15 + 248);
  if ( !v16 )
    goto LABEL_32;
  currentMaskType = this->fields.currentMaskType;
  if ( (unsigned int)currentMaskType >= *(_DWORD *)(v16 + 24) )
  {
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  *(_DWORD *)(v15 + 240) = *(_DWORD *)(v16 + 4 * currentMaskType + 32);
  if ( isModifyInfo )
  {
    v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v18 )
      goto LABEL_32;
    ServantStatusListViewItem__ModifyInfo(v18, 0LL);
  }
  v19 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v19 )
    goto LABEL_32;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v19, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v23 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( !v23 )
    goto LABEL_32;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v23,
                                 SvtId,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_32;
  v26 = ServantImageLimitSealAfter;
  v27 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ActorFolderNameFromDisp = ServantAssetLoadManager__getActorFolderNameFromDisp(v27, v26, 0LL);
  if ( !ActorFolderNameFromDisp )
    goto LABEL_32;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v30 = (System_Int32_array **)ActorFolderNameFromDisp;
  if ( System_String__Equals_43731072(ActorFolderNameFromDisp, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    ServantStatusDialog__EndChangeBattleResource(this, v31);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v38 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v38, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v30;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v30, v32, v33, v34, v35, v36, v37);
  v39 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v39 )
LABEL_32:
    sub_B170D4();
  CommonUI__SetLoadMode(v39, 1, 0LL);
  v40 = *(System_String_o **)&this->fields.isBattlePlay;
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43, v44);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v40, v45, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v46);
}


void __fastcall ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
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
  _QWORD *v14; // x8
  unsigned int v15; // w9
  UnityEngine_GameObject_o *lockSprite; // x0
  UserServantEntity_o *v17; // x0
  __int64 v18; // x8
  UISprite_o *v19; // x0
  System_String_o **v20; // x8
  __int64 v21; // x8
  struct UICommonButton_o *v22; // x0
  System_String_o **v23; // x8
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x8
  struct UICommonButton_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x8
  UISprite_o *choiceSprite; // x0
  System_String_o **v36; // x8
  __int64 v37; // x8
  struct UICommonButton_o *favoriteButton; // x0
  System_String_o **v39; // x8
  UnityEngine_Component_o *favoriteSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  UISprite_o *equipSprite; // x20
  __int128 v45; // q1
  __int64 v46; // x22
  int64_t v47; // x0
  System_String_o **v48; // x8
  UnityEngine_Object_o *pushSprite; // x20
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x8
  UserServantEntity_o *v53; // x0
  struct UISprite_o *v54; // x0
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0
  System_String_o **v56; // x8
  struct UISprite_o *v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  __int128 v60; // q1
  struct ServantStatusCharaGraphListViewManager_o *v61; // x20
  __int64 v62; // x21
  int64_t v63; // x0
  bool v64; // zf
  UnityEngine_Component_o *pushButton; // x0
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x8
  struct UICommonButton_o *v68; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-40h]

  if ( (byte_40F87AB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_17067, v4);
    sub_B16FFC(&StringLiteral_17071, v5);
    sub_B16FFC(&StringLiteral_17072, v6);
    sub_B16FFC(&StringLiteral_17068, v7);
    sub_B16FFC(&StringLiteral_17062, v8);
    sub_B16FFC(&StringLiteral_19256, v9);
    sub_B16FFC(&StringLiteral_17061, v10);
    sub_B16FFC(&StringLiteral_19257, v11);
    sub_B16FFC(&StringLiteral_17063, v12);
    sub_B16FFC(&StringLiteral_17064, v13);
    byte_40F87AB = 1;
  }
  v14 = *(_QWORD **)&this->fields.isModify;
  if ( !v14 )
    goto LABEL_87;
  if ( !v14[2] || (v15 = *(_DWORD *)&this->fields.isInitTab, v15 <= 0x24) && ((1LL << v15) & 0x19E0000000LL) != 0 )
  {
    lockSprite = (UnityEngine_GameObject_o *)this->fields.lockSprite;
    if ( lockSprite )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive(lockSprite, 0, 0LL);
      return;
    }
    goto LABEL_87;
  }
  v17 = (UserServantEntity_o *)v14[7];
  if ( v17 )
  {
    if ( !UserServantEntity__IsLeave(v17, 0LL) )
    {
      v33 = (UnityEngine_GameObject_o *)this->fields.lockSprite;
      if ( !v33 )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive(v33, 1, 0LL);
      v34 = *(_QWORD *)&this->fields.isModify;
      if ( !v34 )
        goto LABEL_87;
      choiceSprite = this->fields.choiceSprite;
      if ( !choiceSprite )
        goto LABEL_87;
      v36 = (System_String_o **)(*(_BYTE *)(v34 + 325) ? &StringLiteral_17067 : &StringLiteral_17068);
      UISprite__set_spriteName(choiceSprite, *v36, 0LL);
      v37 = *(_QWORD *)&this->fields.isModify;
      if ( !v37 )
        goto LABEL_87;
      favoriteButton = this->fields.favoriteButton;
      if ( !favoriteButton )
        goto LABEL_87;
      v39 = (System_String_o **)(*(_BYTE *)(v37 + 326) ? &StringLiteral_17061 : &StringLiteral_17062);
      UISprite__set_spriteName((UISprite_o *)favoriteButton, *v39, 0LL);
      favoriteSprite = (UnityEngine_Component_o *)this->fields.favoriteSprite;
      if ( !favoriteSprite )
        goto LABEL_87;
      gameObject = UnityEngine_Component__get_gameObject(favoriteSprite, 0LL);
      if ( !gameObject )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive(gameObject, (bool)this->fields.newProfileList, 0LL);
      v42 = *(_QWORD *)&this->fields.isModify;
      if ( !v42 )
        goto LABEL_87;
      v43 = *(_QWORD *)(v42 + 56);
      if ( !v43 )
        goto LABEL_87;
      equipSprite = this->fields.equipSprite;
      v45 = *(_OWORD *)(v43 + 32);
      v46 = *(_QWORD *)(v42 + 160);
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
      *(_OWORD *)&v71.fields.fakeValue = v45;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v70 = v71;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v70, 0LL);
      if ( !equipSprite )
        goto LABEL_87;
      v48 = (System_String_o **)&StringLiteral_17063;
      if ( v46 != v47 )
        v48 = (System_String_o **)&StringLiteral_17064;
      UISprite__set_spriteName(equipSprite, *v48, 0LL);
      pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
        v50 = (UnityEngine_Component_o *)this->fields.pushSprite;
        if ( !v50 )
          goto LABEL_87;
        v51 = UnityEngine_Component__get_gameObject(v50, 0LL);
        if ( !v51 )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive(v51, BYTE1(this->fields.newProfileList), 0LL);
        v52 = *(_QWORD *)&this->fields.isModify;
        if ( !v52 )
          goto LABEL_87;
        v53 = *(UserServantEntity_o **)(v52 + 56);
        if ( !v53 )
          goto LABEL_87;
        if ( UserServantEntity__IsEventJoin(v53, 0LL) || *(_DWORD *)&this->fields.isInitTab == 3 )
        {
          v54 = this->fields.pushSprite;
          if ( !v54 )
            goto LABEL_87;
          ((void (__fastcall *)(struct UISprite_o *, __int64, __int64, Il2CppMethodPointer))v54->klass->vtable._14_OnEnable.method)(
            v54,
            3LL,
            1LL,
            v54->klass->vtable._15_OnInit.methodPtr);
          charaGraphListViewManager = this->fields.charaGraphListViewManager;
          if ( !charaGraphListViewManager )
            goto LABEL_87;
          v56 = (System_String_o **)&StringLiteral_17072;
        }
        else
        {
          v57 = this->fields.pushSprite;
          if ( !v57 )
            goto LABEL_87;
          ((void (__fastcall *)(struct UISprite_o *, _QWORD, __int64, Il2CppMethodPointer))v57->klass->vtable._14_OnEnable.method)(
            v57,
            0LL,
            1LL,
            v57->klass->vtable._15_OnInit.methodPtr);
          v58 = *(_QWORD *)&this->fields.isModify;
          if ( !v58 )
            goto LABEL_87;
          v59 = *(_QWORD *)(v58 + 56);
          if ( !v59 )
            goto LABEL_87;
          v60 = *(_OWORD *)(v59 + 32);
          v61 = this->fields.charaGraphListViewManager;
          v62 = *(_QWORD *)(v58 + 168);
          *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)(v59 + 16);
          *(_OWORD *)&v71.fields.fakeValue = v60;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v69 = v71;
          v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v69, 0LL);
          if ( !v61 )
            goto LABEL_87;
          v56 = (System_String_o **)&StringLiteral_17071;
          v64 = v62 == v63;
          charaGraphListViewManager = v61;
          if ( !v64 )
            v56 = (System_String_o **)&StringLiteral_17072;
        }
        UISprite__set_spriteName((UISprite_o *)charaGraphListViewManager, *v56, 0LL);
      }
      pushButton = (UnityEngine_Component_o *)this->fields.pushButton;
      if ( !pushButton )
        goto LABEL_87;
      v66 = UnityEngine_Component__get_gameObject(pushButton, 0LL);
      v67 = *(_QWORD *)&this->fields.isModify;
      if ( !v67 )
        goto LABEL_87;
      if ( !v66 )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive(v66, *(_BYTE *)(v67 + 327), 0LL);
      v68 = this->fields.pushButton;
      if ( !v68 )
        goto LABEL_87;
      UISprite__set_spriteName((UISprite_o *)v68, (System_String_o *)StringLiteral_19256, 0LL);
      return;
    }
    v14 = *(_QWORD **)&this->fields.isModify;
    if ( !v14 )
      goto LABEL_87;
  }
  lockSprite = (UnityEngine_GameObject_o *)this->fields.lockSprite;
  if ( !lockSprite )
    goto LABEL_87;
  if ( !v14[13] )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(lockSprite, 1, 0LL);
  v18 = *(_QWORD *)&this->fields.isModify;
  if ( !v18 )
    goto LABEL_87;
  v19 = this->fields.choiceSprite;
  if ( !v19 )
    goto LABEL_87;
  v20 = (System_String_o **)(*(_BYTE *)(v18 + 325) ? &StringLiteral_17067 : &StringLiteral_17068);
  if ( (UISprite__set_spriteName(v19, *v20, 0LL), (v21 = *(_QWORD *)&this->fields.isModify) == 0)
    || (v22 = this->fields.favoriteButton) == 0LL
    || (*(_BYTE *)(v21 + 326)
      ? (v23 = (System_String_o **)&StringLiteral_17061)
      : (v23 = (System_String_o **)&StringLiteral_17062),
        (UISprite__set_spriteName((UISprite_o *)v22, *v23, 0LL),
         (v24 = (UnityEngine_Component_o *)this->fields.favoriteSprite) == 0LL)
     || (v25 = UnityEngine_Component__get_gameObject(v24, 0LL)) == 0LL) )
  {
LABEL_87:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
  v26 = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    v27 = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !v27 )
      goto LABEL_87;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !v28 )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  }
  v29 = (UnityEngine_Component_o *)this->fields.pushButton;
  if ( !v29 )
    goto LABEL_87;
  v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
  v31 = *(_QWORD *)&this->fields.isModify;
  if ( !v31 )
    goto LABEL_87;
  if ( !v30 )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(v30, *(_BYTE *)(v31 + 327), 0LL);
  v32 = this->fields.pushButton;
  if ( !v32 )
    goto LABEL_87;
  UISprite__set_spriteName((UISprite_o *)v32, (System_String_o *)StringLiteral_19257, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t partyItem; // w20
  UnityEngine_Object_o *inputLockPanel; // x21
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o *v8; // x0

  if ( (byte_40F8797 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8797 = 1;
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
          (v8 = this->fields.inputLockPanel) == 0LL) )
    {
      sub_B170D4();
    }
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)v8, partyItem, 0LL);
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
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  int v32; // w22
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  bool v35; // w1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  struct UICommonButton_o *v41; // x0
  UnityEngine_Behaviour_o *v42; // x0
  UISprite_o *v43; // x0
  System_String_o **v44; // x8
  struct UISprite_o *v45; // x0
  UISprite_o *v46; // x0
  System_String_o **v47; // x8
  struct UICommonButton_o *v48; // x0
  UICommonButton_o *v49; // x21
  bool v50; // w0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  struct UICommonButton_o *v53; // x0
  UnityEngine_Behaviour_o *v54; // x0
  UISprite_o *v55; // x0
  __int64 *v56; // x8
  struct UISprite_o *v57; // x0
  UISprite_o *v58; // x0
  System_String_o **v59; // x8
  struct UICommonButton_o *v60; // x0
  UICommonButton_o *v61; // x21
  bool v62; // w0
  char v63; // w2
  bool v64; // w1
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  struct UICommonButton_o *v67; // x0
  UnityEngine_Behaviour_o *v68; // x0
  UISprite_o *v69; // x0
  System_String_o **v70; // x8
  struct UISprite_o *v71; // x0
  UISprite_o *v72; // x0
  __int64 *v73; // x8
  struct UICommonButton_o *v74; // x0
  UICommonButton_o *v75; // x21
  bool v76; // w0
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  struct UICommonButton_o *v79; // x0
  UnityEngine_Behaviour_o *v80; // x0
  UISprite_o *v81; // x0
  struct UISprite_o *v82; // x0
  UISprite_o *v83; // x0
  struct UICommonButton_o *v84; // x0
  UnityEngine_GameObject_o *profileTabBase; // x0
  UnityEngine_GameObject_o *battleTabBase; // x0
  UnityEngine_GameObject_o *voiceTabBase; // x0
  UnityEngine_GameObject_o *statusTitleSprite; // x0
  UnityEngine_Object_o *v89; // x21
  BattleFBXComponent_o *v90; // x0
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  struct UICommonButton_o *v95; // x0
  UnityEngine_Behaviour_o *v96; // x0
  UISprite_o *v97; // x0
  __int64 *v98; // x8
  UnityEngine_Component_o *profileButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *v101; // x0
  UnityEngine_Behaviour_o *v102; // x0
  UISprite_o *profileTitleSprite; // x0
  System_String_o **v104; // x8
  struct UISprite_o *v105; // x0
  UISprite_o *profileSprite; // x0
  System_String_o **v107; // x8
  struct UICommonButton_o *v108; // x0
  UICommonButton_o *v109; // x21
  bool enabled; // w0
  UnityEngine_Component_o *battleButton; // x0
  UnityEngine_GameObject_o *v112; // x0
  struct UICommonButton_o *v113; // x0
  UnityEngine_Behaviour_o *v114; // x0
  UISprite_o *battleTitleSprite; // x0
  struct UISprite_o *v116; // x0
  UISprite_o *battleSprite; // x0
  struct UICommonButton_o *v118; // x0
  UnityEngine_Component_o *voiceButton; // x0
  UnityEngine_GameObject_o *v120; // x0
  struct UICommonButton_o *v121; // x0
  UnityEngine_Behaviour_o *v122; // x0
  UISprite_o *voiceTitleSprite; // x0
  System_String_o **v124; // x8
  struct UISprite_o *v125; // x0
  UISprite_o *voiceSprite; // x0
  System_String_o **v127; // x8
  struct UICommonButton_o *v128; // x0
  UICommonButton_o *v129; // x21
  bool v130; // w0
  UnityEngine_Component_o *profileNewIcon; // x0
  UnityEngine_GameObject_o *v132; // x0
  struct ShiningIconComponent_o *v133; // x0
  UnityEngine_Behaviour_o *v134; // x0
  UISprite_o *statusSprite; // x0
  struct UISprite_o *v136; // x0
  struct UICommonButton_o *statusButton; // x0
  struct ShiningIconComponent_o *v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  const MethodInfo *v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  ServantStatusListViewItem_o *v144; // x0
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  struct UICommonButton_o *v147; // x0
  UnityEngine_Behaviour_o *v148; // x0
  UISprite_o *v149; // x0
  System_String_o **v150; // x8
  struct UISprite_o *v151; // x0
  UISprite_o *v152; // x0
  System_String_o **v153; // x8
  struct UICommonButton_o *v154; // x0
  UICommonButton_o *v155; // x21
  bool v156; // w0
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  struct UICommonButton_o *v159; // x0
  UnityEngine_Behaviour_o *v160; // x0
  UISprite_o *v161; // x0
  System_String_o **v162; // x8
  struct UISprite_o *v163; // x0
  UISprite_o *v164; // x0
  System_String_o **v165; // x8
  struct UICommonButton_o *v166; // x0
  UICommonButton_o *v167; // x21
  bool v168; // w0
  UnityEngine_Component_o *v169; // x0
  UnityEngine_GameObject_o *v170; // x0
  struct UICommonButton_o *v171; // x0
  UnityEngine_Behaviour_o *v172; // x0
  UISprite_o *v173; // x0
  System_String_o **v174; // x8
  struct UISprite_o *v175; // x0
  UISprite_o *v176; // x0
  __int64 *v177; // x8
  struct UICommonButton_o *v178; // x0
  UICommonButton_o *v179; // x21
  bool v180; // w0
  UnityEngine_Component_o *v181; // x0
  _BOOL4 v182; // w21
  UnityEngine_GameObject_o *v183; // x0
  struct ShiningIconComponent_o *v184; // x0
  UnityEngine_Behaviour_o *v185; // x0
  UISprite_o *v186; // x0
  System_String_o **v187; // x8
  struct UISprite_o *v188; // x0
  struct UICommonButton_o *v189; // x0
  System_String_o **v190; // x8
  struct ShiningIconComponent_o *v191; // x0
  UICommonButton_o *v192; // x21
  bool v193; // w0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  UnityEngine_Component_o *v196; // x0
  UnityEngine_GameObject_o *v197; // x0
  struct UICommonButton_o *v198; // x0
  UnityEngine_Behaviour_o *v199; // x0
  struct UISprite_o *v200; // x0
  UISprite_o *v201; // x0
  struct UICommonButton_o *v202; // x0
  UnityEngine_Component_o *v203; // x0
  UnityEngine_GameObject_o *v204; // x0
  UnityEngine_Component_o *v205; // x0
  UnityEngine_GameObject_o *v206; // x0
  struct System_Int32_array *profileNewIdList; // x8
  char *v208; // x8
  _BYTE *v209; // x8
  int v210; // t1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0
  struct ServantStatusFlavorTextListViewManager_o *v212; // x0
  struct ServantStatusFlavorTextListViewManager_o *v213; // x0
  struct ServantStatusFlavorTextListViewManager_o *v214; // x20
  __int64 v215; // x1
  __int64 v216; // x2
  __int64 v217; // x3
  __int64 v218; // x4
  ServantStatusListViewManager_CallbackFunc_o *v219; // x21
  struct ServantStatusFlavorTextListViewManager_o *v220; // x20
  ServantStatusListViewManager_CallbackFunc_o *v221; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v223; // x21
  ServantStatusBattleListViewManager_o *voiceTabListViewManager; // x0
  struct ServantStatusVoiceListViewManager_o *v225; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v226; // x21
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  const MethodInfo *v235; // x1
  const MethodInfo *v236; // x2
  RandomLimitCountManager_c *v237; // x0
  __int64 v238; // x8
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  float BgmVolume; // s8
  BgmManager_c *v241; // x0
  BgmManager_c *v242; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v244; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v245; // x21
  UISprite_o *v246; // x0
  struct UISprite_o *v247; // x0
  struct UICommonButton_o *v248; // x0
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F87A9 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v11);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectBattle__, v12);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectFlavor__, v13);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectVoice__, v15);
    sub_B16FFC(&StringLiteral_16983, v16);
    sub_B16FFC(&StringLiteral_16967, v17);
    sub_B16FFC(&StringLiteral_17030, v18);
    sub_B16FFC(&StringLiteral_16896, v19);
    sub_B16FFC(&StringLiteral_17029, v20);
    sub_B16FFC(&StringLiteral_17040, v21);
    sub_B16FFC(&StringLiteral_17011, v22);
    sub_B16FFC(&StringLiteral_17039, v23);
    sub_B16FFC(&StringLiteral_16898, v24);
    sub_B16FFC(&StringLiteral_16984, v25);
    sub_B16FFC(&StringLiteral_17010, v26);
    sub_B16FFC(&StringLiteral_16966, v27);
    byte_40F87A9 = 1;
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
        battleTabBase = this->fields.battleTabBase;
        if ( battleTabBase )
        {
          UnityEngine_GameObject__SetActive(battleTabBase, 0, 0LL);
          voiceTabBase = this->fields.voiceTabBase;
          if ( voiceTabBase )
          {
            UnityEngine_GameObject__SetActive(voiceTabBase, 1, 0LL);
            statusTitleSprite = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
            if ( statusTitleSprite )
            {
              UnityEngine_GameObject__SetActive(statusTitleSprite, 0, 0LL);
              v89 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
                goto LABEL_27;
              v90 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
              if ( v90 )
              {
                BattleFBXComponent__playAnimation(v90, *(System_String_o **)&this->fields.confirmDispLv, 0LL);
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
      v36 = this->fields.profileTabBase;
      if ( !v36 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v36, 0, 0LL);
      v34 = this->fields.battleTabBase;
      if ( !v34 )
        goto LABEL_288;
      v35 = 1;
    }
    else
    {
      if ( kind )
      {
LABEL_27:
        v32 = 0;
        goto LABEL_28;
      }
      v33 = this->fields.profileTabBase;
      if ( !v33 || (UnityEngine_GameObject__SetActive(v33, 1, 0LL), (v34 = this->fields.battleTabBase) == 0LL) )
LABEL_288:
        sub_B170D4();
      v35 = 0;
    }
    UnityEngine_GameObject__SetActive(v34, v35, 0LL);
    v37 = this->fields.voiceTabBase;
    if ( v37 )
    {
      UnityEngine_GameObject__SetActive(v37, 0, 0LL);
      v38 = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
      if ( v38 )
      {
        UnityEngine_GameObject__SetActive(v38, 0, 0LL);
        goto LABEL_27;
      }
    }
    goto LABEL_288;
  }
  if ( kind != 3 )
    goto LABEL_13;
  if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
    return;
  v28 = this->fields.profileTabBase;
  LODWORD(this->fields.tabInitList) = 3;
  if ( !v28 )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  v29 = this->fields.battleTabBase;
  if ( !v29 )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(v29, 0, 0LL);
  v30 = this->fields.voiceTabBase;
  if ( !v30 )
    goto LABEL_288;
  UnityEngine_GameObject__SetActive(v30, 0, 0LL);
  v31 = (UnityEngine_GameObject_o *)this->fields.statusTitleSprite;
  if ( !v31 )
    goto LABEL_288;
  v32 = 1;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
LABEL_28:
  switch ( *(_DWORD *)&this->fields.isInitTab )
  {
    case 4:
    case 5:
    case 7:
      profileButton = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( profileButton )
      {
        gameObject = UnityEngine_Component__get_gameObject(profileButton, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          v101 = this->fields.profileButton;
          if ( v101 )
          {
            ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v101->klass->vtable._5_set_isEnabled.method)(
              v101,
              1LL,
              v101->klass->vtable._6_OnInit.methodPtr);
            v102 = (UnityEngine_Behaviour_o *)this->fields.profileButton;
            if ( v102 )
            {
              UnityEngine_Behaviour__set_enabled(v102, kind != 0, 0LL);
              profileTitleSprite = this->fields.profileTitleSprite;
              if ( profileTitleSprite )
              {
                v104 = (System_String_o **)&StringLiteral_17029;
                if ( !kind )
                  v104 = (System_String_o **)&StringLiteral_17030;
                UISprite__set_spriteName(profileTitleSprite, *v104, 0LL);
                v105 = this->fields.profileTitleSprite;
                if ( v105 )
                {
                  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v105->klass->vtable._33_MakePixelPerfect.method)(
                    v105,
                    v105->klass->vtable._34_get_minWidth.methodPtr);
                  profileSprite = this->fields.profileSprite;
                  if ( profileSprite )
                  {
                    v107 = (System_String_o **)(kind ? &StringLiteral_16896 : &StringLiteral_16898);
                    UISprite__set_spriteName(profileSprite, *v107, 0LL);
                    v108 = this->fields.profileButton;
                    if ( v108 )
                    {
                      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v108->klass->vtable._14_SetState.method)(
                        v108,
                        0LL,
                        BYTE4(this->fields.tabInitList),
                        v108->klass->vtable._15_OnPress.methodPtr);
                      v109 = this->fields.profileButton;
                      if ( v109 )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.profileButton,
                                    0LL);
                        UICommonButton__SetColliderEnable(v109, enabled, BYTE4(this->fields.tabInitList), 0LL);
                        battleButton = (UnityEngine_Component_o *)this->fields.battleButton;
                        if ( battleButton )
                        {
                          v112 = UnityEngine_Component__get_gameObject(battleButton, 0LL);
                          if ( v112 )
                          {
                            UnityEngine_GameObject__SetActive(v112, 1, 0LL);
                            v113 = this->fields.battleButton;
                            if ( v113 )
                            {
                              ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v113->klass->vtable._5_set_isEnabled.method)(
                                v113,
                                1LL,
                                v113->klass->vtable._6_OnInit.methodPtr);
                              v114 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
                              if ( v114 )
                              {
                                UnityEngine_Behaviour__set_enabled(v114, 0, 0LL);
                                battleTitleSprite = this->fields.battleTitleSprite;
                                if ( battleTitleSprite )
                                {
                                  UISprite__set_spriteName(
                                    battleTitleSprite,
                                    (System_String_o *)StringLiteral_17010,
                                    0LL);
                                  v116 = this->fields.battleTitleSprite;
                                  if ( v116 )
                                  {
                                    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v116->klass->vtable._33_MakePixelPerfect.method)(
                                      v116,
                                      v116->klass->vtable._34_get_minWidth.methodPtr);
                                    battleSprite = this->fields.battleSprite;
                                    if ( battleSprite )
                                    {
                                      UISprite__set_spriteName(
                                        battleSprite,
                                        (System_String_o *)StringLiteral_16896,
                                        0LL);
                                      v118 = this->fields.battleButton;
                                      if ( v118 )
                                      {
                                        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v118->klass->vtable._14_SetState.method)(
                                          v118,
                                          3LL,
                                          1LL,
                                          v118->klass->vtable._15_OnPress.methodPtr);
                                        voiceButton = (UnityEngine_Component_o *)this->fields.voiceButton;
                                        if ( voiceButton )
                                        {
                                          v120 = UnityEngine_Component__get_gameObject(voiceButton, 0LL);
                                          if ( v120 )
                                          {
                                            UnityEngine_GameObject__SetActive(v120, 1, 0LL);
                                            v121 = this->fields.voiceButton;
                                            if ( v121 )
                                            {
                                              ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v121->klass->vtable._5_set_isEnabled.method)(
                                                v121,
                                                1LL,
                                                v121->klass->vtable._6_OnInit.methodPtr);
                                              v122 = (UnityEngine_Behaviour_o *)this->fields.voiceButton;
                                              if ( v122 )
                                              {
                                                UnityEngine_Behaviour__set_enabled(v122, kind != 2, 0LL);
                                                voiceTitleSprite = this->fields.voiceTitleSprite;
                                                if ( voiceTitleSprite )
                                                {
                                                  v124 = (System_String_o **)&StringLiteral_16967;
                                                  if ( kind != 2 )
                                                    v124 = (System_String_o **)&StringLiteral_16966;
                                                  UISprite__set_spriteName(voiceTitleSprite, *v124, 0LL);
                                                  v125 = this->fields.voiceTitleSprite;
                                                  if ( v125 )
                                                  {
                                                    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v125->klass->vtable._33_MakePixelPerfect.method)(
                                                      v125,
                                                      v125->klass->vtable._34_get_minWidth.methodPtr);
                                                    voiceSprite = this->fields.voiceSprite;
                                                    if ( voiceSprite )
                                                    {
                                                      v127 = (System_String_o **)(kind == 2
                                                                                ? &StringLiteral_16898
                                                                                : &StringLiteral_16896);
                                                      UISprite__set_spriteName(voiceSprite, *v127, 0LL);
                                                      v128 = this->fields.voiceButton;
                                                      if ( v128 )
                                                      {
                                                        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v128->klass->vtable._14_SetState.method)(
                                                          v128,
                                                          0LL,
                                                          BYTE4(this->fields.tabInitList),
                                                          v128->klass->vtable._15_OnPress.methodPtr);
                                                        v129 = this->fields.voiceButton;
                                                        if ( v129 )
                                                        {
                                                          v130 = UnityEngine_Behaviour__get_enabled(
                                                                   (UnityEngine_Behaviour_o *)this->fields.voiceButton,
                                                                   0LL);
                                                          UICommonButton__SetColliderEnable(
                                                            v129,
                                                            v130,
                                                            BYTE4(this->fields.tabInitList),
                                                            0LL);
                                                          profileNewIcon = (UnityEngine_Component_o *)this->fields.profileNewIcon;
                                                          if ( profileNewIcon )
                                                          {
                                                            v132 = UnityEngine_Component__get_gameObject(
                                                                     profileNewIcon,
                                                                     0LL);
                                                            if ( v132 )
                                                            {
                                                              UnityEngine_GameObject__SetActive(v132, 1, 0LL);
                                                              v133 = this->fields.profileNewIcon;
                                                              if ( v133 )
                                                              {
                                                                ((void (__fastcall *)(struct ShiningIconComponent_o *, __int64, void *))v133->klass[1]._1.namespaze)(
                                                                  v133,
                                                                  1LL,
                                                                  v133->klass[1]._1.byval_arg.data);
                                                                v134 = (UnityEngine_Behaviour_o *)this->fields.profileNewIcon;
                                                                if ( v134 )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(v134, 0, 0LL);
                                                                  statusSprite = this->fields.statusSprite;
                                                                  if ( statusSprite )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      statusSprite,
                                                                      (System_String_o *)StringLiteral_17039,
                                                                      0LL);
                                                                    v136 = this->fields.statusSprite;
                                                                    if ( v136 )
                                                                    {
                                                                      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v136->klass->vtable._33_MakePixelPerfect.method)(
                                                                        v136,
                                                                        v136->klass->vtable._34_get_minWidth.methodPtr);
                                                                      statusButton = this->fields.statusButton;
                                                                      if ( statusButton )
                                                                      {
                                                                        UISprite__set_spriteName(
                                                                          (UISprite_o *)statusButton,
                                                                          (System_String_o *)StringLiteral_16896,
                                                                          0LL);
                                                                        v138 = this->fields.profileNewIcon;
                                                                        if ( v138 )
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
      v91 = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( !v91 )
        goto LABEL_288;
      v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
      if ( !v92 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v92, 0, 0LL);
      v93 = (UnityEngine_Component_o *)this->fields.battleButton;
      if ( !v93 )
        goto LABEL_288;
      v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
      if ( !v94 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v94, 1, 0LL);
      v95 = this->fields.battleButton;
      if ( !v95 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v95->klass->vtable._5_set_isEnabled.method)(
        v95,
        1LL,
        v95->klass->vtable._6_OnInit.methodPtr);
      v96 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
      if ( !v96 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v96, 0, 0LL);
      v97 = this->fields.battleTitleSprite;
      if ( !v97 )
        goto LABEL_288;
      v98 = &StringLiteral_16984;
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
      v39 = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( !v39 )
        goto LABEL_288;
      v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !v40 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v40, 1, 0LL);
      v41 = this->fields.profileButton;
      if ( !v41 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v41->klass->vtable._5_set_isEnabled.method)(
        v41,
        1LL,
        v41->klass->vtable._6_OnInit.methodPtr);
      v42 = (UnityEngine_Behaviour_o *)this->fields.profileButton;
      if ( !v42 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v42, kind != 0, 0LL);
      v43 = this->fields.profileTitleSprite;
      if ( !v43 )
        goto LABEL_288;
      v44 = (System_String_o **)&StringLiteral_17029;
      if ( !kind )
        v44 = (System_String_o **)&StringLiteral_17030;
      UISprite__set_spriteName(v43, *v44, 0LL);
      v45 = this->fields.profileTitleSprite;
      if ( !v45 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v45->klass->vtable._33_MakePixelPerfect.method)(
        v45,
        v45->klass->vtable._34_get_minWidth.methodPtr);
      v46 = this->fields.profileSprite;
      if ( !v46 )
        goto LABEL_288;
      v47 = (System_String_o **)(kind ? &StringLiteral_16896 : &StringLiteral_16898);
      UISprite__set_spriteName(v46, *v47, 0LL);
      v48 = this->fields.profileButton;
      if ( !v48 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v48->klass->vtable._14_SetState.method)(
        v48,
        0LL,
        BYTE4(this->fields.tabInitList),
        v48->klass->vtable._15_OnPress.methodPtr);
      v49 = this->fields.profileButton;
      if ( !v49 )
        goto LABEL_288;
      v50 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v49, v50, BYTE4(this->fields.tabInitList), 0LL);
      v51 = (UnityEngine_Component_o *)this->fields.battleButton;
      if ( !v51 )
        goto LABEL_288;
      v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !v52 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v52, 1, 0LL);
      v53 = this->fields.battleButton;
      if ( !v53 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v53->klass->vtable._5_set_isEnabled.method)(
        v53,
        1LL,
        v53->klass->vtable._6_OnInit.methodPtr);
      v54 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
      if ( !v54 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v54, kind != 1, 0LL);
      v55 = this->fields.battleTitleSprite;
      if ( !v55 )
        goto LABEL_288;
      v56 = &StringLiteral_16984;
      if ( kind != 1 )
        v56 = &StringLiteral_16983;
      UISprite__set_spriteName(v55, (System_String_o *)*v56, 0LL);
      v57 = this->fields.battleTitleSprite;
      if ( !v57 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v57->klass->vtable._33_MakePixelPerfect.method)(
        v57,
        v57->klass->vtable._34_get_minWidth.methodPtr);
      v58 = this->fields.battleSprite;
      if ( !v58 )
        goto LABEL_288;
      v59 = (System_String_o **)(kind == 1 ? &StringLiteral_16898 : &StringLiteral_16896);
      UISprite__set_spriteName(v58, *v59, 0LL);
      v60 = this->fields.battleButton;
      if ( !v60 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v60->klass->vtable._14_SetState.method)(
        v60,
        0LL,
        BYTE4(this->fields.tabInitList),
        v60->klass->vtable._15_OnPress.methodPtr);
      v61 = this->fields.battleButton;
      if ( !v61 )
        goto LABEL_288;
      v62 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v63 = BYTE4(this->fields.tabInitList);
      v64 = v62;
      goto LABEL_215;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      v65 = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( !v65 )
        goto LABEL_288;
      v66 = UnityEngine_Component__get_gameObject(v65, 0LL);
      if ( !v66 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v66, 1, 0LL);
      v67 = this->fields.profileButton;
      if ( !v67 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v67->klass->vtable._5_set_isEnabled.method)(
        v67,
        1LL,
        v67->klass->vtable._6_OnInit.methodPtr);
      v68 = (UnityEngine_Behaviour_o *)this->fields.profileButton;
      if ( !v68 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v68, kind != 0, 0LL);
      v69 = this->fields.profileTitleSprite;
      if ( !v69 )
        goto LABEL_288;
      v70 = (System_String_o **)&StringLiteral_17029;
      if ( !kind )
        v70 = (System_String_o **)&StringLiteral_17030;
      UISprite__set_spriteName(v69, *v70, 0LL);
      v71 = this->fields.profileTitleSprite;
      if ( !v71 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v71->klass->vtable._33_MakePixelPerfect.method)(
        v71,
        v71->klass->vtable._34_get_minWidth.methodPtr);
      v72 = this->fields.profileSprite;
      if ( !v72 )
        goto LABEL_288;
      v73 = &StringLiteral_16898;
      if ( kind )
        v73 = &StringLiteral_16896;
      UISprite__set_spriteName(v72, (System_String_o *)*v73, 0LL);
      v74 = this->fields.profileButton;
      if ( !v74 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v74->klass->vtable._14_SetState.method)(
        v74,
        0LL,
        BYTE4(this->fields.tabInitList),
        v74->klass->vtable._15_OnPress.methodPtr);
      v75 = this->fields.profileButton;
      if ( !v75 )
        goto LABEL_288;
      v76 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v75, v76, BYTE4(this->fields.tabInitList), 0LL);
      v77 = (UnityEngine_Component_o *)this->fields.battleButton;
      if ( !v77 )
        goto LABEL_288;
      v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
      if ( !v78 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v78, 1, 0LL);
      v79 = this->fields.battleButton;
      if ( !v79 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v79->klass->vtable._5_set_isEnabled.method)(
        v79,
        1LL,
        v79->klass->vtable._6_OnInit.methodPtr);
      v80 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
      if ( !v80 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v80, 0, 0LL);
      v81 = this->fields.battleTitleSprite;
      if ( !v81 )
        goto LABEL_288;
      UISprite__set_spriteName(v81, (System_String_o *)StringLiteral_16983, 0LL);
      v82 = this->fields.battleTitleSprite;
      if ( !v82 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v82->klass->vtable._33_MakePixelPerfect.method)(
        v82,
        v82->klass->vtable._34_get_minWidth.methodPtr);
      v83 = this->fields.battleSprite;
      if ( !v83 )
        goto LABEL_288;
      UISprite__set_spriteName(v83, (System_String_o *)StringLiteral_16896, 0LL);
      v84 = this->fields.battleButton;
      if ( !v84 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v84->klass->vtable._14_SetState.method)(
        v84,
        3LL,
        1LL,
        v84->klass->vtable._15_OnPress.methodPtr);
      goto LABEL_216;
    case 0x1C:
      v194 = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( !v194 )
        goto LABEL_288;
      v195 = UnityEngine_Component__get_gameObject(v194, 0LL);
      if ( !v195 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v195, 0, 0LL);
      v196 = (UnityEngine_Component_o *)this->fields.battleButton;
      if ( !v196 )
        goto LABEL_288;
      v197 = UnityEngine_Component__get_gameObject(v196, 0LL);
      if ( !v197 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v197, 1, 0LL);
      v198 = this->fields.battleButton;
      if ( !v198 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v198->klass->vtable._5_set_isEnabled.method)(
        v198,
        1LL,
        v198->klass->vtable._6_OnInit.methodPtr);
      v199 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
      if ( !v199 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v199, 0, 0LL);
      v97 = this->fields.battleTitleSprite;
      if ( !v97 )
        goto LABEL_288;
      v98 = &StringLiteral_17010;
LABEL_210:
      UISprite__set_spriteName(v97, (System_String_o *)*v98, 0LL);
      v200 = this->fields.battleTitleSprite;
      if ( !v200 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v200->klass->vtable._33_MakePixelPerfect.method)(
        v200,
        v200->klass->vtable._34_get_minWidth.methodPtr);
      v201 = this->fields.battleSprite;
      if ( !v201 )
        goto LABEL_288;
      UISprite__set_spriteName(v201, (System_String_o *)StringLiteral_16898, 0LL);
      v202 = this->fields.battleButton;
      if ( !v202 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v202->klass->vtable._14_SetState.method)(
        v202,
        0LL,
        1LL,
        v202->klass->vtable._15_OnPress.methodPtr);
      v61 = this->fields.battleButton;
      if ( !v61 )
        goto LABEL_288;
      v64 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      v63 = 1;
LABEL_215:
      UICommonButton__SetColliderEnable(v61, v64, v63, 0LL);
LABEL_216:
      v203 = (UnityEngine_Component_o *)this->fields.voiceButton;
      if ( !v203 )
        goto LABEL_288;
      v204 = UnityEngine_Component__get_gameObject(v203, 0LL);
      if ( !v204 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v204, 0, 0LL);
      v205 = (UnityEngine_Component_o *)this->fields.profileNewIcon;
      if ( !v205 )
        goto LABEL_288;
      v206 = UnityEngine_Component__get_gameObject(v205, 0LL);
      if ( !v206 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v206, 0, 0LL);
      goto LABEL_221;
    default:
      v144 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !v144 )
        goto LABEL_288;
      ServantStatusListViewItem__GetVoiceInfo(v144, &illust, &voice, &isPlayVoice, 0LL);
      v145 = (UnityEngine_Component_o *)this->fields.profileButton;
      if ( !v145 )
        goto LABEL_288;
      v146 = UnityEngine_Component__get_gameObject(v145, 0LL);
      if ( !v146 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v146, 1, 0LL);
      v147 = this->fields.profileButton;
      if ( !v147 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v147->klass->vtable._5_set_isEnabled.method)(
        v147,
        1LL,
        v147->klass->vtable._6_OnInit.methodPtr);
      v148 = (UnityEngine_Behaviour_o *)this->fields.profileButton;
      if ( !v148 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v148, kind != 0, 0LL);
      v149 = this->fields.profileTitleSprite;
      if ( !v149 )
        goto LABEL_288;
      v150 = (System_String_o **)&StringLiteral_17029;
      if ( !kind )
        v150 = (System_String_o **)&StringLiteral_17030;
      UISprite__set_spriteName(v149, *v150, 0LL);
      v151 = this->fields.profileTitleSprite;
      if ( !v151 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v151->klass->vtable._33_MakePixelPerfect.method)(
        v151,
        v151->klass->vtable._34_get_minWidth.methodPtr);
      v152 = this->fields.profileSprite;
      if ( !v152 )
        goto LABEL_288;
      v153 = (System_String_o **)(kind ? &StringLiteral_16896 : &StringLiteral_16898);
      UISprite__set_spriteName(v152, *v153, 0LL);
      v154 = this->fields.profileButton;
      if ( !v154 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v154->klass->vtable._14_SetState.method)(
        v154,
        0LL,
        BYTE4(this->fields.tabInitList),
        v154->klass->vtable._15_OnPress.methodPtr);
      v155 = this->fields.profileButton;
      if ( !v155 )
        goto LABEL_288;
      v156 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0LL);
      UICommonButton__SetColliderEnable(v155, v156, BYTE4(this->fields.tabInitList), 0LL);
      v157 = (UnityEngine_Component_o *)this->fields.battleButton;
      if ( !v157 )
        goto LABEL_288;
      v158 = UnityEngine_Component__get_gameObject(v157, 0LL);
      if ( !v158 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v158, 1, 0LL);
      v159 = this->fields.battleButton;
      if ( !v159 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v159->klass->vtable._5_set_isEnabled.method)(
        v159,
        1LL,
        v159->klass->vtable._6_OnInit.methodPtr);
      v160 = (UnityEngine_Behaviour_o *)this->fields.battleButton;
      if ( !v160 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v160, kind != 1, 0LL);
      v161 = this->fields.battleTitleSprite;
      if ( !v161 )
        goto LABEL_288;
      v162 = (System_String_o **)&StringLiteral_17011;
      if ( kind != 1 )
        v162 = (System_String_o **)&StringLiteral_17010;
      UISprite__set_spriteName(v161, *v162, 0LL);
      v163 = this->fields.battleTitleSprite;
      if ( !v163 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v163->klass->vtable._33_MakePixelPerfect.method)(
        v163,
        v163->klass->vtable._34_get_minWidth.methodPtr);
      v164 = this->fields.battleSprite;
      if ( !v164 )
        goto LABEL_288;
      v165 = (System_String_o **)(kind == 1 ? &StringLiteral_16898 : &StringLiteral_16896);
      UISprite__set_spriteName(v164, *v165, 0LL);
      v166 = this->fields.battleButton;
      if ( !v166 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v166->klass->vtable._14_SetState.method)(
        v166,
        0LL,
        BYTE4(this->fields.tabInitList),
        v166->klass->vtable._15_OnPress.methodPtr);
      v167 = this->fields.battleButton;
      if ( !v167 )
        goto LABEL_288;
      v168 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0LL);
      UICommonButton__SetColliderEnable(v167, v168, BYTE4(this->fields.tabInitList), 0LL);
      v169 = (UnityEngine_Component_o *)this->fields.voiceButton;
      if ( !v169 )
        goto LABEL_288;
      v170 = UnityEngine_Component__get_gameObject(v169, 0LL);
      if ( !v170 )
        goto LABEL_288;
      UnityEngine_GameObject__SetActive(v170, 1, 0LL);
      v171 = this->fields.voiceButton;
      if ( !v171 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v171->klass->vtable._5_set_isEnabled.method)(
        v171,
        1LL,
        v171->klass->vtable._6_OnInit.methodPtr);
      v172 = (UnityEngine_Behaviour_o *)this->fields.voiceButton;
      if ( !v172 )
        goto LABEL_288;
      UnityEngine_Behaviour__set_enabled(v172, kind != 2, 0LL);
      v173 = this->fields.voiceTitleSprite;
      if ( !v173 )
        goto LABEL_288;
      v174 = (System_String_o **)&StringLiteral_16967;
      if ( kind != 2 )
        v174 = (System_String_o **)&StringLiteral_16966;
      UISprite__set_spriteName(v173, *v174, 0LL);
      v175 = this->fields.voiceTitleSprite;
      if ( !v175 )
        goto LABEL_288;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v175->klass->vtable._33_MakePixelPerfect.method)(
        v175,
        v175->klass->vtable._34_get_minWidth.methodPtr);
      v176 = this->fields.voiceSprite;
      if ( !v176 )
        goto LABEL_288;
      if ( kind == 2 )
        v177 = &StringLiteral_16898;
      else
        v177 = &StringLiteral_16896;
      UISprite__set_spriteName(v176, (System_String_o *)*v177, 0LL);
      v178 = this->fields.voiceButton;
      if ( !v178 )
        goto LABEL_287;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v178->klass->vtable._14_SetState.method)(
        v178,
        0LL,
        BYTE4(this->fields.tabInitList),
        v178->klass->vtable._15_OnPress.methodPtr);
      v179 = this->fields.voiceButton;
      if ( !v179 )
        goto LABEL_287;
      v180 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0LL);
      UICommonButton__SetColliderEnable(v179, v180, BYTE4(this->fields.tabInitList), 0LL);
      v181 = (UnityEngine_Component_o *)this->fields.profileNewIcon;
      if ( !v181 )
        goto LABEL_287;
      v182 = isPlayVoice;
      v183 = UnityEngine_Component__get_gameObject(v181, 0LL);
      if ( !v183 )
        goto LABEL_287;
      UnityEngine_GameObject__SetActive(v183, 1, 0LL);
      v184 = this->fields.profileNewIcon;
      if ( !v184 )
        goto LABEL_287;
      ((void (__fastcall *)(struct ShiningIconComponent_o *, __int64, void *))v184->klass[1]._1.namespaze)(
        v184,
        1LL,
        v184->klass[1]._1.byval_arg.data);
      v185 = (UnityEngine_Behaviour_o *)this->fields.profileNewIcon;
      if ( !v185 )
        goto LABEL_287;
      if ( !v182 )
      {
        UnityEngine_Behaviour__set_enabled(v185, 0, 0LL);
        v246 = this->fields.statusSprite;
        if ( v246 )
        {
          UISprite__set_spriteName(v246, (System_String_o *)StringLiteral_17039, 0LL);
          v247 = this->fields.statusSprite;
          if ( v247 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v247->klass->vtable._33_MakePixelPerfect.method)(
              v247,
              v247->klass->vtable._34_get_minWidth.methodPtr);
            v248 = this->fields.statusButton;
            if ( v248 )
            {
              UISprite__set_spriteName((UISprite_o *)v248, (System_String_o *)StringLiteral_16896, 0LL);
              v138 = this->fields.profileNewIcon;
              if ( v138 )
              {
LABEL_142:
                v139 = ((__int64 (__fastcall *)(struct ShiningIconComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))v138->klass[1]._1.implementedInterfaces)(
                         v138,
                         3LL,
                         1LL,
                         v138->klass[1]._1.interfaceOffsets);
                goto LABEL_221;
              }
            }
          }
        }
LABEL_287:
        sub_B170D4();
      }
      UnityEngine_Behaviour__set_enabled(v185, (unsigned __int8)v32 != 1, 0LL);
      v186 = this->fields.statusSprite;
      if ( !v186 )
        goto LABEL_287;
      v187 = (System_String_o **)&StringLiteral_17040;
      if ( !v32 )
        v187 = (System_String_o **)&StringLiteral_17039;
      UISprite__set_spriteName(v186, *v187, 0LL);
      v188 = this->fields.statusSprite;
      if ( !v188 )
        goto LABEL_287;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v188->klass->vtable._33_MakePixelPerfect.method)(
        v188,
        v188->klass->vtable._34_get_minWidth.methodPtr);
      v189 = this->fields.statusButton;
      if ( !v189 )
        goto LABEL_287;
      v190 = (System_String_o **)(v32 ? &StringLiteral_16898 : &StringLiteral_16896);
      UISprite__set_spriteName((UISprite_o *)v189, *v190, 0LL);
      v191 = this->fields.profileNewIcon;
      if ( !v191 )
        goto LABEL_287;
      ((void (__fastcall *)(struct ShiningIconComponent_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v191->klass[1]._1.implementedInterfaces)(
        v191,
        0LL,
        BYTE4(this->fields.tabInitList),
        v191->klass[1]._1.interfaceOffsets);
      v192 = (UICommonButton_o *)this->fields.profileNewIcon;
      if ( !v192 )
        goto LABEL_287;
      v193 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileNewIcon, 0LL);
      UICommonButton__SetColliderEnable(v192, v193, BYTE4(this->fields.tabInitList), 0LL);
LABEL_221:
      profileNewIdList = this->fields.profileNewIdList;
      if ( !profileNewIdList )
        goto LABEL_287;
      if ( profileNewIdList->max_length <= kind )
      {
        sub_B17100(v139, v140, v141);
        sub_B170A0();
      }
      v208 = (char *)profileNewIdList + kind;
      v210 = (unsigned __int8)v208[32];
      v209 = v208 + 32;
      if ( v210 )
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
      *v209 = 1;
      switch ( kind )
      {
        case 0:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            0LL);
          if ( BYTE1(this->fields.statusLoadAsset) )
            goto LABEL_232;
          v212 = this->fields.profileTabListViewManager;
          if ( !v212 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)v212, 6, 0LL);
          v213 = this->fields.profileTabListViewManager;
          if ( !v213 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_32653296((ServantStatusListViewManager_o *)v213, 4, 0LL);
          v214 = this->fields.profileTabListViewManager;
          v219 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                  v215,
                                                                  v216,
                                                                  v217,
                                                                  v218);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v219,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v214 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v214, 1, v219, 0LL);
LABEL_232:
          v220 = this->fields.profileTabListViewManager;
          v221 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                                  v140,
                                                                  v141,
                                                                  v142,
                                                                  v143);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v221,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v220 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v220, 1, v221, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v141);
LABEL_235:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v223 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                            ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                            v140,
                                                                            v141,
                                                                            v142,
                                                                            v143);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v223,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            1,
            v223,
            0LL);
          break;
        case 2:
          voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          ServantStatusBattleListViewManager__CreateList(
            voiceTabListViewManager,
            *(ServantStatusListViewItem_o **)&this->fields.isModify,
            v141);
LABEL_239:
          v225 = this->fields.voiceTabListViewManager;
          v226 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                        ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                                        v140,
                                                                        v141,
                                                                        v142,
                                                                        v143);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v226,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !v225 )
            goto LABEL_287;
          v225->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v226;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v225->fields.callbackFunc,
            (System_Int32_array **)v226,
            v227,
            v228,
            v229,
            v230,
            v231,
            v232);
          ServantStatusBattleListViewManager__SetMode_22351556(
            (ServantStatusBattleListViewManager_o *)v225,
            1,
            v233,
            v234);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          if ( !byte_40F8215 )
          {
            sub_B16FFC(&RandomLimitCountManager_TypeInfo, v235);
            byte_40F8215 = 1;
          }
          v237 = RandomLimitCountManager_TypeInfo;
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
            v237 = RandomLimitCountManager_TypeInfo;
          }
          if ( !v237->static_fields->enableRandomLimitCount )
            goto LABEL_252;
          v238 = *(_QWORD *)&this->fields.isModify;
          if ( !v238 )
            goto LABEL_287;
          if ( !*(_BYTE *)(v238 + 192) )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v235);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, *(ServantStatusListViewItem_o **)&this->fields.isModify, v236);
          break;
        case 3:
          servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          if ( !servantNameRangeLabel )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__CreateList(
            servantNameRangeLabel,
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
            v241 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v241 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v241->static_fields->LOW_VOLUME )
            {
              BYTE3(this->fields.statusLoadAsset) = 1;
              if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              }
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v242 = BgmManager_TypeInfo;
                if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v242 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v242->static_fields->LOW_VOLUME;
                if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !OptionManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                }
                OptionManager__TestBgmVolume(LOW_VOLUME, 0LL);
              }
            }
          }
          v244 = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
          v245 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo,
                                                                       v140,
                                                                       v141,
                                                                       v142,
                                                                       v143);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v245,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !v244 )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(v244, 1, v245, 0LL);
          break;
        default:
          break;
      }
LABEL_276:
      if ( !(v32 & 1 | (BYTE3(this->fields.statusLoadAsset) == 0)) )
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v8; // x20
  BattleFBXComponent_o *v9; // x0

  if ( (byte_40F87AE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isVisible);
    sub_B16FFC(&StringLiteral_23096, v5);
    byte_40F87AE = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 2 )
  {
    bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
    if ( !bgTxtSprite )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, isVisible, 0LL);
    if ( isVisible )
    {
      v8 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
      {
        v9 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading;
        if ( v9 )
        {
          BattleFBXComponent__playAnimation(v9, (System_String_o *)StringLiteral_23096, 0LL);
          return;
        }
LABEL_14:
        sub_B170D4();
      }
    }
  }
}


void __fastcall ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool RandomLimitCountOwn; // w0
  struct UILabel_o *battleMaskInfoLabel; // x8
  struct UnityEngine_GameObject_o *battleChr; // x19
  __int64 *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  System_String_o *v13; // x0

  if ( (byte_40F878C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11957, v6);
    sub_B16FFC(&StringLiteral_11961, v7);
    byte_40F878C = 1;
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
    RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
    battleMaskInfoLabel = this->fields.battleMaskInfoLabel;
    if ( RandomLimitCountOwn )
    {
      if ( !battleMaskInfoLabel )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this->fields.battleMaskInfoLabel, 1, 0LL);
      battleChr = this->fields.battleChr;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_11957;
      goto LABEL_22;
    }
    if ( !battleMaskInfoLabel )
      goto LABEL_26;
    if ( item->fields.isEnableOwnRandomSetting )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this->fields.battleMaskInfoLabel, 1, 0LL);
      battleChr = this->fields.battleChr;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_11961;
LABEL_22:
      v13 = LocalizationManager__Get((System_String_o *)*v11, 0LL);
      if ( battleChr )
      {
        UILabel__set_text((UILabel_o *)battleChr, v13, 0LL);
        return;
      }
LABEL_26:
      sub_B170D4();
    }
    v12 = (UnityEngine_GameObject_o *)this->fields.battleMaskInfoLabel;
  }
  else
  {
    v12 = (UnityEngine_GameObject_o *)this->fields.battleMaskInfoLabel;
    if ( !v12 )
      goto LABEL_26;
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
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
  ServantStatusListViewItem_o *v10; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v14; // x21
  int32_t SvtId; // w0
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v17; // w20
  int32_t v18; // w21
  System_String_o *ActorFolderNameFromDisp; // x0
  System_String_o **p_isBattlePlay; // x21
  System_Int32_array **v21; // x20
  const MethodInfo *v22; // x1
  bool v23; // w22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x22
  CommonUI_o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  const MethodInfo *v39; // x1
  RandomLimitCountManager_c *v41; // x0
  __int64 v42; // x8

  if ( (byte_40F8794 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40F8794 = 1;
  }
  v10 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v10 )
    goto LABEL_39;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v10, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v14 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( !v14 )
    goto LABEL_39;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v14,
                                 SvtId,
                                 ConvertOverwriteDispImageLimitCount,
                                 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_39;
  v17 = ServantImageLimitSealAfter;
  v18 = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ActorFolderNameFromDisp = ServantAssetLoadManager__getActorFolderNameFromDisp(v18, v17, 0LL);
  if ( !ActorFolderNameFromDisp )
    goto LABEL_39;
  p_isBattlePlay = (System_String_o **)&this->fields.isBattlePlay;
  v21 = (System_Int32_array **)ActorFolderNameFromDisp;
  if ( System_String__Equals_43731072(ActorFolderNameFromDisp, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    if ( LOBYTE(this->fields.defaultAnimationName) )
      return 0;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_40F8215 )
    {
      sub_B16FFC(&RandomLimitCountManager_TypeInfo, v22);
      byte_40F8215 = 1;
    }
    v41 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v41 = RandomLimitCountManager_TypeInfo;
    }
    if ( !v41->static_fields->enableRandomLimitCount )
      return 0;
    v42 = *(_QWORD *)&this->fields.isModify;
    if ( v42 )
    {
      if ( !*(_BYTE *)(v42 + 192) )
        ServantStatusDialog__EndLoadBattle_22411092(this, v22);
      return 0;
    }
LABEL_39:
    sub_B170D4();
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v30 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v30, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v21, v24, v25, v26, v27, v28, v29);
  v31 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v31 )
    goto LABEL_39;
  CommonUI__SetLoadMode(v31, 1, 0LL);
  LOBYTE(this->fields.defaultAnimationName) = 1;
  ServantStatusDialog__SetTabKind(this, 2, v32);
  v33 = *(System_String_o **)&this->fields.isBattlePlay;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v34, v35, v36, v37);
  AssetLoader_LoadEndDataHandler___ctor(v38, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v23 = 1;
  if ( !AssetManager__loadAssetStorage(v33, v38, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v39);
    return 1;
  }
  return v23;
}


void __fastcall ServantStatusDialog__StartStatusLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItem_o *v7; // x0
  int32_t SvtId; // w0
  int32_t v9; // w20
  int32_t LimitCount; // w21
  struct System_String_o *StatusImageFolderName; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ServantStatusListViewItem_o *v18; // x0
  int32_t v19; // w0
  __int64 v20; // x8
  struct System_String_o *CommandCardLoadFolderNameDisp; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0
  System_String_o *cardLoadAsset; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  AssetLoader_LoadEndDataHandler_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  AssetData_o *v41; // x1
  const MethodInfo *v42; // x2

  if ( (byte_40F878F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v4);
    sub_B16FFC(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F878F = 1;
  }
  v7 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v7 )
    goto LABEL_16;
  SvtId = ServantStatusListViewItem__get_SvtId(v7, 0LL);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_16;
  v9 = SvtId;
  LimitCount = ServantStatusListViewItem__get_LimitCount(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v9, LimitCount, 0LL);
  this->fields.cardLoadAsset = StatusImageFolderName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardLoadAsset,
    (System_Int32_array **)StatusImageFolderName,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !v18
    || (v19 = ServantStatusListViewItem__get_SvtId(v18, 0LL), (v20 = *(_QWORD *)&this->fields.isModify) == 0)
    || (CommandCardLoadFolderNameDisp = ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
                                          v19,
                                          *(_DWORD *)(v20 + 256),
                                          0LL),
        this->fields.loadVoiceData = CommandCardLoadFolderNameDisp,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.loadVoiceData,
          (System_Int32_array **)CommandCardLoadFolderNameDisp,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  cardLoadAsset = this->fields.cardLoadAsset;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(v34, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(cardLoadAsset, v34, 1, 0LL) )
  {
    this->fields.cardLoadAsset = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v35, v36, v37, v38, v39, v40);
    ServantStatusDialog__EndStatusLoad(this, v41, v42);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantChangeMaster_o *v23; // x20
  int32_t SvtId; // w0
  struct System_Collections_Generic_List_string__o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantStatusDialog_o *VoiceLimitCountList; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x8
  unsigned __int64 v36; // x22
  int32_t v37; // w20
  WebViewManager_o *v38; // x0
  WarQuestSelectionMaster_o *v39; // x0
  BalanceConfig_c *v40; // x8
  ServantLimitAddMaster_o *v41; // x21
  __int64 v42; // x9
  int32_t v43; // w4
  const MethodInfo *v44; // x5
  __int64 v45; // x8
  ServantStatusDialog_o *v46; // x21
  unsigned __int64 v47; // x26
  struct TitleInfoControl_o **p_titleInfo; // x25
  struct System_Collections_Generic_List_string__o *v49; // x22
  System_String_o *v50; // x0
  int32_t v51; // w4
  const MethodInfo *v52; // x5
  struct System_Collections_Generic_List_string__o *v53; // x22
  System_String_o *v54; // x0
  int32_t v55; // w4
  const MethodInfo *v56; // x5
  struct System_Collections_Generic_List_string__o *v57; // x22
  System_String_o *v58; // x0
  ServantStatusListViewItem_o *v59; // x0
  int32_t v60; // w4
  const MethodInfo *v61; // x5
  BalanceConfig_c *v62; // x8
  int v63; // w22
  struct System_Collections_Generic_List_string__o *v64; // x22
  System_String_o *v65; // x0
  int32_t v66; // w4
  const MethodInfo *v67; // x5
  struct System_Collections_Generic_List_string__o *v68; // x22
  System_String_o *v69; // x0
  int32_t v70; // w4
  const MethodInfo *v71; // x5
  struct System_Collections_Generic_List_string__o *v72; // x22
  int32_t ServantIdMashu3; // w2
  System_String_o *v74; // x0
  ServantStatusListViewItem_o *v75; // x0
  BalanceConfig_c *v76; // x8
  int v77; // w22
  struct System_Collections_Generic_List_string__o *v78; // x22
  System_String_o *v79; // x0
  int32_t v80; // w4
  const MethodInfo *v81; // x5
  struct System_Collections_Generic_List_string__o *v82; // x22
  System_String_o *v83; // x0
  int32_t v84; // w4
  const MethodInfo *v85; // x5
  struct System_Collections_Generic_List_string__o *v86; // x22
  System_String_o *v87; // x0
  int64_t UserId; // x24
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w22
  int32_t MashuTdGradeUpQuestPhase; // w23
  struct System_Collections_Generic_List_string__o *v92; // x22
  System_String_o *v93; // x0
  int32_t v94; // w4
  const MethodInfo *v95; // x5
  struct System_Collections_Generic_List_string__o *v96; // x22
  System_String_o *v97; // x0
  WebViewManager_o *v98; // x0
  ServantVoiceRelationMaster_o *v99; // x0
  ServantVoiceRelationEntity_array *v100; // x23
  signed int max_length; // w8
  unsigned int v102; // w24
  ServantVoiceRelationEntity_o *v103; // x25
  struct System_Collections_Generic_List_string__o *voiceDataList; // x20
  __int64 v105; // x21
  __int64 v106; // x22
  ServantStatusDialog_o *v107; // x0
  int32_t v108; // w4
  const MethodInfo *v109; // x5
  System_String_o *VoiceAssetName; // x0
  struct System_Collections_Generic_List_string__o *v111; // x20
  ServantStatusDialog_o *v112; // x0
  int32_t v113; // w4
  const MethodInfo *v114; // x5
  System_String_o *v115; // x0
  struct System_Collections_Generic_List_string__o *v116; // x20
  ServantStatusDialog_o *v117; // x0
  int32_t v118; // w4
  const MethodInfo *v119; // x5
  System_String_o *v120; // x0
  struct System_Collections_Generic_List_string__o *v121; // x8
  CommonUI_o *v122; // x0
  const MethodInfo *v123; // x2
  __int64 v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  NetworkManager_c *v131; // x0
  struct System_Collections_Generic_List_string__o *v132; // x20
  struct System_Int32_array *v133; // x1
  struct System_Collections_Generic_List_string__o *v134; // x0
  System_String_o *changeSvtVoiceIdList; // x20
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  System_Action_o *v140; // x21
  unsigned __int64 v141; // [xsp+8h] [xbp-68h]
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // [xsp+10h] [xbp-60h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_40F879F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_ServantStatusDialog_EndLoadVoice__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    byte_40F879F = 1;
  }
  relationList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40F7166 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F7166 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_120;
  v23 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  SvtId = ServantStatusListViewItem__get_SvtId(*(ServantStatusListViewItem_o **)&this->fields.isModify, 0LL);
  if ( !v23 )
    goto LABEL_120;
  v25 = (struct System_Collections_Generic_List_string__o *)ServantChangeMaster__GetEnableSvtVoiceList(v23, SvtId, 0LL);
  this->fields.requestVoiceDataList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestVoiceDataList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_120;
  requestVoiceDataList = this->fields.requestVoiceDataList;
  v35 = *(_QWORD *)&requestVoiceDataList->fields._size;
  if ( (int)v35 >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v35 )
        goto LABEL_121;
      v37 = *((_DWORD *)&requestVoiceDataList->fields._syncRoot + v36);
      v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v38 )
        goto LABEL_120;
      v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v38,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v40 = BalanceConfig_TypeInfo;
      v41 = (ServantLimitAddMaster_o *)v39;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      v42 = *(_QWORD *)&this->fields.isModify;
      if ( !v42 )
        goto LABEL_120;
      if ( !v41 )
        goto LABEL_120;
      VoiceLimitCountList = (ServantStatusDialog_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                       v41,
                                                       v37,
                                                       v40->static_fields->ServantLimitMax,
                                                       *(System_Int32_array **)(v42 + 208),
                                                       0LL);
      if ( !VoiceLimitCountList )
        goto LABEL_120;
      v45 = *(_QWORD *)&VoiceLimitCountList->fields.CHARA_BASE_POSITION.fields.y;
      v46 = VoiceLimitCountList;
      v141 = v36;
      if ( (int)v45 >= 1 )
        break;
LABEL_85:
      v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v98 )
        goto LABEL_120;
      v99 = (ServantVoiceRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v98,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !v99 )
        goto LABEL_120;
      ServantVoiceRelationMaster__GetRelationList(v99, &relationList, v37, 0LL);
      v100 = relationList;
      if ( !relationList )
        goto LABEL_120;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v102 = 0;
        while ( v102 < max_length )
        {
          v103 = v100->m_Items[v102];
          if ( !v103 )
            goto LABEL_120;
          voiceDataList = this->fields.voiceDataList;
          v106 = *(_QWORD *)&v103->fields.relationSvtId.fields.currentCryptoKey;
          v105 = *(_QWORD *)&v103->fields.relationSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v144.fields.currentCryptoKey = v106;
          *(_QWORD *)&v144.fields.fakeValue = v105;
          v107 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v144, 0LL);
          VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(v107, 0, (int32_t)v107, 0, v108, v109);
          if ( !voiceDataList )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)VoiceAssetName,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v111 = this->fields.voiceDataList;
          v112 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                            v103->fields.relationSvtId,
                                            0LL);
          v115 = ServantStatusDialog__GetVoiceAssetName(v112, 2, (int32_t)v112, 0, v113, v114);
          if ( !v111 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v111,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v116 = this->fields.voiceDataList;
          v117 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                            v103->fields.relationSvtId,
                                            0LL);
          v120 = ServantStatusDialog__GetVoiceAssetName(v117, 1, (int32_t)v117, 0, v118, v119);
          if ( !v116 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v116,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v120,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          max_length = v100->max_length;
          if ( (int)++v102 >= max_length )
            goto LABEL_99;
        }
LABEL_121:
        sub_B17100(VoiceLimitCountList, v33, v34);
        sub_B170A0();
      }
LABEL_99:
      LODWORD(v35) = requestVoiceDataList->fields._size;
      v36 = v141 + 1;
      if ( (__int64)(v141 + 1) >= (int)v35 )
        goto LABEL_100;
    }
    v47 = 0LL;
    p_titleInfo = &VoiceLimitCountList->fields.titleInfo;
    while ( 1 )
    {
      if ( v47 >= (unsigned int)v45 )
        goto LABEL_121;
      v49 = this->fields.voiceDataList;
      v50 = ServantStatusDialog__GetVoiceAssetName(
              VoiceLimitCountList,
              0,
              v37,
              *((_DWORD *)p_titleInfo + v47),
              v43,
              v44);
      if ( !v49 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
        goto LABEL_121;
      v53 = this->fields.voiceDataList;
      v54 = ServantStatusDialog__GetVoiceAssetName(
              VoiceLimitCountList,
              2,
              v37,
              *((_DWORD *)p_titleInfo + v47),
              v51,
              v52);
      if ( !v53 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
        goto LABEL_121;
      v57 = this->fields.voiceDataList;
      v58 = ServantStatusDialog__GetVoiceAssetName(
              VoiceLimitCountList,
              1,
              v37,
              *((_DWORD *)p_titleInfo + v47),
              v55,
              v56);
      if ( !v57 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v59 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !v59 )
        goto LABEL_120;
      VoiceLimitCountList = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v59, 0LL);
      v62 = BalanceConfig_TypeInfo;
      v63 = (int)VoiceLimitCountList;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 == v62->static_fields->ServantIdJekyll )
        break;
      v75 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
      if ( !v75 )
        goto LABEL_120;
      VoiceLimitCountList = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(v75, 0LL);
      v76 = BalanceConfig_TypeInfo;
      v77 = (int)VoiceLimitCountList;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v76 = BalanceConfig_TypeInfo;
      }
      if ( v77 == v76->static_fields->ServantIdMashu1 )
      {
        v78 = this->fields.voiceDataList;
        if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v76);
        if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
          goto LABEL_121;
        v79 = ServantStatusDialog__GetVoiceAssetName(
                VoiceLimitCountList,
                0,
                BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                *((_DWORD *)p_titleInfo + v47),
                v43,
                v44);
        if ( !v78 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v78,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
          goto LABEL_121;
        v82 = this->fields.voiceDataList;
        v83 = ServantStatusDialog__GetVoiceAssetName(
                VoiceLimitCountList,
                2,
                BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                *((_DWORD *)p_titleInfo + v47),
                v80,
                v81);
        if ( !v82 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
          goto LABEL_121;
        v86 = this->fields.voiceDataList;
        v87 = ServantStatusDialog__GetVoiceAssetName(
                VoiceLimitCountList,
                1,
                BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                *((_DWORD *)p_titleInfo + v47),
                v84,
                v85);
        if ( !v86 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
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
        VoiceLimitCountList = (ServantStatusDialog_o *)CondType__IsQuestPhaseClear(
                                                         UserId,
                                                         MashuTdGradeUpQuestId,
                                                         MashuTdGradeUpQuestPhase,
                                                         -1,
                                                         0,
                                                         0LL);
        if ( ((unsigned __int8)VoiceLimitCountList & 1) != 0 )
        {
          VoiceLimitCountList = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
          v92 = this->fields.voiceDataList;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
            goto LABEL_121;
          v93 = ServantStatusDialog__GetVoiceAssetName(
                  VoiceLimitCountList,
                  0,
                  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                  *((_DWORD *)p_titleInfo + v47),
                  v43,
                  v44);
          if ( !v92 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v93,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
            goto LABEL_121;
          v96 = this->fields.voiceDataList;
          v97 = ServantStatusDialog__GetVoiceAssetName(
                  VoiceLimitCountList,
                  2,
                  BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                  *((_DWORD *)p_titleInfo + v47),
                  v94,
                  v95);
          if ( !v96 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v96,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
            goto LABEL_121;
          v72 = this->fields.voiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_52;
        }
      }
LABEL_84:
      *(float *)&v45 = v46->fields.CHARA_BASE_POSITION.fields.y;
      if ( (__int64)++v47 >= (int)v45 )
        goto LABEL_85;
    }
    v64 = this->fields.voiceDataList;
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v62);
    if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
      goto LABEL_121;
    v65 = ServantStatusDialog__GetVoiceAssetName(
            VoiceLimitCountList,
            0,
            BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
            *((_DWORD *)p_titleInfo + v47),
            v60,
            v61);
    if ( !v64 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v64,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
      goto LABEL_121;
    v68 = this->fields.voiceDataList;
    v69 = ServantStatusDialog__GetVoiceAssetName(
            VoiceLimitCountList,
            2,
            BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
            *((_DWORD *)p_titleInfo + v47),
            v66,
            v67);
    if ( !v68 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v47 >= LODWORD(v46->fields.CHARA_BASE_POSITION.fields.y) )
      goto LABEL_121;
    v72 = this->fields.voiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_52:
    v74 = ServantStatusDialog__GetVoiceAssetName(
            VoiceLimitCountList,
            1,
            ServantIdMashu3,
            *((_DWORD *)p_titleInfo + v47),
            v70,
            v71);
    if ( !v72 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v72,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_84;
  }
LABEL_100:
  v121 = this->fields.voiceDataList;
  if ( !v121 )
    goto LABEL_120;
  if ( v121->fields._size < 1 )
    return 0;
  v122 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v122 )
    goto LABEL_120;
  CommonUI__SetLoadMode(v122, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v123);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40F7166 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v124);
    byte_40F7166 = 1;
  }
  v131 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v131 = NetworkManager_TypeInfo;
  }
  if ( v131->static_fields->isRebootBlock )
    return 1;
  v132 = this->fields.voiceDataList;
  if ( !v132 )
    goto LABEL_120;
  if ( !v132->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v133 = (struct System_Int32_array *)v132->fields._items->m_Items[0];
  this->fields.changeSvtVoiceIdList = v133;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList,
    (System_Int32_array **)v133,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  v134 = this->fields.voiceDataList;
  if ( !v134 )
LABEL_120:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v134,
    0,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  v140 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v136, v137, v138, v139);
  System_Action___ctor(v140, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v19 = 1;
  SoundManager__loadAudioAssetStorage(changeSvtVoiceIdList, v140, 1, 0LL);
  return v19;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  SePlayer_o *voicePlayList; // x20
  System_Action_o *v22; // x21
  SePlayer_o *v23; // x0
  BattleServantConfConponent_o *p_voicePlayList; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F87A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_EndPlayVoice__, v6);
    sub_B16FFC(&StringLiteral_5970, v7);
    byte_40F87A1 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_30015892(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
  if ( *(_QWORD *)&this->fields.voicePlayNum )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5970,
      0LL);
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v9, v10, v11, v12, v13, v14);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v15, v16, v17, v18, v19, v20);
  }
  voicePlayList = (SePlayer_o *)this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayList, v22, 0LL);
    v23 = (SePlayer_o *)this->fields.voicePlayList;
    if ( v23 )
    {
      p_voicePlayList = (BattleServantConfConponent_o *)&this->fields.voicePlayList;
      SePlayer__StopSe(v23, 0.0, 0LL);
      p_voicePlayList->klass = 0LL;
      sub_B16F98(p_voicePlayList, 0LL, v25, v26, v27, v28, v29, v30);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x8

  if ( (byte_40F87DE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_B16FFC(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F87DE = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     cvId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (battleTabListViewManager = this->fields.battleTabListViewManager) == 0LL )
    {
      sub_B170D4();
    }
    ServantStatusFlavorTextListViewManager__UpdateCvName(
      (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
      Entity->fields.age,
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
  ServantStatusFlavorTextListViewManager_o *battleTabListViewManager; // x0
  struct ServantStatusBattleListViewManager_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ServantStatusFlavorTextListViewManager_o *v26; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v27; // x21
  struct System_Int32_array *profileNewIdList; // x8

  v4 = this;
  if ( (byte_40F87DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantCommentEntity___ctor__, setMode);
    sub_B16FFC(&System_Action_ServantCommentEntity__TypeInfo, v5);
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectFlavor__, v7);
    this = (ServantStatusDialog_o *)sub_B16FFC(&Method_ServantStatusDialog__UpdateProfileList_b__219_0__, v8);
    byte_40F87DD = 1;
  }
  if ( LODWORD(v4->fields.tabInitList) == 1 )
  {
    battleTabListViewManager = (ServantStatusFlavorTextListViewManager_o *)v4->fields.battleTabListViewManager;
    if ( !battleTabListViewManager )
      goto LABEL_13;
    ServantStatusFlavorTextListViewManager__CreateList(
      battleTabListViewManager,
      *(ServantStatusListViewItem_o **)&v4->fields.isModify,
      0LL);
    v10 = v4->fields.battleTabListViewManager;
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_ServantCommentEntity__TypeInfo,
                                                                                 v11,
                                                                                 v12,
                                                                                 v13,
                                                                                 v14);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog__UpdateProfileList_b__219_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_ServantCommentEntity___ctor__);
    if ( !v10 )
      goto LABEL_13;
    v10->fields.sortKindButton = (struct UICommonButton_o *)v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v10->fields.sortKindButton,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( setMode )
    {
      v26 = (ServantStatusFlavorTextListViewManager_o *)v4->fields.battleTabListViewManager;
      v27 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo,
                                                                       v22,
                                                                       v23,
                                                                       v24,
                                                                       v25);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v26 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v26, 1, v27, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  else
  {
    profileNewIdList = v4->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_13;
    if ( profileNewIdList->max_length <= 1 )
    {
      sub_B17100(this, setMode, method);
      sub_B170A0();
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
  System_String_o *Name; // x0

  v3 = *(_QWORD **)&this->fields.isModify;
  if ( !v3 )
    goto LABEL_8;
  if ( v3[7] || !v3[11] )
  {
    v4 = (ServantEntity_o *)v3[16];
    if ( v4 )
    {
      servantClassNameLabel = (UIRangeLabel_o *)this->fields.servantClassNameLabel;
      Name = ServantEntity__getName(v4, -1, imageLimitCount, 0LL);
      if ( servantClassNameLabel )
      {
        UIRangeLabel__Set(servantClassNameLabel, Name, 0LL, 1, 0, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall ServantStatusDialog__UpdateServantParameters(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x8
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x0

  v4 = *(_QWORD *)&this->fields.isModify;
  if ( !v4 )
    goto LABEL_7;
  if ( *(_QWORD *)(v4 + 56) || !*(_QWORD *)(v4 + 88) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__UpdateParameter(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        svtId,
        imageLimitCount,
        0LL);
      return;
    }
LABEL_7:
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40F87E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_40F87E2 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v7);
  }
  else
  {
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v11, 1, 1, 0LL);
  }
}


void __fastcall ServantStatusDialog___OnConfirmServantQuest_b__209_0(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t tabKind; // w20
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x1

  if ( (byte_40F87E3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F87E3 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetAutoResumeByQuestId(tabKind, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog_18237824(Instance, v12, 0LL);
  ServantStatusDialog__Exit(this, v13);
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
  struct ServantStatusListViewItem_o *v11; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x8
  __int64 v14; // x8
  ServantCommentMaster_o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w22
  __int64 v19; // x2
  System_Int32_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Int32_array *v23; // x23
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_40F87E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_40F87E4 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo
    && System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mainInfo,
         (WarBoardManager_TaskList_o *)entity,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    v11 = this->fields.mainInfo;
    if ( v11 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11,
        (WarBoardManager_TaskList_o *)entity,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v13 = *(_QWORD *)&this->fields.isModify;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 128);
        if ( v14 )
        {
          v15 = (ServantCommentMaster_o *)Master_WarQuestSelectionMaster;
          v17 = *(_QWORD *)(v14 + 16);
          v16 = *(_QWORD *)(v14 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = v17;
          *(_QWORD *)&v25.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
          v20 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v19);
          if ( entity )
          {
            v23 = v20;
            if ( v20 )
            {
              if ( !v20->max_length )
                goto LABEL_23;
              v20->m_Items[1] = entity->fields.id;
              v20 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v22);
              if ( !v20 )
                goto LABEL_22;
              if ( !v20->max_length )
              {
LABEL_23:
                sub_B17100(v20, v21, v22);
                sub_B170A0();
              }
              v20->m_Items[1] = entity->fields.priority;
              if ( v15 )
              {
                ServantCommentMaster__SetOpen_30500108(v15, v18, v23, v20, 0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v24);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
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
  sub_B16F98(
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
  if ( (byte_40F7666 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isModify);
    byte_40F7666 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isModify, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  sub_B16F98(
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
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  char v11[4]; // [xsp+18h] [xbp-28h] BYREF
  char v12[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_40F7667 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isModify);
    byte_40F7667 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, isModify, isNeedSort);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v11);
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
  sub_B16F98(
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = isModify;
  v12 = questId;
  if ( (byte_40F7668 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isModify);
    sub_B16FFC(&int_TypeInfo, v9);
    byte_40F7668 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, isModify, *(_QWORD *)&questId);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v11);
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
  sub_B16F98(
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
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  char v14[4]; // [xsp+28h] [xbp-28h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  v13 = questId;
  if ( (byte_40F7669 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isModify);
    sub_B16FFC(&int_TypeInfo, v10);
    byte_40F7669 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, isModify, isNeedSort);
      if ( (sub_B1702C(v24) & 1) == 0 )
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
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
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
            v20 = sub_AAFEF8(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))sub_B170AC(v19, v24);
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
            v18 = sub_AAFEF8(v23, class_0, v13);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  ServantStatusDialog_o *_4__this; // x0
  __int64 v10; // x19
  __int64 v11; // x19
  CommonUI_o *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x20
  CommonUI_o *v15; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F7662 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v7);
    sub_B16FFC(&Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__, v8);
    byte_40F7662 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0LL);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v11 = **(_QWORD **)(v10 + 192);
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AAFCFC(v11);
      v12 = **(CommonUI_o ***)(v11 + 184);
      if ( v12 )
      {
        CommonUI__CloseConfirmDialog(v12, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B170D4();
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(v14);
  v15 = **(CommonUI_o ***)(v14 + 184);
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v15 )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_18237824(v15, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct ServantStatusDialog_o *_4__this; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v9; // x21
  __int64 v10; // x9
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F7663 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v6);
    byte_40F7663 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (profileTabListViewManager = (ServantStatusListViewManager_o *)_4__this->fields.profileTabListViewManager,
        v9 = sub_B170CC(ServantStatusListViewManager_CallbackFunc_TypeInfo, method, v2, v3, v4),
        v10 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v9 + 40) = Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v9 + 16) = v10,
        *(_QWORD *)(v9 + 32) = _4__this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v9 + 32),
          (System_Int32_array **)_4__this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !profileTabListViewManager) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v9,
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
  CommonUI_o *v9; // x0
  struct ServantStatusDialog_o *v10; // x8
  struct ServantStatusDialog_o **p__4__this; // x19
  struct ServantStatusDialog_o *_4__this; // t1
  ServantStatusListViewItem_o *v13; // x0
  struct ServantStatusDialog_o *v14; // x8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *v16; // x8
  ServantStatusCharaGraphListViewManager_o *v17; // x0
  ServantStatusListViewManager_o *profileTabListViewManager; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct ServantStatusDialog_o *v23; // x20
  ServantStatusListViewManager_o *v24; // x19
  __int64 v25; // x21
  __int64 v26; // x9
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F7664 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_40F7664 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_18237824(v9, 0LL, 0LL);
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
  v13 = *(ServantStatusListViewItem_o **)&v10->fields.isModify;
  if ( !v13 )
    goto LABEL_24;
  if ( !*((_BYTE *)p__4__this - 4) )
  {
    v13->fields.isEnableSupportRandomSetting ^= 1u;
    goto LABEL_19;
  }
  ServantStatusListViewItem__set_IsEnableOwnRandomSetting(v13, !v13->fields.isEnableOwnRandomSetting, 0LL);
  v14 = *p__4__this;
  if ( !*p__4__this
    || (servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)v14->fields.servantStatusBattleConfirmDialog) == 0LL
    || (ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
          servantStatusBattleConfirmDialog,
          *(ServantStatusListViewItem_o **)&v14->fields.isModify,
          0LL),
        (v16 = *p__4__this) == 0LL)
    || (v17 = (ServantStatusCharaGraphListViewManager_o *)v16->fields.servantStatusBattleConfirmDialog) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    v17,
    *(ServantStatusListViewItem_o **)&v16->fields.isModify,
    0LL);
LABEL_19:
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)(*p__4__this)->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode_32653296(profileTabListViewManager, 10, 0LL);
  v23 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  v24 = (ServantStatusListViewManager_o *)v23->fields.profileTabListViewManager;
  v25 = sub_B170CC(ServantStatusListViewManager_CallbackFunc_TypeInfo, v19, v20, v21, v22);
  v26 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v25 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v25 + 16) = v26;
  *(_QWORD *)(v25 + 32) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)v23, v27, v28, v29, v30, v31, v32);
  if ( !v24 )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(v24, 1, (ServantStatusListViewManager_CallbackFunc_o *)v25, 0LL);
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
  CommonUI_o *v9; // x0
  struct ServantStatusDialog_o *v10; // x8
  struct ServantStatusDialog_o **p__4__this; // x19
  struct ServantStatusDialog_o *_4__this; // t1
  ServantStatusListViewItem_o *v13; // x0
  struct ServantStatusDialog_o *v14; // x8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0
  struct ServantStatusDialog_o *v16; // x8
  ServantStatusCharaGraphListViewManager_o *v17; // x0
  ServantStatusListViewManager_o *profileTabListViewManager; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct ServantStatusDialog_o *v23; // x20
  ServantStatusListViewManager_o *v24; // x19
  __int64 v25; // x21
  __int64 v26; // x9
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F7665 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_40F7665 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(CommonUI_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_18237824(v9, 0LL, 0LL);
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
  v13 = *(ServantStatusListViewItem_o **)&v10->fields.isModify;
  if ( !v13 )
    goto LABEL_24;
  if ( !*((_BYTE *)p__4__this - 4) )
  {
    v13->fields.isEnableSupportRandomSetting ^= 1u;
    goto LABEL_19;
  }
  ServantStatusListViewItem__set_IsEnableOwnRandomSetting(v13, !v13->fields.isEnableOwnRandomSetting, 0LL);
  v14 = *p__4__this;
  if ( !*p__4__this
    || (servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)v14->fields.servantStatusBattleConfirmDialog) == 0LL
    || (ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
          servantStatusBattleConfirmDialog,
          *(ServantStatusListViewItem_o **)&v14->fields.isModify,
          0LL),
        (v16 = *p__4__this) == 0LL)
    || (v17 = (ServantStatusCharaGraphListViewManager_o *)v16->fields.servantStatusBattleConfirmDialog) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  ServantStatusCharaGraphListViewManager__SetEnableScroll(
    v17,
    *(ServantStatusListViewItem_o **)&v16->fields.isModify,
    0LL);
LABEL_19:
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)(*p__4__this)->fields.profileTabListViewManager;
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode_32653296(profileTabListViewManager, 10, 0LL);
  v23 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  v24 = (ServantStatusListViewManager_o *)v23->fields.profileTabListViewManager;
  v25 = sub_B170CC(ServantStatusListViewManager_CallbackFunc_TypeInfo, v19, v20, v21, v22);
  v26 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v25 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v25 + 16) = v26;
  *(_QWORD *)(v25 + 32) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)v23, v27, v28, v29, v30, v31, v32);
  if ( !v24 )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(v24, 1, (ServantStatusListViewManager_CallbackFunc_o *)v25, 0LL);
}