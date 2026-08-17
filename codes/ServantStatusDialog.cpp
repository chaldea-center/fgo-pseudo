void ServantStatusDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  ServantStatusDialog_c *v8; // x8
  __int64 v9; // x1
  struct ServantStatusDialog_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct ServantStatusDialog_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596C37C & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    sub_2213A60(&StringLiteral_3234/*"BattleCharaChangeConfirmDialog"*/);
    sub_2213A60(&StringLiteral_13286/*"ServantStatus/BattleCharaChangeConfirm"*/);
    sub_2213A60(&StringLiteral_434/*"#4C4C4C"*/);
    byte_596C37C = 1;
  }
  v7 = StringLiteral_434/*"#4C4C4C"*/;
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_434/*"#4C4C4C"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = ServantStatusDialog_TypeInfo;
  v9 = StringLiteral_13286/*"ServantStatus/BattleCharaChangeConfirm"*/;
  ServantStatusDialog_TypeInfo->static_fields->NameOffsetWhenHasRuby = (struct UnityEngine_Vector2_o)0xC000000000000000LL;
  static_fields = v8->static_fields;
  static_fields->BattleCharaChangeConfirmLoadAssetPath = (struct System_String_o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BattleCharaChangeConfirmLoadAssetPath,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_3234/*"BattleCharaChangeConfirmDialog"*/;
  v18 = ServantStatusDialog_TypeInfo->static_fields;
  v18->BattleCharaChangeConfirmDialogPrefabName = (struct System_String_o *)StringLiteral_3234/*"BattleCharaChangeConfirmDialog"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v18->BattleCharaChangeConfirmDialogPrefabName,
    v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Boolean_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t v46; // w1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7

  if ( (byte_596C37B & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    byte_596C37B = 1;
  }
  v3 = bool___TypeInfo;
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v4 = (struct System_Boolean_array *)sub_2213B20(v3, 4);
  this->fields.tabInitList = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tabInitList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.commandCardAssetNames = (struct System_Collections_Generic_List_string__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardAssetNames,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.statusImageAssetNames = (struct System_Collections_Generic_List_string__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.statusImageAssetNames,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dictChangeSvtVoiceIdList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestVoiceDataList,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceDataList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = StringLiteral_26090/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_26090/*"wait"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.defaultAnimationName, v46, v47, v48, v49, v50, v51, v52);
  this->fields.voiceEffectSelect = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596C330 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C330 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  this->fields.loadingBattleActorData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadingBattleActorData, 0, v5, v6, v7, v8, v9, v10);
  ServantStatusDialog__DestroyBattleChr(this, v11);
}


void ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UICamera_c *v3; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *last; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Object_o *dragged; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_GameObject_o *selectedObject; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  struct UICamera_StaticFields *static_fields; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UICamera_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct UICamera_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  _BYTE v55[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v56[4]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v57[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v58[4]; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v59[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_596C32A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10293/*"OnDragEnd"*/);
    sub_2213A60(&StringLiteral_10316/*"OnHover"*/);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    sub_2213A60(&StringLiteral_10358/*"OnScrollStop"*/);
    byte_596C32A = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, v2);
    v3 = UICamera_TypeInfo;
  }
  currentTouch = v3->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method, v2);
    TouchEffectManager__UnPress(0);
    v7 = UnityEngine_Object_TypeInfo;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    currentTouch->fields.pressStarted = 0;
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
    if ( UnityEngine_Object__op_Inequality(last, 0, 0) )
    {
      v11 = currentTouch->fields.last;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9, v10);
      UICamera__Notify(v11, (System_String_o *)StringLiteral_10293/*"OnDragEnd"*/, 0, 0);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Inequality(dragged, 0, 0) )
    {
      v15 = currentTouch->fields.dragged;
      v59[0] = 0;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v59);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v16, v17);
      UICamera__Notify(v15, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v18, 0);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
    {
      v20 = currentTouch->fields.current;
      v58[0] = 1;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v58);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v21, v22);
      UICamera__Notify(v20, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v23, 0);
    }
  }
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, v2);
  selectedObject = UICamera__get_selectedObject(0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0, 0) )
  {
    v57[0] = 0;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v57);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v29, v30);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v31, 0);
    v56[0] = 1;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v56);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v32, 0);
    v55[0] = 0;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v55);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10358/*"OnScrollStop"*/, v33, 0);
  }
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v27, v28);
  UICamera__set_selectedObject(0, 0);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->current, 0, v35, v36, v37, v38, v39, v40);
  v41 = UICamera_TypeInfo->static_fields;
  v41->currentCamera = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->currentCamera, 0, v42, v43, v44, v45, v46, v47);
  v48 = UICamera_TypeInfo->static_fields;
  v48->currentTouch = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->currentTouch, 0, v49, v50, v51, v52, v53, v54);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void ServantStatusDialog__ChangeBattleResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  SkillInfo_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  int32_t SvtId; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_c *v18; // x8
  ServantLimitImageMaster_o *v19; // x21
  int32_t v20; // w22
  ServantStatusListViewItem_o *v21; // x8
  int32_t v22; // w21
  int32_t v23; // w22
  int32_t DispLimitCountStage; // w0
  int32_t v25; // w21
  int32_t v26; // w22
  int32_t v27; // w23
  __int64 confirmDispLv; // x8
  int32_t SealAfter; // w22
  ServantStatusListViewItem_o *v30; // x8
  ServantStatusListViewItem_o *v31; // x23
  int32_t LimitCount; // w0
  int32_t v33; // w0
  ServantOverwriteStatus_o *Status; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  ServantStatusListViewItem_o *v41; // x21
  int32_t v42; // w0
  int32_t v43; // w0
  ServantOverwriteStatus_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  bool v51; // w8
  _BOOL4 v52; // w21
  System_Collections_ICollection_o *v53; // x0
  const MethodInfo *v54; // x2
  _BOOL4 v55; // w22
  int v56; // w21
  __int64 i; // x24
  unsigned __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x10
  SkillInfo_o *v61; // x0
  bool v62; // w2
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x19
  System_Action_o *v66; // x21
  const MethodInfo *v67; // x2

  if ( (byte_596C338 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
    byte_596C338 = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass163_0___ctor((ServantStatusDialog___c__DisplayClass163_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
  if ( !mainInfo )
    goto LABEL_52;
  if ( !mainInfo->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, v14);
    return;
  }
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0);
  v18 = DataManager_TypeInfo;
  *(_DWORD *)(v5 + 68) = SvtId;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v19 = (ServantLimitImageMaster_o *)mainInfo;
  v20 = *(_DWORD *)(v5 + 68);
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !v19 )
    goto LABEL_52;
  mainInfo = (ServantStatusListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              v19,
                                              v20,
                                              (int32_t)mainInfo,
                                              0);
  v21 = this->fields.mainInfo;
  *(_DWORD *)(v5 + 72) = (_DWORD)mainInfo;
  if ( !v21 )
    goto LABEL_52;
  v22 = *(_DWORD *)(v5 + 68);
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(v21, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v23 = (int)mainInfo;
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(this->fields.mainInfo, 0, 0);
  mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__GetSealAfter(v22, v23, DispLimitCountStage, 0, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v25 = (int)mainInfo;
  v26 = *(_DWORD *)(v5 + 68);
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v27 = (int)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                              this->fields.mainInfo,
                                              0);
  if ( !mainInfo )
    goto LABEL_52;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= LODWORD(mainInfo->fields.partyItem) )
LABEL_53:
    sub_2213CE4(mainInfo);
  SealAfter = LimitCountUtility__GetSealAfter(v26, v27, *((_DWORD *)&mainInfo->fields.memberItem + confirmDispLv), 0, 0);
  *(_DWORD *)(v5 + 76) = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v25, 0);
  mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(SealAfter, 0);
  v30 = this->fields.mainInfo;
  *(_DWORD *)(v5 + 80) = (_DWORD)mainInfo;
  if ( !v30 )
    goto LABEL_52;
  ServantStatusListViewItem__GetUserServantInfo(
    v30,
    *(_DWORD *)(v5 + 68),
    *(_DWORD *)(v5 + 76),
    (TreasureDvcInfo_o **)(v5 + 24),
    (SkillInfo_array **)(v5 + 48),
    (System_Int32_array **)(v5 + 96),
    0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_52;
  ServantStatusListViewItem__GetUserServantInfo(
    mainInfo,
    *(_DWORD *)(v5 + 68),
    *(_DWORD *)(v5 + 80),
    (TreasureDvcInfo_o **)(v5 + 32),
    (SkillInfo_array **)(v5 + 56),
    (System_Int32_array **)(v5 + 112),
    0);
  v31 = this->fields.mainInfo;
  if ( !v31 )
    goto LABEL_52;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  v33 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, v25, 0, 0);
  Status = ServantStatusListViewItem__GetStatus(v31, v33, 0);
  *(_QWORD *)(v5 + 88) = Status;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 88), (int32_t)Status, v35, v36, v37, v38, v39, v40);
  v41 = this->fields.mainInfo;
  if ( !v41 )
    goto LABEL_52;
  v42 = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  v43 = LimitCountUtility__ConvertStageToLimitCount(v42, SealAfter, 0, 0);
  v44 = ServantStatusListViewItem__GetStatus(v41, v43, 0);
  *(_QWORD *)(v5 + 104) = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 104), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  mainInfo = *(ServantStatusListViewItem_o **)(v5 + 24);
  if ( !mainInfo
    || (v51 = TreasureDvcInfo__Equals((TreasureDvcInfo_o *)mainInfo, *(TreasureDvcInfo_o **)(v5 + 32), 0),
        mainInfo = *(ServantStatusListViewItem_o **)(v5 + 88),
        *(_BYTE *)(v5 + 40) = !v51,
        !mainInfo) )
  {
LABEL_52:
    sub_2213CDC(mainInfo, v7);
  }
  v52 = ServantOverwriteStatus__Equals(
          (ServantOverwriteStatus_o *)mainInfo,
          *(ServantOverwriteStatus_o **)(v5 + 104),
          0);
  v53 = *(System_Collections_ICollection_o **)(v5 + 96);
  *(_BYTE *)(v5 + 64) = 0;
  v55 = 0;
  if ( !BasicHelper__IsNullOrEmpty(v53, 0) )
    v55 = !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v5 + 112), 0)
       && !System_Linq_Enumerable__SequenceEqual_int_(
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 96),
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 112),
             (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v56 = !v52;
  for ( i = 4; ; ++i )
  {
    mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v54);
      mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v58 = i - 4;
    if ( i - 4 >= mainInfo->fields.commandCodeEntity->fields.collectionNo.fields.fakeValue )
      break;
    v59 = *(_QWORD *)(v5 + 48);
    if ( !v59 )
      goto LABEL_52;
    if ( v58 >= *(unsigned int *)(v59 + 24) )
      goto LABEL_53;
    v60 = *(_QWORD *)(v5 + 56);
    if ( !v60 )
      goto LABEL_52;
    if ( v58 >= *(unsigned int *)(v60 + 24) )
      goto LABEL_53;
    v61 = *(SkillInfo_o **)(v59 + 8 * i);
    v7 = *(SkillInfo_o **)(v60 + 8 * i);
    if ( v61 )
    {
      v62 = 1;
    }
    else
    {
      if ( !v7 )
        continue;
      v61 = *(SkillInfo_o **)(v60 + 8 * i);
      v7 = 0;
      v62 = 0;
    }
    if ( !SkillInfo__Equals(v61, v7, v62, 0) )
    {
      *(_BYTE *)(v5 + 64) = 1;
      break;
    }
  }
  if ( ((v55 | v56) & 1) != 0 )
  {
    if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    {
      ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(this, (const MethodInfo *)v7);
      battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63, v64);
      if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      {
        ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
          (ServantStatusDialog___c__DisplayClass163_0_o *)v5,
          0);
        return;
      }
LABEL_49:
      ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        (ServantStatusDialog___c__DisplayClass163_0_o *)v5,
        0);
    }
    else
    {
      v66 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v66,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__2__,
        0);
      ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(this, v66, v67);
    }
  }
  else
  {
    if ( *(unsigned __int8 *)(v5 + 64) | *(unsigned __int8 *)(v5 + 40) )
      goto LABEL_49;
    ServantStatusDialog__SetChangeBattleResource(this, 0, v54);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeBattleVoice(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  v4 = this;
  if ( (byte_596C361 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C361 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager,
        mainInfo->fields.changeVoiceFlag = type,
        !this)
    || (ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)this, 3, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_2213CDC(this, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeCharaGraph(
        ServantStatusDialog_o *this,
        int32_t imageLimitCountStage,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v6; // x1

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_7;
  if ( ServantStatusListViewItem__GetCardImageLimitCountStage(mainInfo, 0) == imageLimitCountStage )
    return;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
LABEL_7:
    sub_2213CDC(mainInfo, *(_QWORD *)&imageLimitCountStage);
  if ( ServantStatusListViewItem__SelectCardImageLimitCountStage(mainInfo, imageLimitCountStage, 0) )
    ServantStatusDialog__ChangeCharaGraph_41463168(this, v6);
}


void ServantStatusDialog__ChangeCharaGraph_41463168(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v4; // x2
  System_String_o *DetailName; // x0
  const MethodInfo *v6; // x2
  int32_t CvId; // w0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  System_String_o **p_partyItem; // x8

  if ( (byte_596C379 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C379 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_17;
  if ( ServantStatusListViewItem__UpdateServantComment(mainInfo, 0) )
    ServantStatusDialog__UpdateProfileList(this, 1, v4);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.profileTabListViewManager;
  if ( !mainInfo )
    goto LABEL_17;
  ServantStatusFlavorTextListViewManager__UpdateParameter((ServantStatusFlavorTextListViewManager_o *)mainInfo, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_17;
  DetailName = ServantStatusListViewItem__GetDetailName(mainInfo, 0);
  ServantStatusDialog__SetDetailName(this, DetailName, v6);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_17;
  CvId = ServantStatusListViewItem__GetCvId(mainInfo, 0);
  if ( CvId < 1 )
  {
    p_partyItem = (System_String_o **)&StringLiteral_1/*""*/;
    goto LABEL_16;
  }
  v10 = CvId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CvMaster___);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)mainInfo,
                                                    v10,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0 )
  {
LABEL_17:
    sub_2213CDC(mainInfo, method);
  }
  p_partyItem = (System_String_o **)&mainInfo->fields.partyItem;
LABEL_16:
  ServantStatusDialog__UpdateCv(this, *p_partyItem, v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeTreasureDeviceSpeed(
        ServantStatusDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_596C360 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C360 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)mainInfo, 3, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_2213CDC(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__ChangeVoiceEffect(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_596C362 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C362 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_VoiceEffectSelect(mainInfo, type, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)mainInfo, 3, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_2213CDC(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__Close(ServantStatusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *statusImageAssetNames; // x8
  int32_t size; // w2
  int v18; // w9
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  struct System_Collections_Generic_List_string__o *commandCardAssetNames; // x8
  int32_t v23; // w2
  int v24; // w9
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  struct ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x8
  System_String_o *assetName; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  __int64 v36; // x2
  int v37; // w9
  System_String_o *loadVoiceData; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x1
  __int64 v46; // x2
  Il2CppObject *v47; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v49; // w2
  int v50; // w9
  RubyLabelHelper_o *servantNameRubyLabelHelper; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596C344 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C344 = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  memset(&v59, 0, sizeof(v59));
  if ( !statusTabListViewManager )
    goto LABEL_52;
  ServantStatusListViewManager__DestroyList(statusTabListViewManager, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.profileTabListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  ServantStatusFlavorTextListViewManager__DestroyList(
    (ServantStatusFlavorTextListViewManager_o *)statusTabListViewManager,
    0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.charaGraphListViewManager;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  ServantStatusCharaGraphListViewManager__DestroyList(
    (ServantStatusCharaGraphListViewManager_o *)statusTabListViewManager,
    (const MethodInfo *)callback);
  this->fields.mainInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, 0, v6, v7, v8, v9, v10, v11);
  this->fields.voiceEffectSelect = -1;
  ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(this, v12);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusImageAssetNames;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v59 = v58;
  v58.fields._list = 0;
  *(_QWORD *)&v58.fields._index = &v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v59.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13, v14);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  statusImageAssetNames = this->fields.statusImageAssetNames;
  if ( !statusImageAssetNames )
    goto LABEL_52;
  size = statusImageAssetNames->fields._size;
  v18 = statusImageAssetNames->fields._version + 1;
  statusImageAssetNames->fields._size = 0;
  statusImageAssetNames->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)statusImageAssetNames->fields._items, 0, size, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.commandCardAssetNames;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v59 = v58;
  v58.fields._list = 0;
  *(_QWORD *)&v58.fields._index = &v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v21 = v59.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
    AssetManager__releaseAssetStorage((System_String_o *)v21, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  commandCardAssetNames = this->fields.commandCardAssetNames;
  if ( !commandCardAssetNames )
    goto LABEL_52;
  v23 = commandCardAssetNames->fields._size;
  v24 = commandCardAssetNames->fields._version + 1;
  commandCardAssetNames->fields._size = 0;
  commandCardAssetNames->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)commandCardAssetNames->fields._items, 0, v23, 0);
  ServantStatusDialog__DestroyBattleChr(this, (const MethodInfo *)callback);
  loadingBattleActorData = this->fields.loadingBattleActorData;
  if ( loadingBattleActorData )
  {
    assetName = loadingBattleActorData->fields.assetName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25, v26);
    AssetManager__releaseAssetStorage(assetName, 0);
    this->fields.loadingBattleActorData = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadingBattleActorData,
      0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  ServantStatusDialog__StopVoice(this, v25);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_52;
  v36 = (unsigned int)requestVoiceDataList->fields._size;
  v37 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v37;
  if ( (int)v36 >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, v36, 0);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback, v36);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0);
    this->fields.loadVoiceData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadVoiceData, 0, v39, v40, v41, v42, v43, v44);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)statusTabListViewManager,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v59 = v58;
    v58.fields._list = 0;
    *(_QWORD *)&v58.fields._index = &v59;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v47 = v59.fields._current;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v45, v46);
      SoundManager__releaseAudioAssetStorage((System_String_o *)v47, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    voiceDataList = this->fields.voiceDataList;
    if ( !voiceDataList )
      goto LABEL_52;
    v49 = voiceDataList->fields._size;
    v50 = voiceDataList->fields._version + 1;
    voiceDataList->fields._size = 0;
    voiceDataList->fields._version = v50;
    if ( v49 >= 1 )
      System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v49, 0);
  }
  servantNameRubyLabelHelper = this->fields.servantNameRubyLabelHelper;
  if ( servantNameRubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(servantNameRubyLabelHelper, 0);
    this->fields.servantNameRubyLabelHelper = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantNameRubyLabelHelper,
      0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0),
        (statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_52:
    sub_2213CDC(statusTabListViewManager, callback);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)statusTabListViewManager, 2, 0, 0);
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


System_Collections_IEnumerator_o *ServantStatusDialog__CoWaitForEndOfFrame(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C359 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog__CoWaitForEndOfFrame_d__204_TypeInfo);
    byte_596C359 = 1;
  }
  v4 = sub_2213CCC(ServantStatusDialog__CoWaitForEndOfFrame_d__204_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__204___ctor((ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *)v4, 0, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleFBXComponent_o **p_battleActor; // x20
  BattleFBXComponent_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ServantStatusDialog_BattleActorData_o *currentBattleActorData; // x8
  MissionNaviTransitionBoardItem_o *p_currentBattleActorData; // x19
  System_String_o *assetName; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596C336 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C336 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    p_battleActor = &this->fields.battleActor;
    v8 = this->fields.battleActor;
    if ( !v8 || (BattleFBXComponent__RevertShaderFloatProperty(v8, 0), (v8 = *p_battleActor) == 0) )
      sub_2213CDC(v8, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_battleActor = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.battleActor, 0, v12, v13, v14, v15, v16, v17);
  }
  currentBattleActorData = this->fields.currentBattleActorData;
  if ( currentBattleActorData )
  {
    p_currentBattleActorData = (MissionNaviTransitionBoardItem_o *)&this->fields.currentBattleActorData;
    assetName = currentBattleActorData->fields.assetName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__releaseAssetStorage(assetName, 0);
    p_currentBattleActorData->klass = 0;
    sub_2213A04(p_currentBattleActorData, 0, v21, v22, v23, v24, v25, v26);
  }
}


bool ServantStatusDialog__EnableSpecialCostume(
        ServantStatusDialog_o *this,
        System_String_o **costumeName,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  ServantStatusListViewItem_o *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ServantStatusListViewItem_o *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DispLimitCountStageList; // x22
  ServantStatusDialog___c_c *v29; // x8
  struct ServantStatusDialog___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__239_0; // x23
  System_String_o *v32; // x21
  Il2CppObject *v33; // x24
  struct ServantStatusDialog___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x22
  System_Func_T__TResult__o *v42; // x23
  System_Collections_Generic_IEnumerable_string__o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v52; // w1

  if ( (byte_596C378 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__string__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog___c__EnableSpecialCostume_b__239_0__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass239_0__EnableSpecialCostume_b__1__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass239_0_TypeInfo);
    sub_2213A60(&ServantStatusDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_12418/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_26774/*"、"*/);
    byte_596C378 = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass239_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass239_0___ctor((ServantStatusDialog___c__DisplayClass239_0_o *)v5, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  Master_object = (ServantStatusListViewItem_o *)LocalizationManager__ContainsKey(
                                                   (System_String_o *)StringLiteral_12418/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/,
                                                   0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_21;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( !userSvtEntity || !UserServantEntity__IsHeroine(userSvtEntity, 0) )
  {
LABEL_21:
    v52 = (int)StringLiteral_1/*""*/;
    *costumeName = (System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)costumeName, v52, v10, v11, v12, v13, v14, v15);
    return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v10);
  Master_object = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = Master_object,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v19, v20, v21, v22, v23, v24),
        (Master_object = this->fields.mainInfo) == 0)
    || (Master_object = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(Master_object, 0),
        v25 = this->fields.mainInfo,
        *(_DWORD *)(v5 + 24) = (_DWORD)Master_object,
        !v25) )
  {
LABEL_23:
    sub_2213CDC(Master_object, v9);
  }
  DispLimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                                                                   v25,
                                                                                   0);
  v29 = ServantStatusDialog___c_TypeInfo;
  if ( !*(&ServantStatusDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo, v26, v27);
    v29 = ServantStatusDialog___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__239_0 = static_fields->__9__239_0;
  v32 = (System_String_o *)StringLiteral_26774/*"、"*/;
  if ( !_9__239_0 )
  {
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, v26, v27);
      static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__239_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__239_0, v33, Method_ServantStatusDialog___c__EnableSpecialCostume_b__239_0__, 0);
    v34 = ServantStatusDialog___c_TypeInfo->static_fields;
    v34->__9__239_0 = _9__239_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->__9__239_0, (int32_t)_9__239_0, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Where_int_(
          DispLimitCountStageList,
          (System_Func_TSource__bool__o *)_9__239_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v42 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(
    v42,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass239_0__EnableSpecialCostume_b__1__,
    0);
  v43 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v41,
                                                              (System_Func_TSource__TResult__o *)v42,
                                                              (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v44 = System_String__Join_75699092(v32, v43, 0);
  *costumeName = v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)costumeName, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  return !System_String__IsNullOrEmpty(*costumeName, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__EndBattleConfirm(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  struct System_Boolean_array *tabInitList; // x8
  ServantStatusDialog_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( isDecide )
  {
    tabInitList = this->fields.tabInitList;
    v4 = this;
    if ( !tabInitList )
      goto LABEL_7;
    if ( !LODWORD(tabInitList->max_length) )
      sub_2213CE4(this);
    this = (ServantStatusDialog_o *)this->fields.statusTabListViewManager;
    tabInitList->m_Items[0] = 0;
    if ( !this )
LABEL_7:
      sub_2213CDC(this, isDecide);
    ServantStatusListViewManager__DestroyList((ServantStatusListViewManager_o *)this, 0);
    ServantStatusDialog__SetChangeBattleResource(v4, 0, v5);
  }
}


void ServantStatusDialog__EndCloseConfirmSelectFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseConfirmSelectPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseConfirmServantQuest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__EndCloseSelectCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596C34E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C34E = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_2213CDC(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596C34C & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C34C = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_2213CDC(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *changeTransformButton; // x20
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  int32_t v15; // w22
  UnityEngine_GameObject_o *v16; // x20
  int v17; // w21
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s0
  int32_t v20; // w22
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s0
  bool v24; // w1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t v26; // w20
  int32_t v27; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  struct ServantStatusListViewItem_o *v30; // x8
  int32_t kind; // w8
  bool v33; // w8
  bool v34; // w8
  int32_t v35; // w8
  struct System_Boolean_array *tabInitList; // x10
  __int64 max_length_low; // x9
  __int64 v38; // x8
  bool *m_Items; // x10
  struct ServantStatusListViewItem_o *v40; // x8
  __int64 v41; // x2
  struct ServantStatusListViewItem_o *v42; // x8
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v55; // x1
  System_String_o *DetailName; // x0
  const MethodInfo *v57; // x2
  __int64 v58; // x2
  UnityEngine_Object_o *v59; // x21
  const MethodInfo *v60; // x2
  UILabel_o *v61; // x21
  __int64 *v62; // x8
  ServantEntity_o *ServantEntity; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  UnityEngine_Object_o *servantClassNameLabel; // x21
  UnityEngine_Object_o *v67; // x21
  __int64 v68; // x2
  struct ServantStatusListViewItem_o *v69; // x8
  struct ServantEntity_o *v70; // x8
  __int64 v71; // x2
  struct ServantStatusListViewItem_o *v72; // x8
  struct ServantEntity_o *v73; // x8
  int32_t GrandClassId; // w21
  System_String_o *klass; // x1
  UILabel_o *v76; // x0
  struct UILabel_o *v77; // x21
  UnityEngine_Object_o *battleExplanationLabel; // x21
  __int64 v79; // x2
  struct ServantStatusListViewItem_o *v80; // x8
  ServantLimitImageMaster_o *v81; // x21
  __int64 v82; // x2
  struct ServantStatusListViewItem_o *v83; // x8
  struct ServantEntity_o *v84; // x8
  __int64 v85; // x22
  __int64 v86; // x23
  int32_t v87; // w22
  struct UILabel_o *v88; // x23
  System_String_o *v89; // x24
  System_String_o *mText; // x25
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v92; // x0
  System_String_o *v93; // x1
  UILabel_o *v94; // x0
  struct UILabel_o *v95; // x21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x9
  int v97; // w8
  __int64 *v98; // x8
  UIWidget_o *battleTransformNameSprite; // x21
  UIWidget_o *battleTransformNameLabel; // x21
  UnityEngine_GameObject_o *v101; // x0
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x2
  int32_t v104; // w8
  unsigned int v105; // w8
  unsigned int v106; // w8
  System_Action_object__o *v107; // x20
  const MethodInfo *v108; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C327 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AssetData__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog__EndInitLoad_b__146_0__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_12415/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_2213A60(&StringLiteral_12416/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_2213A60(&StringLiteral_12417/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_2213A60(&StringLiteral_12424/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_2213A60(&StringLiteral_12423/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_4181/*"CancelInput"*/);
    sub_2213A60(&StringLiteral_6263/*"EndLoadInit"*/);
    byte_596C327 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_192;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeTransformButton, 0, 0);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
    if ( !baseObject )
      goto LABEL_192;
    if ( ServantStatusListViewItem__get_AnyTransformServant((ServantStatusListViewItem_o *)baseObject, 0) )
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !baseObject )
        goto LABEL_192;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.statusButton )
        goto LABEL_192;
      v8 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v8, LocalPositionX + 0.0, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_192;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.profileButton )
        goto LABEL_192;
      v12 = baseObject;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0);
      v14 = GameObjectExtensions__GetLocalPositionX(v13, 0);
      GameObjectExtensions__SetLocalPositionX(v12, v14 + (float)changeTransformAddTabMargin, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_192;
      v15 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.battleButton )
        goto LABEL_192;
      v16 = baseObject;
      v17 = v15 + changeTransformAddTabMargin;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0);
      v19 = GameObjectExtensions__GetLocalPositionX(v18, 0);
      GameObjectExtensions__SetLocalPositionX(v16, v19 + (float)v17, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_192;
      v20 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.voiceButton )
        goto LABEL_192;
      v21 = baseObject;
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0);
      v23 = GameObjectExtensions__GetLocalPositionX(v22, 0);
      GameObjectExtensions__SetLocalPositionX(v21, v23 + (float)(v20 + v17), 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_192;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_192;
      v24 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_192;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_192;
      v24 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v24, 0);
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_192;
  if ( mainInfo->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
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
    goto LABEL_74;
  }
  svtEntity = mainInfo->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_192;
  type = svtEntity->fields.type;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v7);
  baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_47388504(106, 0);
  if ( ((unsigned __int8)baseObject & 1) == 0 )
    goto LABEL_41;
  v30 = this->fields.mainInfo;
  if ( !v30 )
    goto LABEL_192;
  if ( v30->fields.favoriteUserSvtId >= 1 && SvtType__IsOrganization(type, 0) )
  {
    kind = this->fields.kind;
    v33 = kind != 3 && kind != 12;
  }
  else
  {
LABEL_41:
    v33 = 0;
  }
  this->fields.isUseFavorite = v33;
  v34 = SvtType__IsOrganization(type, 0) && this->fields.kind != 12;
  this->fields.isUsePush = v34;
  baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    v26 = 0;
    v27 = 28;
LABEL_74:
    this->fields.kind = v27;
    goto LABEL_75;
  }
  baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0xC:
        v26 = 0;
        v27 = 12;
        break;
      case 4:
      case 0xD:
        v26 = 0;
        v27 = 13;
        break;
      case 5:
      case 0xE:
        v26 = 0;
        v27 = 14;
        break;
      case 6:
      case 0xF:
        v26 = 0;
        v27 = 15;
        break;
      case 7:
      case 0x10:
        v26 = 0;
        v27 = 16;
        break;
      case 8:
      case 0x11:
        v26 = 0;
        v27 = 17;
        break;
      case 9:
      case 0x12:
        v26 = 0;
        v27 = 18;
        break;
      case 0x13:
        v26 = 0;
        v27 = 19;
        break;
      case 0x1D:
      case 0x1F:
        v26 = 0;
        v27 = 31;
        break;
      case 0x21:
        v27 = 11;
        v26 = 1;
        break;
      default:
        v26 = 0;
        v27 = 11;
        break;
    }
    goto LABEL_74;
  }
  baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0);
  if ( ((unsigned __int8)baseObject & 1) == 0 )
  {
    v35 = this->fields.kind;
    if ( v35 != 36 )
    {
      v26 = 0;
      if ( v35 == 29 )
        v27 = 30;
      else
        v27 = 10;
      goto LABEL_74;
    }
  }
  v26 = 0;
LABEL_75:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_192;
  max_length_low = LODWORD(tabInitList->max_length);
  v38 = 0;
  m_Items = tabInitList->m_Items;
  do
  {
    if ( max_length_low == v38 )
      sub_2213CE4(baseObject);
    m_Items[v38++] = 0;
  }
  while ( v38 != 4 );
  v40 = this->fields.mainInfo;
  if ( !v40 )
    goto LABEL_192;
  if ( v40->fields.userSvtCollectionEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v7);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCommentMaster___);
    v42 = this->fields.mainInfo;
    if ( !v42 )
      goto LABEL_192;
    baseSvtEntity = v42->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_192;
    v44 = (ServantCommentMaster_o *)baseObject;
    v45 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v46 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v41);
    *(_QWORD *)&v109.fields.currentCryptoKey = v45;
    *(_QWORD *)&v109.fields.fakeValue = v46;
    baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                               v109,
                                               0);
    if ( !v44 )
      goto LABEL_192;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v44, (int32_t)baseObject, 0);
    this->fields.newProfileList = NewProfileEntities;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_192;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_192;
    ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_192;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v55);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_192;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0, 1, 0, 0, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_192;
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)baseObject, 1, 0, 0, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
  if ( !baseObject )
    goto LABEL_192;
  DetailName = ServantStatusListViewItem__GetDetailName((ServantStatusListViewItem_o *)baseObject, 0);
  ServantStatusDialog__SetDetailName(this, DetailName, v57);
  baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
  if ( !baseObject )
    goto LABEL_192;
  if ( !baseObject[7].fields.m_CachedPtr )
  {
    ServantEntity = ServantStatusListViewItem__GetServantEntity((ServantStatusListViewItem_o *)baseObject, 0, 0);
    if ( ServantEntity && ServantEntity__get_IsServantEquip(ServantEntity, 0) )
    {
      servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
      if ( !UnityEngine_Object__op_Inequality(servantClassNameLabel, 0, 0) )
        goto LABEL_176;
      v61 = this->fields.servantClassNameLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v60);
      v62 = &StringLiteral_12424/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/;
      goto LABEL_104;
    }
    v67 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v67, 0, 0);
    if ( ((unsigned __int8)baseObject & 1) == 0 )
    {
LABEL_138:
      battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v68);
      if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0, 0) )
        goto LABEL_176;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v60);
      baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v80 = this->fields.mainInfo;
      if ( !v80 )
LABEL_192:
        sub_2213CDC(baseObject, method);
      if ( v80->fields.userSvtEntity )
      {
        v81 = (ServantLimitImageMaster_o *)baseObject;
        ServantStatusDialog__SetBattleCharaTabExplanation(this, method);
        v83 = this->fields.mainInfo;
        if ( !v83 )
          goto LABEL_192;
        v84 = v83->fields.svtEntity;
        if ( !v84 )
          goto LABEL_192;
        v85 = *(_QWORD *)&v84->fields.id.fields.currentCryptoKey;
        v86 = *(_QWORD *)&v84->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v82);
        *(_QWORD *)&v110.fields.currentCryptoKey = v85;
        *(_QWORD *)&v110.fields.fakeValue = v86;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   v110,
                                                   0);
        if ( !v81 )
          goto LABEL_192;
        v87 = (int)baseObject;
        if ( !ServantLimitImageMaster__IsServantLimitCountSeal(v81, (int32_t)baseObject, 3, 0) )
          goto LABEL_163;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v81,
                                                   (System_String_o *)StringLiteral_12417/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v87,
                                                   0);
        v88 = this->fields.battleExplanationLabel;
        if ( !v88 )
          goto LABEL_192;
        v89 = (System_String_o *)baseObject;
        mText = v88->fields.mText;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v81,
                                                        v87,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v92 = System_String__Format(v89, LimitCountSealedServantName, 0);
        v93 = System_String__Concat_75651716(mText, v92, 0);
        v94 = v88;
      }
      else
      {
        v95 = this->fields.battleExplanationLabel;
        userSvtCollectionEntity = v80->fields.userSvtCollectionEntity;
        v97 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( userSvtCollectionEntity )
        {
          if ( !v97 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v79);
          v98 = &StringLiteral_12415/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        }
        else
        {
          if ( !v97 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v79);
          v98 = &StringLiteral_12416/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        }
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v98, 0);
        if ( !v95 )
          goto LABEL_192;
        v93 = (System_String_o *)baseObject;
        v94 = v95;
      }
      UILabel__set_text(v94, v93, 0);
LABEL_163:
      baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
      if ( !baseObject )
        goto LABEL_192;
      baseObject = (UnityEngine_GameObject_o *)ServantStatusListViewItem__get_AnyTransformServant(
                                                 (ServantStatusListViewItem_o *)baseObject,
                                                 0);
      battleTransformNameSprite = (UIWidget_o *)this->fields.battleTransformNameSprite;
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
        if ( baseObject )
        {
          TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(
                                       (ServantStatusListViewItem_o *)baseObject,
                                       0);
          if ( battleTransformNameSprite )
          {
            UIWidget__set_color(battleTransformNameSprite, TransformNameSpriteColor, 0);
            baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
            if ( baseObject )
            {
              battleTransformNameLabel = (UIWidget_o *)this->fields.battleTransformNameLabel;
              TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(
                                          (ServantStatusListViewItem_o *)baseObject,
                                          0);
              if ( battleTransformNameLabel )
              {
                UIWidget__set_color(battleTransformNameLabel, TransformNameLabelColor, 0);
                baseObject = (UnityEngine_GameObject_o *)this->fields.battleTransformNameSprite;
                if ( baseObject )
                {
                  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
                  if ( baseObject )
                  {
                    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
                    baseObject = (UnityEngine_GameObject_o *)this->fields.battleExplanationLabel;
                    if ( baseObject )
                    {
                      v101 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
                      GameObjectExtensions__SetLocalPositionY(v101, 177.0, 0);
                      goto LABEL_176;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( battleTransformNameSprite )
      {
        baseObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.battleTransformNameSprite,
                       0);
        if ( baseObject )
        {
          UnityEngine_GameObject__SetActive(baseObject, 0, 0);
          goto LABEL_176;
        }
      }
      goto LABEL_192;
    }
    v69 = this->fields.mainInfo;
    if ( !v69 )
      goto LABEL_192;
    if ( v69->fields._IsGrandServant_k__BackingField )
    {
      baseObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v68);
        v69 = this->fields.mainInfo;
        if ( !v69 )
          goto LABEL_192;
        baseObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      v70 = v69->fields.svtEntity;
      if ( !v70 )
        goto LABEL_192;
      baseObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Contains_int_(
                                                 *(System_Collections_Generic_IEnumerable_TSource__o **)(baseObject[7].fields.m_CachedPtr + 1224),
                                                 v70->fields.classId,
                                                 (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v71);
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        v72 = this->fields.mainInfo;
        if ( !v72 )
          goto LABEL_192;
        v73 = v72->fields.svtEntity;
        if ( !v73 )
          goto LABEL_192;
        if ( !baseObject )
          goto LABEL_192;
        GrandClassId = GrandGraphDetailMaster__GetGrandClassId(
                         (GrandGraphDetailMaster_o *)baseObject,
                         v73->fields.classId,
                         0);
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !baseObject )
          goto LABEL_192;
        baseObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
                                                   GrandClassId,
                                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( !baseObject || !this->fields.servantClassNameLabel )
          goto LABEL_192;
        klass = (System_String_o *)baseObject[1].klass;
        v76 = this->fields.servantClassNameLabel;
        goto LABEL_137;
      }
      v69 = this->fields.mainInfo;
      if ( !v69 )
        goto LABEL_192;
    }
    baseObject = (UnityEngine_GameObject_o *)v69->fields.svtEntity;
    if ( !baseObject )
      goto LABEL_192;
    v77 = this->fields.servantClassNameLabel;
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0);
    if ( !v77 )
      goto LABEL_192;
    klass = (System_String_o *)baseObject;
    v76 = v77;
LABEL_137:
    UILabel__set_text(v76, klass, 0);
    goto LABEL_138;
  }
  v59 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v58);
  if ( !UnityEngine_Object__op_Inequality(v59, 0, 0) )
    goto LABEL_176;
  v61 = this->fields.servantClassNameLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v60);
  v62 = &StringLiteral_12423/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
LABEL_104:
  baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v62, 0);
  if ( !v61 )
    goto LABEL_192;
  UILabel__set_text(v61, (System_String_o *)baseObject, 0);
LABEL_176:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_192;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    v60);
  ServantStatusDialog__SetMark(this, v102);
  v104 = this->fields.kind;
  if ( v104 > 28 )
  {
    v105 = v104 - 30;
    if ( v105 < 7 )
    {
      v26 = dword_ED9328[v105];
      goto LABEL_185;
    }
LABEL_183:
    v26 = 0;
    goto LABEL_185;
  }
  if ( v104 == 10 )
  {
    v26 = 1;
    goto LABEL_185;
  }
  if ( v104 != 11 )
  {
    v26 = 1;
    if ( v104 != 28 )
      goto LABEL_183;
  }
LABEL_185:
  ServantStatusDialog__SetTabKind(this, v26, v103);
  v106 = this->fields.kind;
  if ( v106 - 10 < 0x13 || v106 <= 0x24 && ((1LL << v106) & 0x11C0000000LL) != 0 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6263/*"EndLoadInit"*/,
      0.1,
      0);
  }
  else
  {
    v107 = (System_Action_object__o *)sub_2213CCC(System_Action_AssetData__TypeInfo);
    System_Action_object____ctor(v107, (Il2CppObject *)this, Method_ServantStatusDialog__EndInitLoad_b__146_0__, 0);
    ServantStatusDialog__StartStatusLoad(this, (System_Action_AssetData__o *)v107, v108);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4181/*"CancelInput"*/, 0.0, 0);
}


void ServantStatusDialog__EndLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_596C32F & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_6263/*"EndLoadInit"*/);
    byte_596C32F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)Instance, 5, 0);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)Instance, 3, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_2213CDC(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6263/*"EndLoadInit"*/, 0.1, 0);
}


void ServantStatusDialog__EndLoadBattle(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_596C333 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C333 = 1;
  }
  if ( this->fields.loadingBattleActorData )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v5);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    loadingBattleActorData = this->fields.loadingBattleActorData;
    this->fields.loadingBattleActorData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadingBattleActorData, 0, v7, v8, v9, v10, v11, v12);
    ServantStatusDialog__PlayBattleEffect(this, loadingBattleActorData, v13);
  }
}


void ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_596C32B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog__EndLoadInit_b__150_0__);
    byte_596C32B = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__150_0__, 0);
  ServantStatusDialog__OpenTutorialNotificationDialog(this, v3, v4);
  ServantStatusDialog__InitList(this, v5);
}


void ServantStatusDialog__EndLoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Boolean_array *tabInitList; // x8
  struct System_Boolean_array *v6; // x8
  struct System_Boolean_array *v7; // x8
  int32_t tabKind; // w9
  const MethodInfo *v9; // x2
  System_String_o *DetailName; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_596C35A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C35A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 0, 0);
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_22;
  if ( !LODWORD(tabInitList->max_length) )
    goto LABEL_23;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
  tabInitList->m_Items[0] = 0;
  if ( !Instance )
    goto LABEL_22;
  ServantStatusListViewManager__CacheViewTopContentsAndGap((ServantStatusListViewManager_o *)Instance, 0);
  Instance = (CommonUI_o *)this->fields.mainInfo;
  if ( !Instance )
    goto LABEL_22;
  Instance = (CommonUI_o *)ServantStatusListViewItem__get_IsSaveTransformServant(
                             (ServantStatusListViewItem_o *)Instance,
                             0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v6 = this->fields.tabInitList;
    if ( !v6 )
      goto LABEL_22;
    if ( LODWORD(v6->max_length) <= 2 )
      goto LABEL_23;
    v6->m_Items[2] = 0;
  }
  ServantStatusDialog__DestroyBattleChr(this, v4);
  v7 = this->fields.tabInitList;
  if ( !v7 )
    goto LABEL_22;
  if ( (v7->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_2213CE4(Instance);
  tabKind = this->fields.tabKind;
  v7->m_Items[3] = 0;
  if ( tabKind == 3 )
    ServantStatusDialog__StopVoice(this, v4);
  Instance = (CommonUI_o *)this->fields.mainInfo;
  if ( !Instance )
    goto LABEL_22;
  if ( ServantStatusListViewItem__get_IsSaveTransformServant((ServantStatusListViewItem_o *)Instance, 0) )
  {
    Instance = (CommonUI_o *)this->fields.mainInfo;
    if ( Instance )
    {
      DetailName = ServantStatusListViewItem__GetDetailName((ServantStatusListViewItem_o *)Instance, 0);
      ServantStatusDialog__SetDetailName(this, DetailName, v11);
      Instance = (CommonUI_o *)this->fields.charaGraphListViewManager;
      if ( Instance )
      {
        ServantStatusCharaGraphListViewManager__CreateList(
          (ServantStatusCharaGraphListViewManager_o *)Instance,
          this->fields.mainInfo,
          v12);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_2213CDC(Instance, v4);
  }
LABEL_21:
  ServantStatusDialog__SetTabKind(this, this->fields.tabKind, v9);
}


void ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Item; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2

  if ( (byte_596C33C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C33C = 1;
  }
  loadVoiceData = (Il2CppObject *)this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.voiceDataList;
    if ( voiceDataList )
    {
      items = voiceDataList->fields._items;
      v12 = Method_System_Collections_Generic_List_string__Add__;
      ++voiceDataList->fields._version;
      if ( items )
      {
        size = voiceDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            voiceDataList,
            loadVoiceData,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v14[4] = (Il2CppClass *)loadVoiceData;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 4), (int32_t)loadVoiceData, v2, v3, v4, v5, v6, v7);
        }
        this->fields.loadVoiceData = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loadVoiceData, 0, v15, v16, v17, v18, v19, v20);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( voiceDataList )
            {
              CommonUI__SetLoadMode((CommonUI_o *)voiceDataList, 0, 0);
              return;
            }
          }
          else
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     voiceDataList,
                     0,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.loadVoiceData,
              (int32_t)Item,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
            if ( voiceDataList )
            {
              System_Collections_Generic_List_object___RemoveAt(
                voiceDataList,
                0,
                (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v28 = this->fields.loadVoiceData;
              v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
              if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v30, v31);
              SoundManager__loadAudioAssetStorage(v28, v29, 1, 0);
              return;
            }
          }
        }
      }
    }
    sub_2213CDC(voiceDataList, loadVoiceData);
  }
}


void ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t max_length; // w10
  int32_t v19; // w9
  ServantVoiceData_o *v20; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596C340 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6294/*"EndWaitVoice"*/);
    byte_596C340 = 1;
  }
  this->fields.voicePlayer = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v2, v3, v4, v5, v6, v7);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    max_length = voicePlayList->max_length;
    v19 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v19;
    if ( v19 < max_length )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_2213CE4(voiceTabListViewManager);
      v20 = voicePlayList->m_Items[v19];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6294/*"EndWaitVoice"*/,
          v20->fields.delay,
          0);
        return;
      }
LABEL_18:
      sub_2213CDC(voiceTabListViewManager, v10);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_44653016(voiceTabListViewManager, 2, -1, 0);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayList, 0, v11, v12, v13, v14, v15, v16);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayAssetName, 0, v21, v22, v23, v24, v25, v26);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_44653016(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__EndRandomLimitCountConfirm(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *statusTabListViewManager; // x0
  const MethodInfo *v9; // x2
  ServantStatusListViewManager_o *v10; // x20
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_596C356 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_596C356 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  statusTabListViewManager = **(CommonUI_o ***)(v7 + 184);
  if ( !statusTabListViewManager )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(statusTabListViewManager, 0);
  if ( isDecide )
  {
    statusTabListViewManager = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( !statusTabListViewManager )
      goto LABEL_13;
    ServantStatusListViewManager__CacheViewTopTargetContents(
      (ServantStatusListViewManager_o *)statusTabListViewManager,
      19,
      0);
    ServantStatusDialog__SetTabKind(this, 0, v9);
  }
  v10 = this->fields.statusTabListViewManager;
  v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !v10 )
LABEL_13:
    sub_2213CDC(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v10, 1, v11, 0);
}


void ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusDialog_o *v8; // x19
  struct ServantVoiceData_array *voicePlayList; // x8
  __int64 voicePlayNum; // x9
  int max_length; // w10
  ServantVoiceData_o *v12; // x8
  System_String_o *voicePlayAssetName; // x20
  System_String_o *id; // x21
  SoundManager_c *v15; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v17; // x22
  SePlayer_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  MissionNaviTransitionBoardItem_o *p_voicePlayer; // x0

  v8 = this;
  if ( (byte_596C33F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_596C33F = 1;
  }
  voicePlayList = v8->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v8->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_2213CE4(this);
      v12 = voicePlayList->m_Items[voicePlayNum];
      if ( v12 )
      {
        voicePlayAssetName = v8->fields.voicePlayAssetName;
        id = v12->fields.id;
        v15 = SoundManager_TypeInfo;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
          v15 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
        v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0);
        v18 = SoundManager__playVoice_48511684(voicePlayAssetName, id, DEFAULT_VOLUME, v17, 0, 0);
        p_voicePlayer = (MissionNaviTransitionBoardItem_o *)&v8->fields.voicePlayer;
        v8->fields.voicePlayer = v18;
        goto LABEL_16;
      }
LABEL_17:
      sub_2213CDC(this, method);
    }
    if ( v8->fields.tabKind == 3 && (v8->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_44653016((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0);
      v8->fields.voiceListIndex = -1;
    }
    v8->fields.voicePlayList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.voicePlayList, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(v18) = 0;
    p_voicePlayer = (MissionNaviTransitionBoardItem_o *)&v8->fields.voicePlayAssetName;
    v8->fields.voicePlayNum = 0;
    v8->fields.voicePlayAssetName = 0;
LABEL_16:
    sub_2213A04(p_voicePlayer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
}


void ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  __int64 v5; // x2
  struct ServantStatusListViewItem_o *v6; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  ServantStatusDialog_o *v8; // x20
  __int128 v9; // q1
  __int64 v10; // x2
  struct ServantStatusListViewItem_o *v11; // x8
  struct UserServantEntity_o *v12; // x8
  ServantStatusDialog_o *v13; // x20
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  struct ServantStatusListViewItem_o *v17; // x8
  ServantStatusDialog_o *v18; // x22
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v20; // w20
  int32_t v21; // w0
  __int64 v22; // x2
  struct ServantStatusListViewItem_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w21
  __int64 v26; // x23
  __int64 v27; // x24
  ServantStatusDialog_o *v28; // x23
  int32_t LimitCount; // w0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int *p_CHARA_BASE_POSITION; // x9
  struct UnityEngine_Vector3_o *v32; // x10
  int v33; // w11
  int v34; // t1
  float x; // t1
  bool *p_isNeedSort; // x24
  struct ServantStatusListViewItem_o *v37; // x8
  ServantStatusDialog_o *v38; // x22
  struct ServantStatusListViewItem_o *v39; // x8
  ServantStatusDialog_o *v40; // x23
  struct ServantStatusListViewItem_o *v41; // x8
  struct ServantStatusListViewItem_o *v42; // x8
  ServantOverwriteStatus_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v47; // [xsp+60h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v3 = this;
  if ( (byte_596C353 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C353 = 1;
  }
  mainInfo = v3->fields.mainInfo;
  entity = 0;
  v47 = 0;
  tdInfo = 0;
  if ( !mainInfo )
    goto LABEL_67;
  if ( mainInfo->fields.userSvtEntity )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_67;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    v6 = v3->fields.mainInfo;
    if ( !v6 )
      goto LABEL_67;
    userSvtEntity = v6->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_67;
    v8 = this;
    v9 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v9;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result, v5);
    v45 = v46;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v45, 0);
    if ( !v8 )
      goto LABEL_67;
    if ( !DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
            &entity,
            (int64_t)this,
            (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_67;
      this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      v11 = v3->fields.mainInfo;
      if ( !v11 )
        goto LABEL_67;
      v12 = v11->fields.userSvtEntity;
      if ( !v12 )
        goto LABEL_67;
      v13 = this;
      v14 = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
      v15 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
      v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v46.fields.currentCryptoKey = v14;
      *(_OWORD *)&v46.fields.fakeValue = v15;
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, result, v10);
      v44 = v46;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v44, 0);
      if ( !v13 )
        goto LABEL_67;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
        &entity,
        (int64_t)this,
        (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    }
    if ( entity )
    {
      this = (ServantStatusDialog_o *)UserServantEntity__GetServantEntity((UserServantEntity_o *)entity, -1, 0);
      v17 = v3->fields.mainInfo;
      if ( !v17 )
        goto LABEL_67;
      v18 = this;
      this = (ServantStatusDialog_o *)v17->fields.userSvtEntity;
      if ( !this )
        goto LABEL_67;
      DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                       (UserServantEntity_o *)this,
                                       -1,
                                       0,
                                       0,
                                       0);
      this = (ServantStatusDialog_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                        DispLimitCountStageSealAfter,
                                        0);
      if ( !entity )
        goto LABEL_67;
      v20 = (int)this;
      v21 = UserServantEntity__GetDispLimitCountStageSealAfter((UserServantEntity_o *)entity, -1, 0, 0, 0);
      this = (ServantStatusDialog_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v21, 0);
      v23 = v3->fields.mainInfo;
      if ( !v23 )
        goto LABEL_67;
      v24 = v23->fields.userSvtEntity;
      if ( !v24 )
        goto LABEL_67;
      v25 = (int)this;
      v26 = *(_QWORD *)&v24->fields.transformVal.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v24->fields.transformVal.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, result, v22);
      *(_QWORD *)&v50.fields.currentCryptoKey = v26;
      *(_QWORD *)&v50.fields.fakeValue = v27;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v50, 0);
      if ( !entity )
        goto LABEL_67;
      if ( (_DWORD)this != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[24],
                             0) )
      {
        p_isNeedSort = &v3->fields.isNeedSort;
        goto LABEL_44;
      }
      if ( v20 != v25 )
      {
        this = (ServantStatusDialog_o *)v3->fields.mainInfo;
        if ( !this )
          goto LABEL_67;
        this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0);
        if ( !v18 )
          goto LABEL_67;
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v18, (int32_t)this, v20, 0);
        if ( !v3->fields.mainInfo )
          goto LABEL_67;
        v28 = this;
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0);
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v18, LimitCount, v25, 0);
        if ( !v28 || !this )
          goto LABEL_67;
        m_CancellationTokenSource = v28->fields.m_CancellationTokenSource;
        if ( (_DWORD)m_CancellationTokenSource == LODWORD(this->fields.m_CancellationTokenSource) )
        {
          if ( !m_CancellationTokenSource || v28 == this || (int)m_CancellationTokenSource < 1 )
            goto LABEL_46;
          p_CHARA_BASE_POSITION = (int *)&v28->fields.CHARA_BASE_POSITION;
          v32 = &this->fields.CHARA_BASE_POSITION;
          while ( 1 )
          {
            v34 = *p_CHARA_BASE_POSITION++;
            v33 = v34;
            x = v32->fields.x;
            v32 = (struct UnityEngine_Vector3_o *)((char *)v32 + 4);
            if ( v33 != LODWORD(x) )
              break;
            LODWORD(m_CancellationTokenSource) = (_DWORD)m_CancellationTokenSource - 1;
            if ( !(_DWORD)m_CancellationTokenSource )
              goto LABEL_46;
          }
        }
        v3->fields.isNeedSort = 1;
LABEL_46:
        if ( v3->fields.isNeedSort )
          goto LABEL_47;
        v37 = v3->fields.mainInfo;
        if ( !v37 )
          goto LABEL_67;
        this = (ServantStatusDialog_o *)v37->fields.userSvtEntity;
        if ( !this )
          goto LABEL_67;
        this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList(
                                          (UserServantEntity_o *)this,
                                          v20,
                                          -1,
                                          1,
                                          -1,
                                          0);
        if ( !entity )
          goto LABEL_67;
        v38 = this;
        this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList(
                                          (UserServantEntity_o *)entity,
                                          v25,
                                          -1,
                                          1,
                                          -1,
                                          0);
        v39 = v3->fields.mainInfo;
        if ( !v39 )
          goto LABEL_67;
        v40 = this;
        this = (ServantStatusDialog_o *)v39->fields.userSvtEntity;
        if ( !this )
          goto LABEL_67;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v20, 0, 0);
        this = (ServantStatusDialog_o *)entity;
        if ( !entity )
          goto LABEL_67;
        p_isNeedSort = &v3->fields.isNeedSort;
        UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v47, -1, v25, 0, 0);
        this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                          (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
        if ( ((unsigned __int8)this & 1) == 0 )
          *p_isNeedSort = 1;
        if ( !tdInfo || !v47 )
          goto LABEL_67;
        if ( tdInfo->fields.id == v47->fields.id )
        {
          if ( *p_isNeedSort )
            goto LABEL_47;
          v41 = v3->fields.mainInfo;
          if ( v41 )
          {
            this = (ServantStatusDialog_o *)v41->fields.userSvtEntity;
            if ( this )
            {
              this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                                (UserServantEntity_o *)this,
                                                v41->fields.questRestrictionInfo,
                                                0);
              v42 = v3->fields.mainInfo;
              if ( v42 )
              {
                v43 = (ServantOverwriteStatus_o *)this;
                this = (ServantStatusDialog_o *)entity;
                if ( entity )
                {
                  this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                                    (UserServantEntity_o *)entity,
                                                    v42->fields.questRestrictionInfo,
                                                    0);
                  if ( v43 )
                  {
                    if ( ServantOverwriteStatus__IsEqualForSort(v43, (ServantOverwriteStatus_o *)this, 0) )
                      goto LABEL_47;
                    goto LABEL_44;
                  }
                }
              }
            }
          }
LABEL_67:
          sub_2213CDC(this, result);
        }
LABEL_44:
        *p_isNeedSort = 1;
      }
    }
  }
LABEL_47:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x21
  UserServantEntity_c *v6; // x0
  UnityEngine_Object_o *battleActor; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _QWORD *p_klass; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x0
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  v3 = this;
  if ( (byte_596C354 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusDialog_o *)sub_2213A60(&UserServantEntity_TypeInfo);
    byte_596C354 = 1;
  }
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v6 = UserServantEntity_TypeInfo;
    if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, method, v2);
      v6 = UserServantEntity_TypeInfo;
    }
    userSvtEntity->fields.dispLimitCountAfter = v6->static_fields->InitDispLimitCountAfter;
  }
  battleActor = (UnityEngine_Object_o *)v3->fields.battleActor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v3->fields.battleActor;
    if ( this )
    {
      BattleFBXComponent__RevertShaderFloatProperty((BattleFBXComponent_o *)this, 0);
      goto LABEL_13;
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
LABEL_13:
  p_klass = &v3->fields.individualityCallbackFunc->klass;
  if ( p_klass )
  {
    v3->fields.individualityCallbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v3->fields.individualityCallbackFunc,
      0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v3->fields.resultCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.resultCallbackFunc, 0, v15, v16, v17, v18, v19, v20);
    v3->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.callbackFunc, 0, v21, v22, v23, v24, v25, v26);
    v27 = p_klass[8];
    isModify = v3->fields.isModify;
    isNeedSort = v3->fields.isNeedSort;
LABEL_15:
    ((void (__fastcall *)(__int64, _BOOL8, __int64, _QWORD))p_klass[3])(v27, isModify, isNeedSort, p_klass[5]);
    return;
  }
  resultCallbackFunc = v3->fields.resultCallbackFunc;
  if ( resultCallbackFunc )
  {
    v3->fields.resultCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.resultCallbackFunc, 0, v8, v9, v10, v11, v12, v13);
    v3->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.callbackFunc, 0, v31, v32, v33, v34, v35, v36);
    ((void (__fastcall *)(intptr_t, bool, bool, _QWORD, intptr_t))resultCallbackFunc->fields.invoke_impl)(
      resultCallbackFunc->fields.method_code,
      v3->fields.isModify,
      v3->fields.isNeedSort,
      (unsigned int)v3->fields.questId,
      resultCallbackFunc->fields.method);
  }
  else
  {
    p_klass = &v3->fields.formationCallbackFunc->klass;
    if ( p_klass )
    {
      v3->fields.formationCallbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.formationCallbackFunc, 0, v8, v9, v10, v11, v12, v13);
      v27 = p_klass[8];
      isModify = v3->fields.isModify;
      isNeedSort = (unsigned int)v3->fields.questId;
      goto LABEL_15;
    }
    callbackFunc = v3->fields.callbackFunc;
    if ( callbackFunc )
    {
      v3->fields.callbackFunc = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.callbackFunc, 0, v8, v9, v10, v11, v12, v13);
      ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v3->fields.isModify,
        callbackFunc->fields.method);
    }
  }
}


void ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t IsModifySvtCommonFlag; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t kind; // w9
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int64_t userId; // x20
  _BOOL4 isModify; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  bool v17; // w8
  UserServantCollectionManager_c *v18; // x0
  int v19; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  bool v22; // w8
  ServantCommentManager_c *v23; // x0
  int v24; // w22
  __int64 v25; // x1
  __int64 v26; // x2
  bool v27; // w8
  OtherUserNewManager_c *v28; // x0
  int v29; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  bool v32; // w8
  UserCommandCodeNewManager_c *v33; // x0
  int v34; // w20
  __int64 v35; // x1
  __int64 v36; // x2
  bool v37; // w8
  UserCommandCodeCollectionManager_c *v38; // x0
  int v39; // w20
  bool v40; // w8
  struct ServantStatusListViewItem_o *v41; // x8
  int v42; // w28
  int32_t commonFlag; // w26
  struct ServantStatusListViewItem_o *v44; // x8
  int v45; // w20
  int32_t changeVoiceFlag; // w27
  __int64 v47; // x2
  struct ServantStatusListViewItem_o *v48; // x8
  struct UserServantEntity_o *v49; // x9
  __int128 v50; // q0
  __int128 v51; // q1
  struct ServantEntity_o *v52; // x24
  int v53; // w9
  int64_t v54; // x22
  _BOOL4 IsModifyPushUserSvtId; // w23
  bool v56; // w21
  NetworkManager_ResultCallbackFunc_o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x2
  struct ServantStatusListViewItem_o *v61; // x8
  struct UserCommandCodeEntity_o *v62; // x8
  CommandCodeSetStatusRequest_o *v63; // x20
  __int128 v64; // q0
  __int128 v65; // q1
  int v66; // w8
  struct ServantStatusListViewItem_o *v67; // x8
  __int64 v68; // x2
  struct ServantStatusListViewItem_o *v69; // x8
  struct UserServantEntity_o *v70; // x9
  int v71; // w24
  __int64 v72; // x22
  __int64 v73; // x25
  int32_t ModifyTransformVal_k__BackingField; // w29
  int32_t v75; // w25
  int32_t battleVoice; // w21
  _BOOL4 IsModifyFavoriteUserSvtId; // w22
  NetworkManager_ResultCallbackFunc_o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x2
  struct ServantStatusListViewItem_o *v82; // x8
  struct UserServantEntity_o *v83; // x8
  CardFavoriteRequest_o *v84; // x20
  __int128 v85; // q0
  __int128 v86; // q1
  int v87; // w8
  struct ServantStatusListViewItem_o *v88; // x10
  bool isPush; // [xsp+9Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+A0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+C0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+E0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+100h] [xbp-90h]
  ServantStatusListViewItem_LimitCountSetting_o *transformSetting; // [xsp+120h] [xbp-70h] BYREF
  ServantStatusListViewItem_LimitCountSetting_o *setting; // [xsp+128h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_596C352 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&OtherUserNewManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_2213A60(&UserCommandCodeCollectionManager_TypeInfo);
    sub_2213A60(&UserCommandCodeNewManager_TypeInfo);
    sub_2213A60(&UserServantCollectionManager_TypeInfo);
    sub_2213A60(&UserServantNewManager_TypeInfo);
    byte_596C352 = 1;
  }
  transformSetting = 0;
  setting = 0;
  ServantStatusDialog__QuitList(this, method);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_84;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    kind = this->fields.kind;
    if ( kind != 6 && kind != 15 )
    {
      UserServantEntity__SetOld(userSvtEntity, 0);
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_84;
    }
  }
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserServantCollectionEntity__SetOld(userSvtCollectionEntity, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_84;
  }
  userCommandCodeEntity = mainInfo->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    if ( this->fields.kind != 24 )
    {
      UserCommandCodeEntity__SetOld(userCommandCodeEntity, 0);
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_84;
    }
  }
  userCommandCodeCollectionEntity = mainInfo->fields.userCommandCodeCollectionEntity;
  if ( userCommandCodeCollectionEntity )
  {
    UserCommandCodeCollectionEntity__SetOld(userCommandCodeCollectionEntity, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_84;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo && this->fields.kind == 4 )
  {
    userId = servantLeaderInfo->fields.userId;
    if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v4, v5);
    OtherUserNewManager__SetOld(userId, 0);
  }
  isModify = this->fields.isModify;
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v4, v5);
  v17 = UserServantNewManager__WriteData(0);
  v18 = UserServantCollectionManager_TypeInfo;
  v19 = isModify || v17;
  this->fields.isModify = v19;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v15, v16);
  v22 = UserServantCollectionManager__WriteData(0);
  v23 = ServantCommentManager_TypeInfo;
  v24 = v19 | v22;
  this->fields.isModify = v24;
  if ( !*(&v23->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v23, v20, v21);
  v27 = ServantCommentManager__WriteData(0);
  v28 = OtherUserNewManager_TypeInfo;
  v29 = v24 | v27;
  this->fields.isModify = v29;
  if ( !*(&v28->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v28, v25, v26);
  v32 = OtherUserNewManager__WriteData(0);
  v33 = UserCommandCodeNewManager_TypeInfo;
  v34 = v29 | v32;
  this->fields.isModify = v29 | v32;
  if ( !*(&v33->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v33, v30, v31);
  v37 = UserCommandCodeNewManager__WriteData(0);
  v38 = UserCommandCodeCollectionManager_TypeInfo;
  v39 = v34 | v37;
  this->fields.isModify = v39;
  if ( !*(&v38->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v38, v35, v36);
  v40 = UserCommandCodeCollectionManager__WriteData(0);
  IsModifySvtCommonFlag = (int64_t)this->fields.mainInfo;
  this->fields.isModify = (v39 | v40) != 0;
  if ( !IsModifySvtCommonFlag )
    goto LABEL_84;
  if ( *(_QWORD *)(IsModifySvtCommonFlag + 56) )
  {
    IsModifySvtCommonFlag = ServantStatusListViewItem__get_IsModifySvtCommonFlag(
                              (ServantStatusListViewItem_o *)IsModifySvtCommonFlag,
                              0);
    v41 = this->fields.mainInfo;
    if ( !v41 )
      goto LABEL_84;
    v42 = IsModifySvtCommonFlag;
    commonFlag = v41->fields.svtCommonFlag;
    IsModifySvtCommonFlag = ServantStatusListViewItem__get_IsModifyBattleVoice(this->fields.mainInfo, 0);
    v44 = this->fields.mainInfo;
    if ( !v44 )
      goto LABEL_84;
    v45 = IsModifySvtCommonFlag;
    changeVoiceFlag = v44->fields.changeVoiceFlag;
    IsModifySvtCommonFlag = (int64_t)UserGameMaster__getSelfUserGame(0);
    if ( !IsModifySvtCommonFlag )
      goto LABEL_84;
    v48 = this->fields.mainInfo;
    if ( !v48 )
      goto LABEL_84;
    v49 = v48->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_84;
    v50 = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
    v51 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
    v52 = *(struct ServantEntity_o **)(IsModifySvtCommonFlag + 128);
    v53 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v93.fields.currentCryptoKey = v50;
    *(_OWORD *)&v93.fields.fakeValue = v51;
    if ( !v53 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v47);
    v92 = v93;
    IsModifySvtCommonFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v92, 0);
    if ( !this->fields.mainInfo )
      goto LABEL_84;
    v54 = IsModifySvtCommonFlag;
    IsModifyPushUserSvtId = ServantStatusListViewItem__IsModifyPushUserSvtId(this->fields.mainInfo, 0);
    if ( IsModifyPushUserSvtId )
    {
      IsModifySvtCommonFlag = (int64_t)this->fields.mainInfo;
      if ( this->fields.isUsePush )
      {
        if ( !IsModifySvtCommonFlag )
          goto LABEL_84;
        v56 = *(_QWORD *)(IsModifySvtCommonFlag + 176) != 0;
      }
      else
      {
        v56 = 0;
        if ( !IsModifySvtCommonFlag )
          goto LABEL_84;
      }
    }
    else
    {
      IsModifySvtCommonFlag = (int64_t)this->fields.mainInfo;
      v56 = v52 == (struct ServantEntity_o *)v54;
      if ( !IsModifySvtCommonFlag )
        goto LABEL_84;
    }
    IsModifySvtCommonFlag = ServantStatusListViewItem__CheckModifyAndGetLimitCountSetting(
                              (ServantStatusListViewItem_o *)IsModifySvtCommonFlag,
                              &setting,
                              &transformSetting,
                              0);
    v69 = this->fields.mainInfo;
    if ( !v69 )
      goto LABEL_84;
    v70 = v69->fields.userSvtEntity;
    if ( !v70 )
      goto LABEL_84;
    v71 = IsModifySvtCommonFlag;
    v72 = *(_QWORD *)&v70->fields.transformVal.fields.currentCryptoKey;
    v73 = *(_QWORD *)&v70->fields.transformVal.fields.fakeValue;
    ModifyTransformVal_k__BackingField = v69->fields._ModifyTransformVal_k__BackingField;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v68);
    *(_QWORD *)&v96.fields.currentCryptoKey = v72;
    *(_QWORD *)&v96.fields.fakeValue = v73;
    v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v96, 0);
    isPush = v56;
    if ( this->fields.isUseFavorite )
    {
      IsModifySvtCommonFlag = (int64_t)this->fields.mainInfo;
      if ( !IsModifySvtCommonFlag )
        goto LABEL_84;
      battleVoice = changeVoiceFlag;
      IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                    (ServantStatusListViewItem_o *)IsModifySvtCommonFlag,
                                    0);
    }
    else
    {
      battleVoice = changeVoiceFlag;
      IsModifyFavoriteUserSvtId = 0;
    }
    IsModifySvtCommonFlag = (int64_t)this->fields.mainInfo;
    if ( !IsModifySvtCommonFlag
      || (IsModifySvtCommonFlag = ServantStatusListViewItem__get_IsModifyLock(
                                    (ServantStatusListViewItem_o *)IsModifySvtCommonFlag,
                                    0),
          !this->fields.mainInfo) )
    {
LABEL_84:
      sub_2213CDC(IsModifySvtCommonFlag, v4);
    }
    if ( (IsModifyPushUserSvtId
        | IsModifyFavoriteUserSvtId
        | v45
        | v42
        | v71
        | (unsigned int)IsModifySvtCommonFlag
        | ServantStatusListViewItem__get_IsModifyChoice(this->fields.mainInfo, 0))
       & 1
       | (ModifyTransformVal_k__BackingField != v75) )
    {
      this->fields.isModify = 1;
      v78 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v78,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_EndeCardFavoriteRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79, v80);
      IsModifySvtCommonFlag = (int64_t)NetworkManager__getRequest_object_(
                                         v78,
                                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
      v82 = this->fields.mainInfo;
      if ( v82 )
      {
        v83 = v82->fields.userSvtEntity;
        if ( v83 )
        {
          v84 = (CardFavoriteRequest_o *)IsModifySvtCommonFlag;
          v85 = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
          v86 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
          v87 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v93.fields.currentCryptoKey = v85;
          *(_OWORD *)&v93.fields.fakeValue = v86;
          if ( !v87 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v81);
          v91 = v93;
          IsModifySvtCommonFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v91, 0);
          if ( setting )
          {
            v88 = this->fields.mainInfo;
            if ( v88 )
            {
              if ( transformSetting && v84 )
              {
                CardFavoriteRequest__beginRequest_51214180(
                  v84,
                  IsModifySvtCommonFlag,
                  setting->fields.imageLimitCount,
                  setting->fields.dispLimitCount,
                  setting->fields.commandCardLimitCount,
                  setting->fields.iconLimitCount,
                  setting->fields.portraitLimitCount,
                  IsModifyFavoriteUserSvtId,
                  v88->fields.isLock,
                  v88->fields.isChoice,
                  commonFlag,
                  battleVoice,
                  setting->fields.randomLimitCount,
                  setting->fields.randomLimitCountSupport,
                  setting->fields.limitCountSupport,
                  isPush,
                  transformSetting->fields.imageLimitCount,
                  transformSetting->fields.dispLimitCount,
                  transformSetting->fields.commandCardLimitCount,
                  transformSetting->fields.iconLimitCount,
                  transformSetting->fields.portraitLimitCount,
                  transformSetting->fields.randomLimitCount,
                  transformSetting->fields.randomLimitCountSupport,
                  transformSetting->fields.limitCountSupport,
                  v88->fields._ModifyTransformVal_k__BackingField,
                  0);
                return;
              }
            }
          }
        }
      }
      goto LABEL_84;
    }
  }
  else if ( *(_QWORD *)(IsModifySvtCommonFlag + 104) )
  {
    IsModifySvtCommonFlag = ServantStatusListViewItem__get_IsModifyLock(
                              (ServantStatusListViewItem_o *)IsModifySvtCommonFlag,
                              0);
    if ( !this->fields.mainInfo )
      goto LABEL_84;
    if ( (((unsigned int)IsModifySvtCommonFlag | ServantStatusListViewItem__get_IsModifyChoice(this->fields.mainInfo, 0))
        & 1) != 0 )
    {
      this->fields.isModify = 1;
      v57 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_EndeCardFavoriteRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58, v59);
      IsModifySvtCommonFlag = (int64_t)NetworkManager__getRequest_object_(
                                         v57,
                                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
      v61 = this->fields.mainInfo;
      if ( v61 )
      {
        v62 = v61->fields.userCommandCodeEntity;
        if ( v62 )
        {
          v63 = (CommandCodeSetStatusRequest_o *)IsModifySvtCommonFlag;
          v64 = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
          v65 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
          v66 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v93.fields.currentCryptoKey = v64;
          *(_OWORD *)&v93.fields.fakeValue = v65;
          if ( !v66 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v60);
          v90 = v93;
          IsModifySvtCommonFlag = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v90, 0);
          v67 = this->fields.mainInfo;
          if ( v67 )
          {
            if ( v63 )
            {
              CommandCodeSetStatusRequest__beginRequest(
                v63,
                IsModifySvtCommonFlag,
                v67->fields.isLock,
                v67->fields.isChoice,
                0);
              return;
            }
          }
        }
      }
      goto LABEL_84;
    }
  }
  ServantStatusDialog__EndeRequest(this, v4);
}


ServantStatusDialog_BattleActorData_o *ServantStatusDialog__GetBattleActorData(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewItem_o *v4; // x8
  int32_t v5; // w19
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  __int64 v7; // x20
  __int64 v8; // x2
  System_String_o *ActorFolderName; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C331 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_BattleActorData_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596C331 = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0),
        (v4 = this->fields.mainInfo) == 0)
    || (v5 = (int)mainInfo,
        DispLimitCountStageSealAfterAtStageLimitCount = ServantStatusListViewItem__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                          v4,
                                                          1,
                                                          0),
        v7 = sub_2213CCC(ServantStatusDialog_BattleActorData_TypeInfo),
        ServantStatusDialog_BattleActorData___ctor((ServantStatusDialog_BattleActorData_o *)v7, 0),
        !v7) )
  {
    sub_2213CDC(mainInfo, method);
  }
  *(_DWORD *)(v7 + 16) = v5;
  *(_DWORD *)(v7 + 20) = DispLimitCountStageSealAfterAtStageLimitCount;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method, v8);
  ActorFolderName = ServantAssetLoadManager__getActorFolderName(v5, DispLimitCountStageSealAfterAtStageLimitCount, 0);
  *(_QWORD *)(v7 + 24) = ActorFolderName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)ActorFolderName, v10, v11, v12, v13, v14, v15);
  return (ServantStatusDialog_BattleActorData_o *)v7;
}


bool ServantStatusDialog__GetEnableBattleVoiceFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return ((unsigned int)this->fields.kind > 0x25uLL) | (0x19DFFFFFFBuLL >> this->fields.kind) & 1;
}


bool ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return ((unsigned int)this->fields.kind > 0x25uLL) | (0x19DFFFFFFBuLL >> this->fields.kind) & 1;
}


bool ServantStatusDialog__GetEnableVoiceEffectFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return ((unsigned int)this->fields.kind > 0x25uLL) | (0x19DFFFFFFBuLL >> this->fields.kind) & 1;
}


int32_t ServantStatusDialog__GetTabKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
}


System_String_o *ServantStatusDialog__GetVoiceAssetName(
        ServantStatusDialog_o *this,
        int32_t assetType,
        int32_t svtId,
        int32_t limitCount,
        int32_t seqId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t VoiceId; // w8
  System_String_o *result; // x0
  System_String_o **v13; // x19
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596C33A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    byte_596C33A = 1;
  }
  v15 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0);
  result = 0;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_52CA3C8[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0);
    return System_String__Concat_75651716(*v13, v14, 0);
  }
  return result;
}


void ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pushButton; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusDialog_c *v7; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v9; // x8
  ServantStatusDialog_c *v10; // x0
  int v11; // w8
  ServantStatusDialog_c *v12; // x0
  struct ServantStatusDialog_StaticFields *static_fields; // x8
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *servantStatusBattleConfirmDialog; // x20
  System_Action_o *v19; // x20
  ServantStatusDialog_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *Asset; // x0
  unsigned __int128 v23; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_596C322 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndInitLoad__);
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C322 = 1;
  }
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  v23 = 0u;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
  {
    v7 = ServantStatusDialog_TypeInfo;
    if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v5, v6);
      v7 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v7->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v23,
                                               0);
    v9 = this->fields.pushButton;
    if ( !v9 )
      goto LABEL_27;
    v9->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v23;
  }
  v10 = ServantStatusDialog_TypeInfo;
  *(_WORD *)&this->fields.isModify = 256;
  *(_DWORD *)&this->fields.isExit = 0;
  v11 = *(&v10->_2.cctor_finished + 1);
  this->fields.isInitTab = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v5, v6);
  if ( !byte_596C383 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C383 = 1;
  }
  v12 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v5, v6);
    v12 = ServantStatusDialog_TypeInfo;
  }
  static_fields = v12->static_fields;
  baseObject = this->fields.baseObject;
  static_fields->_IsViewCharaGraph_k__BackingField = 0;
  if ( !baseObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  if ( this->fields.kind == 33 )
  {
    this->fields.needAutoScroll = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v14);
  }
  baseObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !baseObject )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  baseObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)baseObject & 1, 0);
  servantStatusBattleConfirmDialog = (UnityEngine_Object_o *)this->fields.servantStatusBattleConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(servantStatusBattleConfirmDialog, 0, 0) )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( baseObject )
    {
      ServantStatusBattleConfirmDialog__Init((ServantStatusBattleConfirmDialog_o *)baseObject, 0);
      goto LABEL_26;
    }
LABEL_27:
    sub_2213CDC(baseObject, v5);
  }
LABEL_26:
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0);
  Asset = ServantStatusDialog__LoadAsset(v20, v19, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


void ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *openCallbackFunc; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_c *v10; // x0
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v24; // x21

  if ( (byte_596C347 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_2213A60(&Method_ServantStatusDialog__InitList_b__181_0__);
    byte_596C347 = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallbackFunc->fields.invoke_impl)(
      openCallbackFunc->fields.method_code,
      openCallbackFunc->fields.method);
  }
  v10 = ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  v12 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_2213CCC(v10);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v13);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  charaGraphListViewManager->fields.callbackFunc = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&charaGraphListViewManager->fields.callbackFunc,
    (int32_t)v12,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ServantStatusCharaGraphListViewManager__SetMode_41386816(charaGraphListViewManager, 2, v22);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__181_0__, 0);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v24, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(v14, v15);
  }
}


System_Collections_IEnumerator_o *ServantStatusDialog__LoadAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C323 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog__LoadAsset_d__142_TypeInfo);
    byte_596C323 = 1;
  }
  v4 = sub_2213CCC(ServantStatusDialog__LoadAsset_d__142_TypeInfo);
  ServantStatusDialog__LoadAsset_d__142___ctor((ServantStatusDialog__LoadAsset_d__142_o *)v4, 0, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v4 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *isExistAssetStorage; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  ServantStatusDialog_c *v22; // x0
  System_String_o *BattleCharaChangeConfirmLoadAssetPath; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  ServantStatusDialog_c *v26; // x0
  System_String_o *v27; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2

  if ( (byte_596C324 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass143_0__LoadBattleCharaChangeConfirmAsset_b__0__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass143_0_TypeInfo);
    byte_596C324 = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass143_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass143_0___ctor((ServantStatusDialog___c__DisplayClass143_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    goto LABEL_21;
  v22 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v7, v21);
    v22 = ServantStatusDialog_TypeInfo;
  }
  BattleCharaChangeConfirmLoadAssetPath = v22->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v21);
  isExistAssetStorage = (Il2CppObject *)AssetManager__isExistAssetStorage(BattleCharaChangeConfirmLoadAssetPath, 0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_21:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_18:
    sub_2213CDC(isExistAssetStorage, v7);
  }
  isExistAssetStorage = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !isExistAssetStorage )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)isExistAssetStorage, 1, 0);
  v26 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v24, v25);
    v26 = ServantStatusDialog_TypeInfo;
  }
  v27 = v26->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass143_0__LoadBattleCharaChangeConfirmAsset_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29, v30);
  AssetManager__loadAssetStorage(v27, v28, 1, 0, 0);
}


void ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596C358 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AssetData__TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog__LoadTransformedResource_b__203_0__);
    byte_596C358 = 1;
  }
  v3 = (System_Action_object__o *)sub_2213CCC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__203_0__,
    0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v3, v4);
}


void ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596C351 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickCancel__);
    byte_596C351 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantStatusDialog__Exit(this, v5);
  }
}


void ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  bool IsSaveTransformServant; // w8

  if ( (byte_596C357 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_596C357 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( ServantStatusListViewItem__get_AnyTransformServant(mainInfo, 0) )
    {
      v4 = Method_ServantStatusDialog_OnClickChangeTransform__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeTransform__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickChangeTransform__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        IsSaveTransformServant = ServantStatusListViewItem__get_IsSaveTransformServant(mainInfo, 0);
        mainInfo = this->fields.mainInfo;
        if ( IsSaveTransformServant )
        {
          if ( mainInfo )
          {
            ServantStatusListViewItem__ChangeTransform(mainInfo, 0);
LABEL_16:
            ServantStatusDialog__LoadTransformedResource(this, method);
            return;
          }
        }
        else if ( mainInfo )
        {
          mainInfo->fields._IsTransformed_k__BackingField ^= 1u;
          goto LABEL_16;
        }
      }
LABEL_17:
      sub_2213CDC(mainInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickChangeVoice(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_596C36D & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickChangeVoice__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C36D = 1;
  }
  if ( !v4->fields.isExit && !v4->fields.isInit )
  {
    mainInfo = v4->fields.mainInfo;
    if ( mainInfo )
    {
      if ( mainInfo->fields.changeVoiceFlag != type )
      {
        v8 = Method_ServantStatusDialog_OnClickChangeVoice__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeVoice__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickChangeVoice__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_2213CDC(this, *(_QWORD *)&type);
  }
}


void ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596C371 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickChoice__);
    byte_596C371 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_2213CDC(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommand(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_596C363 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickCommand__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C363 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = (ServantStatusListViewManager_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    if ( ServantStatusListViewItem__SelectCommandCardLimitCountStageList(
           (ServantStatusListViewItem_o *)mainInfo,
           index,
           0) )
    {
      v6 = Method_ServantStatusDialog_OnClickCommand__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommand__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickCommand__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_44599780(mainInfo, 3, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(mainInfo, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickCommandCodeShow(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity; // x0
  UserCommandCodeEntity_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  System_Action_o *v13; // x23
  ServantLeaderInfo_o *servantLeaderInfo; // x0
  CommandCodeEntity_o *CommandCodeEntity; // x0
  CommandCodeEntity_o *v16; // x20
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t kind; // w24
  Il2CppObject *v20; // x22
  ServantStatusDialog_EndDelegate_o *v21; // x21
  System_Action_o *v22; // x23
  CommonUI_o *v23; // x0
  int32_t v24; // w1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v28; // x21
  CommandCodeEntity_o *v29; // x2
  bool v30; // w3

  v4 = this;
  if ( (byte_596C366 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_2213A60(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnClickCommandCodeShow__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C366 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_28;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(userSvtCollectionEntity, index, 0);
    if ( UserCommandCodeEntity )
    {
      v8 = UserCommandCodeEntity;
      v9 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_37388944((CommonUI_o *)Instance, 20, v8, v12, v13, 0);
        return;
      }
LABEL_28:
      sub_2213CDC(this, *(_QWORD *)&index);
    }
    goto LABEL_18;
  }
  servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
  if ( servantLeaderInfo )
  {
    CommandCodeEntity = ServantLeaderInfo__getCommandCodeEntity(servantLeaderInfo, index, 0);
    if ( CommandCodeEntity )
    {
      v16 = CommandCodeEntity;
      v17 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      kind = v4->fields.kind;
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v21,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectEquipStatus__,
        0);
      v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
      if ( kind == 5 )
      {
        if ( !v20 )
          goto LABEL_28;
        v23 = (CommonUI_o *)v20;
        v24 = 23;
      }
      else
      {
        if ( kind != 4 )
        {
          if ( !v20 )
            goto LABEL_28;
          v23 = (CommonUI_o *)v20;
          v24 = 25;
          v29 = v16;
          v30 = 0;
          goto LABEL_27;
        }
        if ( !v20 )
          goto LABEL_28;
        v23 = (CommonUI_o *)v20;
        v24 = 22;
      }
      v29 = v16;
      v30 = 1;
LABEL_27:
      CommonUI__OpenServantEquipStatusDialog_37389176(v23, v24, v29, v30, v21, v22, 0);
      return;
    }
  }
LABEL_18:
  v25 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v28 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)v4,
    Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_28;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v28, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickFace(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_596C364 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickFace__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C364 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = (ServantStatusListViewManager_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    if ( ServantStatusListViewItem__SelectIconLimitCountStageList((ServantStatusListViewItem_o *)mainInfo, index, 0) )
    {
      v6 = Method_ServantStatusDialog_OnClickFace__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFace__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickFace__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_44599780(mainInfo, 4, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(mainInfo, *(_QWORD *)&index);
  }
}


void ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v6; // q1
  int64_t favoriteUserSvtId; // x20
  System_Reflection_MethodBase_o *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x2
  ServantStatusDialog_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  ServantEntity_o *ServantEntity; // x24
  ServantStatusDialog_o *v15; // x20
  __int64 v16; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v18; // x8
  System_String_o *v19; // x21
  System_Object_array *v20; // x22
  __int64 v21; // x2
  int32_t m_CancellationTokenSource; // w25
  ServantStatusDialog_o *v23; // x25
  System_String_o *ClassName; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w0
  struct UISprite_o *statusTitleSprite; // x8
  int32_t v31; // w23
  System_String_o *LimitCountSealedServantName; // x23
  int32_t Rarity; // w0
  System_String_o *RarityType; // x23
  struct ServantStatusListViewItem_o *v35; // x8
  System_String_o *v36; // x23
  struct ServantStatusListViewItem_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  int32_t v39; // w23
  int32_t v40; // w0
  System_String_o *v41; // x20
  System_String_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *Instance; // x21
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  System_String_o *v51; // x24
  CommonConfirmDialog_ClickDelegate_o *v52; // x25
  __int64 v53; // x2
  struct ServantStatusListViewItem_o *v54; // x20
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  __int128 v57; // q1
  int v58; // w8
  const MethodInfo *v59; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v3 = this;
  if ( (byte_596C372 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickFavorite__);
    sub_2213A60(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12450/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12448/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12447/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12451/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_12449/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_596C372 = 1;
  }
  if ( !v3->fields.isExit && !v3->fields.isInit )
  {
    mainInfo = v3->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_57;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v62.fields.fakeValue = v6;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v61 = v62;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v61, 0) )
    {
      v8 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnClickFavorite__);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    v9 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnClickFavorite__);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    if ( favoriteUserSvtId <= 0 )
    {
      v54 = v3->fields.mainInfo;
      if ( v54 )
      {
        v55 = v54->fields.userSvtEntity;
        if ( v55 )
        {
          v56 = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
          v57 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
          v58 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v62.fields.currentCryptoKey = v56;
          *(_OWORD *)&v62.fields.fakeValue = v57;
          if ( !v58 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v10);
          v60 = v62;
          v54->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v60, 0);
          ServantStatusDialog__SetMark(v3, v59);
          return;
        }
      }
    }
    else
    {
      this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( this )
        {
          this = (ServantStatusDialog_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            favoriteUserSvtId,
                                            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( this )
          {
            v11 = this;
            ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)this, -1, 0);
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
            this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            if ( v3->fields.mainInfo )
            {
              v15 = this;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_IsConvertOverwriteImage(
                                                v3->fields.mainInfo,
                                                0);
              questRestrictionInfo = 0;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v18 = v3->fields.mainInfo;
                if ( !v18 )
                  goto LABEL_57;
                questRestrictionInfo = v18->fields.questRestrictionInfo;
              }
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v16);
              v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
              v20 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
              this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                                (UserServantEntity_o *)v11,
                                                questRestrictionInfo,
                                                0);
              if ( this )
              {
                m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
                if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method, v21);
                this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
                if ( v20 )
                {
                  v23 = this;
                  sub_1FFE8F8(v20, this);
                  this = (ServantStatusDialog_o *)sub_1FFE2C4(v20, 0, v23);
                  if ( ServantEntity )
                  {
                    ClassName = ServantEntity__getClassName(ServantEntity, 0);
                    sub_1FFE8F8(v20, ClassName);
                    sub_1FFE2C4(v20, 1, ClassName);
                    v28 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
                    v27 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
                    *(_QWORD *)&v63.fields.currentCryptoKey = v28;
                    *(_QWORD *)&v63.fields.fakeValue = v27;
                    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v63, 0);
                    statusTitleSprite = v11->fields.statusTitleSprite;
                    *(_QWORD *)&v64.fields.fakeValue = v11->fields.profileTitleSprite;
                    v31 = v29;
                    *(_QWORD *)&v64.fields.currentCryptoKey = statusTitleSprite;
                    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                      v64,
                                                      0);
                    if ( v15 )
                    {
                      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                      (ServantLimitImageMaster_o *)v15,
                                                      v31,
                                                      (int32_t)this,
                                                      1,
                                                      1,
                                                      0);
                      sub_1FFE8F8(v20, LimitCountSealedServantName);
                      sub_1FFE2C4(v20, 2, LimitCountSealedServantName);
                      this = (ServantStatusDialog_o *)v3->fields.mainInfo;
                      if ( this )
                      {
                        Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
                        RarityType = Rarity__getRarityType(Rarity, 0);
                        sub_1FFE8F8(v20, RarityType);
                        this = (ServantStatusDialog_o *)sub_1FFE2C4(v20, 3, RarityType);
                        v35 = v3->fields.mainInfo;
                        if ( v35 )
                        {
                          this = (ServantStatusDialog_o *)v35->fields.svtEntity;
                          if ( this )
                          {
                            v36 = ServantEntity__getClassName((ServantEntity_o *)this, 0);
                            sub_1FFE8F8(v20, v36);
                            sub_1FFE2C4(v20, 4, v36);
                            this = (ServantStatusDialog_o *)v3->fields.mainInfo;
                            if ( this )
                            {
                              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                                (ServantStatusListViewItem_o *)this,
                                                                0);
                              v37 = v3->fields.mainInfo;
                              if ( v37 )
                              {
                                v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v37->fields.userSvtEntity;
                                if ( v38 )
                                {
                                  v39 = (int)this;
                                  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38[6], 0);
                                  v41 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v15,
                                          v39,
                                          v40,
                                          1,
                                          1,
                                          0);
                                  sub_1FFE8F8(v20, v41);
                                  sub_1FFE2C4(v20, 5, v41);
                                  this = (ServantStatusDialog_o *)System_String__Format_75698016(v19, v20, 0);
                                  if ( v3->fields.mainInfo )
                                  {
                                    v42 = (System_String_o *)this;
                                    if ( ServantStatusListViewItem__get_IsEventJoin(v3->fields.mainInfo, 0) )
                                    {
                                      this = (ServantStatusDialog_o *)v3->fields.mainInfo;
                                      if ( !this )
                                        goto LABEL_57;
                                      if ( !ServantStatusListViewItem__get_IsNoPeriod(
                                              (ServantStatusListViewItem_o *)this,
                                              0) )
                                      {
                                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
                                        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                                        v42 = System_String__Concat_75651716(v42, v45, 0);
                                      }
                                    }
                                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
                                    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
                                    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                                    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                                    v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                    CommonConfirmDialog_ClickDelegate___ctor(
                                      v52,
                                      (Il2CppObject *)v3,
                                      Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                                      0);
                                    this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                                    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v53);
                                    if ( Instance )
                                    {
                                      CommonUI__OpenConfirmDialog_37373144(
                                        (CommonUI_o *)Instance,
                                        v49,
                                        v42,
                                        v50,
                                        v51,
                                        v52,
                                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                        0,
                                        0,
                                        0);
                                      return;
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
LABEL_57:
    sub_2213CDC(this, method);
  }
}


void ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596C370 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickLock__);
    byte_596C370 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_2213CDC(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
      ServantStatusDialog__SetMark(this, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickPortrait(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_596C365 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickPortrait__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C365 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = (ServantStatusListViewManager_o *)this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_14;
    if ( ServantStatusListViewItem__SelectPortraitLimitCountStageList((ServantStatusListViewItem_o *)mainInfo, index, 0) )
    {
      v6 = Method_ServantStatusDialog_OnClickPortrait__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPortrait__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickPortrait__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_44599780(mainInfo, 6, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(mainInfo, *(_QWORD *)&index);
  }
}


void ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  __int64 v4; // x2
  struct ServantStatusListViewItem_o *v5; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v7; // q1
  int64_t pushUserSvtId; // x20
  System_Reflection_MethodBase_o *v9; // x0
  struct ServantStatusListViewItem_o *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x2
  ServantStatusDialog_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  ServantEntity_o *ServantEntity; // x24
  ServantStatusDialog_o *v17; // x20
  __int64 v18; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v20; // x8
  System_String_o *v21; // x21
  System_Object_array *v22; // x22
  __int64 v23; // x2
  int32_t m_CancellationTokenSource; // w25
  ServantStatusDialog_o *v25; // x25
  System_String_o *ClassName; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t v31; // w0
  struct UISprite_o *statusTitleSprite; // x8
  int32_t v33; // w23
  System_String_o *LimitCountSealedServantName; // x23
  int32_t Rarity; // w0
  System_String_o *RarityType; // x23
  struct ServantStatusListViewItem_o *v37; // x8
  System_String_o *v38; // x23
  struct ServantStatusListViewItem_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v40; // x8
  int32_t v41; // w23
  int32_t v42; // w0
  System_String_o *v43; // x20
  System_String_o *v44; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  System_String_o *v48; // x24
  CommonConfirmDialog_ClickDelegate_o *v49; // x25
  __int64 v50; // x2
  struct ServantStatusListViewItem_o *v51; // x20
  struct UserServantEntity_o *v52; // x8
  __int128 v53; // q0
  __int128 v54; // q1
  int v55; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  v2 = this;
  if ( (byte_596C374 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickPush__);
    sub_2213A60(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596C374 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( mainInfo )
    {
      if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
        return;
      EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
      v5 = v2->fields.mainInfo;
      if ( v5 )
      {
        userSvtEntity = v5->fields.userSvtEntity;
        if ( userSvtEntity )
        {
          v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          pushUserSvtId = v5->fields.pushUserSvtId;
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v58.fields.fakeValue = v7;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v4);
          v57 = v58;
          if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v57, 0) )
          {
            v9 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnClickPush__);
            OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
            v10 = v2->fields.mainInfo;
            if ( v10 )
            {
              v10->fields.pushUserSvtId = 0;
LABEL_51:
              ServantStatusDialog__SetMark(v2, method);
              return;
            }
          }
          else
          {
            v11 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnClickPush__);
            OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
            if ( pushUserSvtId <= 0 )
            {
              v51 = v2->fields.mainInfo;
              if ( v51 )
              {
                v52 = v51->fields.userSvtEntity;
                if ( v52 )
                {
                  v53 = *(_OWORD *)&v52->fields.id.fields.currentCryptoKey;
                  v54 = *(_OWORD *)&v52->fields.id.fields.fakeValue;
                  v55 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                  *(_OWORD *)&v58.fields.currentCryptoKey = v53;
                  *(_OWORD *)&v58.fields.fakeValue = v54;
                  if ( !v55 )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v12);
                  v56 = v58;
                  v51->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                &v56,
                                                0);
                  goto LABEL_51;
                }
              }
            }
            else
            {
              this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
                if ( this )
                {
                  this = (ServantStatusDialog_o *)DataMasterBase_object__object__long___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    pushUserSvtId,
                                                    (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                  if ( this )
                  {
                    v13 = this;
                    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)this, -1, 0);
                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
                    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( v2->fields.mainInfo )
                    {
                      v17 = this;
                      this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_IsConvertOverwriteImage(
                                                        v2->fields.mainInfo,
                                                        0);
                      questRestrictionInfo = 0;
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        v20 = v2->fields.mainInfo;
                        if ( !v20 )
                          goto LABEL_52;
                        questRestrictionInfo = v20->fields.questRestrictionInfo;
                      }
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v18);
                      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
                      v22 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
                      this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                                        (UserServantEntity_o *)v13,
                                                        questRestrictionInfo,
                                                        0);
                      if ( this )
                      {
                        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
                        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, method, v23);
                        this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
                        if ( v22 )
                        {
                          v25 = this;
                          sub_1FFE8F8(v22, this);
                          this = (ServantStatusDialog_o *)sub_1FFE2C4(v22, 0, v25);
                          if ( ServantEntity )
                          {
                            ClassName = ServantEntity__getClassName(ServantEntity, 0);
                            sub_1FFE8F8(v22, ClassName);
                            sub_1FFE2C4(v22, 1, ClassName);
                            v30 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
                            v29 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
                            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                v27,
                                v28);
                            *(_QWORD *)&v59.fields.currentCryptoKey = v30;
                            *(_QWORD *)&v59.fields.fakeValue = v29;
                            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v59, 0);
                            statusTitleSprite = v13->fields.statusTitleSprite;
                            *(_QWORD *)&v60.fields.fakeValue = v13->fields.profileTitleSprite;
                            v33 = v31;
                            *(_QWORD *)&v60.fields.currentCryptoKey = statusTitleSprite;
                            this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v60,
                                                              0);
                            if ( v17 )
                            {
                              LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                              (ServantLimitImageMaster_o *)v17,
                                                              v33,
                                                              (int32_t)this,
                                                              1,
                                                              1,
                                                              0);
                              sub_1FFE8F8(v22, LimitCountSealedServantName);
                              sub_1FFE2C4(v22, 2, LimitCountSealedServantName);
                              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                              if ( this )
                              {
                                Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
                                RarityType = Rarity__getRarityType(Rarity, 0);
                                sub_1FFE8F8(v22, RarityType);
                                this = (ServantStatusDialog_o *)sub_1FFE2C4(v22, 3, RarityType);
                                v37 = v2->fields.mainInfo;
                                if ( v37 )
                                {
                                  this = (ServantStatusDialog_o *)v37->fields.svtEntity;
                                  if ( this )
                                  {
                                    v38 = ServantEntity__getClassName((ServantEntity_o *)this, 0);
                                    sub_1FFE8F8(v22, v38);
                                    sub_1FFE2C4(v22, 4, v38);
                                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                                    if ( this )
                                    {
                                      this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                                        (ServantStatusListViewItem_o *)this,
                                                                        0);
                                      v39 = v2->fields.mainInfo;
                                      if ( v39 )
                                      {
                                        v40 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v39->fields.userSvtEntity;
                                        if ( v40 )
                                        {
                                          v41 = (int)this;
                                          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v40[6],
                                                  0);
                                          v43 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  (ServantLimitImageMaster_o *)v17,
                                                  v41,
                                                  v42,
                                                  1,
                                                  1,
                                                  0);
                                          sub_1FFE8F8(v22, v43);
                                          sub_1FFE2C4(v22, 5, v43);
                                          v44 = System_String__Format_75698016(v21, v22, 0);
                                          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                                          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                                          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                                          v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                          CommonConfirmDialog_ClickDelegate___ctor(
                                            v49,
                                            (Il2CppObject *)v2,
                                            Method_ServantStatusDialog_OnConfirmSelectPush__,
                                            0);
                                          this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                                          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v50);
                                          if ( Instance )
                                          {
                                            CommonUI__OpenConfirmDialog_37373584(
                                              (CommonUI_o *)Instance,
                                              v46,
                                              v44,
                                              v47,
                                              v48,
                                              v49,
                                              BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                              BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
                                              15.0,
                                              700,
                                              0,
                                              480,
                                              -162.5,
                                              0,
                                              0,
                                              240,
                                              0,
                                              0);
                                            return;
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
LABEL_52:
    sub_2213CDC(this, method);
  }
}


void ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x4
  bool RandomLimitCountFriend; // w0

  if ( (byte_596C36A & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_596C36A = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    RandomLimitCountFriend = 1;
    if ( index > 2 )
    {
      if ( index == 3 )
      {
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7, v8);
        RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0);
        goto LABEL_21;
      }
      if ( index != 4 )
LABEL_14:
        RandomLimitCountFriend = 0;
    }
    else
    {
      if ( !index )
      {
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7, v8);
        RandomLimitCountFriend = OptionManager__GetRandomLimitCountOwn(0);
        goto LABEL_21;
      }
      if ( index != 1 )
        goto LABEL_14;
    }
LABEL_21:
    ServantStatusDialog__RandomLimitCountSettingResource(this, index < 3, RandomLimitCountFriend, index % 3, v9);
  }
}


void ServantStatusDialog__OnClickServantQuest(ServantStatusDialog_o *this, int32_t questId, const MethodInfo *method)
{
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x8
  void *Instance; // x0
  __int64 v7; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v9; // x22
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t QuestType; // w23
  QuestEntity_o *v13; // x24
  System_String_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *BattleName; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x20
  System_String_o *v22; // x0
  __int64 *v23; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v27; // x21
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x21
  System_String_o *v39; // x23
  System_String_o *v40; // x24
  CommonConfirmDialog_ClickDelegate_o *v41; // x25
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C367 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickServantQuest__);
    sub_2213A60(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_12494/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12496/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12497/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12490/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12499/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12493/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12498/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12495/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12491/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12492/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_596C367 = 1;
  }
  resultCallbackFunc = this->fields.resultCallbackFunc;
  entity = 0;
  if ( !resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_25;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( !QuestInfo )
  {
LABEL_25:
    v24 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickServantQuest__);
    v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v27, 0);
      return;
    }
    goto LABEL_44;
  }
  v9 = QuestInfo;
  v10 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickServantQuest__);
  v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(v9, 0);
  Instance = MapControl_QuestInfo__GetMine(v9, 0);
  if ( !Instance )
    goto LABEL_44;
  v13 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  v14 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_26484/*"{0}"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (void *)QuestEntity__getServantId(v13, 0);
    if ( !MasterData_object )
      goto LABEL_44;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
    v14 = System_String__Format(v14, BattleName, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !Instance )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
    goto LABEL_29;
  Instance = entity;
  if ( !entity )
    goto LABEL_44;
  if ( QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0) )
  {
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12499/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, 0);
    v23 = &StringLiteral_12498/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/;
  }
  else
  {
LABEL_29:
    if ( QuestType == 3 )
    {
      warId = v9->fields.warId;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_44;
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
      if ( WarEntityByWarID && !WarEntity__IsFolder(WarEntityByWarID, 0) )
      {
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12493/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0);
        v23 = &StringLiteral_12492/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
      }
      else
      {
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12495/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0);
        v23 = &StringLiteral_12494/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
      }
    }
    else
    {
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12497/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0);
      v23 = &StringLiteral_12496/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
    }
  }
  v36 = v22;
  v37 = LocalizationManager__Get((System_String_o *)*v23, 0);
  v38 = System_String__Format(v37, (Il2CppObject *)v14, 0);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12491/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12490/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0);
  v41 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v41,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0);
  if ( !v21 )
LABEL_44:
    sub_2213CDC(Instance, v7);
  CommonUI__OpenConfirmDialog_37373144((CommonUI_o *)v21, v36, v38, v39, v40, v41, 26, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickSupportLimitCount(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_596C369 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickSupportLimitCount__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C369 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_12;
    ServantStatusListViewItem__SelectSupportLimitCountStageList(mainInfo, index, 0);
    v6 = Method_ServantStatusDialog_OnClickSupportLimitCount__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickSupportLimitCount__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickSupportLimitCount__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
    if ( !mainInfo
      || (ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)mainInfo, 8, 0),
          statusTabListViewManager = this->fields.statusTabListViewManager,
          v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
          ServantStatusListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectStatus__,
            0),
          !statusTabListViewManager) )
    {
LABEL_12:
      sub_2213CDC(mainInfo, *(_QWORD *)&index);
    }
    ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
  }
}


void ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C35D & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickTabBattle__);
    byte_596C35D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C35C & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickTabProfile__);
    byte_596C35C = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C35B & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickTabStatus__);
    byte_596C35B = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C35E & 1) == 0 )
  {
    sub_2213A60(&Method_ServantStatusDialog_OnClickTabVoice__);
    byte_596C35E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


void ServantStatusDialog__OnClickTdSpeed(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _BOOL4 isExit; // w8
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  long double v28; // q0
  __int64 v29; // x8
  __int64 v30; // x0
  CommonUI_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  System_String_o *v34; // x24
  CommonConfirmDialog_ClickDelegate_o *v35; // x25

  if ( (byte_596C368 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickTdSpeed__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass219_0__OnClickTdSpeed_b__0__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass219_0_TypeInfo);
    sub_2213A60(&StringLiteral_12501/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_12502/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_12503/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_596C368 = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass219_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass219_0___ctor((ServantStatusDialog___c__DisplayClass219_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  isExit = this->fields.isExit;
  *(_DWORD *)(v5 + 24) = type;
  if ( !isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0) == *(_DWORD *)(v5 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v16, 0);
        return;
      }
LABEL_24:
      sub_2213CDC(mainInfo, v7);
    }
    v17 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickTdSpeed__);
    v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0);
    if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v19, v20);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0);
    v25 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0);
    v27 = System_String__Format_75697880(v26, TDSpeedLocalization, v25, 0);
    v29 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
      v29 = sub_224B908(v28);
    v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
    if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
      v30 = sub_224B908(v28);
    v31 = **(CommonUI_o ***)(v30 + 184);
    v32 = **(System_String_o ***)(qword_5984390 + 184);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12502/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12501/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0);
    v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v35,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass219_0__OnClickTdSpeed_b__0__,
      0);
    if ( !v31 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v31, v32, v27, v33, v34, v35, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickVoiceEffect(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_596C36E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnClickVoiceEffect__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C36E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      if ( ServantStatusListViewItem__get_VoiceEffectSelect(mainInfo, 0) != type )
      {
        v8 = Method_ServantStatusDialog_OnClickVoiceEffect__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickVoiceEffect__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnClickVoiceEffect__);
        v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeVoiceEffect(this, type, v10);
        return;
      }
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_2213CDC(mainInfo, *(_QWORD *)&type);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnConfirmSelectFavorite(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_596C373 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C373 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_2213CDC(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide, method);
    v11 = v12;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnConfirmSelectPush(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_596C375 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C375 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_2213CDC(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, isDecide, method);
    v11 = v12;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v10, 0);
}


void ServantStatusDialog__OnConfirmServantQuest(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  const MethodInfo_47A29F8 *v10; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_596C36F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_ServantStatusDialog__OnConfirmServantQuest_b__226_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596C36F = 1;
  }
  if ( !isDecide )
  {
    v10 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance(v10);
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v12, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0);
        return;
      }
    }
    goto LABEL_25;
  }
  v5 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)v5, this->fields.questId, 0);
  v8 = QuestInfo;
  if ( QuestInfo )
  {
    WarInfo_k__BackingField = QuestInfo->fields._WarInfo_k__BackingField;
    if ( WarInfo_k__BackingField && MapControl_WarInfo__GetEventId(WarInfo_k__BackingField, 0) )
    {
      v5 = (Il2CppObject *)v8->fields._WarInfo_k__BackingField;
      if ( !v5 )
        goto LABEL_25;
      LODWORD(v8) = MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)v5, 0);
    }
    else
    {
      LODWORD(v8) = 0;
    }
  }
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
  if ( !byte_596C384 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596C384 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    v17 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  v19 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v22 = SingletonMonoBehaviour_object___get_Instance(v19);
  v23 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20, v21);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__226_0__, 0);
  if ( !v22 )
LABEL_25:
    sub_2213CDC(v5, v6);
  CommonUI__maskFadeout((CommonUI_o *)v22, 1, DEFAULT_FADE_TIME, v25, 0);
}


void ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_596C37A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3176/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_596C37A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3176/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v7 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(transform, v4);
  }
}


void ServantStatusDialog__OnSelectBattle(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  ServantStatusBattleListViewManager_CallbackFunc_o *v6; // x22
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v8; // x1
  int v9; // w21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_596C35F & 1) == 0 )
  {
    sub_2213A60(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectBattle__);
    byte_596C35F = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    ServantStatusBattleListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
      0);
    if ( !battleTabListViewManager
      || (ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v6, 0),
          (mainInfo = this->fields.mainInfo) == 0)
      || (mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStage(mainInfo, 0, 0),
          !this->fields.mainInfo)
      || (v9 = (int)mainInfo,
          (mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                                       this->fields.mainInfo,
                                                       0)) == 0) )
    {
      sub_2213CDC(mainInfo, v8);
    }
    if ( LODWORD(mainInfo->fields.partyItem) <= result )
      sub_2213CE4(mainInfo);
    if ( v9 != *((_DWORD *)&mainInfo->fields.memberItem + result) )
    {
      v10 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnSelectBattle__);
      v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      ServantStatusDialog__ChangeBattleResource(this, result, v12);
    }
  }
}


void ServantStatusDialog__OnSelectCharaGraph(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__OnSelectCommandCodeStatus(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_596C34D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C34D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)gameObject, 7, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_2213CDC(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectEquipStatus(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_596C34B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C34B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( isDecide )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.statusTabListViewManager;
    if ( !gameObject )
      goto LABEL_9;
    ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)gameObject, 7, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_2213CDC(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectFlavor(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596C34F & 1) == 0 )
  {
    sub_2213A60(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_596C34F = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0);
  if ( !profileTabListViewManager )
    sub_2213CDC(v6, v7);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  int v4; // w20
  ServantStatusDialog_o *v6; // x19
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  int32_t v9; // w8
  int v10; // w8
  struct ServantStatusListViewItem_o *mainInfo; // x8
  System_Reflection_MethodBase_o *v12; // x0
  struct ServantStatusListViewItem_o *v13; // x8
  ServantStatusDialog_o *v14; // x20
  int64_t equipTargetId1; // x21
  ServantStatusDialog_EndDelegate_o *v16; // x22
  System_Action_o *v17; // x23
  CommonUI_o *v18; // x0
  int64_t v19; // x2
  ServantStatusDialog_EndDelegate_o *v20; // x4
  System_Action_o *v21; // x5
  bool v22; // w6
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v25; // q1
  System_Reflection_MethodBase_o *v26; // x0
  int32_t kind; // w21
  struct ServantStatusListViewItem_o *v28; // x8
  ServantStatusDialog_o *v29; // x20
  struct ServantLeaderInfo_o *v30; // x8
  EquipTargetInfo_o *v31; // x21
  ServantStatusDialog_EndDelegate_o *v32; // x22
  System_Action_o *v33; // x23
  CommonUI_o *v34; // x0
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 *v42; // x8
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_Reflection_MethodBase_o *v50; // x0
  bool v51; // w21
  ServantStatusDialog_o *v52; // x22
  int64_t EquipIdByIndex; // x20
  ServantStatusDialog_EndDelegate_o *v54; // x23
  System_Action_o *v55; // x24
  struct ShiningIconComponent_o *v56; // x1
  const MethodInfo_47A29F8 *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v61; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v63; // x21
  ServantLeaderInfo_o *voiceTabBase; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  EquipTargetInfo_o *v68; // x20
  __int128 v69; // q1
  System_Reflection_MethodBase_o *v70; // x0
  int32_t v71; // w24
  Il2CppObject *v72; // x21
  ServantStatusListViewManager_o *v73; // x20
  ServantStatusListViewManager_CallbackFunc_o *v74; // x21
  struct ServantLeaderInfo_o *v75; // x8
  struct ServantLeaderInfo_o *v76; // x8
  EquipTargetInfo_o *v77; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+40h] [xbp-60h]

  v4 = id;
  v6 = this;
  if ( (byte_596C34A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_2213A60(&Method_ServantStatusDialog_Exit__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_13278/*"ServantLvExceed"*/);
    sub_2213A60(&StringLiteral_13282/*"ServantSkillCombine"*/);
    sub_2213A60(&StringLiteral_13279/*"ServantNpCombine"*/);
    sub_2213A60(&StringLiteral_4759/*"CommandCardEquip"*/);
    sub_2213A60(&StringLiteral_13266/*"ServantEQCombine"*/);
    sub_2213A60(&StringLiteral_13262/*"ServantCombine"*/);
    sub_2213A60(&StringLiteral_7167/*"FriendshipExceed"*/);
    sub_2213A60(&StringLiteral_13276/*"ServantLimitCountUp"*/);
    sub_2213A60(&StringLiteral_2398/*"AppendSkillCombine"*/);
    sub_2213A60(&StringLiteral_4760/*"CommandCardExceed"*/);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_2399/*"AppendSkillExchange"*/);
    byte_596C34A = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v6,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0);
        return;
      }
      goto LABEL_112;
    }
    if ( result == 1 )
      v9 = 2;
    else
      v9 = result;
    if ( v9 == 24 )
      v10 = 24;
    else
      v10 = v9 - 1;
    switch ( v10 )
    {
      case 0:
      case 1:
        mainInfo = v6->fields.mainInfo;
        if ( !mainInfo )
          goto LABEL_112;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v12 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnSelectStatus__);
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = v6->fields.mainInfo;
          if ( !v13 )
            goto LABEL_112;
          v14 = this;
          equipTargetId1 = v13->fields.equipTargetId1;
          v16 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v16,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v17, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v14 )
            goto LABEL_112;
          v18 = (CommonUI_o *)v14;
          v19 = equipTargetId1;
          v20 = v16;
          v21 = v17;
          v22 = 0;
LABEL_49:
          CommonUI__OpenServantEquipStatusDialog(v18, 11, v19, 1, v20, v21, v22, 0);
          return;
        }
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_95;
        equipTarget1 = servantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_95;
        v25 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
        *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        *(_OWORD *)&v80.fields.fakeValue = v25;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            *(_QWORD *)&result,
            *(_QWORD *)&id);
        v79 = v80;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v79, 0) < 1 )
          goto LABEL_95;
        v26 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnSelectStatus__);
        OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
        kind = v6->fields.kind;
        this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v28 = v6->fields.mainInfo;
        v29 = this;
        if ( kind == 5 )
        {
          if ( !v28 )
            goto LABEL_112;
          v75 = v28->fields.servantLeaderInfo;
          if ( !v75 )
            goto LABEL_112;
          v31 = v75->fields.equipTarget1;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v29 )
            goto LABEL_112;
          v34 = (CommonUI_o *)v29;
          v35 = 14;
        }
        else if ( kind == 4 )
        {
          if ( !v28 )
            goto LABEL_112;
          v30 = v28->fields.servantLeaderInfo;
          if ( !v30 )
            goto LABEL_112;
          v31 = v30->fields.equipTarget1;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v29 )
            goto LABEL_112;
          v34 = (CommonUI_o *)v29;
          v35 = 13;
        }
        else
        {
          if ( !v28 )
            goto LABEL_112;
          v76 = v28->fields.servantLeaderInfo;
          if ( !v76 )
            goto LABEL_112;
          v31 = v76->fields.equipTarget1;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v29 )
            goto LABEL_112;
          v34 = (CommonUI_o *)v29;
          v35 = 16;
        }
        v77 = v31;
        goto LABEL_111;
      case 2:
        ServantStatusDialog__OnClickCommand(v6, v4, *(const MethodInfo **)&id);
        return;
      case 3:
        ServantStatusDialog__OnClickFace(v6, v4, *(const MethodInfo **)&id);
        return;
      case 4:
        ServantStatusDialog__OnClickPortrait(v6, v4, *(const MethodInfo **)&id);
        return;
      case 5:
        ServantStatusDialog__OnClickCommandCodeShow(v6, v4, *(const MethodInfo **)&id);
        return;
      case 6:
        ServantStatusDialog__OnClickServantQuest(v6, v4, *(const MethodInfo **)&id);
        return;
      case 7:
        ServantStatusDialog__OnClickTdSpeed(v6, v4, *(const MethodInfo **)&id);
        return;
      case 8:
        ServantStatusDialog__OnClickChangeVoice(v6, v4, *(const MethodInfo **)&id);
        return;
      case 9:
        ServantStatusDialog__OnClickSupportLimitCount(v6, v4, *(const MethodInfo **)&id);
        return;
      case 10:
        ServantStatusDialog__OnClickRandomLimitCountSetting(v6, v4, *(const MethodInfo **)&id);
        return;
      case 11:
        ServantStatusDialog__OnclickRandomLimitCountMask(v6, v4, *(const MethodInfo **)&id);
        return;
      case 12:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_13262/*"ServantCombine"*/;
        goto LABEL_77;
      case 13:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v49 = StringLiteral_13266/*"ServantEQCombine"*/;
        this->fields.profileNewIcon = (struct ShiningIconComponent_o *)StringLiteral_13266/*"ServantEQCombine"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.profileNewIcon, v49, v43, v44, v45, v46, v47, v48);
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( v4 < 1 )
        {
          if ( !this )
            goto LABEL_112;
          v4 = 0;
        }
        else if ( !this )
        {
          goto LABEL_112;
        }
        LODWORD(this->fields.statusTabListViewManager) = v4;
        v57 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
LABEL_78:
        Instance = SingletonMonoBehaviour_object___get_Instance(v57);
        v61 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v58, v59);
          v61 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v61->static_fields->DEFAULT_FADE_TIME;
        v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v63, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v63, 0);
          return;
        }
        goto LABEL_112;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_13282/*"ServantSkillCombine"*/;
        goto LABEL_77;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_13276/*"ServantLimitCountUp"*/;
        goto LABEL_77;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_7167/*"FriendshipExceed"*/;
        goto LABEL_77;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_4759/*"CommandCardEquip"*/;
        goto LABEL_77;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_4760/*"CommandCardExceed"*/;
        goto LABEL_77;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_2398/*"AppendSkillCombine"*/;
        goto LABEL_77;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_2399/*"AppendSkillExchange"*/;
        goto LABEL_77;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_13279/*"ServantNpCombine"*/;
        goto LABEL_77;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_112;
        v42 = &StringLiteral_13278/*"ServantLvExceed"*/;
LABEL_77:
        v56 = (struct ShiningIconComponent_o *)*v42;
        this->fields.profileNewIcon = (struct ShiningIconComponent_o *)*v42;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.profileNewIcon,
          (int32_t)v56,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        v57 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        goto LABEL_78;
      case 24:
        this = (ServantStatusDialog_o *)v6->fields.mainInfo;
        if ( !this )
          goto LABEL_112;
        if ( !this->fields.baseObject )
          goto LABEL_86;
        if ( ServantStatusListViewItem__GetEquipIdByIndex((ServantStatusListViewItem_o *)this, v4, 0) < 1 )
        {
          this = (ServantStatusDialog_o *)v6->fields.mainInfo;
          if ( !this )
            goto LABEL_112;
LABEL_86:
          voiceTabBase = (ServantLeaderInfo_o *)this->fields.voiceTabBase;
          if ( voiceTabBase )
          {
            EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(voiceTabBase, v4, 0);
            if ( !EquipTargetInfoByEquipIdx )
              return;
            v68 = EquipTargetInfoByEquipIdx;
            v69 = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.fakeValue;
            *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v80.fields.fakeValue = v69;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v66, v67);
            v78 = v80;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v78, 0) < 1 )
              return;
            v70 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnSelectStatus__);
            OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0, 0);
            v71 = v6->fields.kind;
            v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v32 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v32,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0);
            v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v33, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
            if ( v71 == 5 )
            {
              if ( !v72 )
                goto LABEL_112;
              v34 = (CommonUI_o *)v72;
              v35 = 14;
            }
            else if ( v71 == 4 )
            {
              if ( !v72 )
                goto LABEL_112;
              v34 = (CommonUI_o *)v72;
              v35 = 13;
            }
            else
            {
              if ( !v72 )
                goto LABEL_112;
              v34 = (CommonUI_o *)v72;
              v35 = 16;
            }
            v77 = v68;
LABEL_111:
            CommonUI__OpenServantEquipStatusDialog_37388712(v34, v35, v77, v32, v33, 0);
            return;
          }
LABEL_95:
          v73 = v6->fields.statusTabListViewManager;
          v74 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v74,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( v73 )
          {
            ServantStatusListViewManager__SetMode(v73, 1, v74, 0);
            return;
          }
        }
        else
        {
          v50 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ServantStatusDialog_OnSelectStatus__);
          OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0);
          v51 = 0;
          if ( v4 == 1 )
          {
            this = (ServantStatusDialog_o *)v6->fields.mainInfo;
            if ( !this )
              goto LABEL_112;
            v51 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill((ServantStatusListViewItem_o *)this, 0);
          }
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v6->fields.mainInfo )
          {
            v52 = this;
            EquipIdByIndex = ServantStatusListViewItem__GetEquipIdByIndex(v6->fields.mainInfo, v4, 0);
            v54 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v54,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0);
            v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v55, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
            if ( v52 )
            {
              v22 = v51;
              v18 = (CommonUI_o *)v52;
              v19 = EquipIdByIndex;
              v20 = v54;
              v21 = v55;
              goto LABEL_49;
            }
          }
        }
LABEL_112:
        sub_2213CDC(this, *(_QWORD *)&result);
      case 25:
        ServantStatusDialog__OnClickVoiceEffect(v6, v4, *(const MethodInfo **)&id);
        return;
      default:
        goto LABEL_95;
    }
  }
}


void ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  _BOOL4 isExit; // w8
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v9; // x23
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v14; // x23
  ServantStatusVoiceListViewItem_o *v15; // x25
  int32_t v16; // w22
  int32_t v17; // w21
  System_String_o *v18; // x24
  System_String_o *LabelName; // x0
  System_String_o *v20; // x24
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  const MethodInfo *v22; // x5
  int32_t v23; // w2
  ServantVoiceMaster_o *v24; // x0
  int32_t v25; // w1
  System_String_o *v26; // x3
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v28; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v30; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C350 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596C350 = 1;
  }
  isExit = this->fields.isExit;
  VoicePrefix = 0;
  if ( !isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v9 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0);
    if ( !voiceTabListViewManager )
      goto LABEL_72;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v9, 0);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v12);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_72;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_72;
        v14 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_72;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_72;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0);
        if ( !Instance )
          goto LABEL_72;
        v15 = (ServantStatusVoiceListViewItem_o *)Instance;
        v16 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v15, 0);
        if ( !MasterData_object )
          goto LABEL_72;
        v17 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v16,
                        (int32_t)Instance,
                        0);
        v18 = System_Int32__ToString((int32_t)&VoicePrefix, 0);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v15, 0);
        v20 = System_String__Concat_75694928(v18, (System_String_o *)StringLiteral_16746/*"_"*/, LabelName, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v15, 0);
        if ( (int)Instance > 4 )
        {
          if ( (int)Instance <= 6 )
          {
            if ( (_DWORD)Instance == 5 )
            {
              if ( v14 )
              {
                EventRewardVoiceList = ServantVoiceMaster__getEventRewardVoiceList(
                                         (ServantVoiceMaster_o *)v14,
                                         v16,
                                         v17,
                                         v20,
                                         0);
                goto LABEL_64;
              }
            }
            else if ( v14 )
            {
              BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v14, v16, v17, v20, 0);
              ServantStatusDialog__PlayBattleVoice(this, v16, v17, BattleVoiceList, result, v28);
              return;
            }
            goto LABEL_72;
          }
          switch ( (_DWORD)Instance )
          {
            case 7:
              if ( v14 )
              {
                NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v14, v16, v17, v20, 0);
                ServantStatusDialog__PlayNpVoice(this, v16, v17, NpVoiceList, result, v30);
                return;
              }
              goto LABEL_72;
            case 8:
              if ( v14 )
              {
                EventRewardVoiceList = ServantVoiceMaster__getMasterMissionVoiceList(
                                         (ServantVoiceMaster_o *)v14,
                                         v16,
                                         v17,
                                         v20,
                                         0);
                goto LABEL_64;
              }
              goto LABEL_72;
            case 9:
              if ( v14 )
              {
                EventRewardVoiceList = ServantVoiceMaster__getEventShopVoiceList(
                                         (ServantVoiceMaster_o *)v14,
                                         v16,
                                         v17,
                                         v20,
                                         0);
LABEL_64:
                ServantStatusDialog__PlayChrVoice_41441316(this, v16, v17, EventRewardVoiceList, result, v22);
                return;
              }
LABEL_72:
              sub_2213CDC(Instance, v11);
          }
          goto LABEL_50;
        }
        if ( (int)Instance > 2 )
        {
          if ( (_DWORD)Instance == 3 )
          {
            if ( v14 )
            {
              EventRewardVoiceList = ServantVoiceMaster__getFirstGetVoiceList(
                                       (ServantVoiceMaster_o *)v14,
                                       v16,
                                       v17,
                                       v20,
                                       0);
              goto LABEL_64;
            }
          }
          else if ( v14 )
          {
            EventRewardVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v14, v16, v17, 0);
            goto LABEL_64;
          }
          goto LABEL_72;
        }
        if ( (_DWORD)Instance == 1 )
        {
          if ( v14 )
          {
            EventRewardVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v14, v16, v17, v20, 0);
            goto LABEL_64;
          }
          goto LABEL_72;
        }
        if ( (_DWORD)Instance != 2 )
        {
LABEL_50:
          Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v15, 0);
          if ( v14 )
          {
            EventRewardVoiceList = ServantVoiceMaster__getEntity_49838616(
                                     (ServantVoiceMaster_o *)v14,
                                     (int32_t)Instance,
                                     v16,
                                     v17,
                                     v20,
                                     0);
            goto LABEL_64;
          }
          goto LABEL_72;
        }
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v15, 0);
        if ( (int)Instance <= 7 )
        {
          if ( (_DWORD)Instance != 7 )
          {
LABEL_62:
            if ( v14 )
            {
              EventRewardVoiceList = ServantVoiceMaster__getLevelUpVoiceList(
                                       (ServantVoiceMaster_o *)v14,
                                       v16,
                                       v17,
                                       v20,
                                       0);
              goto LABEL_64;
            }
            goto LABEL_72;
          }
          if ( !v15->fields.voiceLabelSpecification )
          {
            if ( ServantStatusVoiceListViewItem__get_CondValue(v15, 0) == 1
              || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v15, 0),
                  (_DWORD)Instance == 3) )
            {
              Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v15, 0);
              if ( v14 )
              {
                EventRewardVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList(
                                         (ServantVoiceMaster_o *)v14,
                                         v16,
                                         v17,
                                         (int32_t)Instance,
                                         0);
                goto LABEL_64;
              }
              goto LABEL_72;
            }
            if ( !v15->fields.genderFlag )
            {
              if ( v14 )
              {
                EventRewardVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList(
                                         (ServantVoiceMaster_o *)v14,
                                         v16,
                                         v17,
                                         0);
                goto LABEL_64;
              }
              goto LABEL_72;
            }
          }
        }
        else
        {
          if ( (_DWORD)Instance != 18 )
          {
            if ( (_DWORD)Instance == 54 )
            {
              if ( v15->fields.genderFlag || v15->fields.voiceLabelSpecification )
              {
                Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v15, 0);
                if ( !v14 )
                  goto LABEL_72;
                v23 = (int)Instance;
                v24 = (ServantVoiceMaster_o *)v14;
                v25 = v16;
                v26 = v20;
              }
              else
              {
                Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v15, 0);
                if ( !v14 )
                  goto LABEL_72;
                v23 = (int)Instance;
                v24 = (ServantVoiceMaster_o *)v14;
                v25 = v16;
                v26 = 0;
              }
              EventRewardVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v24, v25, v23, v26, 0);
              goto LABEL_64;
            }
            goto LABEL_62;
          }
          if ( !v15->fields.genderFlag && !v15->fields.voiceLabelSpecification )
          {
            if ( v14 )
            {
              EventRewardVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                       (ServantVoiceMaster_o *)v14,
                                       v16,
                                       v17,
                                       2,
                                       1,
                                       0);
              goto LABEL_64;
            }
            goto LABEL_72;
          }
        }
        if ( v14 )
        {
          EventRewardVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                   (ServantVoiceMaster_o *)v14,
                                   v16,
                                   v17,
                                   v20,
                                   0);
          goto LABEL_64;
        }
        goto LABEL_72;
      }
    }
  }
}


void ServantStatusDialog__OnclickRandomLimitCountBattleMask(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__OnclickRandomLimitCountMask(this, 3, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct ServantStatusListViewItem_o *v15; // x0
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  long double v23; // q0
  __int64 v24; // x0
  __int64 v25; // x0
  CommonUI_o *v26; // x22
  System_String_o *v27; // x23
  CommonConfirmDialog_ClickDelegate_o *v28; // x0
  intptr_t *v29; // x8
  struct ServantStatusListViewItem_o *mainInfo; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v32; // x22
  __int64 v33; // x23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  long double v38; // q0
  __int64 v39; // x0
  __int64 v40; // x0
  CommonConfirmDialog_ClickDelegate_o *v41; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_596C355 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_2213A60(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__200_0__);
    sub_2213A60(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__200_1__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&StringLiteral_12468/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_2213A60(&StringLiteral_12469/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_2213A60(&StringLiteral_12466/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12465/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_596C355 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType, method);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
  this->fields.currentMaskType = maskType;
  switch ( maskType )
  {
    case 3:
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        return;
      userSvtEntity = mainInfo->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        v32 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v33 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
        *(_QWORD *)&v43.fields.currentCryptoKey = v32;
        *(_QWORD *)&v43.fields.fakeValue = v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v43, 0) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !ServantStatusListViewItem__get_IsEnableOwnRandomSetting(mainInfo, 0) )
        return;
      v34 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v35 = (System_Reflection_MethodBase_o *)sub_2213A44(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0);
      v39 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_WORD *)(v39 + 309) & 1) == 0 )
        v39 = sub_224B908(v38);
      v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
      if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
        v40 = sub_224B908(v38);
      v26 = **(CommonUI_o ***)(v40 + 184);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0);
      v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v29 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__200_0__;
      goto LABEL_44;
    case 2:
      v15 = this->fields.mainInfo;
      if ( !v15 )
        return;
      v16 = v15->fields.userSvtEntity;
      if ( !v16 )
      {
LABEL_18:
        if ( !ServantStatusListViewItem__get_IsEnableSupportRandomSetting(v15, 0) )
          return;
        v19 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
        v24 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
          v24 = sub_224B908(v23);
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
        if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
          v25 = sub_224B908(v23);
        v26 = **(CommonUI_o ***)(v25 + 184);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0);
        v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v29 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__200_1__;
LABEL_44:
        v41 = v28;
        CommonConfirmDialog_ClickDelegate___ctor(v28, (Il2CppObject *)this, *v29, 0);
        if ( !v26 )
          goto LABEL_47;
        CommonUI__OpenConfirmDialog_37373584(
          v26,
          (System_String_o *)StringLiteral_1/*""*/,
          v27,
          v5,
          v8,
          v41,
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
          0);
        return;
      }
      v17 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
      *(_QWORD *)&v42.fields.currentCryptoKey = v17;
      *(_QWORD *)&v42.fields.fakeValue = v18;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0) )
      {
        v15 = this->fields.mainInfo;
        if ( !v15 )
          return;
        goto LABEL_18;
      }
LABEL_8:
      v9 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_2213A78(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v12 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v12, 0);
        return;
      }
LABEL_47:
      sub_2213CDC(v13, v14);
    case 1:
      goto LABEL_8;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantStatusListViewItem_o *v21; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1

  if ( (byte_596C30A & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C30A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)partyItem,
    *(System_String_o **)&member,
    (int32_t)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (bool)method);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_596C32C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_14144/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_596C32C = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, callback, method);
  if ( !TutorialFlag__Get_47388504(106, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14144/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0);
    if ( !Instance )
      sub_2213CDC(v8, v9);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v8, 106, callback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_41408184(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantStatusListViewItem_o *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1

  if ( (byte_596C30B & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C30B = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (System_String_o *)partyItem,
    *(System_String_o **)&member,
    (int32_t)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (bool)method);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_41408392(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantStatusListViewItem_o *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x1

  if ( (byte_596C30C & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C30C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)partyItem,
    *(System_String_o **)&member,
    (int32_t)callback,
    (int32_t)openCallback,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42384616(v20, partyItem, member, 0, 0);
  this->fields.mainInfo = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_41408588(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_596C30D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C30D = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_2213CDC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)*v13);
  ServantStatusDialog__Open_41408872(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, -1, v15);
}


void ServantStatusDialog__Open_41408872(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  unsigned __int64 v20; // x8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1

  if ( (byte_596C311 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C311 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    beforeClearQuestId,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (unsigned int)this->fields.kind;
  v21 = v20 > 0x25;
  v22 = 0x19DFFFFFFBuLL >> v20;
  v23 = v21;
  v24 = v23 | v22;
  v25 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v25,
    userSvtEntity,
    0,
    0,
    0,
    v24 & 1,
    v24 & 1,
    v24 & 1,
    0,
    0,
    0,
    0,
    0,
    beforeClearQuestId,
    0);
  this->fields.mainInfo = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_41409148(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x5

  if ( (byte_596C30E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C30E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_2213CDC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)*v13);
  ServantStatusDialog__Open_41409428(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_41409428(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned __int64 v19; // x8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w23
  ServantStatusListViewItem_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1

  if ( (byte_596C312 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C312 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (unsigned int)this->fields.kind;
  v20 = v19 > 0x25;
  v21 = 0x19DFFFFFFBuLL >> v19;
  v22 = v20;
  v23 = v22 | v21;
  v24 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v24,
    userSvtEntity,
    0,
    0,
    callback != 0,
    v23 & 1,
    v23 & 1,
    v23 & 1,
    0,
    0,
    0,
    0,
    0,
    -1,
    0);
  this->fields.mainInfo = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_41409700(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_596C30F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C30F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_2213CDC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)*v13);
  ServantStatusDialog__Open_41409984(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_41409984(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  char v17; // w5
  bool v18; // w6
  bool v19; // w7
  unsigned __int64 v20; // x8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  char v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1

  if ( (byte_596C313 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C313 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (unsigned int)this->fields.kind;
  v21 = v20 > 0x25;
  v22 = 0x19DFFFFFFBuLL >> v20;
  v23 = v21;
  v24 = v23 | v22;
  v25 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v25,
    userSvtEntity,
    0,
    0,
    0,
    v24 & 1,
    v24 & 1,
    v24 & 1,
    canMoveCombine,
    0,
    0,
    0,
    0,
    -1,
    0);
  this->fields.mainInfo = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_41410268(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *Entity; // x2
  const MethodInfo *v15; // x6

  if ( (byte_596C310 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C310 = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_2213CDC(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)*v13);
  ServantStatusDialog__Open_41410552(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_41410552(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  char v17; // w5
  bool v18; // w6
  bool v19; // w7
  unsigned __int64 v20; // x8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w24
  ServantStatusListViewItem_o *v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  char v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1

  if ( (byte_596C314 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C314 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (unsigned int)this->fields.kind;
  v21 = v20 > 0x25;
  v22 = 0x19DFFFFFFBuLL >> v20;
  v23 = v21;
  v24 = v23 | v22;
  v25 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v25,
    userSvtEntity,
    0,
    0,
    callback != 0,
    v24 & 1,
    v24 & 1,
    v24 & 1,
    canMoveCombine,
    0,
    0,
    0,
    0,
    -1,
    0);
  this->fields.mainInfo = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_41410960(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        bool isGrand,
        bool isForceNotGrand,
        bool isChangeFriendShipSkill,
        int32_t tempOverwriteTdLv,
        const MethodInfo *method)
{
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  unsigned __int64 v25; // x8
  bool v26; // cc
  unsigned __int64 v27; // x8
  char v28; // w9
  char v29; // w20
  ServantStatusListViewItem_o *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x1

  if ( (byte_596C315 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C315 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)equipIdList,
    (int32_t)questRestrictionInfo,
    (int32_t)callback,
    (bool)openCallback,
    canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (unsigned int)this->fields.kind;
  v26 = v25 > 0x25;
  v27 = 0x19DFFFFFFBuLL >> v25;
  v28 = v26;
  v29 = v28 | v27;
  v30 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v30,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v29 & 1,
    v29 & 1,
    v29 & 1,
    canMoveCombine,
    isGrand,
    isForceNotGrand,
    isChangeFriendShipSkill,
    tempOverwriteTdLv,
    -1,
    0);
  this->fields.mainInfo = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  ServantStatusDialog__Init(this, v37);
}


void ServantStatusDialog__Open_41411280(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        System_Int64_array *equipIdList,
        QuestRestrictionInfo_o *questRestrictionInfo,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        int32_t tempOverwriteTdLv,
        const MethodInfo *method)
{
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  unsigned __int64 v24; // x8
  bool v25; // cc
  unsigned __int64 v26; // x8
  char v27; // w9
  char v28; // w26
  ServantStatusListViewItem_o *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x1

  if ( (byte_596C316 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C316 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)equipIdList,
    (int32_t)questRestrictionInfo,
    (int32_t)callback,
    (bool)openCallback,
    canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (unsigned int)this->fields.kind;
  v25 = v24 > 0x25;
  v26 = 0x19DFFFFFFBuLL >> v24;
  v27 = v25;
  v28 = v27 | v26;
  v29 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42386280(
    v29,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0,
    v28 & 1,
    v28 & 1,
    v28 & 1,
    canMoveCombine,
    0,
    0,
    0,
    tempOverwriteTdLv,
    -1,
    0);
  this->fields.mainInfo = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  ServantStatusDialog__Init(this, v36);
}


void ServantStatusDialog__Open_41411588(
        ServantStatusDialog_o *this,
        int32_t kind,
        int64_t userSvtId,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v18; // x7

  if ( (byte_596C317 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C317 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_41411808(
    this,
    kind,
    (UserServantEntity_o *)Entity,
    isUse,
    callback,
    openCallback,
    isSkillChange,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_41411808(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantStatusListViewItem_o *v21; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1

  if ( (byte_596C318 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C318 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtEntity,
    (System_String_o *)isUse,
    (int32_t)callback,
    (int32_t)openCallback,
    isSkillChange,
    (bool)method);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42389028(v21, userSvtEntity, isUse, isSkillChange, 0);
  this->fields.mainInfo = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__Open_41412008(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned __int64 v19; // x8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1

  if ( (byte_596C319 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C319 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtCollectionEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (unsigned int)this->fields.kind;
  v20 = v19 > 0x25;
  v21 = 0x19DFFFFFFBuLL >> v19;
  v22 = v20;
  v23 = v22 | v21;
  v24 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42390876(v24, userSvtCollectionEntity, 0, v23 & 1, 0);
  this->fields.mainInfo = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_41412224(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  unsigned __int64 v20; // x8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1

  if ( (byte_596C31A & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31A = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtCollectionEntity,
    *(System_String_o **)&imageLimitCount,
    (int32_t)callback,
    (int32_t)openCallback,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (unsigned int)this->fields.kind;
  v21 = v20 > 0x25;
  v22 = 0x19DFFFFFFBuLL >> v20;
  v23 = v21;
  v24 = v23 | v22;
  v25 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42392592(v25, userSvtCollectionEntity, imageLimitCount, 0, v24 & 1, 0);
  this->fields.mainInfo = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_41412456(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned __int64 v19; // x8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w23
  ServantStatusListViewItem_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1

  if ( (byte_596C31B & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31B = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userSvtCollectionEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (unsigned int)this->fields.kind;
  v20 = v19 > 0x25;
  v21 = 0x19DFFFFFFBuLL >> v19;
  v22 = v20;
  v23 = v22 | v21;
  v24 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42390876(v24, userSvtCollectionEntity, callback != 0, v23 & 1, 0);
  this->fields.mainInfo = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_41412676(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantStatusListViewItem_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1

  if ( (byte_596C31C & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)servantLeaderInfo,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42393908(v19, servantLeaderInfo, kind != 7, 0);
  this->fields.mainInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_41412860(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantStatusListViewItem_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1

  if ( (byte_596C31D & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)equipTargetInfo,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42395624(
    v19,
    equipTargetInfo,
    kind == 19,
    ((unsigned int)kind > 0x13) | (0x69FFFu >> kind) & 1,
    0);
  this->fields.mainInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_41413072(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantStatusListViewItem_o *v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x1

  if ( (byte_596C31E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)commandCodeEntity,
    (System_String_o *)isUse,
    (int32_t)callback,
    (int32_t)openCallback,
    (bool)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42396708(v20, commandCodeEntity, isUse, 0);
  this->fields.mainInfo = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_41413264(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantStatusListViewItem_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1

  if ( (byte_596C31F & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C31F = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userCommandCodeEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42397516(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_41413440(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantStatusListViewItem_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1

  if ( (byte_596C320 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C320 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (System_String_o *)userCommandCodeEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42397516(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_41413616(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantStatusListViewItem_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1

  if ( (byte_596C321 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItem_TypeInfo);
    byte_596C321 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)userCommandCodeCollectionEntity,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_2213CCC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42399072(v19, userCommandCodeCollectionEntity, 0);
  this->fields.mainInfo = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__PlayBattleEffect(
        ServantStatusDialog_o *this,
        ServantStatusDialog_BattleActorData_o *battleActorData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleChrCamera; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v20; // s8
  int32_t svtId; // w23
  int32_t limitCount; // w24
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v26; // x21
  Il2CppObject *v27; // x22
  float32x2_t v28; // d9
  float v29; // s8
  unsigned __int64 v30; // d0 OVERLAPPED
  float v31; // s2
  int v32; // s1
  UnityEngine_Transform_o *v33; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v37; // x26
  UnityEngine_Transform_o *v38; // x27
  float Item; // s8
  float v40; // s9
  float v41; // s0
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *v48; // x24
  __int64 v49; // x2
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x1
  __int64 v63; // x2
  int32_t v64; // w19
  System_String_o *v65; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C337 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3229/*"Battle2D"*/);
    sub_2213A60(&StringLiteral_17293/*"_y0"*/);
    byte_596C337 = 1;
  }
  battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
  v65 = 0;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleActorData, method);
  if ( UnityEngine_Object__op_Equality(battleChrCamera, 0, 0) )
  {
    this->fields.currentBattleActorData = battleActorData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentBattleActorData,
      (int32_t)battleActorData,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    ServantStatusDialog__DestroyBattleChr(this, v13);
    return;
  }
  transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  v15 = transform;
  while ( 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v15,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
      break;
    transform = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v15, 0);
    v15 = transform;
    if ( !transform )
      goto LABEL_14;
  }
  if ( !Component_object )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)Component_object,
                                           0);
  if ( !transform )
    goto LABEL_14;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_14;
  v20 = *(float *)&localScale;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_14;
  v67.fields.x = 1.0 / v20;
  v67.fields.y = 1.0 / v20;
  v67.fields.z = 1.0 / v20;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v67, 0);
  if ( !battleActorData )
    goto LABEL_14;
  svtId = battleActorData->fields.svtId;
  limitCount = battleActorData->fields.limitCount;
  ServantStatusDialog__DestroyBattleChr(this, v6);
  transform = (UnityEngine_Component_o *)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v23, v24);
  transform = (UnityEngine_Component_o *)ServantAssetLoadManager__loadBattleActor(
                                           &v65,
                                           gameObject,
                                           svtId,
                                           limitCount,
                                           0,
                                           0);
  if ( !transform )
    goto LABEL_14;
  v26 = (UnityEngine_GameObject_o *)transform;
  v27 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)transform,
          (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v26, 0);
  if ( !v27 )
    goto LABEL_14;
  BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v27, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)transform,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !transform )
    goto LABEL_14;
  transform = (UnityEngine_Component_o *)ServantLimitAddMaster__TryGetEntity(
                                           (ServantLimitAddMaster_o *)transform,
                                           &entity,
                                           svtId,
                                           limitCount,
                                           0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_14;
    v28.n64_u64[0] = vmul_f32(vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX), vdup_n_s32(0x3C23D70Au)).n64_u64[0];
    v29 = (float)entity->fields.battleCharaOffsetZ * 0.01;
  }
  else
  {
    v28.n64_u64[0] = 0;
    v29 = 0.0;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v26, 0);
  if ( !transform )
    goto LABEL_14;
  v30 = vadd_f32(v28, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
  v31 = v29 + this->fields.CHARA_BASE_POSITION.fields.z;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&v30, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v26, 0);
  if ( !transform )
    goto LABEL_14;
  v68.fields.x = 0.0;
  v68.fields.z = 0.0;
  v68.fields.y = 270.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v68, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v26, 0);
  v33 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE5 )
  {
    transform = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v33 )
    goto LABEL_14;
  UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  mainInfo = this->fields.mainInfo;
  if ( mainInfo )
  {
    svtEntity = mainInfo->fields.svtEntity;
    if ( svtEntity )
    {
      battleSize = svtEntity->fields.battleSize;
      v37 = (System_Collections_Generic_Dictionary_int__float__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__float__TypeInfo);
      System_Collections_Generic_Dictionary_int__float____ctor(
        v37,
        (const MethodInfo_3FA21D4 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
      if ( !v37 )
        goto LABEL_14;
      System_Collections_Generic_Dictionary_int__float___Add(
        v37,
        5,
        0.75,
        (const MethodInfo_3FA2B80 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      System_Collections_Generic_Dictionary_int__float___Add(
        v37,
        8,
        0.75,
        (const MethodInfo_3FA2B80 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      System_Collections_Generic_Dictionary_int__float___Add(
        v37,
        9,
        0.75,
        (const MethodInfo_3FA2B80 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
             v37,
             battleSize,
             (const MethodInfo_3FA2D78 *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
      {
        v38 = UnityEngine_GameObject__get_transform(v26, 0);
        Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                 v37,
                 battleSize,
                 (const MethodInfo_3FA2AE4 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        v40 = System_Collections_Generic_Dictionary_int__float___get_Item(
                v37,
                battleSize,
                (const MethodInfo_3FA2AE4 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        v41 = System_Collections_Generic_Dictionary_int__float___get_Item(
                v37,
                battleSize,
                (const MethodInfo_3FA2AE4 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        if ( !v38 )
          goto LABEL_14;
        v69.fields.z = v41;
        v69.fields.x = Item;
        v69.fields.y = v40;
        UnityEngine_Transform__set_localScale(v38, v69, 0);
      }
    }
  }
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v27, svtId, limitCount, 0);
  if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v27, 0) )
    BattleFBXComponent__SetTempShaderFloatProperty(
      (BattleFBXComponent_o *)v27,
      5000.0,
      (System_String_o *)StringLiteral_17293/*"_y0"*/,
      0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v42, v43);
  Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(svtId, limitCount, 0, 0);
  BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v27, Manager__loadAnimEvents, svtId, limitCount, 0);
  BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v27, this->fields.defaultAnimationName, 2, 0);
  BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v27, this->fields.defaultAnimationName, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0);
  if ( !transform
    || (v45 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0)) == 0) )
  {
LABEL_14:
    sub_2213CDC(transform, v6);
  }
  v48 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)transform,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v49);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_58;
    if ( v48 )
    {
      UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v48, 0);
      goto LABEL_58;
    }
    goto LABEL_14;
  }
  if ( !v45 )
    goto LABEL_14;
  SimpleAnimation__Sample((SimpleAnimation_o *)v45, 0);
LABEL_58:
  this->fields.currentBattleActorData = battleActorData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentBattleActorData,
    (int32_t)battleActorData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.battleActor = (struct BattleFBXComponent_o *)v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.battleActor, (int32_t)v27, v56, v57, v58, v59, v60, v61);
  v64 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v62, v63);
  NGUITools__SetLayer(v26, v64, 0);
}


bool ServantStatusDialog__PlayBattleVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_596C341 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_596C341 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayChrVoice(
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


bool ServantStatusDialog__PlayChrVoice_41441316(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_596C343 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_596C343 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayNpVoice(
        ServantStatusDialog_o *this,
        int32_t svtId,
        int32_t limitCount,
        System_Collections_Generic_List_ServantVoiceData____o *voicePlayListList,
        int32_t listIndex,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v10; // x20
  System_String_o *VoiceAssetName; // x22
  ServantVoiceData_array *Item; // x2
  const MethodInfo *v13; // x4

  v10 = this;
  if ( (byte_596C342 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_596C342 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
  return ServantStatusDialog__PlayVoice(v10, VoiceAssetName, Item, listIndex, v13);
}


bool ServantStatusDialog__PlayVoice(
        ServantStatusDialog_o *this,
        System_String_o *assetName,
        ServantVoiceData_array *voicePlayList,
        int32_t listIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *voiceDataList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  bool v12; // w23
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596C33E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_596C33E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( voicePlayList && voicePlayList->max_length )
  {
    voiceDataList = this->fields.voiceDataList;
    if ( !voiceDataList )
      sub_2213CDC(0, assetName);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)voiceDataList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v31 = v30;
    v30.fields._list = 0;
    *(_QWORD *)&v30.fields._index = &v31;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      v12 = v10;
      if ( !v10 )
        break;
      if ( !assetName )
        sub_2213CDC(v10, v11);
      if ( System_String__Equals_75686512(assetName, (System_String_o *)v31.fields._current, 0) )
      {
        ServantStatusDialog__StopVoice(this, v13);
        if ( this->fields.tabKind == 3 )
        {
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          if ( !voiceTabListViewManager )
            sub_2213CDC(0, v14);
          ServantStatusVoiceListViewManager__SetMode_44653016(voiceTabListViewManager, 2, listIndex, 0);
          this->fields.voiceListIndex = listIndex;
        }
        this->fields.voicePlayList = voicePlayList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayList,
          (int32_t)voicePlayList,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        this->fields.voicePlayAssetName = assetName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayAssetName,
          (int32_t)assetName,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        this->fields.voicePlayNum = 0;
        ServantStatusDialog__EndWaitVoice(this, v28);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  else
  {
    return 0;
  }
  return v12;
}


void ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_596C348 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C348 = 1;
  }
  if ( !this->fields.isExit )
  {
    isBgmLow = this->fields.isBgmLow;
    this->fields.isExit = 1;
    if ( isBgmLow )
    {
      this->fields.isBgmLow = 0;
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
      OptionManager__Recover(0);
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_41386816(charaGraphListViewManager, 1, v2);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_44599780(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_42367628(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0);
            return;
          }
        }
      }
    }
    sub_2213CDC(charaGraphListViewManager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__RandomLimitCountSetting(
        ServantStatusDialog_o *this,
        bool isDecide,
        bool isOwnSetting,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v10; // x1
  struct System_Boolean_array *tabInitList; // x8
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_596C36C & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596C36C = 1;
  }
  if ( isDecide )
  {
    mainInfo = this->fields.mainInfo;
    if ( isOwnSetting )
    {
      if ( !mainInfo )
        goto LABEL_18;
      ServantStatusListViewItem__SetRandomLimitCount(mainInfo, randomLimitCount, 0);
      mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
      if ( !mainInfo )
        goto LABEL_18;
      ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
        (ServantStatusCharaGraphListViewManager_o *)mainInfo,
        (const MethodInfo *)isDecide);
      ServantStatusDialog__ChangeCharaGraph_41463168(this, v10);
      tabInitList = this->fields.tabInitList;
      if ( !tabInitList )
        goto LABEL_18;
      if ( LODWORD(tabInitList->max_length) <= 2 )
        sub_2213CE4(mainInfo);
      if ( tabInitList->m_Items[2] )
      {
        mainInfo = this->fields.mainInfo;
        if ( mainInfo )
        {
          battleTabListViewManager = this->fields.battleTabListViewManager;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStage(mainInfo, 0, 0);
          if ( battleTabListViewManager )
          {
            ServantStatusBattleListViewManager__ChangeSelect(battleTabListViewManager, (int32_t)mainInfo, 0);
            goto LABEL_15;
          }
        }
LABEL_18:
        sub_2213CDC(mainInfo, isDecide);
      }
    }
    else
    {
      if ( !mainInfo )
        goto LABEL_18;
      ServantStatusListViewItem__SetRandomLimitCountSupport(mainInfo, randomLimitCount, 0);
    }
  }
LABEL_15:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_18;
  ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)mainInfo, 9, 0);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_18;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v14, 0);
}


void ServantStatusDialog__RandomLimitCountSettingResource(
        ServantStatusDialog_o *this,
        bool isOwnSetting,
        bool isRandomOn,
        int32_t randomLimitCount,
        const MethodInfo *method)
{
  _BOOL4 v6; // w21
  __int64 v9; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  const MethodInfo *v19; // x4
  struct ServantStatusListViewItem_o *v20; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v22; // x21
  __int64 v23; // x22
  __int64 v24; // x2
  int32_t v25; // w21
  BalanceConfig_c *v26; // x8
  System_Int32_array *SupportLimitCountStageList; // x21
  System_Func_int__bool__o *v28; // x22
  __int64 v29; // x2
  long double v30; // q0
  __int64 v31; // x0
  __int64 v32; // x0
  CommonUI_o *v33; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_String_o *v36; // x23
  CommonConfirmDialog_ClickDelegate_o *v37; // x0
  intptr_t *v38; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  long double v43; // q0
  __int64 v44; // x0
  __int64 v45; // x0
  CommonConfirmDialog_ClickDelegate_o *v46; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v6 = isRandomOn;
  if ( (byte_596C36B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__0__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__1__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__2__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass222_0_TypeInfo);
    sub_2213A60(&StringLiteral_12479/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12477/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_12466/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12467/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12478/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_12465/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_596C36B = 1;
  }
  v9 = sub_2213CCC(ServantStatusDialog___c__DisplayClass222_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass222_0___ctor((ServantStatusDialog___c__DisplayClass222_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_46;
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 32) = isOwnSetting;
  *(_DWORD *)(v9 + 36) = randomLimitCount;
  if ( isOwnSetting )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_46;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsEnableOwnRandomSetting(mainInfo, 0);
    if ( (((unsigned int)mainInfo ^ v6) & 1) == 0 )
    {
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_46;
      ServantStatusListViewItem__SetRandomLimitCount(mainInfo, *(_DWORD *)(v9 + 36), 0);
      goto LABEL_31;
    }
    if ( *(_BYTE *)(v9 + 32) )
      goto LABEL_10;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_46;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsEnableSupportRandomSetting(mainInfo, 0);
  if ( (((unsigned int)mainInfo ^ v6) & 1) == 0 )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_46;
    ServantStatusListViewItem__SetRandomLimitCountSupport(mainInfo, *(_DWORD *)(v9 + 36), 0);
LABEL_31:
    mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
    if ( mainInfo )
    {
      ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)mainInfo, 9, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v40 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v40, 0);
        return;
      }
    }
    goto LABEL_46;
  }
LABEL_10:
  *(_DWORD *)(v9 + 16) = 12;
  if ( v6 )
  {
    v20 = this->fields.mainInfo;
    if ( !v20 )
      goto LABEL_46;
    userSvtEntity = v20->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_46;
    v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v18);
    *(_QWORD *)&v47.fields.currentCryptoKey = v22;
    *(_QWORD *)&v47.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
    v26 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v24);
      v26 = BalanceConfig_TypeInfo;
    }
    if ( v25 == v26->static_fields->ServantIdMashu1 )
    {
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_46;
      SupportLimitCountStageList = ServantStatusListViewItem__GetSupportLimitCountStageList(mainInfo, 0);
      v28 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v28,
        (Il2CppObject *)v9,
        Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__0__,
        0);
      if ( BasicHelper__Any_int__58784608(
             SupportLimitCountStageList,
             (System_Func_T__bool__o *)v28,
             (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248) )
      {
        v31 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_WORD *)(v31 + 309) & 1) == 0 )
          v31 = sub_224B908(v30);
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
        if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
          v32 = sub_224B908(v30);
        v33 = **(CommonUI_o ***)(v32 + 184);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v29);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12479/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0);
        v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v38 = &Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__1__;
        goto LABEL_43;
      }
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_46;
    if ( ServantStatusListViewItem__HasRandomGroup(mainInfo, 0) )
    {
      v44 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_WORD *)(v44 + 309) & 1) == 0 )
        v44 = sub_224B908(v43);
      v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
      if ( (*(_WORD *)(v45 + 309) & 1) == 0 )
        v45 = sub_224B908(v43);
      v33 = **(CommonUI_o ***)(v45 + 184);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12467/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12466/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
      v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v38 = &Method_ServantStatusDialog___c__DisplayClass222_0__RandomLimitCountSettingResource_b__2__;
LABEL_43:
      v46 = v37;
      CommonConfirmDialog_ClickDelegate___ctor(v37, (Il2CppObject *)v9, *v38, 0);
      if ( v33 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v33,
          (System_String_o *)StringLiteral_1/*""*/,
          v34,
          v35,
          v36,
          v46,
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
          0,
          0);
        return;
      }
LABEL_46:
      sub_2213CDC(mainInfo, v11);
    }
  }
  ServantStatusDialog__RandomLimitCountSetting(this, 1, *(_BYTE *)(v9 + 32), *(_DWORD *)(v9 + 36), v19);
}


void ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x19
  MissionNaviTransitionBoardItem_o *p_cashedBattleCharaChangeConfirmAssetData; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596C325 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596C325 = 1;
  }
  cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
  if ( cashedBattleCharaChangeConfirmAssetData )
  {
    p_cashedBattleCharaChangeConfirmAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.cashedBattleCharaChangeConfirmAssetData;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47496972(cashedBattleCharaChangeConfirmAssetData, 0);
    p_cashedBattleCharaChangeConfirmAssetData->klass = 0;
    sub_2213A04(p_cashedBattleCharaChangeConfirmAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetActiveInputLockPanel(ServantStatusDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596C335 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C335 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag, method);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0, 0) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x21
  MissionNaviTransitionBoardItem_o *p_battleCharaChangeConfirmDialog; // x19
  __int64 v6; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  __int64 v8; // x2
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x21
  UnityEngine_Transform_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Object_object__58532980; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C326 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Transform___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C326 = 1;
  }
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
  {
    battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    p_battleCharaChangeConfirmDialog = (MissionNaviTransitionBoardItem_o *)&this->fields.battleCharaChangeConfirmDialog;
    if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      goto LABEL_15;
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_18;
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               baseObject,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Transform___);
    cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
    v10 = (UnityEngine_Transform_o *)baseObject;
    if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v6, v8);
    if ( !cashedBattleCharaChangeConfirmAssetData )
      goto LABEL_18;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                cashedBattleCharaChangeConfirmAssetData,
                                ServantStatusDialog_TypeInfo->static_fields->BattleCharaChangeConfirmDialogPrefabName,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717116(
                                               Object_object__58532980,
                                               v10,
                                               (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( !baseObject )
      goto LABEL_18;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         baseObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    p_battleCharaChangeConfirmDialog->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
    sub_2213A04(p_battleCharaChangeConfirmDialog, (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)p_battleCharaChangeConfirmDialog->klass, 0, 0) )
    {
LABEL_15:
      baseObject = (UnityEngine_GameObject_o *)p_battleCharaChangeConfirmDialog->klass;
      if ( p_battleCharaChangeConfirmDialog->klass )
      {
        BattleCharaChangeConfirmDialog__Init((BattleCharaChangeConfirmDialog_o *)baseObject, 0);
        return;
      }
LABEL_18:
      sub_2213CDC(baseObject, v6);
    }
  }
}


void ServantStatusDialog__SetBattleCharaTabExplanation(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusDialog_o *v3; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UILabel_o *battleExplanationLabel; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w8
  int v9; // w9
  System_String_o *v10; // x0
  System_String_o *costumeName; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_596C377 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12418/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_12414/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    byte_596C377 = 1;
  }
  mainInfo = v3->fields.mainInfo;
  costumeName = 0;
  if ( !mainInfo )
    goto LABEL_15;
  if ( !mainInfo->fields.userSvtEntity )
    return;
  battleExplanationLabel = v3->fields.battleExplanationLabel;
  v8 = ServantStatusDialog__EnableSpecialCostume(v3, &costumeName, v2);
  v9 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v8 )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, 0);
    this = (ServantStatusDialog_o *)System_String__Format(v10, (Il2CppObject *)costumeName, 0);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12414/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0);
  }
  method = (const MethodInfo *)this;
  if ( !battleExplanationLabel )
LABEL_15:
    sub_2213CDC(this, method);
  UILabel__set_text(battleExplanationLabel, (System_String_o *)this, 0);
}


void ServantStatusDialog__SetChangeBattleResource(
        ServantStatusDialog_o *this,
        bool isModifyInfo,
        const MethodInfo *method)
{
  __int64 v4; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  int32_t Hp_k__BackingField; // w23
  int32_t Atk_k__BackingField; // w24
  int32_t Rarity_k__BackingField; // w22
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  struct ServantOverwriteStatus_o *v18; // x8
  bool v19; // w8
  ServantStatusDialog_BattleActorData_o *BattleActorData; // x0
  ServantStatusDialog_BattleActorData_o **v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x2
  System_String_o *assetName; // x22
  const MethodInfo *v30; // x2
  struct ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x22
  System_Action_o *v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x2
  ServantStatusDialog_BattleActorData_o *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x2
  System_String_o *v48; // x22
  System_String_o *v49; // x21
  AssetLoader_LoadEndDataHandler_o *v50; // x22
  const MethodInfo *v51; // x1

  if ( (byte_596C339 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
    byte_596C339 = 1;
  }
  v4 = sub_2213CCC(ServantStatusDialog___c__DisplayClass165_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass165_0___ctor((ServantStatusDialog___c__DisplayClass165_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)this, v7, v8, v9, v10, v11, v12);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_31;
  overwriteStatus = mainInfo->fields.overwriteStatus;
  if ( !overwriteStatus )
    goto LABEL_31;
  Hp_k__BackingField = overwriteStatus->fields._Hp_k__BackingField;
  Atk_k__BackingField = overwriteStatus->fields._Atk_k__BackingField;
  Rarity_k__BackingField = overwriteStatus->fields._Rarity_k__BackingField;
  ServantStatusListViewItem__SelectDispLimitCountStageList(mainInfo, this->fields.confirmDispLv, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_31;
  battleTabListViewManager = this->fields.battleTabListViewManager;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStage(mainInfo, 0, 0);
  if ( !battleTabListViewManager )
    goto LABEL_31;
  ServantStatusBattleListViewManager__ChangeSelect(battleTabListViewManager, (int32_t)mainInfo, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_31;
  v18 = mainInfo->fields.overwriteStatus;
  if ( !v18 )
    goto LABEL_31;
  v19 = Atk_k__BackingField != v18->fields._Atk_k__BackingField
     || Hp_k__BackingField != v18->fields._Hp_k__BackingField
     || Rarity_k__BackingField != ServantStatusListViewItem__get_Rarity(mainInfo, 0);
  *(_BYTE *)(v4 + 32) = v19;
  BattleActorData = ServantStatusDialog__GetBattleActorData(this, v6);
  *(_QWORD *)(v4 + 24) = BattleActorData;
  v21 = (ServantStatusDialog_BattleActorData_o **)(v4 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)BattleActorData, v22, v23, v24, v25, v26, v27);
  mainInfo = *(ServantStatusListViewItem_o **)(v4 + 24);
  if ( !mainInfo )
    goto LABEL_31;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog_BattleActorData__EqualsAssetName(
                                              (ServantStatusDialog_BattleActorData_o *)mainInfo,
                                              this->fields.currentBattleActorData,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
  {
    if ( *v21 )
    {
      assetName = (*v21)->fields.assetName;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v28);
      mainInfo = (ServantStatusListViewItem_o *)AssetManager__getAssetStorage(assetName, 0);
      if ( mainInfo )
      {
        AssetData__AddEntry((AssetData_o *)mainInfo, 0);
        if ( !*(_BYTE *)(v4 + 32) )
        {
LABEL_23:
          ServantStatusDialog__PlayBattleEffect(this, *v21, v30);
          return;
        }
        charaGraphListViewManager = this->fields.charaGraphListViewManager;
        v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v32,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__0__,
          0);
        if ( charaGraphListViewManager )
        {
          charaGraphListViewManager->fields.callbackFunc2 = v32;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&charaGraphListViewManager->fields.callbackFunc2,
            (int32_t)v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          ServantStatusCharaGraphListViewManager__SetMode_41386816(charaGraphListViewManager, 3, v39);
          goto LABEL_23;
        }
      }
    }
LABEL_31:
    sub_2213CDC(mainInfo, v6);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_31;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  v40 = *v21;
  this->fields.loadingBattleActorData = *v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadingBattleActorData,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !*v21 )
    goto LABEL_31;
  v48 = (*v21)->fields.assetName;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v47);
  AssetManager__SetAssetBundleUnload(v48, 0);
  if ( !*v21 )
    goto LABEL_31;
  v49 = (*v21)->fields.assetName;
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v50,
    (Il2CppObject *)v4,
    Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__1__,
    0);
  if ( !AssetManager__loadAssetStorage(v49, v50, 1, 0, 0) )
    ServantStatusDialog__BattleAssetLoadError(this, v51);
}


void ServantStatusDialog__SetDetailName(ServantStatusDialog_o *this, System_String_o *name, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct UIRangeLabel_o *servantNameRangeLabel; // x8
  UILabel_o *textLabel; // x21
  RubyLabelHelper_o *servantNameRubyLabelHelper; // x23
  int32_t mFontSize; // w22
  UnityEngine_GameObject_o *servantNameMainPrefab; // x24
  UnityEngine_GameObject_o *servantNameRubyPrefab; // x25
  RubyLabelHelper_o *v11; // x26
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v4 = this;
  if ( (byte_596C328 & 1) == 0 )
  {
    sub_2213A60(&RubyLabelHelper_TypeInfo);
    this = (ServantStatusDialog_o *)sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C328 = 1;
  }
  servantNameRangeLabel = v4->fields.servantNameRangeLabel;
  if ( !servantNameRangeLabel )
    goto LABEL_13;
  textLabel = servantNameRangeLabel->fields.textLabel;
  if ( !textLabel )
    goto LABEL_13;
  servantNameRubyLabelHelper = v4->fields.servantNameRubyLabelHelper;
  mFontSize = textLabel->fields.mFontSize;
  if ( !servantNameRubyLabelHelper )
  {
    servantNameMainPrefab = v4->fields.servantNameMainPrefab;
    servantNameRubyPrefab = v4->fields.servantNameRubyPrefab;
    v11 = (RubyLabelHelper_o *)sub_2213CCC(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v11, textLabel, servantNameMainPrefab, servantNameRubyPrefab, 0);
    v4->fields.servantNameRubyLabelHelper = v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.servantNameRubyLabelHelper,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this = (ServantStatusDialog_o *)v4->fields.servantNameRangeLabel;
    if ( !this )
      goto LABEL_13;
    UIRangeLabel__Clear((UIRangeLabel_o *)this, 0);
    servantNameRubyLabelHelper = v4->fields.servantNameRubyLabelHelper;
  }
  this = (ServantStatusDialog_o *)ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, name, method);
  if ( !servantNameRubyLabelHelper
    || (RubyLabelHelper__SetTextSingleLine(
          servantNameRubyLabelHelper,
          name,
          ServantStatusDialog_TypeInfo->static_fields->NameOffsetWhenHasRuby,
          2.0,
          0),
        (this = (ServantStatusDialog_o *)v4->fields.servantNameRangeLabel) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, name);
  }
  UIRangeLabel__Set((UIRangeLabel_o *)this, textLabel->fields.mText, 0, 1, 0, 0, 0);
  UILabel__set_fontSize(textLabel, mFontSize, 0);
}


void ServantStatusDialog__SetMark(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  unsigned int kind; // w9
  UserServantEntity_o *userSvtEntity; // x0
  struct ServantStatusListViewItem_o *v6; // x8
  System_String_o **v7; // x8
  struct ServantStatusListViewItem_o *v8; // x8
  System_String_o **v9; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x20
  struct ServantStatusListViewItem_o *v13; // x8
  struct ServantStatusListViewItem_o *v14; // x8
  System_String_o **v15; // x8
  struct ServantStatusListViewItem_o *v16; // x8
  System_String_o **v17; // x8
  __int64 v18; // x2
  struct ServantStatusListViewItem_o *v19; // x8
  struct UserServantEntity_o *v20; // x9
  __int128 v21; // q1
  UISprite_o *favoriteSprite; // x20
  ServantStatusDialog_o *favoriteUserSvtId; // x22
  System_String_o **v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *pushButton; // x20
  struct ServantStatusListViewItem_o *v28; // x8
  __int64 *v29; // x8
  __int64 v30; // x2
  struct ServantStatusListViewItem_o *v31; // x8
  struct UserServantEntity_o *v32; // x9
  __int128 v33; // q0
  __int128 v34; // q1
  ServantStatusDialog_o *pushSprite; // x20
  ServantStatusDialog_o *pushUserSvtId; // x21
  int v37; // w9
  bool v38; // zf
  struct ServantStatusListViewItem_o *v39; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-50h]

  v2 = this;
  if ( (byte_596C346 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&StringLiteral_18427/*"button_lock_reg"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18428/*"button_lock_unreg"*/);
    sub_2213A60(&StringLiteral_18422/*"button_choice_unreg"*/);
    sub_2213A60(&StringLiteral_21160/*"icon_equip"*/);
    sub_2213A60(&StringLiteral_18421/*"button_choice_reg"*/);
    sub_2213A60(&StringLiteral_21161/*"icon_equip_cc"*/);
    sub_2213A60(&StringLiteral_18423/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_18424/*"button_favorite_unreg"*/);
    byte_596C346 = 1;
  }
  mainInfo = v2->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_85;
  if ( !mainInfo->fields.userGameEntity
    || (kind = v2->fields.kind, kind <= 0x24) && ((1LL << kind) & 0x19E0000000LL) != 0 )
  {
    this = (ServantStatusDialog_o *)v2->fields.markBase;
    if ( this )
    {
LABEL_8:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_85:
    sub_2213CDC(this, method);
  }
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(userSvtEntity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v2->fields.markBase;
      if ( !this )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v14 = v2->fields.mainInfo;
      if ( !v14 )
        goto LABEL_85;
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_85;
      v15 = (System_String_o **)(v14->fields.isLock ? &StringLiteral_18427/*"button_lock_reg"*/ : &StringLiteral_18428/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v15, 0);
      v16 = v2->fields.mainInfo;
      if ( !v16 )
        goto LABEL_85;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_85;
      v17 = (System_String_o **)(v16->fields.isChoice ? &StringLiteral_18421/*"button_choice_reg"*/ : &StringLiteral_18422/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v17, 0);
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_85;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUseFavorite, 0);
      v19 = v2->fields.mainInfo;
      if ( !v19 )
        goto LABEL_85;
      v20 = v19->fields.userSvtEntity;
      if ( !v20 )
        goto LABEL_85;
      v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      favoriteSprite = v2->fields.favoriteSprite;
      favoriteUserSvtId = (ServantStatusDialog_o *)v19->fields.favoriteUserSvtId;
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v42.fields.fakeValue = v21;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v18);
      v41 = v42;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v41, 0);
      if ( !favoriteSprite )
        goto LABEL_85;
      v24 = (System_String_o **)&StringLiteral_18423/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v24 = (System_String_o **)&StringLiteral_18424/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v24, 0);
      pushButton = (UnityEngine_Object_o *)v2->fields.pushButton;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
      if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
      {
        this = (ServantStatusDialog_o *)v2->fields.pushButton;
        if ( !this )
          goto LABEL_85;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUsePush, 0);
        v28 = v2->fields.mainInfo;
        if ( !v28 )
          goto LABEL_85;
        this = (ServantStatusDialog_o *)v28->fields.userSvtEntity;
        if ( !this )
          goto LABEL_85;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) || v2->fields.kind == 3 )
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_85;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            3,
            1,
            this->klass[1]._1.implementedInterfaces);
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_85;
          v29 = &StringLiteral_18432/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_85;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                            this,
                                            0,
                                            1,
                                            this->klass[1]._1.implementedInterfaces);
          v31 = v2->fields.mainInfo;
          if ( !v31 )
            goto LABEL_85;
          v32 = v31->fields.userSvtEntity;
          if ( !v32 )
            goto LABEL_85;
          v33 = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
          v34 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
          pushSprite = (ServantStatusDialog_o *)v2->fields.pushSprite;
          pushUserSvtId = (ServantStatusDialog_o *)v31->fields.pushUserSvtId;
          v37 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v42.fields.currentCryptoKey = v33;
          *(_OWORD *)&v42.fields.fakeValue = v34;
          if ( !v37 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v30);
          v40 = v42;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v40, 0);
          if ( !pushSprite )
            goto LABEL_85;
          v38 = pushUserSvtId == this;
          v29 = &StringLiteral_18431/*"button_push_reg"*/;
          this = pushSprite;
          if ( !v38 )
            v29 = &StringLiteral_18432/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v29, 0);
      }
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_85;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v39 = v2->fields.mainInfo;
      if ( !v39 )
        goto LABEL_85;
      if ( !this )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39->fields.isUse, 0);
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_85;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21160/*"icon_equip"*/, 0);
      return;
    }
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_85;
  }
  this = (ServantStatusDialog_o *)v2->fields.markBase;
  if ( !mainInfo->fields.userCommandCodeEntity )
  {
    if ( this )
      goto LABEL_8;
    goto LABEL_85;
  }
  if ( !this )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = v2->fields.mainInfo;
  if ( !v6 )
    goto LABEL_85;
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_85;
  v7 = (System_String_o **)(v6->fields.isLock ? &StringLiteral_18427/*"button_lock_reg"*/ : &StringLiteral_18428/*"button_lock_unreg"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v7, 0);
  v8 = v2->fields.mainInfo;
  if ( !v8 )
    goto LABEL_85;
  this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
  if ( !this )
    goto LABEL_85;
  v9 = (System_String_o **)(v8->fields.isChoice ? &StringLiteral_18421/*"button_choice_reg"*/ : &StringLiteral_18422/*"button_choice_unreg"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v9, 0);
  this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
  if ( !this )
    goto LABEL_85;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v12 = (UnityEngine_Object_o *)v2->fields.pushButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v2->fields.pushButton;
    if ( !this )
      goto LABEL_85;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_85;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13 = v2->fields.mainInfo;
  if ( !v13 )
    goto LABEL_85;
  if ( !this )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v13->fields.isUse, 0);
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_85;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21161/*"icon_equip_cc"*/, 0);
}


void ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  NoticeNumberComponent_o *v9; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_596C334 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C334 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList )
    size = newProfileList->fields._size;
  else
    size = 0;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(noticeNumber, 0, 0) )
  {
    v9 = this->fields.noticeNumber;
    if ( !v9 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v9, size > 0, 0);
    v9 = this->fields.noticeNumber;
    if ( !v9 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v9, size, 0);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0, 0) )
    {
      v9 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v9 )
      {
        ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)v9, 0, 0);
        return;
      }
LABEL_19:
      sub_2213CDC(v9, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 statusTabBase; // x0
  char v6; // w23
  bool v7; // w1
  System_String_o **v8; // x8
  System_String_o **v9; // x8
  UICommonButton_o *v10; // x21
  bool v11; // w0
  __int64 *v12; // x8
  System_String_o **v13; // x8
  struct UICommonButton_o *profileButton; // x21
  bool v15; // w0
  char isInitTab; // w2
  bool v17; // w1
  UICommonButton_o *v18; // x0
  System_String_o **v19; // x8
  __int64 *v20; // x8
  UICommonButton_o *v21; // x21
  bool v22; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *battleActor; // x21
  __int64 *v26; // x8
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UICommonButton_o *statusButton; // x21
  bool enabled; // w0
  System_String_o **v31; // x8
  System_String_o **v32; // x8
  UICommonButton_o *battleButton; // x21
  bool v34; // w0
  const MethodInfo *v35; // x2
  System_String_o **v36; // x8
  System_String_o **v37; // x8
  UICommonButton_o *v38; // x21
  bool v39; // w0
  System_String_o **v40; // x8
  System_String_o **v41; // x8
  UICommonButton_o *v42; // x21
  bool v43; // w0
  System_String_o **v44; // x8
  System_String_o **v45; // x8
  UICommonButton_o *v46; // x21
  bool v47; // w0
  System_String_o **v48; // x8
  System_String_o **v49; // x8
  UICommonButton_o *voiceButton; // x21
  bool v51; // w0
  struct UICommonButton_o *v52; // x21
  struct System_Boolean_array *tabInitList; // x8
  char *v54; // x8
  _BYTE *v55; // x8
  int v56; // t1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v58; // x21
  ServantStatusListViewItem_o *mainInfo; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  float BgmVolume; // s8
  BgmManager_c *v65; // x0
  OptionManager_c *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  BgmManager_c *v69; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v71; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v72; // x21
  ServantStatusListViewManager_o *v73; // x20
  ServantStatusListViewManager_CallbackFunc_o *v74; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v76; // x21
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v78; // x21
  struct ServantStatusListViewItem_o *v79; // x8
  const MethodInfo *v80; // x2
  struct ServantStatusListViewItem_o *v81; // x8
  UILabel_o *battleTransformNameLabel; // x20
  char v83; // w8
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C345 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_2213A60(&StringLiteral_18332/*"btn_txt_detail_off"*/);
    sub_2213A60(&StringLiteral_18315/*"btn_txt_battlecharacter_on"*/);
    sub_2213A60(&StringLiteral_18381/*"btn_txt_status_on"*/);
    sub_2213A60(&StringLiteral_18206/*"btn_bg_12"*/);
    sub_2213A60(&StringLiteral_18380/*"btn_txt_status_off"*/);
    sub_2213A60(&StringLiteral_18397/*"btn_txt_voice_on"*/);
    sub_2213A60(&StringLiteral_18361/*"btn_txt_profile_on"*/);
    sub_2213A60(&StringLiteral_18396/*"btn_txt_voice_off"*/);
    sub_2213A60(&StringLiteral_18208/*"btn_bg_19"*/);
    sub_2213A60(&StringLiteral_18333/*"btn_txt_detail_on"*/);
    sub_2213A60(&StringLiteral_18360/*"btn_txt_profile_off"*/);
    sub_2213A60(&StringLiteral_18314/*"btn_txt_battlecharacter_off"*/);
    byte_596C345 = 1;
  }
  voice = 0;
  illust = 0;
  isPlayVoice = 0;
  if ( kind == 2 )
  {
    if ( ServantStatusDialog__StartBattleLoad(this, *(const MethodInfo **)&kind) )
      return;
  }
  else if ( kind == 3 )
  {
    if ( ServantStatusDialog__StartVoiceLoad(this, *(const MethodInfo **)&kind) )
      return;
    statusTabBase = (__int64)this->fields.statusTabBase;
    this->fields.tabKind = 3;
    if ( !statusTabBase )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.profileTabBase;
    if ( !statusTabBase )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.battleTabBase;
    if ( !statusTabBase )
      goto LABEL_293;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.voiceTabBase;
    if ( !statusTabBase )
      goto LABEL_293;
    v6 = 1;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
    goto LABEL_27;
  }
  if ( this->fields.tabKind == 3 )
    ServantStatusDialog__StopVoice(this, *(const MethodInfo **)&kind);
  this->fields.tabKind = kind;
  switch ( kind )
  {
    case 2:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        statusTabBase = (__int64)this->fields.battleActor;
        if ( !statusTabBase )
          goto LABEL_293;
        BattleFBXComponent__playAnimation((BattleFBXComponent_o *)statusTabBase, this->fields.defaultAnimationName, 0);
      }
      break;
    case 1:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      v7 = 1;
      goto LABEL_23;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      v7 = 0;
LABEL_23:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v7, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      break;
  }
  v6 = 0;
LABEL_27:
  switch ( this->fields.kind )
  {
    case 4:
    case 5:
    case 7:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( statusTabBase )
      {
        statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
        if ( statusTabBase )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
          statusTabBase = (__int64)this->fields.statusButton;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
              statusTabBase,
              1,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
            statusTabBase = (__int64)this->fields.statusButton;
            if ( statusTabBase )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
              statusTabBase = (__int64)this->fields.statusTitleSprite;
              if ( statusTabBase )
              {
                v27 = (System_String_o **)&StringLiteral_18381/*"btn_txt_status_on"*/;
                if ( kind )
                  v27 = (System_String_o **)&StringLiteral_18380/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v27, 0);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v28 = (System_String_o **)(kind ? &StringLiteral_18206/*"btn_bg_12"*/ : &StringLiteral_18208/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v28, 0);
                    statusTabBase = (__int64)this->fields.statusButton;
                    if ( statusTabBase )
                    {
                      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 536LL))(
                                        statusTabBase,
                                        0,
                                        this->fields.isInitTab,
                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                      statusButton = this->fields.statusButton;
                      if ( statusButton )
                      {
                        enabled = UnityEngine_Behaviour__get_enabled(
                                    (UnityEngine_Behaviour_o *)this->fields.statusButton,
                                    0);
                        UICommonButton__SetColliderEnable(statusButton, enabled, this->fields.isInitTab, 0);
                        statusTabBase = (__int64)this->fields.profileButton;
                        if ( statusTabBase )
                        {
                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)statusTabBase,
                                                     0);
                          if ( statusTabBase )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
                            statusTabBase = (__int64)this->fields.profileButton;
                            if ( statusTabBase )
                            {
                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                statusTabBase,
                                1,
                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                              statusTabBase = (__int64)this->fields.profileButton;
                              if ( statusTabBase )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
                                statusTabBase = (__int64)this->fields.profileTitleSprite;
                                if ( statusTabBase )
                                {
                                  UISprite__set_spriteName(
                                    (UISprite_o *)statusTabBase,
                                    (System_String_o *)StringLiteral_18360/*"btn_txt_profile_off"*/,
                                    0);
                                  statusTabBase = (__int64)this->fields.profileTitleSprite;
                                  if ( statusTabBase )
                                  {
                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                                      statusTabBase,
                                      *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                    statusTabBase = (__int64)this->fields.profileSprite;
                                    if ( statusTabBase )
                                    {
                                      UISprite__set_spriteName(
                                        (UISprite_o *)statusTabBase,
                                        (System_String_o *)StringLiteral_18206/*"btn_bg_12"*/,
                                        0);
                                      statusTabBase = (__int64)this->fields.profileButton;
                                      if ( statusTabBase )
                                      {
                                        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                                  + 536LL))(
                                          statusTabBase,
                                          3,
                                          1,
                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                        statusTabBase = (__int64)this->fields.battleButton;
                                        if ( statusTabBase )
                                        {
                                          statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)statusTabBase,
                                                                     0);
                                          if ( statusTabBase )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)statusTabBase,
                                              1,
                                              0);
                                            statusTabBase = (__int64)this->fields.battleButton;
                                            if ( statusTabBase )
                                            {
                                              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                               + 392LL))(
                                                statusTabBase,
                                                1,
                                                *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                              statusTabBase = (__int64)this->fields.battleButton;
                                              if ( statusTabBase )
                                              {
                                                UnityEngine_Behaviour__set_enabled(
                                                  (UnityEngine_Behaviour_o *)statusTabBase,
                                                  kind != 2,
                                                  0);
                                                statusTabBase = (__int64)this->fields.battleTitleSprite;
                                                if ( statusTabBase )
                                                {
                                                  v31 = (System_String_o **)&StringLiteral_18314/*"btn_txt_battlecharacter_off"*/;
                                                  if ( kind == 2 )
                                                    v31 = (System_String_o **)&StringLiteral_18315/*"btn_txt_battlecharacter_on"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v31, 0);
                                                  statusTabBase = (__int64)this->fields.battleTitleSprite;
                                                  if ( statusTabBase )
                                                  {
                                                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase
                                                                                            + 840LL))(
                                                      statusTabBase,
                                                      *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                                    statusTabBase = (__int64)this->fields.battleSprite;
                                                    if ( statusTabBase )
                                                    {
                                                      v32 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_18208/*"btn_bg_19"*/
                                                                               : &StringLiteral_18206/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v32, 0);
                                                      statusTabBase = (__int64)this->fields.battleButton;
                                                      if ( statusTabBase )
                                                      {
                                                        statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                                                                          statusTabBase,
                                                                          0,
                                                                          this->fields.isInitTab,
                                                                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                                                        battleButton = this->fields.battleButton;
                                                        if ( battleButton )
                                                        {
                                                          v34 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v34,
                                                            this->fields.isInitTab,
                                                            0);
                                                          statusTabBase = (__int64)this->fields.voiceButton;
                                                          if ( statusTabBase )
                                                          {
                                                            statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)statusTabBase,
                                                                                       0);
                                                            if ( statusTabBase )
                                                            {
                                                              UnityEngine_GameObject__SetActive(
                                                                (UnityEngine_GameObject_o *)statusTabBase,
                                                                1,
                                                                0);
                                                              statusTabBase = (__int64)this->fields.voiceButton;
                                                              if ( statusTabBase )
                                                              {
                                                                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
                                                                  statusTabBase,
                                                                  1,
                                                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
                                                                statusTabBase = (__int64)this->fields.voiceButton;
                                                                if ( statusTabBase )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)statusTabBase,
                                                                    0,
                                                                    0);
                                                                  statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                  if ( statusTabBase )
                                                                  {
                                                                    UISprite__set_spriteName(
                                                                      (UISprite_o *)statusTabBase,
                                                                      (System_String_o *)StringLiteral_18396/*"btn_txt_voice_off"*/,
                                                                      0);
                                                                    statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                    if ( statusTabBase )
                                                                    {
                                                                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                                                                        statusTabBase,
                                                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                                                      statusTabBase = (__int64)this->fields.voiceSprite;
                                                                      if ( statusTabBase )
                                                                        goto LABEL_139;
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
      goto LABEL_293;
    case 0xA:
    case 0x1E:
    case 0x24:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v26 = &StringLiteral_18333/*"btn_txt_detail_on"*/;
      goto LABEL_208;
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
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v8 = (System_String_o **)&StringLiteral_18381/*"btn_txt_status_on"*/;
      if ( kind )
        v8 = (System_String_o **)&StringLiteral_18380/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v8, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v9 = (System_String_o **)(kind ? &StringLiteral_18206/*"btn_bg_12"*/ : &StringLiteral_18208/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v9, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v10 = this->fields.statusButton;
      if ( !v10 )
        goto LABEL_293;
      v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v10, v11, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v12 = &StringLiteral_18332/*"btn_txt_detail_off"*/;
      if ( kind == 1 )
        v12 = &StringLiteral_18333/*"btn_txt_detail_on"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v12, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v13 = (System_String_o **)(kind == 1 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v13, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_293;
      v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      isInitTab = this->fields.isInitTab;
      v17 = v15;
      v18 = profileButton;
      goto LABEL_213;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v19 = (System_String_o **)&StringLiteral_18381/*"btn_txt_status_on"*/;
      if ( kind )
        v19 = (System_String_o **)&StringLiteral_18380/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v19, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v20 = &StringLiteral_18208/*"btn_bg_19"*/;
      if ( kind )
        v20 = &StringLiteral_18206/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v20, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v21 = this->fields.statusButton;
      if ( !v21 )
        goto LABEL_293;
      v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v21, v22, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_18332/*"btn_txt_detail_off"*/, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_18206/*"btn_bg_12"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
        statusTabBase,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      goto LABEL_214;
    case 0x1C:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v26 = &StringLiteral_18360/*"btn_txt_profile_off"*/;
LABEL_208:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v26, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_18208/*"btn_bg_19"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        1,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v52 = this->fields.profileButton;
      if ( !v52 )
        goto LABEL_293;
      v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      v18 = v52;
      isInitTab = 1;
LABEL_213:
      UICommonButton__SetColliderEnable(v18, v17, isInitTab, 0);
LABEL_214:
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      goto LABEL_219;
    default:
      statusTabBase = (__int64)this->fields.mainInfo;
      if ( !statusTabBase )
        goto LABEL_293;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)statusTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v36 = (System_String_o **)&StringLiteral_18381/*"btn_txt_status_on"*/;
      if ( kind )
        v36 = (System_String_o **)&StringLiteral_18380/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v36, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v37 = (System_String_o **)(kind ? &StringLiteral_18206/*"btn_bg_12"*/ : &StringLiteral_18208/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v37, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v38 = this->fields.statusButton;
      if ( !v38 )
        goto LABEL_293;
      v39 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v38, v39, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v40 = (System_String_o **)&StringLiteral_18360/*"btn_txt_profile_off"*/;
      if ( kind == 1 )
        v40 = (System_String_o **)&StringLiteral_18361/*"btn_txt_profile_on"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v40, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v41 = (System_String_o **)(kind == 1 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v41, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v42 = this->fields.profileButton;
      if ( !v42 )
        goto LABEL_293;
      v43 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      UICommonButton__SetColliderEnable(v42, v43, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_293;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 2, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v44 = (System_String_o **)&StringLiteral_18314/*"btn_txt_battlecharacter_off"*/;
      if ( kind == 2 )
        v44 = (System_String_o **)&StringLiteral_18315/*"btn_txt_battlecharacter_on"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v44, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_293;
      v45 = (System_String_o **)(kind == 2 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v45, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_293;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v46 = this->fields.battleButton;
      if ( !v46 )
        goto LABEL_293;
      v47 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0);
      UICommonButton__SetColliderEnable(v46, v47, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( isPlayVoice )
      {
        if ( !statusTabBase )
          goto LABEL_293;
        statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
        if ( !statusTabBase )
          goto LABEL_293;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
          statusTabBase,
          1,
          *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 3, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( !statusTabBase )
          goto LABEL_293;
        v48 = (System_String_o **)&StringLiteral_18396/*"btn_txt_voice_off"*/;
        if ( kind == 3 )
          v48 = (System_String_o **)&StringLiteral_18397/*"btn_txt_voice_on"*/;
        UISprite__set_spriteName((UISprite_o *)statusTabBase, *v48, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( !statusTabBase )
          goto LABEL_293;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
          statusTabBase,
          *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
        statusTabBase = (__int64)this->fields.voiceSprite;
        if ( !statusTabBase )
          goto LABEL_293;
        v49 = (System_String_o **)(kind == 3 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
        UISprite__set_spriteName((UISprite_o *)statusTabBase, *v49, 0);
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                          statusTabBase,
                          0,
                          this->fields.isInitTab,
                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
        voiceButton = this->fields.voiceButton;
        if ( !voiceButton )
          goto LABEL_293;
        v51 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0);
        UICommonButton__SetColliderEnable(voiceButton, v51, this->fields.isInitTab, 0);
      }
      else
      {
        if ( !statusTabBase )
          goto LABEL_293;
        statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
        if ( !statusTabBase )
          goto LABEL_293;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
          statusTabBase,
          1,
          *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( !statusTabBase )
          goto LABEL_293;
        UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_18396/*"btn_txt_voice_off"*/, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( !statusTabBase )
          goto LABEL_293;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
          statusTabBase,
          *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
        statusTabBase = (__int64)this->fields.voiceSprite;
        if ( !statusTabBase )
          goto LABEL_293;
LABEL_139:
        UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_18206/*"btn_bg_12"*/, 0);
        statusTabBase = (__int64)this->fields.voiceButton;
        if ( !statusTabBase )
          goto LABEL_293;
        statusTabBase = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                          statusTabBase,
                          3,
                          1,
                          *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      }
LABEL_219:
      tabInitList = this->fields.tabInitList;
      if ( !tabInitList )
        goto LABEL_293;
      if ( LODWORD(tabInitList->max_length) <= kind )
        sub_2213CE4(statusTabBase);
      v54 = (char *)tabInitList + kind;
      v56 = (unsigned __int8)v54[32];
      v55 = v54 + 32;
      if ( v56 )
      {
        if ( kind <= 1 )
        {
          if ( kind )
          {
            if ( kind != 1 )
              goto LABEL_277;
LABEL_230:
            profileTabListViewManager = this->fields.profileTabListViewManager;
            v58 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
            ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
              v58,
              (Il2CppObject *)this,
              Method_ServantStatusDialog_OnSelectFlavor__,
              0);
            if ( profileTabListViewManager )
            {
              ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v58, 0);
              goto LABEL_277;
            }
LABEL_293:
            sub_2213CDC(statusTabBase, *(_QWORD *)&kind);
          }
LABEL_263:
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v76 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v76,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( statusTabListViewManager )
          {
            ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v76, 0);
            goto LABEL_277;
          }
          goto LABEL_293;
        }
        if ( kind != 2 )
        {
          if ( kind != 3 )
            goto LABEL_277;
          goto LABEL_241;
        }
        goto LABEL_267;
      }
      *v55 = 1;
      if ( kind > 1 )
      {
        if ( kind != 2 )
        {
          if ( kind != 3 )
            goto LABEL_277;
          mainInfo = this->fields.mainInfo;
          if ( !mainInfo )
            goto LABEL_293;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_293;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_293;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            mainInfo,
            (System_Int32_array *)statusTabBase,
            0);
LABEL_241:
          if ( !this->fields.isBgmLow )
          {
            if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind, v35);
            BgmVolume = OptionManager__GetBgmVolume(0);
            v65 = BgmManager_TypeInfo;
            if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v62, v63);
              v65 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v65->static_fields->LOW_VOLUME )
            {
              v66 = OptionManager_TypeInfo;
              this->fields.isBgmLow = 1;
              if ( !*(&v66->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v66, v62, v63);
              if ( !OptionManager__GetVolumeMute(0) )
              {
                v69 = BgmManager_TypeInfo;
                if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v67, v68);
                  v69 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v69->static_fields->LOW_VOLUME;
                if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v67, v68);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0);
              }
            }
          }
          v71 = this->fields.voiceTabListViewManager;
          v72 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v72,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0);
          if ( v71 )
          {
            ServantStatusVoiceListViewManager__SetMode(v71, 1, v72, 0);
            goto LABEL_277;
          }
          goto LABEL_293;
        }
        statusTabBase = (__int64)this->fields.battleTabListViewManager;
        if ( !statusTabBase )
          goto LABEL_293;
        ServantStatusBattleListViewManager__CreateList(
          (ServantStatusBattleListViewManager_o *)statusTabBase,
          this->fields.mainInfo,
          0);
LABEL_267:
        battleTabListViewManager = this->fields.battleTabListViewManager;
        v78 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
        ServantStatusBattleListViewManager_CallbackFunc___ctor(
          v78,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
          0);
        if ( battleTabListViewManager )
        {
          ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v78, 0);
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( statusTabBase )
          {
            statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
            v79 = this->fields.mainInfo;
            if ( v79 )
            {
              if ( statusTabBase )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)statusTabBase,
                  !v79->fields._IsTransformed_k__BackingField,
                  0);
                ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v80);
                statusTabBase = (__int64)this->fields.battleExplanationLabel;
                if ( statusTabBase )
                {
                  statusTabBase = (__int64)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)statusTabBase,
                                             0);
                  v81 = this->fields.mainInfo;
                  if ( v81 )
                  {
                    if ( statusTabBase )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)statusTabBase,
                        !v81->fields._IsTransformed_k__BackingField,
                        0);
                      statusTabBase = (__int64)this->fields.mainInfo;
                      if ( statusTabBase )
                      {
                        battleTransformNameLabel = this->fields.battleTransformNameLabel;
                        statusTabBase = (__int64)ServantStatusListViewItem__GetTransformName(
                                                   (ServantStatusListViewItem_o *)statusTabBase,
                                                   0);
                        if ( battleTransformNameLabel )
                        {
                          UILabel__set_text(battleTransformNameLabel, (System_String_o *)statusTabBase, 0);
                          goto LABEL_277;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_293;
      }
      if ( !kind )
      {
        statusTabBase = (__int64)this->fields.statusTabListViewManager;
        if ( !statusTabBase )
          goto LABEL_293;
        ServantStatusListViewManager__CreateList(
          (ServantStatusListViewManager_o *)statusTabBase,
          this->fields.mainInfo,
          0);
        if ( !this->fields.isInit )
        {
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_293;
          ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)statusTabBase, 5, 0);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_293;
          ServantStatusListViewManager__SetMode_44599780((ServantStatusListViewManager_o *)statusTabBase, 3, 0);
          v73 = this->fields.statusTabListViewManager;
          v74 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v74,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( !v73 )
            goto LABEL_293;
          ServantStatusListViewManager__SetMode(v73, 1, v74, 0);
        }
        goto LABEL_263;
      }
      if ( kind == 1 )
      {
        ServantStatusDialog__UpdateProfileList(this, 0, v35);
        goto LABEL_230;
      }
LABEL_277:
      if ( this->fields.isBgmLow )
        v83 = v6;
      else
        v83 = 1;
      if ( (v83 & 1) == 0 )
      {
        this->fields.isBgmLow = 0;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&kind, v35);
        OptionManager__Recover(0);
      }
      this->fields.isInitTab = 1;
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetVisibleHighPriorityObject(
        ServantStatusDialog_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Component_o *battleChrCamera; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_596C349 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    byte_596C349 = 1;
  }
  if ( this->fields.tabKind == 2 )
  {
    battleChrCamera = (UnityEngine_Component_o *)this->fields.battleChrCamera;
    if ( !battleChrCamera )
      goto LABEL_13;
    battleChrCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(battleChrCamera, 0);
    if ( !battleChrCamera )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleChrCamera, isVisible, 0);
    if ( isVisible )
    {
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        battleChrCamera = (UnityEngine_Component_o *)this->fields.battleActor;
        if ( battleChrCamera )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)battleChrCamera,
            (System_String_o *)StringLiteral_26090/*"wait"*/,
            0);
          return;
        }
LABEL_13:
        sub_2213CDC(battleChrCamera, isVisible);
      }
    }
  }
}


void ServantStatusDialog__SetupBattleMask(
        ServantStatusDialog_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  bool IsEnableOwnRandomSetting; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_596C329 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_2213A60(&StringLiteral_12473/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_596C329 = 1;
  }
  if ( !item )
    goto LABEL_16;
  if ( !item->fields.userSvtEntity || item->fields._IsTransformed_k__BackingField )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
    if ( this )
    {
LABEL_7:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(this, item);
  }
  IsEnableOwnRandomSetting = ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
  this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
  if ( !IsEnableOwnRandomSetting )
  {
    if ( this )
      goto LABEL_7;
    goto LABEL_16;
  }
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  battleMaskInfoLabel = v4->fields.battleMaskInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12473/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0);
  if ( !battleMaskInfoLabel )
    goto LABEL_16;
  UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0);
  this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel;
  if ( !this )
    goto LABEL_16;
  UILabel__set_fontSize((UILabel_o *)this, 18, 0);
}


bool ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  bool v3; // w20
  AssetData_o *BattleActorData; // x0
  __int64 v6; // x1
  ServantStatusDialog_BattleActorData_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *assetName; // x21
  const MethodInfo *v11; // x2
  struct ServantStatusDialog_BattleActorData_o **p_loadingBattleActorData; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  __int64 v20; // x2
  struct ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_596C332 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C332 = 1;
  }
  if ( this->fields.loadingBattleActorData )
    return 0;
  BattleActorData = (AssetData_o *)ServantStatusDialog__GetBattleActorData(this, method);
  if ( !BattleActorData )
    goto LABEL_20;
  v7 = (ServantStatusDialog_BattleActorData_o *)BattleActorData;
  if ( ServantStatusDialog_BattleActorData__EqualsAssetName(
         (ServantStatusDialog_BattleActorData_o *)BattleActorData,
         this->fields.currentBattleActorData,
         0) )
  {
    if ( ServantStatusDialog_BattleActorData__EqualsOther(v7, this->fields.currentBattleActorData, 0) )
      return 0;
    assetName = v7->fields.assetName;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
    BattleActorData = AssetManager__getAssetStorage(assetName, 0);
    if ( BattleActorData )
    {
      AssetData__AddEntry(BattleActorData, 0);
      ServantStatusDialog__PlayBattleEffect(this, v7, v11);
      return 0;
    }
LABEL_20:
    sub_2213CDC(BattleActorData, v6);
  }
  BattleActorData = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !BattleActorData )
    goto LABEL_20;
  p_loadingBattleActorData = &this->fields.loadingBattleActorData;
  CommonUI__SetLoadMode((CommonUI_o *)BattleActorData, 1, 0);
  this->fields.loadingBattleActorData = v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadingBattleActorData,
    (int32_t)v7,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantStatusDialog__SetTabKind(this, 2, v19);
  loadingBattleActorData = this->fields.loadingBattleActorData;
  if ( !loadingBattleActorData )
    goto LABEL_20;
  v22 = loadingBattleActorData->fields.assetName;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v20);
  AssetManager__SetAssetBundleUnload(v22, 0);
  if ( !*p_loadingBattleActorData )
    goto LABEL_20;
  v23 = (*p_loadingBattleActorData)->fields.assetName;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0);
  v25 = v23;
  v3 = 1;
  if ( !AssetManager__loadAssetStorage(v25, v24, 1, 0, 0) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v26);
    return 1;
  }
  return v3;
}


void ServantStatusDialog__StartCommandCardLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t SvtId; // w22
  Il2CppObject *v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  _QWORD *v26; // x9
  __int64 partyItem_low; // x10
  __int64 v28; // x8
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2

  if ( (byte_596C32E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass153_0__StartCommandCardLoad_b__0__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass153_0_TypeInfo);
    byte_596C32E = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass153_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass153_0___ctor((ServantStatusDialog___c__DisplayClass153_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v15, v16);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0);
  if ( !this->fields.commandCardAssetNames )
    goto LABEL_20;
  v18 = (Il2CppObject *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this->fields.commandCardAssetNames,
                                              (Il2CppObject *)mainInfo,
                                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
    goto LABEL_23;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.commandCardAssetNames;
  if ( !mainInfo )
    goto LABEL_20;
  userGameEntity = mainInfo->fields.userGameEntity;
  v26 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(mainInfo->fields.partyItem);
  if ( !userGameEntity )
    goto LABEL_20;
  partyItem_low = SLODWORD(mainInfo->fields.partyItem);
  if ( (unsigned int)partyItem_low >= LODWORD(userGameEntity->fields.name) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mainInfo,
      v18,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = (__int64)userGameEntity + 8 * partyItem_low;
    LODWORD(mainInfo->fields.partyItem) = partyItem_low + 1;
    *(_QWORD *)(v28 + 32) = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass153_0__StartCommandCardLoad_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30, v31);
  mainInfo = (ServantStatusListViewItem_o *)AssetManager__loadAssetStorage((System_String_o *)v18, v29, 1, 0, 0);
  if ( ((unsigned __int8)mainInfo & 1) == 0 )
  {
LABEL_23:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_20:
    sub_2213CDC(mainInfo, v7);
  }
}


void ServantStatusDialog__StartStatusLoad(
        ServantStatusDialog_o *this,
        System_Action_AssetData__o *onComplete,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t SvtId; // w22
  Il2CppObject *StatusImageFolderName; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct UserGameEntity_o *userGameEntity; // x8
  _QWORD *v26; // x9
  __int64 partyItem_low; // x10
  __int64 v28; // x8
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2

  if ( (byte_596C32D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass152_0__StartStatusLoad_b__0__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
    byte_596C32D = 1;
  }
  v5 = sub_2213CCC(ServantStatusDialog___c__DisplayClass152_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass152_0___ctor((ServantStatusDialog___c__DisplayClass152_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v15, v16);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(SvtId, 0, 0);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusImageAssetNames;
  if ( !mainInfo )
    goto LABEL_21;
  mainInfo = (ServantStatusListViewItem_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)mainInfo,
                                              StatusImageFolderName,
                                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
    goto LABEL_24;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusImageAssetNames;
  if ( !mainInfo )
    goto LABEL_21;
  userGameEntity = mainInfo->fields.userGameEntity;
  v26 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(mainInfo->fields.partyItem);
  if ( !userGameEntity )
    goto LABEL_21;
  partyItem_low = SLODWORD(mainInfo->fields.partyItem);
  if ( (unsigned int)partyItem_low >= LODWORD(userGameEntity->fields.name) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mainInfo,
      StatusImageFolderName,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = (__int64)userGameEntity + 8 * partyItem_low;
    LODWORD(mainInfo->fields.partyItem) = partyItem_low + 1;
    *(_QWORD *)(v28 + 32) = StatusImageFolderName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v28 + 32),
      (int32_t)StatusImageFolderName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass152_0__StartStatusLoad_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30, v31);
  mainInfo = (ServantStatusListViewItem_o *)AssetManager__loadAssetStorage(
                                              (System_String_o *)StatusImageFolderName,
                                              v29,
                                              1,
                                              0,
                                              0);
  if ( ((unsigned __int8)mainInfo & 1) == 0 )
  {
LABEL_24:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        0,
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_21:
    sub_2213CDC(mainInfo, v7);
  }
}


bool ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  NetworkManager_c *v5; // x0
  bool v6; // w19
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v8; // w22
  int32_t voiceEffectSelect; // w20
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t size; // w2
  int v13; // w9
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v18; // w2
  int v19; // w9
  struct System_Boolean_array *tabInitList; // x8
  ServantEntity_o *ServantEntity; // x0
  __int64 v22; // x2
  int32_t v23; // w20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DispLimitCountStageList; // x22
  ServantStatusDialog___c_c *v27; // x8
  struct ServantStatusDialog___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__167_0; // x23
  Il2CppObject *v30; // x24
  struct ServantStatusDialog___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  ServantStatusListViewItem_o *v39; // x9
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v41; // x20
  int32_t v42; // w23
  __int64 v43; // x2
  ServantLimitAddMaster_o *v44; // x24
  int32_t v45; // w4
  const MethodInfo *v46; // x5
  struct PartyListViewItem_o *v47; // x8
  ServantStatusListViewItem_o *v48; // x24
  unsigned __int64 v49; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x28
  System_Collections_Generic_List_object__o *v51; // x25
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  ServantStatusListViewItem_o *v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w4
  const MethodInfo *v64; // x5
  System_Collections_Generic_List_object__o *v65; // x25
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  ServantStatusListViewItem_o *v75; // x1
  Il2CppClass **v76; // x0
  int32_t v77; // w4
  const MethodInfo *v78; // x5
  System_Collections_Generic_List_object__o *v79; // x25
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  ServantStatusListViewItem_o *v89; // x1
  Il2CppClass **v90; // x0
  __int64 v91; // x2
  int32_t v92; // w4
  const MethodInfo *v93; // x5
  BalanceConfig_c *v94; // x8
  int v95; // w25
  System_Collections_Generic_List_object__o *v96; // x25
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  ServantStatusListViewItem_o *v106; // x1
  Il2CppClass **v107; // x0
  int32_t v108; // w4
  const MethodInfo *v109; // x5
  __int64 v110; // x1
  __int64 v111; // x2
  BalanceConfig_c *v112; // x8
  int v113; // w25
  System_Collections_Generic_List_object__o *v114; // x25
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  ServantStatusListViewItem_o *v124; // x1
  Il2CppClass **v125; // x0
  int32_t v126; // w4
  const MethodInfo *v127; // x5
  System_Collections_Generic_List_object__o *v128; // x25
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  ServantStatusListViewItem_o *v138; // x1
  Il2CppClass **v139; // x0
  int32_t v140; // w4
  const MethodInfo *v141; // x5
  System_Collections_Generic_List_object__o *v142; // x25
  int32_t ServantIdMashu3; // w2
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  ServantStatusListViewItem_o *v153; // x1
  Il2CppClass **v154; // x0
  System_Collections_Generic_List_object__o *v155; // x25
  System_String_o *v156; // x2
  System_String_o *v157; // x3
  int32_t v158; // w4
  int32_t v159; // w5
  bool v160; // w6
  bool v161; // w7
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  ServantStatusListViewItem_o *v165; // x1
  Il2CppClass **v166; // x0
  int32_t v167; // w4
  const MethodInfo *v168; // x5
  System_Collections_Generic_List_object__o *v169; // x25
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  ServantStatusListViewItem_o *v179; // x1
  Il2CppClass **v180; // x0
  __int64 v181; // x1
  __int64 v182; // x2
  NetworkManager_c *v183; // x0
  struct BalanceConfig_StaticFields *v184; // x9
  int64_t userIdNumber; // x25
  int32_t MashuTdGradeUpQuestId; // w26
  int32_t MashuTdGradeUpQuestPhase; // w27
  __int64 v188; // x1
  __int64 v189; // x2
  System_Collections_Generic_List_object__o *v190; // x25
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  struct System_Object_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  ServantStatusListViewItem_o *v200; // x1
  Il2CppClass **v201; // x0
  int32_t v202; // w4
  const MethodInfo *v203; // x5
  System_Collections_Generic_List_object__o *v204; // x25
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  struct System_Object_array *v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  ServantStatusListViewItem_o *v214; // x1
  Il2CppClass **v215; // x0
  __int64 v216; // x2
  ServantVoiceRelationEntity_array *v217; // x20
  int max_length; // w8
  unsigned int v219; // w26
  ServantVoiceRelationEntity_o *v220; // x27
  __int64 v221; // x24
  __int64 v222; // x25
  System_Collections_Generic_List_object__o *v223; // x23
  ServantStatusDialog_o *v224; // x0
  int32_t v225; // w4
  const MethodInfo *v226; // x5
  System_String_o *v227; // x2
  System_String_o *v228; // x3
  int32_t v229; // w4
  int32_t v230; // w5
  bool v231; // w6
  bool v232; // w7
  struct System_Object_array *items; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  ServantStatusListViewItem_o *v236; // x1
  Il2CppClass **v237; // x0
  System_Collections_Generic_List_object__o *v238; // x23
  ServantStatusDialog_o *v239; // x0
  int32_t v240; // w4
  const MethodInfo *v241; // x5
  System_String_o *v242; // x2
  System_String_o *v243; // x3
  int32_t v244; // w4
  int32_t v245; // w5
  bool v246; // w6
  bool v247; // w7
  struct System_Object_array *v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  ServantStatusListViewItem_o *v251; // x1
  Il2CppClass **v252; // x0
  System_Collections_Generic_List_object__o *v253; // x23
  ServantStatusDialog_o *v254; // x0
  int32_t v255; // w4
  const MethodInfo *v256; // x5
  System_String_o *v257; // x2
  System_String_o *v258; // x3
  int32_t v259; // w4
  int32_t v260; // w5
  bool v261; // w6
  bool v262; // w7
  struct System_Object_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  ServantStatusListViewItem_o *v266; // x1
  Il2CppClass **v267; // x0
  struct System_Collections_Generic_List_string__o *v268; // x8
  const MethodInfo *v269; // x2
  __int64 v270; // x2
  NetworkManager_c *v271; // x0
  Il2CppObject *Item; // x0
  System_String_o *v273; // x2
  System_String_o *v274; // x3
  int32_t v275; // w4
  int32_t v276; // w5
  bool v277; // w6
  bool v278; // w7
  System_String_o *loadVoiceData; // x20
  System_Action_o *v280; // x21
  __int64 v281; // x1
  __int64 v282; // x2
  System_Int32_array *costumeIds; // [xsp+8h] [xbp-B8h]
  ServantStatusListViewItem_o *v285; // [xsp+10h] [xbp-B0h]
  unsigned __int64 v286; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v287; // [xsp+20h] [xbp-A0h] BYREF
  ServantVoiceRelationEntity_array *relationList; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v289; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16

  if ( (byte_596C33B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog___c__StartVoiceLoad_b__167_0__);
    sub_2213A60(&ServantStatusDialog___c_TypeInfo);
    byte_596C33B = 1;
  }
  memset(&v289, 0, sizeof(v289));
  v4 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  relationList = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_596B88D )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B88D = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->isRebootBlock )
    return 1;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_197;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_197;
  v8 = (int)mainInfo;
  voiceEffectSelect = this->fields.voiceEffectSelect;
  if ( voiceEffectSelect != ServantStatusListViewItem__get_VoiceEffectSelect(this->fields.mainInfo, 0) )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_197;
    this->fields.voiceEffectSelect = ServantStatusListViewItem__get_VoiceEffectSelect(mainInfo, 0);
    ServantStatusDialog__StopVoice(this, v10);
    requestVoiceDataList = this->fields.requestVoiceDataList;
    if ( !requestVoiceDataList )
      goto LABEL_197;
    size = requestVoiceDataList->fields._size;
    v13 = requestVoiceDataList->fields._version + 1;
    requestVoiceDataList->fields._size = 0;
    requestVoiceDataList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, size, 0);
    mainInfo = (ServantStatusListViewItem_o *)this->fields.voiceDataList;
    if ( !mainInfo )
      goto LABEL_197;
    if ( SLODWORD(mainInfo->fields.partyItem) >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v287,
        (System_Collections_Generic_List_object__o *)mainInfo,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
      v289 = v287;
      v287.fields._list = 0;
      *(_QWORD *)&v287.fields._index = &v289;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v289,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        current = v289.fields._current;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14, v15);
        SoundManager__releaseAudioAssetStorage((System_String_o *)current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v289,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
      voiceDataList = this->fields.voiceDataList;
      if ( !voiceDataList )
        goto LABEL_197;
      v18 = voiceDataList->fields._size;
      v19 = voiceDataList->fields._version + 1;
      voiceDataList->fields._size = 0;
      voiceDataList->fields._version = v19;
      if ( v18 >= 1 )
        System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v18, 0);
    }
    mainInfo = (ServantStatusListViewItem_o *)this->fields.dictChangeSvtVoiceIdList;
    if ( !mainInfo )
      goto LABEL_197;
    mainInfo = (ServantStatusListViewItem_o *)System_Collections_Generic_Dictionary_int__object___Remove(
                                                (System_Collections_Generic_Dictionary_int__object__o *)mainInfo,
                                                v8,
                                                (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__int____Remove__);
    tabInitList = this->fields.tabInitList;
    if ( !tabInitList )
      goto LABEL_197;
    if ( (tabInitList->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_198;
    tabInitList->m_Items[3] = 0;
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_197;
    ServantEntity = ServantStatusListViewItem__GetServantEntity(mainInfo, 1, 0);
    if ( ServantEntity && ServantEntity__IsVoiceEffect(ServantEntity, 0) )
    {
      v23 = this->fields.voiceEffectSelect;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v22);
      SoundManager__SetUseEfVoiceCpk(v8, v23 == 0, 0);
    }
  }
  mainInfo = (ServantStatusListViewItem_o *)this->fields.dictChangeSvtVoiceIdList;
  if ( !mainInfo )
    goto LABEL_197;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)mainInfo,
         v8,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_197;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_197;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v8,
                                              0);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_197;
  v285 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v8,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_197;
  DispLimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                                                                   mainInfo,
                                                                                   0);
  v27 = ServantStatusDialog___c_TypeInfo;
  if ( !*(&ServantStatusDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo, v24, v25);
    v27 = ServantStatusDialog___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__167_0 = static_fields->__9__167_0;
  if ( !_9__167_0 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v24, v25);
      static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__167_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__167_0, v30, Method_ServantStatusDialog___c__StartVoiceLoad_b__167_0__, 0);
    v31 = ServantStatusDialog___c_TypeInfo->static_fields;
    v31->__9__167_0 = _9__167_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->__9__167_0, (int32_t)_9__167_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_int_(
          DispLimitCountStageList,
          (System_Func_TSource__bool__o *)_9__167_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  mainInfo = (ServantStatusListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                              v38,
                                              (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v39 = v285;
  costumeIds = (System_Int32_array *)mainInfo;
  if ( !v285 )
    goto LABEL_197;
  partyItem = v285->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)partyItem )
        goto LABEL_198;
      v42 = *((_DWORD *)&v39->fields.memberItem + v41);
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_197;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v44 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v43);
      if ( !v44 )
        goto LABEL_197;
      v286 = v41;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v44,
                                                  v42,
                                                  BalanceConfig_TypeInfo->static_fields->ServantLimitMax,
                                                  costumeIds,
                                                  0);
      if ( !mainInfo )
        goto LABEL_197;
      v47 = mainInfo->fields.partyItem;
      v48 = mainInfo;
      if ( (int)v47 >= 1 )
        break;
LABEL_154:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_197;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_197;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v42, 0);
      v217 = relationList;
      if ( !relationList )
        goto LABEL_197;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v219 = 0;
        while ( v219 < max_length )
        {
          v220 = v217->m_Items[v219];
          if ( !v220 )
            goto LABEL_197;
          v221 = *(_QWORD *)&v220->fields.relationSvtId.fields.currentCryptoKey;
          v222 = *(_QWORD *)&v220->fields.relationSvtId.fields.fakeValue;
          v223 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v216);
          *(_QWORD *)&v290.fields.currentCryptoKey = v221;
          *(_QWORD *)&v290.fields.fakeValue = v222;
          v224 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v290, 0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v224,
                                                      0,
                                                      (int32_t)v224,
                                                      0,
                                                      v225,
                                                      v226);
          if ( !v223 )
            goto LABEL_197;
          items = v223->fields._items;
          v234 = Method_System_Collections_Generic_List_string__Add__;
          ++v223->fields._version;
          if ( !items )
            goto LABEL_197;
          v235 = v223->fields._size;
          v236 = mainInfo;
          if ( (unsigned int)v235 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v223,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
          }
          else
          {
            v237 = &items->obj.klass + v235;
            v223->fields._size = v235 + 1;
            v237[4] = (Il2CppClass *)v236;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v237 + 4),
              (int32_t)v236,
              v227,
              v228,
              v229,
              v230,
              v231,
              v232);
          }
          v238 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v239 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                            v220->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v239,
                                                      2,
                                                      (int32_t)v239,
                                                      0,
                                                      v240,
                                                      v241);
          if ( !v238 )
            goto LABEL_197;
          v248 = v238->fields._items;
          v249 = Method_System_Collections_Generic_List_string__Add__;
          ++v238->fields._version;
          if ( !v248 )
            goto LABEL_197;
          v250 = v238->fields._size;
          v251 = mainInfo;
          if ( (unsigned int)v250 >= LODWORD(v248->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v238,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
          }
          else
          {
            v252 = &v248->obj.klass + v250;
            v238->fields._size = v250 + 1;
            v252[4] = (Il2CppClass *)v251;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v252 + 4),
              (int32_t)v251,
              v242,
              v243,
              v244,
              v245,
              v246,
              v247);
          }
          v253 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v254 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                            v220->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v254,
                                                      1,
                                                      (int32_t)v254,
                                                      0,
                                                      v255,
                                                      v256);
          if ( !v253 )
            goto LABEL_197;
          v263 = v253->fields._items;
          v264 = Method_System_Collections_Generic_List_string__Add__;
          ++v253->fields._version;
          if ( !v263 )
            goto LABEL_197;
          v265 = v253->fields._size;
          v266 = mainInfo;
          if ( (unsigned int)v265 >= LODWORD(v263->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v253,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
          }
          else
          {
            v267 = &v263->obj.klass + v265;
            v253->fields._size = v265 + 1;
            v267[4] = (Il2CppClass *)v266;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v267 + 4),
              (int32_t)v266,
              v257,
              v258,
              v259,
              v260,
              v261,
              v262);
          }
          max_length = v217->max_length;
          if ( (int)++v219 >= max_length )
            goto LABEL_179;
        }
LABEL_198:
        sub_2213CE4(mainInfo);
      }
LABEL_179:
      v39 = v285;
      LODWORD(partyItem) = v285->fields.partyItem;
      v41 = v286 + 1;
      if ( (__int64)(v286 + 1) >= (int)partyItem )
        goto LABEL_180;
    }
    v49 = 0;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v49 >= (unsigned int)v47 )
        goto LABEL_198;
      v51 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v42,
                                                  *((_DWORD *)p_memberItem + v49),
                                                  v45,
                                                  v46);
      if ( !v51 )
        goto LABEL_197;
      v58 = v51->fields._items;
      v59 = Method_System_Collections_Generic_List_string__Add__;
      ++v51->fields._version;
      if ( !v58 )
        goto LABEL_197;
      v60 = v51->fields._size;
      v61 = mainInfo;
      if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v51,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v58->obj.klass + v60;
        v51->fields._size = v60 + 1;
        v62[4] = (Il2CppClass *)v61;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 4), (int32_t)v61, v52, v53, v54, v55, v56, v57);
      }
      if ( v49 >= LODWORD(v48->fields.partyItem) )
        goto LABEL_198;
      v65 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v42,
                                                  *((_DWORD *)p_memberItem + v49),
                                                  v63,
                                                  v64);
      if ( !v65 )
        goto LABEL_197;
      v72 = v65->fields._items;
      v73 = Method_System_Collections_Generic_List_string__Add__;
      ++v65->fields._version;
      if ( !v72 )
        goto LABEL_197;
      v74 = v65->fields._size;
      v75 = mainInfo;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v65,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v72->obj.klass + v74;
        v65->fields._size = v74 + 1;
        v76[4] = (Il2CppClass *)v75;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 4), (int32_t)v75, v66, v67, v68, v69, v70, v71);
      }
      if ( v49 >= LODWORD(v48->fields.partyItem) )
        goto LABEL_198;
      v79 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v42,
                                                  *((_DWORD *)p_memberItem + v49),
                                                  v77,
                                                  v78);
      if ( !v79 )
        goto LABEL_197;
      v86 = v79->fields._items;
      v87 = Method_System_Collections_Generic_List_string__Add__;
      ++v79->fields._version;
      if ( !v86 )
        goto LABEL_197;
      v88 = v79->fields._size;
      v89 = mainInfo;
      if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v79,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v86->obj.klass + v88;
        v79->fields._size = v88 + 1;
        v90[4] = (Il2CppClass *)v89;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v89, v80, v81, v82, v83, v84, v85);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_197;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v94 = BalanceConfig_TypeInfo;
      v95 = (int)mainInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v91);
        v94 = BalanceConfig_TypeInfo;
      }
      if ( v95 == v94->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_197;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v112 = BalanceConfig_TypeInfo;
      v113 = (int)mainInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v110, v111);
        v112 = BalanceConfig_TypeInfo;
      }
      if ( v113 == v112->static_fields->ServantIdMashu1 )
      {
        v114 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !*(&v112->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v112, v110, v111);
        if ( v49 >= LODWORD(v48->fields.partyItem) )
          goto LABEL_198;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v49),
                                                    v45,
                                                    v46);
        if ( !v114 )
          goto LABEL_197;
        v121 = v114->fields._items;
        v122 = Method_System_Collections_Generic_List_string__Add__;
        ++v114->fields._version;
        if ( !v121 )
          goto LABEL_197;
        v123 = v114->fields._size;
        v124 = mainInfo;
        if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v114,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
        }
        else
        {
          v125 = &v121->obj.klass + v123;
          v114->fields._size = v123 + 1;
          v125[4] = (Il2CppClass *)v124;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v125 + 4), (int32_t)v124, v115, v116, v117, v118, v119, v120);
        }
        if ( v49 >= LODWORD(v48->fields.partyItem) )
          goto LABEL_198;
        v155 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v49),
                                                    v126,
                                                    v127);
        if ( !v155 )
          goto LABEL_197;
        v162 = v155->fields._items;
        v163 = Method_System_Collections_Generic_List_string__Add__;
        ++v155->fields._version;
        if ( !v162 )
          goto LABEL_197;
        v164 = v155->fields._size;
        v165 = mainInfo;
        if ( (unsigned int)v164 >= LODWORD(v162->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v155,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
        }
        else
        {
          v166 = &v162->obj.klass + v164;
          v155->fields._size = v164 + 1;
          v166[4] = (Il2CppClass *)v165;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v166 + 4), (int32_t)v165, v156, v157, v158, v159, v160, v161);
        }
        if ( v49 >= LODWORD(v48->fields.partyItem) )
          goto LABEL_198;
        v169 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v49),
                                                    v167,
                                                    v168);
        if ( !v169 )
          goto LABEL_197;
        v176 = v169->fields._items;
        v177 = Method_System_Collections_Generic_List_string__Add__;
        ++v169->fields._version;
        if ( !v176 )
          goto LABEL_197;
        v178 = v169->fields._size;
        v179 = mainInfo;
        if ( (unsigned int)v178 >= LODWORD(v176->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v169,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        }
        else
        {
          v180 = &v176->obj.klass + v178;
          v169->fields._size = v178 + 1;
          v180[4] = (Il2CppClass *)v179;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v180 + 4), (int32_t)v179, v170, v171, v172, v173, v174, v175);
        }
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v181, v182);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v183 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v181, v182);
          v183 = NetworkManager_TypeInfo;
        }
        v184 = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v183->static_fields->userIdNumber;
        MashuTdGradeUpQuestId = v184->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = v184->MashuTdGradeUpQuestPhase;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v181, v182);
        mainInfo = (ServantStatusListViewItem_o *)CondType__IsQuestPhaseClear(
                                                    userIdNumber,
                                                    MashuTdGradeUpQuestId,
                                                    MashuTdGradeUpQuestPhase,
                                                    -1,
                                                    0,
                                                    0);
        if ( ((unsigned __int8)mainInfo & 1) != 0 )
        {
          mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
          v190 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v188, v189);
          if ( v49 >= LODWORD(v48->fields.partyItem) )
            goto LABEL_198;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v49),
                                                      v45,
                                                      v46);
          if ( !v190 )
            goto LABEL_197;
          v197 = v190->fields._items;
          v198 = Method_System_Collections_Generic_List_string__Add__;
          ++v190->fields._version;
          if ( !v197 )
            goto LABEL_197;
          v199 = v190->fields._size;
          v200 = mainInfo;
          if ( (unsigned int)v199 >= LODWORD(v197->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v190,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
          }
          else
          {
            v201 = &v197->obj.klass + v199;
            v190->fields._size = v199 + 1;
            v201[4] = (Il2CppClass *)v200;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v201 + 4),
              (int32_t)v200,
              v191,
              v192,
              v193,
              v194,
              v195,
              v196);
          }
          if ( v49 >= LODWORD(v48->fields.partyItem) )
            goto LABEL_198;
          v204 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v49),
                                                      v202,
                                                      v203);
          if ( !v204 )
            goto LABEL_197;
          v211 = v204->fields._items;
          v212 = Method_System_Collections_Generic_List_string__Add__;
          ++v204->fields._version;
          if ( !v211 )
            goto LABEL_197;
          v213 = v204->fields._size;
          v214 = mainInfo;
          if ( (unsigned int)v213 >= LODWORD(v211->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v204,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
          }
          else
          {
            v215 = &v211->obj.klass + v213;
            v204->fields._size = v213 + 1;
            v215[4] = (Il2CppClass *)v214;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v215 + 4),
              (int32_t)v214,
              v205,
              v206,
              v207,
              v208,
              v209,
              v210);
          }
          if ( v49 >= LODWORD(v48->fields.partyItem) )
            goto LABEL_198;
          v142 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_109;
        }
      }
LABEL_143:
      LODWORD(v47) = v48->fields.partyItem;
      if ( (__int64)++v49 >= (int)v47 )
        goto LABEL_154;
    }
    v96 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !*(&v94->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v94, method, v91);
    if ( v49 >= LODWORD(v48->fields.partyItem) )
      goto LABEL_198;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v49),
                                                v92,
                                                v93);
    if ( !v96 )
      goto LABEL_197;
    v103 = v96->fields._items;
    v104 = Method_System_Collections_Generic_List_string__Add__;
    ++v96->fields._version;
    if ( !v103 )
      goto LABEL_197;
    v105 = v96->fields._size;
    v106 = mainInfo;
    if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v96,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    }
    else
    {
      v107 = &v103->obj.klass + v105;
      v96->fields._size = v105 + 1;
      v107[4] = (Il2CppClass *)v106;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v107 + 4), (int32_t)v106, v97, v98, v99, v100, v101, v102);
    }
    if ( v49 >= LODWORD(v48->fields.partyItem) )
      goto LABEL_198;
    v128 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v49),
                                                v108,
                                                v109);
    if ( !v128 )
      goto LABEL_197;
    v135 = v128->fields._items;
    v136 = Method_System_Collections_Generic_List_string__Add__;
    ++v128->fields._version;
    if ( !v135 )
      goto LABEL_197;
    v137 = v128->fields._size;
    v138 = mainInfo;
    if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v128,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    }
    else
    {
      v139 = &v135->obj.klass + v137;
      v128->fields._size = v137 + 1;
      v139[4] = (Il2CppClass *)v138;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v139 + 4), (int32_t)v138, v129, v130, v131, v132, v133, v134);
    }
    if ( v49 >= LODWORD(v48->fields.partyItem) )
      goto LABEL_198;
    v142 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_109:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v49),
                                                v140,
                                                v141);
    if ( !v142 )
      goto LABEL_197;
    v150 = v142->fields._items;
    v151 = Method_System_Collections_Generic_List_string__Add__;
    ++v142->fields._version;
    if ( !v150 )
      goto LABEL_197;
    v152 = v142->fields._size;
    v153 = mainInfo;
    if ( (unsigned int)v152 >= LODWORD(v150->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v142,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
    }
    else
    {
      v154 = &v150->obj.klass + v152;
      v142->fields._size = v152 + 1;
      v154[4] = (Il2CppClass *)v153;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v154 + 4), (int32_t)v153, v144, v145, v146, v147, v148, v149);
    }
    goto LABEL_143;
  }
LABEL_180:
  v268 = this->fields.requestVoiceDataList;
  if ( !v268 )
LABEL_197:
    sub_2213CDC(mainInfo, method);
  if ( v268->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_197;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  ServantStatusDialog__SetTabKind(this, 3, v269);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v270);
  if ( !byte_596B88D )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B88D = 1;
  }
  v271 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v270);
    v271 = NetworkManager_TypeInfo;
  }
  if ( v271->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_197;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadVoiceData,
    (int32_t)Item,
    v273,
    v274,
    v275,
    v276,
    v277,
    v278);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_197;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v280 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v280, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v281, v282);
  v6 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v280, 1, 0);
  return v6;
}


void ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596C33D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_2213A60(&StringLiteral_6294/*"EndWaitVoice"*/);
    byte_596C33D = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_44653016(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6294/*"EndWaitVoice"*/,
      0);
    this->fields.voicePlayList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayList, 0, v4, v5, v6, v7, v8, v9);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayAssetName, 0, v10, v11, v12, v13, v14, v15);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0);
    SePlayer__RemoveCallback(voicePlayer, v17, 0);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0);
      this->fields.voicePlayer = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v18, v19, v20, v21, v22, v23);
      return;
    }
LABEL_13:
    sub_2213CDC(voiceTabListViewManager, method);
  }
}


void ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, System_String_o *cvName, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0

  if ( this->fields.tabKind == 1 )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( !profileTabListViewManager )
      sub_2213CDC(0, cvName);
    ServantStatusFlavorTextListViewManager__UpdateCvName(profileTabListViewManager, cvName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__UpdateProfileList(ServantStatusDialog_o *this, bool setMode, const MethodInfo *method)
{
  ServantStatusDialog_o *v4; // x19
  struct System_Boolean_array *tabInitList; // x8
  struct ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x21
  System_Action_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ServantStatusFlavorTextListViewManager_o *v14; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v15; // x21
  struct ServantStatusFlavorTextListViewManager_o *v16; // x8

  v4 = this;
  if ( (byte_596C376 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantCommentEntity__TypeInfo);
    sub_2213A60(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_2213A60(&Method_ServantStatusDialog__UpdateProfileList_b__236_0__);
    byte_596C376 = 1;
  }
  if ( v4->fields.tabKind == 1 )
  {
    this = (ServantStatusDialog_o *)v4->fields.profileTabListViewManager;
    if ( setMode )
    {
      if ( !this )
        goto LABEL_17;
      BYTE4(this->fields.statusButton) = 1;
    }
    else if ( !this )
    {
      goto LABEL_17;
    }
    ServantStatusFlavorTextListViewManager__CreateList(
      (ServantStatusFlavorTextListViewManager_o *)this,
      v4->fields.mainInfo,
      0);
    profileTabListViewManager = v4->fields.profileTabListViewManager;
    v7 = (System_Action_object__o *)sub_2213CCC(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__236_0__, 0);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v7;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
        (int32_t)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( !setMode )
        return;
      v14 = v4->fields.profileTabListViewManager;
      v15 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
      ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectFlavor__,
        0);
      if ( v14 )
      {
        ServantStatusFlavorTextListViewManager__SetMode(v14, 1, v15, 0);
        v16 = v4->fields.profileTabListViewManager;
        if ( v16 )
        {
          v16->fields._IsIgnoreScroll_k__BackingField = 0;
          return;
        }
      }
    }
LABEL_17:
    sub_2213CDC(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( (tabInitList->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(this);
  tabInitList->m_Items[1] = 0;
}


void ServantStatusDialog___EndInitLoad_b__146_0(ServantStatusDialog_o *this, AssetData_o *_, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_596C37D & 1) == 0 )
  {
    sub_2213A60(&System_Action_AssetData__TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndLoad__);
    byte_596C37D = 1;
  }
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoad__, 0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog___EndLoadInit_b__150_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Action_object__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_object__o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ActionChain_o *v27; // x19

  if ( (byte_596C37E & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog__EndLoadInit_b__150_1__);
    sub_2213A60(&Method_ServantStatusDialog__EndLoadInit_b__150_2__);
    sub_2213A60(&Method_ServantStatusDialog__EndLoadInit_b__150_3__);
    byte_596C37E = 1;
  }
  v3 = sub_2213B20(System_Action_Action____TypeInfo, 3);
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__150_1__, 0);
  if ( !v3 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_9;
  *(_QWORD *)(v3 + 32) = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v13 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v13, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__150_2__, 0);
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0
    || (*(_QWORD *)(v3 + 40) = v13,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v13, v14, v15, v16, v17, v18, v19),
        v20 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo),
        System_Action_object____ctor(v20, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__150_3__, 0),
        *(_DWORD *)(v3 + 24) <= 2u) )
  {
LABEL_9:
    sub_2213CE4(v5);
  }
  *(_QWORD *)(v3 + 48) = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v27, (System_Action_Action__array *)v3, 0);
  if ( !v27 )
LABEL_10:
    sub_2213CDC(v5, v6);
  ChainableActionBase__Execute((ChainableActionBase_o *)v27, 0);
}


void ServantStatusDialog___EndLoadInit_b__150_1(
        ServantStatusDialog_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_6;
  if ( ServantStatusListViewItem__get_AnyTransformServant(mainInfo, 0) )
  {
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      EventTutorialMaster__CheckTutorial(0, 86, action, SvtId, 0, 0, 0, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(mainInfo, action);
  }
  ActionExtensions__Call(action, 0);
}


void ServantStatusDialog___EndLoadInit_b__150_2(
        ServantStatusDialog_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_2213CDC(0, action);
  if ( mainInfo->fields._IsOpenSourceMySvt_k__BackingField )
  {
    SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
    EventTutorialMaster__CheckTutorial(0, 110, action, SvtId, 0, 0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(action, 0);
  }
}


void ServantStatusDialog___EndLoadInit_b__150_3(
        ServantStatusDialog_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_2213CDC(0, action);
  if ( mainInfo->fields._IsOpenSourceMySvt_k__BackingField && mainInfo->fields.enableVoiceEffect )
  {
    SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
    EventTutorialMaster__CheckTutorial(0, 121, action, SvtId, 0, 0, 0, 0);
  }
  else
  {
    ActionExtensions__Call(action, 0);
  }
}


void ServantStatusDialog___InitList_b__181_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  this->fields.needAutoScroll = 0;
}


void ServantStatusDialog___LoadTransformedResource_b__203_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_596C37F & 1) == 0 )
  {
    sub_2213A60(&System_Action_AssetData__TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog__LoadTransformedResource_b__203_1__);
    byte_596C37F = 1;
  }
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__203_1__,
    0);
  ServantStatusDialog__StartStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog___LoadTransformedResource_b__203_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  ServantStatusDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_596C380 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_596C380 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void ServantStatusDialog___OnConfirmServantQuest_b__226_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  PartyOrganizationUtility_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_596C381 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596C381 = 1;
  }
  questId = this->fields.questId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v6, 0),
        (v7 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v7, 0),
        (v7 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
    sub_2213CDC(v7, v8);
  }
  v7->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v8);
}


void ServantStatusDialog___UpdateProfileList_b__236_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w22
  System_Int32_array *v17; // x23
  Il2CppClass *v18; // x0
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_596C382 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C382 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        baseSvtEntity = mainInfo->fields.baseSvtEntity;
        if ( baseSvtEntity )
        {
          v13 = (ServantCommentMaster_o *)Master_object;
          v14 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
          v15 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v10);
          *(_QWORD *)&v20.fields.currentCryptoKey = v14;
          *(_QWORD *)&v20.fields.fakeValue = v15;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
          Master_object = (System_Collections_Generic_List_object__o *)sub_2213B20(int___TypeInfo, 1);
          if ( entity )
          {
            v17 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              v18 = int___TypeInfo;
              v17->m_Items[0] = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_2213B20(v18, 1);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_2213CE4(Master_object);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v13 )
              {
                ServantCommentMaster__SetOpen(v13, v16, v17, (System_Int32_array *)Master_object, 0);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v19);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(Master_object, v6);
  }
}


bool ServantStatusDialog__get_IsViewCharaGraph(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantStatusDialog_c *v3; // x0

  if ( (byte_596C308 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C308 = 1;
  }
  v3 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, v1, v2);
    v3 = ServantStatusDialog_TypeInfo;
  }
  return v3->static_fields->_IsViewCharaGraph_k__BackingField;
}


void ServantStatusDialog__set_IsViewCharaGraph(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusDialog_c *v4; // x0

  if ( (byte_596C309 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_TypeInfo);
    byte_596C309 = 1;
  }
  v4 = ServantStatusDialog_TypeInfo;
  if ( !*(&ServantStatusDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo, method, v2);
    v4 = ServantStatusDialog_TypeInfo;
  }
  v4->static_fields->_IsViewCharaGraph_k__BackingField = value;
}


void ServantStatusDialog_BattleActorData___ctor(ServantStatusDialog_BattleActorData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog_BattleActorData__EqualsAssetName(
        ServantStatusDialog_BattleActorData_o *this,
        ServantStatusDialog_BattleActorData_o *target,
        const MethodInfo *method)
{
  return target && System_String__op_Equality(this->fields.assetName, target->fields.assetName, 0);
}


bool ServantStatusDialog_BattleActorData__EqualsOther(
        ServantStatusDialog_BattleActorData_o *this,
        ServantStatusDialog_BattleActorData_o *target,
        const MethodInfo *method)
{
  return target && this->fields.svtId == target->fields.svtId && this->fields.limitCount == target->fields.limitCount;
}


void ServantStatusDialog_EndDelegate___ctor(
        ServantStatusDialog_EndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2006B58;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006B10;
}


System_IAsyncResult_o *ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isModify;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusDialog_EndDelegate__Invoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    this->fields.method);
}


void ServantStatusDialog_EndIndividualityDelegate___ctor(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2006CD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006C7C;
}


System_IAsyncResult_o *ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  bool v11[4]; // [xsp+28h] [xbp-28h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v11[0] = isNeedSort;
  v12[0] = isModify;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984328, v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusDialog_EndIndividualityDelegate__Invoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    isNeedSort,
    this->fields.method);
}


void ServantStatusDialog_FormationEndDelegate___ctor(
        ServantStatusDialog_FormationEndDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2006BCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006B74;
}


System_IAsyncResult_o *ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = questId;
  v12[0] = isModify;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusDialog_FormationEndDelegate__Invoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    questId,
    this->fields.method);
}


void ServantStatusDialog_ResultDelegate___ctor(
        ServantStatusDialog_ResultDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2006C50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006BF0;
}


System_IAsyncResult_o *ServantStatusDialog_ResultDelegate__BeginInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF
  bool v14[4]; // [xsp+38h] [xbp-28h] BYREF
  bool v15[4]; // [xsp+3Ch] [xbp-24h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  v13 = questId;
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(qword_5984328, v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984328, v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantStatusDialog_ResultDelegate__Invoke(
        ServantStatusDialog_ResultDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isModify,
    isNeedSort,
    questId,
    this->fields.method);
}


void ServantStatusDialog__CoWaitForEndOfFrame_d__204___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__CoWaitForEndOfFrame_d__204__MoveNext(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *v2; // x19
  int32_t _1__state; // w21
  struct System_Action_o *callback; // x8
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_596CB51 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_596CB51 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = v2->fields.callback;
      v2->fields.__1__state = -1;
      if ( !callback )
        sub_2213CDC(this, method);
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    v2->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__204__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__204__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__204_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__204__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__CoWaitForEndOfFrame_d__204__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__204_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__LoadAsset_d__142___ctor(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__LoadAsset_d__142__MoveNext(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  Il2CppObject *Instance; // x0
  Il2CppObject *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ServantStatusDialog___c__DisplayClass142_0_o *_8__1; // x21
  System_Action_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  struct ServantStatusDialog___c__DisplayClass142_0_o *v22; // x21
  struct ServantStatusDialog___c__DisplayClass142_0_o *v23; // x20
  System_Action_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  struct ServantStatusDialog___c__DisplayClass142_0_o *v27; // x20
  System_Action_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  struct ServantStatusDialog___c__DisplayClass142_0_o *v31; // x8
  struct System_Action_o *callback; // x8
  Il2CppObject **v33; // x19
  int v34; // w8
  Il2CppObject **p__2__current; // x19

  if ( (byte_596CB52 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__0__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__1__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__2__);
    sub_2213A60(&ServantStatusDialog___c__DisplayClass142_0_TypeInfo);
    byte_596CB52 = 1;
  }
  _1__state = this->fields.__1__state;
  Instance = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
        return (char)Instance;
      this->fields.__1__state = -1;
      goto LABEL_28;
    }
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)Instance;
      this->fields.__1__state = -1;
    }
    else
    {
      this->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_2213CCC(ServantStatusDialog___c__DisplayClass142_0_TypeInfo);
      System_Object___ctor(v11, 0);
      this->fields.__8__1 = (struct ServantStatusDialog___c__DisplayClass142_0_o *)v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_37;
      _8__1->fields.isUISkinLoaded = 0;
      v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)_8__1,
        Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__0__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v21);
      AtlasManager__LoadUISkin(v19, 2, 1, 0);
    }
    v22 = this->fields.__8__1;
    if ( !v22 )
      goto LABEL_37;
    if ( !v22->fields.isUISkinLoaded )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      LOBYTE(Instance) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return (char)Instance;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance
      || (Instance = (Il2CppObject *)AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 1, 0),
          v23 = this->fields.__8__1,
          v22->fields.isTerminalUISkinLoaded = (unsigned __int8)Instance & 1,
          !v23) )
    {
LABEL_37:
      sub_2213CDC(Instance, method);
    }
    if ( !v23->fields.isTerminalUISkinLoaded )
    {
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v23,
        Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__1__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25, v26);
      AtlasManager__LoadUISkin(v24, 1, 1, 0);
    }
  }
  v27 = this->fields.__8__1;
  if ( !v27 )
    goto LABEL_37;
  if ( !v27->fields.isTerminalUISkinLoaded )
  {
    this->fields.__2__current = 0;
    v33 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v33, 0, v2, v3, v4, v5, v6, v7);
    v34 = 2;
    goto LABEL_34;
  }
  v27->fields.isEventUIAtlasLoaded = 0;
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v27, Method_ServantStatusDialog___c__DisplayClass142_0__LoadAsset_b__2__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29, v30);
  AtlasManager__LoadEventUI(v28, 1, 0);
LABEL_28:
  v31 = this->fields.__8__1;
  if ( !v31 )
    goto LABEL_37;
  if ( !v31->fields.isEventUIAtlasLoaded )
  {
    this->fields.__2__current = 0;
    v33 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v33, 0, v2, v3, v4, v5, v6, v7);
    v34 = 3;
LABEL_34:
    *((_DWORD *)v33 - 2) = v34;
    LOBYTE(Instance) = 1;
    return (char)Instance;
  }
  callback = this->fields.callback;
  if ( !callback )
    goto LABEL_37;
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


Il2CppObject *ServantStatusDialog__LoadAsset_d__142__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__LoadAsset_d__142__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ServantStatusDialog__LoadAsset_d__142_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ServantStatusDialog__LoadAsset_d__142__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__LoadAsset_d__142__System_IDisposable_Dispose(
        ServantStatusDialog__LoadAsset_d__142_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CB46 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog___c_TypeInfo);
    byte_596CB46 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantStatusDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusDialog___c_TypeInfo->static_fields->__9 = (struct ServantStatusDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantStatusDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusDialog___c___ctor(ServantStatusDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantStatusDialog___c___EnableSpecialCostume_b__239_0(
        ServantStatusDialog___c_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_596CB47 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CB47 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount, method);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->CostumeIdMashu == dispLimitCount )
    return 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&dispLimitCount, method);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return static_fields->SpecialLimitCountPLD == dispLimitCount;
}


bool ServantStatusDialog___c___StartVoiceLoad_b__167_0(
        ServantStatusDialog___c_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  return LimitCountUtility__IsCostume(stage, 0);
}


void ServantStatusDialog___c__DisplayClass142_0___ctor(
        ServantStatusDialog___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass142_0___LoadAsset_b__0(
        ServantStatusDialog___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  this->fields.isUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass142_0___LoadAsset_b__1(
        ServantStatusDialog___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTerminalUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass142_0___LoadAsset_b__2(
        ServantStatusDialog___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass143_0___ctor(
        ServantStatusDialog___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass143_0___LoadBattleCharaChangeConfirmAsset_b__0(
        ServantStatusDialog___c__DisplayClass143_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusDialog___c__DisplayClass143_0_o *v9; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  struct System_Action_o *callback; // x8

  v9 = this;
  if ( (byte_596CB48 & 1) == 0 )
  {
    this = (ServantStatusDialog___c__DisplayClass143_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CB48 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.cashedBattleCharaChangeConfirmAssetData = assetData,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.cashedBattleCharaChangeConfirmAssetData,
          (int32_t)assetData,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = v9->fields.callback) == 0)
    || (((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (ServantStatusDialog___c__DisplayClass143_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
}


void ServantStatusDialog___c__DisplayClass152_0___ctor(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass152_0___StartStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass152_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_2213CDC(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass153_0___ctor(
        ServantStatusDialog___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass153_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass153_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_2213CDC(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass163_0___ctor(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog_o *_4__this; // x0
  __int64 v4; // x2
  struct ServantStatusDialog_o *v5; // x8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x20
  const MethodInfo *v7; // x1

  if ( (byte_596CB4B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB4B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(_4__this, 0), (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)v5->fields.battleCharaChangeConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(this, v7);
  else
    ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
      this,
      v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__3(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.servantStatusBattleConfirmDialog) == 0)
    || (ServantStatusBattleConfirmDialog__Close((ServantStatusBattleConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_b__4(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass163_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.battleCharaChangeConfirmDialog) == 0)
    || (BattleCharaChangeConfirmDialog__Close((BattleCharaChangeConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass163_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantOverwriteStatus_o *nowStatus; // x23
  System_Int32_array *nowClassSkill; // x24
  int32_t nowDispLimitCount; // w20
  TreasureDvcInfo_o *nowTdInfo; // x21
  SkillInfo_array *nowSkillInfoList; // x22
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v8; // x25
  ServantOverwriteStatus_o *nextStatus; // x23
  System_Int32_array *nextClassSkill; // x24
  int32_t nextDispLimitCount; // w20
  TreasureDvcInfo_o *nextTdInfo; // x21
  SkillInfo_array *nextSkillInfoList; // x22
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x26
  BattleCharaChangeConfirmListViewItem_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  BattleCharaChangeConfirmDialog_o *battleCharaChangeConfirmDialog; // x21
  BattleCharaChangeConfirmDialog_ClickDelegate_o *v20; // x22

  if ( (byte_596CB4A & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItem_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__);
    byte_596CB4A = 1;
  }
  nowStatus = this->fields.nowStatus;
  nowClassSkill = this->fields.nowClassSkill;
  nowDispLimitCount = this->fields.nowDispLimitCount;
  nowTdInfo = this->fields.nowTdInfo;
  nowSkillInfoList = this->fields.nowSkillInfoList;
  v8 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v8,
    nowDispLimitCount,
    nowTdInfo,
    nowSkillInfoList,
    nowStatus,
    nowClassSkill,
    0);
  nextStatus = this->fields.nextStatus;
  nextClassSkill = this->fields.nextClassSkill;
  nextDispLimitCount = this->fields.nextDispLimitCount;
  nextTdInfo = this->fields.nextTdInfo;
  nextSkillInfoList = this->fields.nextSkillInfoList;
  v14 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v14,
    nextDispLimitCount,
    nextTdInfo,
    nextSkillInfoList,
    nextStatus,
    nextClassSkill,
    0);
  LODWORD(nextTdInfo) = this->fields.svtId;
  LODWORD(nextSkillInfoList) = this->fields.limitCount;
  v15 = (BattleCharaChangeConfirmListViewItem_o *)sub_2213CCC(BattleCharaChangeConfirmListViewItem_TypeInfo);
  BattleCharaChangeConfirmListViewItem___ctor(v15, (int32_t)nextTdInfo, (int32_t)nextSkillInfoList, v8, v14, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (battleCharaChangeConfirmDialog = _4__this->fields.battleCharaChangeConfirmDialog,
        v20 = (BattleCharaChangeConfirmDialog_ClickDelegate_o *)sub_2213CCC(BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo),
        BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__4__,
          0),
        !battleCharaChangeConfirmDialog) )
  {
    sub_2213CDC(v16, v17);
  }
  BattleCharaChangeConfirmDialog__Open(battleCharaChangeConfirmDialog, v20, v15, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass163_0_o *v2; // x19
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusBattleConfirmDialog_o *servantStatusBattleConfirmDialog; // x20
  TreasureDvcInfo_o *nowTdInfo; // x21
  TreasureDvcInfo_o *nextTdInfo; // x22
  _BOOL4 isTdModify; // w26
  SkillInfo_array *nowSkillInfoList; // x23
  SkillInfo_array *nextSkillInfoList; // x24
  _BOOL4 isSkillModify; // w27
  ServantStatusBattleConfirmDialog_ClickDelegate_o *v11; // x25

  v2 = this;
  if ( (byte_596CB49 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass163_0_o *)sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__);
    byte_596CB49 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  servantStatusBattleConfirmDialog = _4__this->fields.servantStatusBattleConfirmDialog;
  nowTdInfo = v2->fields.nowTdInfo;
  nextTdInfo = v2->fields.nextTdInfo;
  isTdModify = v2->fields.isTdModify;
  nowSkillInfoList = v2->fields.nowSkillInfoList;
  nextSkillInfoList = v2->fields.nextSkillInfoList;
  isSkillModify = v2->fields.isSkillModify;
  v11 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_2213CCC(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_ServantStatusDialog___c__DisplayClass163_0__ChangeBattleResource_b__3__,
    0);
  if ( !servantStatusBattleConfirmDialog )
LABEL_6:
    sub_2213CDC(this, method);
  ServantStatusBattleConfirmDialog__Open(
    servantStatusBattleConfirmDialog,
    nowTdInfo,
    nextTdInfo,
    isTdModify,
    nowSkillInfoList,
    nextSkillInfoList,
    isSkillModify,
    v11,
    v2->fields.svtId,
    v2->fields.limitCount,
    v2->fields.nowDispLimitCount,
    v2->fields.nextDispLimitCount,
    0);
}


void ServantStatusDialog___c__DisplayClass165_0___ctor(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__0(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_2213CDC(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_41386816((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__1(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass165_0_o *v3; // x19
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  System_Action_o *_9__2; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct ServantStatusDialog_o *v19; // x8

  v3 = this;
  if ( (byte_596CB4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusDialog___c__DisplayClass165_0_o *)sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__);
    byte_596CB4C = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( _4__this->fields.loadingBattleActorData != v3->fields.battleActorData )
    return;
  if ( v3->fields.isUpdateParam )
  {
    charaGraphListViewManager = _4__this->fields.charaGraphListViewManager;
    _9__2 = v3->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v3,
        Method_ServantStatusDialog___c__DisplayClass165_0__SetChangeBattleResource_b__2__,
        0);
      v3->fields.__9__2 = _9__2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
    }
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_41386920(charaGraphListViewManager, 3, _9__2, 0);
      goto LABEL_10;
    }
LABEL_14:
    sub_2213CDC(this, data);
  }
LABEL_10:
  this = (ServantStatusDialog___c__DisplayClass165_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  v19 = v3->fields.__4__this;
  if ( !v19 )
    goto LABEL_14;
  v19->fields.loadingBattleActorData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->fields.loadingBattleActorData, 0, v13, v14, v15, v16, v17, v18);
  this = (ServantStatusDialog___c__DisplayClass165_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  ServantStatusDialog__PlayBattleEffect((ServantStatusDialog_o *)this, v3->fields.battleActorData, 0);
}


void ServantStatusDialog___c__DisplayClass165_0___SetChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass165_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_2213CDC(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_41386816((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass219_0___ctor(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass219_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  struct ServantStatusDialog_o *_4__this; // x0
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  System_Action_o *_9__1; // x22
  CommonUI_o *klass; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596CB4D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_ServantStatusDialog___c__DisplayClass219_0__OnClickTdSpeed_b__1__);
    byte_596CB4D = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0);
      v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
        v8 = sub_224B908(v7);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
      if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
        v9 = sub_224B908(v7);
      _4__this = **(struct ServantStatusDialog_o ***)(v9 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(_4__this, isDecide);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&_4__this->fields.favoriteSprite + 5) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_224B908(v3);
  _9__1 = this->fields.__9__1;
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass219_0__OnClickTdSpeed_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_37373868(klass, _9__1, 0);
}


void ServantStatusDialog___c__DisplayClass219_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass219_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_596CB4E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass219_0_o *)sub_2213A60(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_596CB4E = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_2213CCC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(v5, _4__this, Method_ServantStatusDialog_OnSelectStatus__, 0),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v5, 0);
}


void ServantStatusDialog___c__DisplayClass222_0___ctor(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *_4__this; // x0

  if ( (byte_596CB4F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_596CB4F = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  _4__this = **(CommonUI_o ***)(v7 + 184);
  if ( !_4__this
    || (CommonUI__CloseConfirmDialog_37373868(_4__this, 0, 0), (_4__this = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, isDecide);
  }
  ServantStatusDialog__RandomLimitCountSetting(
    (ServantStatusDialog_o *)_4__this,
    isDecide,
    this->fields.isOwnSetting,
    this->fields.randomLimitCount,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass222_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass222_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *_4__this; // x0

  if ( (byte_596CB50 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_596CB50 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v3);
  _4__this = **(CommonUI_o ***)(v7 + 184);
  if ( !_4__this
    || (CommonUI__CloseConfirmDialog_37373868(_4__this, 0, 0), (_4__this = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, isDecide);
  }
  ServantStatusDialog__RandomLimitCountSetting(
    (ServantStatusDialog_o *)_4__this,
    isDecide,
    this->fields.isOwnSetting,
    this->fields.randomLimitCount,
    0);
}


void ServantStatusDialog___c__DisplayClass239_0___ctor(
        ServantStatusDialog___c__DisplayClass239_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantStatusDialog___c__DisplayClass239_0___EnableSpecialCostume_b__1(
        ServantStatusDialog___c__DisplayClass239_0_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  void *servantCostumeMaster; // x0

  servantCostumeMaster = this->fields.servantCostumeMaster;
  if ( !servantCostumeMaster
    || (servantCostumeMaster = ServantCostumeMaster__GetEntity(
                                 (ServantCostumeMaster_o *)servantCostumeMaster,
                                 this->fields.svtId,
                                 dispLimitCount,
                                 0)) == 0 )
  {
    sub_2213CDC(servantCostumeMaster, *(_QWORD *)&dispLimitCount);
  }
  return (System_String_o *)*((_QWORD *)servantCostumeMaster + 4);
}