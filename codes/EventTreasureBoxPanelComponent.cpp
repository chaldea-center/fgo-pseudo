void __fastcall EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t eventEndTime; // x21
  System_String_o *v10; // x20
  System_String_o *RestTime2; // x21
  System_String_o *v12; // x0
  bool v13; // w0
  System_String_o *v14; // x22
  __int64 *v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v20; // x0
  __int64 v21; // x1

  if ( (byte_418825E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13372/*"TIME_OVER_EVENTREWARD"*/, v3);
    sub_B2C35C(&StringLiteral_80/*" "*/, v4);
    sub_B2C35C(&StringLiteral_15742/*"[FFFF00,FFFF00]"*/, v5);
    sub_B2C35C(&StringLiteral_15738/*"[E1A545,FEEF99]"*/, v6);
    sub_B2C35C(&StringLiteral_13380/*"TIME_REST2_TIMEOVER"*/, v7);
    sub_B2C35C(&StringLiteral_13394/*"TIME_REST_EVENTREWARD"*/, v8);
    byte_418825E = 1;
  }
  eventEndTime = this->fields.eventEndTime;
  v10 = (System_String_o *)StringLiteral_15738/*"[E1A545,FEEF99]"*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13380/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v13 = System_String__op_Equality(RestTime2, v12, 0LL);
  v14 = (System_String_o *)StringLiteral_15742/*"[FFFF00,FFFF00]"*/;
  if ( v13 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_13372/*"TIME_OVER_EVENTREWARD"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_13394/*"TIME_REST_EVENTREWARD"*/;
  }
  v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
  v17 = System_String__Concat_44305532(v10, v16, 0LL);
  v18 = System_String__Concat_44305532(v14, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v20 = System_String__Concat_44307816(v17, (System_String_o *)StringLiteral_80/*" "*/, v18, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_B2C434(v20, v21);
  UILabel__set_text(treasureBoxEndTimeLabel, v20, 0LL);
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
  __int64 v27; // x26
  void *Instance; // x0
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TreasureBoxEntity_o **v36; // x24
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_o *v43; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v47; // x1
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_String_o **p_age; // x8
  struct System_String_o *v80; // x1
  const MethodInfo *v81; // x1
  __int64 v82; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v84; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct TreasureBoxEntity_o *v86; // x8
  __int64 v87; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418825C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, ent);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v21);
    sub_B2C35C(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_13447/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v23);
    sub_B2C35C(&StringLiteral_13446/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v24);
    sub_B2C35C(&StringLiteral_13438/*"TREASURE_BOX_DRAW_TEXT"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_418825C = 1;
  }
  entity = 0LL;
  v27 = sub_B2C42C(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_38;
  *(_QWORD *)(v27 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = ent;
  v36 = (struct TreasureBoxEntity_o **)(v27 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)ent, v37, v38, v39, v40, v41, v42);
  if ( !*(_QWORD *)(v27 + 24) )
    return;
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v27,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v43, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13447/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_38;
  UILabel__set_text(userEventItemLb, (System_String_o *)Instance, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13446/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_38;
  UILabel__set_text(payEventItemLb, (System_String_o *)Instance, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13438/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_38;
  UILabel__set_text(drawBtnLb, (System_String_o *)Instance, 0LL);
  v47 = *v36;
  this->fields.treasureBoxEntity = *v36;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
    (System_Int32_array **)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.drawAction,
    (System_Int32_array **)drawAction,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.playVoiceAction = playVoice;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.requestCallBack = requestCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*p_treasureBoxEntity || !Instance )
    goto LABEL_38;
  Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       &entity,
                       (*p_treasureBoxEntity)->fields.iconId,
                       (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v80 = *p_age;
  this->fields.itemName = *p_age;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)v80,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v81);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    v87 = sub_B2C460(Instance);
    sub_B2C400(v87, 0LL);
  }
  v82 = *((_QWORD *)Instance + 4);
  if ( !v82 )
    goto LABEL_38;
  this->fields.payNum = *(_DWORD *)(v82 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Instance = System_Int32__ToString((int)this + 160, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_38;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Instance, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v84);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_38;
  Instance = this->fields.eventTreasureBoxItemInfo;
  if ( !Instance
    || (EventItemComponent__Set((EventItemComponent_o *)Instance, treasureBoxEntity->fields.iconId, 0LL),
        (v86 = this->fields.treasureBoxEntity) == 0LL)
    || (Instance = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v86->fields.iconId, -1, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Instance
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     (*p_treasureBoxEntity)->fields.eventId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_38:
    sub_B2C434(Instance, v29);
  }
  this->fields.eventEndTime = *((_QWORD *)Instance + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v29);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDetail(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AutomatedAction_o *Instance; // x0
  __int64 v8; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_4188263 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4188263 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  System_Action_int__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4188264 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4188264 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v8 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  if ( !treasureBoxBuyWindow )
    sub_B2C434(v9, v10);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v8, 8, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
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
  __int64 v17; // x20
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  const MethodInfo *v27; // x1
  struct TreasureBoxEntity_o *v28; // x8
  Il2CppObject *v29; // x21
  System_Int32_array **v30; // x0
  __int64 *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  System_Action_o *v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Action_o *v59; // x22
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x0

  if ( (byte_4188266 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__string____Action__Invoke__, result);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v6);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v7);
    sub_B2C35C(&JsonManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v11);
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v12);
    sub_B2C35C(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v14);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v15);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v16);
    byte_4188266 = 1;
  }
  v17 = sub_B2C42C(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_35;
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
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
    (const MethodInfo_24CAF68 *)Method_System_Action_int__string____Action__Invoke__);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v27);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  v28 = this->fields.treasureBoxEntity;
  if ( !v28 )
    goto LABEL_35;
  Instance = (DataManager_o *)this->fields.eventTreasureBoxItemInfo;
  if ( !Instance )
    goto LABEL_35;
  EventItemComponent__Set((EventItemComponent_o *)Instance, v28->fields.iconId, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_35;
  TreasureBoxBulkBuyConfirmMenu__Close((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL);
  v29 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v29,
                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v17 + 24) = v30;
  v31 = (__int64 *)(v17 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), v30, v32, v33, v34, v35, v36, v37);
  v44 = *(_QWORD *)(v17 + 24);
  if ( !v44 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v44 + 24) )
    goto LABEL_36;
  v45 = *(_QWORD *)(v44 + 32);
  if ( !v45 )
    goto LABEL_35;
  v46 = *(_QWORD *)(v45 + 32);
  if ( !v46 )
    goto LABEL_35;
  v47 = *(_QWORD *)(v46 + 24);
  if ( v47 )
  {
    if ( !(_DWORD)v47 )
      goto LABEL_36;
    v48 = *(_QWORD *)(v46 + 32);
    if ( !v48 )
      goto LABEL_35;
    this->fields.eventPointNum = *(_QWORD *)(v48 + 32);
  }
  *(_QWORD *)(v17 + 32) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 32), 0LL, v38, v39, v40, v41, v42, v43);
  v49 = *(_QWORD *)(v17 + 24);
  if ( !v49 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v49 + 24) )
  {
LABEL_36:
    v62 = sub_B2C460(Instance);
    sub_B2C400(v62, 0LL);
  }
  v50 = *(_QWORD *)(v49 + 32);
  if ( !v50 )
    goto LABEL_35;
  v51 = *(_QWORD *)(v50 + 24);
  if ( !v51 )
    goto LABEL_35;
  if ( *(_QWORD *)(v51 + 24) )
  {
    v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v17,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0LL);
    *(_QWORD *)(v17 + 32) = v52;
    sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v17,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0LL);
  }
  else
  {
    v59 = 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = *v31;
  if ( !*v31 )
LABEL_35:
    sub_B2C434(Instance, v19);
  if ( !*(_DWORD *)(v60 + 24) )
    goto LABEL_36;
  v61 = *(_QWORD *)(v60 + 32);
  if ( !v61 || !Instance )
    goto LABEL_35;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v61 + 16),
    *(BattleDropItem_array **)(v61 + 24),
    1,
    this->fields.treasureBoxEntity,
    v59,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418825D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6975/*"GetTreasureBoxEventEnableTime"*/, method);
    byte_418825D = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6975/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  DataManager_o *v10; // x8
  int datalist_high; // w20
  int32_t payNum; // w21
  int v13; // w20
  UIWidget_o *drawBtnLb; // x21
  bool v15; // cc
  unsigned int v16; // w20
  int v17; // s0

  if ( (byte_418825F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418825F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  v10 = Instance;
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  datalist_high = HIDWORD(v10->fields.datalist);
  payNum = this->fields.payNum;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  v13 = datalist_high / payNum;
  ((void (__fastcall *)(DataManager_o *, bool, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    v13 > 0,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v13 > 0, 0LL);
  drawBtnLb = (UIWidget_o *)this->fields.drawBtnLb;
  v15 = v13 <= 0;
  v16 = v13 <= 0 ? 3 : 0;
  if ( v15 )
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  else
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  UIWidget__set_color(drawBtnLb, *(UnityEngine_Color_o *)&v17, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_24:
    sub_B2C434(Instance, v7);
  }
  ((void (__fastcall *)(DataManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    v16,
    0LL,
    Instance->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  TreasureBoxDrawRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4188265 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent_Response__, *(_QWORD *)&drawNum);
    sub_B2C35C(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4188265 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TreasureBoxDrawRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v8,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_WarBoardWallAttackRequest )
    sub_B2C434(Request_WarBoardWallAttackRequest, v10);
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

  if ( (byte_4188261 & 1) == 0 )
  {
    sub_B2C35C(&EventTreasureBoxPanelComponent_TypeInfo, data);
    byte_4188261 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B2C2F8(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_4188262 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&EventTreasureBoxPanelComponent_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4188262 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B2C434(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v10;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4188260 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5859/*"Effect/TreasureBox"*/, v5);
    byte_4188260 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5859/*"Effect/TreasureBox"*/, v6, 1, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  UISprite_o *Component_srcLineSprite; // x20
  struct EventTreasureBoxPanelComponent_o *v14; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  struct EventTreasureBoxPanelComponent_o *v19; // x8
  struct TreasureBoxEntity_o *v20; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  struct EventTreasureBoxPanelComponent_o *v24; // x8
  struct TreasureBoxEntity_o *v25; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  struct EventTreasureBoxPanelComponent_o *v29; // x8
  struct EventTreasureBoxPanelComponent_o *v30; // x8
  struct EventTreasureBoxPanelComponent_o *v31; // x8
  int v32; // [xsp+Ch] [xbp-24h] BYREF
  int v33; // [xsp+18h] [xbp-18h] BYREF
  int v34; // [xsp+1Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_41841A1 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_22796/*"treasurechest_btn_open"*/, v5);
    sub_B2C35C(&StringLiteral_22798/*"treasurechest_img_bg"*/, v6);
    sub_B2C35C(&StringLiteral_22794/*"treasurechest_btn_info"*/, v7);
    sub_B2C35C(&StringLiteral_22802/*"treasurechest_img_line"*/, v8);
    sub_B2C35C(&StringLiteral_22792/*"treasurechest_bg_{0}"*/, v9);
    sub_B2C35C(&StringLiteral_22800/*"treasurechest_img_frame_0{0}b"*/, v10);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_B2C35C(&StringLiteral_22801/*"treasurechest_img_frame_0{0}f"*/, v11);
    byte_41841A1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)this,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     Component_srcLineSprite,
                                                                     (System_String_o *)StringLiteral_22796/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_18;
  treasureBoxBg = v14->fields.treasureBoxBg;
  v34 = ent->fields.idx + 1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v18 = System_String__Format((System_String_o *)StringLiteral_22792/*"treasurechest_bg_{0}"*/, v17, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v18, 0LL);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_18;
  v20 = v2->fields.ent;
  if ( !v20 )
    goto LABEL_18;
  treasureIconFrameFront = v19->fields.treasureIconFrameFront;
  v33 = v20->fields.idx + 1;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v23 = System_String__Format((System_String_o *)StringLiteral_22801/*"treasurechest_img_frame_0{0}f"*/, v22, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v23,
                                                                     0LL);
  v24 = v2->fields.__4__this;
  if ( !v24 )
    goto LABEL_18;
  v25 = v2->fields.ent;
  if ( !v25 )
    goto LABEL_18;
  treasureIconFrameBack = v24->fields.treasureIconFrameBack;
  v32 = v25->fields.idx + 1;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v28 = System_String__Format((System_String_o *)StringLiteral_22800/*"treasurechest_img_frame_0{0}b"*/, v27, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v28,
                                                                     0LL);
  v29 = v2->fields.__4__this;
  if ( !v29
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v29->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_22798/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v30 = v2->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v30->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_22794/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v31 = v2->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B2C434(this, method);
  }
  AtlasManager__SetEventUI(v31->fields.treasureBoxLine, (System_String_o *)StringLiteral_22802/*"treasurechest_img_line"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v7; // x9
  System_Action_T1__T2__T3__o *static_fields; // x20
  Il2CppObject *v9; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_41841A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_B2C35C(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v4);
    byte_41841A2 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
  {
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  v7 = *((_QWORD *)monitor + 4);
  if ( !v7 )
    goto LABEL_11;
  static_fields = (System_Action_T1__T2__T3__o *)klass->static_fields;
  v9 = *(Il2CppObject **)(v7 + 24);
  v10 = (System_Action_o *)v2[2].monitor;
  if ( !v10 )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0LL);
    v2[2].monitor = v10;
    sub_B2C2F8(&v2[2].monitor, v10);
  }
  if ( !static_fields )
LABEL_11:
    sub_B2C434(this, method);
  System_Action_object__int__object___Invoke(
    static_fields,
    v9,
    0,
    (Il2CppObject *)v10,
    (const MethodInfo_24CBE88 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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

  if ( (byte_41841A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41841A4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    v8 = sub_B2C460(Instance);
    sub_B2C400(v8, 0LL);
  }
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_B2C434(Instance, v4);
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

  if ( (byte_41841A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41841A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_B2C434(Instance, v4);
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