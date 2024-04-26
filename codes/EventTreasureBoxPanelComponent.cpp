void __fastcall EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int64_t eventEndTime; // x21
  System_String_o *v4; // x20
  System_String_o *RestTime2; // x21
  System_String_o *v6; // x0
  bool v7; // w0
  System_String_o *v8; // x22
  __int64 *v9; // x8
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_4350FA3 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_13556/*"TIME_OVER_EVENTREWARD"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_15963/*"[FFFF00,FFFF00]"*/);
    sub_B70694(&StringLiteral_15959/*"[E1A545,FEEF99]"*/);
    sub_B70694(&StringLiteral_13564/*"TIME_REST2_TIMEOVER"*/);
    sub_B70694(&StringLiteral_13578/*"TIME_REST_EVENTREWARD"*/);
    byte_4350FA3 = 1;
  }
  eventEndTime = this->fields.eventEndTime;
  v4 = (System_String_o *)StringLiteral_15959/*"[E1A545,FEEF99]"*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13564/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v7 = System_String__op_Equality(RestTime2, v6, 0LL);
  v8 = (System_String_o *)StringLiteral_15963/*"[FFFF00,FFFF00]"*/;
  if ( v7 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_13556/*"TIME_OVER_EVENTREWARD"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_13578/*"TIME_REST_EVENTREWARD"*/;
  }
  v10 = LocalizationManager__Get((System_String_o *)*v9, 0LL);
  v11 = System_String__Concat_44758168(v4, v10, 0LL);
  v12 = System_String__Concat_44758168(v8, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v14 = System_String__Concat_44760452(v11, (System_String_o *)StringLiteral_82/*" "*/, v12, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_B7076C(v14, v15);
  UILabel__set_text(treasureBoxEndTimeLabel, v14, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__Init(
        EventTreasureBoxPanelComponent_o *this,
        TreasureBoxEntity_o *ent,
        int32_t svtId,
        System_Action_o *drawAction,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 v13; // x26
  void *Instance; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct TreasureBoxEntity_o **v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v33; // x1
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_String_o **p_age; // x8
  struct System_String_o *v66; // x1
  const MethodInfo *v67; // x1
  __int64 v68; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v70; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct TreasureBoxEntity_o *v72; // x8
  __int64 v73; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4350FA1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__);
    sub_B70694(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
    sub_B70694(&StringLiteral_13631/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_B70694(&StringLiteral_13630/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_B70694(&StringLiteral_13622/*"TREASURE_BOX_DRAW_TEXT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350FA1 = 1;
  }
  entity = 0LL;
  v13 = sub_B70764(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_38;
  *(_QWORD *)(v13 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = ent;
  v22 = (struct TreasureBoxEntity_o **)(v13 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)ent, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v13 + 24) )
    return;
  v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v29, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13631/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_38;
  UILabel__set_text(userEventItemLb, (System_String_o *)Instance, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13630/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_38;
  UILabel__set_text(payEventItemLb, (System_String_o *)Instance, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13622/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_38;
  UILabel__set_text(drawBtnLb, (System_String_o *)Instance, 0LL);
  v33 = *v22;
  this->fields.treasureBoxEntity = *v22;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.drawAction,
    (System_Int32_array **)drawAction,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.playVoiceAction = playVoice;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.requestCallBack = requestCallBack;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*p_treasureBoxEntity || !Instance )
    goto LABEL_38;
  Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       &entity,
                       (*p_treasureBoxEntity)->fields.iconId,
                       (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_38;
    p_age = &entity->fields.age;
  }
  else
  {
    p_age = (struct System_String_o **)&StringLiteral_1/*""*/;
  }
  v66 = *p_age;
  this->fields.itemName = *p_age;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)v66,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v67);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  Instance = CommonConsumeMaster__GetIdEntityList(
               (CommonConsumeMaster_o *)Instance,
               (*p_treasureBoxEntity)->fields.commonConsumeId,
               0LL);
  if ( !Instance )
    goto LABEL_38;
  if ( !*((_DWORD *)Instance + 6) )
  {
    v73 = sub_B70798(Instance);
    sub_B70738(v73, 0LL);
  }
  v68 = *((_QWORD *)Instance + 4);
  if ( !v68 )
    goto LABEL_38;
  this->fields.payNum = *(_DWORD *)(v68 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Instance = System_Int32__ToString((int)this + 160, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_38;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Instance, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v70);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_38;
  Instance = this->fields.eventTreasureBoxItemInfo;
  if ( !Instance
    || (EventItemComponent__Set((EventItemComponent_o *)Instance, treasureBoxEntity->fields.iconId, 0LL),
        (v72 = this->fields.treasureBoxEntity) == 0LL)
    || (Instance = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v72->fields.iconId, -1, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Instance
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     (*p_treasureBoxEntity)->fields.eventId,
                     (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_38:
    sub_B7076C(Instance, v15);
  }
  this->fields.eventEndTime = *((_QWORD *)Instance + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v15);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDetail(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_4350FA8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350FA8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    EmissionItemList,
    0LL,
    0,
    this->fields.treasureBoxEntity,
    0LL,
    this->fields.itemName,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  System_Action_int__o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4350FA9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350FA9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v5 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  if ( !treasureBoxBuyWindow )
    sub_B7076C(v6, v7);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v5, 8, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  const MethodInfo *v15; // x1
  struct TreasureBoxEntity_o *v16; // x8
  Il2CppObject *v17; // x21
  System_Int32_array **v18; // x0
  __int64 *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  System_Action_o *v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Action_o *v47; // x22
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x0

  if ( (byte_4350FAB & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__string____Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
    sub_B70694(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__);
    sub_B70694(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__);
    sub_B70694(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4350FAB = 1;
  }
  v5 = sub_B70764(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_35;
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                                (TreasureBoxTalkMaster_o *)Instance,
                                treasureBoxEntity->fields.id,
                                0LL);
  if ( !this->fields.playVoiceAction )
    goto LABEL_35;
  System_Action_int__string__string___Invoke(
    (System_Action_int__string__string__o *)this->fields.playVoiceAction,
    this->fields.svtId,
    (System_String_o *)Instance,
    0LL,
    (const MethodInfo_265B5D8 *)Method_System_Action_int__string____Action__Invoke__);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v15);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  v16 = this->fields.treasureBoxEntity;
  if ( !v16 )
    goto LABEL_35;
  Instance = (DataManager_o *)this->fields.eventTreasureBoxItemInfo;
  if ( !Instance )
    goto LABEL_35;
  EventItemComponent__Set((EventItemComponent_o *)Instance, v16->fields.iconId, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_35;
  TreasureBoxBulkBuyConfirmMenu__Close((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL);
  v17 = (Il2CppObject *)System_String__Concat_44760452(
                          (System_String_o *)StringLiteral_15855/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16092/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v18 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v17,
                                 (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v5 + 24) = v18;
  v19 = (__int64 *)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), v18, v20, v21, v22, v23, v24, v25);
  v32 = *(_QWORD *)(v5 + 24);
  if ( !v32 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_36;
  v33 = *(_QWORD *)(v32 + 32);
  if ( !v33 )
    goto LABEL_35;
  v34 = *(_QWORD *)(v33 + 32);
  if ( !v34 )
    goto LABEL_35;
  v35 = *(_QWORD *)(v34 + 24);
  if ( v35 )
  {
    if ( !(_DWORD)v35 )
      goto LABEL_36;
    v36 = *(_QWORD *)(v34 + 32);
    if ( !v36 )
      goto LABEL_35;
    this->fields.eventPointNum = *(_QWORD *)(v36 + 32);
  }
  *(_QWORD *)(v5 + 32) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), 0LL, v26, v27, v28, v29, v30, v31);
  v37 = *(_QWORD *)(v5 + 24);
  if ( !v37 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v37 + 24) )
  {
LABEL_36:
    v50 = sub_B70798(Instance);
    sub_B70738(v50, 0LL);
  }
  v38 = *(_QWORD *)(v37 + 32);
  if ( !v38 )
    goto LABEL_35;
  v39 = *(_QWORD *)(v38 + 24);
  if ( !v39 )
    goto LABEL_35;
  if ( *(_QWORD *)(v39 + 24) )
  {
    v40 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v5,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0LL);
    *(_QWORD *)(v5 + 32) = v40;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v5,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0LL);
  }
  else
  {
    v47 = 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = *v19;
  if ( !*v19 )
LABEL_35:
    sub_B7076C(Instance, v7);
  if ( !*(_DWORD *)(v48 + 24) )
    goto LABEL_36;
  v49 = *(_QWORD *)(v48 + 32);
  if ( !v49 || !Instance )
    goto LABEL_35;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v49 + 16),
    *(BattleDropItem_array **)(v49 + 24),
    1,
    this->fields.treasureBoxEntity,
    v47,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4350FA2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_7073/*"GetTreasureBoxEventEnableTime"*/);
    byte_4350FA2 = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7073/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  DataManager_o *v7; // x8
  int datalist_high; // w20
  int32_t payNum; // w21
  int v10; // w20
  UIWidget_o *drawBtnLb; // x21
  bool v12; // cc
  unsigned int v13; // w20
  int v14; // s0

  if ( (byte_4350FA4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350FA4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_24;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                (int64_t)Instance,
                                treasureBoxEntity->fields.iconId,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v7 = Instance;
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  datalist_high = HIDWORD(v7->fields.datalist);
  payNum = this->fields.payNum;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  v10 = datalist_high / payNum;
  ((void (__fastcall *)(DataManager_o *, bool, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    v10 > 0,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v10 > 0, 0LL);
  drawBtnLb = (UIWidget_o *)this->fields.drawBtnLb;
  v12 = v10 <= 0;
  v13 = v10 <= 0 ? 3 : 0;
  if ( v12 )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  else
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  UIWidget__set_color(drawBtnLb, *(UnityEngine_Color_o *)&v14, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_24:
    sub_B7076C(Instance, v4);
  }
  ((void (__fastcall *)(DataManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    v13,
    0LL,
    Instance->klass[1]._1.interfaceOffsets);
}


void __fastcall EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  TreasureBoxDrawRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4350FAA & 1) == 0 )
  {
    sub_B70694(&Method_EventTreasureBoxPanelComponent_Response__);
    sub_B70694(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4350FAA = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TreasureBoxDrawRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v5,
                                                                    (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_WarBoardWallAttackRequest )
    sub_B7076C(Request_WarBoardWallAttackRequest, v7);
  TreasureBoxDrawRequest__beginRequest(Request_WarBoardWallAttackRequest, treasureBoxEntity->fields.id, drawNum, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__endloadEffect(
        EventTreasureBoxPanelComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_4350FA6 & 1) == 0 )
  {
    sub_B70694(&EventTreasureBoxPanelComponent_TypeInfo);
    byte_4350FA6 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B70630(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x19
  int v9; // s0
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_4350FA7 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&EventTreasureBoxPanelComponent_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350FA7 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        v12 = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !v12) )
  {
LABEL_12:
    sub_B7076C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return v7;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4350FA5 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_EventTreasureBoxPanelComponent_endloadEffect__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&StringLiteral_5951/*"Effect/TreasureBox"*/);
    byte_4350FA5 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5951/*"Effect/TreasureBox"*/, v3, 1, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
        EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass26_0___Init_b__0(
        EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *v2; // x19
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  UISprite_o *Component_srcLineSprite; // x20
  __int64 v5; // x2
  struct EventTreasureBoxPanelComponent_o *v6; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x2
  struct EventTreasureBoxPanelComponent_o *v12; // x8
  struct TreasureBoxEntity_o *v13; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x2
  struct EventTreasureBoxPanelComponent_o *v18; // x8
  struct TreasureBoxEntity_o *v19; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  struct EventTreasureBoxPanelComponent_o *v23; // x8
  struct EventTreasureBoxPanelComponent_o *v24; // x8
  struct EventTreasureBoxPanelComponent_o *v25; // x8
  int v26; // [xsp+Ch] [xbp-24h] BYREF
  int v27; // [xsp+18h] [xbp-18h] BYREF
  int v28; // [xsp+1Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_434EA80 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23173/*"treasurechest_btn_open"*/);
    sub_B70694(&StringLiteral_23175/*"treasurechest_img_bg"*/);
    sub_B70694(&StringLiteral_23171/*"treasurechest_btn_info"*/);
    sub_B70694(&StringLiteral_23179/*"treasurechest_img_line"*/);
    sub_B70694(&StringLiteral_23169/*"treasurechest_bg_{0}"*/);
    sub_B70694(&StringLiteral_23177/*"treasurechest_img_frame_0{0}b"*/);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_B70694(&StringLiteral_23178/*"treasurechest_img_frame_0{0}f"*/);
    byte_434EA80 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)this,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     Component_srcLineSprite,
                                                                     (System_String_o *)StringLiteral_23173/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_18;
  treasureBoxBg = v6->fields.treasureBoxBg;
  v28 = ent->fields.idx + 1;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v5);
  v10 = System_String__Format((System_String_o *)StringLiteral_23169/*"treasurechest_bg_{0}"*/, v9, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v10, 0LL);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_18;
  v13 = v2->fields.ent;
  if ( !v13 )
    goto LABEL_18;
  treasureIconFrameFront = v12->fields.treasureIconFrameFront;
  v27 = v13->fields.idx + 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v11);
  v16 = System_String__Format((System_String_o *)StringLiteral_23178/*"treasurechest_img_frame_0{0}f"*/, v15, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v16,
                                                                     0LL);
  v18 = v2->fields.__4__this;
  if ( !v18 )
    goto LABEL_18;
  v19 = v2->fields.ent;
  if ( !v19 )
    goto LABEL_18;
  treasureIconFrameBack = v18->fields.treasureIconFrameBack;
  v26 = v19->fields.idx + 1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v17);
  v22 = System_String__Format((System_String_o *)StringLiteral_23177/*"treasurechest_img_frame_0{0}b"*/, v21, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v22,
                                                                     0LL);
  v23 = v2->fields.__4__this;
  if ( !v23
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v23->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_23175/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v24 = v2->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v24->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_23171/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v25 = v2->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B7076C(this, method);
  }
  AtlasManager__SetEventUI(v25->fields.treasureBoxLine, (System_String_o *)StringLiteral_23179/*"treasurechest_img_line"*/, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__0(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v5; // x9
  System_Action_T1__T2__T3__o *static_fields; // x20
  Il2CppObject *v7; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_434EA81 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleDropItem____int__Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_B70694(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__);
    byte_434EA81 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
  {
    v9 = sub_B70798(this);
    sub_B70738(v9, 0LL);
  }
  v5 = *((_QWORD *)monitor + 4);
  if ( !v5 )
    goto LABEL_11;
  static_fields = (System_Action_T1__T2__T3__o *)klass->static_fields;
  v7 = *(Il2CppObject **)(v5 + 24);
  v8 = (System_Action_o *)v2[2].monitor;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v8, v2, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0LL);
    v2[2].monitor = v8;
    sub_B70630(&v2[2].monitor);
  }
  if ( !static_fields )
LABEL_11:
    sub_B7076C(this, method);
  System_Action_object__int__object___Invoke(
    static_fields,
    v7,
    0,
    (Il2CppObject *)v8,
    (const MethodInfo_265C4F8 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v6; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9
  __int64 v8; // x0

  if ( (byte_434EA83 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EA83 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    v8 = sub_B70798(Instance);
    sub_B70738(v8, 0LL);
  }
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_B7076C(Instance, v4);
  CommonUI__OpenTreasureBoxDialog(
    Instance,
    0LL,
    v6->fields.eventRewardInfos,
    2,
    _4__this->fields.treasureBoxEntity,
    this->fields.pointRewardCallBack,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__2(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_434EA82 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434EA82 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_B7076C(Instance, v4);
  CommonUI__CheckOpenQuestByEventPoint(
    Instance,
    treasureBoxEntity->fields.eventId,
    _4__this->fields.eventPointNum,
    0LL,
    1,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent_resData___ctor(
        EventTreasureBoxPanelComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}