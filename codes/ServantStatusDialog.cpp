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

  if ( (byte_4186066 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_352/*"#4C4C4C"*/, v8);
    byte_4186066 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantStatusDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_352/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_352/*"#4C4C4C"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4186065 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v3);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v5);
    byte_4186065 = 1;
  }
  LODWORD(this->fields.titleInfo) = 1083283866;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.y = 0xBFC666663F59999ALL;
  v6 = (struct System_Int32_array *)sub_B2C374(bool___TypeInfo, 4LL);
  this->fields.profileNewIdList = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.profileNewIdList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceDataList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.voicePlayer = (struct SePlayer_o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voicePlayer,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Int32_array **)StringLiteral_23190/*"wait"*/;
  *(_QWORD *)&this->fields.confirmDispLv = StringLiteral_23190/*"wait"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.confirmDispLv, v27, v28, v29, v30, v31, v32, v33);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4186017 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4186017 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.isBattlePlay = StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v10, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__InitBattleActor(this, v13);
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

  if ( (byte_4186012 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&TouchEffectManager_TypeInfo, v3);
    sub_B2C35C(&UICamera_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9990/*"OnDragEnd"*/, v5);
    sub_B2C35C(&StringLiteral_10010/*"OnHover"*/, v6);
    sub_B2C35C(&StringLiteral_10040/*"OnPress"*/, v7);
    sub_B2C35C(&StringLiteral_10049/*"OnScrollStop"*/, v8);
    byte_4186012 = 1;
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
      UICamera__Notify(v12, (System_String_o *)StringLiteral_9990/*"OnDragEnd"*/, 0LL, 0LL);
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
      UICamera__Notify(v14, (System_String_o *)StringLiteral_10040/*"OnPress"*/, v15, 0LL);
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
      UICamera__Notify(v17, (System_String_o *)StringLiteral_10010/*"OnHover"*/, v18, 0LL);
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
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10040/*"OnPress"*/, v20, 0LL);
    v45[0] = 1;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v45);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10010/*"OnHover"*/, v21, 0LL);
    v44[0] = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v44);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10049/*"OnScrollStop"*/, v22, 0LL);
  }
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0LL, 0LL);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->current, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = UICamera_TypeInfo->static_fields;
  v30->currentCamera = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->currentCamera, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->currentTouch = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v37->currentTouch, 0LL, v38, v39, v40, v41, v42, v43);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 index; // x1
  ServantStatusBattleListViewManager_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418602F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v5);
    byte_418602F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
  if ( !voiceTabListViewManager
    || (voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                            voiceTabListViewManager,
                                                                            method)) == 0LL )
  {
    sub_B2C434(voiceTabListViewManager, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voiceTabListViewManager,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    if ( !v7 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B2C434(v7, v8);
    Item = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)v21.fields.current, v8);
    if ( !Item )
      sub_B2C434(0LL, v11);
    DispLimitCount = ServantStatusBattleListViewItem__get_DispLimitCount(Item, v11);
    v14 = *(_QWORD *)&this->fields.isModify;
    if ( !v14 )
      sub_B2C434(DispLimitCount, v13);
    if ( (_DWORD)DispLimitCount == *(_DWORD *)(v14 + 240) )
    {
      v15 = ServantStatusBattleListViewObject__GetItem((ServantStatusBattleListViewObject_o *)current, v13);
      if ( !v15 )
        sub_B2C434(0LL, v16);
      index = (unsigned int)v15->fields.index;
      v19 = (ServantStatusBattleListViewManager_o *)this->fields.voiceTabListViewManager;
      this->fields.currentMaskType = index;
      if ( !v19 )
        sub_B2C434(0LL, index);
      ServantStatusBattleListViewManager__ChangeSelectIndex(v19, index, v17);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__ChangeBattleResource(
        ServantStatusDialog_o *this,
        int32_t dispLv,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  unsigned __int64 v17; // x25
  bool v18; // w22
  int32_t nowLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w0
  struct UnityEngine_Camera_o *battleChrCamera; // x24
  TreasureDvcInfo_o *v22; // x25
  TreasureDvcInfo_o *v23; // x26
  SkillInfo_array *v24; // x21
  SkillInfo_array *v25; // x23
  int32_t nextLimitCount; // w28
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v27; // x27
  __int64 v28; // x0
  const MethodInfo *v29; // [xsp+18h] [xbp-88h]
  char isSkillModify; // [xsp+2Ch] [xbp-74h]
  SkillInfo_array *v31; // [xsp+30h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-68h] BYREF
  TreasureDvcInfo_o *info; // [xsp+40h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-58h] BYREF

  v3 = dispLv;
  if ( (byte_418601F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLv);
    sub_B2C35C(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_EndBattleConfirm__, v7);
    byte_418601F = 1;
  }
  info = 0LL;
  tdInfo = 0LL;
  v31 = 0LL;
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
    v28 = sub_B2C460(svtId);
    sub_B2C400(v28, 0LL);
  }
  v11 = (int)svtId;
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  v12 = dispSelectList->m_Items[currentMaskType + 1];
  ServantStatusListViewItem__GetNpInfo_34149024(svtId, &tdInfo, v11, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetNpInfo_34149024(svtId, &info, v12, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_34148164(svtId, &skillInfoList, v11, 0LL);
  svtId = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !svtId )
    goto LABEL_38;
  ServantStatusListViewItem__GetSkillInfo_34148164(svtId, &v31, v12, 0LL);
  svtId = (ServantStatusListViewItem_o *)tdInfo;
  if ( !tdInfo )
    goto LABEL_38;
  v14 = TreasureDvcInfo__Equals(tdInfo, info, 0LL);
  for ( i = 4LL; ; ++i )
  {
    svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v17 = i - 4;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      svtId = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= svtId->fields.commandCodeCommentEntity->fields.illustratorId )
      break;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( v17 >= skillInfoList->max_length )
      goto LABEL_39;
    if ( !v31 )
      goto LABEL_38;
    if ( v17 >= v31->max_length )
      goto LABEL_39;
    v16 = (SkillInfo_o *)*((_QWORD *)&skillInfoList->obj.klass + i);
    *(_QWORD *)&dispLv = *((_QWORD *)&v31->obj.klass + i);
    if ( !v16 )
    {
      if ( !*(_QWORD *)&dispLv )
        continue;
      v16 = (SkillInfo_o *)*((_QWORD *)&v31->obj.klass + i);
      *(_QWORD *)&dispLv = 0LL;
    }
    if ( !SkillInfo__Equals(v16, *(SkillInfo_o **)&dispLv, 0LL) )
    {
      isSkillModify = 1;
LABEL_31:
      v18 = !v14;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      nowLimitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v11, 0LL);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v12, 0LL);
      battleChrCamera = this->fields.battleChrCamera;
      v23 = info;
      v22 = tdInfo;
      v25 = v31;
      v24 = skillInfoList;
      nextLimitCount = LimitCountByImageLimitCostumeIn;
      v27 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_B2C42C(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
      ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
        v27,
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
            v22,
            v23,
            v18,
            v24,
            v25,
            isSkillModify,
            v27,
            (int32_t)svtId,
            nowLimitCount,
            nextLimitCount,
            v29);
          return;
        }
      }
LABEL_38:
      sub_B2C434(svtId, *(_QWORD *)&dispLv);
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
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_4186049 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4186049 = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 320) = type, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)this, 4, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B2C434(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v8, 0LL);
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
  AssetLoader_LoadEndDataHandler_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v33; // x21

  v4 = this;
  if ( (byte_4186047 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&dispLv);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantStatusDialog_EndCardLoad__, v8);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v9);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4186047 = 1;
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
  if ( System_String__Equals_44292872((System_String_o *)this, v4->fields.loadVoiceData, 0LL) )
  {
LABEL_22:
    this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager;
    if ( this )
    {
      ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)this, 4, 0LL);
      profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
      v33 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v33, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B2C434(this, *(_QWORD *)&dispLv);
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
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 1, 0LL);
  v4->fields.loadVoiceData = (struct System_String_o *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.loadVoiceData, v16, v18, v19, v20, v21, v22, v23);
  loadVoiceData = v4->fields.loadVoiceData;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCardLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v25, 1, 0LL) )
  {
    v4->fields.loadVoiceData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.loadVoiceData, 0LL, v26, v27, v28, v29, v30, v31);
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
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_418604D & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_418604D = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 280) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)this, 5, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B2C434(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v8, 0LL);
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
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  v4 = this;
  if ( (byte_4186050 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4186050 = 1;
  }
  v6 = *(_QWORD *)&v4->fields.isModify;
  if ( !v6
    || (*(_DWORD *)(v6 + 296) = dispLv, (this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)this, 7, 0LL),
        profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
    sub_B2C434(this, *(_QWORD *)&dispLv);
  }
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v8, 0LL);
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
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4186048 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4186048 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          type,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_30332204(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          4,
          0LL),
        v7 = this->fields.profileTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v7) )
  {
    sub_B2C434(profileTabListViewManager, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v7, 1, v8, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *cardLoadAsset; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *loadVoiceData; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *changeSvtVoiceIdList; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418602D & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_418602D = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
    (const MethodInfo *)callback);
  *(_QWORD *)&this->fields.isModify = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isModify, 0LL, v14, v15, v16, v17, v18, v19);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v21, v22, v23, v24, v25, v26);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v28, v29, v30, v31, v32, v33);
  }
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    v35 = *(System_String_o **)&this->fields.isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v35, 0LL);
    *(_QWORD *)&this->fields.isBattlePlay = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isBattlePlay, 0LL, v36, v37, v38, v39, v40, v41);
  }
  ServantStatusDialog__StopVoice(this, v34);
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v43, v44, v45, v46, v47, v48);
  }
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  if ( SLODWORD(profileTabListViewManager->fields.scrollView) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)profileTabListViewManager,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v50,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v50.fields.current;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v50,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voicePlayer;
    if ( profileTabListViewManager )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)profileTabListViewManager,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
      goto LABEL_37;
    }
LABEL_42:
    sub_B2C434(profileTabListViewManager, callback);
  }
LABEL_37:
  profileTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusTabBase;
  if ( !profileTabListViewManager )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)profileTabListViewManager, 0, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !profileTabListViewManager )
    goto LABEL_42;
  AtlasManager__ReleaseUISkin((AtlasManager_o *)profileTabListViewManager, 2, 0, 0LL);
  if ( callback )
    System_Action__Invoke(callback, 0LL);
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
  ServantStatusBattleConfirmDialog__Close_21716444(battleChrCamera, 0LL, method);
  if ( isDecide )
  {
    profileNewIdList = this->fields.profileNewIdList;
    if ( profileNewIdList )
    {
      if ( !profileNewIdList->max_length )
      {
        v8 = sub_B2C460(battleChrCamera);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(battleChrCamera, isDecide);
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
  __int64 v7; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_418604A & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418604A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( System_String__IsNullOrEmpty(this->fields.loadVoiceData, 0LL) )
    return;
  Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !Instance
    || (ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)Instance, 4, 0LL),
        profileTabListViewManager = this->fields.profileTabListViewManager,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !profileTabListViewManager) )
  {
LABEL_8:
    sub_B2C434(Instance, v7);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v9, 0LL);
}


void __fastcall ServantStatusDialog__EndChangeBattleResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItem_o *Instance; // x0
  int32_t ConvertOverwriteDispImageLimitCount; // w20
  int32_t LimitCountByImageLimitCostumeIn; // w20
  ServantLimitImageMaster_o *v10; // x21
  ServantStatusListViewItem_o *v11; // x8
  BattleFBXComponent_o *v12; // x19
  int32_t v13; // w20

  if ( (byte_4186022 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186022 = 1;
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
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !*(_QWORD *)&this->fields.isModify
    || (v10 = (ServantLimitImageMaster_o *)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(
                                                    *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                                    0LL),
        !v10)
    || (Instance = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v10,
                                                    (int32_t)Instance,
                                                    LimitCountByImageLimitCostumeIn,
                                                    0LL),
        (v11 = *(ServantStatusListViewItem_o **)&this->fields.isModify) == 0LL)
    || (v12 = *(BattleFBXComponent_o **)&this->fields.isBattleResourceLoading,
        v13 = (int)Instance,
        Instance = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(v11, 0LL),
        !v12) )
  {
LABEL_13:
    sub_B2C434(Instance, v6);
  }
  BattleFBXComponent__SetEvolutionLevel(v12, (int32_t)Instance, v13, 0LL);
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
  __int64 v3; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4186038 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4186038 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B2C434(v6, v7);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v5, 0LL);
}


void __fastcall ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4186036 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_4186036 = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    sub_B2C434(v6, v7);
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v5, 0LL);
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

  if ( (byte_4186010 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&OptionManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&TutorialFlag_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11955/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/, v15);
    sub_B2C35C(&StringLiteral_11954/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, v16);
    sub_B2C35C(&StringLiteral_11956/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/, v17);
    sub_B2C35C(&StringLiteral_11957/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/, v18);
    sub_B2C35C(&StringLiteral_11962/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/, v19);
    sub_B2C35C(&StringLiteral_11961/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/, v20);
    sub_B2C35C(&StringLiteral_3561/*"CancelInput"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    sub_B2C35C(&StringLiteral_5962/*"EndLoadInit"*/, v23);
    byte_4186010 = 1;
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
  statusTabBase = (UnityEngine_GameObject_o *)TutorialFlag__Get_28617756(106, 0LL);
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
      v119 = sub_B2C460(statusTabBase);
      sub_B2C400(v119, 0LL);
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
    statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !statusTabBase )
      goto LABEL_219;
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)statusTabBase,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
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
    sub_B2C2F8(
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
    ShiningIconComponent__Set_32979912(
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
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)statusTabBase, 1, 0, 0, 0LL);
  v52 = *(_QWORD *)&this->fields.isModify;
  if ( !v52 )
    goto LABEL_219;
  v53 = *(CommandCodeEntity_o **)(v52 + 176);
  if ( !v53 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
          statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !statusTabBase )
            goto LABEL_219;
          statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)statusTabBase,
                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
        statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
      statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !statusTabBase )
        goto LABEL_219;
      statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)statusTabBase,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
        statusTabBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !statusTabBase )
          goto LABEL_219;
        statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)statusTabBase,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                                      (System_String_o *)StringLiteral_11962/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/,
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
      method = (const MethodInfo *)statusTabBase;
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
    statusTabBase = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
          v58 = &StringLiteral_11955/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v58 = &StringLiteral_11956/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
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
      statusTabBase = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11954/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0LL);
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
            statusTabBase = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v121,
                                                          0LL);
            if ( v101 )
            {
              v107 = (int)statusTabBase;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v101, (int32_t)statusTabBase, 3, 0LL) )
              {
                statusTabBase = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                              v101,
                                                              (System_String_o *)StringLiteral_11957/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
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
                v59 = System_String__Concat_44305532(klass, v112, 0LL);
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
    sub_B2C434(statusTabBase, method);
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
    v58 = &StringLiteral_11961/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
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
      v26 = dword_31A0240[v116];
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
      (System_String_o *)StringLiteral_5962/*"EndLoadInit"*/,
      0.1,
      0LL);
  else
    ServantStatusDialog__StartStatusLoad(this, v117);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_3561/*"CancelInput"*/,
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

  if ( (byte_418601A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_418601A = 1;
  }
  LOBYTE(this->fields.defaultAnimationName) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_QWORD *)&this->fields.isBattlePlay )
    ServantStatusDialog__EndLoadBattle_21783376(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadBattle_21783376(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  RandomLimitCountManager_c *v4; // x0
  __int64 v5; // x8

  if ( (byte_418601B & 1) == 0 )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_418601B = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  if ( !byte_4185F2D )
  {
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
    byte_4185F2D = 1;
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
      sub_B2C434(v4, method);
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

  if ( (byte_4186021 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4186021 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ServantStatusDialog__EndChangeBattleResource(this, v6);
}


void __fastcall ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4186013 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_13508/*"TUTORIAL_MESSAGE_FAVORITE1"*/, v5);
    byte_4186013 = 1;
  }
  if ( LOBYTE(this->fields.newProfileList) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(106, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13508/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0LL);
      if ( !Instance )
        sub_B2C434(v7, v8);
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
  System_Action_o *v27; // x21

  if ( (byte_4186025 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_B2C35C(&Method_ServantStatusDialog_EndLoadVoice__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4186025 = 1;
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      this->fields.changeSvtVoiceIdList = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.changeSvtVoiceIdList, 0LL, v12, v13, v14, v15, v16, v17);
      voiceDataList = this->fields.voiceDataList;
      if ( voiceDataList )
      {
        if ( voiceDataList->fields._size < 1 )
        {
          voicePlayer = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          sub_B2C2F8(
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
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            v26 = (System_String_o *)this->fields.changeSvtVoiceIdList;
            v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__loadAudioAssetStorage(v26, v27, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(voicePlayer, changeSvtVoiceIdList);
  }
}


void __fastcall ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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

  if ( (byte_4186029 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5988/*"EndWaitVoice"*/, method);
    byte_4186029 = 1;
  }
  this->fields.voicePlayList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayList, 0LL, v2, v3, v4, v5, v6, v7);
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
        v27 = sub_B2C460(servantNameRangeLabel);
        sub_B2C400(v27, 0LL);
      }
      v20 = *(_QWORD *)(v17 + 8LL * v18 + 32);
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5988/*"EndWaitVoice"*/,
          *(float *)(v20 + 24),
          0LL);
        return;
      }
LABEL_18:
      sub_B2C434(servantNameRangeLabel, v10);
    }
    if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_31386024(servantNameRangeLabel, 2, -1, 0LL);
      LODWORD(this->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v11, v12, v13, v14, v15, v16);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v21, v22, v23, v24, v25, v26);
  }
  else if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_31386024(servantNameRangeLabel, 2, -1, 0LL);
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
  const MethodInfo *v10; // x2
  float ScrillBarValue; // s0
  struct ServantStatusFlavorTextListViewManager_o *v12; // x8
  struct ServantStatusFlavorTextListViewManager_o *v13; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4186041 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4186041 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(v8);
  profileTabListViewManager = **(CommonUI_o ***)(v8 + 184);
  if ( !profileTabListViewManager )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(profileTabListViewManager, 0LL);
  if ( !isDecide )
    goto LABEL_13;
  ServantStatusDialog__SetTabKind(this, 0, v10);
  profileTabListViewManager = (CommonUI_o *)this->fields.profileTabListViewManager;
  if ( !profileTabListViewManager
    || (ScrillBarValue = ServantStatusListViewManager__GetScrillBarValue(
                           (ServantStatusListViewManager_o *)profileTabListViewManager,
                           19,
                           0LL),
        (v12 = this->fields.profileTabListViewManager) == 0LL)
    || (profileTabListViewManager = (CommonUI_o *)v12->fields.scrollBar) == 0LL )
  {
LABEL_15:
    sub_B2C434(profileTabListViewManager, isDecide);
  }
  UIProgressBar__set_value((UIProgressBar_o *)profileTabListViewManager, ScrillBarValue, 0LL);
LABEL_13:
  v13 = this->fields.profileTabListViewManager;
  v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v13, 1, v14, 0LL);
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

  if ( (byte_4186015 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, data);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&Method_ServantStatusDialog_EndStatusLoad2__, v5);
    byte_4186015 = 1;
  }
  loadVoiceData = this->fields.loadVoiceData;
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad2__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(loadVoiceData, v7, 1, 0LL) )
  {
    this->fields.loadVoiceData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.loadVoiceData, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v8; // x1
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_4186016 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_5962/*"EndLoadInit"*/, v6);
    byte_4186016 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  if ( *(_DWORD *)&this->fields.isInitTab != 33 )
  {
    Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)Instance, 6, 0LL);
      Instance = (CommonUI_o *)this->fields.profileTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)Instance, 4, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( profileTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v10,
            0LL);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_B2C434(Instance, v8);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5962/*"EndLoadInit"*/,
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
  if ( (byte_4186028 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantStatusDialog_EndPlayVoice__, v9);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_4186028 = 1;
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
        v28 = sub_B2C460(this);
        sub_B2C400(v28, 0LL);
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
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
        v20 = (System_Int32_array **)SoundManager__playVoice_24786800(v15, v16, DEFAULT_VOLUME, v19, 0LL);
        p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voicePlayList;
        v8->fields.voicePlayList = (struct ServantVoiceData_array *)v20;
        goto LABEL_17;
      }
LABEL_18:
      sub_B2C434(this, method);
    }
    if ( LODWORD(v8->fields.tabInitList) == 3 && ((__int64)v8->fields.battleLoadAsset & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.servantNameRangeLabel;
      if ( !this )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_31386024((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0LL);
      LODWORD(v8->fields.battleLoadAsset) = -1;
    }
    *(_QWORD *)&v8->fields.voicePlayNum = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.voicePlayNum, 0LL, v2, v3, v4, v5, v6, v7);
    p_voicePlayList = (BattleServantConfConponent_o *)&v8->fields.voiceListIndex;
    v20 = 0LL;
    LODWORD(v8->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&v8->fields.voiceListIndex = 0LL;
LABEL_17:
    sub_B2C2F8(p_voicePlayList, v20, v21, v22, v23, v24, v25, v26);
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
  if ( (byte_418603E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, result);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418603E = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  tdInfo = 0LL;
  v13 = *(_QWORD *)&v3->fields.isModify;
  if ( !v13 )
    goto LABEL_62;
  if ( !*(_QWORD *)(v13 + 56) )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v42, 0LL);
  if ( !v17 )
    goto LABEL_62;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v17,
          &entity,
          (int64_t)this,
          (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
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
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v41, 0LL);
    if ( !v21 )
      goto LABEL_62;
    DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v21,
      &entity,
      (int64_t)this,
      (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_61;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( !v24 )
    goto LABEL_62;
  this = (ServantStatusDialog_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)v24,
                                    (int32_t)this,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_B2C434(this, result);
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
        v40 = sub_B2C460(this);
        sub_B2C400(v40, 0LL);
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
                                    (const MethodInfo_1A984CC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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

  if ( (byte_418603F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418603F = 1;
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
      sub_B2C434(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v11, 0LL);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.openCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.individualityCallbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.formationCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v19, v20, v21, v22, v23, v24);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      this->fields.formationCallbackFunc = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
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
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resultCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.formationCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  ServantStatusListViewItem_o *v17; // x1
  _QWORD *v18; // x8
  UserServantEntity_o *v19; // x0
  bool *p_isModify; // x27
  int v21; // w9
  UserServantCollectionEntity_o *v22; // x0
  UserCommandCodeEntity_o *v23; // x0
  UserCommandCodeCollectionEntity_o *v24; // x0
  __int64 v25; // x8
  int64_t v26; // x20
  int statusLoadAsset_low; // w20
  int v28; // w20
  int v29; // w20
  int v30; // w20
  int v31; // w20
  int v32; // w20
  const MethodInfo *v33; // x2
  int32_t ManualSetCardLimitCount; // w20
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  __int64 v36; // x8
  __int128 v37; // q1
  CommandCodeSetStatusRequest_o *v38; // x19
  __int64 v39; // x8
  __int64 v40; // x20
  __int64 v41; // x21
  int32_t v42; // w24
  int v43; // w22
  BalanceConfig_c *v44; // x0
  char v45; // w26
  int32_t ManualSetDispLimitCount; // w0
  int32_t v47; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  char v49; // w23
  int32_t ManualSetCommandCardLimit; // w0
  int32_t v51; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v52; // x8
  char v53; // w20
  int32_t ManualSetIconLimitCount; // w0
  int32_t v55; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x8
  ServantStatusListViewItem_o *v57; // x8
  int32_t ManualSetPortraitLimitCount; // w0
  int32_t v59; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userSvtEntity; // x8
  ServantStatusListViewItem_o *v61; // x8
  ServantStatusListViewItem_o *v62; // x8
  ServantStatusListViewItem_o *v63; // x8
  __int64 v64; // x8
  __int128 v65; // q1
  char v66; // w20
  __int64 v67; // x23
  char v68; // w23
  int32_t v69; // w28
  _BOOL4 IsModifyFavoriteUserSvtId; // w24
  NetworkManager_ResultCallbackFunc_o *v71; // x20
  __int64 v72; // x8
  __int128 v73; // q0
  CardFavoriteRequest_o *v74; // x19
  int32_t limitCountSupport; // [xsp+54h] [xbp-11Ch]
  int32_t randomSettingSupport; // [xsp+58h] [xbp-118h]
  int32_t randomSettingOwn; // [xsp+5Ch] [xbp-114h]
  int32_t battleVoice; // [xsp+60h] [xbp-110h]
  int32_t commonFlag; // [xsp+64h] [xbp-10Ch]
  int32_t v80; // [xsp+68h] [xbp-108h]
  int32_t v81; // [xsp+6Ch] [xbp-104h]
  int32_t imageLimitCount; // [xsp+70h] [xbp-100h]
  char v83; // [xsp+74h] [xbp-FCh]
  char v84; // [xsp+78h] [xbp-F8h]
  char v85; // [xsp+7Ch] [xbp-F4h]
  char v86; // [xsp+80h] [xbp-F0h]
  char v87; // [xsp+84h] [xbp-ECh]
  char v88; // [xsp+88h] [xbp-E8h]
  bool isPush; // [xsp+8Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+90h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+B0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+D0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+F0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_418603D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&OtherUserNewManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v10);
    sub_B2C35C(&Method_ServantStatusDialog_EndeCardFavoriteRequest__, v11);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v12);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v13);
    sub_B2C35C(&UserServantCollectionManager_TypeInfo, v14);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v15);
    byte_418603D = 1;
  }
  ServantStatusDialog__QuitList(this, method);
  v18 = *(_QWORD **)&this->fields.isModify;
  if ( !v18 )
    goto LABEL_144;
  v19 = (UserServantEntity_o *)v18[7];
  p_isModify = &this->fields.isModify;
  if ( v19 )
  {
    v21 = *(_DWORD *)&this->fields.isInitTab;
    if ( v21 != 6 && v21 != 15 )
    {
      UserServantEntity__SetOld(v19, 0LL);
      v18 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v22 = (UserServantCollectionEntity_o *)v18[10];
  if ( v22 )
  {
    UserServantCollectionEntity__SetOld(v22, 0LL);
    v18 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v23 = (UserCommandCodeEntity_o *)v18[13];
  if ( v23 )
  {
    if ( *(_DWORD *)&this->fields.isInitTab != 24 )
    {
      UserCommandCodeEntity__SetOld(v23, 0LL);
      v18 = *(_QWORD **)p_isModify;
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
    }
  }
  v24 = (UserCommandCodeCollectionEntity_o *)v18[14];
  if ( v24 )
  {
    UserCommandCodeCollectionEntity__SetOld(v24, 0LL);
    v18 = *(_QWORD **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
  }
  v25 = v18[11];
  if ( v25 && *(_DWORD *)&this->fields.isInitTab == 4 )
  {
    v26 = *(_QWORD *)(v25 + 24);
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    OtherUserNewManager__SetOld(v26, 0LL);
  }
  statusLoadAsset_low = LOBYTE(this->fields.statusLoadAsset);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  v28 = (statusLoadAsset_low != 0) | UserServantNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v28 & 1;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  v29 = v28 | UserServantCollectionManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v29 & 1;
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  v30 = v29 | ServantCommentManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v30 & 1;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  v31 = v30 | OtherUserNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v31 & 1;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  v32 = v31 | UserCommandCodeNewManager__WriteData(0LL);
  LOBYTE(this->fields.statusLoadAsset) = v32 & 1;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0LL);
  v17 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  LOBYTE(this->fields.statusLoadAsset) = (v32 | IsModifyLock) & 1;
  if ( !v17 )
    goto LABEL_144;
  if ( !v17->fields.userSvtEntity )
  {
    if ( v17->fields.userCommandCodeEntity )
    {
      IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v17, 0LL);
      if ( !*(_QWORD *)p_isModify )
        goto LABEL_144;
      if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(
                                            *(ServantStatusListViewItem_o **)p_isModify,
                                            0LL)) & 1) != 0 )
      {
        LOBYTE(this->fields.statusLoadAsset) = 1;
        v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v35,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_EndeCardFavoriteRequest__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                  v35,
                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
        if ( *(_QWORD *)p_isModify )
        {
          v36 = *(_QWORD *)(*(_QWORD *)p_isModify + 104LL);
          if ( v36 )
          {
            v37 = *(_OWORD *)(v36 + 32);
            v38 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
            *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
            *(_OWORD *)&v93.fields.fakeValue = v37;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v90 = v93;
            IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v90, 0LL);
            if ( *(_QWORD *)p_isModify )
            {
              if ( v38 )
              {
                CommandCodeSetStatusRequest__beginRequest(
                  v38,
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
  if ( v17->fields.isConvertOverwriteImage )
    goto LABEL_42;
  IsModifyLock = (int64_t)this->fields.servantStatusBattleConfirmDialog;
  if ( !IsModifyLock )
    goto LABEL_144;
  IsModifyLock = (int64_t)ServantStatusCharaGraphListViewManager__GetManualSelectItem(
                            (ServantStatusCharaGraphListViewManager_o *)IsModifyLock,
                            v17,
                            v33);
  if ( !IsModifyLock )
  {
    v17 = *(ServantStatusListViewItem_o **)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
LABEL_42:
    ManualSetCardLimitCount = ServantStatusListViewItem__get_ManualSetCardLimitCount(v17, 0LL);
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
    v44 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v44 = BalanceConfig_TypeInfo;
    }
    v43 = 1;
    v42 = ManualSetCardLimitCount
        + (ManualSetCardLimitCount < 11 && ManualSetCardLimitCount != v44->static_fields->OtherImageLimitCount);
  }
  else
  {
LABEL_147:
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v39 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
    if ( !v39 )
      goto LABEL_144;
    v41 = *(_QWORD *)(v39 + 112);
    v40 = *(_QWORD *)(v39 + 120);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v94.fields.currentCryptoKey = v41;
    *(_QWORD *)&v94.fields.fakeValue = v40;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
    v43 = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyDispLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v45 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetDispLimitCount = ServantStatusListViewItem__get_ManualSetDispLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v47 = ManualSetDispLimitCount >= 11 ? ManualSetDispLimitCount : ManualSetDispLimitCount + 1;
  }
  else
  {
    v48 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v48 )
      goto LABEL_144;
    v47 = BasicHelper__DecryptValue_19216120(v48[8], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyCommandCardLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v49 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetCommandCardLimit = ServantStatusListViewItem__get_ManualSetCommandCardLimit(
                                  *(ServantStatusListViewItem_o **)p_isModify,
                                  0LL);
    v51 = ManualSetCommandCardLimit >= 11 ? ManualSetCommandCardLimit : ManualSetCommandCardLimit + 1;
  }
  else
  {
    v52 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v52 )
      goto LABEL_144;
    v51 = BasicHelper__DecryptValue_19216120(v52[9], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyIconLimitCount((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v53 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetIconLimitCount = ServantStatusListViewItem__get_ManualSetIconLimitCount(
                                *(ServantStatusListViewItem_o **)p_isModify,
                                0LL);
    v55 = ManualSetIconLimitCount >= 11 ? ManualSetIconLimitCount : ManualSetIconLimitCount + 1;
  }
  else
  {
    v56 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)p_isModify + 56LL);
    if ( !v56 )
      goto LABEL_144;
    v55 = BasicHelper__DecryptValue_19216120(v56[10], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyPortraitLimitCount(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   0LL);
  v57 = *(ServantStatusListViewItem_o **)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v87 = IsModifyLock;
  v88 = v53;
  if ( (IsModifyLock & 1) != 0 )
  {
    ManualSetPortraitLimitCount = ServantStatusListViewItem__get_ManualSetPortraitLimitCount(v57, 0LL);
    v59 = ManualSetPortraitLimitCount >= 11 ? ManualSetPortraitLimitCount : ManualSetPortraitLimitCount + 1;
  }
  else
  {
    userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v57->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_144;
    v59 = BasicHelper__DecryptValue_19216120(userSvtEntity[11], 0LL);
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag((ServantStatusListViewItem_o *)IsModifyLock, 0LL);
  v61 = *(ServantStatusListViewItem_o **)p_isModify;
  v86 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  commonFlag = v61->fields.svtCommonFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(v61, 0LL);
  v62 = *(ServantStatusListViewItem_o **)p_isModify;
  v85 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  battleVoice = v62->fields.changeVoiceFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyRandomLimitCountSetting(v62, 0LL);
  v63 = *(ServantStatusListViewItem_o **)p_isModify;
  v84 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  randomSettingOwn = v63->fields.isEnableOwnRandomSetting;
  randomSettingSupport = v63->fields.isEnableSupportRandomSetting;
  IsModifyLock = ServantStatusListViewItem__get_IsModifySupportRandomLimitCount(v63, 0LL);
  v83 = IsModifyLock;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  limitCountSupport = *(_DWORD *)(*(_QWORD *)p_isModify + 332LL);
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !IsModifyLock )
    goto LABEL_144;
  v80 = v59;
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  v64 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
  if ( !v64 )
    goto LABEL_144;
  v65 = *(_OWORD *)(v64 + 32);
  v66 = v49;
  v67 = *(_QWORD *)(IsModifyLock + 120);
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)(v64 + 16);
  *(_OWORD *)&v93.fields.fakeValue = v65;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v92 = v93;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v92, 0LL);
  if ( !*(_QWORD *)p_isModify )
    goto LABEL_144;
  isPush = v67 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(*(ServantStatusListViewItem_o **)p_isModify, 0LL);
  v68 = IsModifyLock;
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
  v81 = v55;
  imageLimitCount = v42;
  if ( LOBYTE(this->fields.newProfileList) )
  {
    IsModifyLock = *(_QWORD *)p_isModify;
    if ( !*(_QWORD *)p_isModify )
      goto LABEL_144;
    v69 = v51;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0LL);
  }
  else
  {
    v69 = v51;
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = *(_QWORD *)p_isModify;
  if ( !*(_QWORD *)p_isModify
    || (IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0LL),
        !*(_QWORD *)p_isModify) )
  {
LABEL_144:
    sub_B2C434(IsModifyLock, v17);
  }
  if ( v43 | v45 & 1 | v66 & 1 | v88 & 1 | v87 & 1 | v86 & 1 | v85 & 1 | v84 & 1 | v83 & 1 | v68 & 1 | (IsModifyFavoriteUserSvtId | (unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(*(ServantStatusListViewItem_o **)p_isModify, 0LL)) & 1 )
  {
    LOBYTE(this->fields.statusLoadAsset) = 1;
    v71 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v71,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    IsModifyLock = (int64_t)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                              v71,
                              (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
    if ( *(_QWORD *)p_isModify )
    {
      v72 = *(_QWORD *)(*(_QWORD *)p_isModify + 56LL);
      if ( v72 )
      {
        v73 = *(_OWORD *)(v72 + 32);
        v74 = (CardFavoriteRequest_o *)IsModifyLock;
        *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)(v72 + 16);
        *(_OWORD *)&v93.fields.fakeValue = v73;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v91 = v93;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v91, 0LL);
        if ( *(_QWORD *)p_isModify )
        {
          if ( v74 )
          {
            CardFavoriteRequest__beginRequest(
              v74,
              IsModifyLock,
              imageLimitCount,
              v47,
              v69,
              v81,
              v80,
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
  ServantStatusDialog__EndeRequest(this, (const MethodInfo *)v17);
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
  __int64 v14; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v17; // x19
  System_String_o *v18; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186023 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&assetType);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_9598/*"NoblePhantasm_"*/, v10);
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, v11);
    sub_B2C35C(&StringLiteral_12739/*"Servants_"*/, v12);
    byte_4186023 = 1;
  }
  v19 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v14);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0LL);
  result = 0LL;
  v19 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v17 = (System_String_o **)off_3DF1C20[assetType];
    v18 = System_Int32__ToString((int32_t)&v19, 0LL);
    return System_String__Concat_44305532(*v17, v18, 0LL);
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
  __int64 v8; // x1
  ServantStatusDialog_c *v9; // x0
  UnityEngine_GameObject_o *statusTabBase; // x0
  struct UISprite_o *v11; // x8
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v14; // x20
  unsigned __int128 v15; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_418600F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_ServantStatusDialog__Init_b__125_0__, v5);
    sub_B2C35C(&ServantStatusDialog_TypeInfo, v6);
    byte_418600F = 1;
  }
  v15 = 0uLL;
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v9 = ServantStatusDialog_TypeInfo;
    if ( (BYTE3(ServantStatusDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v9 = ServantStatusDialog_TypeInfo;
    }
    statusTabBase = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                  v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                                  (UnityEngine_Color_o *)&v15,
                                                  0LL);
    v11 = this->fields.pushSprite;
    if ( !v11 )
LABEL_21:
      sub_B2C434(statusTabBase, v8);
    *(_OWORD *)&v11->fields.bottomAnchor = v15;
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
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v12);
  }
  statusTabBase = (UnityEngine_GameObject_o *)this->fields.noticeNumber;
  if ( !statusTabBase )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0LL);
  statusTabBase = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)statusTabBase & 1, 0LL);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusDialog__Init_b__125_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v14, 2, 1, 0LL);
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

  if ( (byte_4186018 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186018 = 1;
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
      sub_B2C434(0LL, v4);
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  System_Action_o *v25; // x21

  if ( (byte_4186031 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectCharaGraph__, v10);
    sub_B2C35C(&Method_ServantStatusDialog__InitList_b__162_0__, v11);
    byte_4186031 = 1;
  }
  v12 = *(System_Action_o **)&this->fields.questId;
  if ( v12 )
  {
    *(_QWORD *)&this->fields.questId = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questId, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v12, 0LL);
  }
  BYTE1(this->fields.statusLoadAsset) = 0;
  BYTE4(this->fields.statusLoadAsset) = 0;
  servantStatusBattleConfirmDialog = this->fields.servantStatusBattleConfirmDialog;
  v14 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    0LL);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_10;
  servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel = (struct UILabel_o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantStatusBattleConfirmDialog[1].fields.buttonDecideLabel,
    (System_Int32_array **)v14,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ServantStatusCharaGraphListViewManager__SetMode_21737748(
    (ServantStatusCharaGraphListViewManager_o *)servantStatusBattleConfirmDialog,
    2,
    v23);
  if ( *((_BYTE *)&this->fields.currentMaskType + 4) )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__162_0__, 0LL);
    if ( battleTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(
        (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
        v25,
        0LL);
      return;
    }
LABEL_10:
    sub_B2C434(v15, v16);
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
  __int64 v12; // x8
  __int64 v13; // x8
  ServantCostumeMaster_o *v14; // x21
  signed int v15; // w25
  unsigned int v16; // w9
  int32_t v17; // w22
  BalanceConfig_c *v18; // x0
  ServantCostumeEntity_o *v19; // x23
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  ServantLimitAddEntity_o *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x23
  __int64 v28; // x24
  __int64 v29; // x8
  __int64 v31; // x0
  ServantCostumeEntity_o *v32; // [xsp+0h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4186059 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCostumeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&ServantCostumeEntity_TypeInfo, v7);
    sub_B2C35C(&ServantLimitAddEntity_TypeInfo, v8);
    byte_4186059 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  RandomGroupIndex = (ServantCostumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  v12 = *(_QWORD *)&this->fields.isModify;
  if ( !v12 )
LABEL_39:
    sub_B2C434(RandomGroupIndex, v11);
  v13 = *(_QWORD *)(v12 + 336);
  if ( v13 )
  {
    v14 = RandomGroupIndex;
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v13 + 24);
      if ( v15 > (int)v16 )
        break;
      if ( v15 )
      {
        if ( v15 - 1 >= v16 )
        {
          v31 = sub_B2C460(RandomGroupIndex);
          sub_B2C400(v31, 0LL);
        }
        v17 = *(_DWORD *)(v13 + 4LL * (v15 - 1) + 32);
      }
      else
      {
        v17 = 0;
      }
      v18 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( v17 <= v18->static_fields->ServantLimitMax )
      {
        v24 = (ServantLimitAddEntity_o *)sub_B2C42C(ServantLimitAddEntity_TypeInfo);
        ServantLimitAddEntity___ctor(v24, 0LL);
        entity = v24;
        v25 = *(_QWORD *)&this->fields.isModify;
        if ( !v25 )
          goto LABEL_39;
        v26 = *(_QWORD *)(v25 + 56);
        if ( !v26 )
          goto LABEL_39;
        v28 = *(_QWORD *)(v26 + 80);
        v27 = *(_QWORD *)(v26 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v28;
        *(_QWORD *)&v35.fields.fakeValue = v27;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v35,
                                                       0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantLimitAddMaster__TryGetEntity(
                                                       Master_WarQuestSelectionMaster,
                                                       &entity,
                                                       (int32_t)RandomGroupIndex,
                                                       v17,
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
        v19 = (ServantCostumeEntity_o *)sub_B2C42C(ServantCostumeEntity_TypeInfo);
        ServantCostumeEntity___ctor(v19, 0LL);
        v32 = v19;
        v20 = *(_QWORD *)&this->fields.isModify;
        if ( !v20 )
          goto LABEL_39;
        v21 = *(_QWORD *)(v20 + 56);
        if ( !v21 )
          goto LABEL_39;
        v23 = *(_QWORD *)(v21 + 80);
        v22 = *(_QWORD *)(v21 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v34.fields.currentCryptoKey = v23;
        *(_QWORD *)&v34.fields.fakeValue = v22;
        RandomGroupIndex = (ServantCostumeMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v34,
                                                       0LL);
        if ( !v14 )
          goto LABEL_39;
        RandomGroupIndex = (ServantCostumeMaster_o *)ServantCostumeMaster__TryGetEntity(
                                                       v14,
                                                       &v32,
                                                       (int32_t)RandomGroupIndex,
                                                       v17,
                                                       0LL);
        if ( ((unsigned __int8)RandomGroupIndex & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_39;
          if ( v32->fields.groupIndex )
            return 1;
        }
      }
      v29 = *(_QWORD *)&this->fields.isModify;
      if ( v29 )
      {
        v13 = *(_QWORD *)(v29 + 336);
        ++v15;
        if ( v13 )
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

  if ( (byte_418603B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418603B = 1;
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
  if ( (byte_418605A & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418605A = 1;
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
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&type);
  }
}


void __fastcall ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_418605D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418605D = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B2C434(0LL, method);
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
  if ( (byte_418604C & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418604C = 1;
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
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_418604B & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418604B = 1;
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
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&dispLv);
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
  ServantStatusDialog_EndDelegate_o *v19; // x22
  System_Action_o *v20; // x23
  ServantLeaderInfo_o *v21; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v23; // x20
  int v24; // w24
  WebViewManager_o *v25; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  System_Action_o *v27; // x23
  int32_t v28; // w1
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v30; // x21
  bool v31; // w3
  CommonUI_o *v32; // x0
  CommandCodeEntity_o *v33; // x2

  v4 = this;
  if ( (byte_4186053 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__, v7);
    sub_B2C35C(&Method_ServantStatusDialog_EndOpenEquipStatus__, v8);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__, v9);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectEquipStatus__, v10);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_4186053 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v19,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0LL);
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_17986692(Instance, 20, v17, v19, v20, 0LL);
        return;
      }
LABEL_30:
      sub_B2C434(this, *(_QWORD *)&index);
    }
    goto LABEL_19;
  }
  v21 = *(ServantLeaderInfo_o **)(v14 + 88);
  if ( v21 )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(v21, index, 0LL);
    if ( CommandCodeEntity )
    {
      v23 = CommandCodeEntity;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v24 = *(_DWORD *)&v4->fields.isInitTab;
      v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v24 == 4 )
      {
        v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v26,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v27, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v25 )
          goto LABEL_30;
        v28 = 22;
      }
      else
      {
        v26 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v26,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0LL);
        v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v27, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
        if ( !v25 )
          goto LABEL_30;
        if ( v24 != 5 )
        {
          v28 = 25;
          v32 = (CommonUI_o *)v25;
          v33 = v23;
          v31 = 0;
          goto LABEL_29;
        }
        v28 = 23;
      }
      v31 = 1;
      v32 = (CommonUI_o *)v25;
      v33 = v23;
LABEL_29:
      CommonUI__OpenServantEquipStatusDialog_17987504(v32, v28, v33, v31, v26, v27, 0LL);
      return;
    }
  }
LABEL_19:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  profileTabListViewManager = (ServantStatusListViewManager_o *)v4->fields.profileTabListViewManager;
  v30 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_30;
  ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v30, 0LL);
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
  if ( (byte_418604F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418604F = 1;
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
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_418604E & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418604E = 1;
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
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&dispLv);
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
  CommonConfirmDialog_ClickDelegate_o *v96; // x25
  __int64 v97; // x20
  __int64 v98; // x8
  __int128 v99; // q0
  const MethodInfo *v100; // x1
  __int64 v101; // x0
  __int64 v102; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  v2 = this;
  if ( (byte_418605E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&object___TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Rarity_TypeInfo, v14);
    sub_B2C35C(&Method_ServantStatusDialog_OnConfirmSelectFavorite__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&SoundManager_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_11984/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v20);
    sub_B2C35C(&StringLiteral_11983/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v21);
    sub_B2C35C(&StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v22);
    this = (ServantStatusDialog_o *)sub_B2C35C(&StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v23);
    byte_418605E = 1;
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
    *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v105.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v104 = v105;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v104, 0LL) )
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
      v97 = *(_QWORD *)&v2->fields.isModify;
      if ( v97 )
      {
        v98 = *(_QWORD *)(v97 + 56);
        if ( v98 )
        {
          v99 = *(_OWORD *)(v98 + 32);
          *(_OWORD *)&v105.fields.currentCryptoKey = *(_OWORD *)(v98 + 16);
          *(_OWORD *)&v105.fields.fakeValue = v99;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v103 = v105;
          *(_QWORD *)(v97 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v103, 0LL);
          ServantStatusDialog__SetMark(v2, v100);
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
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_93;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v27,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_93;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
    *(_QWORD *)&v106.fields.currentCryptoKey = v31;
    *(_QWORD *)&v106.fields.fakeValue = v30;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v106, 0LL);
    if ( !v29 )
      goto LABEL_93;
    v32 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v29,
                               (int32_t)this,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v32 )
      goto LABEL_93;
    v33 = this;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37[6], 0LL);
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
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
    v42 = sub_B2C374(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v42 )
      goto LABEL_93;
    v50 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v42 + 24) )
        goto LABEL_94;
      *(_QWORD *)(v42 + 32) = v50;
      sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 32), v50, v44, v45, v46, v47, v48, v49);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v32, 0LL);
      v57 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v42 + 24) <= 1u )
          goto LABEL_94;
        *(_QWORD *)(v42 + 40) = v57;
        sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 40), v57, v51, v52, v53, v54, v55, v56);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v32, v35, -1, 0LL);
        v64 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v42 + 24) <= 2u )
            goto LABEL_94;
          *(_QWORD *)(v42 + 48) = v64;
          sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 48), v64, v58, v59, v60, v61, v62, v63);
          v65 = *(_QWORD *)&v2->fields.isModify;
          if ( !v65 )
            goto LABEL_93;
          this = *(ServantStatusDialog_o **)(v65 + 56);
          if ( !this )
            goto LABEL_93;
          v66 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v66, 0LL);
          v73 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v42 + 24) <= 3u )
              goto LABEL_94;
            *(_QWORD *)(v42 + 56) = v73;
            sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 56), v73, v67, v68, v69, v70, v71, v72);
            v74 = *(_QWORD *)&v2->fields.isModify;
            if ( !v74 )
              goto LABEL_93;
            this = *(ServantStatusDialog_o **)(v74 + 128);
            if ( !this )
              goto LABEL_93;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v81 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v42 + 24) <= 4u )
                goto LABEL_94;
              *(_QWORD *)(v42 + 64) = v81;
              sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 64), v81, v75, v76, v77, v78, v79, v80);
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
                || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v42 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v42 + 24) > 5u )
                {
                  *(_QWORD *)(v42 + 72) = v89;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 72), v89, v83, v84, v85, v86, v87, v88);
                  this = (ServantStatusDialog_o *)System_String__Format_44384256(v41, (System_Object_array *)v42, 0LL);
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
                      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                      v90 = System_String__Concat_44305532(v90, v91, 0LL);
                    }
                  }
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                  v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v96,
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
                    CommonUI__OpenConfirmDialog_17970624(
                      Instance,
                      v93,
                      v90,
                      v94,
                      v95,
                      v96,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
LABEL_93:
                  sub_B2C434(this, method);
                }
LABEL_94:
                v101 = sub_B2C460(this);
                sub_B2C400(v101, 0LL);
              }
            }
          }
        }
      }
    }
    v102 = sub_B2C454();
    sub_B2C400(v102, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_418605C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418605C = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v3 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v3 )
      sub_B2C434(0LL, method);
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
  if ( (byte_4186052 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&costumeIndex);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4186052 = 1;
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
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
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
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&costumeIndex);
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
  if ( (byte_4186051 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&dispLv);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4186051 = 1;
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
      v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    sub_B2C434(this, *(_QWORD *)&dispLv);
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
  __int64 v28; // x8
  UserServantEntity_o *Entity; // x24
  ServantStatusDialog_o *v30; // x20
  __int64 v31; // x21
  __int64 v32; // x22
  ServantEntity_o *v33; // x23
  ServantStatusDialog_o *v34; // x20
  int32_t v35; // w21
  int32_t v36; // w25
  __int64 v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  int32_t v39; // w21
  int32_t v40; // w0
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *v42; // x20
  __int64 v43; // x21
  int32_t Rarity; // w24
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x24
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x23
  __int64 v66; // x8
  int32_t v67; // w0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x23
  __int64 v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  __int64 v83; // x8
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_String_o *v91; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  System_String_o *v95; // x24
  CommonConfirmDialog_ClickDelegate_o *v96; // x25
  __int64 v97; // x20
  __int64 v98; // x8
  __int128 v99; // q0
  __int64 v100; // x0
  __int64 v101; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v2 = this;
  if ( (byte_4186060 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&object___TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Rarity_TypeInfo, v14);
    sub_B2C35C(&Method_ServantStatusDialog_OnConfirmSelectPush__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&SoundManager_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v21);
    this = (ServantStatusDialog_o *)sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v22);
    byte_4186060 = 1;
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
    *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
    *(_OWORD *)&v104.fields.fakeValue = v26;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v103 = v104;
    if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v103, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v28 = *(_QWORD *)&v2->fields.isModify;
      if ( v28 )
      {
        *(_QWORD *)(v28 + 168) = 0LL;
LABEL_85:
        ServantStatusDialog__SetMark(v2, method);
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
      v97 = *(_QWORD *)&v2->fields.isModify;
      if ( v97 )
      {
        v98 = *(_QWORD *)(v97 + 56);
        if ( v98 )
        {
          v99 = *(_OWORD *)(v98 + 32);
          *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)(v98 + 16);
          *(_OWORD *)&v104.fields.fakeValue = v99;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v102 = v104;
          *(_QWORD *)(v97 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v102, 0LL);
          goto LABEL_85;
        }
      }
LABEL_86:
      sub_B2C434(this, method);
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_86;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
               v27,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_86;
    v30 = this;
    v32 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v31 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v105.fields.currentCryptoKey = v32;
    *(_QWORD *)&v105.fields.fakeValue = v31;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v105, 0LL);
    if ( !v30 )
      goto LABEL_86;
    v33 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)v30,
                               (int32_t)this,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v33 )
      goto LABEL_86;
    v34 = this;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33->fields.id, 0LL);
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      Entity->fields.limitCount,
                                      0LL);
    if ( !v34 )
      goto LABEL_86;
    this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                      (ServantLimitImageMaster_o *)v34,
                                      v35,
                                      (int32_t)this,
                                      0LL);
    if ( !*(_QWORD *)&v2->fields.isModify )
      goto LABEL_86;
    v36 = (int)this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                      *(ServantStatusListViewItem_o **)&v2->fields.isModify,
                                      0LL);
    v37 = *(_QWORD *)&v2->fields.isModify;
    if ( !v37 )
      goto LABEL_86;
    v38 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v37 + 56);
    if ( !v38 )
      goto LABEL_86;
    v39 = (int)this;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v38[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)v34,
                                   v39,
                                   v40,
                                   0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v43 = sub_B2C374(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v43 )
      goto LABEL_86;
    v51 = (System_Int32_array **)this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
    {
      if ( !*(_DWORD *)(v43 + 24) )
        goto LABEL_87;
      *(_QWORD *)(v43 + 32) = v51;
      sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 32), v51, v45, v46, v47, v48, v49, v50);
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(v33, 0LL);
      v58 = (System_Int32_array **)this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v43 + 24) <= 1u )
          goto LABEL_87;
        *(_QWORD *)(v43 + 40) = v58;
        sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 40), v58, v52, v53, v54, v55, v56, v57);
        this = (ServantStatusDialog_o *)ServantEntity__getName(v33, v36, -1, 0LL);
        v65 = (System_Int32_array **)this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
        {
          if ( *(_DWORD *)(v43 + 24) <= 2u )
            goto LABEL_87;
          *(_QWORD *)(v43 + 48) = v65;
          sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 48), v65, v59, v60, v61, v62, v63, v64);
          v66 = *(_QWORD *)&v2->fields.isModify;
          if ( !v66 )
            goto LABEL_86;
          this = *(ServantStatusDialog_o **)(v66 + 56);
          if ( !this )
            goto LABEL_86;
          v67 = UserServantEntity__getRarity((UserServantEntity_o *)this, 0LL);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(v67, 0LL);
          v74 = (System_Int32_array **)this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v43 + 24) <= 3u )
              goto LABEL_87;
            *(_QWORD *)(v43 + 56) = v74;
            sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 56), v74, v68, v69, v70, v71, v72, v73);
            v75 = *(_QWORD *)&v2->fields.isModify;
            if ( !v75 )
              goto LABEL_86;
            this = *(ServantStatusDialog_o **)(v75 + 128);
            if ( !this )
              goto LABEL_86;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0LL);
            v82 = (System_Int32_array **)this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v43 + 24) <= 4u )
                goto LABEL_87;
              *(_QWORD *)(v43 + 64) = v82;
              sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 64), v82, v76, v77, v78, v79, v80, v81);
              v83 = *(_QWORD *)&v2->fields.isModify;
              if ( !v83 )
                goto LABEL_86;
              this = *(ServantStatusDialog_o **)(v83 + 128);
              if ( !this )
                goto LABEL_86;
              this = (ServantStatusDialog_o *)ServantEntity__getName(
                                                (ServantEntity_o *)this,
                                                ServantLimitCountSealAfter,
                                                -1,
                                                0LL);
              v90 = (System_Int32_array **)this;
              if ( !this
                || (this = (ServantStatusDialog_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v43 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v43 + 24) > 5u )
                {
                  *(_QWORD *)(v43 + 72) = v90;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 72), v90, v84, v85, v86, v87, v88, v89);
                  v91 = System_String__Format_44384256(v42, (System_Object_array *)v43, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v96,
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
                    CommonUI__OpenConfirmDialog_17970624(
                      Instance,
                      v93,
                      v91,
                      v94,
                      v95,
                      v96,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0LL);
                    return;
                  }
                  goto LABEL_86;
                }
LABEL_87:
                v100 = sub_B2C460(this);
                sub_B2C400(v100, 0LL);
              }
            }
          }
        }
      }
    }
    v101 = sub_B2C454();
    sub_B2C400(v101, 0LL);
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

  if ( (byte_4186056 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&index);
    byte_4186056 = 1;
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
  __int64 v26; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v28; // x21
  int32_t QuestType; // w22
  QuestEntity_o *v30; // x23
  System_String_o *v31; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  Il2CppObject *BattleName; // x0
  int32_t warId; // w21
  WarEntity_o *WarEntityByWarID; // x0
  bool v36; // w22
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v38; // x21
  CommonUI_o *Instance; // x21
  System_String_o *v40; // x0
  __int64 *v41; // x8
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x20
  System_String_o *v45; // x23
  System_String_o *v46; // x24
  CommonConfirmDialog_ClickDelegate_o *v47; // x25

  if ( (byte_4186054 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_ServantStatusDialog_OnConfirmServantQuest__, v9);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v16);
    sub_B2C35C(&StringLiteral_12031/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_12033/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/, v18);
    sub_B2C35C(&StringLiteral_12034/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_12027/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_12030/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, v21);
    sub_B2C35C(&StringLiteral_12032/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, v22);
    sub_B2C35C(&StringLiteral_12028/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v23);
    sub_B2C35C(&StringLiteral_12029/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v24);
    byte_4186054 = 1;
  }
  if ( !this->fields.individualityCallbackFunc && !this->fields.resultCallbackFunc )
    goto LABEL_51;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v38 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v38,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v38, 0LL);
      return;
    }
    goto LABEL_48;
  }
  v28 = QuestInfo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(v28, 0LL);
  Mine = MapControl_QuestInfo__GetMine(v28, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v30 = (QuestEntity_o *)Mine;
  this->fields.tabKind = *((_DWORD *)Mine + 4);
  Mine = QuestEntity__getQuestName((QuestEntity_o *)Mine, 0LL);
  if ( !Mine )
    goto LABEL_48;
  v31 = (System_String_o *)Mine;
  if ( System_String__Contains((System_String_o *)Mine, (System_String_o *)StringLiteral_23539/*"{0}"*/, 0LL) )
  {
    Mine = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Mine )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Mine,
                                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    Mine = (void *)QuestEntity__getServantId(v30, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Mine = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int32_t)Mine,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Mine )
      goto LABEL_48;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Mine, 0, -1, 0LL);
    v31 = System_String__Format(v31, BattleName, 0LL);
  }
  if ( QuestType == 3 )
  {
    warId = v28->fields.warId;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Mine = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Mine )
    {
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Mine, warId, 0LL);
      if ( WarEntityByWarID )
        v36 = !WarEntity__IsFolder(WarEntityByWarID, 0LL);
      else
        v36 = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v36 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0LL);
        v41 = &StringLiteral_12029/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0LL);
        v41 = &StringLiteral_12031/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
      }
      goto LABEL_46;
    }
LABEL_48:
    sub_B2C434(Mine, v26);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0LL);
  v41 = &StringLiteral_12033/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_46:
  v42 = v40;
  v43 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
  v44 = System_String__Format(v43, (Il2CppObject *)v31, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v47,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0LL);
  if ( !Instance )
    goto LABEL_48;
  CommonUI__OpenConfirmDialog_17970624(Instance, v42, v44, v45, v46, v47, 26, 0, 0, 0LL);
}


void __fastcall ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4186044 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186044 = 1;
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

  if ( (byte_4186043 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186043 = 1;
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

  if ( (byte_4186042 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186042 = 1;
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

  if ( (byte_4186045 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186045 = 1;
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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v27; // x21
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v30; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x21
  CommonUI_o *v35; // x22
  System_String_o *Empty; // x21
  System_String_o *v37; // x23
  System_String_o *v38; // x24
  CommonConfirmDialog_ClickDelegate_o *v39; // x25

  if ( (byte_4186055 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v7);
    sub_B2C35C(&ServantStatusListViewItemDrawButton_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&string_TypeInfo, v11);
    sub_B2C35C(&Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__, v12);
    sub_B2C35C(&ServantStatusDialog___c__DisplayClass202_0_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_12036/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_12037/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, v15);
    sub_B2C35C(&StringLiteral_12038/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, v16);
    byte_4186055 = 1;
  }
  v17 = sub_B2C42C(ServantStatusDialog___c__DisplayClass202_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass202_0___ctor((ServantStatusDialog___c__DisplayClass202_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_27;
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 24) = type;
  if ( !BYTE2(this->fields.statusLoadAsset) && !BYTE1(this->fields.statusLoadAsset) )
  {
    v18 = *(ServantStatusListViewItem_o **)&this->fields.isModify;
    if ( !v18 )
      goto LABEL_27;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(v18, 0LL) == *(_DWORD *)(v17 + 24) )
    {
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v27, 0LL);
        return;
      }
LABEL_27:
      sub_B2C434(v18, v19);
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
    v30 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v17 + 24), 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0LL);
    v32 = System_String__Format_44301068(v31, TDSpeedLocalization, v30, 0LL);
    v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v34 = **(_QWORD **)(v33 + 192);
    if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
      sub_AC505C(v34);
    v35 = **(CommonUI_o ***)(v34 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0LL);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0LL);
    v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v39,
      (Il2CppObject *)v17,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__0__,
      0LL);
    if ( !v35 )
      goto LABEL_27;
    CommonUI__OpenConfirmDecideDlg(v35, Empty, v32, v37, v38, v39, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 0LL);
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
  System_Action_o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_418605F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, v6);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418605F = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&v4->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B2C434(this, isDecide);
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v14 = v15;
    *(_QWORD *)(v8 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_17971588(Instance, v13, 0LL);
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
  System_Action_o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4186061 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__, v6);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4186061 = 1;
  }
  if ( isDecide )
  {
    v8 = *(_QWORD *)&v4->fields.isModify;
    if ( !v8 || (v9 = *(_QWORD *)(v8 + 56)) == 0 )
LABEL_12:
      sub_B2C434(this, isDecide);
    v10 = *(_OWORD *)(v9 + 32);
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
    *(_OWORD *)&v15.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v14 = v15;
    *(_QWORD *)(v8 + 168) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL);
    ServantStatusDialog__SetMark(v4, v11);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_17971588(Instance, v13, 0LL);
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
  __int64 v15; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v17; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v20; // x21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v22; // x21
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  CommonUI_o *v25; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_418605B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v7);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B2C35C(&Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v12);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_418605B = 1;
  }
  if ( !isDecide )
  {
    this->fields.tabKind = 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_17971588(Instance, v20, 0LL);
      profileTabListViewManager = this->fields.profileTabListViewManager;
      v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
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
    }
    goto LABEL_31;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v14 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v14 )
    goto LABEL_31;
  QuestInfo = QuestTree__GetQuestInfo(v14, this->fields.tabKind, 0LL);
  v17 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0LL) )
    {
      v14 = (QuestTree_o *)v17->fields._WarInfo_k__BackingField;
      if ( !v14 )
        goto LABEL_31;
      LODWORD(v17) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v14, 0LL);
    }
    else
    {
      LODWORD(v17) = 0;
    }
  }
  v14 = (QuestTree_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v14 )
    goto LABEL_31;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v14, (int32_t)v17, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C6E )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
    byte_4183C6E = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__209_0__, 0LL);
  if ( !v25 )
LABEL_31:
    sub_B2C434(v14, v15);
  CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v28, 0LL);
}


void __fastcall ServantStatusDialog__OnDestroy(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_418603C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418603C = 1;
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
      sub_B2C434(0LL, v4);
    BattleFBXComponent__RevertShaderFloatProperty(v5, 0LL);
  }
}


void __fastcall ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4186064 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_2727/*"Base/TitlePrefab/BackObj/BtnBg"*/, v4);
    byte_4186064 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_2727/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v7 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      }
      AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(transform, v6);
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
  __int64 v10; // x1
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

  if ( (byte_4186046 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectBattle__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4186046 = 1;
  }
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectBattle__,
      0LL);
    if ( !voiceTabListViewManager
      || (voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v8,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v8,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          ServantStatusBattleListViewManager__SetMode_21723792(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v17,
            v18),
          (v19 = *(_QWORD *)&this->fields.isModify) == 0) )
    {
      sub_B2C434(v9, v10);
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
  __int64 v8; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4186037 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4186037 = 1;
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
    ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(gameObject, v8);
  CommonUI__CloseServantEquipStatusDialog(Instance, v10, 0LL);
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
  __int64 v8; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4186035 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4186035 = 1;
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
    ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)gameObject, 8, 0LL);
    LOBYTE(this->fields.statusLoadAsset) = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(gameObject, v8);
  CommonUI__CloseServantEquipStatusDialog(Instance, v10, 0LL);
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
  __int64 v8; // x1

  if ( (byte_4186039 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectFlavor__, v4);
    byte_4186039 = 1;
  }
  battleTabListViewManager = this->fields.battleTabListViewManager;
  v6 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0LL);
  if ( !battleTabListViewManager )
    sub_B2C434(v7, v8);
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
  ServantStatusListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21
  __int64 v17; // x8
  _QWORD *v18; // x8
  __int64 v19; // x8
  int64_t v20; // x21
  CommonUI_o *v21; // x20
  ServantStatusDialog_EndDelegate_o *v22; // x22
  System_Action_o *v23; // x23
  __int64 v24; // x8
  __int64 v25; // x8
  __int128 v26; // q1
  int v27; // w24
  __int64 v28; // x8
  __int64 v29; // x8
  EquipTargetInfo_o *v30; // x21
  CommonUI_o *v31; // x20
  ServantStatusDialog_EndDelegate_o *v32; // x22
  System_Action_o *v33; // x23
  int32_t v34; // w1
  ServantStatusListViewManager_o *v35; // x20
  ServantStatusListViewManager_CallbackFunc_o *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-50h]

  v5 = result;
  v6 = this;
  if ( (byte_4186034 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_ServantStatusDialog_EndOpenEquipStatus__, v10);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectEquipStatus__, v11);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    this = (ServantStatusDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v14);
    byte_4186034 = 1;
  }
  if ( !BYTE2(v6->fields.statusLoadAsset) )
  {
    if ( BYTE1(v6->fields.statusLoadAsset) )
    {
      profileTabListViewManager = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
      v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0LL);
      if ( profileTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(profileTabListViewManager, 1, v16, 0LL);
        return;
      }
LABEL_61:
      sub_B2C434(this, *(_QWORD *)&result);
    }
    if ( v5 == 1 )
    {
      v17 = *(_QWORD *)&v6->fields.isModify;
      if ( !v17 )
        goto LABEL_61;
      if ( *(_BYTE *)(v17 + 121) )
        v5 = 1;
      else
        v5 = 2;
    }
    switch ( v5 )
    {
      case 1:
      case 2:
        v18 = *(_QWORD **)&v6->fields.isModify;
        if ( !v18 )
          goto LABEL_61;
        if ( v18[7] && (__int64)v18[44] >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = *(_QWORD *)&v6->fields.isModify;
          if ( !v19 )
            goto LABEL_61;
          v20 = *(_QWORD *)(v19 + 352);
          v21 = (CommonUI_o *)this;
          v22 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v22,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0LL);
          v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v23, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
          if ( !v21 )
            goto LABEL_61;
          CommonUI__OpenServantEquipStatusDialog(v21, 11, v20, 1, v22, v23, 0LL);
        }
        else
        {
          v24 = v18[11];
          if ( !v24 )
            goto LABEL_36;
          v25 = *(_QWORD *)(v24 + 144);
          if ( !v25 )
            goto LABEL_36;
          v26 = *(_OWORD *)(v25 + 40);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v25 + 24);
          *(_OWORD *)&v40.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v39 = v40;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v39, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            v27 = *(_DWORD *)&v6->fields.isInitTab;
            if ( v27 == 4 )
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v28 = *(_QWORD *)&v6->fields.isModify;
              if ( !v28 )
                goto LABEL_61;
              v29 = *(_QWORD *)(v28 + 88);
              if ( !v29 )
                goto LABEL_61;
              v30 = *(EquipTargetInfo_o **)(v29 + 144);
              v31 = (CommonUI_o *)this;
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v31 )
                goto LABEL_61;
              v34 = 13;
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v37 = *(_QWORD *)&v6->fields.isModify;
              if ( !v37 )
                goto LABEL_61;
              v38 = *(_QWORD *)(v37 + 88);
              if ( !v38 )
                goto LABEL_61;
              v30 = *(EquipTargetInfo_o **)(v38 + 144);
              v31 = (CommonUI_o *)this;
              v32 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v32,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0LL);
              v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0LL);
              if ( !v31 )
                goto LABEL_61;
              if ( v27 == 5 )
                v34 = 14;
              else
                v34 = 16;
            }
            CommonUI__OpenServantEquipStatusDialog_17986440(v31, v34, v30, v32, v33, 0LL);
          }
          else
          {
LABEL_36:
            v35 = (ServantStatusListViewManager_o *)v6->fields.profileTabListViewManager;
            v36 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
            ServantStatusListViewManager_CallbackFunc___ctor(
              v36,
              (Il2CppObject *)v6,
              (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
              0LL);
            if ( !v35 )
              goto LABEL_61;
            ServantStatusListViewManager__SetMode(v35, 1, v36, 0LL);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x24
  ServantVoiceMaster_o *v19; // x23
  ServantStatusVoiceListViewItem_o *v20; // x25
  int32_t v21; // w22
  int32_t v22; // w21
  System_String_o *v23; // x24
  System_String_o *LabelName; // x0
  System_String_o *v25; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v27; // x5
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v29; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v31; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418603A & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v9);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectVoice__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v12);
    byte_418603A = 1;
  }
  VoicePrefix = 0;
  if ( !BYTE2(this->fields.statusLoadAsset) )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    v14 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
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
        ServantStatusDialog__StopVoice(this, v17);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        v19 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_58;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.servantNameRangeLabel;
        if ( !Instance )
          goto LABEL_58;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0LL);
        if ( !Instance )
          goto LABEL_58;
        v20 = (ServantStatusVoiceListViewItem_o *)Instance;
        v21 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_58;
        v22 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        MasterData_WarQuestSelectionMaster,
                        v21,
                        (int32_t)Instance,
                        0LL);
        v23 = System_Int32__ToString((int32_t)&VoicePrefix, 0LL);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v20, 0LL);
        v25 = System_String__Concat_44307816(v23, (System_String_o *)StringLiteral_15905/*"_"*/, LabelName, 0LL);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList(v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v20, 0LL);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_50;
              if ( !v20->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v20, 0LL);
                  if ( v19 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList_31428620(
                                      v19,
                                      v21,
                                      v22,
                                      (int32_t)Instance,
                                      0LL);
                    goto LABEL_52;
                  }
LABEL_58:
                  sub_B2C434(Instance, v16);
                }
                if ( !v19 )
                  goto LABEL_58;
                if ( !v20->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(v19, v21, v22, 0LL);
                  goto LABEL_52;
                }
LABEL_49:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(v19, v21, v22, v25, 0LL);
                goto LABEL_52;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v20, 0LL);
                  if ( v19 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v19, v21, (int32_t)Instance, 0LL);
LABEL_52:
                    ServantStatusDialog__PlayChrVoice_21793128(this, v21, v22, HomeVoiceList, result, v27);
                    return;
                  }
                  goto LABEL_58;
                }
LABEL_50:
                if ( v19 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList(v19, v21, v22, v25, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
              if ( !v20->fields.genderFlag && !v20->fields.voiceLabelSpecification )
              {
                if ( v19 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(v19, v21, v22, 2, 1, 0LL);
                  goto LABEL_52;
                }
                goto LABEL_58;
              }
            }
            if ( !v19 )
              goto LABEL_58;
            goto LABEL_49;
          case 3:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList(v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 4:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList(v19, v21, v22, 0LL);
            goto LABEL_52;
          case 5:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList(v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 6:
            if ( !v19 )
              goto LABEL_58;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList(v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayBattleVoice(this, v21, v22, BattleVoiceList, result, v29);
            return;
          case 7:
            if ( !v19 )
              goto LABEL_58;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList(v19, v21, v22, v25, 0LL);
            ServantStatusDialog__PlayNpVoice(this, v21, v22, NpVoiceList, result, v31);
            return;
          case 8:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          case 9:
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList(v19, v21, v22, v25, 0LL);
            goto LABEL_52;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v20, 0LL);
            if ( !v19 )
              goto LABEL_58;
            HomeVoiceList = ServantVoiceMaster__getEntity_31426160(v19, (int32_t)Instance, v21, v22, v25, 0LL);
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
  ServantStatusListViewManager_CallbackFunc_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x22
  __int64 v25; // x22
  CommonUI_o *v26; // x22
  System_String_o *v27; // x23
  CommonConfirmDialog_ClickDelegate_o *v28; // x24

  if ( (byte_4186040 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&maskType);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&OptionManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v8);
    sub_B2C35C(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_12002/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, v12);
    sub_B2C35C(&StringLiteral_12000/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    sub_B2C35C(&StringLiteral_11999/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v15);
    byte_4186040 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
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
    v20 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0LL);
    if ( profileTabListViewManager )
    {
      ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v20, 0LL);
      return;
    }
LABEL_32:
    sub_B2C434(v21, v22);
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
    v23 = *(_QWORD *)&this->fields.isModify;
    if ( v23 && *(_BYTE *)(v23 + 329) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v24 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v25 = **(_QWORD **)(v24 + 192);
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        sub_AC505C(v25);
      v26 = **(CommonUI_o ***)(v25 + 184);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0LL);
      v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__181_0__,
        0LL);
      if ( !v26 )
        goto LABEL_32;
      CommonUI__OpenConfirmDecideDlg(
        v26,
        (System_String_o *)StringLiteral_1/*""*/,
        v27,
        v16,
        v18,
        v28,
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
  ServantStatusListViewItem_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4185FF5 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FF5 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v20, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21762560(
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
  ServantStatusListViewItem_o *v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4185FF6 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FF6 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v20, partyItem, member, callback != 0LL, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21762764(
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

  if ( (byte_4185FF7 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FF7 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)partyItem,
    *(System_String_array ***)&member,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34128236(v20, partyItem, member, 0, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21762964(
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
  __int64 v16; // x1
  __int64 *v17; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4185FF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185FF8 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B2C434(Instance, v16);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)*v17);
  ServantStatusDialog__Open_21763256(this, kind, Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21763256(
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

  if ( (byte_4185FFC & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FFC = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v22 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v22, userSvtEntity, 0LL, 0LL, 0, v20, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21763540(
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
  __int64 v16; // x1
  __int64 *v17; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4185FF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185FF9 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B2C434(Instance, v16);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)*v17);
  ServantStatusDialog__Open_21763832(this, kind, Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21763832(
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

  if ( (byte_4185FFD & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FFD = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.resultCallbackFunc = (struct ServantStatusDialog_ResultDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v22 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v22, userSvtEntity, 0LL, 0LL, callback != 0LL, v20, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21764120(
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
  __int64 v16; // x1
  __int64 *v17; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4185FFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185FFA = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B2C434(Instance, v16);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)*v17);
  ServantStatusDialog__Open_21764412(this, kind, Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21764412(
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

  if ( (byte_4185FFE & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FFE = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v22 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v22, userSvtEntity, 0LL, 0LL, 0, v20, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21764696(
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
  __int64 v16; // x1
  __int64 *v17; // x8
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v19; // x5

  if ( (byte_4185FFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185FFB = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v17 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_B2C434(Instance, v16);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v17 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)*v17);
  ServantStatusDialog__Open_21764988(this, kind, Entity, callback, openCallback, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21764988(
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

  if ( (byte_4185FFF & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4185FFF = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v22 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v22, userSvtEntity, 0LL, 0LL, callback != 0LL, v20, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21765380(
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
  __int64 v15; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v17; // x7

  if ( (byte_4186000 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4186000 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v15);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_21765588(this, kind, Entity, equipIdList, 0LL, callback, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21765588(
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

  if ( (byte_4186001 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186001 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v24 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v24, userSvtEntity, equipIdList, questRestrictionInfo, 0, v22, v23, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21765888(
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

  if ( (byte_4186002 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186002 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v24 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(v24, userSvtEntity, equipIdList, questRestrictionInfo, 0, v22, v23, 0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21766188(
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
  int v21; // w8
  bool v22; // w24
  bool v23; // w25
  ServantStatusListViewItem_o *v24; // x26
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4186003 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186003 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)equipIdList,
    (System_Boolean_array **)questRestrictionInfo,
    (System_Int32_array **)callback,
    (System_Int32_array *)openCallback,
    (System_Int32_array *)method);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v24 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34129844(
    v24,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0LL,
    v22,
    v23,
    0LL);
  *(_QWORD *)&this->fields.isModify = v24;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21766492(
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
  __int64 v16; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v18; // x6

  if ( (byte_4186004 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4186004 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v16);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_21766708(this, kind, Entity, isUse, callback, openCallback, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21766708(
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

  if ( (byte_4186005 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186005 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34132124(v20, userSvtEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21766904(
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

  if ( (byte_4186006 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186006 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v21 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34133932(v21, userSvtCollectionEntity, 0, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21767136(
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

  if ( (byte_4186007 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186007 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    *(System_String_array ***)&imageLimitCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v22 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34135616(v22, userSvtCollectionEntity, imageLimitCount, 0, v21, 0LL);
  *(_QWORD *)&this->fields.isModify = v22;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21767384(
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

  if ( (byte_4186008 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186008 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.individualityCallbackFunc = (struct ServantStatusDialog_EndIndividualityDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.individualityCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userSvtCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
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
  v21 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34133932(v21, userSvtCollectionEntity, callback != 0LL, v20, 0LL);
  *(_QWORD *)&this->fields.isModify = v21;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21767620(
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

  if ( (byte_4186009 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_4186009 = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)servantLeaderInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34137056(v19, servantLeaderInfo, kind != 7, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21767808(
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

  if ( (byte_418600A & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_418600A = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)equipTargetInfo,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34138768(v19, equipTargetInfo, kind == 19, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21767996(
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

  if ( (byte_418600B & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_418600B = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)commandCodeEntity,
    (System_String_array **)isUse,
    (System_Boolean_array **)callback,
    (System_Int32_array **)openCallback,
    (System_Int32_array *)method,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34139596(v20, commandCodeEntity, isUse, 0LL);
  *(_QWORD *)&this->fields.isModify = v20;
  sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__Open_21768192(
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

  if ( (byte_418600C & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_418600C = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34139992(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21768372(
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

  if ( (byte_418600D & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_418600D = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.openCallbackFunc = (struct System_Action_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34139992(v19, userCommandCodeEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B2C2F8(
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
void __fastcall ServantStatusDialog__Open_21768552(
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

  if ( (byte_418600E & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewItem_TypeInfo, *(_QWORD *)&kind);
    byte_418600E = 1;
  }
  *(_DWORD *)&this->fields.isInitTab = kind;
  this->fields.formationCallbackFunc = (struct ServantStatusDialog_FormationEndDelegate_o *)callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.formationCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)userCommandCodeCollectionEntity,
    (System_String_array **)callback,
    (System_Boolean_array **)openCallback,
    (System_Int32_array **)method,
    v6,
    v7);
  *(_QWORD *)&this->fields.questId = openCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questId,
    (System_Int32_array **)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_B2C42C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34141128(v19, userCommandCodeCollectionEntity, 0LL);
  *(_QWORD *)&this->fields.isModify = v19;
  sub_B2C2F8(
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
  __int64 v25; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v27; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x22
  unsigned int localScale; // s0
  float v30; // s8
  int32_t v31; // w22
  int32_t ConvertOverwriteDispImageLimitCount; // w21
  int32_t LimitCountByImageLimitCostumeIn; // w0
  UnityEngine_Object_o *v34; // x24
  int32_t v35; // w23
  BattleServantConfConponent_o *p_isBattleResourceLoading; // x21
  UnityEngine_Object_o *callbackFunc; // x25
  struct ServantStatusDialog_EndDelegate_o **p_callbackFunc; // x24
  UnityEngine_Object_o *v39; // x25
  int32_t v40; // w25
  UnityEngine_GameObject_o *gameObject; // x23
  System_Int32_array **v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v49; // x24
  float32x2_t v50; // d8
  float v51; // s9
  unsigned __int64 v52; // d0 OVERLAPPED
  float v53; // s2
  int v54; // s1
  UnityEngine_Transform_o *v55; // x26
  int v56; // s0
  __int64 v59; // x8
  __int64 v60; // x8
  int32_t v61; // w26
  System_Collections_Generic_Dictionary_int__float__o *v62; // x27
  UnityEngine_Transform_o *v63; // x28
  float Item; // s8
  float v65; // s9
  float v66; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x25
  UnityEngine_Object_o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t v76; // w21
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v78; // x21
  bool v79; // [xsp+Ch] [xbp-74h]
  System_String_o *assetPath; // [xsp+10h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  v3 = noupdate;
  if ( (byte_418601E & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, noupdate);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIRoot___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__float__TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v16);
    sub_B2C35C(&NGUITools_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_2769/*"Battle2D"*/, v22);
    sub_B2C35C(&StringLiteral_16212/*"_y0"*/, v23);
    byte_418601E = 1;
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
      v27 = transform;
      while ( 1 )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v27,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          break;
        transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v27, 0LL);
        v27 = transform;
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
      v30 = *(float *)&localScale;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_93;
      v82.fields.x = 1.0 / v30;
      v82.fields.y = 1.0 / v30;
      v82.fields.z = 1.0 / v30;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v82, 0LL);
      transform = *(UnityEngine_Component_o **)&this->fields.isModify;
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(
                                               (ServantStatusListViewItem_o *)transform,
                                               0LL);
      if ( !*(_QWORD *)&this->fields.isModify )
        goto LABEL_93;
      v31 = (int)transform;
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
      v34 = *(UnityEngine_Object_o **)&this->fields.isBattleResourceLoading;
      v35 = LimitCountByImageLimitCostumeIn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
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
        v39 = (UnityEngine_Object_o *)*p_callbackFunc;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v39, 0LL);
      }
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)transform,
                                               v31,
                                               v35,
                                               0LL);
      if ( !this->fields.bgTxtSprite )
        goto LABEL_93;
      v40 = (int)transform;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.bgTxtSprite, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      v42 = (System_Int32_array **)ServantAssetLoadManager__loadBattleActor(&assetPath, gameObject, v31, v40, 0, 0LL);
      *p_callbackFunc = (struct ServantStatusDialog_EndDelegate_o *)v42;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, v42, v43, v44, v45, v46, v47, v48);
      if ( !v42 )
        goto LABEL_93;
      v49 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)v42,
              (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v42, 0LL);
      if ( !v49 )
        goto LABEL_93;
      BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v49, (UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)transform,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !transform )
        goto LABEL_93;
      transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                               (ServantLimitAddMaster_o *)transform,
                                               &entity,
                                               v31,
                                               v40,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_93;
        v50.n64_u64[0] = vmul_f32(
                           vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX),
                           vdup_n_s32(0x3C23D70Au)).n64_u64[0];
        v51 = (float)entity->fields.battleCharaOffsetZ * 0.01;
      }
      else
      {
        v50.n64_u64[0] = 0LL;
        v51 = 0.0;
      }
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v42, 0LL);
      if ( !transform )
        goto LABEL_93;
      v52 = vadd_f32(v50, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.y).n64_u64[0];
      v53 = v51 + *(float *)&this->fields.titleInfo;
      v54 = HIDWORD(v52);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)&v52,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v42, 0LL);
      if ( !transform )
        goto LABEL_93;
      v83.fields.y = 270.0;
      v83.fields.x = 0.0;
      v83.fields.z = 0.0;
      UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v83, 0LL);
      v55 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v42, 0LL);
      *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
      if ( !v55 )
        goto LABEL_93;
      UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v56, 0LL);
      v59 = *(_QWORD *)&this->fields.isModify;
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 128);
        if ( v60 )
        {
          v79 = v3;
          v61 = *(_DWORD *)(v60 + 156);
          v62 = (System_Collections_Generic_Dictionary_int__float__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__float__TypeInfo);
          System_Collections_Generic_Dictionary_int__float____ctor(
            v62,
            (const MethodInfo_2E677E4 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
          if ( !v62 )
            goto LABEL_93;
          System_Collections_Generic_Dictionary_int__float___Add(
            v62,
            5,
            0.75,
            (const MethodInfo_2E68390 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v62,
            8,
            0.75,
            (const MethodInfo_2E68390 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          System_Collections_Generic_Dictionary_int__float___Add(
            v62,
            9,
            0.75,
            (const MethodInfo_2E68390 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
          if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
                 v62,
                 v61,
                 (const MethodInfo_2E68600 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
          {
            v63 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v42, 0LL);
            Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                     v62,
                     v61,
                     (const MethodInfo_2E682D0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v65 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v62,
                    v61,
                    (const MethodInfo_2E682D0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            v66 = System_Collections_Generic_Dictionary_int__float___get_Item(
                    v62,
                    v61,
                    (const MethodInfo_2E682D0 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
            if ( !v63 )
              goto LABEL_93;
            v84.fields.z = v66;
            v84.fields.x = Item;
            v84.fields.y = v65;
            UnityEngine_Transform__set_localScale(v63, v84, 0LL);
            v3 = v79;
            p_isBattleResourceLoading = (BattleServantConfConponent_o *)&this->fields.isBattleResourceLoading;
          }
        }
      }
      BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v49, v31, v40, 0LL);
      if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v49, 0LL) )
        BattleFBXComponent__SetTempShaderFloatProperty(
          (BattleFBXComponent_o *)v49,
          5000.0,
          (System_String_o *)StringLiteral_16212/*"_y0"*/,
          0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(v31, v40, 0, 0LL);
      BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v49, Manager__loadAnimEvents, v31, v40, 0LL);
      BattleFBXComponent__SetWrapMode(
        (BattleFBXComponent_o *)v49,
        *(System_String_o **)&this->fields.confirmDispLv,
        2,
        0LL);
      BattleFBXComponent__playAnimation(
        (BattleFBXComponent_o *)v49,
        *(System_String_o **)&this->fields.confirmDispLv,
        0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0LL);
      if ( !transform
        || (Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)transform,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
            (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v49,
                                                      0LL)) == 0LL) )
      {
LABEL_93:
        sub_B2C434(transform, v25);
      }
      v69 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)transform,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v69 )
            goto LABEL_93;
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v69, 0LL);
        }
      }
      p_isBattleResourceLoading->klass = (BattleServantConfConponent_c *)v49;
      sub_B2C2F8(p_isBattleResourceLoading, (System_Int32_array **)v49, v70, v71, v72, v73, v74, v75);
      v76 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
      if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetLayer((UnityEngine_GameObject_o *)v42, v76, 0LL);
      if ( !v3 )
      {
        transform = (UnityEngine_Component_o *)this->fields.profileTabListViewManager;
        if ( !transform )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)transform, 3, 0LL);
        profileTabListViewManager = this->fields.profileTabListViewManager;
        if ( BYTE2(this->fields.statusLoadAsset) )
        {
          if ( profileTabListViewManager )
          {
            ServantStatusListViewManager__SetMode_30332204(
              (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager,
              2,
              0LL);
            return;
          }
          goto LABEL_93;
        }
        v78 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v78,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL);
        if ( !profileTabListViewManager )
          goto LABEL_93;
        ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v78, 0LL);
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
  if ( (byte_418602A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_418602A = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
bool __fastcall ServantStatusDialog__PlayChrVoice_21793128(
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
  if ( (byte_418602C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_418602C = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418602B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, *(_QWORD *)&svtId);
    this = (ServantStatusDialog_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_ServantVoiceData____get_Item__,
                                      v11);
    byte_418602B = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  if ( !voicePlayListList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  int v31; // w19
  int v32; // w20
  _BOOL4 v33; // w0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186027 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, assetName);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    byte_4186027 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( voicePlayList && *(_QWORD *)&voicePlayList->max_length )
  {
    voicePlayer = this->fields.voicePlayer;
    if ( !voicePlayer )
      sub_B2C434(0LL, assetName);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)voicePlayer,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v36 = v35;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v13 )
      {
        v31 = 0;
        v32 = 1;
        goto LABEL_15;
      }
      if ( !assetName )
        sub_B2C434(v13, v14);
    }
    while ( !System_String__Equals_44292872(assetName, (System_String_o *)v36.fields.current, 0LL) );
    ServantStatusDialog__StopVoice(this, v15);
    if ( LODWORD(this->fields.tabInitList) == 3 )
    {
      servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
      if ( !servantNameRangeLabel )
        sub_B2C434(0LL, v16);
      ServantStatusVoiceListViewManager__SetMode_31386024(servantNameRangeLabel, 2, listIndex, 0LL);
      LODWORD(this->fields.battleLoadAsset) = listIndex;
    }
    *(_QWORD *)&this->fields.voicePlayNum = voicePlayList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voicePlayNum,
      (System_Int32_array **)voicePlayList,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    *(_QWORD *)&this->fields.voiceListIndex = assetName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.voiceListIndex,
      (System_Int32_array **)assetName,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    ServantStatusDialog__EndWaitVoice(this, v30);
    v31 = 1;
    v32 = 3;
LABEL_15:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    return v31 & ((unsigned int)(v32 + 1) >> 2);
  }
  else
  {
    LOBYTE(v33) = 0;
  }
  return v33;
}


void __fastcall ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int v5; // w8
  ServantStatusCharaGraphListViewManager_o *servantStatusBattleConfirmDialog; // x0

  if ( (byte_4186032 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4186032 = 1;
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
      ServantStatusCharaGraphListViewManager__SetMode_21737748(servantStatusBattleConfirmDialog, 1, v2);
      servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
      if ( servantStatusBattleConfirmDialog )
      {
        ServantStatusListViewManager__SetMode_30332204(
          (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
          2,
          0LL);
        servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)this->fields.battleTabListViewManager;
        if ( servantStatusBattleConfirmDialog )
        {
          ServantStatusFlavorTextListViewManager__SetMode_34116668(
            (ServantStatusFlavorTextListViewManager_o *)servantStatusBattleConfirmDialog,
            2,
            0LL);
          if ( !BYTE4(this->fields.statusLoadAsset) )
            return;
          servantStatusBattleConfirmDialog = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( servantStatusBattleConfirmDialog )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)servantStatusBattleConfirmDialog, 1, 0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(servantStatusBattleConfirmDialog, method);
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
  __int64 v28; // x1
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
  int v39; // w21
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  int v44; // w22
  BalanceConfig_c *v45; // x8
  __int64 v46; // x8
  System_Int32_array *v47; // x22
  System_Func_int__bool__o *v48; // x23
  __int64 v49; // x19
  __int64 v50; // x19
  CommonUI_o *v51; // x19
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  CommonConfirmDialog_ClickDelegate_o *v55; // x0
  __int64 *v56; // x8
  __int64 v57; // x19
  __int64 v58; // x19
  CommonConfirmDialog_ClickDelegate_o *v59; // x24
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v63; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4186058 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isOwnSetting);
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, v5);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v8);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v13);
    sub_B2C35C(&SoundManager_TypeInfo, v14);
    sub_B2C35C(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__, v15);
    sub_B2C35C(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__, v16);
    sub_B2C35C(&Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__, v17);
    sub_B2C35C(&ServantStatusDialog___c__DisplayClass206_0_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_12017/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_12015/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_12000/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    sub_B2C35C(&StringLiteral_12001/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_12016/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_11999/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, v25);
    byte_4186058 = 1;
  }
  v26 = sub_B2C42C(ServantStatusDialog___c__DisplayClass206_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass206_0___ctor((ServantStatusDialog___c__DisplayClass206_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_53;
  *(_QWORD *)(v26 + 24) = this;
  *(_BYTE *)(v26 + 20) = isOwnSetting;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  v35 = *(_QWORD *)&this->fields.isModify;
  if ( *(_BYTE *)(v26 + 20) )
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
  IsContainRandomIndex = (ServantStatusListViewItem_o *)ServantStatusDialog__IsContainRandomIndex(this, v38);
  v39 = (int)IsContainRandomIndex;
  *(_DWORD *)(v26 + 16) = 12;
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
    *(_QWORD *)&v64.fields.currentCryptoKey = v43;
    *(_QWORD *)&v64.fields.fakeValue = v42;
    IsContainRandomIndex = (ServantStatusListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                            v64,
                                                            0LL);
    v44 = (int)IsContainRandomIndex;
    v45 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    if ( v44 == v45->static_fields->ServantIdMashu1 )
    {
      v46 = *(_QWORD *)&this->fields.isModify;
      if ( !v46 )
        goto LABEL_53;
      v47 = *(System_Int32_array **)(v46 + 336);
      if ( v47 )
      {
        v48 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v48,
          (Il2CppObject *)v26,
          Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        if ( BasicHelper__Any_int__24273940(
               v47,
               (System_Func_T__bool__o *)v48,
               (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
        {
          v49 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
          if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
            sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
          v50 = **(_QWORD **)(v49 + 192);
          if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
            sub_AC505C(v50);
          v51 = **(CommonUI_o ***)(v50 + 184);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12016/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0LL);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12015/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0LL);
          v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          v56 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__1__;
          goto LABEL_42;
        }
      }
    }
  }
  if ( (v39 & v37 & 1) != 0 )
  {
    v57 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
    if ( (*(_BYTE *)(v57 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
    v58 = **(_QWORD **)(v57 + 192);
    if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
      sub_AC505C(v58);
    v51 = **(CommonUI_o ***)(v58 + 184);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    v56 = &Method_ServantStatusDialog___c__DisplayClass206_0__RandomLimitCountSettingResource_b__2__;
LABEL_42:
    v59 = v55;
    CommonConfirmDialog_ClickDelegate___ctor(v55, (Il2CppObject *)v26, *v56, 0LL);
    if ( v51 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v51,
        (System_String_o *)StringLiteral_1/*""*/,
        v52,
        v53,
        v54,
        v59,
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
    sub_B2C434(IsContainRandomIndex, v28);
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
      v60);
    IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( !IsContainRandomIndex )
      goto LABEL_53;
    ServantStatusCharaGraphListViewManager__SetEnableScroll(
      (ServantStatusCharaGraphListViewManager_o *)IsContainRandomIndex,
      *(ServantStatusListViewItem_o **)&this->fields.isModify,
      v61);
  }
  else
  {
    IsContainRandomIndex->fields.isEnableSupportRandomSetting ^= 1u;
  }
  IsContainRandomIndex = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !IsContainRandomIndex )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)IsContainRandomIndex, 10, 0LL);
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v63 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v63,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0LL);
  if ( !profileTabListViewManager )
    goto LABEL_53;
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)profileTabListViewManager, 1, v63, 0LL);
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
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4186057 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    byte_4186057 = 1;
  }
  profileTabListViewManager = *(struct ServantStatusFlavorTextListViewManager_o **)&this->fields.isModify;
  if ( !profileTabListViewManager
    || (ServantStatusListViewItem__SetSupportRandomLimitCountByIndex(
          (ServantStatusListViewItem_o *)profileTabListViewManager,
          index,
          0LL),
        (profileTabListViewManager = this->fields.profileTabListViewManager) == 0LL)
    || (ServantStatusListViewManager__SetMode_30332204(
          (ServantStatusListViewManager_o *)profileTabListViewManager,
          9,
          0LL),
        v7 = this->fields.profileTabListViewManager,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0LL),
        !v7) )
  {
    sub_B2C434(profileTabListViewManager, *(_QWORD *)&index);
  }
  ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v7, 1, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__SetActiveInputLockPanel(
        ServantStatusDialog_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleMaskBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_418601D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, flag);
    byte_418601D = 1;
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
      sub_B2C434(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
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
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  const MethodInfo *v31; // x1
  __int64 v32; // x0

  if ( (byte_4186020 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, isModifyInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    sub_B2C35C(&Method_ServantStatusDialog_EndLoadChangeBattleResource__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4186020 = 1;
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
    v32 = sub_B2C460(voiceTabListViewManager);
    sub_B2C400(v32, 0LL);
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
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !voiceTabListViewManager )
    goto LABEL_32;
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)voiceTabListViewManager,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( System_String__Equals_44292872(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v20, v22, v23, v24, v25, v26, v27);
  voiceTabListViewManager = (ServantStatusBattleListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !voiceTabListViewManager )
LABEL_32:
    sub_B2C434(voiceTabListViewManager, isModifyInfo);
  CommonUI__SetLoadMode((CommonUI_o *)voiceTabListViewManager, 1, 0LL);
  v29 = *(System_String_o **)&this->fields.isBattlePlay;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndLoadChangeBattleResource__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v29, v30, 1, 0LL) )
    ServantStatusDialog__BattleAssetLoadError(this, v31);
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
  System_String_o **v35; // x8
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
  if ( (byte_4186030 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17133/*"button_lock_reg"*/, v4);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v5);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v6);
    sub_B2C35C(&StringLiteral_17134/*"button_lock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17128/*"button_choice_unreg"*/, v8);
    sub_B2C35C(&StringLiteral_19330/*"icon_equip"*/, v9);
    sub_B2C35C(&StringLiteral_17127/*"button_choice_reg"*/, v10);
    sub_B2C35C(&StringLiteral_19331/*"icon_equip_cc"*/, v11);
    sub_B2C35C(&StringLiteral_17129/*"button_favorite_reg"*/, v12);
    this = (ServantStatusDialog_o *)sub_B2C35C(&StringLiteral_17130/*"button_favorite_unreg"*/, v13);
    byte_4186030 = 1;
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
      v24 = (System_String_o **)(*(_BYTE *)(v23 + 325) ? &StringLiteral_17133/*"button_lock_reg"*/ : &StringLiteral_17134/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
      v25 = *(_QWORD *)&v2->fields.isModify;
      if ( !v25 )
        goto LABEL_87;
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_87;
      v26 = (System_String_o **)(*(_BYTE *)(v25 + 326) ? &StringLiteral_17127/*"button_choice_reg"*/ : &StringLiteral_17128/*"button_choice_unreg"*/);
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
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v44, 0LL);
      if ( !equipSprite )
        goto LABEL_87;
      v32 = (System_String_o **)&StringLiteral_17129/*"button_favorite_reg"*/;
      if ( v31 != this )
        v32 = (System_String_o **)&StringLiteral_17130/*"button_favorite_unreg"*/;
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
          v35 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
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
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                            &v43,
                                            0LL);
          if ( !charaGraphListViewManager )
            goto LABEL_87;
          v35 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
          v41 = v40 == this;
          this = charaGraphListViewManager;
          if ( !v41 )
            v35 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, *v35, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19330/*"icon_equip"*/, 0LL);
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
  v18 = (System_String_o **)(*(_BYTE *)(v17 + 325) ? &StringLiteral_17133/*"button_lock_reg"*/ : &StringLiteral_17134/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v18, 0LL), (v19 = *(_QWORD *)&v2->fields.isModify) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0LL
    || (*(_BYTE *)(v19 + 326)
      ? (v20 = (System_String_o **)&StringLiteral_17127/*"button_choice_reg"*/)
      : (v20 = (System_String_o **)&StringLiteral_17128/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v20, 0LL),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteSprite) == 0LL)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_87:
    sub_B2C434(this, method);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19331/*"icon_equip_cc"*/, 0LL);
}


void __fastcall ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t partyItem; // w20
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *v8; // x0

  if ( (byte_418601C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418601C = 1;
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
    v8 = this->fields.inputLockPanel;
    if ( !v8
      || (NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)v8, partyItem > 0, 0LL),
          (v8 = this->fields.inputLockPanel) == 0LL) )
    {
      sub_B2C434(v8, v7);
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
  const MethodInfo *v55; // x1
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
  ServantStatusListViewManager_CallbackFunc_o *v79; // x21
  struct ServantStatusFlavorTextListViewManager_o *v80; // x20
  ServantStatusListViewManager_CallbackFunc_o *v81; // x21
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v83; // x21
  struct ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x2
  __int64 v95; // x8
  float BgmVolume; // s8
  BgmManager_c *v97; // x0
  BgmManager_c *v98; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v101; // x21
  __int64 v102; // x0
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_418602E & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&OptionManager_TypeInfo, v10);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v11);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectBattle__, v12);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectFlavor__, v13);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v14);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectVoice__, v15);
    sub_B2C35C(&StringLiteral_17049/*"btn_txt_detail_off"*/, v16);
    sub_B2C35C(&StringLiteral_17033/*"btn_txt_battlecharacter_on"*/, v17);
    sub_B2C35C(&StringLiteral_17096/*"btn_txt_status_on"*/, v18);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v19);
    sub_B2C35C(&StringLiteral_17095/*"btn_txt_status_off"*/, v20);
    sub_B2C35C(&StringLiteral_17106/*"btn_txt_voice_on"*/, v21);
    sub_B2C35C(&StringLiteral_17077/*"btn_txt_profile_on"*/, v22);
    sub_B2C35C(&StringLiteral_17105/*"btn_txt_voice_off"*/, v23);
    sub_B2C35C(&StringLiteral_16964/*"btn_bg_19"*/, v24);
    sub_B2C35C(&StringLiteral_17050/*"btn_txt_detail_on"*/, v25);
    sub_B2C35C(&StringLiteral_17076/*"btn_txt_profile_off"*/, v26);
    sub_B2C35C(&StringLiteral_17032/*"btn_txt_battlecharacter_off"*/, v27);
    byte_418602E = 1;
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
        sub_B2C434(profileTabBase, *(_QWORD *)&kind);
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
                v47 = (System_String_o **)&StringLiteral_17095/*"btn_txt_status_off"*/;
                if ( !kind )
                  v47 = (System_String_o **)&StringLiteral_17096/*"btn_txt_status_on"*/;
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
                    v48 = (System_String_o **)(kind ? &StringLiteral_16962/*"btn_bg_12"*/ : &StringLiteral_16964/*"btn_bg_19"*/);
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
                                    (System_String_o *)StringLiteral_17076/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/,
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
                                                  v51 = (System_String_o **)&StringLiteral_17033/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v51 = (System_String_o **)&StringLiteral_17032/*"btn_txt_battlecharacter_off"*/;
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
                                                                               ? &StringLiteral_16964/*"btn_bg_19"*/
                                                                               : &StringLiteral_16962/*"btn_bg_12"*/);
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
                                                                      (System_String_o *)StringLiteral_17105/*"btn_txt_voice_off"*/,
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
                                                                          (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/,
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
      v46 = &StringLiteral_17050/*"btn_txt_detail_on"*/;
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
      v31 = (System_String_o **)&StringLiteral_17095/*"btn_txt_status_off"*/;
      if ( !kind )
        v31 = (System_String_o **)&StringLiteral_17096/*"btn_txt_status_on"*/;
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
      v32 = (System_String_o **)(kind ? &StringLiteral_16962/*"btn_bg_12"*/ : &StringLiteral_16964/*"btn_bg_19"*/);
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
      v35 = &StringLiteral_17050/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v35 = &StringLiteral_17049/*"btn_txt_detail_off"*/;
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
      v36 = (System_String_o **)(kind == 1 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
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
      v41 = (System_String_o **)&StringLiteral_17095/*"btn_txt_status_off"*/;
      if ( !kind )
        v41 = (System_String_o **)&StringLiteral_17096/*"btn_txt_status_on"*/;
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
      v42 = &StringLiteral_16964/*"btn_bg_19"*/;
      if ( kind )
        v42 = &StringLiteral_16962/*"btn_bg_12"*/;
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
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17049/*"btn_txt_detail_off"*/, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleTitleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
        profileTabBase,
        profileTabBase->klass[2]._1.interopData);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.battleSprite;
      if ( !profileTabBase )
        goto LABEL_288;
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/, 0LL);
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
      v46 = &StringLiteral_17076/*"btn_txt_profile_off"*/;
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
      UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_16964/*"btn_bg_19"*/, 0LL);
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
      v57 = (System_String_o **)&StringLiteral_17095/*"btn_txt_status_off"*/;
      if ( !kind )
        v57 = (System_String_o **)&StringLiteral_17096/*"btn_txt_status_on"*/;
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
      v58 = (System_String_o **)(kind ? &StringLiteral_16962/*"btn_bg_12"*/ : &StringLiteral_16964/*"btn_bg_19"*/);
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
      v61 = (System_String_o **)&StringLiteral_17077/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v61 = (System_String_o **)&StringLiteral_17076/*"btn_txt_profile_off"*/;
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
      v62 = (System_String_o **)(kind == 1 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
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
      v65 = (System_String_o **)&StringLiteral_17033/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v65 = (System_String_o **)&StringLiteral_17032/*"btn_txt_battlecharacter_off"*/;
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
        v66 = &StringLiteral_16964/*"btn_bg_19"*/;
      else
        v66 = &StringLiteral_16962/*"btn_bg_12"*/;
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
          UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_17105/*"btn_txt_voice_off"*/, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
          if ( profileTabBase )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))profileTabBase->klass[2]._1.typeMetadataHandle)(
              profileTabBase,
              profileTabBase->klass[2]._1.interopData);
            profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusButton;
            if ( profileTabBase )
            {
              UISprite__set_spriteName((UISprite_o *)profileTabBase, (System_String_o *)StringLiteral_16962/*"btn_bg_12"*/, 0LL);
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
        sub_B2C434(profileTabBase, v55);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)profileTabBase, (unsigned __int8)v29 != 1, 0LL);
      profileTabBase = (UnityEngine_GameObject_o *)this->fields.statusSprite;
      if ( !profileTabBase )
        goto LABEL_287;
      v70 = (System_String_o **)&StringLiteral_17106/*"btn_txt_voice_on"*/;
      if ( !v29 )
        v70 = (System_String_o **)&StringLiteral_17105/*"btn_txt_voice_off"*/;
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
      v71 = (System_String_o **)(v29 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
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
        v102 = sub_B2C460(profileTabBase);
        sub_B2C400(v102, 0LL);
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
          ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)profileTabBase, 6, 0LL);
          profileTabBase = (UnityEngine_GameObject_o *)this->fields.profileTabListViewManager;
          if ( !profileTabBase )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode_30332204((ServantStatusListViewManager_o *)profileTabBase, 4, 0LL);
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v79 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v79,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !profileTabListViewManager )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode(
            (ServantStatusListViewManager_o *)profileTabListViewManager,
            1,
            v79,
            0LL);
LABEL_232:
          v80 = this->fields.profileTabListViewManager;
          v81 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v81,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0LL);
          if ( !v80 )
            goto LABEL_287;
          ServantStatusListViewManager__SetMode((ServantStatusListViewManager_o *)v80, 1, v81, 0LL);
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v56);
LABEL_235:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v83 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v83,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0LL);
          if ( !battleTabListViewManager )
            goto LABEL_287;
          ServantStatusFlavorTextListViewManager__SetMode(
            (ServantStatusFlavorTextListViewManager_o *)battleTabListViewManager,
            1,
            v83,
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
          v85 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v85,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectBattle__,
            0LL);
          if ( !voiceTabListViewManager )
            goto LABEL_287;
          voiceTabListViewManager->fields.callbackFunc = (struct ServantStatusVoiceListViewManager_CallbackFunc_o *)v85;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&voiceTabListViewManager->fields.callbackFunc,
            (System_Int32_array **)v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91);
          ServantStatusBattleListViewManager__SetMode_21723792(
            (ServantStatusBattleListViewManager_o *)voiceTabListViewManager,
            1,
            v92,
            v93);
          if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
          }
          if ( !byte_4185F2D )
          {
            sub_B2C35C(&RandomLimitCountManager_TypeInfo, v55);
            byte_4185F2D = 1;
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
          v95 = *(_QWORD *)&this->fields.isModify;
          if ( !v95 )
            goto LABEL_287;
          if ( !*(_BYTE *)(v95 + 192) )
            ServantStatusDialog__ChangeBattleActorSelectIndex(this, v55);
LABEL_252:
          ServantStatusDialog__SetupBattleMask(this, *(ServantStatusListViewItem_o **)&this->fields.isModify, v94);
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
            v97 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v97 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v97->static_fields->LOW_VOLUME )
            {
              BYTE3(this->fields.statusLoadAsset) = 1;
              if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OptionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              }
              if ( !OptionManager__GetVolumeMute(0LL) )
              {
                v98 = BgmManager_TypeInfo;
                if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v98 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v98->static_fields->LOW_VOLUME;
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
          v101 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v101,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0LL);
          if ( !servantNameRangeLabel )
            goto LABEL_287;
          ServantStatusVoiceListViewManager__SetMode(servantNameRangeLabel, 1, v101, 0LL);
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

  if ( (byte_4186033 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isVisible);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v5);
    byte_4186033 = 1;
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
            (System_String_o *)StringLiteral_23190/*"wait"*/,
            0LL);
          return;
        }
LABEL_14:
        sub_B2C434(bgTxtSprite, isVisible);
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
  if ( (byte_4186011 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12007/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_BATTLE"*/, v6);
    this = (ServantStatusDialog_o *)sub_B2C35C(&StringLiteral_12011/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, v7);
    byte_4186011 = 1;
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
      v10 = &StringLiteral_12007/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_ALL_SETTING_BATTLE"*/;
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
      v10 = &StringLiteral_12011/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/;
LABEL_22:
      this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
      if ( battleChr )
      {
        UILabel__set_text(battleChr, (System_String_o *)this, 0LL);
        return;
      }
LABEL_26:
      sub_B2C434(this, item);
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
  bool v17; // w22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x22
  const MethodInfo *v25; // x2
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  const MethodInfo *v28; // x1
  __int64 v30; // x8

  if ( (byte_4186019 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_EndLoadBattle__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4186019 = 1;
  }
  Instance = *(ServantStatusListViewItem_o **)&this->fields.isModify;
  if ( !Instance )
    goto LABEL_39;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          Instance,
                                          0LL);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (ServantStatusListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  if ( System_String__Equals_44292872((System_String_o *)Instance, *(System_String_o **)&this->fields.isBattlePlay, 0LL) )
  {
    if ( LOBYTE(this->fields.defaultAnimationName) )
      return 0;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4185F2D )
    {
      sub_B2C35C(&RandomLimitCountManager_TypeInfo, method);
      byte_4185F2D = 1;
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
    v30 = *(_QWORD *)&this->fields.isModify;
    if ( v30 )
    {
      if ( !*(_BYTE *)(v30 + 192) )
        ServantStatusDialog__EndLoadBattle_21783376(this, method);
      return 0;
    }
LABEL_39:
    sub_B2C434(Instance, method);
  }
  if ( !System_String__IsNullOrEmpty(*p_isBattlePlay, 0LL) )
  {
    v24 = *p_isBattlePlay;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v24, 0LL);
  }
  *p_isBattlePlay = (System_String_o *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isBattlePlay, v16, v18, v19, v20, v21, v22, v23);
  Instance = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  LOBYTE(this->fields.defaultAnimationName) = 1;
  ServantStatusDialog__SetTabKind(this, 2, v25);
  v26 = *(System_String_o **)&this->fields.isBattlePlay;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  v17 = 1;
  if ( !AssetManager__loadAssetStorage(v26, v27, 1, 0LL) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v28);
    return 1;
  }
  return v17;
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
  AssetLoader_LoadEndDataHandler_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AssetData_o *v33; // x1
  const MethodInfo *v34; // x2

  if ( (byte_4186014 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v4);
    sub_B2C35C(&Method_ServantStatusDialog_EndStatusLoad__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4186014 = 1;
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
  sub_B2C2F8(
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.loadVoiceData,
          (System_Int32_array **)CommandCardLoadFolderNameDisp,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (SvtId = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B2C434(SvtId, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)SvtId, 1, 0LL);
  cardLoadAsset = this->fields.cardLoadAsset;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_ServantStatusDialog_EndStatusLoad__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(cardLoadAsset, v26, 1, 0LL) )
  {
    this->fields.cardLoadAsset = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cardLoadAsset, 0LL, v27, v28, v29, v30, v31, v32);
    ServantStatusDialog__EndStatusLoad(this, v33, v34);
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
  __int64 v22; // x1
  ServantChangeMaster_o *v23; // x20
  struct System_Collections_Generic_List_string__o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  unsigned __int64 v32; // x22
  int32_t v33; // w20
  BalanceConfig_c *v34; // x8
  ServantLimitAddMaster_o *v35; // x21
  __int64 v36; // x9
  int32_t v37; // w4
  const MethodInfo *v38; // x5
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v40; // x21
  unsigned __int64 v41; // x26
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  struct System_Collections_Generic_List_string__o *v43; // x22
  int32_t v44; // w4
  const MethodInfo *v45; // x5
  struct System_Collections_Generic_List_string__o *v46; // x22
  int32_t v47; // w4
  const MethodInfo *v48; // x5
  struct System_Collections_Generic_List_string__o *v49; // x22
  int32_t v50; // w4
  const MethodInfo *v51; // x5
  BalanceConfig_c *v52; // x8
  int v53; // w22
  struct System_Collections_Generic_List_string__o *v54; // x22
  int32_t v55; // w4
  const MethodInfo *v56; // x5
  struct System_Collections_Generic_List_string__o *v57; // x22
  int32_t v58; // w4
  const MethodInfo *v59; // x5
  struct System_Collections_Generic_List_string__o *v60; // x22
  int32_t ServantIdMashu3; // w2
  BalanceConfig_c *v62; // x8
  int v63; // w22
  struct System_Collections_Generic_List_string__o *v64; // x22
  int32_t v65; // w4
  const MethodInfo *v66; // x5
  struct System_Collections_Generic_List_string__o *v67; // x22
  int32_t v68; // w4
  const MethodInfo *v69; // x5
  struct System_Collections_Generic_List_string__o *v70; // x22
  int64_t UserId; // x24
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t MashuTdGradeUpQuestId; // w22
  int32_t MashuTdGradeUpQuestPhase; // w23
  struct System_Collections_Generic_List_string__o *v75; // x22
  int32_t v76; // w4
  const MethodInfo *v77; // x5
  struct System_Collections_Generic_List_string__o *v78; // x22
  ServantVoiceRelationEntity_array *v79; // x23
  signed int max_length; // w8
  unsigned int v81; // w24
  ServantVoiceRelationEntity_o *v82; // x25
  struct System_Collections_Generic_List_string__o *voiceDataList; // x20
  __int64 v84; // x21
  __int64 v85; // x22
  ServantStatusDialog_o *v86; // x0
  int32_t v87; // w4
  const MethodInfo *v88; // x5
  struct System_Collections_Generic_List_string__o *v89; // x20
  ServantStatusDialog_o *v90; // x0
  int32_t v91; // w4
  const MethodInfo *v92; // x5
  struct System_Collections_Generic_List_string__o *v93; // x20
  ServantStatusDialog_o *v94; // x0
  int32_t v95; // w4
  const MethodInfo *v96; // x5
  struct System_Collections_Generic_List_string__o *v97; // x8
  const MethodInfo *v98; // x2
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct System_Collections_Generic_List_string__o *v105; // x20
  struct System_Int32_array *v106; // x1
  System_String_o *changeSvtVoiceIdList; // x20
  System_Action_o *v108; // x21
  __int64 v109; // x0
  unsigned __int64 v110; // [xsp+8h] [xbp-68h]
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // [xsp+10h] [xbp-60h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4186024 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&CondType_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&Method_ServantStatusDialog_EndLoadVoice__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    byte_4186024 = 1;
  }
  relationList = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4185CE0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4185CE0 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*(_QWORD *)&this->fields.isModify )
    goto LABEL_120;
  v23 = (ServantChangeMaster_o *)Instance;
  Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId(
                                *(ServantStatusListViewItem_o **)&this->fields.isModify,
                                0LL);
  if ( !v23 )
    goto LABEL_120;
  v24 = (struct System_Collections_Generic_List_string__o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                                              v23,
                                                              (int32_t)Instance,
                                                              0LL);
  this->fields.requestVoiceDataList = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestVoiceDataList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !this->fields.requestVoiceDataList )
    goto LABEL_120;
  requestVoiceDataList = this->fields.requestVoiceDataList;
  v31 = *(_QWORD *)&requestVoiceDataList->fields._size;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v31 )
        goto LABEL_121;
      v33 = *((_DWORD *)&requestVoiceDataList->fields._syncRoot + v32);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v34 = BalanceConfig_TypeInfo;
      v35 = (ServantLimitAddMaster_o *)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      v36 = *(_QWORD *)&this->fields.isModify;
      if ( !v36 )
        goto LABEL_120;
      if ( !v35 )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                    v35,
                                    v33,
                                    v34->static_fields->ServantLimitMax,
                                    *(System_Int32_array **)(v36 + 208),
                                    0LL);
      if ( !Instance )
        goto LABEL_120;
      datalist = Instance->fields.datalist;
      v40 = Instance;
      v110 = v32;
      if ( (int)datalist >= 1 )
        break;
LABEL_85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !Instance )
        goto LABEL_120;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)Instance, &relationList, v33, 0LL);
      v79 = relationList;
      if ( !relationList )
        goto LABEL_120;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v81 = 0;
        while ( v81 < max_length )
        {
          v82 = v79->m_Items[v81];
          if ( !v82 )
            goto LABEL_120;
          voiceDataList = this->fields.voiceDataList;
          v85 = *(_QWORD *)&v82->fields.relationSvtId.fields.currentCryptoKey;
          v84 = *(_QWORD *)&v82->fields.relationSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v113.fields.currentCryptoKey = v85;
          *(_QWORD *)&v113.fields.fakeValue = v84;
          v86 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v113, 0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v86, 0, (int32_t)v86, 0, v87, v88);
          if ( !voiceDataList )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)voiceDataList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          v89 = this->fields.voiceDataList;
          v90 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                           v82->fields.relationSvtId,
                                           0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v90, 2, (int32_t)v90, 0, v91, v92);
          if ( !v89 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v89,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          v93 = this->fields.voiceDataList;
          v94 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                           v82->fields.relationSvtId,
                                           0LL);
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(v94, 1, (int32_t)v94, 0, v95, v96);
          if ( !v93 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v93,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          max_length = v79->max_length;
          if ( (int)++v81 >= max_length )
            goto LABEL_99;
        }
LABEL_121:
        v109 = sub_B2C460(Instance);
        sub_B2C400(v109, 0LL);
      }
LABEL_99:
      LODWORD(v31) = requestVoiceDataList->fields._size;
      v32 = v110 + 1;
      if ( (__int64)(v110 + 1) >= (int)v31 )
        goto LABEL_100;
    }
    v41 = 0LL;
    p_lookup = &Instance->fields.lookup;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)datalist )
        goto LABEL_121;
      v43 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    0,
                                    v33,
                                    *((_DWORD *)p_lookup + v41),
                                    v37,
                                    v38);
      if ( !v43 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v41 >= LODWORD(v40->fields.datalist) )
        goto LABEL_121;
      v46 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    2,
                                    v33,
                                    *((_DWORD *)p_lookup + v41),
                                    v44,
                                    v45);
      if ( !v46 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v41 >= LODWORD(v40->fields.datalist) )
        goto LABEL_121;
      v49 = this->fields.voiceDataList;
      Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                    (ServantStatusDialog_o *)Instance,
                                    1,
                                    v33,
                                    *((_DWORD *)p_lookup + v41),
                                    v47,
                                    v48);
      if ( !v49 )
        goto LABEL_120;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v52 = BalanceConfig_TypeInfo;
      v53 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      if ( v53 == v52->static_fields->ServantIdJekyll )
        break;
      Instance = *(DataManager_o **)&this->fields.isModify;
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL);
      v62 = BalanceConfig_TypeInfo;
      v63 = (int)Instance;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v63 == v62->static_fields->ServantIdMashu1 )
      {
        v64 = this->fields.voiceDataList;
        if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v62);
        if ( v41 >= LODWORD(v40->fields.datalist) )
          goto LABEL_121;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      0,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v41),
                                      v37,
                                      v38);
        if ( !v64 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v41 >= LODWORD(v40->fields.datalist) )
          goto LABEL_121;
        v67 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      2,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v41),
                                      v65,
                                      v66);
        if ( !v67 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v67,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v41 >= LODWORD(v40->fields.datalist) )
          goto LABEL_121;
        v70 = this->fields.voiceDataList;
        Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                      (ServantStatusDialog_o *)Instance,
                                      1,
                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                      *((_DWORD *)p_lookup + v41),
                                      v68,
                                      v69);
        if ( !v70 )
          goto LABEL_120;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v70,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
          v75 = this->fields.voiceDataList;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          }
          if ( v41 >= LODWORD(v40->fields.datalist) )
            goto LABEL_121;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        0,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v41),
                                        v37,
                                        v38);
          if ( !v75 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v75,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v41 >= LODWORD(v40->fields.datalist) )
            goto LABEL_121;
          v78 = this->fields.voiceDataList;
          Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                        (ServantStatusDialog_o *)Instance,
                                        2,
                                        BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                        *((_DWORD *)p_lookup + v41),
                                        v76,
                                        v77);
          if ( !v78 )
            goto LABEL_120;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v78,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( v41 >= LODWORD(v40->fields.datalist) )
            goto LABEL_121;
          v60 = this->fields.voiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_52;
        }
      }
LABEL_84:
      LODWORD(datalist) = v40->fields.datalist;
      if ( (__int64)++v41 >= (int)datalist )
        goto LABEL_85;
    }
    v54 = this->fields.voiceDataList;
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v52);
    if ( v41 >= LODWORD(v40->fields.datalist) )
      goto LABEL_121;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  0,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v41),
                                  v50,
                                  v51);
    if ( !v54 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v41 >= LODWORD(v40->fields.datalist) )
      goto LABEL_121;
    v57 = this->fields.voiceDataList;
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  2,
                                  BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                  *((_DWORD *)p_lookup + v41),
                                  v55,
                                  v56);
    if ( !v57 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    if ( v41 >= LODWORD(v40->fields.datalist) )
      goto LABEL_121;
    v60 = this->fields.voiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_52:
    Instance = (DataManager_o *)ServantStatusDialog__GetVoiceAssetName(
                                  (ServantStatusDialog_o *)Instance,
                                  1,
                                  ServantIdMashu3,
                                  *((_DWORD *)p_lookup + v41),
                                  v58,
                                  v59);
    if ( !v60 )
      goto LABEL_120;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v60,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_84;
  }
LABEL_100:
  v97 = this->fields.voiceDataList;
  if ( !v97 )
    goto LABEL_120;
  if ( v97->fields._size < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  ServantStatusDialog__SetTabKind(this, 3, v98);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4185CE0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    byte_4185CE0 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v106 = (struct System_Int32_array *)v105->fields._items->m_Items[0];
  this->fields.changeSvtVoiceIdList = v106;
  sub_B2C2F8(
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
    sub_B2C434(Instance, v22);
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    0,
    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
  changeSvtVoiceIdList = (System_String_o *)this->fields.changeSvtVoiceIdList;
  v108 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v19 = 1;
  SoundManager__loadAudioAssetStorage(changeSvtVoiceIdList, v108, 1, 0LL);
  return v19;
}


void __fastcall ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusVoiceListViewManager_o *servantNameRangeLabel; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SePlayer_o *voicePlayList; // x20
  System_Action_o *v19; // x21
  BattleServantConfConponent_o *p_voicePlayList; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4186026 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantStatusDialog_EndPlayVoice__, v3);
    sub_B2C35C(&StringLiteral_5988/*"EndWaitVoice"*/, v4);
    byte_4186026 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 3 && ((__int64)this->fields.battleLoadAsset & 0x80000000) == 0 )
  {
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.servantNameRangeLabel;
    if ( !servantNameRangeLabel )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_31386024(servantNameRangeLabel, 2, -1, 0LL);
    LODWORD(this->fields.battleLoadAsset) = -1;
  }
  if ( *(_QWORD *)&this->fields.voicePlayNum )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5988/*"EndWaitVoice"*/,
      0LL);
    *(_QWORD *)&this->fields.voicePlayNum = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voicePlayNum, 0LL, v6, v7, v8, v9, v10, v11);
    LODWORD(this->fields.voicePlayAssetName) = 0;
    *(_QWORD *)&this->fields.voiceListIndex = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.voiceListIndex, 0LL, v12, v13, v14, v15, v16, v17);
  }
  voicePlayList = (SePlayer_o *)this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0LL);
    SePlayer__RemoveCallback(voicePlayList, v19, 0LL);
    servantNameRangeLabel = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayList;
    if ( servantNameRangeLabel )
    {
      p_voicePlayList = (BattleServantConfConponent_o *)&this->fields.voicePlayList;
      SePlayer__StopSe((SePlayer_o *)servantNameRangeLabel, 0.0, 0LL);
      p_voicePlayList->klass = 0LL;
      sub_B2C2F8(p_voicePlayList, 0LL, v21, v22, v23, v24, v25, v26);
      return;
    }
LABEL_13:
    sub_B2C434(servantNameRangeLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, int32_t cvId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  struct ServantStatusBattleListViewManager_o *battleTabListViewManager; // x8

  if ( (byte_4186063 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CvMaster___, *(_QWORD *)&cvId);
    sub_B2C35C(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4186063 = 1;
  }
  if ( LODWORD(this->fields.tabInitList) == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CvMaster___)) == 0LL
      || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       cvId,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0LL
      || (battleTabListViewManager = this->fields.battleTabListViewManager) == 0LL )
    {
      sub_B2C434(Instance, v8);
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
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ServantStatusFlavorTextListViewManager_o *v17; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v18; // x21
  struct System_Int32_array *profileNewIdList; // x8
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4186062 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantCommentEntity___ctor__, setMode);
    sub_B2C35C(&System_Action_ServantCommentEntity__TypeInfo, v5);
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectFlavor__, v7);
    this = (ServantStatusDialog_o *)sub_B2C35C(&Method_ServantStatusDialog__UpdateProfileList_b__219_0__, v8);
    byte_4186062 = 1;
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
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog__UpdateProfileList_b__219_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ServantCommentEntity___ctor__);
    if ( !battleTabListViewManager )
      goto LABEL_13;
    battleTabListViewManager->fields.sortKindButton = (struct UICommonButton_o *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&battleTabListViewManager->fields.sortKindButton,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( setMode )
    {
      v17 = (ServantStatusFlavorTextListViewManager_o *)v4->fields.battleTabListViewManager;
      v18 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_B2C42C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0LL);
      if ( v17 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v17, 1, v18, 0LL);
        return;
      }
LABEL_13:
      sub_B2C434(this, setMode);
    }
  }
  else
  {
    profileNewIdList = v4->fields.profileNewIdList;
    if ( !profileNewIdList )
      goto LABEL_13;
    if ( profileNewIdList->max_length <= 1 )
    {
      v20 = sub_B2C460(this);
      sub_B2C400(v20, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&imageLimitCount);
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
    sub_B2C434(this, svtId);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4186067 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_ServantStatusDialog_EndInitLoad__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_4186067 = 1;
  }
  Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  if ( AtlasManager__isLoadedSkinData(Instance, 1, 0LL) )
  {
    ServantStatusDialog__EndInitLoad(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  int32_t tabKind; // w20
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4186068 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4186068 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__SetAutoResumeByQuestId(tabKind, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__CloseConfirmDialog_17971588(Instance, v8, 0LL);
  ServantStatusDialog__Exit(this, v11);
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
  __int64 v11; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x8
  __int64 v14; // x8
  ServantCommentMaster_o *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  int32_t v18; // w22
  System_Int32_array *v19; // x23
  const MethodInfo *v20; // x1
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4186069 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentMaster___, entity);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4186069 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( mainInfo
    && System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mainInfo,
         (WarBoardManager_TaskList_o *)entity,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.mainInfo;
    if ( Master_WarQuestSelectionMaster )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        Master_WarQuestSelectionMaster,
        (WarBoardManager_TaskList_o *)entity,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentMaster___);
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
          *(_QWORD *)&v22.fields.currentCryptoKey = v17;
          *(_QWORD *)&v22.fields.fakeValue = v16;
          v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
          Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B2C374(int___TypeInfo, 1LL);
          if ( entity )
          {
            v19 = (System_Int32_array *)Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              if ( !Master_WarQuestSelectionMaster->fields._size )
                goto LABEL_23;
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.id;
              Master_WarQuestSelectionMaster = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)sub_B2C374(int___TypeInfo, 1LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_22;
              if ( !Master_WarQuestSelectionMaster->fields._size )
              {
LABEL_23:
                v21 = sub_B2C460(Master_WarQuestSelectionMaster);
                sub_B2C400(v21, 0LL);
              }
              LODWORD(Master_WarQuestSelectionMaster->fields._syncRoot) = entity->fields.priority;
              if ( v15 )
              {
                ServantCommentMaster__SetOpen_29256808(
                  v15,
                  v18,
                  v19,
                  (System_Int32_array *)Master_WarQuestSelectionMaster,
                  0LL);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185422 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isModify);
    byte_4185422 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantStatusDialog_EndDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantStatusDialog_EndDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isModify, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isModify, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isModify, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
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
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isModify, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isModify,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isModify, v22);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185423 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isModify);
    byte_4185423 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_B2C300(this, v10, callback, object);
}


void __fastcall ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, bool, _QWORD); // x0
  ServantStatusDialog_EndIndividualityDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, bool, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantStatusDialog_EndIndividualityDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, bool, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, isModify, isNeedSort, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(isModify, isNeedSort, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, isModify, isNeedSort, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))v17)(v22, isModify, isNeedSort, *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            isModify,
            isNeedSort,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, bool, __int64))v24)(v22, isModify, isNeedSort, v23);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185424 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isModify);
    sub_B2C35C(&int_TypeInfo, v9);
    byte_4185424 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_FormationEndDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantStatusDialog_FormationEndDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, isModify, *(_QWORD *)&questId, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(isModify, (unsigned int)questId, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, isModify, (unsigned int)questId, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v17)(
            v22,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            isModify,
            (unsigned int)questId,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v24)(v22, isModify, (unsigned int)questId, v23);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185425 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isModify);
    sub_B2C35C(&int_TypeInfo, v10);
    byte_4185425 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v12[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, bool, bool, _QWORD, _QWORD); // x0
  ServantStatusDialog_ResultDelegate_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(bool, bool, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  ServantStatusDialog_ResultDelegate_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v35;
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
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(bool, bool, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, isModify, isNeedSort, *(_QWORD *)&questId);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26(isModify, isNeedSort, (unsigned int)questId, v25);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, isModify, isNeedSort, (unsigned int)questId, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))v19)(
            v24,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, bool, _QWORD, _QWORD))(*v24
                                                                        + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                        + 312))(
            v24,
            isModify,
            isNeedSort,
            (unsigned int)questId,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, bool, _QWORD, __int64))v26)(
      v24,
      isModify,
      isNeedSort,
      (unsigned int)questId,
      v25);
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
  if ( (byte_418541E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v5);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B2C35C(
                                                             &Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
                                                             v6);
    byte_418541E = 1;
  }
  if ( isDecide )
  {
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)v4->fields.__4__this;
    if ( this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed((ServantStatusDialog_o *)this, v4->fields.type, 0LL);
      v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
      v8 = **(_QWORD **)(v7 + 192);
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AC505C(v8);
      this = **(ServantStatusDialog___c__DisplayClass202_0_o ***)(v8 + 184);
      if ( this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B2C434(this, isDecide);
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__
                                                                      + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_AC505C(v10);
  v11 = **(CommonUI_o ***)(v10 + 184);
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ServantStatusDialog___c__DisplayClass202_0__OnClickTdSpeed_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( !v11 )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_17971588(v11, _9__1, 0LL);
}


void __fastcall ServantStatusDialog___c__DisplayClass202_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass202_0_o *v2; // x19
  __int64 v3; // x1
  struct ServantStatusDialog_o *_4__this; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v6; // x21
  __int64 v7; // x9

  v2 = this;
  if ( (byte_418541F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, method);
    this = (ServantStatusDialog___c__DisplayClass202_0_o *)sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v3);
    byte_418541F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (profileTabListViewManager = (ServantStatusListViewManager_o *)_4__this->fields.profileTabListViewManager,
        v6 = sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        v7 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v6 + 40) = Method_ServantStatusDialog_OnSelectStatus__,
        *(_QWORD *)(v6 + 16) = v7,
        *(_QWORD *)(v6 + 32) = _4__this,
        sub_B2C2F8(v6 + 32, _4__this),
        !profileTabListViewManager) )
  {
    sub_B2C434(this, method);
  }
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v6,
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
  struct ServantStatusDialog_o *v15; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v17; // x21
  __int64 v18; // x9

  if ( (byte_4185420 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4185420 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(v8);
  servantStatusBattleConfirmDialog = **(struct ServantStatusFlavorTextListViewManager_o ***)(v8 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_17971588((CommonUI_o *)servantStatusBattleConfirmDialog, 0LL, 0LL);
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
    sub_B2C434(servantStatusBattleConfirmDialog, isDecide);
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
  ServantStatusListViewManager__SetMode_30332204(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v15 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v15->fields.profileTabListViewManager;
  v17 = sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v18 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v17 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 32) = v15;
  sub_B2C2F8(v17 + 32, v15);
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v17,
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
  struct ServantStatusDialog_o *v15; // x20
  ServantStatusListViewManager_o *profileTabListViewManager; // x19
  __int64 v17; // x21
  __int64 v18; // x9

  if ( (byte_4185421 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantStatusDialog_OnSelectStatus__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v6);
    byte_4185421 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AC505C(v8);
  servantStatusBattleConfirmDialog = **(struct ServantStatusFlavorTextListViewManager_o ***)(v8 + 184);
  if ( !servantStatusBattleConfirmDialog )
    goto LABEL_24;
  CommonUI__CloseConfirmDialog_17971588((CommonUI_o *)servantStatusBattleConfirmDialog, 0LL, 0LL);
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
    sub_B2C434(servantStatusBattleConfirmDialog, isDecide);
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
  ServantStatusListViewManager__SetMode_30332204(
    (ServantStatusListViewManager_o *)servantStatusBattleConfirmDialog,
    10,
    0LL);
  v15 = *p__4__this;
  if ( !*p__4__this )
    goto LABEL_24;
  profileTabListViewManager = (ServantStatusListViewManager_o *)v15->fields.profileTabListViewManager;
  v17 = sub_B2C42C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  v18 = *(_QWORD *)Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v17 + 40) = Method_ServantStatusDialog_OnSelectStatus__;
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 32) = v15;
  sub_B2C2F8(v17 + 32, v15);
  if ( !profileTabListViewManager )
    goto LABEL_24;
  ServantStatusListViewManager__SetMode(
    profileTabListViewManager,
    1,
    (ServantStatusListViewManager_CallbackFunc_o *)v17,
    0LL);
}