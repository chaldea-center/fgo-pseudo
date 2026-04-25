void ServantStatusDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  ServantStatusDialog_c *v7; // x8
  int32_t v8; // w1
  struct ServantStatusDialog_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  struct ServantStatusDialog_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4E00979 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    sub_1CE6700(&StringLiteral_3131/*"BattleCharaChangeConfirmDialog"*/);
    sub_1CE6700(&StringLiteral_12882/*"ServantStatus/BattleCharaChangeConfirm"*/);
    sub_1CE6700(&StringLiteral_409/*"#4C4C4C"*/);
    byte_4E00979 = 1;
  }
  ServantStatusDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_409/*"#4C4C4C"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ServantStatusDialog_TypeInfo->static_fields,
    StringLiteral_409/*"#4C4C4C"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = ServantStatusDialog_TypeInfo;
  ServantStatusDialog_TypeInfo->static_fields->NameOffsetWhenHasRuby = (struct UnityEngine_Vector2_o)0xC000000000000000LL;
  v8 = StringLiteral_12882/*"ServantStatus/BattleCharaChangeConfirm"*/;
  static_fields = v7->static_fields;
  static_fields->BattleCharaChangeConfirmLoadAssetPath = (struct System_String_o *)StringLiteral_12882/*"ServantStatus/BattleCharaChangeConfirm"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&static_fields->BattleCharaChangeConfirmLoadAssetPath,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_3131/*"BattleCharaChangeConfirmDialog"*/;
  v17 = ServantStatusDialog_TypeInfo->static_fields;
  v17->BattleCharaChangeConfirmDialogPrefabName = (struct System_String_o *)StringLiteral_3131/*"BattleCharaChangeConfirmDialog"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&v17->BattleCharaChangeConfirmDialogPrefabName,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void ServantStatusDialog___ctor(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  if ( (byte_4E00978 & 1) == 0 )
  {
    sub_1CE6700(&bool___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&StringLiteral_25128/*"wait"*/);
    byte_4E00978 = 1;
  }
  this->fields.CHARA_BASE_POSITION.fields.z = 4.55;
  *(_QWORD *)&this->fields.CHARA_BASE_POSITION.fields.x = 0xBFC666663F59999ALL;
  this->fields.changeTransformAddTabMargin = -18;
  v3 = (struct System_Boolean_array *)sub_1CE67A8(bool___TypeInfo, 4);
  this->fields.tabInitList = v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.tabInitList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.commandCardAssetNames = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCardAssetNames,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.statusImageAssetNames = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.statusImageAssetNames,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.dictChangeSvtVoiceIdList = (struct System_Collections_Generic_Dictionary_int__int____o *)v24;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.dictChangeSvtVoiceIdList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.requestVoiceDataList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestVoiceDataList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.voiceDataList = (struct System_Collections_Generic_List_string__o *)v38;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voiceDataList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_25128/*"wait"*/;
  this->fields.defaultAnimationName = (struct System_String_o *)StringLiteral_25128/*"wait"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.defaultAnimationName, v45, v46, v47, v48, v49, v50, v51);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantStatusDialog__BattleAssetLoadError(ServantStatusDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4E0092F & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E0092F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  this->fields.loadingBattleActorData = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadingBattleActorData, 0, v5, v6, v7, v8, v9, v10);
  ServantStatusDialog__DestroyBattleChr(this, v11);
}


void ServantStatusDialog__CancelInput(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UICamera_c *v2; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x26
  UnityEngine_Object_o *last; // x19
  UnityEngine_GameObject_o *v5; // x19
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x20
  UnityEngine_Object_o *current; // x19
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x20
  UnityEngine_GameObject_o *selectedObject; // x19
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x0
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UICamera_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  GrandQuestFolderBoardItem_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _BYTE v37[4]; // [xsp+4h] [xbp-5Ch] BYREF
  char v38[4]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v39[4]; // [xsp+Ch] [xbp-54h] BYREF
  char v40[4]; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v41[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4E00929 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&TouchEffectManager_TypeInfo);
    sub_1CE6700(&UICamera_TypeInfo);
    sub_1CE6700(&StringLiteral_9968/*"OnDragEnd"*/);
    sub_1CE6700(&StringLiteral_9991/*"OnHover"*/);
    sub_1CE6700(&StringLiteral_10022/*"OnPress"*/);
    sub_1CE6700(&StringLiteral_10032/*"OnScrollStop"*/);
    byte_4E00929 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v2 = UICamera_TypeInfo;
  }
  currentTouch = v2->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__UnPress(0);
    currentTouch->fields.pressStarted = 0;
    last = (UnityEngine_Object_o *)currentTouch->fields.last;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(last, 0, 0) )
    {
      v5 = currentTouch->fields.last;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v5, (System_String_o *)StringLiteral_9968/*"OnDragEnd"*/, 0, 0);
    }
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, 0, 0) )
    {
      v7 = currentTouch->fields.dragged;
      v41[0] = 0;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v41);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v7, (System_String_o *)StringLiteral_10022/*"OnPress"*/, v8, 0);
    }
    current = (UnityEngine_Object_o *)currentTouch->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(current, 0, 0) )
    {
      v10 = currentTouch->fields.current;
      v40[0] = 1;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v40);
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__Notify(v10, (System_String_o *)StringLiteral_9991/*"OnHover"*/, v11, 0);
    }
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  selectedObject = UICamera__get_selectedObject(0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)selectedObject, 0, 0) )
  {
    v39[0] = 0;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v39);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10022/*"OnPress"*/, v13, 0);
    v38[0] = 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v38);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_9991/*"OnHover"*/, v14, 0);
    v37[0] = 0;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v37);
    UICamera__Notify(selectedObject, (System_String_o *)StringLiteral_10032/*"OnScrollStop"*/, v15, 0);
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__set_selectedObject(0, 0);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->current = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&static_fields->current, 0, v17, v18, v19, v20, v21, v22);
  v23 = UICamera_TypeInfo->static_fields;
  v23->currentCamera = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v23->currentCamera, 0, v24, v25, v26, v27, v28, v29);
  v30 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
  v30[1].klass = 0;
  sub_1CE66A4(v30 + 1, 0, v31, v32, v33, v34, v35, v36);
  UICamera_TypeInfo->static_fields->currentTouchID = -100;
}


void ServantStatusDialog__ChangeBattleResource(ServantStatusDialog_o *this, int32_t dispLv, const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  SkillInfo_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  int32_t v15; // w22
  ServantLimitImageMaster_o *v16; // x21
  int32_t v17; // w21
  int32_t v18; // w22
  int32_t DispLimitCountStage; // w0
  int32_t v20; // w21
  int32_t v21; // w25
  int32_t v22; // w22
  __int64 confirmDispLv; // x8
  int32_t SealAfter; // w26
  __int64 *v25; // x21
  __int64 *v26; // x22
  System_Collections_ICollection_o **v27; // x24
  ServantStatusListViewItem_o *v28; // x27
  int32_t LimitCount; // w0
  int32_t v30; // w0
  ServantOverwriteStatus_o *Status; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  ServantStatusListViewItem_o *v38; // x25
  int32_t v39; // w0
  int32_t v40; // w0
  ServantOverwriteStatus_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  ServantOverwriteStatus_o *v48; // x8
  bool v49; // w25
  System_Collections_ICollection_o *v50; // x0
  const MethodInfo *v51; // x2
  _BOOL4 v52; // w26
  bool v53; // w23
  __int64 i; // x25
  unsigned __int64 v55; // x27
  __int64 v56; // x8
  __int64 v57; // x9
  SkillInfo_o *v58; // x0
  bool v59; // w2
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x19
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x2

  if ( (byte_4E00937 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__2__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass161_0_TypeInfo);
    byte_4E00937 = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass161_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass161_0___ctor((ServantStatusDialog___c__DisplayClass161_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  this->fields.confirmDispLv = dispLv;
  if ( !mainInfo )
    goto LABEL_52;
  if ( !mainInfo->fields.userSvtEntity )
  {
    ServantStatusDialog__EndBattleConfirm(this, 1, v14);
    return;
  }
  *(_DWORD *)(v5 + 68) = ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v15 = *(_DWORD *)(v5 + 68);
  v16 = (ServantLimitImageMaster_o *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !v16 )
    goto LABEL_52;
  *(_DWORD *)(v5 + 72) = ServantLimitImageMaster__GetServantLimitCountSealAfter(v16, v15, (int32_t)mainInfo, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_52;
  v17 = *(_DWORD *)(v5 + 68);
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v18 = (int)mainInfo;
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(this->fields.mainInfo, 0, 0);
  mainInfo = (ServantStatusListViewItem_o *)LimitCountUtility__GetSealAfter(v17, v18, DispLimitCountStage, 0, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v20 = *(_DWORD *)(v5 + 68);
  v21 = (int)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_52;
  v22 = (int)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                              this->fields.mainInfo,
                                              0);
  if ( !mainInfo )
    goto LABEL_52;
  confirmDispLv = this->fields.confirmDispLv;
  if ( (unsigned int)confirmDispLv >= LODWORD(mainInfo->fields.partyItem) )
LABEL_53:
    sub_1CE6960(mainInfo);
  SealAfter = LimitCountUtility__GetSealAfter(v20, v22, *((_DWORD *)&mainInfo->fields.memberItem + confirmDispLv), 0, 0);
  *(_DWORD *)(v5 + 76) = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v21, 0);
  *(_DWORD *)(v5 + 80) = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(SealAfter, 0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_52;
  v25 = (__int64 *)(v5 + 48);
  ServantStatusListViewItem__GetUserServantInfo(
    mainInfo,
    *(_DWORD *)(v5 + 68),
    *(_DWORD *)(v5 + 76),
    (TreasureDvcInfo_o **)(v5 + 24),
    (SkillInfo_array **)(v5 + 48),
    (System_Int32_array **)(v5 + 96),
    0);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_52;
  v26 = (__int64 *)(v5 + 56);
  v27 = (System_Collections_ICollection_o **)(v5 + 112);
  ServantStatusListViewItem__GetUserServantInfo(
    mainInfo,
    *(_DWORD *)(v5 + 68),
    *(_DWORD *)(v5 + 80),
    (TreasureDvcInfo_o **)(v5 + 32),
    (SkillInfo_array **)(v5 + 56),
    (System_Int32_array **)(v5 + 112),
    0);
  v28 = this->fields.mainInfo;
  if ( !v28 )
    goto LABEL_52;
  LimitCount = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  v30 = LimitCountUtility__ConvertStageToLimitCount(LimitCount, v21, 0, 0);
  Status = ServantStatusListViewItem__GetStatus(v28, v30, 0);
  *(_QWORD *)(v5 + 88) = Status;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 88), (int32_t)Status, v32, v33, v34, v35, v36, v37);
  v38 = this->fields.mainInfo;
  if ( !v38 )
    goto LABEL_52;
  v39 = ServantStatusListViewItem__get_LimitCount(this->fields.mainInfo, 0);
  v40 = LimitCountUtility__ConvertStageToLimitCount(v39, SealAfter, 0, 0);
  v41 = ServantStatusListViewItem__GetStatus(v38, v40, 0);
  *(_QWORD *)(v5 + 104) = v41;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 104), (int32_t)v41, v42, v43, v44, v45, v46, v47);
  mainInfo = *(ServantStatusListViewItem_o **)(v5 + 24);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)TreasureDvcInfo__Equals(
                                                    (TreasureDvcInfo_o *)mainInfo,
                                                    *(TreasureDvcInfo_o **)(v5 + 32),
                                                    0),
        v48 = *(ServantOverwriteStatus_o **)(v5 + 88),
        *(_BYTE *)(v5 + 40) = ((unsigned __int8)mainInfo & 1) == 0,
        !v48) )
  {
LABEL_52:
    sub_1CE6958(mainInfo, v7);
  }
  v49 = ServantOverwriteStatus__Equals(v48, *(ServantOverwriteStatus_o **)(v5 + 104), 0);
  v50 = *(System_Collections_ICollection_o **)(v5 + 96);
  *(_BYTE *)(v5 + 64) = 0;
  v52 = 0;
  if ( !BasicHelper__IsNullOrEmpty(v50, 0) )
    v52 = !BasicHelper__IsNullOrEmpty(*v27, 0)
       && !System_Linq_Enumerable__SequenceEqual_int_(
             *(System_Collections_Generic_IEnumerable_TSource__o **)(v5 + 96),
             (System_Collections_Generic_IEnumerable_TSource__o *)*v27,
             (const MethodInfo_323D608 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v53 = !v49;
  for ( i = 4; ; ++i )
  {
    mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    v55 = i - 4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v55 >= mainInfo->fields.commandCodeEntity->fields.collectionNo.fields.fakeValue )
      break;
    v56 = *v25;
    if ( !*v25 )
      goto LABEL_52;
    if ( v55 >= *(unsigned int *)(v56 + 24) )
      goto LABEL_53;
    v57 = *v26;
    if ( !*v26 )
      goto LABEL_52;
    if ( v55 >= *(unsigned int *)(v57 + 24) )
      goto LABEL_53;
    v58 = *(SkillInfo_o **)(v56 + 8 * i);
    v7 = *(SkillInfo_o **)(v57 + 8 * i);
    if ( v58 )
    {
      v59 = 1;
    }
    else
    {
      if ( !v7 )
        continue;
      v58 = *(SkillInfo_o **)(v57 + 8 * i);
      v7 = 0;
      v59 = 0;
    }
    if ( !SkillInfo__Equals(v58, v7, v59, 0) )
    {
      *(_BYTE *)(v5 + 64) = 1;
      break;
    }
  }
  if ( v52 || v53 )
  {
    if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    {
      ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(this, (const MethodInfo *)v7);
      battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      {
        ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
          (ServantStatusDialog___c__DisplayClass161_0_o *)v5,
          0);
        return;
      }
LABEL_49:
      ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        (ServantStatusDialog___c__DisplayClass161_0_o *)v5,
        0);
    }
    else
    {
      v61 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v5,
        Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__2__,
        0);
      ServantStatusDialog__LoadBattleCharaChangeConfirmAsset(this, v61, v62);
    }
  }
  else
  {
    if ( *(unsigned __int8 *)(v5 + 64) | *(unsigned __int8 *)(v5 + 40) )
      goto LABEL_49;
    ServantStatusDialog__SetChangeBattleResource(this, 0, v51);
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
  if ( (byte_4E00960 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E00960 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo
    || (mainInfo->fields.changeVoiceFlag = type,
        (this = (ServantStatusDialog_o *)v4->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)this, 3, 0),
        statusTabListViewManager = v4->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1CE6958(this, *(_QWORD *)&type);
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
    sub_1CE6958(mainInfo, *(_QWORD *)&imageLimitCountStage);
  if ( ServantStatusListViewItem__SelectCardImageLimitCountStage(mainInfo, imageLimitCountStage, 0) )
    ServantStatusDialog__ChangeCharaGraph_36013484(this, v6);
}


void ServantStatusDialog__ChangeCharaGraph_36013484(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  const MethodInfo *v4; // x2
  System_String_o *DetailName; // x0
  const MethodInfo *v6; // x2
  int32_t CvId; // w0
  const MethodInfo *v8; // x2
  int32_t v9; // w20
  System_String_o **p_partyItem; // x8

  if ( (byte_4E00976 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_CvMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00976 = 1;
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
  v9 = CvId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_CvMaster___);
  if ( !mainInfo
    || (mainInfo = (ServantStatusListViewItem_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)mainInfo,
                                                    v9,
                                                    (const MethodInfo_34E925C *)Method_DataMasterBase_CvMaster__CvEntity__int__GetEntity__)) == 0 )
  {
LABEL_17:
    sub_1CE6958(mainInfo, method);
  }
  p_partyItem = (System_String_o **)&mainInfo->fields.partyItem;
LABEL_16:
  ServantStatusDialog__UpdateCv(this, *p_partyItem, v8);
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

  if ( (byte_4E0095F & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E0095F = 1;
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo
    || (ServantStatusListViewItem__set_TreasureDeviceSpeedSelect(mainInfo, type, 0),
        (mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager) == 0)
    || (ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)mainInfo, 3, 0),
        statusTabListViewManager = this->fields.statusTabListViewManager,
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !statusTabListViewManager) )
  {
    sub_1CE6958(mainInfo, *(_QWORD *)&type);
  }
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
}


void ServantStatusDialog__Close(ServantStatusDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_string__o *statusImageAssetNames; // x8
  int32_t size; // w2
  int v16; // w9
  Il2CppObject *v17; // x21
  struct System_Collections_Generic_List_string__o *commandCardAssetNames; // x8
  int32_t v19; // w2
  int v20; // w9
  const MethodInfo *v21; // x1
  struct ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x8
  System_String_o *assetName; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Collections_Generic_List_string__o *requestVoiceDataList; // x8
  int32_t v31; // w2
  int v32; // w9
  System_String_o *loadVoiceData; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x21
  struct System_Collections_Generic_List_string__o *voiceDataList; // x8
  int32_t v42; // w2
  int v43; // w9
  RubyLabelHelper_o *servantNameRubyLabelHelper; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4E00943 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E00943 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  statusTabListViewManager = this->fields.statusTabListViewManager;
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
    0);
  this->fields.mainInfo = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, 0, v6, v7, v8, v9, v10, v11);
  ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(this, v12);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.statusImageAssetNames;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v52.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  statusImageAssetNames = this->fields.statusImageAssetNames;
  if ( !statusImageAssetNames )
    goto LABEL_52;
  size = statusImageAssetNames->fields._size;
  v16 = statusImageAssetNames->fields._version + 1;
  statusImageAssetNames->fields._size = 0;
  statusImageAssetNames->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)statusImageAssetNames->fields._items, 0, size, 0);
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.commandCardAssetNames;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)statusTabListViewManager,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v17 = v52.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)v17, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  commandCardAssetNames = this->fields.commandCardAssetNames;
  if ( !commandCardAssetNames )
    goto LABEL_52;
  v19 = commandCardAssetNames->fields._size;
  v20 = commandCardAssetNames->fields._version + 1;
  commandCardAssetNames->fields._size = 0;
  commandCardAssetNames->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)commandCardAssetNames->fields._items, 0, v19, 0);
  ServantStatusDialog__DestroyBattleChr(this, (const MethodInfo *)callback);
  loadingBattleActorData = this->fields.loadingBattleActorData;
  if ( loadingBattleActorData )
  {
    assetName = loadingBattleActorData->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetName, 0);
    this->fields.loadingBattleActorData = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadingBattleActorData, 0, v24, v25, v26, v27, v28, v29);
  }
  ServantStatusDialog__StopVoice(this, v21);
  requestVoiceDataList = this->fields.requestVoiceDataList;
  if ( !requestVoiceDataList )
    goto LABEL_52;
  v31 = requestVoiceDataList->fields._size;
  v32 = requestVoiceDataList->fields._version + 1;
  requestVoiceDataList->fields._size = 0;
  requestVoiceDataList->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)requestVoiceDataList->fields._items, 0, v31, 0);
  loadVoiceData = this->fields.loadVoiceData;
  if ( loadVoiceData )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(loadVoiceData, 0);
    this->fields.loadVoiceData = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData, 0, v34, v35, v36, v37, v38, v39);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.voiceDataList;
  if ( !statusTabListViewManager )
    goto LABEL_52;
  if ( SLODWORD(statusTabListViewManager->fields.m_CancellationTokenSource) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      (System_Collections_Generic_List_object__o *)statusTabListViewManager,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v52 = v51;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v40 = v52.fields._current;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage((System_String_o *)v40, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    voiceDataList = this->fields.voiceDataList;
    if ( !voiceDataList )
      goto LABEL_52;
    v42 = voiceDataList->fields._size;
    v43 = voiceDataList->fields._version + 1;
    voiceDataList->fields._size = 0;
    voiceDataList->fields._version = v43;
    if ( v42 >= 1 )
      System_Array__Clear((System_Array_o *)voiceDataList->fields._items, 0, v42, 0);
  }
  servantNameRubyLabelHelper = this->fields.servantNameRubyLabelHelper;
  if ( servantNameRubyLabelHelper )
  {
    RubyLabelHelper__ReleasePrefabs(servantNameRubyLabelHelper, 0);
    this->fields.servantNameRubyLabelHelper = 0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.servantNameRubyLabelHelper,
      0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  statusTabListViewManager = (ServantStatusListViewManager_o *)this->fields.baseObject;
  if ( !statusTabListViewManager
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabListViewManager, 0, 0),
        (statusTabListViewManager = (ServantStatusListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_52:
    sub_1CE6958(statusTabListViewManager, callback);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E00958 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog__CoWaitForEndOfFrame_d__202_TypeInfo);
    byte_4E00958 = 1;
  }
  v4 = sub_1CE694C(ServantStatusDialog__CoWaitForEndOfFrame_d__202_TypeInfo);
  ServantStatusDialog__CoWaitForEndOfFrame_d__202___ctor((ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *)v4, 0, 0);
  if ( !v4 )
    sub_1CE6958(v5, v6);
  *(_QWORD *)(v4 + 32) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void ServantStatusDialog__DestroyBattleChr(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  struct BattleFBXComponent_o **p_battleActor; // x20
  BattleFBXComponent_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantStatusDialog_BattleActorData_o *currentBattleActorData; // x8
  System_String_o *assetName; // x20
  GrandQuestFolderBoardItem_o *p_currentBattleActorData; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4E00935 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00935 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    p_battleActor = &this->fields.battleActor;
    v6 = this->fields.battleActor;
    if ( !v6 || (BattleFBXComponent__RevertShaderFloatProperty(v6, 0), (v6 = *p_battleActor) == 0) )
      sub_1CE6958(v6, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(gameObject, 0);
    *p_battleActor = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.battleActor, 0, v8, v9, v10, v11, v12, v13);
  }
  currentBattleActorData = this->fields.currentBattleActorData;
  if ( currentBattleActorData )
  {
    assetName = currentBattleActorData->fields.assetName;
    p_currentBattleActorData = (GrandQuestFolderBoardItem_o *)&this->fields.currentBattleActorData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetName, 0);
    p_currentBattleActorData->klass = 0;
    sub_1CE66A4(p_currentBattleActorData, 0, v17, v18, v19, v20, v21, v22);
  }
}


bool ServantStatusDialog__EnableSpecialCostume(
        ServantStatusDialog_o *this,
        System_String_o **costumeName,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ServantStatusListViewItem_o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *DispLimitCountStageList; // x22
  ServantStatusDialog___c_c *v23; // x8
  System_Func_int__bool__o *_9__235_0; // x23
  System_String_o *v25; // x21
  Il2CppObject *v26; // x24
  struct ServantStatusDialog___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  System_Func_T__TResult__o *v35; // x23
  System_Collections_Generic_IEnumerable_string__o *v36; // x0
  System_String_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4E00975 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_int___);
    sub_1CE6700(&System_Func_int__string__TypeInfo);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog___c__EnableSpecialCostume_b__235_0__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass235_0__EnableSpecialCostume_b__1__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass235_0_TypeInfo);
    sub_1CE6700(&ServantStatusDialog___c_TypeInfo);
    sub_1CE6700(&StringLiteral_12029/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_25787/*"、"*/);
    byte_4E00975 = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass235_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass235_0___ctor((ServantStatusDialog___c__DisplayClass235_0_o *)v5, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)LocalizationManager__ContainsKey(
                                                   (System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/,
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
    *costumeName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)costumeName, StringLiteral_1/*""*/, v8, v9, v10, v11, v12, v13);
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantStatusListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = Master_object,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Master_object, v16, v17, v18, v19, v20, v21),
        (Master_object = this->fields.mainInfo) == 0)
    || (*(_DWORD *)(v5 + 24) = ServantStatusListViewItem__get_SvtId(Master_object, 0),
        (Master_object = this->fields.mainInfo) == 0) )
  {
LABEL_23:
    sub_1CE6958(Master_object, v7);
  }
  DispLimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                                                                   Master_object,
                                                                                   0);
  v23 = ServantStatusDialog___c_TypeInfo;
  if ( !ServantStatusDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo);
    v23 = ServantStatusDialog___c_TypeInfo;
  }
  _9__235_0 = v23->static_fields->__9__235_0;
  v25 = (System_String_o *)StringLiteral_25787/*"、"*/;
  if ( !_9__235_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ServantStatusDialog___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__235_0 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__235_0, v26, Method_ServantStatusDialog___c__EnableSpecialCostume_b__235_0__, 0);
    static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    static_fields->__9__235_0 = _9__235_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__235_0,
      (int32_t)_9__235_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          DispLimitCountStageList,
          (System_Func_TSource__bool__o *)_9__235_0,
          (const MethodInfo_324AC6C *)Method_System_Linq_Enumerable_Where_int___);
  v35 = (System_Func_T__TResult__o *)sub_1CE694C(System_Func_int__string__TypeInfo);
  System_Func_int__object____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass235_0__EnableSpecialCostume_b__1__,
    0);
  v36 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v34,
                                                              (System_Func_TSource__TResult__o *)v35,
                                                              (const MethodInfo_3237910 *)Method_System_Linq_Enumerable_Select_int__string___);
  v37 = System_String__Join_65165420(v25, v36, 0);
  *costumeName = v37;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)costumeName, (int32_t)v37, v38, v39, v40, v41, v42, v43);
  return !System_String__IsNullOrEmpty(*costumeName, 0);
}


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
      sub_1CE6960(this);
    tabInitList->m_Items[0] = 0;
    this = (ServantStatusDialog_o *)this->fields.statusTabListViewManager;
    if ( !this )
LABEL_7:
      sub_1CE6958(this, isDecide);
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

  if ( (byte_4E0094D & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E0094D = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1CE6958(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndCloseSelectEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E0094B & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E0094B = 1;
  }
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v4 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    sub_1CE6958(v5, v6);
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v4, 0);
}


void ServantStatusDialog__EndInitLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Object_o *changeTransformButton; // x20
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  int32_t changeTransformAddTabMargin; // w21
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  float v11; // s0
  int32_t v12; // w22
  UnityEngine_GameObject_o *v13; // x20
  int v14; // w21
  UnityEngine_GameObject_o *v15; // x0
  float v16; // s0
  int32_t v17; // w22
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s0
  bool v21; // w1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  int32_t v23; // w20
  int32_t v24; // w8
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  ServantStatusDialog_o *v27; // x22
  struct ServantStatusListViewItem_o *v28; // x8
  __int64 favoriteUserSvtId; // x8
  ServantStatusDialog_o *v30; // x21
  int32_t kind; // w8
  bool v32; // w8
  bool v33; // w8
  struct System_Boolean_array *tabInitList; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v36; // x8
  bool *m_Items; // x10
  struct ServantStatusListViewItem_o *v38; // x8
  struct ServantStatusListViewItem_o *v39; // x8
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v41; // x21
  __int64 v42; // x22
  __int64 v43; // x23
  struct System_Collections_Generic_List_ServantCommentEntity__o *NewProfileEntities; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  const MethodInfo *v52; // x1
  System_String_o *DetailName; // x0
  const MethodInfo *v54; // x2
  UnityEngine_Object_o *servantClassNameLabel; // x21
  UILabel_o *v56; // x21
  __int64 *v57; // x8
  ServantEntity_o *ServantEntity; // x0
  _BOOL4 IsServantEquip; // w22
  int32_t v60; // w8
  UnityEngine_Object_o *v61; // x21
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x2
  int32_t v64; // w8
  unsigned int v65; // w8
  struct ServantStatusListViewItem_o *v66; // x8
  struct ServantEntity_o *v67; // x8
  struct ServantStatusListViewItem_o *v68; // x8
  struct ServantEntity_o *v69; // x8
  int32_t GrandClassId; // w21
  System_String_o *klass; // x1
  UILabel_o *v72; // x0
  unsigned int v73; // w8
  System_Action_object__o *v74; // x20
  const MethodInfo *v75; // x2
  int32_t v76; // w8
  struct UILabel_o *v77; // x21
  UnityEngine_Object_o *battleExplanationLabel; // x21
  struct ServantStatusListViewItem_o *v79; // x8
  ServantLimitImageMaster_o *v80; // x21
  struct ServantStatusListViewItem_o *v81; // x8
  struct ServantEntity_o *v82; // x8
  __int64 v83; // x22
  __int64 v84; // x23
  int32_t v85; // w22
  struct UILabel_o *v86; // x23
  System_String_o *mText; // x25
  System_String_o *v88; // x24
  Il2CppObject *LimitCountSealedServantName; // x0
  System_String_o *v90; // x0
  System_String_o *v91; // x1
  UILabel_o *v92; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x22
  struct UILabel_o *v94; // x21
  __int64 *v95; // x8
  UIWidget_o *battleTransformNameSprite; // x21
  UIWidget_o *battleTransformNameLabel; // x21
  UnityEngine_GameObject_o *v98; // x0
  bool v99; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E00926 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_AssetData__TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog__EndInitLoad_b__144_0__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_12026/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/);
    sub_1CE6700(&StringLiteral_12027/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/);
    sub_1CE6700(&StringLiteral_12028/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/);
    sub_1CE6700(&StringLiteral_12034/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/);
    sub_1CE6700(&StringLiteral_12033/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/);
    sub_1CE6700(&StringLiteral_4064/*"CancelInput"*/);
    sub_1CE6700(&StringLiteral_6050/*"EndLoadInit"*/);
    byte_4E00926 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_199;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  changeTransformButton = (UnityEngine_Object_o *)this->fields.changeTransformButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(changeTransformButton, 0, 0);
  if ( ((unsigned __int8)baseObject & 1) != 0 )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
    if ( !baseObject )
      goto LABEL_199;
    if ( ServantStatusListViewItem__get_AnyTransformServant((ServantStatusListViewItem_o *)baseObject, 0) )
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.statusButton;
      if ( !baseObject )
        goto LABEL_199;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.statusButton )
        goto LABEL_199;
      v5 = baseObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.statusButton, 0);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v5, LocalPositionX + 0.0, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.profileButton;
      if ( !baseObject )
        goto LABEL_199;
      changeTransformAddTabMargin = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.profileButton )
        goto LABEL_199;
      v9 = baseObject;
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.profileButton, 0);
      v11 = GameObjectExtensions__GetLocalPositionX(v10, 0);
      GameObjectExtensions__SetLocalPositionX(v9, v11 + (float)changeTransformAddTabMargin, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.battleButton;
      if ( !baseObject )
        goto LABEL_199;
      v12 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.battleButton )
        goto LABEL_199;
      v13 = baseObject;
      v14 = v12 + changeTransformAddTabMargin;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.battleButton, 0);
      v16 = GameObjectExtensions__GetLocalPositionX(v15, 0);
      GameObjectExtensions__SetLocalPositionX(v13, v16 + (float)v14, 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.voiceButton;
      if ( !baseObject )
        goto LABEL_199;
      v17 = this->fields.changeTransformAddTabMargin;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !this->fields.voiceButton )
        goto LABEL_199;
      v18 = baseObject;
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.voiceButton, 0);
      v20 = GameObjectExtensions__GetLocalPositionX(v19, 0);
      GameObjectExtensions__SetLocalPositionX(v18, v20 + (float)(v17 + v14), 0);
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_199;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_199;
      v21 = 1;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)this->fields.changeTransformButton;
      if ( !baseObject )
        goto LABEL_199;
      baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
      if ( !baseObject )
        goto LABEL_199;
      v21 = 0;
    }
    UnityEngine_GameObject__SetActive(baseObject, v21, 0);
  }
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_199;
  if ( mainInfo->fields.commandCodeEntity )
  {
    switch ( this->fields.kind )
    {
      case 3:
      case 0x15:
        v23 = 0;
        v24 = 21;
        break;
      case 4:
      case 0x16:
        v23 = 0;
        v24 = 22;
        break;
      case 5:
      case 0x17:
        v23 = 0;
        v24 = 23;
        break;
      case 6:
      case 0x18:
        v23 = 0;
        v24 = 24;
        break;
      case 7:
      case 0x19:
        v23 = 0;
        v24 = 25;
        break;
      case 8:
      case 0x1A:
        v23 = 0;
        v24 = 26;
        break;
      case 9:
      case 0x1B:
        v23 = 0;
        v24 = 27;
        break;
      case 0x1D:
      case 0x20:
        v23 = 0;
        v24 = 32;
        break;
      default:
        v23 = 0;
        v24 = 20;
        break;
    }
  }
  else
  {
    svtEntity = mainInfo->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_199;
    type = svtEntity->fields.type;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)TutorialFlag__Get_41569468(106, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
      v27 = this;
    else
      v27 = 0;
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v28 = this->fields.mainInfo;
      if ( !v28 )
        goto LABEL_199;
      favoriteUserSvtId = v28->fields.favoriteUserSvtId;
      if ( favoriteUserSvtId >= 1 )
        v30 = v27;
      else
        v30 = 0;
      if ( favoriteUserSvtId < 1 )
      {
        v32 = 0;
        v30 = this;
        if ( !this )
          goto LABEL_199;
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsOrganization(type, 0);
        if ( ((unsigned __int8)baseObject & 1) != 0 )
        {
          kind = this->fields.kind;
          if ( kind == 3 )
          {
            v32 = 0;
            if ( !v30 )
              goto LABEL_199;
          }
          else
          {
            v32 = kind != 12;
            if ( !v30 )
              goto LABEL_199;
          }
        }
        else
        {
          v32 = 0;
          v30 = v27;
          if ( !v27 )
            goto LABEL_199;
        }
      }
    }
    else
    {
      v32 = 0;
      v30 = this;
    }
    v30->fields.isUseFavorite = v32;
    v33 = SvtType__IsOrganization(type, 0) && this->fields.kind != 12;
    this->fields.isUsePush = v33;
    baseObject = (UnityEngine_GameObject_o *)SvtType__IsEnemyCollectionDetail(type, 0);
    if ( ((unsigned __int8)baseObject & 1) != 0 )
    {
      v23 = 0;
      v24 = 28;
    }
    else
    {
      baseObject = (UnityEngine_GameObject_o *)SvtType__IsServantEquip(type, 0);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        v60 = this->fields.kind;
        switch ( v60 )
        {
          case 3:
          case 12:
            v23 = 0;
            v24 = 12;
            break;
          case 4:
          case 13:
            v23 = 0;
            v24 = 13;
            break;
          case 5:
          case 14:
            v23 = 0;
            v24 = 14;
            break;
          case 6:
          case 15:
            v23 = 0;
            v24 = 15;
            break;
          case 7:
          case 16:
            v23 = 0;
            v24 = 16;
            break;
          case 8:
          case 17:
            v23 = 0;
            v24 = 17;
            break;
          case 9:
          case 18:
            v23 = 0;
            v24 = 18;
            break;
          case 19:
            v23 = 0;
            v24 = 19;
            break;
          case 29:
          case 31:
            v23 = 0;
            v24 = 31;
            break;
          default:
            v99 = v60 == 33;
            v24 = 11;
            v23 = v99;
            break;
        }
      }
      else
      {
        baseObject = (UnityEngine_GameObject_o *)SvtType__IsServant(type, 0);
        if ( ((unsigned __int8)baseObject & 1) != 0 || (v76 = this->fields.kind, v76 == 36) )
        {
          v23 = 0;
          goto LABEL_64;
        }
        v23 = 0;
        if ( v76 == 29 )
          v24 = 30;
        else
          v24 = 10;
      }
    }
  }
  this->fields.kind = v24;
LABEL_64:
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_199;
  max_length_low = LODWORD(tabInitList->max_length);
  v36 = 0;
  m_Items = tabInitList->m_Items;
  do
  {
    if ( v36 >= max_length_low )
      sub_1CE6960(baseObject);
    m_Items[v36++] = 0;
  }
  while ( v36 != 4 );
  v38 = this->fields.mainInfo;
  if ( !v38 )
    goto LABEL_199;
  if ( v38->fields.userSvtCollectionEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantCommentMaster___);
    v39 = this->fields.mainInfo;
    if ( !v39 )
      goto LABEL_199;
    baseSvtEntity = v39->fields.baseSvtEntity;
    if ( !baseSvtEntity )
      goto LABEL_199;
    v41 = (ServantCommentMaster_o *)baseObject;
    v43 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
    v42 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v100.fields.currentCryptoKey = v43;
    *(_QWORD *)&v100.fields.fakeValue = v42;
    baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                               v100,
                                               0);
    if ( !v41 )
      goto LABEL_199;
    NewProfileEntities = ServantCommentMaster__GetNewProfileEntities(v41, (int32_t)baseObject, 0);
    this->fields.newProfileList = NewProfileEntities;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.newProfileList,
      (int32_t)NewProfileEntities,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    newProfileList = this->fields.newProfileList;
    if ( !newProfileList )
      goto LABEL_199;
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_199;
    ShiningIconComponent__Set_42252400((ShiningIconComponent_o *)baseObject, newProfileList->fields._size > 0, 0);
  }
  else
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.profileNewIcon;
    if ( !baseObject )
      goto LABEL_199;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)baseObject, 0);
  }
  ServantStatusDialog__SetProfileTabBadgeIcon(this, v52);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_199;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)baseObject, 0, 1, 0, 0, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !baseObject )
    goto LABEL_199;
  TitleInfoControl__changeTitleInfo_41045104((TitleInfoControl_o *)baseObject, 1, 0, 0, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
  if ( !baseObject )
    goto LABEL_199;
  DetailName = ServantStatusListViewItem__GetDetailName((ServantStatusListViewItem_o *)baseObject, 0);
  ServantStatusDialog__SetDetailName(this, DetailName, v54);
  baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
  if ( !baseObject )
    goto LABEL_199;
  if ( baseObject[7].fields.m_CachedPtr )
  {
    servantClassNameLabel = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(servantClassNameLabel, 0, 0) )
      goto LABEL_108;
    v56 = this->fields.servantClassNameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v57 = &StringLiteral_12033/*"SERVANT_STATUS_CLASS_NAME_COMMAND_CODE"*/;
    goto LABEL_106;
  }
  ServantEntity = ServantStatusListViewItem__GetServantEntity((ServantStatusListViewItem_o *)baseObject, 0, 0);
  if ( ServantEntity )
    IsServantEquip = ServantEntity__get_IsServantEquip(ServantEntity, 0);
  else
    IsServantEquip = 0;
  v61 = (UnityEngine_Object_o *)this->fields.servantClassNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v61, 0, 0);
  if ( !IsServantEquip )
  {
    if ( ((unsigned __int8)baseObject & 1) == 0 )
      goto LABEL_150;
    v66 = this->fields.mainInfo;
    if ( !v66 )
      goto LABEL_199;
    if ( v66->fields._IsGrandServant_k__BackingField )
    {
      baseObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v66 = this->fields.mainInfo;
        if ( !v66 )
          goto LABEL_199;
        baseObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      v67 = v66->fields.svtEntity;
      if ( !v67 )
        goto LABEL_199;
      baseObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Contains_int_(
                                                 *(System_Collections_Generic_IEnumerable_TSource__o **)(baseObject[7].fields.m_CachedPtr + 1216),
                                                 v67->fields.classId,
                                                 (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)baseObject & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        v68 = this->fields.mainInfo;
        if ( !v68 )
          goto LABEL_199;
        v69 = v68->fields.svtEntity;
        if ( !v69 )
          goto LABEL_199;
        if ( !baseObject )
          goto LABEL_199;
        GrandClassId = GrandGraphDetailMaster__GetGrandClassId(
                         (GrandGraphDetailMaster_o *)baseObject,
                         v69->fields.classId,
                         0);
        baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !baseObject )
          goto LABEL_199;
        baseObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
                                                   GrandClassId,
                                                   (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
        if ( !baseObject || !this->fields.servantClassNameLabel )
          goto LABEL_199;
        klass = (System_String_o *)baseObject[1].klass;
        v72 = this->fields.servantClassNameLabel;
        goto LABEL_149;
      }
      v66 = this->fields.mainInfo;
      if ( !v66 )
        goto LABEL_199;
    }
    baseObject = (UnityEngine_GameObject_o *)v66->fields.svtEntity;
    if ( !baseObject )
      goto LABEL_199;
    v77 = this->fields.servantClassNameLabel;
    baseObject = (UnityEngine_GameObject_o *)ServantEntity__getClassName((ServantEntity_o *)baseObject, 0);
    if ( !v77 )
      goto LABEL_199;
    klass = (System_String_o *)baseObject;
    v72 = v77;
LABEL_149:
    UILabel__set_text(v72, klass, 0);
LABEL_150:
    battleExplanationLabel = (UnityEngine_Object_o *)this->fields.battleExplanationLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(battleExplanationLabel, 0, 0) )
      goto LABEL_108;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v79 = this->fields.mainInfo;
    if ( v79 )
    {
      if ( v79->fields.userSvtEntity )
      {
        v80 = (ServantLimitImageMaster_o *)baseObject;
        ServantStatusDialog__SetBattleCharaTabExplanation(this, method);
        v81 = this->fields.mainInfo;
        if ( !v81 )
          goto LABEL_199;
        v82 = v81->fields.svtEntity;
        if ( !v82 )
          goto LABEL_199;
        v84 = *(_QWORD *)&v82->fields.id.fields.currentCryptoKey;
        v83 = *(_QWORD *)&v82->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v101.fields.currentCryptoKey = v84;
        *(_QWORD *)&v101.fields.fakeValue = v83;
        baseObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                   v101,
                                                   0);
        if ( !v80 )
          goto LABEL_199;
        v85 = (int)baseObject;
        if ( !ServantLimitImageMaster__IsServantLimitCountSeal(v80, (int32_t)baseObject, 3, 0) )
          goto LABEL_181;
        baseObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantStatusExplanationText(
                                                   v80,
                                                   (System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_BATTLE_EXPLANATION_LIMIT_COUNT_SEALED_MSG"*/,
                                                   v85,
                                                   0);
        v86 = this->fields.battleExplanationLabel;
        if ( !v86 )
          goto LABEL_199;
        mText = v86->fields.mText;
        v88 = (System_String_o *)baseObject;
        LimitCountSealedServantName = (Il2CppObject *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        v80,
                                                        v85,
                                                        3,
                                                        0,
                                                        0,
                                                        0);
        v90 = System_String__Format(v88, LimitCountSealedServantName, 0);
        v91 = System_String__Concat_65122828(mText, v90, 0);
        v92 = v86;
      }
      else
      {
        userSvtCollectionEntity = v79->fields.userSvtCollectionEntity;
        v94 = this->fields.battleExplanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( userSvtCollectionEntity )
          v95 = &StringLiteral_12026/*"SERVANT_STATUS_BATTLE_EXPLANATION2"*/;
        else
          v95 = &StringLiteral_12027/*"SERVANT_STATUS_BATTLE_EXPLANATION3"*/;
        baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v95, 0);
        if ( !v94 )
          goto LABEL_199;
        v91 = (System_String_o *)baseObject;
        v92 = v94;
      }
      UILabel__set_text(v92, v91, 0);
LABEL_181:
      baseObject = (UnityEngine_GameObject_o *)this->fields.mainInfo;
      if ( baseObject )
      {
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
                        v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
                        GameObjectExtensions__SetLocalPositionY(v98, 177.0, 0);
                        goto LABEL_108;
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
            goto LABEL_108;
          }
        }
      }
    }
LABEL_199:
    sub_1CE6958(baseObject, method);
  }
  if ( ((unsigned __int8)baseObject & 1) == 0 )
    goto LABEL_108;
  v56 = this->fields.servantClassNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = &StringLiteral_12034/*"SERVANT_STATUS_CLASS_NAME_SERVANT_EQUIP"*/;
LABEL_106:
  baseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v57, 0);
  if ( !v56 )
    goto LABEL_199;
  UILabel__set_text(v56, (System_String_o *)baseObject, 0);
LABEL_108:
  baseObject = (UnityEngine_GameObject_o *)this->fields.charaGraphListViewManager;
  if ( !baseObject )
    goto LABEL_199;
  ServantStatusCharaGraphListViewManager__CreateList(
    (ServantStatusCharaGraphListViewManager_o *)baseObject,
    this->fields.mainInfo,
    0);
  ServantStatusDialog__SetMark(this, v62);
  v64 = this->fields.kind;
  if ( v64 > 28 )
  {
    v65 = v64 - 30;
    if ( v65 < 7 )
    {
      v23 = dword_D583D0[v65];
      goto LABEL_134;
    }
LABEL_115:
    v23 = 0;
    goto LABEL_134;
  }
  if ( v64 == 10 )
  {
    v23 = 1;
    goto LABEL_134;
  }
  if ( v64 != 11 )
  {
    v23 = 1;
    if ( v64 != 28 )
      goto LABEL_115;
  }
LABEL_134:
  ServantStatusDialog__SetTabKind(this, v23, v63);
  v73 = this->fields.kind;
  if ( v73 - 10 < 0x13 || v73 <= 0x24 && ((1LL << v73) & 0x11C0000000LL) != 0 )
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6050/*"EndLoadInit"*/,
      0.1,
      0);
  }
  else
  {
    v74 = (System_Action_object__o *)sub_1CE694C(System_Action_AssetData__TypeInfo);
    System_Action_object____ctor(v74, (Il2CppObject *)this, Method_ServantStatusDialog__EndInitLoad_b__144_0__, 0);
    ServantStatusDialog__StartStatusLoad(this, (System_Action_AssetData__o *)v74, v75);
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_4064/*"CancelInput"*/, 0.0, 0);
}


void ServantStatusDialog__EndLoad(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4E0092E & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&StringLiteral_6050/*"EndLoadInit"*/);
    byte_4E0092E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__SetLoadMode(Instance, 0, 0);
  if ( this->fields.kind != 33 )
  {
    Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
    if ( Instance )
    {
      ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)Instance, 5, 0);
      Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
      if ( Instance )
      {
        ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)Instance, 3, 0);
        statusTabListViewManager = this->fields.statusTabListViewManager;
        v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
        ServantStatusListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0);
        if ( statusTabListViewManager )
        {
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    sub_1CE6958(Instance, v5);
  }
LABEL_9:
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6050/*"EndLoadInit"*/, 0.1, 0);
}


void ServantStatusDialog__EndLoadBattle(ServantStatusDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4E00932 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00932 = 1;
  }
  if ( this->fields.loadingBattleActorData )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1CE6958(0, v5);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    loadingBattleActorData = this->fields.loadingBattleActorData;
    this->fields.loadingBattleActorData = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadingBattleActorData, 0, v7, v8, v9, v10, v11, v12);
    ServantStatusDialog__PlayBattleEffect(this, loadingBattleActorData, v13);
  }
}


void ServantStatusDialog__EndLoadInit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4E0092A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog__EndLoadInit_b__148_0__);
    byte_4E0092A = 1;
  }
  v3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__148_0__, 0);
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
  const MethodInfo *v8; // x2
  System_String_o *DetailName; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4E00959 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00959 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 0, 0);
  tabInitList = this->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_22;
  if ( !LODWORD(tabInitList->max_length) )
    goto LABEL_23;
  tabInitList->m_Items[0] = 0;
  Instance = (CommonUI_o *)this->fields.statusTabListViewManager;
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
  if ( LODWORD(v7->max_length) <= 3 )
LABEL_23:
    sub_1CE6960(Instance);
  v7->m_Items[3] = 0;
  if ( this->fields.tabKind == 3 )
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
      ServantStatusDialog__SetDetailName(this, DetailName, v10);
      Instance = (CommonUI_o *)this->fields.charaGraphListViewManager;
      if ( Instance )
      {
        ServantStatusCharaGraphListViewManager__CreateList(
          (ServantStatusCharaGraphListViewManager_o *)Instance,
          this->fields.mainInfo,
          0);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1CE6958(Instance, v4);
  }
LABEL_21:
  ServantStatusDialog__SetTabKind(this, this->fields.tabKind, v8);
}


void ServantStatusDialog__EndLoadVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *loadVoiceData; // x1
  System_Collections_Generic_List_object__o *voiceDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Item; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_o *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_4E0093B & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1CE6700(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E0093B = 1;
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
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          voiceDataList->fields._size = size + 1;
          v14[4] = (Il2CppClass *)loadVoiceData;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)loadVoiceData, v2, v3, v4, v5, v6, v7);
        }
        this->fields.loadVoiceData = 0;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData, 0, v15, v16, v17, v18, v19, v20);
        voiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( voiceDataList )
        {
          if ( voiceDataList->fields._size < 1 )
          {
            voiceDataList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_string__get_Item__);
            this->fields.loadVoiceData = (struct System_String_o *)Item;
            sub_1CE66A4(
              (GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData,
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
                (const MethodInfo_390773C *)Method_System_Collections_Generic_List_string__RemoveAt__);
              v28 = this->fields.loadVoiceData;
              v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__loadAudioAssetStorage(v28, v29, 1, 0);
              return;
            }
          }
        }
      }
    }
    sub_1CE6958(voiceDataList, loadVoiceData);
  }
}


void ServantStatusDialog__EndOpenCommandCodeStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1CE6958(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndOpenEquipStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1CE6958(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantStatusDialog__EndPlayVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ServantVoiceData_array *voicePlayList; // x8
  int32_t v18; // w9
  int32_t max_length; // w10
  ServantVoiceData_o *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4E0093F & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_6081/*"EndWaitVoice"*/);
    byte_4E0093F = 1;
  }
  this->fields.voicePlayer = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer, 0, v2, v3, v4, v5, v6, v7);
  voicePlayList = this->fields.voicePlayList;
  if ( voicePlayList )
  {
    v18 = this->fields.voicePlayNum + 1;
    this->fields.voicePlayNum = v18;
    max_length = voicePlayList->max_length;
    if ( v18 < max_length )
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1CE6960(voiceTabListViewManager);
      v20 = voicePlayList->m_Items[v18];
      if ( v20 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6081/*"EndWaitVoice"*/,
          v20->fields.delay,
          0);
        return;
      }
LABEL_18:
      sub_1CE6958(voiceTabListViewManager, v10);
    }
    if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
    {
      voiceTabListViewManager = this->fields.voiceTabListViewManager;
      if ( !voiceTabListViewManager )
        goto LABEL_18;
      ServantStatusVoiceListViewManager__SetMode_39281052(voiceTabListViewManager, 2, -1, 0);
      this->fields.voiceListIndex = -1;
    }
    this->fields.voicePlayList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList, 0, v11, v12, v13, v14, v15, v16);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName, 0, v21, v22, v23, v24, v25, v26);
  }
  else if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_18;
    ServantStatusVoiceListViewManager__SetMode_39281052(voiceTabListViewManager, 2, -1, 0);
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

  if ( (byte_4E00955 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4E00955 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1CBC788(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CBC788(v3);
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
  v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !v10 )
LABEL_13:
    sub_1CE6958(statusTabListViewManager, isDecide);
  ServantStatusListViewManager__SetMode(v10, 1, v11, 0);
}


void ServantStatusDialog__EndWaitVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x0

  v8 = this;
  if ( (byte_4E0093E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndPlayVoice__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E0093E = 1;
  }
  voicePlayList = v8->fields.voicePlayList;
  if ( voicePlayList )
  {
    voicePlayNum = v8->fields.voicePlayNum;
    max_length = voicePlayList->max_length;
    if ( (int)voicePlayNum < max_length )
    {
      if ( (unsigned int)voicePlayNum >= max_length )
        sub_1CE6960(this);
      v12 = voicePlayList->m_Items[voicePlayNum];
      if ( v12 )
      {
        voicePlayAssetName = v8->fields.voicePlayAssetName;
        id = v12->fields.id;
        v15 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v15 = SoundManager_TypeInfo;
        }
        DEFAULT_VOLUME = v15->static_fields->DEFAULT_VOLUME;
        v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)v8, Method_ServantStatusDialog_EndPlayVoice__, 0);
        v18 = SoundManager__playVoice_42673536(voicePlayAssetName, id, DEFAULT_VOLUME, v17, 0, 0);
        p_voicePlayer = (GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayer;
        v8->fields.voicePlayer = v18;
        goto LABEL_16;
      }
LABEL_17:
      sub_1CE6958(this, method);
    }
    if ( v8->fields.tabKind == 3 && (v8->fields.voiceListIndex & 0x80000000) == 0 )
    {
      this = (ServantStatusDialog_o *)v8->fields.voiceTabListViewManager;
      if ( !this )
        goto LABEL_17;
      ServantStatusVoiceListViewManager__SetMode_39281052((ServantStatusVoiceListViewManager_o *)this, 2, -1, 0);
      v8->fields.voiceListIndex = -1;
    }
    v8->fields.voicePlayList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayList, 0, v2, v3, v4, v5, v6, v7);
    p_voicePlayer = (GrandQuestFolderBoardItem_o *)&v8->fields.voicePlayAssetName;
    LODWORD(v18) = 0;
    v8->fields.voicePlayNum = 0;
    v8->fields.voicePlayAssetName = 0;
LABEL_16:
    sub_1CE66A4(p_voicePlayer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
}


void ServantStatusDialog__EndeCardFavoriteRequest(
        ServantStatusDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v3; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v5; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  ServantStatusDialog_o *v8; // x20
  struct ServantStatusListViewItem_o *v9; // x8
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q0
  ServantStatusDialog_o *v12; // x20
  struct ServantStatusListViewItem_o *v13; // x8
  ServantStatusDialog_o *v14; // x22
  int32_t DispLimitCountStageSealAfter; // w0
  int32_t v16; // w20
  int32_t v17; // w0
  struct ServantStatusListViewItem_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w21
  __int64 v21; // x23
  __int64 v22; // x24
  ServantStatusDialog_o *v23; // x23
  int32_t LimitCount; // w0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v26; // w9
  struct ServantStatusListViewItem_o *v27; // x8
  ServantStatusDialog_o *v28; // x22
  struct ServantStatusListViewItem_o *v29; // x8
  ServantStatusDialog_o *v30; // x23
  struct ServantStatusListViewItem_o *v31; // x8
  struct ServantStatusListViewItem_o *v32; // x8
  ServantOverwriteStatus_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-70h]
  TreasureDvcInfo_o *v37; // [xsp+60h] [xbp-50h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v3 = this;
  if ( (byte_4E00952 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00952 = 1;
  }
  entity = 0;
  v37 = 0;
  tdInfo = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_66;
  if ( !mainInfo->fields.userSvtEntity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v5 = v3->fields.mainInfo;
  if ( !v5 )
    goto LABEL_66;
  userSvtEntity = v5->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_66;
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v8 = this;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = v36;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v35, 0);
  if ( !v8 )
    goto LABEL_66;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
          &entity,
          (int64_t)this,
          (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    v9 = v3->fields.mainInfo;
    if ( !v9 )
      goto LABEL_66;
    v10 = v9->fields.userSvtEntity;
    if ( !v10 )
      goto LABEL_66;
    v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
    v12 = this;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v36;
    this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v34, 0);
    if ( !v12 )
      goto LABEL_66;
    DataMasterBase_object__object__long___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
      &entity,
      (int64_t)this,
      (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  }
  if ( !entity )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)UserServantEntity__GetServantEntity((UserServantEntity_o *)entity, -1, 0);
  v13 = v3->fields.mainInfo;
  if ( !v13 )
    goto LABEL_66;
  v14 = this;
  this = (ServantStatusDialog_o *)v13->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
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
    goto LABEL_66;
  v16 = (int)this;
  v17 = UserServantEntity__GetDispLimitCountStageSealAfter((UserServantEntity_o *)entity, -1, 0, 0, 0);
  this = (ServantStatusDialog_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(v17, 0);
  v18 = v3->fields.mainInfo;
  if ( !v18 )
    goto LABEL_66;
  v19 = v18->fields.userSvtEntity;
  if ( !v19 )
    goto LABEL_66;
  v20 = (int)this;
  v22 = *(_QWORD *)&v19->fields.transformVal.fields.currentCryptoKey;
  v21 = *(_QWORD *)&v19->fields.transformVal.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v22;
  *(_QWORD *)&v40.fields.fakeValue = v21;
  this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v40, 0);
  if ( !entity )
    goto LABEL_66;
  if ( (_DWORD)this != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[24],
                         0) )
  {
LABEL_64:
    v3->fields.isNeedSort = 1;
    goto LABEL_65;
  }
  if ( v16 == v20 )
    goto LABEL_65;
  this = (ServantStatusDialog_o *)v3->fields.mainInfo;
  if ( !this
    || (this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_LimitCount(
                                          (ServantStatusListViewItem_o *)this,
                                          0),
        !v14)
    || (this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v14, (int32_t)this, v16, 0),
        !v3->fields.mainInfo)
    || (v23 = this,
        LimitCount = ServantStatusListViewItem__get_LimitCount(v3->fields.mainInfo, 0),
        this = (ServantStatusDialog_o *)ServantEntity__getIndividuality((ServantEntity_o *)v14, LimitCount, v20, 0),
        !v23)
    || !this )
  {
LABEL_66:
    sub_1CE6958(this, result);
  }
  m_CancellationTokenSource = v23->fields.m_CancellationTokenSource;
  if ( (_DWORD)m_CancellationTokenSource != LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  if ( v23 != this && m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( (_DWORD)m_CancellationTokenSource == v26 )
        sub_1CE6960(this);
      if ( *((_DWORD *)&v23->fields.CHARA_BASE_POSITION.fields.x + v26) != *((_DWORD *)&this->fields.CHARA_BASE_POSITION.fields.x
                                                                           + v26) )
        break;
      if ( (_DWORD)m_CancellationTokenSource == ++v26 )
        goto LABEL_45;
    }
LABEL_44:
    v3->fields.isNeedSort = 1;
  }
LABEL_45:
  if ( v3->fields.isNeedSort )
    goto LABEL_65;
  v27 = v3->fields.mainInfo;
  if ( !v27 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)v27->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)this, v16, -1, 1, -1, 0);
  if ( !entity )
    goto LABEL_66;
  v28 = this;
  this = (ServantStatusDialog_o *)UserServantEntity__getSkillIdList((UserServantEntity_o *)entity, v20, -1, 1, -1, 0);
  v29 = v3->fields.mainInfo;
  if ( !v29 )
    goto LABEL_66;
  v30 = this;
  this = (ServantStatusDialog_o *)v29->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)this, &tdInfo, -1, v16, 0, 0);
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_66;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)entity, &v37, -1, v20, 0, 0);
  this = (ServantStatusDialog_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                    (const MethodInfo_323D608 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( ((unsigned __int8)this & 1) == 0 )
    v3->fields.isNeedSort = 1;
  if ( !tdInfo || !v37 )
    goto LABEL_66;
  if ( tdInfo->fields.id != v37->fields.id )
    goto LABEL_64;
  if ( v3->fields.isNeedSort )
    goto LABEL_65;
  v31 = v3->fields.mainInfo;
  if ( !v31 )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)v31->fields.userSvtEntity;
  if ( !this )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                    (UserServantEntity_o *)this,
                                    v31->fields.questRestrictionInfo,
                                    0);
  v32 = v3->fields.mainInfo;
  if ( !v32 )
    goto LABEL_66;
  v33 = (ServantOverwriteStatus_o *)this;
  this = (ServantStatusDialog_o *)entity;
  if ( !entity )
    goto LABEL_66;
  this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                    (UserServantEntity_o *)entity,
                                    v32->fields.questRestrictionInfo,
                                    0);
  if ( !v33 )
    goto LABEL_66;
  if ( !ServantOverwriteStatus__IsEqualForSort(v33, (ServantOverwriteStatus_o *)this, 0) )
    goto LABEL_64;
LABEL_65:
  ServantStatusDialog__EndeRequest(v3, (const MethodInfo *)result);
}


void ServantStatusDialog__EndeRequest(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x21
  UserServantEntity_c *v5; // x0
  UnityEngine_Object_o *battleActor; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  void *individualityCallbackFunc; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  _BOOL8 isModify; // x1
  __int64 isNeedSort; // x2
  struct ServantStatusDialog_ResultDelegate_o *resultCallbackFunc; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct ServantStatusDialog_EndDelegate_o *callbackFunc; // x20

  v2 = this;
  if ( (byte_4E00953 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1CE6700(&UserServantEntity_TypeInfo);
    byte_4E00953 = 1;
  }
  mainInfo = v2->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_23;
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    v5 = UserServantEntity_TypeInfo;
    if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v5 = UserServantEntity_TypeInfo;
    }
    userSvtEntity->fields.dispLimitCountAfter = v5->static_fields->InitDispLimitCountAfter;
  }
  battleActor = (UnityEngine_Object_o *)v2->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v2->fields.battleActor;
    if ( this )
    {
      BattleFBXComponent__RevertShaderFloatProperty((BattleFBXComponent_o *)this, 0);
      goto LABEL_13;
    }
LABEL_23:
    sub_1CE6958(this, method);
  }
LABEL_13:
  individualityCallbackFunc = v2->fields.individualityCallbackFunc;
  if ( individualityCallbackFunc )
  {
    v2->fields.individualityCallbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.individualityCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    v2->fields.resultCallbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.resultCallbackFunc, 0, v14, v15, v16, v17, v18, v19);
    v2->fields.callbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v20, v21, v22, v23, v24, v25);
    isModify = v2->fields.isModify;
    isNeedSort = v2->fields.isNeedSort;
LABEL_15:
    (*((void (__fastcall **)(_QWORD, _BOOL8, __int64, _QWORD))individualityCallbackFunc + 3))(
      *((_QWORD *)individualityCallbackFunc + 8),
      isModify,
      isNeedSort,
      *((_QWORD *)individualityCallbackFunc + 5));
    return;
  }
  resultCallbackFunc = v2->fields.resultCallbackFunc;
  if ( resultCallbackFunc )
  {
    v2->fields.resultCallbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.resultCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    v2->fields.callbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v29, v30, v31, v32, v33, v34);
    ((void (__fastcall *)(intptr_t, bool, bool, _QWORD, intptr_t))resultCallbackFunc->fields.invoke_impl)(
      resultCallbackFunc->fields.method_code,
      v2->fields.isModify,
      v2->fields.isNeedSort,
      (unsigned int)v2->fields.questId,
      resultCallbackFunc->fields.method);
  }
  else
  {
    individualityCallbackFunc = v2->fields.formationCallbackFunc;
    if ( individualityCallbackFunc )
    {
      v2->fields.formationCallbackFunc = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.formationCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
      isModify = v2->fields.isModify;
      isNeedSort = (unsigned int)v2->fields.questId;
      goto LABEL_15;
    }
    callbackFunc = v2->fields.callbackFunc;
    if ( callbackFunc )
    {
      v2->fields.callbackFunc = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.callbackFunc, 0, v7, v8, v9, v10, v11, v12);
      ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        v2->fields.isModify,
        callbackFunc->fields.method);
    }
  }
}


void ServantStatusDialog__Exit(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int64_t IsModifyLock; // x0
  const MethodInfo *v4; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UserServantEntity_o *userSvtEntity; // x0
  int32_t kind; // w9
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x0
  UserCommandCodeEntity_o *userCommandCodeEntity; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x0
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  int64_t userId; // x20
  _BOOL4 isModify; // w22
  int v14; // w22
  bool v15; // w0
  int v16; // w23
  int v17; // w23
  bool v18; // w0
  int v19; // w21
  int v20; // w21
  struct ServantStatusListViewItem_o *v21; // x8
  struct ServantStatusListViewItem_o *v22; // x8
  int32_t svtCommonFlag; // w26
  int v24; // w28
  struct ServantStatusListViewItem_o *v25; // x8
  int32_t changeVoiceFlag; // w27
  int v27; // w20
  struct ServantStatusListViewItem_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q0
  __int64 v31; // x22
  bool v32; // w21
  int v33; // w23
  struct ServantStatusListViewItem_o *v34; // x8
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  struct ServantStatusListViewItem_o *v36; // x8
  struct UserCommandCodeEntity_o *v37; // x8
  __int128 v38; // q0
  CommandCodeSetStatusRequest_o *v39; // x20
  struct ServantStatusListViewItem_o *v40; // x8
  struct ServantStatusListViewItem_o *v41; // x8
  struct UserServantEntity_o *v42; // x9
  int v43; // w24
  int32_t ModifyTransformVal_k__BackingField; // w29
  __int64 v45; // x22
  __int64 v46; // x25
  int32_t v47; // w25
  int32_t battleVoice; // w21
  _BOOL4 IsModifyFavoriteUserSvtId; // w22
  int32_t commonFlag; // w27
  int v51; // w26
  _BOOL4 IsModifyChoice; // w0
  NetworkManager_ResultCallbackFunc_o *v53; // x20
  struct ServantStatusListViewItem_o *v54; // x8
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  CardFavoriteRequest_o *v57; // x20
  struct ServantStatusListViewItem_o *v58; // x9
  bool isPush; // [xsp+9Ch] [xbp-F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+A0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+C0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+E0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+100h] [xbp-90h]
  ServantStatusListViewItem_LimitCountSetting_o *transformSetting; // [xsp+120h] [xbp-70h] BYREF
  ServantStatusListViewItem_LimitCountSetting_o *setting; // [xsp+128h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4E00951 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&OtherUserNewManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&ServantCommentManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndeCardFavoriteRequest__);
    sub_1CE6700(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1CE6700(&UserCommandCodeNewManager_TypeInfo);
    sub_1CE6700(&UserServantCollectionManager_TypeInfo);
    sub_1CE6700(&UserServantNewManager_TypeInfo);
    byte_4E00951 = 1;
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
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    OtherUserNewManager__SetOld(userId, 0);
  }
  isModify = this->fields.isModify;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  v14 = UserServantNewManager__WriteData(0) || isModify;
  this->fields.isModify = v14;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  v15 = UserServantCollectionManager__WriteData(0);
  v16 = v14 | v15;
  this->fields.isModify = v14 | v15;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  v17 = v16 | ServantCommentManager__WriteData(0);
  this->fields.isModify = v17;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  v18 = OtherUserNewManager__WriteData(0);
  v19 = v17 | v18;
  this->fields.isModify = v17 | v18;
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  v20 = v19 | UserCommandCodeNewManager__WriteData(0);
  this->fields.isModify = v20 != 0;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  IsModifyLock = UserCommandCodeCollectionManager__WriteData(0);
  v21 = this->fields.mainInfo;
  this->fields.isModify = (v20 != 0) | IsModifyLock & 1;
  if ( !v21 )
    goto LABEL_84;
  if ( !v21->fields.userSvtEntity )
  {
    if ( !v21->fields.userCommandCodeEntity )
      goto LABEL_72;
    IsModifyLock = ServantStatusListViewItem__get_IsModifyLock(v21, 0);
    if ( !this->fields.mainInfo )
      goto LABEL_84;
    if ( (((unsigned int)IsModifyLock | ServantStatusListViewItem__get_IsModifyChoice(this->fields.mainInfo, 0)) & 1) == 0 )
    {
LABEL_72:
      ServantStatusDialog__EndeRequest(this, v4);
      return;
    }
    this->fields.isModify = 1;
    v35 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_EndeCardFavoriteRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                              v35,
                              (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CommandCodeSetStatusRequest___);
    v36 = this->fields.mainInfo;
    if ( v36 )
    {
      v37 = v36->fields.userCommandCodeEntity;
      if ( v37 )
      {
        v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
        v39 = (CommandCodeSetStatusRequest_o *)IsModifyLock;
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v63.fields.fakeValue = v38;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v60 = v63;
        IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v60, 0);
        v40 = this->fields.mainInfo;
        if ( v40 )
        {
          if ( v39 )
          {
            CommandCodeSetStatusRequest__beginRequest(v39, IsModifyLock, v40->fields.isLock, v40->fields.isChoice, 0);
            return;
          }
        }
      }
    }
    goto LABEL_84;
  }
  IsModifyLock = ServantStatusListViewItem__get_IsModifySvtCommonFlag(v21, 0);
  v22 = this->fields.mainInfo;
  if ( !v22 )
    goto LABEL_84;
  svtCommonFlag = v22->fields.svtCommonFlag;
  v24 = IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyBattleVoice(this->fields.mainInfo, 0);
  v25 = this->fields.mainInfo;
  if ( !v25 )
    goto LABEL_84;
  changeVoiceFlag = v25->fields.changeVoiceFlag;
  v27 = IsModifyLock;
  IsModifyLock = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !IsModifyLock )
    goto LABEL_84;
  v28 = this->fields.mainInfo;
  if ( !v28 )
    goto LABEL_84;
  v29 = v28->fields.userSvtEntity;
  if ( !v29 )
    goto LABEL_84;
  v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
  v31 = *(_QWORD *)(IsModifyLock + 128);
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v62 = v63;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v62, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_84;
  v32 = v31 == IsModifyLock;
  IsModifyLock = ServantStatusListViewItem__IsModifyPushUserSvtId(this->fields.mainInfo, 0);
  v33 = IsModifyLock;
  if ( (IsModifyLock & 1) != 0 )
  {
    if ( this->fields.isUsePush )
    {
      v34 = this->fields.mainInfo;
      if ( !v34 )
        goto LABEL_84;
      v32 = v34->fields.pushUserSvtId != 0;
    }
    else
    {
      v32 = 0;
    }
  }
  IsModifyLock = (int64_t)this->fields.mainInfo;
  if ( !IsModifyLock )
    goto LABEL_84;
  IsModifyLock = ServantStatusListViewItem__CheckModifyAndGetLimitCountSetting(
                   (ServantStatusListViewItem_o *)IsModifyLock,
                   &setting,
                   &transformSetting,
                   0);
  v41 = this->fields.mainInfo;
  if ( !v41 )
    goto LABEL_84;
  v42 = v41->fields.userSvtEntity;
  if ( !v42 )
    goto LABEL_84;
  v43 = IsModifyLock;
  ModifyTransformVal_k__BackingField = v41->fields._ModifyTransformVal_k__BackingField;
  v46 = *(_QWORD *)&v42->fields.transformVal.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v42->fields.transformVal.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v46;
  *(_QWORD *)&v66.fields.fakeValue = v45;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v66, 0);
  isPush = v32;
  if ( this->fields.isUseFavorite )
  {
    IsModifyLock = (int64_t)this->fields.mainInfo;
    if ( !IsModifyLock )
      goto LABEL_84;
    battleVoice = changeVoiceFlag;
    IsModifyFavoriteUserSvtId = ServantStatusListViewItem__IsModifyFavoriteUserSvtId(
                                  (ServantStatusListViewItem_o *)IsModifyLock,
                                  0);
  }
  else
  {
    battleVoice = changeVoiceFlag;
    IsModifyFavoriteUserSvtId = 0;
  }
  IsModifyLock = (int64_t)this->fields.mainInfo;
  if ( !IsModifyLock )
    goto LABEL_84;
  commonFlag = svtCommonFlag;
  IsModifyLock = ServantStatusListViewItem__get_IsModifyLock((ServantStatusListViewItem_o *)IsModifyLock, 0);
  if ( !this->fields.mainInfo )
    goto LABEL_84;
  v51 = IsModifyLock;
  IsModifyChoice = ServantStatusListViewItem__get_IsModifyChoice(this->fields.mainInfo, 0);
  if ( ModifyTransformVal_k__BackingField == v47
    && ((v33 | v27 | v24 | v43 | IsModifyFavoriteUserSvtId | v51 | IsModifyChoice) & 1) == 0 )
  {
    goto LABEL_72;
  }
  this->fields.isModify = 1;
  v53 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v53,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_EndeCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  IsModifyLock = (int64_t)NetworkManager__getRequest_object_(
                            v53,
                            (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v54 = this->fields.mainInfo;
  if ( !v54 )
    goto LABEL_84;
  v55 = v54->fields.userSvtEntity;
  if ( !v55 )
    goto LABEL_84;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  v57 = (CardFavoriteRequest_o *)IsModifyLock;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v61 = v63;
  IsModifyLock = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v61, 0);
  if ( !setting || (v58 = this->fields.mainInfo) == 0 || !transformSetting || !v57 )
LABEL_84:
    sub_1CE6958(IsModifyLock, v4);
  CardFavoriteRequest__beginRequest_45315828(
    v57,
    IsModifyLock,
    setting->fields.imageLimitCount,
    setting->fields.dispLimitCount,
    setting->fields.commandCardLimitCount,
    setting->fields.iconLimitCount,
    setting->fields.portraitLimitCount,
    IsModifyFavoriteUserSvtId,
    v58->fields.isLock,
    v58->fields.isChoice,
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
    v58->fields._ModifyTransformVal_k__BackingField,
    0);
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
  System_String_o *ActorFolderName; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E00930 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_BattleActorData_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    byte_4E00930 = 1;
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
        v7 = sub_1CE694C(ServantStatusDialog_BattleActorData_TypeInfo),
        ServantStatusDialog_BattleActorData___ctor((ServantStatusDialog_BattleActorData_o *)v7, 0),
        !v7) )
  {
    sub_1CE6958(mainInfo, method);
  }
  *(_DWORD *)(v7 + 16) = v5;
  *(_DWORD *)(v7 + 20) = DispLimitCountStageSealAfterAtStageLimitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ActorFolderName = ServantAssetLoadManager__getActorFolderName(v5, DispLimitCountStageSealAfterAtStageLimitCount, 0);
  *(_QWORD *)(v7 + 24) = ActorFolderName;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)ActorFolderName, v9, v10, v11, v12, v13, v14);
  return (ServantStatusDialog_BattleActorData_o *)v7;
}


bool ServantStatusDialog__GetEnableBattleVoiceFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL8 v3; // x0

  v2 = this->fields.kind - 2;
  if ( v2 > 0x23 )
    LOBYTE(v3) = 1;
  else
    return (0x677FFFFFEuLL >> v2) & 1;
  return v3;
}


bool ServantStatusDialog__GetEnableTdSpeedFromKind(ServantStatusDialog_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL8 v3; // x0

  v2 = this->fields.kind - 2;
  if ( v2 > 0x23 )
    LOBYTE(v3) = 1;
  else
    return (0x677FFFFFEuLL >> v2) & 1;
  return v3;
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

  if ( (byte_4E00939 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_9592/*"NoblePhantasm_"*/);
    sub_1CE6700(&StringLiteral_4454/*"ChrVoice_"*/);
    sub_1CE6700(&StringLiteral_12897/*"Servants_"*/);
    byte_4E00939 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v10);
  }
  VoiceId = ServantLimitAddMaster__getVoiceId((ServantLimitAddMaster_o *)Instance, svtId, limitCount, 0);
  result = 0;
  v15 = VoiceId;
  if ( (unsigned int)assetType <= 2 )
  {
    v13 = (System_String_o **)off_4804278[assetType];
    v14 = System_Int32__ToString((int32_t)&v15, 0);
    return System_String__Concat_65122828(*v13, v14, 0);
  }
  return result;
}


void ServantStatusDialog__Init(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pushButton; // x20
  __int64 v4; // x1
  ServantStatusDialog_c *v5; // x0
  UnityEngine_GameObject_o *baseObject; // x0
  struct UICommonButton_o *v7; // x8
  ServantStatusDialog_c *v8; // x0
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *servantStatusBattleConfirmDialog; // x20
  System_Action_o *v12; // x20
  ServantStatusDialog_o *v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *Asset; // x0
  unsigned __int128 v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4E00921 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndInitLoad__);
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00921 = 1;
  }
  v16 = 0u;
  pushButton = (UnityEngine_Object_o *)this->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
  {
    v5 = ServantStatusDialog_TypeInfo;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
      v5 = ServantStatusDialog_TypeInfo;
    }
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                               v5->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                               (UnityEngine_Color_o *)&v16,
                                               0);
    v7 = this->fields.pushButton;
    if ( !v7 )
      goto LABEL_27;
    v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v16;
  }
  this->fields.isInitTab = 0;
  *(_WORD *)&this->fields.isModify = 256;
  *(_DWORD *)&this->fields.isExit = 0;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
  if ( !byte_4E0020A )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E0020A = 1;
  }
  v8 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v8 = ServantStatusDialog_TypeInfo;
  }
  v8->static_fields->_IsViewCharaGraph_k__BackingField = 0;
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  if ( this->fields.kind == 33 )
  {
    this->fields.needAutoScroll = 1;
    ServantStatusDialog__SetActiveInputLockPanel(this, 1, v9);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantStatusBattleConfirmDialog, 0, 0) )
  {
    baseObject = (UnityEngine_GameObject_o *)this->fields.servantStatusBattleConfirmDialog;
    if ( baseObject )
    {
      ServantStatusBattleConfirmDialog__Init((ServantStatusBattleConfirmDialog_o *)baseObject, 0);
      goto LABEL_26;
    }
LABEL_27:
    sub_1CE6958(baseObject, v4);
  }
LABEL_26:
  v12 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantStatusDialog_EndInitLoad__, 0);
  Asset = ServantStatusDialog__LoadAsset(v13, v12, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
}


void ServantStatusDialog__InitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *openCallbackFunc; // x20
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  ServantStatusCharaGraphListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  System_Action_o *v16; // x21

  if ( (byte_4E00946 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectCharaGraph__);
    sub_1CE6700(&Method_ServantStatusDialog__InitList_b__179_0__);
    byte_4E00946 = 1;
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallbackFunc->fields.invoke_impl)(
      openCallbackFunc->fields.method_code,
      openCallbackFunc->fields.method);
  }
  this->fields.isInit = 0;
  this->fields.isSceneActive = 0;
  charaGraphListViewManager = this->fields.charaGraphListViewManager;
  v11 = (ServantStatusCharaGraphListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusCharaGraphListViewManager_CallbackFunc_TypeInfo);
  ServantStatusCharaGraphListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectCharaGraph__,
    v12);
  if ( !charaGraphListViewManager )
    goto LABEL_10;
  ServantStatusCharaGraphListViewManager__SetMode(charaGraphListViewManager, 2, v11, 0);
  if ( this->fields.needAutoScroll )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    v16 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusDialog__InitList_b__179_0__, 0);
    if ( profileTabListViewManager )
    {
      ServantStatusFlavorTextListViewManager__DoAutoScroll(profileTabListViewManager, v16, 0);
      return;
    }
LABEL_10:
    sub_1CE6958(v13, v14);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E00922 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog__LoadAsset_d__140_TypeInfo);
    byte_4E00922 = 1;
  }
  v4 = sub_1CE694C(ServantStatusDialog__LoadAsset_d__140_TypeInfo);
  ServantStatusDialog__LoadAsset_d__140___ctor((ServantStatusDialog__LoadAsset_d__140_o *)v4, 0, 0);
  if ( !v4 )
    sub_1CE6958(v5, v6);
  *(_QWORD *)(v4 + 40) = callback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)callback, v7, v8, v9, v10, v11, v12);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusDialog_c *v21; // x0
  System_String_o *BattleCharaChangeConfirmLoadAssetPath; // x20
  ServantStatusDialog_c *v23; // x0
  System_String_o *v24; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x21

  if ( (byte_4E00923 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass141_0__LoadBattleCharaChangeConfirmAsset_b__0__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass141_0_TypeInfo);
    byte_4E00923 = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass141_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass141_0___ctor((ServantStatusDialog___c__DisplayClass141_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
    goto LABEL_21;
  v21 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v21 = ServantStatusDialog_TypeInfo;
  }
  BattleCharaChangeConfirmLoadAssetPath = v21->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
    sub_1CE6958(isExistAssetStorage, v7);
  }
  isExistAssetStorage = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !isExistAssetStorage )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)isExistAssetStorage, 1, 0);
  v23 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v23 = ServantStatusDialog_TypeInfo;
  }
  v24 = v23->static_fields->BattleCharaChangeConfirmLoadAssetPath;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass141_0__LoadBattleCharaChangeConfirmAsset_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v25, 1, 0, 0);
}


void ServantStatusDialog__LoadTransformedResource(ServantStatusDialog_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E00957 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_AssetData__TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog__LoadTransformedResource_b__201_0__);
    byte_4E00957 = 1;
  }
  v3 = (System_Action_object__o *)sub_1CE694C(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__201_0__,
    0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v3, v4);
}


void ServantStatusDialog__OnClickCancel(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4E00950 & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickCancel__);
    byte_4E00950 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantStatusDialog__Exit(this, v5);
  }
}


void ServantStatusDialog__OnClickChangeTransform(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantStatusListViewItem_o *v6; // x8

  if ( (byte_4E00956 & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickChangeTransform__);
    byte_4E00956 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_16;
    if ( !ServantStatusListViewItem__get_AnyTransformServant(mainInfo, 0) )
      return;
    v4 = Method_ServantStatusDialog_OnClickChangeTransform__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChangeTransform__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickChangeTransform__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo
      || (mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_IsSaveTransformServant(mainInfo, 0),
          (v6 = this->fields.mainInfo) == 0) )
    {
LABEL_16:
      sub_1CE6958(mainInfo, method);
    }
    if ( ((unsigned __int8)mainInfo & 1) != 0 )
      ServantStatusListViewItem__ChangeTransform(this->fields.mainInfo, 0);
    else
      v6->fields._IsTransformed_k__BackingField ^= 1u;
    ServantStatusDialog__LoadTransformedResource(this, method);
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
  if ( (byte_4E0096B & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickChangeVoice__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E0096B = 1;
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
          v8 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickChangeVoice__);
        v9 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        ServantStatusDialog__ChangeBattleVoice(v4, type, v10);
        return;
      }
      statusTabListViewManager = v4->fields.statusTabListViewManager;
      v7 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v4,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v7, 0);
        return;
      }
    }
    sub_1CE6958(this, *(_QWORD *)&type);
  }
}


void ServantStatusDialog__OnClickChoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4E0096E & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickChoice__);
    byte_4E0096E = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1CE6958(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeChoice(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickChoice__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickChoice__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickChoice__);
      v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
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

  if ( (byte_4E00961 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickCommand__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E00961 = 1;
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
        v6 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickCommand__);
      v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_39234740(mainInfo, 3, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_1CE6958(mainInfo, *(_QWORD *)&index);
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
  Il2CppObject *v20; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  System_Action_o *v22; // x23
  int32_t v23; // w1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v27; // x21
  bool v28; // w3
  CommonUI_o *v29; // x0
  CommandCodeEntity_o *v30; // x2

  v4 = this;
  if ( (byte_4E00964 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndOpenCommandCodeStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickCommandCodeShow__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectCommandCodeStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00964 = 1;
  }
  mainInfo = v4->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_27;
  userSvtCollectionEntity = mainInfo->fields.userSvtCollectionEntity;
  if ( userSvtCollectionEntity )
  {
    UserCommandCodeEntity = UserServantCollectionEntity__getUserCommandCodeEntity(userSvtCollectionEntity, index, 0);
    if ( UserCommandCodeEntity )
    {
      v8 = UserCommandCodeEntity;
      v9 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v10 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_ServantStatusDialog_OnSelectCommandCodeStatus__,
        0);
      v13 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenCommandCodeStatus__, 0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog_31935248((CommonUI_o *)Instance, 20, v8, v12, v13, 0);
        return;
      }
LABEL_27:
      sub_1CE6958(this, *(_QWORD *)&index);
    }
    goto LABEL_17;
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
        v17 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickCommandCodeShow__);
      v18 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      kind = v4->fields.kind;
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( kind == 4 )
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
        if ( !v20 )
          goto LABEL_27;
        v23 = 22;
      }
      else
      {
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog_OnSelectEquipStatus__,
          0);
        v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v4, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
        if ( !v20 )
          goto LABEL_27;
        if ( kind != 5 )
        {
          v23 = 25;
          v29 = (CommonUI_o *)v20;
          v30 = v16;
          v28 = 0;
          goto LABEL_26;
        }
        v23 = 23;
      }
      v28 = 1;
      v29 = (CommonUI_o *)v20;
      v30 = v16;
LABEL_26:
      CommonUI__OpenServantEquipStatusDialog_31935480(v29, v23, v30, v28, v21, v22, 0);
      return;
    }
  }
LABEL_17:
  v24 = Method_ServantStatusDialog_OnClickCommandCodeShow__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickCommandCodeShow__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickCommandCodeShow__);
  v25 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
  statusTabListViewManager = v4->fields.statusTabListViewManager;
  v27 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)v4,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_27;
  ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnClickFace(ServantStatusDialog_o *this, int32_t index, const MethodInfo *method)
{
  ServantStatusListViewManager_o *mainInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4E00962 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickFace__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E00962 = 1;
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
        v6 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickFace__);
      v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_39234740(mainInfo, 4, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_1CE6958(mainInfo, *(_QWORD *)&index);
  }
}


void ServantStatusDialog__OnClickFavorite(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v5; // q1
  int64_t favoriteUserSvtId; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  ServantStatusDialog_o *v11; // x23
  ServantEntity_o *ServantEntity; // x24
  ServantStatusDialog_o *v13; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v15; // x8
  System_String_o *v16; // x21
  __int64 v17; // x22
  int32_t m_CancellationTokenSource; // w25
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  ServantStatusDialog_o *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ServantStatusDialog_o *v32; // x25
  __int64 v33; // x24
  __int64 v34; // x25
  int32_t v35; // w0
  struct UISprite_o *statusTitleSprite; // x8
  int32_t v37; // w23
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  ServantStatusDialog_o *v44; // x23
  int32_t Rarity; // w0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  ServantStatusDialog_o *v52; // x23
  struct ServantStatusListViewItem_o *v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  ServantStatusDialog_o *v60; // x23
  struct ServantStatusListViewItem_o *v61; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  int32_t v63; // w23
  int32_t v64; // w0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  ServantStatusDialog_o *v71; // x20
  System_String_o *v72; // x20
  System_String_o *v73; // x0
  Il2CppObject *Instance; // x21
  System_String_o *v75; // x22
  System_String_o *v76; // x23
  System_String_o *v77; // x24
  CommonConfirmDialog_ClickDelegate_o *v78; // x25
  struct ServantStatusListViewItem_o *v79; // x20
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q0
  const MethodInfo *v82; // x1
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v2 = this;
  if ( (byte_4E0096F & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickFavorite__);
    sub_1CE6700(&Method_ServantStatusDialog_OnConfirmSelectFavorite__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_12060/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12058/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12057/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12061/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_12059/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    byte_4E0096F = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_79;
    if ( !mainInfo->fields.userGameEntity )
      return;
    userSvtEntity = mainInfo->fields.userSvtEntity;
    if ( !userSvtEntity )
      return;
    v5 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    favoriteUserSvtId = mainInfo->fields.favoriteUserSvtId;
    *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v86.fields.fakeValue = v5;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v85 = v86;
    if ( favoriteUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v85, 0) )
    {
      v7 = Method_ServantStatusDialog_OnClickFavorite__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickFavorite__);
      v8 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      return;
    }
    v9 = Method_ServantStatusDialog_OnClickFavorite__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickFavorite__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickFavorite__);
    v10 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    if ( favoriteUserSvtId <= 0 )
    {
      v79 = v2->fields.mainInfo;
      if ( v79 )
      {
        v80 = v79->fields.userSvtEntity;
        if ( v80 )
        {
          v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
          *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v86.fields.fakeValue = v81;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v86;
          v79->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v84, 0);
          ServantStatusDialog__SetMark(v2, v82);
          return;
        }
      }
      goto LABEL_79;
    }
    this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_79;
    this = (ServantStatusDialog_o *)DataMasterBase_object__object__long___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      favoriteUserSvtId,
                                      (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !this )
      goto LABEL_79;
    v11 = this;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)this, -1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !v2->fields.mainInfo )
      goto LABEL_79;
    v13 = this;
    this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_IsConvertOverwriteImage(v2->fields.mainInfo, 0);
    questRestrictionInfo = 0;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v15 = v2->fields.mainInfo;
      if ( !v15 )
        goto LABEL_79;
      questRestrictionInfo = v15->fields.questRestrictionInfo;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
    v17 = sub_1CE67A8(object___TypeInfo, 6);
    this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)v11,
                                      questRestrictionInfo,
                                      0);
    if ( !this )
      goto LABEL_79;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
    if ( !v17 )
LABEL_79:
      sub_1CE6958(this, method);
    v25 = this;
    if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_80;
      *(_QWORD *)(v17 + 32) = v25;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)v25, v19, v20, v21, v22, v23, v24);
      if ( !ServantEntity )
        goto LABEL_79;
      this = (ServantStatusDialog_o *)ServantEntity__getClassName(ServantEntity, 0);
      v32 = this;
      if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v17 + 24) <= 1u )
          goto LABEL_80;
        *(_QWORD *)(v17 + 40) = v32;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 40), (int32_t)v32, v26, v27, v28, v29, v30, v31);
        v34 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v33 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v34;
        *(_QWORD *)&v87.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v87, 0);
        statusTitleSprite = v11->fields.statusTitleSprite;
        *(_QWORD *)&v88.fields.fakeValue = v11->fields.profileTitleSprite;
        v37 = v35;
        *(_QWORD *)&v88.fields.currentCryptoKey = statusTitleSprite;
        this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v88, 0);
        if ( !v13 )
          goto LABEL_79;
        this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)v13,
                                          v37,
                                          (int32_t)this,
                                          1,
                                          1,
                                          0);
        v44 = this;
        if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v17 + 24) <= 2u )
            goto LABEL_80;
          *(_QWORD *)(v17 + 48) = v44;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 48), (int32_t)v44, v38, v39, v40, v41, v42, v43);
          this = (ServantStatusDialog_o *)v2->fields.mainInfo;
          if ( !this )
            goto LABEL_79;
          Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
          this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
          v52 = this;
          if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v17 + 24) <= 3u )
              goto LABEL_80;
            *(_QWORD *)(v17 + 56) = v52;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 56), (int32_t)v52, v46, v47, v48, v49, v50, v51);
            v53 = v2->fields.mainInfo;
            if ( !v53 )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)v53->fields.svtEntity;
            if ( !this )
              goto LABEL_79;
            this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
            v60 = this;
            if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v17 + 24) <= 4u )
                goto LABEL_80;
              *(_QWORD *)(v17 + 64) = v60;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 64), (int32_t)v60, v54, v55, v56, v57, v58, v59);
              this = (ServantStatusDialog_o *)v2->fields.mainInfo;
              if ( !this )
                goto LABEL_79;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                (ServantStatusListViewItem_o *)this,
                                                0);
              v61 = v2->fields.mainInfo;
              if ( !v61 )
                goto LABEL_79;
              v62 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v61->fields.userSvtEntity;
              if ( !v62 )
                goto LABEL_79;
              v63 = (int)this;
              v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v62[6], 0);
              this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                (ServantLimitImageMaster_o *)v13,
                                                v63,
                                                v64,
                                                1,
                                                1,
                                                0);
              v71 = this;
              if ( !this || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v17 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v17 + 24) > 5u )
                {
                  *(_QWORD *)(v17 + 72) = v71;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 72), (int32_t)v71, v65, v66, v67, v68, v69, v70);
                  this = (ServantStatusDialog_o *)System_String__Format_65164272(v16, (System_Object_array *)v17, 0);
                  if ( !v2->fields.mainInfo )
                    goto LABEL_79;
                  v72 = (System_String_o *)this;
                  if ( ServantStatusListViewItem__get_IsEventJoin(v2->fields.mainInfo, 0) )
                  {
                    this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                    if ( !this )
                      goto LABEL_79;
                    if ( !ServantStatusListViewItem__get_IsNoPeriod((ServantStatusListViewItem_o *)this, 0) )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                      v72 = System_String__Concat_65122828(v72, v73, 0);
                    }
                  }
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12061/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
                  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12058/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                  v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v78,
                    (Il2CppObject *)v2,
                    Method_ServantStatusDialog_OnConfirmSelectFavorite__,
                    0);
                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31919400(
                      (CommonUI_o *)Instance,
                      v75,
                      v72,
                      v76,
                      v77,
                      v78,
                      BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                      0,
                      0,
                      0);
                    return;
                  }
                  goto LABEL_79;
                }
LABEL_80:
                sub_1CE6960(this);
              }
            }
          }
        }
      }
    }
    v83 = sub_1CE697C();
    sub_1CE6828(v83, 0);
  }
}


void ServantStatusDialog__OnClickLock(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4E0096D & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickLock__);
    byte_4E0096D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      sub_1CE6958(0, method);
    if ( mainInfo->fields.userGameEntity && (mainInfo->fields.userSvtEntity || mainInfo->fields.userCommandCodeEntity) )
    {
      ServantStatusListViewItem__ChangeLock(mainInfo, 0);
      v4 = Method_ServantStatusDialog_OnClickLock__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickLock__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickLock__);
      v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
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

  if ( (byte_4E00963 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickPortrait__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E00963 = 1;
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
        v6 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickPortrait__);
      v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      mainInfo = this->fields.statusTabListViewManager;
      if ( !mainInfo )
        goto LABEL_14;
      ServantStatusListViewManager__SetMode_39234740(mainInfo, 6, 0);
    }
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
      return;
    }
LABEL_14:
    sub_1CE6958(mainInfo, *(_QWORD *)&index);
  }
}


void ServantStatusDialog__OnClickPush(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusDialog_o *v2; // x19
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantStatusListViewItem_o *v4; // x8
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v6; // q1
  int64_t pushUserSvtId; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ServantStatusListViewItem_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  ServantStatusDialog_o *v13; // x23
  ServantEntity_o *ServantEntity; // x24
  ServantStatusDialog_o *v15; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  struct ServantStatusListViewItem_o *v17; // x8
  System_String_o *v18; // x21
  __int64 v19; // x22
  int32_t m_CancellationTokenSource; // w25
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  ServantStatusDialog_o *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ServantStatusDialog_o *v34; // x25
  __int64 v35; // x24
  __int64 v36; // x25
  int32_t v37; // w0
  struct UISprite_o *statusTitleSprite; // x8
  int32_t v39; // w23
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  ServantStatusDialog_o *v46; // x23
  int32_t Rarity; // w0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  ServantStatusDialog_o *v54; // x23
  struct ServantStatusListViewItem_o *v55; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  ServantStatusDialog_o *v62; // x23
  struct ServantStatusListViewItem_o *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v64; // x8
  int32_t v65; // w23
  int32_t v66; // w0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  ServantStatusDialog_o *v73; // x20
  System_String_o *v74; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v76; // x22
  System_String_o *v77; // x23
  System_String_o *v78; // x24
  CommonConfirmDialog_ClickDelegate_o *v79; // x25
  struct ServantStatusListViewItem_o *v80; // x20
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v2 = this;
  if ( (byte_4E00971 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickPush__);
    sub_1CE6700(&Method_ServantStatusDialog_OnConfirmSelectPush__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4E00971 = 1;
  }
  if ( !v2->fields.isExit && !v2->fields.isInit )
  {
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_74;
    if ( !mainInfo->fields.userGameEntity || !mainInfo->fields.userSvtEntity )
      return;
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v4 = v2->fields.mainInfo;
    if ( !v4 )
      goto LABEL_74;
    userSvtEntity = v4->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_74;
    v6 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    pushUserSvtId = v4->fields.pushUserSvtId;
    *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v86.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v85 = v86;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v85, 0) )
    {
      v8 = Method_ServantStatusDialog_OnClickPush__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickPush__);
      v9 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      v10 = v2->fields.mainInfo;
      if ( v10 )
      {
        v10->fields.pushUserSvtId = 0;
LABEL_73:
        ServantStatusDialog__SetMark(v2, method);
        return;
      }
      goto LABEL_74;
    }
    v11 = Method_ServantStatusDialog_OnClickPush__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickPush__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickPush__);
    v12 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    if ( pushUserSvtId <= 0 )
    {
      v80 = v2->fields.mainInfo;
      if ( v80 )
      {
        v81 = v80->fields.userSvtEntity;
        if ( v81 )
        {
          v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
          *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v86.fields.fakeValue = v82;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v86;
          v80->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v84, 0);
          goto LABEL_73;
        }
      }
    }
    else
    {
      this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (ServantStatusDialog_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( this )
        {
          this = (ServantStatusDialog_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            pushUserSvtId,
                                            (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( this )
          {
            v13 = this;
            ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)this, -1, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (ServantStatusDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            if ( v2->fields.mainInfo )
            {
              v15 = this;
              this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_IsConvertOverwriteImage(
                                                v2->fields.mainInfo,
                                                0);
              questRestrictionInfo = 0;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v17 = v2->fields.mainInfo;
                if ( !v17 )
                  goto LABEL_74;
                questRestrictionInfo = v17->fields.questRestrictionInfo;
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
              v19 = sub_1CE67A8(object___TypeInfo, 6);
              this = (ServantStatusDialog_o *)UserServantEntity__GetOverwriteStatus(
                                                (UserServantEntity_o *)v13,
                                                questRestrictionInfo,
                                                0);
              if ( this )
              {
                m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
                if ( !Rarity_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                this = (ServantStatusDialog_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
                if ( v19 )
                {
                  v27 = this;
                  if ( !this
                    || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                  {
                    if ( !*(_DWORD *)(v19 + 24) )
                      goto LABEL_75;
                    *(_QWORD *)(v19 + 32) = v27;
                    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v27, v21, v22, v23, v24, v25, v26);
                    if ( !ServantEntity )
                      goto LABEL_74;
                    this = (ServantStatusDialog_o *)ServantEntity__getClassName(ServantEntity, 0);
                    v34 = this;
                    if ( !this
                      || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v19 + 24) <= 1u )
                        goto LABEL_75;
                      *(_QWORD *)(v19 + 40) = v34;
                      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 40), (int32_t)v34, v28, v29, v30, v31, v32, v33);
                      v36 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
                      v35 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v87.fields.currentCryptoKey = v36;
                      *(_QWORD *)&v87.fields.fakeValue = v35;
                      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v87, 0);
                      statusTitleSprite = v13->fields.statusTitleSprite;
                      *(_QWORD *)&v88.fields.fakeValue = v13->fields.profileTitleSprite;
                      v39 = v37;
                      *(_QWORD *)&v88.fields.currentCryptoKey = statusTitleSprite;
                      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                        v88,
                                                        0);
                      if ( !v15 )
                        goto LABEL_74;
                      this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)v15,
                                                        v39,
                                                        (int32_t)this,
                                                        1,
                                                        1,
                                                        0);
                      v46 = this;
                      if ( !this
                        || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v19 + 24) <= 2u )
                          goto LABEL_75;
                        *(_QWORD *)(v19 + 48) = v46;
                        sub_1CE66A4(
                          (GrandQuestFolderBoardItem_o *)(v19 + 48),
                          (int32_t)v46,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45);
                        this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                        if ( !this )
                          goto LABEL_74;
                        Rarity = ServantStatusListViewItem__get_Rarity((ServantStatusListViewItem_o *)this, 0);
                        this = (ServantStatusDialog_o *)Rarity__getRarityType(Rarity, 0);
                        v54 = this;
                        if ( !this
                          || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v19 + 24) <= 3u )
                            goto LABEL_75;
                          *(_QWORD *)(v19 + 56) = v54;
                          sub_1CE66A4(
                            (GrandQuestFolderBoardItem_o *)(v19 + 56),
                            (int32_t)v54,
                            v48,
                            v49,
                            v50,
                            v51,
                            v52,
                            v53);
                          v55 = v2->fields.mainInfo;
                          if ( !v55 )
                            goto LABEL_74;
                          this = (ServantStatusDialog_o *)v55->fields.svtEntity;
                          if ( !this )
                            goto LABEL_74;
                          this = (ServantStatusDialog_o *)ServantEntity__getClassName((ServantEntity_o *)this, 0);
                          v62 = this;
                          if ( !this
                            || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v19 + 24) <= 4u )
                              goto LABEL_75;
                            *(_QWORD *)(v19 + 64) = v62;
                            sub_1CE66A4(
                              (GrandQuestFolderBoardItem_o *)(v19 + 64),
                              (int32_t)v62,
                              v56,
                              v57,
                              v58,
                              v59,
                              v60,
                              v61);
                            this = (ServantStatusDialog_o *)v2->fields.mainInfo;
                            if ( !this )
                              goto LABEL_74;
                            this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_SvtId(
                                                              (ServantStatusListViewItem_o *)this,
                                                              0);
                            v63 = v2->fields.mainInfo;
                            if ( !v63 )
                              goto LABEL_74;
                            v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v63->fields.userSvtEntity;
                            if ( !v64 )
                              goto LABEL_74;
                            v65 = (int)this;
                            v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v64[6], 0);
                            this = (ServantStatusDialog_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                              (ServantLimitImageMaster_o *)v15,
                                                              v65,
                                                              v66,
                                                              1,
                                                              1,
                                                              0);
                            v73 = this;
                            if ( !this
                              || (this = (ServantStatusDialog_o *)sub_1CE683C(this, *(_QWORD *)(*(_QWORD *)v19 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v19 + 24) > 5u )
                              {
                                *(_QWORD *)(v19 + 72) = v73;
                                sub_1CE66A4(
                                  (GrandQuestFolderBoardItem_o *)(v19 + 72),
                                  (int32_t)v73,
                                  v67,
                                  v68,
                                  v69,
                                  v70,
                                  v71,
                                  v72);
                                v74 = System_String__Format_65164272(v18, (System_Object_array *)v19, 0);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                                v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                                v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                                v79 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                CommonConfirmDialog_ClickDelegate___ctor(
                                  v79,
                                  (Il2CppObject *)v2,
                                  Method_ServantStatusDialog_OnConfirmSelectPush__,
                                  0);
                                this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                  this = (ServantStatusDialog_o *)BalanceConfig_TypeInfo;
                                }
                                if ( Instance )
                                {
                                  CommonUI__OpenConfirmDialog_31919840(
                                    (CommonUI_o *)Instance,
                                    v76,
                                    v74,
                                    v77,
                                    v78,
                                    v79,
                                    LODWORD(this->fields.voiceButton[4].fields.specifyDisabledColor.fields.a),
                                    LODWORD(this->fields.voiceButton[4].fields.specifyHoverColor.fields.b),
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
                                goto LABEL_74;
                              }
LABEL_75:
                              sub_1CE6960(this);
                            }
                          }
                        }
                      }
                    }
                  }
                  v83 = sub_1CE697C();
                  sub_1CE6828(v83, 0);
                }
              }
            }
          }
        }
      }
    }
LABEL_74:
    sub_1CE6958(this, method);
  }
}


void ServantStatusDialog__OnClickRandomLimitCountSetting(
        ServantStatusDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  bool RandomLimitCountOwn; // w0

  if ( (byte_4E00968 & 1) == 0 )
  {
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    byte_4E00968 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v5 = Method_ServantStatusDialog_OnClickRandomLimitCountSetting__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickRandomLimitCountSetting__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickRandomLimitCountSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    RandomLimitCountOwn = 1;
    switch ( index )
    {
      case 0:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
        break;
      case 1:
      case 4:
        break;
      case 3:
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0);
        break;
      default:
        RandomLimitCountOwn = 0;
        break;
    }
    ServantStatusDialog__RandomLimitCountSettingResource(this, index < 3, RandomLimitCountOwn, index % 3, v7);
  }
}


void ServantStatusDialog__OnClickServantQuest(ServantStatusDialog_o *this, int32_t questId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x22
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t QuestType; // w23
  QuestEntity_o *v12; // x24
  System_String_o *v13; // x21
  Il2CppObject *MasterData_object; // x25
  Il2CppObject *BattleName; // x0
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  __int64 *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v22; // x21
  int32_t warId; // w20
  WarEntity_o *WarEntityByWarID; // x0
  bool IsFolder; // w22
  System_String_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E00965 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickServantQuest__);
    sub_1CE6700(&Method_ServantStatusDialog_OnConfirmServantQuest__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&StringLiteral_25514/*"{0}"*/);
    sub_1CE6700(&StringLiteral_12104/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12106/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12107/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/);
    sub_1CE6700(&StringLiteral_12100/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12109/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/);
    sub_1CE6700(&StringLiteral_12103/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/);
    sub_1CE6700(&StringLiteral_12108/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12105/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/);
    sub_1CE6700(&StringLiteral_12101/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12102/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/);
    byte_4E00965 = 1;
  }
  entity = 0;
  if ( !this->fields.resultCallbackFunc && !this->fields.formationCallbackFunc )
    goto LABEL_25;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( !QuestInfo )
  {
LABEL_25:
    v19 = Method_ServantStatusDialog_OnClickServantQuest__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickServantQuest__);
    v20 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
    statusTabListViewManager = this->fields.statusTabListViewManager;
    v22 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
    ServantStatusListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
      0);
    if ( statusTabListViewManager )
    {
      ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v22, 0);
      return;
    }
    goto LABEL_44;
  }
  v8 = QuestInfo;
  v9 = Method_ServantStatusDialog_OnClickServantQuest__;
  if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickServantQuest__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickServantQuest__);
  v10 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  QuestType = MapControl_QuestInfo__GetQuestType(v8, 0);
  Instance = MapControl_QuestInfo__GetMine(v8, 0);
  if ( !Instance )
    goto LABEL_44;
  v12 = (QuestEntity_o *)Instance;
  this->fields.questId = *((_DWORD *)Instance + 4);
  Instance = QuestEntity__getQuestName((QuestEntity_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_44;
  v13 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_25514/*"{0}"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = (void *)QuestEntity__getServantId(v12, 0);
    if ( !MasterData_object )
      goto LABEL_44;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)Instance,
                 (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_44;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0);
    v13 = System_String__Format(v13, BattleName, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !Instance )
LABEL_44:
    sub_1CE6958(Instance, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         questId,
         (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_44;
    if ( QuestExtensionEntity__IsSvtCoinQuest((QuestExtensionEntity_o *)entity, 0) )
    {
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_TITLE"*/, 0);
      v18 = &StringLiteral_12108/*"SERVANT_STATUS_SERVANT_QUEST_SVT_COIN_CONFIRM_MESSAGE"*/;
      goto LABEL_42;
    }
  }
  if ( QuestType == 3 )
  {
    warId = v8->fields.warId;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0);
    if ( WarEntityByWarID )
      IsFolder = WarEntity__IsFolder(WarEntityByWarID, 0);
    else
      IsFolder = 1;
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsFolder )
      {
LABEL_39:
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_TITLE"*/, 0);
        v18 = &StringLiteral_12104/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE_CONFIRM_MESSAGE"*/;
        goto LABEL_42;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsFolder )
        goto LABEL_39;
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_TITLE"*/, 0);
    v18 = &StringLiteral_12102/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/;
    goto LABEL_42;
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_TITLE"*/, 0);
  v18 = &StringLiteral_12106/*"SERVANT_STATUS_SERVANT_QUEST_RAINFORCEMENT_CONFIRM_MESSAGE"*/;
LABEL_42:
  v26 = v17;
  v27 = LocalizationManager__Get((System_String_o *)*v18, 0);
  v28 = System_String__Format(v27, (Il2CppObject *)v13, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnConfirmServantQuest__,
    0);
  if ( !v16 )
    goto LABEL_44;
  CommonUI__OpenConfirmDialog_31919400((CommonUI_o *)v16, v26, v28, v29, v30, v31, 26, 0, 0, 0);
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

  if ( (byte_4E00967 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickSupportLimitCount__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E00967 = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_12;
    ServantStatusListViewItem__SelectSupportLimitCountStageList(mainInfo, index, 0);
    v6 = Method_ServantStatusDialog_OnClickSupportLimitCount__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickSupportLimitCount__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickSupportLimitCount__);
    v7 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
    if ( !mainInfo
      || (ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)mainInfo, 8, 0),
          statusTabListViewManager = this->fields.statusTabListViewManager,
          v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
          ServantStatusListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0),
          !statusTabListViewManager) )
    {
LABEL_12:
      sub_1CE6958(mainInfo, *(_QWORD *)&index);
    }
    ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v9, 0);
  }
}


void ServantStatusDialog__OnClickTabBattle(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E0095C & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickTabBattle__);
    byte_4E0095C = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabBattle__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabBattle__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickTabBattle__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 2, v5);
  }
}


void ServantStatusDialog__OnClickTabProfile(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E0095B & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickTabProfile__);
    byte_4E0095B = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabProfile__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabProfile__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickTabProfile__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 1, v5);
  }
}


void ServantStatusDialog__OnClickTabStatus(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E0095A & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickTabStatus__);
    byte_4E0095A = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 0, v5);
  }
}


void ServantStatusDialog__OnClickTabVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E0095D & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantStatusDialog_OnClickTabVoice__);
    byte_4E0095D = 1;
  }
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    v3 = Method_ServantStatusDialog_OnClickTabVoice__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTabVoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickTabVoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantStatusDialog__SetTabKind(this, 3, v5);
  }
}


void ServantStatusDialog__OnClickTdSpeed(ServantStatusDialog_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x19
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ServantStatusListViewManager_o *statusTabListViewManager; // x19
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t TreasureDeviceSpeedSelect; // w20
  Il2CppObject *TDSpeedLocalization; // x20
  Il2CppObject *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  long double v23; // q0
  __int64 v24; // x8
  __int64 v25; // x0
  CommonUI_o *v26; // x22
  System_String_o *Empty; // x21
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25

  if ( (byte_4E00966 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnClickTdSpeed__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass216_0__OnClickTdSpeed_b__0__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass216_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12111/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12112/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12113/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/);
    byte_4E00966 = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass216_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass216_0___ctor((ServantStatusDialog___c__DisplayClass216_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = type;
  if ( !this->fields.isExit && !this->fields.isInit )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    if ( ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0) == *(_DWORD *)(v5 + 24) )
    {
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v15, 0);
        return;
      }
LABEL_24:
      sub_1CE6958(mainInfo, v7);
    }
    v16 = Method_ServantStatusDialog_OnClickTdSpeed__;
    if ( (*((_BYTE *)Method_ServantStatusDialog_OnClickTdSpeed__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnClickTdSpeed__);
    v17 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_24;
    TreasureDeviceSpeedSelect = ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(mainInfo, 0);
    if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    TDSpeedLocalization = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
                                            TreasureDeviceSpeedSelect,
                                            0);
    v20 = (Il2CppObject *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(*(_DWORD *)(v5 + 24), 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12113/*"SERVANT_STATUS_TD_SPEED_DIALOG_MESSAGE"*/, 0);
    v22 = System_String__Format_65164136(v21, TDSpeedLocalization, v20, 0);
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1CBC788(v23);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1CBC788(v23);
    v26 = **(CommonUI_o ***)(v25 + 184);
    Empty = string_TypeInfo->static_fields->Empty;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SERVANT_STATUS_TD_SPEED_DIALOG_DECIDE"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12111/*"SERVANT_STATUS_TD_SPEED_DIALOG_CANCEL"*/, 0);
    v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_ServantStatusDialog___c__DisplayClass216_0__OnClickTdSpeed_b__0__,
      0);
    if ( !v26 )
      goto LABEL_24;
    CommonUI__OpenConfirmDecideDlg(v26, Empty, v22, v28, v29, v30, 27, 0.0, 28.0, 0, 1, 0, 240, 0, 1, 0, 0, 0);
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
  if ( (byte_4E00970 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00970 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1CE6958(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.favoriteUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectFavorite__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v10, 0);
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
  if ( (byte_4E00972 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseConfirmSelectPush__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00972 = 1;
  }
  if ( isDecide )
  {
    mainInfo = v4->fields.mainInfo;
    if ( !mainInfo || (userSvtEntity = mainInfo->fields.userSvtEntity) == 0 )
LABEL_11:
      sub_1CE6958(this, isDecide);
    v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    mainInfo->fields.pushUserSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v11, 0);
    ServantStatusDialog__SetMark(v4, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_ServantStatusDialog_EndCloseConfirmSelectPush__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v10, 0);
}


void ServantStatusDialog__OnConfirmServantQuest(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v8; // x20
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  Il2CppObject *v15; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4E0096C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_ServantStatusDialog__OnConfirmServantQuest_b__222_0__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0096C = 1;
  }
  if ( !isDecide )
  {
    this->fields.questId = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v11, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v13, 0);
        return;
      }
    }
    goto LABEL_25;
  }
  v5 = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v5 )
    goto LABEL_25;
  CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)v5, (int32_t)v8, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E00980 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E00980 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusDialog__OnConfirmServantQuest_b__222_0__, 0);
  if ( !v15 )
LABEL_25:
    sub_1CE6958(v5, v6);
  CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0);
}


void ServantStatusDialog__OnEnable(ServantStatusDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4E00977 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_3072/*"Base/TitlePrefab/BackObj/BtnBg"*/);
    byte_4E00977 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  v5 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_3072/*"Base/TitlePrefab/BackObj/BtnBg"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( v5 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, 0);
      return;
    }
LABEL_9:
    sub_1CE6958(transform, v4);
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

  if ( (byte_4E0095E & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectBattle__);
    byte_4E0095E = 1;
  }
  if ( !this->fields.isExit )
  {
    battleTabListViewManager = this->fields.battleTabListViewManager;
    v6 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
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
      sub_1CE6958(mainInfo, v8);
    }
    if ( LODWORD(mainInfo->fields.partyItem) <= result )
      sub_1CE6960(mainInfo);
    if ( v9 != *((_DWORD *)&mainInfo->fields.memberItem + result) )
    {
      v10 = Method_ServantStatusDialog_OnSelectBattle__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectBattle__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnSelectBattle__);
      v11 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v10, v10[4]);
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

  if ( (byte_4E0094C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E0094C = 1;
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
    ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)gameObject, 7, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectCommandCodeStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1CE6958(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectEquipStatus(ServantStatusDialog_o *this, bool isDecide, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4E0094A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseSelectEquipStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E0094A = 1;
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
    ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)gameObject, 7, 0);
    this->fields.isModify = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseSelectEquipStatus__, 0);
  if ( !Instance )
LABEL_9:
    sub_1CE6958(gameObject, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void ServantStatusDialog__OnSelectFlavor(ServantStatusDialog_o *this, int32_t result, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4E0094E & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectFlavor__);
    byte_4E0094E = 1;
  }
  profileTabListViewManager = this->fields.profileTabListViewManager;
  v5 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
  ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantStatusDialog_OnSelectFlavor__,
    0);
  if ( !profileTabListViewManager )
    sub_1CE6958(v6, v7);
  ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__OnSelectStatus(
        ServantStatusDialog_o *this,
        int32_t result,
        int32_t id,
        const MethodInfo *method)
{
  ServantStatusDialog_o *v6; // x19
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21
  int32_t v9; // w8
  int v10; // w8
  struct ServantStatusListViewItem_o *mainInfo; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct ServantStatusListViewItem_o *v14; // x8
  int64_t equipTargetId1; // x21
  ServantStatusDialog_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22
  System_Action_o *v18; // x23
  CommonUI_o *v19; // x0
  int64_t v20; // x2
  ServantStatusDialog_EndDelegate_o *v21; // x4
  System_Action_o *v22; // x5
  bool v23; // w6
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int128 v26; // q1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t kind; // w24
  struct ServantStatusListViewItem_o *v30; // x8
  struct ServantLeaderInfo_o *v31; // x8
  EquipTargetInfo_o *v32; // x21
  ServantStatusDialog_o *v33; // x20
  ServantStatusDialog_EndDelegate_o *v34; // x22
  System_Action_o *v35; // x23
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 *v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w1
  struct ShiningIconComponent_o *v51; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v53; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v55; // x21
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  bool v58; // w21
  ServantStatusDialog_o *v59; // x22
  int64_t EquipIdByIndex; // x20
  ServantStatusDialog_EndDelegate_o *v61; // x23
  System_Action_o *v62; // x24
  ServantLeaderInfo_o *voiceTabBase; // x0
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int128 v65; // q1
  EquipTargetInfo_o *v66; // x20
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  int32_t v69; // w24
  Il2CppObject *v70; // x21
  ServantStatusListViewManager_o *v71; // x20
  ServantStatusListViewManager_CallbackFunc_o *v72; // x21
  struct ServantStatusListViewItem_o *v73; // x8
  struct ServantLeaderInfo_o *v74; // x8
  CommonUI_o *v75; // x0
  EquipTargetInfo_o *v76; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+40h] [xbp-60h]

  v6 = this;
  if ( (byte_4E00949 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndOpenEquipStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_Exit__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectEquipStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&StringLiteral_12874/*"ServantLvExceed"*/);
    sub_1CE6700(&StringLiteral_12878/*"ServantSkillCombine"*/);
    sub_1CE6700(&StringLiteral_12875/*"ServantNpCombine"*/);
    sub_1CE6700(&StringLiteral_4615/*"CommandCardEquip"*/);
    sub_1CE6700(&StringLiteral_12862/*"ServantEQCombine"*/);
    sub_1CE6700(&StringLiteral_12859/*"ServantCombine"*/);
    sub_1CE6700(&StringLiteral_6926/*"FriendshipExceed"*/);
    sub_1CE6700(&StringLiteral_12872/*"ServantLimitCountUp"*/);
    sub_1CE6700(&StringLiteral_2305/*"AppendSkillCombine"*/);
    sub_1CE6700(&StringLiteral_4616/*"CommandCardExceed"*/);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_2306/*"AppendSkillExchange"*/);
    byte_4E00949 = 1;
  }
  if ( !v6->fields.isExit )
  {
    if ( v6->fields.isInit )
    {
      statusTabListViewManager = v6->fields.statusTabListViewManager;
      v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v6,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v8, 0);
        return;
      }
      goto LABEL_111;
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
          goto LABEL_111;
        if ( mainInfo->fields.userSvtEntity && mainInfo->fields.equipTargetId1 >= 1 )
        {
          v12 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v12 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnSelectStatus__);
          v13 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v12, v12[4]);
          OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = v6->fields.mainInfo;
          if ( !v14 )
            goto LABEL_111;
          equipTargetId1 = v14->fields.equipTargetId1;
          v16 = this;
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v16 )
            goto LABEL_111;
          v19 = (CommonUI_o *)v16;
          v20 = equipTargetId1;
          v21 = v17;
          v22 = v18;
          v23 = 0;
LABEL_84:
          CommonUI__OpenServantEquipStatusDialog(v19, 11, v20, 1, v21, v22, v23, 0);
          return;
        }
        servantLeaderInfo = mainInfo->fields.servantLeaderInfo;
        if ( !servantLeaderInfo )
          goto LABEL_96;
        equipTarget1 = servantLeaderInfo->fields.equipTarget1;
        if ( !equipTarget1 )
          goto LABEL_96;
        v26 = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.fakeValue;
        *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&equipTarget1->fields.userSvtId.fields.currentCryptoKey;
        *(_OWORD *)&v79.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v78 = v79;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v78, 0) < 1 )
          goto LABEL_96;
        v27 = Method_ServantStatusDialog_OnSelectStatus__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnSelectStatus__);
        v28 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v27, v27[4]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
        kind = v6->fields.kind;
        if ( kind == 4 )
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v30 = v6->fields.mainInfo;
          if ( !v30 )
            goto LABEL_111;
          v31 = v30->fields.servantLeaderInfo;
          if ( !v31 )
            goto LABEL_111;
          v32 = v31->fields.equipTarget1;
          v33 = this;
          v34 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v34,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v35, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v33 )
            goto LABEL_111;
          v36 = 13;
        }
        else
        {
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v73 = v6->fields.mainInfo;
          if ( !v73 )
            goto LABEL_111;
          v74 = v73->fields.servantLeaderInfo;
          if ( !v74 )
            goto LABEL_111;
          v32 = v74->fields.equipTarget1;
          v33 = this;
          v34 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v34,
            (Il2CppObject *)v6,
            Method_ServantStatusDialog_OnSelectEquipStatus__,
            0);
          v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(v35, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
          if ( !v33 )
            goto LABEL_111;
          if ( kind == 5 )
            v36 = 14;
          else
            v36 = 16;
        }
        v75 = (CommonUI_o *)v33;
        v76 = v32;
        goto LABEL_110;
      case 2:
        ServantStatusDialog__OnClickCommand(v6, id, *(const MethodInfo **)&id);
        return;
      case 3:
        ServantStatusDialog__OnClickFace(v6, id, *(const MethodInfo **)&id);
        return;
      case 4:
        ServantStatusDialog__OnClickPortrait(v6, id, *(const MethodInfo **)&id);
        return;
      case 5:
        ServantStatusDialog__OnClickCommandCodeShow(v6, id, *(const MethodInfo **)&id);
        return;
      case 6:
        ServantStatusDialog__OnClickServantQuest(v6, id, *(const MethodInfo **)&id);
        return;
      case 7:
        ServantStatusDialog__OnClickTdSpeed(v6, id, *(const MethodInfo **)&id);
        return;
      case 8:
        ServantStatusDialog__OnClickChangeVoice(v6, id, *(const MethodInfo **)&id);
        return;
      case 9:
        ServantStatusDialog__OnClickSupportLimitCount(v6, id, *(const MethodInfo **)&id);
        return;
      case 10:
        ServantStatusDialog__OnClickRandomLimitCountSetting(v6, id, *(const MethodInfo **)&id);
        return;
      case 11:
        ServantStatusDialog__OnclickRandomLimitCountMask(v6, id, *(const MethodInfo **)&id);
        return;
      case 12:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_12859/*"ServantCombine"*/;
        goto LABEL_68;
      case 13:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v50 = StringLiteral_12862/*"ServantEQCombine"*/;
        this->fields.profileNewIcon = (struct ShiningIconComponent_o *)StringLiteral_12862/*"ServantEQCombine"*/;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.profileNewIcon, v50, v44, v45, v46, v47, v48, v49);
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        LODWORD(this->fields.statusTabListViewManager) = id & ~(id >> 31);
        goto LABEL_69;
      case 14:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_12878/*"ServantSkillCombine"*/;
        goto LABEL_68;
      case 15:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_12872/*"ServantLimitCountUp"*/;
        goto LABEL_68;
      case 16:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_6926/*"FriendshipExceed"*/;
        goto LABEL_68;
      case 17:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_4615/*"CommandCardEquip"*/;
        goto LABEL_68;
      case 18:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_4616/*"CommandCardExceed"*/;
        goto LABEL_68;
      case 19:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_2305/*"AppendSkillCombine"*/;
        goto LABEL_68;
      case 20:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_2306/*"AppendSkillExchange"*/;
        goto LABEL_68;
      case 21:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_12875/*"ServantNpCombine"*/;
        goto LABEL_68;
      case 22:
        this = (ServantStatusDialog_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this )
          goto LABEL_111;
        v43 = &StringLiteral_12874/*"ServantLvExceed"*/;
LABEL_68:
        v51 = (struct ShiningIconComponent_o *)*v43;
        this->fields.profileNewIcon = (struct ShiningIconComponent_o *)*v43;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&this->fields.profileNewIcon,
          (int32_t)v51,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
LABEL_69:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v53 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v53 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v53->static_fields->DEFAULT_FADE_TIME;
        v55 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v55, (Il2CppObject *)v6, Method_ServantStatusDialog_Exit__, 0);
        if ( !Instance )
          goto LABEL_111;
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v55, 0);
        return;
      case 24:
        this = (ServantStatusDialog_o *)v6->fields.mainInfo;
        if ( !this )
          goto LABEL_111;
        if ( !this->fields.baseObject )
          goto LABEL_86;
        if ( ServantStatusListViewItem__GetEquipIdByIndex((ServantStatusListViewItem_o *)this, id, 0) < 1 )
        {
          this = (ServantStatusDialog_o *)v6->fields.mainInfo;
          if ( !this )
            goto LABEL_111;
LABEL_86:
          voiceTabBase = (ServantLeaderInfo_o *)this->fields.voiceTabBase;
          if ( voiceTabBase )
          {
            EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(voiceTabBase, id, 0);
            if ( !EquipTargetInfoByEquipIdx )
              return;
            v65 = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.fakeValue;
            v66 = EquipTargetInfoByEquipIdx;
            *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&EquipTargetInfoByEquipIdx->fields.userSvtId.fields.currentCryptoKey;
            *(_OWORD *)&v79.fields.fakeValue = v65;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v77 = v79;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v77, 0) < 1 )
              return;
            v67 = Method_ServantStatusDialog_OnSelectStatus__;
            if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
              v67 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnSelectStatus__);
            v68 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v67, v67[4]);
            OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0, 0);
            v69 = v6->fields.kind;
            v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v69 == 4 )
            {
              v34 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v34,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v35, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v70 )
                goto LABEL_111;
              v36 = 13;
            }
            else
            {
              v34 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v34,
                (Il2CppObject *)v6,
                Method_ServantStatusDialog_OnSelectEquipStatus__,
                0);
              v35 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v35, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
              if ( !v70 )
                goto LABEL_111;
              if ( v69 == 5 )
                v36 = 14;
              else
                v36 = 16;
            }
            v75 = (CommonUI_o *)v70;
            v76 = v66;
LABEL_110:
            CommonUI__OpenServantEquipStatusDialog_31935016(v75, v36, v76, v34, v35, 0);
            return;
          }
LABEL_96:
          v71 = v6->fields.statusTabListViewManager;
          v72 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v72,
            (Il2CppObject *)v6,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( v71 )
          {
            ServantStatusListViewManager__SetMode(v71, 1, v72, 0);
            return;
          }
        }
        else
        {
          v56 = Method_ServantStatusDialog_OnSelectStatus__;
          if ( (*((_BYTE *)Method_ServantStatusDialog_OnSelectStatus__ + 83) & 2) != 0 )
            v56 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnSelectStatus__);
          v57 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v56, v56[4]);
          OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
          v58 = 0;
          if ( id == 1 )
          {
            this = (ServantStatusDialog_o *)v6->fields.mainInfo;
            if ( !this )
              goto LABEL_111;
            v58 = ServantStatusListViewItem__IsChangeFriendShipSvtEquipSkill((ServantStatusListViewItem_o *)this, 0);
          }
          this = (ServantStatusDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v6->fields.mainInfo )
          {
            v59 = this;
            EquipIdByIndex = ServantStatusListViewItem__GetEquipIdByIndex(v6->fields.mainInfo, id, 0);
            v61 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v61,
              (Il2CppObject *)v6,
              Method_ServantStatusDialog_OnSelectEquipStatus__,
              0);
            v62 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v62, (Il2CppObject *)v6, Method_ServantStatusDialog_EndOpenEquipStatus__, 0);
            if ( v59 )
            {
              v23 = v58;
              v19 = (CommonUI_o *)v59;
              v20 = EquipIdByIndex;
              v21 = v61;
              v22 = v62;
              goto LABEL_84;
            }
          }
        }
LABEL_111:
        sub_1CE6958(this, *(_QWORD *)&result);
      default:
        goto LABEL_96;
    }
  }
}


void ServantStatusDialog__OnSelectVoice(
        ServantStatusDialog_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x22
  ServantStatusVoiceListViewManager_CallbackFunc_o *v8; // x23
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *v13; // x23
  ServantStatusVoiceListViewItem_o *v14; // x25
  int32_t v15; // w22
  int32_t v16; // w21
  System_String_o *v17; // x24
  System_String_o *LabelName; // x0
  System_String_o *v19; // x24
  System_Collections_Generic_List_ServantVoiceData____o *HomeVoiceList; // x0
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  ServantVoiceMaster_o *v23; // x0
  int32_t v24; // w1
  System_String_o *v25; // x3
  System_Collections_Generic_List_ServantVoiceData____o *BattleVoiceList; // x0
  const MethodInfo *v27; // x5
  System_Collections_Generic_List_ServantVoiceData____o *NpVoiceList; // x0
  const MethodInfo *v29; // x5
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4E0094F & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E0094F = 1;
  }
  if ( !this->fields.isExit )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    v8 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    ServantStatusVoiceListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantStatusDialog_OnSelectVoice__,
      0);
    if ( !voiceTabListViewManager )
      goto LABEL_63;
    ServantStatusVoiceListViewManager__SetMode(voiceTabListViewManager, 1, v8, 0);
    if ( !this->fields.isInit )
    {
      if ( kind == 2 )
      {
        ServantStatusDialog__StopVoice(this, v11);
        return;
      }
      if ( kind == 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        v13 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        Instance = (DataManager_o *)this->fields.voiceTabListViewManager;
        if ( !Instance )
          goto LABEL_63;
        Instance = (DataManager_o *)ServantStatusVoiceListViewManager__GetItem(
                                      (ServantStatusVoiceListViewManager_o *)Instance,
                                      result,
                                      0);
        if ( !Instance )
          goto LABEL_63;
        v14 = (ServantStatusVoiceListViewItem_o *)Instance;
        v15 = ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId((ServantStatusVoiceListViewItem_o *)Instance, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
        if ( !MasterData_object )
          goto LABEL_63;
        v16 = (int)Instance;
        VoicePrefix = ServantLimitAddMaster__getVoicePrefix(
                        (ServantLimitAddMaster_o *)MasterData_object,
                        v15,
                        (int32_t)Instance,
                        0);
        v17 = System_Int32__ToString((int32_t)&VoicePrefix, 0);
        LabelName = ServantStatusVoiceListViewItem__get_LabelName(v14, 0);
        v19 = System_String__Concat_65161092(v17, (System_String_o *)StringLiteral_16258/*"_"*/, LabelName, 0);
        Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0);
        switch ( (int)Instance )
        {
          case 1:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getHomeVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 2:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondType(v14, 0);
            if ( (int)Instance <= 7 )
            {
              if ( (_DWORD)Instance != 7 )
                goto LABEL_53;
              if ( !v14->fields.voiceLabelSpecification )
              {
                if ( ServantStatusVoiceListViewItem__get_CondValue(v14, 0) == 1
                  || (Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0),
                      (_DWORD)Instance == 3) )
                {
                  Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_CondValue(v14, 0);
                  if ( v13 )
                  {
                    HomeVoiceList = ServantVoiceMaster__getSpecificLimitCntUpVoiceList(
                                      (ServantVoiceMaster_o *)v13,
                                      v15,
                                      v16,
                                      (int32_t)Instance,
                                      0);
                    goto LABEL_55;
                  }
                  goto LABEL_63;
                }
                if ( !v13 )
                  goto LABEL_63;
                if ( !v14->fields.genderFlag )
                {
                  HomeVoiceList = ServantVoiceMaster__getLimitCntUpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0);
                  goto LABEL_55;
                }
LABEL_52:
                HomeVoiceList = ServantVoiceMaster__getLimitCntVoiceListByLabel(
                                  (ServantVoiceMaster_o *)v13,
                                  v15,
                                  v16,
                                  v19,
                                  0);
                goto LABEL_55;
              }
            }
            else
            {
              if ( (_DWORD)Instance != 18 )
              {
                if ( (_DWORD)Instance == 54 )
                {
                  if ( v14->fields.genderFlag || v14->fields.voiceLabelSpecification )
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
                    if ( v13 )
                    {
                      v22 = (int)Instance;
                      v23 = (ServantVoiceMaster_o *)v13;
                      v24 = v15;
                      v25 = v19;
LABEL_28:
                      HomeVoiceList = ServantVoiceMaster__getCostumeGetVoiceList(v23, v24, v22, v25, 0);
LABEL_55:
                      ServantStatusDialog__PlayChrVoice_35992232(this, v15, v16, HomeVoiceList, result, v21);
                      return;
                    }
                  }
                  else
                  {
                    Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_LimitCount(v14, 0);
                    if ( v13 )
                    {
                      v22 = (int)Instance;
                      v23 = (ServantVoiceMaster_o *)v13;
                      v24 = v15;
                      v25 = 0;
                      goto LABEL_28;
                    }
                  }
LABEL_63:
                  sub_1CE6958(Instance, v10);
                }
LABEL_53:
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getLevelUpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
                  goto LABEL_55;
                }
                goto LABEL_63;
              }
              if ( !v14->fields.genderFlag && !v14->fields.voiceLabelSpecification )
              {
                if ( v13 )
                {
                  HomeVoiceList = ServantVoiceMaster__getCntStopVoiceList(
                                    (ServantVoiceMaster_o *)v13,
                                    v15,
                                    v16,
                                    2,
                                    1,
                                    0);
                  goto LABEL_55;
                }
                goto LABEL_63;
              }
            }
            if ( !v13 )
              goto LABEL_63;
            goto LABEL_52;
          case 3:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getFirstGetVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 4:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventJoinVoiceList((ServantVoiceMaster_o *)v13, v15, v16, 0);
            goto LABEL_55;
          case 5:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventRewardVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 6:
            if ( !v13 )
              goto LABEL_63;
            BattleVoiceList = ServantVoiceMaster__getBattleVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            ServantStatusDialog__PlayBattleVoice(this, v15, v16, BattleVoiceList, result, v27);
            return;
          case 7:
            if ( !v13 )
              goto LABEL_63;
            NpVoiceList = ServantVoiceMaster__getNpVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            ServantStatusDialog__PlayNpVoice(this, v15, v16, NpVoiceList, result, v29);
            return;
          case 8:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getMasterMissionVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          case 9:
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEventShopVoiceList((ServantVoiceMaster_o *)v13, v15, v16, v19, 0);
            goto LABEL_55;
          default:
            Instance = (DataManager_o *)ServantStatusVoiceListViewItem__get_PlayType(v14, 0);
            if ( !v13 )
              goto LABEL_63;
            HomeVoiceList = ServantVoiceMaster__getEntity_43960224(
                              (ServantVoiceMaster_o *)v13,
                              (int32_t)Instance,
                              v15,
                              v16,
                              v19,
                              0);
            goto LABEL_55;
        }
      }
    }
  }
}


void ServantStatusDialog__OnclickRandomLimitCountBattleMask(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__OnclickRandomLimitCountMask(this, 3, v2);
}


void ServantStatusDialog__OnclickRandomLimitCountMask(
        ServantStatusDialog_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  struct ServantStatusListViewItem_o *mainInfo; // x0
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  CommonUI_o *v22; // x22
  System_String_o *v23; // x23
  CommonConfirmDialog_ClickDelegate_o *v24; // x0
  intptr_t *v25; // x8
  struct ServantStatusListViewItem_o *v26; // x0
  struct UserServantEntity_o *v27; // x8
  __int64 v28; // x22
  __int64 v29; // x23
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  long double v32; // q0
  __int64 v33; // x0
  __int64 v34; // x0
  CommonConfirmDialog_ClickDelegate_o *v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4E00954 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
    sub_1CE6700(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__198_0__);
    sub_1CE6700(&Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__198_1__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1CE6700(&StringLiteral_12078/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/);
    sub_1CE6700(&StringLiteral_12079/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_12076/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4E00954 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12076/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
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
        v16 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
        v15 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v16;
        *(_QWORD *)&v36.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v36, 0) )
          goto LABEL_8;
        mainInfo = this->fields.mainInfo;
        if ( !mainInfo )
          return;
      }
      if ( !ServantStatusListViewItem__get_IsEnableOwnRandomSetting(mainInfo, 0) )
        return;
      v17 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v18 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
      v20 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1CBC788(v19);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1CBC788(v19);
      v22 = **(CommonUI_o ***)(v21 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12078/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_OWN"*/, 0);
      v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__198_0__;
LABEL_44:
      v35 = v24;
      CommonConfirmDialog_ClickDelegate___ctor(v24, (Il2CppObject *)this, *v25, 0);
      if ( !v22 )
        goto LABEL_47;
      CommonUI__OpenConfirmDialog_31919840(
        v22,
        (System_String_o *)StringLiteral_1/*""*/,
        v23,
        v5,
        v6,
        v35,
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
    case 2:
      v26 = this->fields.mainInfo;
      if ( !v26 )
        return;
      v27 = v26->fields.userSvtEntity;
      if ( !v27 )
      {
LABEL_34:
        if ( !ServantStatusListViewItem__get_IsEnableSupportRandomSetting(v26, 0) )
          return;
        v30 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
        if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
          v30 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
        v31 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        v33 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1CBC788(v32);
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
        if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
          v34 = sub_1CBC788(v32);
        v22 = **(CommonUI_o ***)(v34 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_DIALOG_SETTING_SUPPORT"*/, 0);
        v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v25 = &Method_ServantStatusDialog__OnclickRandomLimitCountMask_b__198_1__;
        goto LABEL_44;
      }
      v29 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v29;
      *(_QWORD *)&v37.fields.fakeValue = v28;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v37, 0) )
      {
        v26 = this->fields.mainInfo;
        if ( !v26 )
          return;
        goto LABEL_34;
      }
LABEL_8:
      v7 = Method_ServantStatusDialog_OnclickRandomLimitCountMask__;
      if ( (*((_BYTE *)Method_ServantStatusDialog_OnclickRandomLimitCountMask__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1CE6718(Method_ServantStatusDialog_OnclickRandomLimitCountMask__);
      v8 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v10, 0);
        return;
      }
LABEL_47:
      sub_1CE6958(v11, v12);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4E00909 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00909 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__OpenTutorialNotificationDialog(
        ServantStatusDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4E0092B & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    sub_1CE6700(&StringLiteral_13725/*"TUTORIAL_MESSAGE_FAVORITE1"*/);
    byte_4E0092B = 1;
  }
  if ( !this->fields.isUseFavorite )
    goto LABEL_7;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41569468(106, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13725/*"TUTORIAL_MESSAGE_FAVORITE1"*/, 0);
    if ( !Instance )
      sub_1CE6958(v6, v7);
    CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v6, 106, callback, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_35959660(
        ServantStatusDialog_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4E0090A & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0090A = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    canMoveCombine,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor(v21, partyItem, member, callback != 0, canMoveCombine, 0);
  this->fields.mainInfo = v21;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__Open_35959868(
        ServantStatusDialog_o *this,
        int32_t kind,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4E0090B & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0090B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)partyItem,
    member,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36891504(v20, partyItem, member, 0, 0);
  this->fields.mainInfo = v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_35960064(
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

  if ( (byte_4E0090C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0090C = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1CE6958(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_34EBA0C *)*v13);
  ServantStatusDialog__Open_35960348(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, -1, v15);
}


void ServantStatusDialog__Open_35960348(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4E00910 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00910 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    beforeClearQuestId,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(v25, userSvtEntity, 0, 0, 0, v24, v24, 0, 0, 0, 0, 0, beforeClearQuestId, 0);
  this->fields.mainInfo = v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_35960628(
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

  if ( (byte_4E0090D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0090D = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1CE6958(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_34EBA0C *)*v13);
  ServantStatusDialog__Open_35960908(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, v15);
}


void ServantStatusDialog__Open_35960908(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_FormationEndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4E00911 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00911 = 1;
  }
  this->fields.kind = kind;
  this->fields.formationCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.formationCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(v24, userSvtEntity, 0, 0, callback != 0, v23, v23, 0, 0, 0, 0, 0, -1, 0);
  this->fields.mainInfo = v24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_35961184(
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

  if ( (byte_4E0090E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0090E = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1CE6958(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_34EBA0C *)*v13);
  ServantStatusDialog__Open_35961468(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_35961468(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  char v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  char v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4E00912 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00912 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    canMoveCombine,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(v25, userSvtEntity, 0, 0, 0, v24, v24, canMoveCombine, 0, 0, 0, 0, -1, 0);
  this->fields.mainInfo = v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_35961752(
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

  if ( (byte_4E0090F & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E0090F = 1;
  }
  if ( kind != 12 && kind != 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        v13 = &Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1CE6958(Instance, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  v13 = &Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__GetEntity__;
LABEL_11:
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_34EBA0C *)*v13);
  ServantStatusDialog__Open_35962036(this, kind, (UserServantEntity_o *)Entity, callback, openCallback, 0, v15);
}


void ServantStatusDialog__Open_35962036(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        bool canMoveCombine,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  char v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w23
  ServantStatusListViewItem_o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  char v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4E00913 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00913 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    canMoveCombine,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(
    v25,
    userSvtEntity,
    0,
    0,
    callback != 0,
    v24,
    v24,
    canMoveCombine,
    0,
    0,
    0,
    0,
    -1,
    0);
  this->fields.mainInfo = v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_35962420(
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  unsigned int v25; // w8
  bool v26; // cc
  unsigned __int64 v27; // x8
  char v28; // w9
  char v29; // w24
  ServantStatusListViewItem_o *v30; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x1

  if ( (byte_4E00914 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00914 = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (int32_t)callback,
    (int64_t)openCallback,
    (System_String_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.kind - 2;
  v26 = v25 > 0x23;
  v27 = 0x677FFFFFEuLL >> v25;
  v28 = v26;
  v29 = v28 | v27 & 1;
  v30 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(
    v30,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    0,
    v29,
    v29,
    canMoveCombine,
    isGrand,
    isForceNotGrand,
    isChangeFriendShipSkill,
    tempOverwriteTdLv,
    -1,
    0);
  this->fields.mainInfo = v30;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  ServantStatusDialog__Init(this, v37);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__Open_35962740(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  unsigned int v24; // w8
  bool v25; // cc
  unsigned __int64 v26; // x8
  char v27; // w9
  char v28; // w25
  ServantStatusListViewItem_o *v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x1

  if ( (byte_4E00915 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00915 = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    (int32_t)equipIdList,
    (System_String_o *)questRestrictionInfo,
    (int32_t)callback,
    (int64_t)openCallback,
    (System_String_o *)canMoveCombine);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = this->fields.kind - 2;
  v25 = v24 > 0x23;
  v26 = 0x677FFFFFEuLL >> v24;
  v27 = v25;
  v28 = v27 | v26 & 1;
  v29 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36893140(
    v29,
    userSvtEntity,
    equipIdList,
    questRestrictionInfo,
    callback != 0,
    v28,
    v28,
    canMoveCombine,
    0,
    0,
    0,
    tempOverwriteTdLv,
    -1,
    0);
  this->fields.mainInfo = v29;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  ServantStatusDialog__Init(this, v36);
}


void ServantStatusDialog__Open_35963048(
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v18; // x7

  if ( (byte_4E00916 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E00916 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v16);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  ServantStatusDialog__Open_35963268(
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
void ServantStatusDialog__Open_35963268(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantEntity_o *userSvtEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        bool isSkillChange,
        const MethodInfo *method)
{
  int32_t v15; // w2
  char v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusListViewItem_o *v21; // x23
  int32_t v22; // w2
  char v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_4E00917 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00917 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtEntity,
    isUse,
    (System_String_o *)callback,
    (int32_t)openCallback,
    isSkillChange,
    (System_String_o *)method);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36895888(v21, userSvtEntity, isUse, isSkillChange, 0);
  this->fields.mainInfo = v21;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  ServantStatusDialog__Init(this, v28);
}


void ServantStatusDialog__Open_35963468(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w21
  ServantStatusListViewItem_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4E00918 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00918 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36897700(v24, userSvtCollectionEntity, 0, v23, 0);
  this->fields.mainInfo = v24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_35963692(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  unsigned int v20; // w8
  bool v21; // cc
  unsigned __int64 v22; // x8
  char v23; // w9
  char v24; // w22
  ServantStatusListViewItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4E00919 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00919 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    imageLimitCount,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.kind - 2;
  v21 = v20 > 0x23;
  v22 = 0x677FFFFFEuLL >> v20;
  v23 = v21;
  v24 = v23 | v22 & 1;
  v25 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36899420(v25, userSvtCollectionEntity, imageLimitCount, 0, v24, 0);
  this->fields.mainInfo = v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  ServantStatusDialog__Init(this, v32);
}


void ServantStatusDialog__Open_35963932(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        ServantStatusDialog_ResultDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  unsigned int v19; // w8
  bool v20; // cc
  unsigned __int64 v21; // x8
  char v22; // w9
  char v23; // w22
  ServantStatusListViewItem_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4E0091A & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091A = 1;
  }
  this->fields.kind = kind;
  this->fields.resultCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultCallbackFunc,
    (int32_t)callback,
    (int32_t)userSvtCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.kind - 2;
  v20 = v19 > 0x23;
  v21 = 0x677FFFFFEuLL >> v19;
  v22 = v20;
  v23 = v22 | v21 & 1;
  v24 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36897700(v24, userSvtCollectionEntity, callback != 0, v23, 0);
  this->fields.mainInfo = v24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  ServantStatusDialog__Init(this, v31);
}


void ServantStatusDialog__Open_35964160(
        ServantStatusDialog_o *this,
        int32_t kind,
        ServantLeaderInfo_o *servantLeaderInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4E0091B & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091B = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)servantLeaderInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36900740(v19, servantLeaderInfo, kind != 7, 0);
  this->fields.mainInfo = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_35964344(
        ServantStatusDialog_o *this,
        int32_t kind,
        EquipTargetInfo_o *equipTargetInfo,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  bool v19; // zf
  bool v20; // w21
  bool v21; // w22
  ServantStatusListViewItem_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1

  if ( (byte_4E0091C & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091C = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)equipTargetInfo,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = kind == 19;
  v20 = ((unsigned int)(kind - 13) > 6) | (0x34u >> (kind - 13)) & 1;
  v21 = v19;
  v22 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36902460(v22, equipTargetInfo, v21, v20, 0);
  this->fields.mainInfo = v22;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  ServantStatusDialog__Init(this, v29);
}


void ServantStatusDialog__Open_35964564(
        ServantStatusDialog_o *this,
        int32_t kind,
        CommandCodeEntity_o *commandCodeEntity,
        bool isUse,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  char v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantStatusListViewItem_o *v20; // x22
  int32_t v21; // w2
  char v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4E0091D & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091D = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)commandCodeEntity,
    isUse,
    (System_String_o *)callback,
    (int32_t)openCallback,
    (int64_t)method,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36903548(v20, commandCodeEntity, isUse, 0);
  this->fields.mainInfo = v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  ServantStatusDialog__Init(this, v27);
}


void ServantStatusDialog__Open_35964756(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4E0091E & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091E = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36904360(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_35964932(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        ServantStatusDialog_EndIndividualityDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4E0091F & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E0091F = 1;
  }
  this->fields.kind = kind;
  this->fields.individualityCallbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.individualityCallbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36904360(v19, userCommandCodeEntity, 0);
  this->fields.mainInfo = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  ServantStatusDialog__Init(this, v26);
}


void ServantStatusDialog__Open_35965108(
        ServantStatusDialog_o *this,
        int32_t kind,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        ServantStatusDialog_EndDelegate_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantStatusListViewItem_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4E00920 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewItem_TypeInfo);
    byte_4E00920 = 1;
  }
  this->fields.kind = kind;
  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)userCommandCodeCollectionEntity,
    (int32_t)callback,
    (System_String_o *)openCallback,
    (int32_t)method,
    v6,
    v7);
  this->fields.openCallbackFunc = openCallback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
    (int32_t)openCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (ServantStatusListViewItem_o *)sub_1CE694C(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36905904(v19, userCommandCodeCollectionEntity, 0);
  this->fields.mainInfo = v19;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  __int64 transform; // x0
  UnityEngine_Component_o *v15; // x21
  Il2CppObject *Component_object; // x22
  unsigned int localScale; // s0
  float v18; // s8
  int32_t svtId; // w23
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v22; // x21
  Il2CppObject *v23; // x22
  float32x2_t v24; // d8
  float v25; // s9
  float v26; // s2 OVERLAPPED
  unsigned __int64 v27; // d0 OVERLAPPED
  int v28; // s1
  UnityEngine_Transform_o *v29; // x25
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *svtEntity; // x8
  int32_t battleSize; // w25
  System_Collections_Generic_Dictionary_int__float__o *v33; // x26
  UnityEngine_Transform_o *v34; // x27
  float Item; // s8
  float v36; // s9
  float v37; // s0
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w19
  System_String_o *v54; // [xsp+0h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E00936 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UIRoot___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__float__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__float___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__float__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1CE6700(&NGUITools_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_3126/*"Battle2D"*/);
    sub_1CE6700(&StringLiteral_16774/*"_y0"*/);
    byte_4E00936 = 1;
  }
  v54 = 0;
  entity = 0;
  battleChrCamera = (UnityEngine_Object_o *)this->fields.battleChrCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(battleChrCamera, 0, 0) )
  {
    this->fields.currentBattleActorData = battleActorData;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.currentBattleActorData,
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
  transform = (__int64)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_61;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_61;
  v15 = (UnityEngine_Component_o *)transform;
  while ( 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v15,
                         (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UIRoot___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (transform & 1) != 0 )
      break;
    transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v15, 0);
    v15 = (UnityEngine_Component_o *)transform;
    if ( !transform )
      goto LABEL_61;
  }
  if ( !Component_object )
    goto LABEL_61;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
  if ( !transform )
    goto LABEL_61;
  localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_61;
  v18 = *(float *)&localScale;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_61;
  v56.fields.x = 1.0 / v18;
  v56.fields.y = 1.0 / v18;
  v56.fields.z = 1.0 / v18;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v56, 0);
  if ( !battleActorData )
    goto LABEL_61;
  svtId = battleActorData->fields.svtId;
  limitCount = battleActorData->fields.limitCount;
  ServantStatusDialog__DestroyBattleChr(this, v6);
  transform = (__int64)this->fields.battleChrCamera;
  if ( !transform )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  transform = (__int64)ServantAssetLoadManager__loadBattleActor(&v54, gameObject, svtId, limitCount, 0, 0);
  if ( !transform )
    goto LABEL_61;
  v22 = (UnityEngine_GameObject_o *)transform;
  v23 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)transform,
          (const MethodInfo_325BD54 *)Method_UnityEngine_GameObject_AddComponent_BattleFBXComponent___);
  transform = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !v23 )
    goto LABEL_61;
  BattleFBXComponent__set_RootTransform((BattleFBXComponent_o *)v23, (UnityEngine_Transform_o *)transform, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_61;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !transform )
    goto LABEL_61;
  transform = ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)transform, &entity, svtId, limitCount, 0);
  if ( (transform & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_61;
    v24.n64_u64[0] = vmul_f32(vcvt_f32_s32(*(int32x2_t *)&entity->fields.battleCharaOffsetX), vdup_n_s32(0x3C23D70Au)).n64_u64[0];
    v25 = (float)entity->fields.battleCharaOffsetZ * 0.01;
  }
  else
  {
    v24.n64_u64[0] = 0;
    v25 = 0.0;
  }
  transform = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !transform )
    goto LABEL_61;
  v26 = v25 + this->fields.CHARA_BASE_POSITION.fields.z;
  v27 = vadd_f32(v24, *(float32x2_t *)&this->fields.CHARA_BASE_POSITION.fields.x).n64_u64[0];
  v28 = HIDWORD(v27);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)transform,
    *(UnityEngine_Vector3_o *)(&v26 - 2),
    0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  if ( !transform )
    goto LABEL_61;
  v57.fields.x = 0.0;
  v57.fields.z = 0.0;
  v57.fields.y = 270.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)transform, v57, 0);
  transform = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
  v29 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4DFE0AE )
  {
    transform = sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0AE = 1;
  }
  if ( !v29 )
    goto LABEL_61;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  mainInfo = this->fields.mainInfo;
  if ( mainInfo )
  {
    svtEntity = mainInfo->fields.svtEntity;
    if ( svtEntity )
    {
      battleSize = svtEntity->fields.battleSize;
      v33 = (System_Collections_Generic_Dictionary_int__float__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__float__TypeInfo);
      System_Collections_Generic_Dictionary_int__float____ctor(
        v33,
        (const MethodInfo_3560A38 *)Method_System_Collections_Generic_Dictionary_int__float___ctor__);
      if ( !v33 )
        goto LABEL_61;
      System_Collections_Generic_Dictionary_int__float___Add(
        v33,
        5,
        0.75,
        (const MethodInfo_3561404 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      System_Collections_Generic_Dictionary_int__float___Add(
        v33,
        8,
        0.75,
        (const MethodInfo_3561404 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      System_Collections_Generic_Dictionary_int__float___Add(
        v33,
        9,
        0.75,
        (const MethodInfo_3561404 *)Method_System_Collections_Generic_Dictionary_int__float__Add__);
      if ( System_Collections_Generic_Dictionary_int__float___ContainsKey(
             v33,
             battleSize,
             (const MethodInfo_35615FC *)Method_System_Collections_Generic_Dictionary_int__float__ContainsKey__) )
      {
        v34 = UnityEngine_GameObject__get_transform(v22, 0);
        Item = System_Collections_Generic_Dictionary_int__float___get_Item(
                 v33,
                 battleSize,
                 (const MethodInfo_3561368 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        v36 = System_Collections_Generic_Dictionary_int__float___get_Item(
                v33,
                battleSize,
                (const MethodInfo_3561368 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        v37 = System_Collections_Generic_Dictionary_int__float___get_Item(
                v33,
                battleSize,
                (const MethodInfo_3561368 *)Method_System_Collections_Generic_Dictionary_int__float__get_Item__);
        if ( !v34 )
          goto LABEL_61;
        v58.fields.z = v37;
        v58.fields.x = Item;
        v58.fields.y = v36;
        UnityEngine_Transform__set_localScale(v34, v58, 0);
      }
    }
  }
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)v23, svtId, limitCount, 0);
  if ( BattleFBXComponent__IsYTransparenceShader((BattleFBXComponent_o *)v23, 0) )
    BattleFBXComponent__SetTempShaderFloatProperty(
      (BattleFBXComponent_o *)v23,
      5000.0,
      (System_String_o *)StringLiteral_16774/*"_y0"*/,
      0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(svtId, limitCount, 0, 0);
  BattleFBXComponent__loadAnimationEvents((BattleFBXComponent_o *)v23, Manager__loadAnimEvents, svtId, limitCount, 0);
  BattleFBXComponent__SetWrapMode((BattleFBXComponent_o *)v23, this->fields.defaultAnimationName, 2, 0);
  BattleFBXComponent__playAnimation((BattleFBXComponent_o *)v23, this->fields.defaultAnimationName, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
  if ( !transform
    || (v39 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___),
        (transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0)) == 0) )
  {
LABEL_61:
    sub_1CE6958(transform, v6);
  }
  v40 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)transform,
          (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
  if ( (transform & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
    if ( (transform & 1) == 0 )
      goto LABEL_58;
    if ( v40 )
    {
      UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v40, 0);
      goto LABEL_58;
    }
    goto LABEL_61;
  }
  if ( !v39 )
    goto LABEL_61;
  SimpleAnimation__Sample((SimpleAnimation_o *)v39, 0);
LABEL_58:
  this->fields.currentBattleActorData = battleActorData;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentBattleActorData,
    (int32_t)battleActorData,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.battleActor = (struct BattleFBXComponent_o *)v23;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.battleActor, (int32_t)v23, v47, v48, v49, v50, v51, v52);
  v53 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v22, v53, 0);
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
  if ( (byte_4E00940 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4E00940 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 0, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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


bool ServantStatusDialog__PlayChrVoice_35992232(
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
  if ( (byte_4E00942 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4E00942 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 1, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  if ( (byte_4E00941 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    byte_4E00941 = 1;
  }
  if ( !voicePlayListList || voicePlayListList->fields._size < 1 )
    return 0;
  VoiceAssetName = ServantStatusDialog__GetVoiceAssetName(this, 2, svtId, limitCount, listIndex, method);
  Item = (ServantVoiceData_array *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)voicePlayListList,
                                     0,
                                     (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  int v29; // w19
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E0093D & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4E0093D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !voicePlayList || !voicePlayList->max_length )
    return 0;
  voiceDataList = this->fields.voiceDataList;
  if ( !voiceDataList )
    sub_1CE6958(0, assetName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)voiceDataList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v32 = v31;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    v12 = v10;
    if ( !v10 )
    {
      v29 = 8;
      goto LABEL_16;
    }
    if ( !assetName )
      sub_1CE6958(v10, v11);
  }
  while ( !System_String__Equals_65158148(assetName, (System_String_o *)v32.fields._current, 0) );
  ServantStatusDialog__StopVoice(this, v13);
  if ( this->fields.tabKind == 3 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      sub_1CE6958(0, v14);
    ServantStatusVoiceListViewManager__SetMode_39281052(voiceTabListViewManager, 2, listIndex, 0);
    this->fields.voiceListIndex = listIndex;
  }
  this->fields.voicePlayList = voicePlayList;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList,
    (int32_t)voicePlayList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.voicePlayAssetName = assetName;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName,
    (int32_t)assetName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.voicePlayNum = 0;
  ServantStatusDialog__EndWaitVoice(this, v28);
  v29 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v12 && v29 == 7;
}


void ServantStatusDialog__QuitList(ServantStatusDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isBgmLow; // w8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x0

  if ( (byte_4E00947 & 1) == 0 )
  {
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E00947 = 1;
  }
  if ( !this->fields.isExit )
  {
    isBgmLow = this->fields.isBgmLow;
    this->fields.isExit = 1;
    if ( isBgmLow )
    {
      this->fields.isBgmLow = 0;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      OptionManager__Recover(0);
    }
    charaGraphListViewManager = this->fields.charaGraphListViewManager;
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_35062624(charaGraphListViewManager, 1, 0);
      charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.statusTabListViewManager;
      if ( charaGraphListViewManager )
      {
        ServantStatusListViewManager__SetMode_39234740(
          (ServantStatusListViewManager_o *)charaGraphListViewManager,
          2,
          0);
        charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)this->fields.profileTabListViewManager;
        if ( charaGraphListViewManager )
        {
          ServantStatusFlavorTextListViewManager__SetMode_36874452(
            (ServantStatusFlavorTextListViewManager_o *)charaGraphListViewManager,
            2,
            0);
          if ( !this->fields.isSceneActive )
            return;
          charaGraphListViewManager = (ServantStatusCharaGraphListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( charaGraphListViewManager )
          {
            AvalonSceneManager__setTargetRootActive((AvalonSceneManager_o *)charaGraphListViewManager, 1, 0);
            return;
          }
        }
      }
    }
    sub_1CE6958(charaGraphListViewManager, method);
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

  if ( (byte_4E0096A & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E0096A = 1;
  }
  if ( isDecide )
  {
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_17;
    if ( !isOwnSetting )
    {
      ServantStatusListViewItem__SetRandomLimitCountSupport(mainInfo, randomLimitCount, 0);
      goto LABEL_14;
    }
    ServantStatusListViewItem__SetRandomLimitCount(mainInfo, randomLimitCount, 0);
    mainInfo = (ServantStatusListViewItem_o *)this->fields.charaGraphListViewManager;
    if ( !mainInfo )
      goto LABEL_17;
    ServantStatusCharaGraphListViewManager__OnModifySvtRndomOwnSetting(
      (ServantStatusCharaGraphListViewManager_o *)mainInfo,
      0);
    ServantStatusDialog__ChangeCharaGraph_36013484(this, v10);
    tabInitList = this->fields.tabInitList;
    if ( !tabInitList )
      goto LABEL_17;
    if ( LODWORD(tabInitList->max_length) <= 2 )
      sub_1CE6960(mainInfo);
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
          goto LABEL_14;
        }
      }
LABEL_17:
      sub_1CE6958(mainInfo, isDecide);
    }
  }
LABEL_14:
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusTabListViewManager;
  if ( !mainInfo )
    goto LABEL_17;
  ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)mainInfo, 9, 0);
  statusTabListViewManager = this->fields.statusTabListViewManager;
  v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
  ServantStatusListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
    0);
  if ( !statusTabListViewManager )
    goto LABEL_17;
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
  __int64 v9; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x4
  struct ServantStatusListViewItem_o *v19; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w21
  BalanceConfig_c *v24; // x8
  System_Int32_array *SupportLimitCountStageList; // x21
  System_Func_int__bool__o *v26; // x22
  long double v27; // q0
  __int64 v28; // x0
  __int64 v29; // x0
  CommonUI_o *v30; // x19
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  CommonConfirmDialog_ClickDelegate_o *v34; // x0
  intptr_t *v35; // x8
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v37; // x21
  long double v38; // q0
  __int64 v39; // x0
  __int64 v40; // x0
  CommonConfirmDialog_ClickDelegate_o *v41; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v6 = isRandomOn;
  if ( (byte_4E00969 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_BasicHelper_Any_int____79907888);
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__0__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__1__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__2__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass219_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12089/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12087/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12076/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_12077/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12088/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/);
    byte_4E00969 = 1;
  }
  v9 = sub_1CE694C(ServantStatusDialog___c__DisplayClass219_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass219_0___ctor((ServantStatusDialog___c__DisplayClass219_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_46;
  *(_QWORD *)(v9 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
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
      ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)mainInfo, 9, 0);
      statusTabListViewManager = this->fields.statusTabListViewManager;
      v37 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
      ServantStatusListViewManager_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
        0);
      if ( statusTabListViewManager )
      {
        ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v37, 0);
        return;
      }
    }
    goto LABEL_46;
  }
LABEL_10:
  *(_DWORD *)(v9 + 16) = 12;
  if ( v6 )
  {
    v19 = this->fields.mainInfo;
    if ( !v19 )
      goto LABEL_46;
    userSvtEntity = v19->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_46;
    v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v22;
    *(_QWORD *)&v42.fields.fakeValue = v21;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v42, 0);
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( v23 == v24->static_fields->ServantIdMashu1 )
    {
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_46;
      SupportLimitCountStageList = ServantStatusListViewItem__GetSupportLimitCountStageList(mainInfo, 0);
      v26 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v9,
        Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__0__,
        0);
      if ( BasicHelper__Any_int__52351580(
             SupportLimitCountStageList,
             (System_Func_T__bool__o *)v26,
             (const MethodInfo_31ED25C *)Method_BasicHelper_Any_int____79907888) )
      {
        v28 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
        if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
          v28 = sub_1CBC788(v27);
        v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
        if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
          v29 = sub_1CBC788(v27);
        v30 = **(CommonUI_o ***)(v29 + 184);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_MESSAGE"*/, 0);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_DECIDE"*/, 0);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_MASHU_CONFIRM_DIALOG_CANCEL"*/, 0);
        v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        v35 = &Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__1__;
        goto LABEL_43;
      }
    }
    mainInfo = this->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_46;
    if ( ServantStatusListViewItem__HasRandomGroup(mainInfo, 0) )
    {
      v39 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
        v39 = sub_1CBC788(v38);
      v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
      if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
        v40 = sub_1CBC788(v38);
      v30 = **(CommonUI_o ***)(v40 + 184);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12077/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_MESSAGE"*/, 0);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12076/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_DECIDE"*/, 0);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_CONFIRM_DIALOG_CANCEL"*/, 0);
      v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      v35 = &Method_ServantStatusDialog___c__DisplayClass219_0__RandomLimitCountSettingResource_b__2__;
LABEL_43:
      v41 = v34;
      CommonConfirmDialog_ClickDelegate___ctor(v34, (Il2CppObject *)v9, *v35, 0);
      if ( v30 )
      {
        CommonUI__OpenConfirmDecideDlg(
          v30,
          (System_String_o *)StringLiteral_1/*""*/,
          v31,
          v32,
          v33,
          v41,
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
      sub_1CE6958(mainInfo, v11);
    }
  }
  ServantStatusDialog__RandomLimitCountSetting(this, 1, *(_BYTE *)(v9 + 32), *(_DWORD *)(v9 + 36), v18);
}


void ServantStatusDialog__ReleaseBattleCharaChangeConfirmAsset(ServantStatusDialog_o *this, const MethodInfo *method)
{
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x19
  GrandQuestFolderBoardItem_o *p_cashedBattleCharaChangeConfirmAssetData; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4E00924 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    byte_4E00924 = 1;
  }
  cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
  if ( cashedBattleCharaChangeConfirmAssetData )
  {
    p_cashedBattleCharaChangeConfirmAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.cashedBattleCharaChangeConfirmAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41676764(cashedBattleCharaChangeConfirmAssetData, 0);
    p_cashedBattleCharaChangeConfirmAssetData->klass = 0;
    sub_1CE66A4(p_cashedBattleCharaChangeConfirmAssetData, 0, v5, v6, v7, v8, v9, v10);
  }
}


void ServantStatusDialog__SetActiveInputLockPanel(ServantStatusDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *inputLockPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4E00934 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00934 = 1;
  }
  inputLockPanel = (UnityEngine_Object_o *)this->fields.inputLockPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(inputLockPanel, 0, 0) )
  {
    v7 = this->fields.inputLockPanel;
    if ( !v7 )
      sub_1CE6958(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(
        ServantStatusDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x21
  GrandQuestFolderBoardItem_o *p_battleCharaChangeConfirmDialog; // x19
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  AssetData_o *cashedBattleCharaChangeConfirmAssetData; // x21
  UnityEngine_Transform_o *v8; // x20
  Il2CppObject *Object_object__52317288; // x21
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4E00925 & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_GameObject____79905008);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_Transform___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00925 = 1;
  }
  if ( this->fields.cashedBattleCharaChangeConfirmAssetData )
  {
    battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)this->fields.battleCharaChangeConfirmDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_battleCharaChangeConfirmDialog = (GrandQuestFolderBoardItem_o *)&this->fields.battleCharaChangeConfirmDialog;
    if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
      goto LABEL_15;
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_18;
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               baseObject,
                                               (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_Transform___);
    cashedBattleCharaChangeConfirmAssetData = this->fields.cashedBattleCharaChangeConfirmAssetData;
    v8 = (UnityEngine_Transform_o *)baseObject;
    if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    if ( !cashedBattleCharaChangeConfirmAssetData )
      goto LABEL_18;
    Object_object__52317288 = AssetData__GetObject_object__52317288(
                                cashedBattleCharaChangeConfirmAssetData,
                                ServantStatusDialog_TypeInfo->static_fields->BattleCharaChangeConfirmDialogPrefabName,
                                (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_GameObject____79905008);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__53022032(
                                               Object_object__52317288,
                                               v8,
                                               (const MethodInfo_3290D50 *)Method_UnityEngine_Object_Instantiate_GameObject____79994096);
    if ( !baseObject )
      goto LABEL_18;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         baseObject,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmDialog___);
    p_battleCharaChangeConfirmDialog->klass = (GrandQuestFolderBoardItem_c *)Component_object;
    sub_1CE66A4(p_battleCharaChangeConfirmDialog, (int32_t)Component_object, v11, v12, v13, v14, v15, v16);
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
      sub_1CE6958(baseObject, v5);
    }
  }
}


void ServantStatusDialog__SetBattleCharaTabExplanation(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusDialog_o *v3; // x20
  struct ServantStatusListViewItem_o *mainInfo; // x8
  UILabel_o *battleExplanationLabel; // x19
  bool v6; // w20
  System_String_o *v7; // x0
  System_String_o *costumeName; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4E00974 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_12029/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_12025/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/);
    byte_4E00974 = 1;
  }
  costumeName = 0;
  mainInfo = v3->fields.mainInfo;
  if ( !mainInfo )
LABEL_13:
    sub_1CE6958(this, method);
  if ( !mainInfo->fields.userSvtEntity )
    return;
  battleExplanationLabel = v3->fields.battleExplanationLabel;
  v6 = ServantStatusDialog__EnableSpecialCostume(v3, &costumeName, v2);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v6 )
    {
LABEL_7:
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_BATTLE_STATUS_SPECIAL_COSTUME"*/, 0);
      this = (ServantStatusDialog_o *)System_String__Format(v7, (Il2CppObject *)costumeName, 0);
      goto LABEL_10;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v6 )
      goto LABEL_7;
  }
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_BATTLE_EXPLANATION"*/, 0);
LABEL_10:
  method = (const MethodInfo *)this;
  if ( !battleExplanationLabel )
    goto LABEL_13;
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ServantOverwriteStatus_o *overwriteStatus; // x8
  int32_t Hp_k__BackingField; // w23
  int32_t Atk_k__BackingField; // w24
  int32_t Rarity_k__BackingField; // w22
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x21
  struct ServantOverwriteStatus_o *v18; // x8
  bool v19; // w8
  ServantStatusDialog_BattleActorData_o *BattleActorData; // x0
  ServantStatusDialog_BattleActorData_o **v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_o *assetName; // x22
  const MethodInfo *v29; // x2
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x22
  System_Action_o *v31; // x23
  ServantStatusDialog_BattleActorData_o *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_o *v39; // x22
  System_String_o *v40; // x21
  AssetLoader_LoadEndDataHandler_o *v41; // x22
  const MethodInfo *v42; // x1

  if ( (byte_4E00938 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__0__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__1__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
    byte_4E00938 = 1;
  }
  v4 = sub_1CE694C(ServantStatusDialog___c__DisplayClass163_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass163_0___ctor((ServantStatusDialog___c__DisplayClass163_0_o *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)this, v7, v8, v9, v10, v11, v12);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)BattleActorData, v22, v23, v24, v25, v26, v27);
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
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      mainInfo = (ServantStatusListViewItem_o *)AssetManager__getAssetStorage(assetName, 0);
      if ( mainInfo )
      {
        AssetData__AddEntry((AssetData_o *)mainInfo, 0);
        if ( !*(_BYTE *)(v4 + 32) )
        {
LABEL_23:
          ServantStatusDialog__PlayBattleEffect(this, *v21, v29);
          return;
        }
        charaGraphListViewManager = this->fields.charaGraphListViewManager;
        v31 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          v31,
          (Il2CppObject *)v4,
          Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__0__,
          0);
        if ( charaGraphListViewManager )
        {
          ServantStatusCharaGraphListViewManager__SetMode_35062728(charaGraphListViewManager, 3, v31, 0);
          goto LABEL_23;
        }
      }
    }
LABEL_31:
    sub_1CE6958(mainInfo, v6);
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_31;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  v32 = *v21;
  this->fields.loadingBattleActorData = *v21;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadingBattleActorData,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !*v21 )
    goto LABEL_31;
  v39 = (*v21)->fields.assetName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__SetAssetBundleUnload(v39, 0);
  if ( !*v21 )
    goto LABEL_31;
  v40 = (*v21)->fields.assetName;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v4,
    Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__1__,
    0);
  if ( !AssetManager__loadAssetStorage(v40, v41, 1, 0, 0) )
    ServantStatusDialog__BattleAssetLoadError(this, v42);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  v4 = this;
  if ( (byte_4E00927 & 1) == 0 )
  {
    sub_1CE6700(&RubyLabelHelper_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00927 = 1;
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
    v11 = (RubyLabelHelper_o *)sub_1CE694C(RubyLabelHelper_TypeInfo);
    RubyLabelHelper___ctor(v11, textLabel, servantNameMainPrefab, servantNameRubyPrefab, 0);
    v4->fields.servantNameRubyLabelHelper = v11;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&v4->fields.servantNameRubyLabelHelper,
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
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    this = (ServantStatusDialog_o *)ServantStatusDialog_TypeInfo;
  }
  if ( !servantNameRubyLabelHelper
    || (RubyLabelHelper__SetTextSingleLine(
          servantNameRubyLabelHelper,
          name,
          (UnityEngine_Vector2_o)this->fields.voiceButton->monitor,
          2.0,
          0),
        (this = (ServantStatusDialog_o *)v4->fields.servantNameRangeLabel) == 0) )
  {
LABEL_13:
    sub_1CE6958(this, name);
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
  UnityEngine_Object_o *v10; // x20
  struct ServantStatusListViewItem_o *v11; // x8
  struct ServantStatusListViewItem_o *v12; // x8
  System_String_o **v13; // x8
  struct ServantStatusListViewItem_o *v14; // x8
  System_String_o **v15; // x8
  struct ServantStatusListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x9
  UISprite_o *favoriteSprite; // x20
  __int128 v19; // q1
  ServantStatusDialog_o *favoriteUserSvtId; // x22
  System_String_o **v21; // x8
  UnityEngine_Object_o *pushButton; // x20
  struct ServantStatusListViewItem_o *v23; // x8
  __int64 *v24; // x8
  struct ServantStatusListViewItem_o *v25; // x8
  struct UserServantEntity_o *v26; // x9
  __int128 v27; // q1
  ServantStatusDialog_o *pushSprite; // x20
  ServantStatusDialog_o *pushUserSvtId; // x21
  bool v30; // zf
  struct ServantStatusListViewItem_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-50h]

  v2 = this;
  if ( (byte_4E00945 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&StringLiteral_17844/*"button_lock_reg"*/);
    sub_1CE6700(&StringLiteral_17848/*"button_push_reg"*/);
    sub_1CE6700(&StringLiteral_17849/*"button_push_unreg"*/);
    sub_1CE6700(&StringLiteral_17845/*"button_lock_unreg"*/);
    sub_1CE6700(&StringLiteral_17839/*"button_choice_unreg"*/);
    sub_1CE6700(&StringLiteral_20480/*"icon_equip"*/);
    sub_1CE6700(&StringLiteral_17838/*"button_choice_reg"*/);
    sub_1CE6700(&StringLiteral_20481/*"icon_equip_cc"*/);
    sub_1CE6700(&StringLiteral_17840/*"button_favorite_reg"*/);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_17841/*"button_favorite_unreg"*/);
    byte_4E00945 = 1;
  }
  mainInfo = v2->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_83;
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
    goto LABEL_83;
  }
  userSvtEntity = mainInfo->fields.userSvtEntity;
  if ( userSvtEntity )
  {
    this = (ServantStatusDialog_o *)UserServantEntity__IsLeave(userSvtEntity, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (ServantStatusDialog_o *)v2->fields.markBase;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v12 = v2->fields.mainInfo;
      if ( !v12 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.lockSprite;
      if ( !this )
        goto LABEL_83;
      v13 = (System_String_o **)(v12->fields.isLock ? &StringLiteral_17844/*"button_lock_reg"*/ : &StringLiteral_17845/*"button_lock_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v13, 0);
      v14 = v2->fields.mainInfo;
      if ( !v14 )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)v2->fields.choiceSprite;
      if ( !this )
        goto LABEL_83;
      v15 = (System_String_o **)(v14->fields.isChoice ? &StringLiteral_17838/*"button_choice_reg"*/ : &StringLiteral_17839/*"button_choice_unreg"*/);
      UISprite__set_spriteName((UISprite_o *)this, *v15, 0);
      this = (ServantStatusDialog_o *)v2->fields.favoriteButton;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUseFavorite, 0);
      v16 = v2->fields.mainInfo;
      if ( !v16 )
        goto LABEL_83;
      v17 = v16->fields.userSvtEntity;
      if ( !v17 )
        goto LABEL_83;
      favoriteSprite = v2->fields.favoriteSprite;
      v19 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      favoriteUserSvtId = (ServantStatusDialog_o *)v16->fields.favoriteUserSvtId;
      *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v33 = v34;
      this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v33, 0);
      if ( !favoriteSprite )
        goto LABEL_83;
      v21 = (System_String_o **)&StringLiteral_17840/*"button_favorite_reg"*/;
      if ( favoriteUserSvtId != this )
        v21 = (System_String_o **)&StringLiteral_17841/*"button_favorite_unreg"*/;
      UISprite__set_spriteName(favoriteSprite, *v21, 0);
      pushButton = (UnityEngine_Object_o *)v2->fields.pushButton;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushButton, 0, 0) )
      {
        this = (ServantStatusDialog_o *)v2->fields.pushButton;
        if ( !this )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_83;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.isUsePush, 0);
        v23 = v2->fields.mainInfo;
        if ( !v23 )
          goto LABEL_83;
        this = (ServantStatusDialog_o *)v23->fields.userSvtEntity;
        if ( !this )
          goto LABEL_83;
        if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0) || v2->fields.kind == 3 )
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          ((void (__fastcall *)(ServantStatusDialog_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
            this,
            3,
            1,
            this->klass[1]._1.implementedInterfaces);
          this = (ServantStatusDialog_o *)v2->fields.pushSprite;
          if ( !this )
            goto LABEL_83;
          v24 = &StringLiteral_17849/*"button_push_unreg"*/;
        }
        else
        {
          this = (ServantStatusDialog_o *)v2->fields.pushButton;
          if ( !this )
            goto LABEL_83;
          this = (ServantStatusDialog_o *)((__int64 (__fastcall *)(ServantStatusDialog_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                            this,
                                            0,
                                            1,
                                            this->klass[1]._1.implementedInterfaces);
          v25 = v2->fields.mainInfo;
          if ( !v25 )
            goto LABEL_83;
          v26 = v25->fields.userSvtEntity;
          if ( !v26 )
            goto LABEL_83;
          v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
          pushSprite = (ServantStatusDialog_o *)v2->fields.pushSprite;
          pushUserSvtId = (ServantStatusDialog_o *)v25->fields.pushUserSvtId;
          *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v34.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v34;
          this = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v32, 0);
          if ( !pushSprite )
            goto LABEL_83;
          v24 = &StringLiteral_17848/*"button_push_reg"*/;
          v30 = pushUserSvtId == this;
          this = pushSprite;
          if ( !v30 )
            v24 = &StringLiteral_17849/*"button_push_unreg"*/;
        }
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0);
      }
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v31 = v2->fields.mainInfo;
      if ( !v31 )
        goto LABEL_83;
      if ( !this )
        goto LABEL_83;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31->fields.isUse, 0);
      this = (ServantStatusDialog_o *)v2->fields.equipSprite;
      if ( !this )
        goto LABEL_83;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20480/*"icon_equip"*/, 0);
      return;
    }
    mainInfo = v2->fields.mainInfo;
    if ( !mainInfo )
      goto LABEL_83;
  }
  this = (ServantStatusDialog_o *)v2->fields.markBase;
  if ( !this )
    goto LABEL_83;
  if ( !mainInfo->fields.userCommandCodeEntity )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = v2->fields.mainInfo;
  if ( !v6 )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)v2->fields.lockSprite;
  if ( !this )
    goto LABEL_83;
  v7 = (System_String_o **)(v6->fields.isLock ? &StringLiteral_17844/*"button_lock_reg"*/ : &StringLiteral_17845/*"button_lock_unreg"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)this, *v7, 0), (v8 = v2->fields.mainInfo) == 0)
    || (this = (ServantStatusDialog_o *)v2->fields.choiceSprite) == 0
    || (v8->fields.isChoice
      ? (v9 = (System_String_o **)&StringLiteral_17838/*"button_choice_reg"*/)
      : (v9 = (System_String_o **)&StringLiteral_17839/*"button_choice_unreg"*/),
        (UISprite__set_spriteName((UISprite_o *)this, *v9, 0),
         (this = (ServantStatusDialog_o *)v2->fields.favoriteButton) == 0)
     || (this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_83:
    sub_1CE6958(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v10 = (UnityEngine_Object_o *)v2->fields.pushButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
  {
    this = (ServantStatusDialog_o *)v2->fields.pushButton;
    if ( !this )
      goto LABEL_83;
    this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  this = (ServantStatusDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = v2->fields.mainInfo;
  if ( !v11 )
    goto LABEL_83;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11->fields.isUse, 0);
  this = (ServantStatusDialog_o *)v2->fields.equipSprite;
  if ( !this )
    goto LABEL_83;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20481/*"icon_equip_cc"*/, 0);
}


void ServantStatusDialog__SetProfileTabBadgeIcon(ServantStatusDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x8
  int32_t size; // w20
  UnityEngine_Object_o *noticeNumber; // x21
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0
  UnityEngine_Object_o *profileNewIcon; // x20

  if ( (byte_4E00933 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E00933 = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList )
    size = newProfileList->fields._size;
  else
    size = 0;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noticeNumber, 0, 0) )
  {
    v7 = this->fields.noticeNumber;
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetDispForce(v7, size > 0, 0);
    v7 = this->fields.noticeNumber;
    if ( !v7 )
      goto LABEL_19;
    NoticeNumberComponent__SetNumber(v7, size, 0);
  }
  if ( size <= 0 )
  {
    profileNewIcon = (UnityEngine_Object_o *)this->fields.profileNewIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(profileNewIcon, 0, 0) )
    {
      v7 = (NoticeNumberComponent_o *)this->fields.profileNewIcon;
      if ( v7 )
      {
        ShiningIconComponent__Set_42252400((ShiningIconComponent_o *)v7, 0, 0);
        return;
      }
LABEL_19:
      sub_1CE6958(v7, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog__SetTabKind(ServantStatusDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 statusTabBase; // x0
  int v6; // w23
  bool v7; // w1
  UnityEngine_Object_o *battleActor; // x21
  System_String_o **v9; // x8
  System_String_o **v10; // x8
  UICommonButton_o *v11; // x21
  bool v12; // w0
  __int64 *v13; // x8
  System_String_o **v14; // x8
  UICommonButton_o *profileButton; // x21
  bool v16; // w0
  char isInitTab; // w2
  bool v18; // w1
  System_String_o **v19; // x8
  __int64 *v20; // x8
  UICommonButton_o *v21; // x21
  bool v22; // w0
  System_String_o **v23; // x8
  System_String_o **v24; // x8
  UICommonButton_o *statusButton; // x21
  bool enabled; // w0
  System_String_o **v27; // x8
  System_String_o **v28; // x8
  UICommonButton_o *battleButton; // x21
  bool v30; // w0
  const MethodInfo *v31; // x2
  __int64 *v32; // x8
  System_String_o **v33; // x8
  System_String_o **v34; // x8
  UICommonButton_o *v35; // x21
  bool v36; // w0
  System_String_o **v37; // x8
  System_String_o **v38; // x8
  UICommonButton_o *v39; // x21
  bool v40; // w0
  System_String_o **v41; // x8
  System_String_o **v42; // x8
  UICommonButton_o *v43; // x21
  bool v44; // w0
  _BOOL4 v45; // w21
  System_String_o **v46; // x8
  System_String_o **v47; // x8
  UICommonButton_o *voiceButton; // x21
  bool v49; // w0
  struct System_Boolean_array *tabInitList; // x8
  char *v51; // x8
  _BYTE *v52; // x8
  int v53; // t1
  ServantStatusListViewManager_o *statusTabListViewManager; // x20
  ServantStatusListViewManager_CallbackFunc_o *v55; // x21
  ServantStatusListViewManager_o *v56; // x20
  ServantStatusListViewManager_CallbackFunc_o *v57; // x21
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v59; // x21
  ServantStatusBattleListViewManager_o *battleTabListViewManager; // x20
  ServantStatusBattleListViewManager_CallbackFunc_o *v61; // x21
  struct ServantStatusListViewItem_o *mainInfo; // x8
  const MethodInfo *v63; // x2
  struct ServantStatusListViewItem_o *v64; // x8
  UILabel_o *battleTransformNameLabel; // x20
  ServantStatusListViewItem_o *v66; // x20
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x21
  struct System_Collections_Generic_Dictionary_int__int____o *dictChangeSvtVoiceIdList; // x22
  float BgmVolume; // s8
  BgmManager_c *v70; // x0
  BgmManager_c *v71; // x0
  float LOW_VOLUME; // s8
  ServantStatusVoiceListViewManager_o *v73; // x20
  ServantStatusVoiceListViewManager_CallbackFunc_o *v74; // x21
  bool isPlayVoice; // [xsp+Ch] [xbp-54h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E00944 & 1) == 0 )
  {
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectBattle__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectFlavor__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectVoice__);
    sub_1CE6700(&StringLiteral_17751/*"btn_txt_detail_off"*/);
    sub_1CE6700(&StringLiteral_17734/*"btn_txt_battlecharacter_on"*/);
    sub_1CE6700(&StringLiteral_17799/*"btn_txt_status_on"*/);
    sub_1CE6700(&StringLiteral_17630/*"btn_bg_12"*/);
    sub_1CE6700(&StringLiteral_17798/*"btn_txt_status_off"*/);
    sub_1CE6700(&StringLiteral_17814/*"btn_txt_voice_on"*/);
    sub_1CE6700(&StringLiteral_17779/*"btn_txt_profile_on"*/);
    sub_1CE6700(&StringLiteral_17813/*"btn_txt_voice_off"*/);
    sub_1CE6700(&StringLiteral_17632/*"btn_bg_19"*/);
    sub_1CE6700(&StringLiteral_17752/*"btn_txt_detail_on"*/);
    sub_1CE6700(&StringLiteral_17778/*"btn_txt_profile_off"*/);
    sub_1CE6700(&StringLiteral_17733/*"btn_txt_battlecharacter_off"*/);
    byte_4E00944 = 1;
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
      goto LABEL_277;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.profileTabBase;
    if ( !statusTabBase )
      goto LABEL_277;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.battleTabBase;
    if ( !statusTabBase )
      goto LABEL_277;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
    statusTabBase = (__int64)this->fields.voiceTabBase;
    if ( !statusTabBase )
      goto LABEL_277;
    v6 = 1;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
    goto LABEL_37;
  }
  if ( this->fields.tabKind == 3 )
    ServantStatusDialog__StopVoice(this, *(const MethodInfo **)&kind);
  this->fields.tabKind = kind;
  switch ( kind )
  {
    case 2:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        statusTabBase = (__int64)this->fields.battleActor;
        if ( !statusTabBase )
          goto LABEL_277;
        BattleFBXComponent__playAnimation((BattleFBXComponent_o *)statusTabBase, this->fields.defaultAnimationName, 0);
      }
      break;
    case 1:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      v7 = 1;
      goto LABEL_33;
    case 0:
      statusTabBase = (__int64)this->fields.statusTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      v7 = 0;
LABEL_33:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, v7, 0);
      statusTabBase = (__int64)this->fields.battleTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTabBase;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      break;
  }
  v6 = 0;
LABEL_37:
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
                v23 = (System_String_o **)&StringLiteral_17799/*"btn_txt_status_on"*/;
                if ( kind )
                  v23 = (System_String_o **)&StringLiteral_17798/*"btn_txt_status_off"*/;
                UISprite__set_spriteName((UISprite_o *)statusTabBase, *v23, 0);
                statusTabBase = (__int64)this->fields.statusTitleSprite;
                if ( statusTabBase )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                    statusTabBase,
                    *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                  statusTabBase = (__int64)this->fields.statusSprite;
                  if ( statusTabBase )
                  {
                    v24 = (System_String_o **)(kind ? &StringLiteral_17630/*"btn_bg_12"*/ : &StringLiteral_17632/*"btn_bg_19"*/);
                    UISprite__set_spriteName((UISprite_o *)statusTabBase, *v24, 0);
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
                                    (System_String_o *)StringLiteral_17778/*"btn_txt_profile_off"*/,
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
                                        (System_String_o *)StringLiteral_17630/*"btn_bg_12"*/,
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
                                                  v27 = (System_String_o **)&StringLiteral_17734/*"btn_txt_battlecharacter_on"*/;
                                                  if ( kind != 2 )
                                                    v27 = (System_String_o **)&StringLiteral_17733/*"btn_txt_battlecharacter_off"*/;
                                                  UISprite__set_spriteName((UISprite_o *)statusTabBase, *v27, 0);
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
                                                      v28 = (System_String_o **)(kind == 2
                                                                               ? &StringLiteral_17632/*"btn_bg_19"*/
                                                                               : &StringLiteral_17630/*"btn_bg_12"*/);
                                                      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v28, 0);
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
                                                          v30 = UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this->fields.battleButton,
                                                                  0);
                                                          UICommonButton__SetColliderEnable(
                                                            battleButton,
                                                            v30,
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
                                                                      (System_String_o *)StringLiteral_17813/*"btn_txt_voice_off"*/,
                                                                      0);
                                                                    statusTabBase = (__int64)this->fields.voiceTitleSprite;
                                                                    if ( statusTabBase )
                                                                    {
                                                                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
                                                                        statusTabBase,
                                                                        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
                                                                      statusTabBase = (__int64)this->fields.voiceSprite;
                                                                      if ( statusTabBase )
                                                                        goto LABEL_132;
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
      goto LABEL_277;
    case 0xA:
    case 0x1E:
    case 0x24:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v32 = &StringLiteral_17752/*"btn_txt_detail_on"*/;
      goto LABEL_209;
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
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v9 = (System_String_o **)&StringLiteral_17799/*"btn_txt_status_on"*/;
      if ( kind )
        v9 = (System_String_o **)&StringLiteral_17798/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v9, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v10 = (System_String_o **)(kind ? &StringLiteral_17630/*"btn_bg_12"*/ : &StringLiteral_17632/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v10, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v11 = this->fields.statusButton;
      if ( !v11 )
        goto LABEL_277;
      v12 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v11, v12, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v13 = &StringLiteral_17752/*"btn_txt_detail_on"*/;
      if ( kind != 1 )
        v13 = &StringLiteral_17751/*"btn_txt_detail_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v13, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v14 = (System_String_o **)(kind == 1 ? &StringLiteral_17632/*"btn_bg_19"*/ : &StringLiteral_17630/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v14, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_277;
      v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      isInitTab = this->fields.isInitTab;
      v18 = v16;
      goto LABEL_214;
    case 0xD:
    case 0xE:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x19:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v19 = (System_String_o **)&StringLiteral_17799/*"btn_txt_status_on"*/;
      if ( kind )
        v19 = (System_String_o **)&StringLiteral_17798/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v19, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v20 = &StringLiteral_17632/*"btn_bg_19"*/;
      if ( kind )
        v20 = &StringLiteral_17630/*"btn_bg_12"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v20, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v21 = this->fields.statusButton;
      if ( !v21 )
        goto LABEL_277;
      v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v21, v22, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17751/*"btn_txt_detail_off"*/, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17630/*"btn_bg_12"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
        statusTabBase,
        3,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      goto LABEL_215;
    case 0x1C:
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v32 = &StringLiteral_17778/*"btn_txt_profile_off"*/;
LABEL_209:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)*v32, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17632/*"btn_bg_19"*/, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        1,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      profileButton = this->fields.profileButton;
      if ( !profileButton )
        goto LABEL_277;
      v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      isInitTab = 1;
LABEL_214:
      UICommonButton__SetColliderEnable(profileButton, v18, isInitTab, 0);
LABEL_215:
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 0, 0);
      goto LABEL_220;
    default:
      statusTabBase = (__int64)this->fields.mainInfo;
      if ( !statusTabBase )
        goto LABEL_277;
      ServantStatusListViewItem__GetVoiceInfo(
        (ServantStatusListViewItem_o *)statusTabBase,
        &illust,
        &voice,
        &isPlayVoice,
        0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 0, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v33 = (System_String_o **)&StringLiteral_17799/*"btn_txt_status_on"*/;
      if ( kind )
        v33 = (System_String_o **)&StringLiteral_17798/*"btn_txt_status_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v33, 0);
      statusTabBase = (__int64)this->fields.statusTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.statusSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v34 = (System_String_o **)(kind ? &StringLiteral_17630/*"btn_bg_12"*/ : &StringLiteral_17632/*"btn_bg_19"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v34, 0);
      statusTabBase = (__int64)this->fields.statusButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v35 = this->fields.statusButton;
      if ( !v35 )
        goto LABEL_277;
      v36 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusButton, 0);
      UICommonButton__SetColliderEnable(v35, v36, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 1, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v37 = (System_String_o **)&StringLiteral_17779/*"btn_txt_profile_on"*/;
      if ( kind != 1 )
        v37 = (System_String_o **)&StringLiteral_17778/*"btn_txt_profile_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v37, 0);
      statusTabBase = (__int64)this->fields.profileTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.profileSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17632/*"btn_bg_19"*/ : &StringLiteral_17630/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v38, 0);
      statusTabBase = (__int64)this->fields.profileButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v39 = this->fields.profileButton;
      if ( !v39 )
        goto LABEL_277;
      v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.profileButton, 0);
      UICommonButton__SetColliderEnable(v39, v40, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, kind != 2, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v41 = (System_String_o **)&StringLiteral_17734/*"btn_txt_battlecharacter_on"*/;
      if ( kind != 2 )
        v41 = (System_String_o **)&StringLiteral_17733/*"btn_txt_battlecharacter_off"*/;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v41, 0);
      statusTabBase = (__int64)this->fields.battleTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.battleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      v42 = (System_String_o **)(kind == 2 ? &StringLiteral_17632/*"btn_bg_19"*/ : &StringLiteral_17630/*"btn_bg_12"*/);
      UISprite__set_spriteName((UISprite_o *)statusTabBase, *v42, 0);
      statusTabBase = (__int64)this->fields.battleButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        0,
                        this->fields.isInitTab,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
      v43 = this->fields.battleButton;
      if ( !v43 )
        goto LABEL_277;
      v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.battleButton, 0);
      UICommonButton__SetColliderEnable(v43, v44, this->fields.isInitTab, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_277;
      v45 = isPlayVoice;
      statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
      if ( !statusTabBase )
        goto LABEL_277;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)statusTabBase, 1, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 392LL))(
        statusTabBase,
        1,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 400LL));
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_277;
      if ( v45 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, (unsigned __int8)v6 != 1, 0);
        statusTabBase = (__int64)this->fields.voiceTitleSprite;
        if ( statusTabBase )
        {
          v46 = (System_String_o **)&StringLiteral_17814/*"btn_txt_voice_on"*/;
          if ( !v6 )
            v46 = (System_String_o **)&StringLiteral_17813/*"btn_txt_voice_off"*/;
          UISprite__set_spriteName((UISprite_o *)statusTabBase, *v46, 0);
          statusTabBase = (__int64)this->fields.voiceTitleSprite;
          if ( statusTabBase )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
              statusTabBase,
              *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
            statusTabBase = (__int64)this->fields.voiceSprite;
            if ( statusTabBase )
            {
              v47 = (System_String_o **)(v6 ? &StringLiteral_17632/*"btn_bg_19"*/ : &StringLiteral_17630/*"btn_bg_12"*/);
              UISprite__set_spriteName((UISprite_o *)statusTabBase, *v47, 0);
              statusTabBase = (__int64)this->fields.voiceButton;
              if ( statusTabBase )
              {
                statusTabBase = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)statusTabBase
                                                                                         + 536LL))(
                                  statusTabBase,
                                  0,
                                  this->fields.isInitTab,
                                  *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
                voiceButton = this->fields.voiceButton;
                if ( voiceButton )
                {
                  v49 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.voiceButton, 0);
                  UICommonButton__SetColliderEnable(voiceButton, v49, this->fields.isInitTab, 0);
                  goto LABEL_220;
                }
              }
            }
          }
        }
LABEL_277:
        sub_1CE6958(statusTabBase, *(_QWORD *)&kind);
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)statusTabBase, 0, 0);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17813/*"btn_txt_voice_off"*/, 0);
      statusTabBase = (__int64)this->fields.voiceTitleSprite;
      if ( !statusTabBase )
        goto LABEL_277;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)statusTabBase + 840LL))(
        statusTabBase,
        *(_QWORD *)(*(_QWORD *)statusTabBase + 848LL));
      statusTabBase = (__int64)this->fields.voiceSprite;
      if ( !statusTabBase )
        goto LABEL_277;
LABEL_132:
      UISprite__set_spriteName((UISprite_o *)statusTabBase, (System_String_o *)StringLiteral_17630/*"btn_bg_12"*/, 0);
      statusTabBase = (__int64)this->fields.voiceButton;
      if ( !statusTabBase )
        goto LABEL_277;
      statusTabBase = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)statusTabBase + 536LL))(
                        statusTabBase,
                        3,
                        1,
                        *(_QWORD *)(*(_QWORD *)statusTabBase + 544LL));
LABEL_220:
      tabInitList = this->fields.tabInitList;
      if ( !tabInitList )
        goto LABEL_277;
      if ( LODWORD(tabInitList->max_length) <= kind )
        sub_1CE6960(statusTabBase);
      v51 = (char *)tabInitList + kind;
      v53 = (unsigned __int8)v51[32];
      v52 = v51 + 32;
      if ( v53 )
      {
        switch ( kind )
        {
          case 0:
            goto LABEL_231;
          case 1:
            goto LABEL_234;
          case 2:
            goto LABEL_238;
          case 3:
            goto LABEL_252;
          default:
            goto LABEL_268;
        }
      }
      *v52 = 1;
      switch ( kind )
      {
        case 0:
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_277;
          ServantStatusListViewManager__CreateList(
            (ServantStatusListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            0);
          if ( this->fields.isInit )
            goto LABEL_231;
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_277;
          ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)statusTabBase, 5, 0);
          statusTabBase = (__int64)this->fields.statusTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_277;
          ServantStatusListViewManager__SetMode_39234740((ServantStatusListViewManager_o *)statusTabBase, 3, 0);
          statusTabListViewManager = this->fields.statusTabListViewManager;
          v55 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( !statusTabListViewManager )
            goto LABEL_277;
          ServantStatusListViewManager__SetMode(statusTabListViewManager, 1, v55, 0);
LABEL_231:
          v56 = this->fields.statusTabListViewManager;
          v57 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo);
          ServantStatusListViewManager_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
            0);
          if ( !v56 )
            goto LABEL_277;
          ServantStatusListViewManager__SetMode(v56, 1, v57, 0);
LABEL_268:
          if ( !(v6 & 1 | !this->fields.isBgmLow) )
          {
            this->fields.isBgmLow = 0;
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            OptionManager__Recover(0);
          }
          this->fields.isInitTab = 1;
          break;
        case 1:
          ServantStatusDialog__UpdateProfileList(this, 0, v31);
LABEL_234:
          profileTabListViewManager = this->fields.profileTabListViewManager;
          v59 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
          ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
            v59,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectFlavor__,
            0);
          if ( !profileTabListViewManager )
            goto LABEL_277;
          ServantStatusFlavorTextListViewManager__SetMode(profileTabListViewManager, 1, v59, 0);
          goto LABEL_268;
        case 2:
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_277;
          ServantStatusBattleListViewManager__CreateList(
            (ServantStatusBattleListViewManager_o *)statusTabBase,
            this->fields.mainInfo,
            0);
LABEL_238:
          battleTabListViewManager = this->fields.battleTabListViewManager;
          v61 = (ServantStatusBattleListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
          ServantStatusBattleListViewManager_CallbackFunc___ctor(
            v61,
            (Il2CppObject *)this,
            (intptr_t)Method_ServantStatusDialog_OnSelectBattle__,
            0);
          if ( !battleTabListViewManager )
            goto LABEL_277;
          ServantStatusBattleListViewManager__SetMode(battleTabListViewManager, 1, v61, 0);
          statusTabBase = (__int64)this->fields.battleTabListViewManager;
          if ( !statusTabBase )
            goto LABEL_277;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
          mainInfo = this->fields.mainInfo;
          if ( !mainInfo )
            goto LABEL_277;
          if ( !statusTabBase )
            goto LABEL_277;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !mainInfo->fields._IsTransformed_k__BackingField,
            0);
          ServantStatusDialog__SetupBattleMask(this, this->fields.mainInfo, v63);
          statusTabBase = (__int64)this->fields.battleExplanationLabel;
          if ( !statusTabBase )
            goto LABEL_277;
          statusTabBase = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)statusTabBase, 0);
          v64 = this->fields.mainInfo;
          if ( !v64 )
            goto LABEL_277;
          if ( !statusTabBase )
            goto LABEL_277;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)statusTabBase,
            !v64->fields._IsTransformed_k__BackingField,
            0);
          statusTabBase = (__int64)this->fields.mainInfo;
          if ( !statusTabBase )
            goto LABEL_277;
          battleTransformNameLabel = this->fields.battleTransformNameLabel;
          statusTabBase = (__int64)ServantStatusListViewItem__GetTransformName(
                                     (ServantStatusListViewItem_o *)statusTabBase,
                                     0);
          if ( !battleTransformNameLabel )
            goto LABEL_277;
          UILabel__set_text(battleTransformNameLabel, (System_String_o *)statusTabBase, 0);
          goto LABEL_268;
        case 3:
          v66 = this->fields.mainInfo;
          if ( !v66 )
            goto LABEL_277;
          voiceTabListViewManager = this->fields.voiceTabListViewManager;
          dictChangeSvtVoiceIdList = this->fields.dictChangeSvtVoiceIdList;
          statusTabBase = ServantStatusListViewItem__GetSvtId(this->fields.mainInfo, 1, 0);
          if ( !dictChangeSvtVoiceIdList )
            goto LABEL_277;
          statusTabBase = (__int64)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     (System_Collections_Generic_Dictionary_int__object__o *)dictChangeSvtVoiceIdList,
                                     statusTabBase,
                                     (const MethodInfo_355B444 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
          if ( !voiceTabListViewManager )
            goto LABEL_277;
          ServantStatusVoiceListViewManager__CreateList(
            voiceTabListViewManager,
            v66,
            (System_Int32_array *)statusTabBase,
            0);
LABEL_252:
          if ( !this->fields.isBgmLow )
          {
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            BgmVolume = OptionManager__GetBgmVolume(0);
            v70 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v70 = BgmManager_TypeInfo;
            }
            if ( BgmVolume > v70->static_fields->LOW_VOLUME )
            {
              this->fields.isBgmLow = 1;
              if ( !OptionManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
              if ( !OptionManager__GetVolumeMute(0) )
              {
                v71 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v71 = BgmManager_TypeInfo;
                }
                LOW_VOLUME = v71->static_fields->LOW_VOLUME;
                if ( !OptionManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                OptionManager__TestBgmVolume(LOW_VOLUME, 0);
              }
            }
          }
          v73 = this->fields.voiceTabListViewManager;
          v74 = (ServantStatusVoiceListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusVoiceListViewManager_CallbackFunc_TypeInfo);
          ServantStatusVoiceListViewManager_CallbackFunc___ctor(
            v74,
            (Il2CppObject *)this,
            Method_ServantStatusDialog_OnSelectVoice__,
            0);
          if ( !v73 )
            goto LABEL_277;
          ServantStatusVoiceListViewManager__SetMode(v73, 1, v74, 0);
          goto LABEL_268;
        default:
          goto LABEL_268;
      }
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
  UnityEngine_Object_o *battleActor; // x20

  if ( (byte_4E00948 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_25128/*"wait"*/);
    byte_4E00948 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(battleActor, 0, 0) )
      {
        battleChrCamera = (UnityEngine_Component_o *)this->fields.battleActor;
        if ( battleChrCamera )
        {
          BattleFBXComponent__playAnimation(
            (BattleFBXComponent_o *)battleChrCamera,
            (System_String_o *)StringLiteral_25128/*"wait"*/,
            0);
          return;
        }
LABEL_13:
        sub_1CE6958(battleChrCamera, isVisible);
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
  UILabel_o *battleMaskInfoLabel; // x20

  v4 = this;
  if ( (byte_4E00928 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    this = (ServantStatusDialog_o *)sub_1CE6700(&StringLiteral_12083/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/);
    byte_4E00928 = 1;
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
    goto LABEL_16;
  }
  this = (ServantStatusDialog_o *)ServantStatusListViewItem__get_IsEnableOwnRandomSetting(item, 0);
  if ( !v4->fields.battleMaskBase )
    goto LABEL_16;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (ServantStatusDialog_o *)v4->fields.battleMaskBase;
    goto LABEL_7;
  }
  UnityEngine_GameObject__SetActive(v4->fields.battleMaskBase, 1, 0);
  battleMaskInfoLabel = v4->fields.battleMaskInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantStatusDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12083/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_INFO_OWN_SETTING_BATTLE"*/, 0);
  if ( !battleMaskInfoLabel
    || (UILabel__set_text(battleMaskInfoLabel, (System_String_o *)this, 0),
        (this = (ServantStatusDialog_o *)v4->fields.battleMaskInfoLabel) == 0) )
  {
LABEL_16:
    sub_1CE6958(this, item);
  }
  UILabel__set_fontSize((UILabel_o *)this, 18, 0);
}


bool ServantStatusDialog__StartBattleLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  bool v3; // w20
  AssetData_o *BattleActorData; // x0
  __int64 v6; // x1
  ServantStatusDialog_BattleActorData_o *v7; // x20
  System_String_o *assetName; // x21
  const MethodInfo *v9; // x2
  struct ServantStatusDialog_BattleActorData_o **p_loadingBattleActorData; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct ServantStatusDialog_BattleActorData_o *loadingBattleActorData; // x8
  System_String_o *v19; // x20
  System_String_o *v20; // x21
  AssetLoader_LoadEndDataHandler_o *v21; // x22
  const MethodInfo *v22; // x1

  if ( (byte_4E00931 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndLoadBattle__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E00931 = 1;
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
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    BattleActorData = AssetManager__getAssetStorage(assetName, 0);
    if ( BattleActorData )
    {
      AssetData__AddEntry(BattleActorData, 0);
      ServantStatusDialog__PlayBattleEffect(this, v7, v9);
      return 0;
    }
LABEL_20:
    sub_1CE6958(BattleActorData, v6);
  }
  BattleActorData = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !BattleActorData )
    goto LABEL_20;
  p_loadingBattleActorData = &this->fields.loadingBattleActorData;
  CommonUI__SetLoadMode((CommonUI_o *)BattleActorData, 1, 0);
  this->fields.loadingBattleActorData = v7;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadingBattleActorData,
    (int32_t)v7,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantStatusDialog__SetTabKind(this, 2, v17);
  loadingBattleActorData = this->fields.loadingBattleActorData;
  if ( !loadingBattleActorData )
    goto LABEL_20;
  v19 = loadingBattleActorData->fields.assetName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__SetAssetBundleUnload(v19, 0);
  if ( !*p_loadingBattleActorData )
    goto LABEL_20;
  v20 = (*p_loadingBattleActorData)->fields.assetName;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadBattle__, 0);
  v3 = 1;
  if ( !AssetManager__loadAssetStorage(v20, v21, 1, 0, 0) )
  {
    ServantStatusDialog__BattleAssetLoadError(this, v22);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  int32_t SvtId; // w22
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  _QWORD *v24; // x9
  __int64 partyItem_low; // x10
  __int64 v26; // x8
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4E0092D & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass151_0__StartCommandCardLoad_b__0__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass151_0_TypeInfo);
    byte_4E0092D = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass151_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass151_0___ctor((ServantStatusDialog___c__DisplayClass151_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_20;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(SvtId, 0, 0);
  if ( !this->fields.commandCardAssetNames )
    goto LABEL_20;
  v16 = (Il2CppObject *)mainInfo;
  mainInfo = (ServantStatusListViewItem_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this->fields.commandCardAssetNames,
                                              (Il2CppObject *)mainInfo,
                                              (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
    goto LABEL_23;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_20;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.commandCardAssetNames;
  if ( !mainInfo )
    goto LABEL_20;
  userGameEntity = mainInfo->fields.userGameEntity;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(mainInfo->fields.partyItem);
  if ( !userGameEntity )
    goto LABEL_20;
  partyItem_low = SLODWORD(mainInfo->fields.partyItem);
  if ( (unsigned int)partyItem_low >= LODWORD(userGameEntity->fields.name) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mainInfo,
      v16,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = (__int64)userGameEntity + 8 * partyItem_low;
    LODWORD(mainInfo->fields.partyItem) = partyItem_low + 1;
    *(_QWORD *)(v26 + 32) = v16;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  }
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass151_0__StartCommandCardLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)AssetManager__loadAssetStorage((System_String_o *)v16, v27, 1, 0, 0);
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
    sub_1CE6958(mainInfo, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x19
  int32_t SvtId; // w22
  Il2CppObject *StatusImageFolderName; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  _QWORD *v24; // x9
  __int64 partyItem_low; // x10
  __int64 v26; // x8
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4E0092C & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass150_0__StartStatusLoad_b__0__);
    sub_1CE6700(&ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
    byte_4E0092C = 1;
  }
  v5 = sub_1CE694C(ServantStatusDialog___c__DisplayClass150_0_TypeInfo);
  ServantStatusDialog___c__DisplayClass150_0___ctor((ServantStatusDialog___c__DisplayClass150_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = onComplete;
  v14 = v5 + 16;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)onComplete, v8, v9, v10, v11, v12, v13);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_21;
  SvtId = ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(SvtId, 0, 0);
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusImageAssetNames;
  if ( !mainInfo )
    goto LABEL_21;
  mainInfo = (ServantStatusListViewItem_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)mainInfo,
                                              StatusImageFolderName,
                                              (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)mainInfo & 1) != 0 )
    goto LABEL_24;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.statusImageAssetNames;
  if ( !mainInfo )
    goto LABEL_21;
  userGameEntity = mainInfo->fields.userGameEntity;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(mainInfo->fields.partyItem);
  if ( !userGameEntity )
    goto LABEL_21;
  partyItem_low = SLODWORD(mainInfo->fields.partyItem);
  if ( (unsigned int)partyItem_low >= LODWORD(userGameEntity->fields.name) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mainInfo,
      StatusImageFolderName,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = (__int64)userGameEntity + 8 * partyItem_low;
    LODWORD(mainInfo->fields.partyItem) = partyItem_low + 1;
    *(_QWORD *)(v26 + 32) = StatusImageFolderName;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)StatusImageFolderName, v17, v18, v19, v20, v21, v22);
  }
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ServantStatusDialog___c__DisplayClass150_0__StartStatusLoad_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mainInfo = (ServantStatusListViewItem_o *)AssetManager__loadAssetStorage(
                                              (System_String_o *)StatusImageFolderName,
                                              v27,
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
    sub_1CE6958(mainInfo, v7);
  }
}


bool ServantStatusDialog__StartVoiceLoad(ServantStatusDialog_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  bool v4; // w19
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t v6; // w22
  System_Collections_Generic_IEnumerable_TSource__o *DispLimitCountStageList; // x22
  ServantStatusDialog___c_c *v8; // x8
  System_Func_int__bool__o *_9__165_0; // x23
  Il2CppObject *v10; // x24
  struct ServantStatusDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  ServantStatusListViewItem_o *v19; // x9
  struct PartyListViewItem_o *partyItem; // x8
  unsigned __int64 v21; // x20
  int32_t v22; // w23
  ServantLimitAddMaster_o *v23; // x24
  int32_t v24; // w4
  const MethodInfo *v25; // x5
  struct PartyListViewItem_o *v26; // x8
  ServantStatusListViewItem_o *v27; // x24
  unsigned __int64 v28; // x20
  struct PartyOrganizationListViewItem_o **p_memberItem; // x28
  System_Collections_Generic_List_object__o *v30; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  ServantStatusListViewItem_o *v40; // x1
  Il2CppClass **v41; // x0
  int32_t v42; // w4
  const MethodInfo *v43; // x5
  System_Collections_Generic_List_object__o *v44; // x25
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  ServantStatusListViewItem_o *v54; // x1
  Il2CppClass **v55; // x0
  int32_t v56; // w4
  const MethodInfo *v57; // x5
  System_Collections_Generic_List_object__o *v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  ServantStatusListViewItem_o *v68; // x1
  Il2CppClass **v69; // x0
  int32_t v70; // w4
  const MethodInfo *v71; // x5
  BalanceConfig_c *v72; // x8
  int v73; // w25
  System_Collections_Generic_List_object__o *v74; // x25
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  ServantStatusListViewItem_o *v84; // x1
  Il2CppClass **v85; // x0
  int32_t v86; // w4
  const MethodInfo *v87; // x5
  BalanceConfig_c *v88; // x8
  int v89; // w25
  System_Collections_Generic_List_object__o *v90; // x25
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  ServantStatusListViewItem_o *v100; // x1
  Il2CppClass **v101; // x0
  int32_t v102; // w4
  const MethodInfo *v103; // x5
  System_Collections_Generic_List_object__o *v104; // x25
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  ServantStatusListViewItem_o *v114; // x1
  Il2CppClass **v115; // x0
  int32_t v116; // w4
  const MethodInfo *v117; // x5
  System_Collections_Generic_List_object__o *v118; // x25
  int32_t ServantIdMashu3; // w2
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  ServantStatusListViewItem_o *v129; // x1
  Il2CppClass **v130; // x0
  System_Collections_Generic_List_object__o *v131; // x25
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  ServantStatusListViewItem_o *v141; // x1
  Il2CppClass **v142; // x0
  int32_t v143; // w4
  const MethodInfo *v144; // x5
  System_Collections_Generic_List_object__o *v145; // x25
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  struct System_Object_array *v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  ServantStatusListViewItem_o *v155; // x1
  Il2CppClass **v156; // x0
  NetworkManager_c *v157; // x0
  struct BalanceConfig_StaticFields *v158; // x8
  int64_t userIdNumber; // x25
  int32_t MashuTdGradeUpQuestId; // w27
  int32_t MashuTdGradeUpQuestPhase; // w26
  System_Collections_Generic_List_object__o *v162; // x25
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  ServantStatusListViewItem_o *v172; // x1
  Il2CppClass **v173; // x0
  int32_t v174; // w4
  const MethodInfo *v175; // x5
  System_Collections_Generic_List_object__o *v176; // x25
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x4
  int32_t v180; // w5
  int64_t v181; // x6
  System_String_o *v182; // x7
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  ServantStatusListViewItem_o *v186; // x1
  Il2CppClass **v187; // x0
  ServantVoiceRelationEntity_array *v188; // x20
  int max_length; // w8
  unsigned int v190; // w26
  ServantVoiceRelationEntity_o *v191; // x27
  System_Collections_Generic_List_object__o *requestVoiceDataList; // x23
  __int64 v193; // x24
  __int64 v194; // x25
  ServantStatusDialog_o *v195; // x0
  int32_t v196; // w4
  const MethodInfo *v197; // x5
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
  struct System_Object_array *items; // x8
  _QWORD *v205; // x9
  __int64 size; // x10
  ServantStatusListViewItem_o *v207; // x1
  Il2CppClass **v208; // x0
  System_Collections_Generic_List_object__o *v209; // x23
  ServantStatusDialog_o *v210; // x0
  int32_t v211; // w4
  const MethodInfo *v212; // x5
  int32_t v213; // w2
  int32_t v214; // w3
  System_String_o *v215; // x4
  int32_t v216; // w5
  int64_t v217; // x6
  System_String_o *v218; // x7
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  ServantStatusListViewItem_o *v222; // x1
  Il2CppClass **v223; // x0
  System_Collections_Generic_List_object__o *v224; // x23
  ServantStatusDialog_o *v225; // x0
  int32_t v226; // w4
  const MethodInfo *v227; // x5
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x4
  int32_t v231; // w5
  int64_t v232; // x6
  System_String_o *v233; // x7
  struct System_Object_array *v234; // x8
  _QWORD *v235; // x9
  __int64 v236; // x10
  ServantStatusListViewItem_o *v237; // x1
  Il2CppClass **v238; // x0
  struct System_Collections_Generic_List_string__o *v239; // x8
  const MethodInfo *v240; // x2
  NetworkManager_c *v241; // x0
  Il2CppObject *Item; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  System_String_o *v245; // x4
  int32_t v246; // w5
  int64_t v247; // x6
  System_String_o *v248; // x7
  System_String_o *loadVoiceData; // x20
  System_Action_o *v250; // x21
  System_Int32_array *costumeIds; // [xsp+0h] [xbp-80h]
  ServantStatusListViewItem_o *v253; // [xsp+8h] [xbp-78h]
  unsigned __int64 v254; // [xsp+10h] [xbp-70h]
  ServantVoiceRelationEntity_array *relationList; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v256; // 0:x0.16

  if ( (byte_4E0093A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CondType_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_int___);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndLoadVoice__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog___c__StartVoiceLoad_b__165_0__);
    sub_1CE6700(&ServantStatusDialog___c_TypeInfo);
    byte_4E0093A = 1;
  }
  relationList = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFFC56 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFFC56 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->isRebootBlock )
    return 1;
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_172;
  mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__GetSvtId(mainInfo, 1, 0);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_172;
  v6 = (int)mainInfo;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
         (int32_t)mainInfo,
         (const MethodInfo_355B6D8 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    return 0;
  }
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mainInfo )
    goto LABEL_172;
  mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)mainInfo,
                                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !mainInfo )
    goto LABEL_172;
  mainInfo = (ServantStatusListViewItem_o *)ServantChangeMaster__GetEnableSvtVoiceList(
                                              (ServantChangeMaster_o *)mainInfo,
                                              v6,
                                              0);
  if ( !this->fields.dictChangeSvtVoiceIdList )
    goto LABEL_172;
  v253 = mainInfo;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)this->fields.dictChangeSvtVoiceIdList,
    v6,
    (Il2CppObject *)mainInfo,
    (const MethodInfo_355B4D0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_172;
  DispLimitCountStageList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantStatusListViewItem__GetDispLimitCountStageList(
                                                                                   mainInfo,
                                                                                   0);
  v8 = ServantStatusDialog___c_TypeInfo;
  if ( !ServantStatusDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog___c_TypeInfo);
    v8 = ServantStatusDialog___c_TypeInfo;
  }
  _9__165_0 = v8->static_fields->__9__165_0;
  if ( !_9__165_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantStatusDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__165_0 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__165_0, v10, Method_ServantStatusDialog___c__StartVoiceLoad_b__165_0__, 0);
    static_fields = ServantStatusDialog___c_TypeInfo->static_fields;
    static_fields->__9__165_0 = _9__165_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__165_0,
      (int32_t)_9__165_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_int_(
          DispLimitCountStageList,
          (System_Func_TSource__bool__o *)_9__165_0,
          (const MethodInfo_324AC6C *)Method_System_Linq_Enumerable_Where_int___);
  mainInfo = (ServantStatusListViewItem_o *)System_Linq_Enumerable__ToArray_int_(
                                              v18,
                                              (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  v19 = v253;
  costumeIds = (System_Int32_array *)mainInfo;
  if ( !v253 )
    goto LABEL_172;
  partyItem = v253->fields.partyItem;
  if ( (int)partyItem >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)partyItem )
        goto LABEL_173;
      v22 = *((_DWORD *)&v19->fields.memberItem + v21);
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_172;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v23 = (ServantLimitAddMaster_o *)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v23 )
        goto LABEL_172;
      v254 = v21;
      mainInfo = (ServantStatusListViewItem_o *)ServantLimitAddMaster__getVoiceLimitCountList(
                                                  v23,
                                                  v22,
                                                  BalanceConfig_TypeInfo->static_fields->ServantLimitMax,
                                                  costumeIds,
                                                  0);
      if ( !mainInfo )
        goto LABEL_172;
      v26 = mainInfo->fields.partyItem;
      v27 = mainInfo;
      if ( (int)v26 >= 1 )
        break;
LABEL_129:
      mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mainInfo )
        goto LABEL_172;
      mainInfo = (ServantStatusListViewItem_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)mainInfo,
                                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
      if ( !mainInfo )
        goto LABEL_172;
      ServantVoiceRelationMaster__GetRelationList((ServantVoiceRelationMaster_o *)mainInfo, &relationList, v22, 0);
      v188 = relationList;
      if ( !relationList )
        goto LABEL_172;
      max_length = relationList->max_length;
      if ( max_length >= 1 )
      {
        v190 = 0;
        while ( v190 < max_length )
        {
          v191 = v188->m_Items[v190];
          if ( !v191 )
            goto LABEL_172;
          requestVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v194 = *(_QWORD *)&v191->fields.relationSvtId.fields.currentCryptoKey;
          v193 = *(_QWORD *)&v191->fields.relationSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v256.fields.currentCryptoKey = v194;
          *(_QWORD *)&v256.fields.fakeValue = v193;
          v195 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v256, 0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v195,
                                                      0,
                                                      (int32_t)v195,
                                                      0,
                                                      v196,
                                                      v197);
          if ( !requestVoiceDataList )
            goto LABEL_172;
          items = requestVoiceDataList->fields._items;
          v205 = Method_System_Collections_Generic_List_string__Add__;
          ++requestVoiceDataList->fields._version;
          if ( !items )
            goto LABEL_172;
          size = requestVoiceDataList->fields._size;
          v207 = mainInfo;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              requestVoiceDataList,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
          }
          else
          {
            v208 = &items->obj.klass + size;
            requestVoiceDataList->fields._size = size + 1;
            v208[4] = (Il2CppClass *)v207;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v208 + 4), (int32_t)v207, v198, v199, v200, v201, v202, v203);
          }
          v209 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v210 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                            v191->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v210,
                                                      2,
                                                      (int32_t)v210,
                                                      0,
                                                      v211,
                                                      v212);
          if ( !v209 )
            goto LABEL_172;
          v219 = v209->fields._items;
          v220 = Method_System_Collections_Generic_List_string__Add__;
          ++v209->fields._version;
          if ( !v219 )
            goto LABEL_172;
          v221 = v209->fields._size;
          v222 = mainInfo;
          if ( (unsigned int)v221 >= LODWORD(v219->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v209,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
          }
          else
          {
            v223 = &v219->obj.klass + v221;
            v209->fields._size = v221 + 1;
            v223[4] = (Il2CppClass *)v222;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v223 + 4), (int32_t)v222, v213, v214, v215, v216, v217, v218);
          }
          v224 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          v225 = (ServantStatusDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                            v191->fields.relationSvtId,
                                            0);
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      v225,
                                                      1,
                                                      (int32_t)v225,
                                                      0,
                                                      v226,
                                                      v227);
          if ( !v224 )
            goto LABEL_172;
          v234 = v224->fields._items;
          v235 = Method_System_Collections_Generic_List_string__Add__;
          ++v224->fields._version;
          if ( !v234 )
            goto LABEL_172;
          v236 = v224->fields._size;
          v237 = mainInfo;
          if ( (unsigned int)v236 >= LODWORD(v234->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v224,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
          }
          else
          {
            v238 = &v234->obj.klass + v236;
            v224->fields._size = v236 + 1;
            v238[4] = (Il2CppClass *)v237;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v238 + 4), (int32_t)v237, v228, v229, v230, v231, v232, v233);
          }
          max_length = v188->max_length;
          if ( (int)++v190 >= max_length )
            goto LABEL_154;
        }
LABEL_173:
        sub_1CE6960(mainInfo);
      }
LABEL_154:
      v19 = v253;
      LODWORD(partyItem) = v253->fields.partyItem;
      v21 = v254 + 1;
      if ( (__int64)(v254 + 1) >= (int)partyItem )
        goto LABEL_155;
    }
    v28 = 0;
    p_memberItem = &mainInfo->fields.memberItem;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
        goto LABEL_173;
      v30 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  0,
                                                  v22,
                                                  *((_DWORD *)p_memberItem + v28),
                                                  v24,
                                                  v25);
      if ( !v30 )
        goto LABEL_172;
      v37 = v30->fields._items;
      v38 = Method_System_Collections_Generic_List_string__Add__;
      ++v30->fields._version;
      if ( !v37 )
        goto LABEL_172;
      v39 = v30->fields._size;
      v40 = mainInfo;
      if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v37->obj.klass + v39;
        v30->fields._size = v39 + 1;
        v41[4] = (Il2CppClass *)v40;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
      }
      if ( v28 >= LODWORD(v27->fields.partyItem) )
        goto LABEL_173;
      v44 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  2,
                                                  v22,
                                                  *((_DWORD *)p_memberItem + v28),
                                                  v42,
                                                  v43);
      if ( !v44 )
        goto LABEL_172;
      v51 = v44->fields._items;
      v52 = Method_System_Collections_Generic_List_string__Add__;
      ++v44->fields._version;
      if ( !v51 )
        goto LABEL_172;
      v53 = v44->fields._size;
      v54 = mainInfo;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v51->obj.klass + v53;
        v44->fields._size = v53 + 1;
        v55[4] = (Il2CppClass *)v54;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)v54, v45, v46, v47, v48, v49, v50);
      }
      if ( v28 >= LODWORD(v27->fields.partyItem) )
        goto LABEL_173;
      v58 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                  (ServantStatusDialog_o *)mainInfo,
                                                  1,
                                                  v22,
                                                  *((_DWORD *)p_memberItem + v28),
                                                  v56,
                                                  v57);
      if ( !v58 )
        goto LABEL_172;
      v65 = v58->fields._items;
      v66 = Method_System_Collections_Generic_List_string__Add__;
      ++v58->fields._version;
      if ( !v65 )
        goto LABEL_172;
      v67 = v58->fields._size;
      v68 = mainInfo;
      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)mainInfo,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &v65->obj.klass + v67;
        v58->fields._size = v67 + 1;
        v69[4] = (Il2CppClass *)v68;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v68, v59, v60, v61, v62, v63, v64);
      }
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_172;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v72 = BalanceConfig_TypeInfo;
      v73 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v72 = BalanceConfig_TypeInfo;
      }
      if ( v73 == v72->static_fields->ServantIdJekyll )
        break;
      mainInfo = this->fields.mainInfo;
      if ( !mainInfo )
        goto LABEL_172;
      mainInfo = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(mainInfo, 0);
      v88 = BalanceConfig_TypeInfo;
      v89 = (int)mainInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v88 = BalanceConfig_TypeInfo;
      }
      if ( v89 == v88->static_fields->ServantIdMashu1 )
      {
        v90 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        if ( !v88->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v88);
        if ( v28 >= LODWORD(v27->fields.partyItem) )
          goto LABEL_173;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    0,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v28),
                                                    v24,
                                                    v25);
        if ( !v90 )
          goto LABEL_172;
        v97 = v90->fields._items;
        v98 = Method_System_Collections_Generic_List_string__Add__;
        ++v90->fields._version;
        if ( !v97 )
          goto LABEL_172;
        v99 = v90->fields._size;
        v100 = mainInfo;
        if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v90,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v97->obj.klass + v99;
          v90->fields._size = v99 + 1;
          v101[4] = (Il2CppClass *)v100;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v101 + 4), (int32_t)v100, v91, v92, v93, v94, v95, v96);
        }
        if ( v28 >= LODWORD(v27->fields.partyItem) )
          goto LABEL_173;
        v131 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    2,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v28),
                                                    v102,
                                                    v103);
        if ( !v131 )
          goto LABEL_172;
        v138 = v131->fields._items;
        v139 = Method_System_Collections_Generic_List_string__Add__;
        ++v131->fields._version;
        if ( !v138 )
          goto LABEL_172;
        v140 = v131->fields._size;
        v141 = mainInfo;
        if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v131,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
        }
        else
        {
          v142 = &v138->obj.klass + v140;
          v131->fields._size = v140 + 1;
          v142[4] = (Il2CppClass *)v141;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v142 + 4), (int32_t)v141, v132, v133, v134, v135, v136, v137);
        }
        if ( v28 >= LODWORD(v27->fields.partyItem) )
          goto LABEL_173;
        v145 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
        mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                    (ServantStatusDialog_o *)mainInfo,
                                                    1,
                                                    BalanceConfig_TypeInfo->static_fields->ServantIdMashu2,
                                                    *((_DWORD *)p_memberItem + v28),
                                                    v143,
                                                    v144);
        if ( !v145 )
          goto LABEL_172;
        v152 = v145->fields._items;
        v153 = Method_System_Collections_Generic_List_string__Add__;
        ++v145->fields._version;
        if ( !v152 )
          goto LABEL_172;
        v154 = v145->fields._size;
        v155 = mainInfo;
        if ( (unsigned int)v154 >= LODWORD(v152->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v145,
            (Il2CppObject *)mainInfo,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
        }
        else
        {
          v156 = &v152->obj.klass + v154;
          v145->fields._size = v154 + 1;
          v156[4] = (Il2CppClass *)v155;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v156 + 4), (int32_t)v155, v146, v147, v148, v149, v150, v151);
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4DFE4CA )
        {
          sub_1CE6700(&NetworkManager_TypeInfo);
          byte_4DFE4CA = 1;
        }
        v157 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v157 = NetworkManager_TypeInfo;
        }
        v158 = BalanceConfig_TypeInfo->static_fields;
        userIdNumber = v157->static_fields->userIdNumber;
        MashuTdGradeUpQuestId = v158->MashuTdGradeUpQuestId;
        MashuTdGradeUpQuestPhase = v158->MashuTdGradeUpQuestPhase;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
          v162 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          if ( v28 >= LODWORD(v27->fields.partyItem) )
            goto LABEL_173;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      0,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v28),
                                                      v24,
                                                      v25);
          if ( !v162 )
            goto LABEL_172;
          v169 = v162->fields._items;
          v170 = Method_System_Collections_Generic_List_string__Add__;
          ++v162->fields._version;
          if ( !v169 )
            goto LABEL_172;
          v171 = v162->fields._size;
          v172 = mainInfo;
          if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v162,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v162->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v173 + 4), (int32_t)v172, v163, v164, v165, v166, v167, v168);
          }
          if ( v28 >= LODWORD(v27->fields.partyItem) )
            goto LABEL_173;
          v176 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                      (ServantStatusDialog_o *)mainInfo,
                                                      2,
                                                      BalanceConfig_TypeInfo->static_fields->ServantIdMashu3,
                                                      *((_DWORD *)p_memberItem + v28),
                                                      v174,
                                                      v175);
          if ( !v176 )
            goto LABEL_172;
          v183 = v176->fields._items;
          v184 = Method_System_Collections_Generic_List_string__Add__;
          ++v176->fields._version;
          if ( !v183 )
            goto LABEL_172;
          v185 = v176->fields._size;
          v186 = mainInfo;
          if ( (unsigned int)v185 >= LODWORD(v183->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v176,
              (Il2CppObject *)mainInfo,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
          }
          else
          {
            v187 = &v183->obj.klass + v185;
            v176->fields._size = v185 + 1;
            v187[4] = (Il2CppClass *)v186;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v187 + 4), (int32_t)v186, v177, v178, v179, v180, v181, v182);
          }
          if ( v28 >= LODWORD(v27->fields.partyItem) )
            goto LABEL_173;
          v118 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
          ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdMashu3;
          goto LABEL_84;
        }
      }
LABEL_118:
      LODWORD(v26) = v27->fields.partyItem;
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_129;
    }
    v74 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    if ( !v72->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v72);
    if ( v28 >= LODWORD(v27->fields.partyItem) )
      goto LABEL_173;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                0,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v28),
                                                v70,
                                                v71);
    if ( !v74 )
      goto LABEL_172;
    v81 = v74->fields._items;
    v82 = Method_System_Collections_Generic_List_string__Add__;
    ++v74->fields._version;
    if ( !v81 )
      goto LABEL_172;
    v83 = v74->fields._size;
    v84 = mainInfo;
    if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v74,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v81->obj.klass + v83;
      v74->fields._size = v83 + 1;
      v85[4] = (Il2CppClass *)v84;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v84, v75, v76, v77, v78, v79, v80);
    }
    if ( v28 >= LODWORD(v27->fields.partyItem) )
      goto LABEL_173;
    v104 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                2,
                                                BalanceConfig_TypeInfo->static_fields->ServantIdHyde,
                                                *((_DWORD *)p_memberItem + v28),
                                                v86,
                                                v87);
    if ( !v104 )
      goto LABEL_172;
    v111 = v104->fields._items;
    v112 = Method_System_Collections_Generic_List_string__Add__;
    ++v104->fields._version;
    if ( !v111 )
      goto LABEL_172;
    v113 = v104->fields._size;
    v114 = mainInfo;
    if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v104,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
    }
    else
    {
      v115 = &v111->obj.klass + v113;
      v104->fields._size = v113 + 1;
      v115[4] = (Il2CppClass *)v114;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v115 + 4), (int32_t)v114, v105, v106, v107, v108, v109, v110);
    }
    if ( v28 >= LODWORD(v27->fields.partyItem) )
      goto LABEL_173;
    v118 = (System_Collections_Generic_List_object__o *)this->fields.requestVoiceDataList;
    ServantIdMashu3 = BalanceConfig_TypeInfo->static_fields->ServantIdHyde;
LABEL_84:
    mainInfo = (ServantStatusListViewItem_o *)ServantStatusDialog__GetVoiceAssetName(
                                                (ServantStatusDialog_o *)mainInfo,
                                                1,
                                                ServantIdMashu3,
                                                *((_DWORD *)p_memberItem + v28),
                                                v116,
                                                v117);
    if ( !v118 )
      goto LABEL_172;
    v126 = v118->fields._items;
    v127 = Method_System_Collections_Generic_List_string__Add__;
    ++v118->fields._version;
    if ( !v126 )
      goto LABEL_172;
    v128 = v118->fields._size;
    v129 = mainInfo;
    if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v118,
        (Il2CppObject *)mainInfo,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    }
    else
    {
      v130 = &v126->obj.klass + v128;
      v118->fields._size = v128 + 1;
      v130[4] = (Il2CppClass *)v129;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v130 + 4), (int32_t)v129, v120, v121, v122, v123, v124, v125);
    }
    goto LABEL_118;
  }
LABEL_155:
  v239 = this->fields.requestVoiceDataList;
  if ( !v239 )
LABEL_172:
    sub_1CE6958(mainInfo, method);
  if ( v239->fields._size < 1 )
    return 0;
  mainInfo = (ServantStatusListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mainInfo )
    goto LABEL_172;
  CommonUI__SetLoadMode((CommonUI_o *)mainInfo, 1, 0);
  ServantStatusDialog__SetTabKind(this, 3, v240);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFFC56 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFFC56 = 1;
  }
  v241 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v241 = NetworkManager_TypeInfo;
  }
  if ( v241->static_fields->isRebootBlock )
    return 1;
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_172;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)mainInfo,
           0,
           (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_string__get_Item__);
  this->fields.loadVoiceData = (struct System_String_o *)Item;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceData,
    (int32_t)Item,
    v243,
    v244,
    v245,
    v246,
    v247,
    v248);
  mainInfo = (ServantStatusListViewItem_o *)this->fields.requestVoiceDataList;
  if ( !mainInfo )
    goto LABEL_172;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)mainInfo,
    0,
    (const MethodInfo_390773C *)Method_System_Collections_Generic_List_string__RemoveAt__);
  loadVoiceData = this->fields.loadVoiceData;
  v250 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v250, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadVoice__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v4 = 1;
  SoundManager__loadAudioAssetStorage(loadVoiceData, v250, 1, 0);
  return v4;
}


void ServantStatusDialog__StopVoice(ServantStatusDialog_o *this, const MethodInfo *method)
{
  ServantStatusVoiceListViewManager_o *voiceTabListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  SePlayer_o *voicePlayer; // x20
  System_Action_o *v17; // x21
  GrandQuestFolderBoardItem_o *p_voicePlayer; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4E0093C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndPlayVoice__);
    sub_1CE6700(&StringLiteral_6081/*"EndWaitVoice"*/);
    byte_4E0093C = 1;
  }
  if ( this->fields.tabKind == 3 && (this->fields.voiceListIndex & 0x80000000) == 0 )
  {
    voiceTabListViewManager = this->fields.voiceTabListViewManager;
    if ( !voiceTabListViewManager )
      goto LABEL_13;
    ServantStatusVoiceListViewManager__SetMode_39281052(voiceTabListViewManager, 2, -1, 0);
    this->fields.voiceListIndex = -1;
  }
  if ( this->fields.voicePlayList )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_72903040(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6081/*"EndWaitVoice"*/,
      0);
    this->fields.voicePlayList = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayList, 0, v4, v5, v6, v7, v8, v9);
    this->fields.voicePlayNum = 0;
    this->fields.voicePlayAssetName = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayAssetName, 0, v10, v11, v12, v13, v14, v15);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusDialog_EndPlayVoice__, 0);
    SePlayer__RemoveCallback(voicePlayer, v17, 0);
    voiceTabListViewManager = (ServantStatusVoiceListViewManager_o *)this->fields.voicePlayer;
    if ( voiceTabListViewManager )
    {
      p_voicePlayer = (GrandQuestFolderBoardItem_o *)&this->fields.voicePlayer;
      SePlayer__StopSe((SePlayer_o *)voiceTabListViewManager, 0.0, 0);
      p_voicePlayer->klass = 0;
      sub_1CE66A4(p_voicePlayer, 0, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_13:
    sub_1CE6958(voiceTabListViewManager, method);
  }
}


void ServantStatusDialog__UpdateCv(ServantStatusDialog_o *this, System_String_o *cvName, const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *profileTabListViewManager; // x0

  if ( this->fields.tabKind == 1 )
  {
    profileTabListViewManager = this->fields.profileTabListViewManager;
    if ( !profileTabListViewManager )
      sub_1CE6958(0, cvName);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ServantStatusFlavorTextListViewManager_o *v14; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v15; // x21
  struct ServantStatusFlavorTextListViewManager_o *v16; // x8

  v4 = this;
  if ( (byte_4E00973 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_ServantCommentEntity__TypeInfo);
    sub_1CE6700(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_OnSelectFlavor__);
    this = (ServantStatusDialog_o *)sub_1CE6700(&Method_ServantStatusDialog__UpdateProfileList_b__232_0__);
    byte_4E00973 = 1;
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
    v7 = (System_Action_object__o *)sub_1CE694C(System_Action_ServantCommentEntity__TypeInfo);
    System_Action_object____ctor(v7, (Il2CppObject *)v4, Method_ServantStatusDialog__UpdateProfileList_b__232_0__, 0);
    if ( profileTabListViewManager )
    {
      profileTabListViewManager->fields.OnFinishedReadEvent = (struct System_Action_ServantCommentEntity__o *)v7;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&profileTabListViewManager->fields.OnFinishedReadEvent,
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
      v15 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
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
    sub_1CE6958(this, setMode);
  }
  tabInitList = v4->fields.tabInitList;
  if ( !tabInitList )
    goto LABEL_17;
  if ( LODWORD(tabInitList->max_length) <= 1 )
    sub_1CE6960(this);
  tabInitList->m_Items[1] = 0;
}


void ServantStatusDialog___EndInitLoad_b__144_0(ServantStatusDialog_o *this, AssetData_o *_, const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4E0097A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_AssetData__TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndLoad__);
    byte_4E0097A = 1;
  }
  v4 = (System_Action_object__o *)sub_1CE694C(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoad__, 0);
  ServantStatusDialog__StartCommandCardLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog___EndLoadInit_b__148_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Action_object__o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ActionChain_o *v20; // x19

  if ( (byte_4E0097B & 1) == 0 )
  {
    sub_1CE6700(&ActionChain_TypeInfo);
    sub_1CE6700(&System_Action_Action____TypeInfo);
    sub_1CE6700(&System_Action_Action__TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog__EndLoadInit_b__148_1__);
    sub_1CE6700(&Method_ServantStatusDialog__EndLoadInit_b__148_2__);
    byte_4E0097B = 1;
  }
  v3 = sub_1CE67A8(System_Action_Action____TypeInfo, 2);
  v4 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__148_1__, 0);
  if ( !v3 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v4, v7, v8, v9, v10, v11, v12),
        v13 = (System_Action_object__o *)sub_1CE694C(System_Action_Action__TypeInfo),
        System_Action_object____ctor(v13, (Il2CppObject *)this, Method_ServantStatusDialog__EndLoadInit_b__148_2__, 0),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
    sub_1CE6960(v5);
  }
  *(_QWORD *)(v3 + 40) = v13;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (ActionChain_o *)sub_1CE694C(ActionChain_TypeInfo);
  ActionChain___ctor_50148084(v20, (System_Action_Action__array *)v3, 0);
  if ( !v20 )
LABEL_8:
    sub_1CE6958(v5, v6);
  ChainableActionBase__Execute((ChainableActionBase_o *)v20, 0);
}


void ServantStatusDialog___EndLoadInit_b__148_1(
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
    sub_1CE6958(mainInfo, action);
  }
  ActionExtensions__Call(action, 0);
}


void ServantStatusDialog___EndLoadInit_b__148_2(
        ServantStatusDialog_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0

  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    sub_1CE6958(0, action);
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


void ServantStatusDialog___InitList_b__179_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusDialog__SetActiveInputLockPanel(this, 0, v2);
  this->fields.needAutoScroll = 0;
}


void ServantStatusDialog___LoadTransformedResource_b__201_0(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4E0097C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_AssetData__TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog__LoadTransformedResource_b__201_1__);
    byte_4E0097C = 1;
  }
  v4 = (System_Action_object__o *)sub_1CE694C(System_Action_AssetData__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantStatusDialog__LoadTransformedResource_b__201_1__,
    0);
  ServantStatusDialog__StartStatusLoad(this, (System_Action_AssetData__o *)v4, v5);
}


void ServantStatusDialog___LoadTransformedResource_b__201_1(
        ServantStatusDialog_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20
  ServantStatusDialog_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4E0097D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndLoadTransformedResource__);
    byte_4E0097D = 1;
  }
  v4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantStatusDialog_EndLoadTransformedResource__, 0);
  v7 = ServantStatusDialog__CoWaitForEndOfFrame(v5, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void ServantStatusDialog___OnConfirmServantQuest_b__222_0(ServantStatusDialog_o *this, const MethodInfo *method)
{
  int32_t questId; // w20
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  PartyOrganizationUtility_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4E0097E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog_EndCloseConfirmServantQuest__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E0097E = 1;
  }
  questId = this->fields.questId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__SetAutoResumeByQuestId(questId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantStatusDialog_EndCloseConfirmServantQuest__, 0);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog_31920128((CommonUI_o *)Instance, v5, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0)
    || (PartyOrganizationUtility__ClearTemporaryPartyInfo(v6, 0),
        (v6 = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
    sub_1CE6958(v6, v7);
  }
  v6->fields._IsNormalFlowQuest_k__BackingField = 0;
  ServantStatusDialog__Exit(this, v7);
}


void ServantStatusDialog___OnclickRandomLimitCountMask_b__198_0(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void ServantStatusDialog___OnclickRandomLimitCountMask_b__198_1(
        ServantStatusDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantStatusDialog__EndRandomLimitCountConfirm(this, isDecide, method);
}


void ServantStatusDialog___UpdateProfileList_b__232_0(
        ServantStatusDialog_o *this,
        ServantCommentEntity_o *entity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantCommentEntity__o *newProfileList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Master_object; // x0
  struct ServantStatusListViewItem_o *mainInfo; // x8
  struct ServantEntity_o *baseSvtEntity; // x8
  ServantCommentMaster_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w22
  System_Int32_array *v14; // x23
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4E0097F & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&int___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCommentEntity__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E0097F = 1;
  }
  newProfileList = this->fields.newProfileList;
  if ( newProfileList
    && System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)newProfileList,
         (Il2CppObject *)entity,
         (const MethodInfo_39062F8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Contains__) )
  {
    Master_object = (System_Collections_Generic_List_object__o *)this->fields.newProfileList;
    if ( Master_object )
    {
      System_Collections_Generic_List_object___Remove(
        Master_object,
        (Il2CppObject *)entity,
        (const MethodInfo_3907490 *)Method_System_Collections_Generic_List_ServantCommentEntity__Remove__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      mainInfo = this->fields.mainInfo;
      if ( mainInfo )
      {
        baseSvtEntity = mainInfo->fields.baseSvtEntity;
        if ( baseSvtEntity )
        {
          v10 = (ServantCommentMaster_o *)Master_object;
          v12 = *(_QWORD *)&baseSvtEntity->fields.id.fields.currentCryptoKey;
          v11 = *(_QWORD *)&baseSvtEntity->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v16.fields.currentCryptoKey = v12;
          *(_QWORD *)&v16.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v16, 0);
          Master_object = (System_Collections_Generic_List_object__o *)sub_1CE67A8(int___TypeInfo, 1);
          if ( entity )
          {
            v14 = (System_Int32_array *)Master_object;
            if ( Master_object )
            {
              if ( !Master_object->fields._size )
                goto LABEL_21;
              LODWORD(Master_object->fields._syncRoot) = entity->fields.id;
              Master_object = (System_Collections_Generic_List_object__o *)sub_1CE67A8(int___TypeInfo, 1);
              if ( !Master_object )
                goto LABEL_20;
              if ( !Master_object->fields._size )
LABEL_21:
                sub_1CE6960(Master_object);
              LODWORD(Master_object->fields._syncRoot) = entity->fields.priority;
              if ( v10 )
              {
                ServantCommentMaster__SetOpen(v10, v13, v14, (System_Int32_array *)Master_object, 0);
                ServantStatusDialog__SetProfileTabBadgeIcon(this, v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1CE6958(Master_object, v6);
  }
}


bool ServantStatusDialog__get_IsViewCharaGraph(const MethodInfo *method)
{
  ServantStatusDialog_c *v1; // x0

  if ( (byte_4E00907 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00907 = 1;
  }
  v1 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v1 = ServantStatusDialog_TypeInfo;
  }
  return v1->static_fields->_IsViewCharaGraph_k__BackingField;
}


void ServantStatusDialog__set_IsViewCharaGraph(bool value, const MethodInfo *method)
{
  ServantStatusDialog_c *v3; // x0

  if ( (byte_4E00908 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog_TypeInfo);
    byte_4E00908 = 1;
  }
  v3 = ServantStatusDialog_TypeInfo;
  if ( !ServantStatusDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusDialog_TypeInfo);
    v3 = ServantStatusDialog_TypeInfo;
  }
  v3->static_fields->_IsViewCharaGraph_k__BackingField = value;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B141C0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B14178;
}


System_IAsyncResult_o *ServantStatusDialog_EndDelegate__BeginInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        bool isModify,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isModify;
  if ( (byte_4E010DA & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4E010DA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void ServantStatusDialog_EndDelegate__EndInvoke(
        ServantStatusDialog_EndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B1433C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B142E4;
}


System_IAsyncResult_o *ServantStatusDialog_EndIndividualityDelegate__BeginInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        bool isModify,
        bool isNeedSort,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  bool v11[4]; // [xsp+18h] [xbp-38h] BYREF
  bool v12[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v12[0] = isModify;
  v11[0] = isNeedSort;
  if ( (byte_4E010DD & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4E010DD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(bool_TypeInfo, v11);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v10, callback, object);
}


void ServantStatusDialog_EndIndividualityDelegate__EndInvoke(
        ServantStatusDialog_EndIndividualityDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B14234;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B141DC;
}


System_IAsyncResult_o *ServantStatusDialog_FormationEndDelegate__BeginInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        bool isModify,
        int32_t questId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = isModify;
  v11 = questId;
  if ( (byte_4E010DB & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    byte_4E010DB = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v10, callback, object);
}


void ServantStatusDialog_FormationEndDelegate__EndInvoke(
        ServantStatusDialog_FormationEndDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B142B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B14258;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  bool v14[4]; // [xsp+38h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v15[0] = isModify;
  v14[0] = isNeedSort;
  v13 = questId;
  if ( (byte_4E010DC & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    sub_1CE6700(&int_TypeInfo);
    byte_4E010DC = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v11, callback, object);
}


void ServantStatusDialog_ResultDelegate__EndInvoke(
        ServantStatusDialog_ResultDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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


void ServantStatusDialog__CoWaitForEndOfFrame_d__202___ctor(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__CoWaitForEndOfFrame_d__202__MoveNext(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4E010E9 & 1) == 0 )
  {
    this = (ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *)sub_1CE6700(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4E010E9 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1CE6958(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1CE694C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__202__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__CoWaitForEndOfFrame_d__202__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_ServantStatusDialog__CoWaitForEndOfFrame_d__202_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *ServantStatusDialog__CoWaitForEndOfFrame_d__202__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__CoWaitForEndOfFrame_d__202__System_IDisposable_Dispose(
        ServantStatusDialog__CoWaitForEndOfFrame_d__202_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog__LoadAsset_d__140___ctor(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusDialog__LoadAsset_d__140__MoveNext(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusDialog__LoadAsset_d__140_o *v8; // x19
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct ServantStatusDialog___c__DisplayClass140_0_o *_8__1; // x21
  System_Action_o *v17; // x20
  struct ServantStatusDialog___c__DisplayClass140_0_o *v18; // x20
  struct ServantStatusDialog___c__DisplayClass140_0_o *v19; // x21
  System_Action_o *v20; // x20
  struct ServantStatusDialog___c__DisplayClass140_0_o *v21; // x21
  System_Action_o *v22; // x20
  struct ServantStatusDialog___c__DisplayClass140_0_o *v23; // x8
  struct System_Action_o *callback; // x8
  bool result; // w0
  GrandQuestFolderBoardItem_o *v26; // x19
  int v27; // w8
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_4E010EA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__0__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__1__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__2__);
    this = (ServantStatusDialog__LoadAsset_d__140_o *)sub_1CE6700(&ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
    byte_4E010EA = 1;
  }
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v9 = (Il2CppObject *)sub_1CE694C(ServantStatusDialog___c__DisplayClass140_0_TypeInfo);
      System_Object___ctor(v9, 0);
      v8->fields.__8__1 = (struct ServantStatusDialog___c__DisplayClass140_0_o *)v9;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v9, v10, v11, v12, v13, v14, v15);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_33;
      _8__1->fields.isUISkinLoaded = 0;
      v17 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)_8__1,
        Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadUISkin(v17, 2, 1, 0);
LABEL_9:
      v18 = v8->fields.__8__1;
      if ( !v18 )
        goto LABEL_33;
      if ( !v18->fields.isUISkinLoaded )
      {
        v8->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1CE66A4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      this = (ServantStatusDialog__LoadAsset_d__140_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( !this )
        goto LABEL_33;
      this = (ServantStatusDialog__LoadAsset_d__140_o *)AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 1, 0);
      v18->fields.isTerminalUISkinLoaded = (unsigned __int8)this & 1;
      v19 = v8->fields.__8__1;
      if ( !v19 )
        goto LABEL_33;
      if ( !v19->fields.isTerminalUISkinLoaded )
      {
        v20 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          v20,
          (Il2CppObject *)v19,
          Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__1__,
          0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadUISkin(v20, 1, 1, 0);
      }
LABEL_18:
      v21 = v8->fields.__8__1;
      if ( !v21 )
        goto LABEL_33;
      if ( !v21->fields.isTerminalUISkinLoaded )
      {
        v8->fields.__2__current = 0;
        v26 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1CE66A4(v26, 0, v2, v3, v4, v5, v6, v7);
        v27 = 2;
        goto LABEL_31;
      }
      v21->fields.isEventUIAtlasLoaded = 0;
      v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v21,
        Method_ServantStatusDialog___c__DisplayClass140_0__LoadAsset_b__2__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v22, 1, 0);
LABEL_24:
      v23 = v8->fields.__8__1;
      if ( !v23 )
LABEL_33:
        sub_1CE6958(this, method);
      if ( !v23->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v26 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1CE66A4(v26, 0, v2, v3, v4, v5, v6, v7);
        v27 = 3;
LABEL_31:
        LODWORD(v26[-1].fields._ClosedMessage_k__BackingField) = v27;
        return 1;
      }
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_33;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_9;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_24;
    default:
      return 0;
  }
}


Il2CppObject *ServantStatusDialog__LoadAsset_d__140__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusDialog__LoadAsset_d__140__System_Collections_IEnumerator_Reset(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_ServantStatusDialog__LoadAsset_d__140_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *ServantStatusDialog__LoadAsset_d__140__System_Collections_IEnumerator_get_Current(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusDialog__LoadAsset_d__140__System_IDisposable_Dispose(
        ServantStatusDialog__LoadAsset_d__140_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E010DE & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusDialog___c_TypeInfo);
    byte_4E010DE = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(ServantStatusDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusDialog___c_TypeInfo->static_fields->__9 = (struct ServantStatusDialog___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)ServantStatusDialog___c_TypeInfo->static_fields,
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


bool ServantStatusDialog___c___EnableSpecialCostume_b__235_0(
        ServantStatusDialog___c_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4E010DF & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    byte_4E010DF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->CostumeIdMashu == dispLimitCount )
    return 1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return static_fields->SpecialLimitCountPLD == dispLimitCount;
}


bool ServantStatusDialog___c___StartVoiceLoad_b__165_0(
        ServantStatusDialog___c_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  return LimitCountUtility__IsCostume(stage, 0);
}


void ServantStatusDialog___c__DisplayClass140_0___ctor(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass140_0___LoadAsset_b__0(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  this->fields.isUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass140_0___LoadAsset_b__1(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  this->fields.isTerminalUISkinLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass140_0___LoadAsset_b__2(
        ServantStatusDialog___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void ServantStatusDialog___c__DisplayClass141_0___ctor(
        ServantStatusDialog___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass141_0___LoadBattleCharaChangeConfirmAsset_b__0(
        ServantStatusDialog___c__DisplayClass141_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusDialog___c__DisplayClass141_0_o *v9; // x20
  struct ServantStatusDialog_o *_4__this; // x8
  struct System_Action_o *callback; // x8

  v9 = this;
  if ( (byte_4E010E0 & 1) == 0 )
  {
    this = (ServantStatusDialog___c__DisplayClass141_0_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E010E0 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.cashedBattleCharaChangeConfirmAssetData = assetData,
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.cashedBattleCharaChangeConfirmAssetData,
          (int32_t)assetData,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = v9->fields.callback) == 0)
    || (((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (ServantStatusDialog___c__DisplayClass141_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1CE6958(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
}


void ServantStatusDialog___c__DisplayClass150_0___ctor(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass150_0___StartStatusLoad_b__0(
        ServantStatusDialog___c__DisplayClass150_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1CE6958(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass151_0___ctor(
        ServantStatusDialog___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass151_0___StartCommandCardLoad_b__0(
        ServantStatusDialog___c__DisplayClass151_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Action_AssetData__o *onComplete; // x8

  onComplete = this->fields.onComplete;
  if ( !onComplete )
    sub_1CE6958(this, data);
  ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))onComplete->fields.invoke_impl)(
    onComplete->fields.method_code,
    data,
    onComplete->fields.method);
}


void ServantStatusDialog___c__DisplayClass161_0___ctor(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog_o *_4__this; // x0
  struct ServantStatusDialog_o *v4; // x8
  UnityEngine_Object_o *battleCharaChangeConfirmDialog; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4E010E3 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E010E3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ServantStatusDialog__SetBattleCharaChangeConfirmDialogPrefab(_4__this, 0), (v4 = this->fields.__4__this) == 0) )
  {
    sub_1CE6958(_4__this, method);
  }
  battleCharaChangeConfirmDialog = (UnityEngine_Object_o *)v4->fields.battleCharaChangeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCharaChangeConfirmDialog, 0, 0) )
    ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(this, v6);
  else
    ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
      this,
      v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_b__3(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass161_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass161_0_o *)_4__this->fields.servantStatusBattleConfirmDialog) == 0)
    || (ServantStatusBattleConfirmDialog__Close((ServantStatusBattleConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass161_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1CE6958(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_b__4(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusDialog___c__DisplayClass161_0_o *v4; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (ServantStatusDialog___c__DisplayClass161_0_o *)_4__this->fields.battleCharaChangeConfirmDialog) == 0)
    || (BattleCharaChangeConfirmDialog__Close((BattleCharaChangeConfirmDialog_o *)this, 0),
        (this = (ServantStatusDialog___c__DisplayClass161_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1CE6958(this, isDecide);
  }
  ServantStatusDialog__EndBattleConfirm((ServantStatusDialog_o *)this, isDecide, 0);
}


void ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenBattleCharaChangeConfirmDialog_1(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  int32_t nowDispLimitCount; // w20
  TreasureDvcInfo_o *nowTdInfo; // x21
  SkillInfo_array *nowSkillInfoList; // x22
  ServantOverwriteStatus_o *nowStatus; // x23
  System_Int32_array *nowClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v8; // x25
  int32_t nextDispLimitCount; // w20
  TreasureDvcInfo_o *nextTdInfo; // x21
  SkillInfo_array *nextSkillInfoList; // x22
  ServantOverwriteStatus_o *nextStatus; // x23
  System_Int32_array *nextClassSkill; // x24
  BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x26
  BattleCharaChangeConfirmListViewItem_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct ServantStatusDialog_o *_4__this; // x8
  BattleCharaChangeConfirmDialog_o *battleCharaChangeConfirmDialog; // x21
  BattleCharaChangeConfirmDialog_ClickDelegate_o *v20; // x22

  if ( (byte_4E010E2 & 1) == 0 )
  {
    sub_1CE6700(&BattleCharaChangeConfirmListViewItem_TypeInfo);
    sub_1CE6700(&BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__4__);
    byte_4E010E2 = 1;
  }
  nowDispLimitCount = this->fields.nowDispLimitCount;
  nowTdInfo = this->fields.nowTdInfo;
  nowSkillInfoList = this->fields.nowSkillInfoList;
  nowStatus = this->fields.nowStatus;
  nowClassSkill = this->fields.nowClassSkill;
  v8 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1CE694C(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
  BattleCharaChangeConfirmListViewItem_DispLimitCountData___ctor(
    v8,
    nowDispLimitCount,
    nowTdInfo,
    nowSkillInfoList,
    nowStatus,
    nowClassSkill,
    0);
  nextDispLimitCount = this->fields.nextDispLimitCount;
  nextTdInfo = this->fields.nextTdInfo;
  nextSkillInfoList = this->fields.nextSkillInfoList;
  nextStatus = this->fields.nextStatus;
  nextClassSkill = this->fields.nextClassSkill;
  v14 = (BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *)sub_1CE694C(BattleCharaChangeConfirmListViewItem_DispLimitCountData_TypeInfo);
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
  v15 = (BattleCharaChangeConfirmListViewItem_o *)sub_1CE694C(BattleCharaChangeConfirmListViewItem_TypeInfo);
  BattleCharaChangeConfirmListViewItem___ctor(v15, (int32_t)nextTdInfo, (int32_t)nextSkillInfoList, v8, v14, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (battleCharaChangeConfirmDialog = _4__this->fields.battleCharaChangeConfirmDialog,
        v20 = (BattleCharaChangeConfirmDialog_ClickDelegate_o *)sub_1CE694C(BattleCharaChangeConfirmDialog_ClickDelegate_TypeInfo),
        BattleCharaChangeConfirmDialog_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__4__,
          0),
        !battleCharaChangeConfirmDialog) )
  {
    sub_1CE6958(v16, v17);
  }
  BattleCharaChangeConfirmDialog__Open(battleCharaChangeConfirmDialog, v20, v15, 0);
}


void ServantStatusDialog___c__DisplayClass161_0___ChangeBattleResource_g__OpenServantStatusBattleConfirmDialog_0(
        ServantStatusDialog___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass161_0_o *v2; // x19
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
  if ( (byte_4E010E1 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass161_0_o *)sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__3__);
    byte_4E010E1 = 1;
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
  v11 = (ServantStatusBattleConfirmDialog_ClickDelegate_o *)sub_1CE694C(ServantStatusBattleConfirmDialog_ClickDelegate_TypeInfo);
  ServantStatusBattleConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_ServantStatusDialog___c__DisplayClass161_0__ChangeBattleResource_b__3__,
    0);
  if ( !servantStatusBattleConfirmDialog )
LABEL_6:
    sub_1CE6958(this, method);
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


void ServantStatusDialog___c__DisplayClass163_0___ctor(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___SetChangeBattleResource_b__0(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_1CE6958(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_35062624((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___SetChangeBattleResource_b__1(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass163_0_o *v3; // x19
  struct ServantStatusDialog_o *_4__this; // x8
  ServantStatusCharaGraphListViewManager_o *charaGraphListViewManager; // x20
  System_Action_o *_9__2; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct ServantStatusDialog_o *v19; // x8

  v3 = this;
  if ( (byte_4E010E4 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ServantStatusDialog___c__DisplayClass163_0_o *)sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__2__);
    byte_4E010E4 = 1;
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
      _9__2 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v3,
        Method_ServantStatusDialog___c__DisplayClass163_0__SetChangeBattleResource_b__2__,
        0);
      v3->fields.__9__2 = _9__2;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
    }
    if ( charaGraphListViewManager )
    {
      ServantStatusCharaGraphListViewManager__SetMode_35062728(charaGraphListViewManager, 3, _9__2, 0);
      goto LABEL_10;
    }
LABEL_14:
    sub_1CE6958(this, data);
  }
LABEL_10:
  this = (ServantStatusDialog___c__DisplayClass163_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  v19 = v3->fields.__4__this;
  if ( !v19 )
    goto LABEL_14;
  v19->fields.loadingBattleActorData = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v19->fields.loadingBattleActorData, 0, v13, v14, v15, v16, v17, v18);
  this = (ServantStatusDialog___c__DisplayClass163_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  ServantStatusDialog__PlayBattleEffect((ServantStatusDialog_o *)this, v3->fields.battleActorData, 0);
}


void ServantStatusDialog___c__DisplayClass163_0___SetChangeBattleResource_b__2(
        ServantStatusDialog___c__DisplayClass163_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ServantStatusDialog___c__DisplayClass163_0_o *)_4__this->fields.charaGraphListViewManager) == 0 )
  {
    sub_1CE6958(this, method);
  }
  ServantStatusCharaGraphListViewManager__SetMode_35062624((ServantStatusCharaGraphListViewManager_o *)this, 2, 0);
}


void ServantStatusDialog___c__DisplayClass216_0___ctor(
        ServantStatusDialog___c__DisplayClass216_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass216_0___OnClickTdSpeed_b__0(
        ServantStatusDialog___c__DisplayClass216_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  struct ServantStatusDialog_o *_4__this; // x0
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  CommonUI_o *klass; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4E010E5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1CE6700(&Method_ServantStatusDialog___c__DisplayClass216_0__OnClickTdSpeed_b__1__);
    byte_4E010E5 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      ServantStatusDialog__ChangeTreasureDeviceSpeed(_4__this, this->fields.type, 0);
      v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
      if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
        v8 = sub_1CBC788(v7);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1CBC788(v7);
      _4__this = **(struct ServantStatusDialog_o ***)(v9 + 184);
      if ( _4__this )
      {
        CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
        return;
      }
    }
LABEL_19:
    sub_1CE6958(_4__this, isDecide);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1CBC788(v3);
  _4__this = *(struct ServantStatusDialog_o **)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (BYTE5(_4__this->fields.favoriteSprite) & 1) == 0 )
    _4__this = (struct ServantStatusDialog_o *)sub_1CBC788(v3);
  klass = (CommonUI_o *)_4__this->fields.voiceButton->klass;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantStatusDialog___c__DisplayClass216_0__OnClickTdSpeed_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !klass )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog_31920128(klass, _9__1, 0);
}


void ServantStatusDialog___c__DisplayClass216_0___OnClickTdSpeed_b__1(
        ServantStatusDialog___c__DisplayClass216_0_o *this,
        const MethodInfo *method)
{
  ServantStatusDialog___c__DisplayClass216_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  ServantStatusListViewManager_o *monitor; // x19
  ServantStatusListViewManager_CallbackFunc_o *v5; // x21

  v2 = this;
  if ( (byte_4E010E6 & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    this = (ServantStatusDialog___c__DisplayClass216_0_o *)sub_1CE6700(&Method_ServantStatusDialog_OnSelectStatus__);
    byte_4E010E6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ServantStatusListViewManager_o *)_4__this[12].monitor,
        v5 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1CE694C(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v5,
          _4__this,
          (intptr_t)Method_ServantStatusDialog_OnSelectStatus__,
          0),
        !monitor) )
  {
    sub_1CE6958(this, method);
  }
  ServantStatusListViewManager__SetMode(monitor, 1, v5, 0);
}


void ServantStatusDialog___c__DisplayClass219_0___ctor(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantStatusDialog___c__DisplayClass219_0___RandomLimitCountSettingResource_b__0(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.OrtenausCostumeId == x;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass219_0___RandomLimitCountSettingResource_b__1(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *_4__this; // x0

  if ( (byte_4E010E7 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4E010E7 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1CBC788(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CBC788(v3);
  _4__this = **(CommonUI_o ***)(v7 + 184);
  if ( !_4__this
    || (CommonUI__CloseConfirmDialog_31920128(_4__this, 0, 0), (_4__this = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1CE6958(_4__this, isDecide);
  }
  ServantStatusDialog__RandomLimitCountSetting(
    (ServantStatusDialog_o *)_4__this,
    isDecide,
    this->fields.isOwnSetting,
    this->fields.randomLimitCount,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusDialog___c__DisplayClass219_0___RandomLimitCountSettingResource_b__2(
        ServantStatusDialog___c__DisplayClass219_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  CommonUI_o *_4__this; // x0

  if ( (byte_4E010E8 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    byte_4E010E8 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1CBC788(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CBC788(v3);
  _4__this = **(CommonUI_o ***)(v7 + 184);
  if ( !_4__this
    || (CommonUI__CloseConfirmDialog_31920128(_4__this, 0, 0), (_4__this = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1CE6958(_4__this, isDecide);
  }
  ServantStatusDialog__RandomLimitCountSetting(
    (ServantStatusDialog_o *)_4__this,
    isDecide,
    this->fields.isOwnSetting,
    this->fields.randomLimitCount,
    0);
}


void ServantStatusDialog___c__DisplayClass235_0___ctor(
        ServantStatusDialog___c__DisplayClass235_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantStatusDialog___c__DisplayClass235_0___EnableSpecialCostume_b__1(
        ServantStatusDialog___c__DisplayClass235_0_o *this,
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
    sub_1CE6958(servantCostumeMaster, *(_QWORD *)&dispLimitCount);
  }
  return (System_String_o *)*((_QWORD *)servantCostumeMaster + 4);
}