void __fastcall EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t eventEndTime; // x21
  System_String_o *v24; // x20
  System_String_o *RestTime2; // x21
  System_String_o *v26; // x0
  bool v27; // w0
  System_String_o *v28; // x22
  __int64 *v29; // x8
  System_String_o *v30; // x0
  System_String_o *v31; // x20
  System_String_o *v32; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v34; // x0
  __int64 v35; // x1

  if ( (byte_42E84A3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13528/*"TIME_OVER_EVENTREWARD"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15932/*"[FFFF00,FFFF00]"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15928/*"[E1A545,FEEF99]"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13536/*"TIME_REST2_TIMEOVER"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13550/*"TIME_REST_EVENTREWARD"*/, v20, v21, v22);
    byte_42E84A3 = 1;
  }
  eventEndTime = this->fields.eventEndTime;
  v24 = (System_String_o *)StringLiteral_15928/*"[E1A545,FEEF99]"*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v27 = System_String__op_Equality(RestTime2, v26, 0LL);
  v28 = (System_String_o *)StringLiteral_15932/*"[FFFF00,FFFF00]"*/;
  if ( v27 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_13528/*"TIME_OVER_EVENTREWARD"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_13550/*"TIME_REST_EVENTREWARD"*/;
  }
  v30 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
  v31 = System_String__Concat_44577788(v24, v30, 0LL);
  v32 = System_String__Concat_44577788(v28, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v34 = System_String__Concat_44580072(v31, (System_String_o *)StringLiteral_81/*" "*/, v32, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_B5D69C(v34, v35);
  UILabel__set_text(treasureBoxEndTimeLabel, v34, 0LL);
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  __int64 v55; // x26
  void *Instance; // x0
  const MethodInfo *v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct TreasureBoxEntity_o **v64; // x24
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Action_o *v71; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v75; // x1
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct System_String_o **p_age; // x8
  struct System_String_o *v108; // x1
  const MethodInfo *v109; // x1
  __int64 v110; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v112; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct TreasureBoxEntity_o *v114; // x8
  __int64 v115; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E84A1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)ent, svtId, drawAction);
    sub_B5D5C4(&AtlasManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v37, v38, v39);
    sub_B5D5C4(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_13603/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_13602/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_13594/*"TREASURE_BOX_DRAW_TEXT"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_1/*""*/, v52, v53, v54);
    byte_42E84A1 = 1;
  }
  entity = 0LL;
  v55 = sub_B5D694(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)v55,
    0LL);
  if ( !v55 )
    goto LABEL_38;
  *(_QWORD *)(v55 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v55 + 16), (System_Int32_array **)this, v58, v59, v60, v61, v62, v63);
  *(_QWORD *)(v55 + 24) = ent;
  v64 = (struct TreasureBoxEntity_o **)(v55 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v55 + 24), (System_Int32_array **)ent, v65, v66, v67, v68, v69, v70);
  if ( !*(_QWORD *)(v55 + 24) )
    return;
  v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v55,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v71, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13603/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_38;
  UILabel__set_text(userEventItemLb, (System_String_o *)Instance, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13602/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_38;
  UILabel__set_text(payEventItemLb, (System_String_o *)Instance, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_38;
  UILabel__set_text(drawBtnLb, (System_String_o *)Instance, 0LL);
  v75 = *v64;
  this->fields.treasureBoxEntity = *v64;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
    (System_Int32_array **)v75,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.drawAction,
    (System_Int32_array **)drawAction,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  this->fields.playVoiceAction = playVoice;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields.requestCallBack = requestCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*p_treasureBoxEntity || !Instance )
    goto LABEL_38;
  Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       &entity,
                       (*p_treasureBoxEntity)->fields.iconId,
                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v108 = *p_age;
  this->fields.itemName = *p_age;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)v108,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v109);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    v115 = sub_B5D6C8(Instance);
    sub_B5D668(v115, 0LL);
  }
  v110 = *((_QWORD *)Instance + 4);
  if ( !v110 )
    goto LABEL_38;
  this->fields.payNum = *(_DWORD *)(v110 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Instance = System_Int32__ToString((int)this + 160, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_38;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Instance, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v112);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_38;
  Instance = this->fields.eventTreasureBoxItemInfo;
  if ( !Instance
    || (EventItemComponent__Set((EventItemComponent_o *)Instance, treasureBoxEntity->fields.iconId, 0LL),
        (v114 = this->fields.treasureBoxEntity) == 0LL)
    || (Instance = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v114->fields.iconId, -1, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Instance
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     (*p_treasureBoxEntity)->fields.eventId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_38:
    sub_B5D69C(Instance, v57);
  }
  this->fields.eventEndTime = *((_QWORD *)Instance + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v57);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDetail(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  AutomatedAction_o *Instance; // x0
  __int64 v18; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_42E84A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E84A8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (AutomatedAction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v18);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  System_Action_int__o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_42E84A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E84A9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v16 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  if ( !treasureBoxBuyWindow )
    sub_B5D69C(v17, v18);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v16, 8, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 v42; // x20
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  const MethodInfo *v52; // x1
  struct TreasureBoxEntity_o *v53; // x8
  Il2CppObject *v54; // x21
  System_Int32_array **v55; // x0
  __int64 *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x8
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 v72; // x9
  __int64 v73; // x8
  __int64 v74; // x8
  __int64 v75; // x8
  __int64 v76; // x8
  System_Action_o *v77; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Action_o *v84; // x22
  __int64 v85; // x8
  __int64 v86; // x8
  __int64 v87; // x0

  if ( (byte_42E84AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__string____Action__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v27, v28, v29);
    sub_B5D5C4(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v39, v40, v41);
    byte_42E84AB = 1;
  }
  v42 = sub_B5D694(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)v42,
    0LL);
  if ( !v42 )
    goto LABEL_35;
  *(_QWORD *)(v42 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 16), (System_Int32_array **)this, v45, v46, v47, v48, v49, v50);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
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
    (const MethodInfo_259A7B0 *)Method_System_Action_int__string____Action__Invoke__);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v52);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  v53 = this->fields.treasureBoxEntity;
  if ( !v53 )
    goto LABEL_35;
  Instance = (DataManager_o *)this->fields.eventTreasureBoxItemInfo;
  if ( !Instance )
    goto LABEL_35;
  EventItemComponent__Set((EventItemComponent_o *)Instance, v53->fields.iconId, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_35;
  TreasureBoxBulkBuyConfirmMenu__Close((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL);
  v54 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v55 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v54,
                                 (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v42 + 24) = v55;
  v56 = (__int64 *)(v42 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 24), v55, v57, v58, v59, v60, v61, v62);
  v69 = *(_QWORD *)(v42 + 24);
  if ( !v69 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_36;
  v70 = *(_QWORD *)(v69 + 32);
  if ( !v70 )
    goto LABEL_35;
  v71 = *(_QWORD *)(v70 + 32);
  if ( !v71 )
    goto LABEL_35;
  v72 = *(_QWORD *)(v71 + 24);
  if ( v72 )
  {
    if ( !(_DWORD)v72 )
      goto LABEL_36;
    v73 = *(_QWORD *)(v71 + 32);
    if ( !v73 )
      goto LABEL_35;
    this->fields.eventPointNum = *(_QWORD *)(v73 + 32);
  }
  *(_QWORD *)(v42 + 32) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), 0LL, v63, v64, v65, v66, v67, v68);
  v74 = *(_QWORD *)(v42 + 24);
  if ( !v74 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v74 + 24) )
  {
LABEL_36:
    v87 = sub_B5D6C8(Instance);
    sub_B5D668(v87, 0LL);
  }
  v75 = *(_QWORD *)(v74 + 32);
  if ( !v75 )
    goto LABEL_35;
  v76 = *(_QWORD *)(v75 + 24);
  if ( !v76 )
    goto LABEL_35;
  if ( *(_QWORD *)(v76 + 24) )
  {
    v77 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v42,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0LL);
    *(_QWORD *)(v42 + 32) = v77;
    sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
    v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v84,
      (Il2CppObject *)v42,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0LL);
  }
  else
  {
    v84 = 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v85 = *v56;
  if ( !*v56 )
LABEL_35:
    sub_B5D69C(Instance, v44);
  if ( !*(_DWORD *)(v85 + 24) )
    goto LABEL_36;
  v86 = *(_QWORD *)(v85 + 32);
  if ( !v86 || !Instance )
    goto LABEL_35;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v86 + 16),
    *(BattleDropItem_array **)(v86 + 24),
    1,
    this->fields.treasureBoxEntity,
    v84,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7058/*"GetTreasureBoxEventEnableTime"*/, (_DWORD)method, v2, v3);
    byte_42E84A2 = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7058/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  DataManager_o *v18; // x8
  int datalist_high; // w20
  int32_t payNum; // w21
  int v21; // w20
  UIWidget_o *drawBtnLb; // x21
  bool v23; // cc
  unsigned int v24; // w20
  int v25; // s0

  if ( (byte_42E84A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E84A4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  v18 = Instance;
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  datalist_high = HIDWORD(v18->fields.datalist);
  payNum = this->fields.payNum;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  v21 = datalist_high / payNum;
  ((void (__fastcall *)(DataManager_o *, bool, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    v21 > 0,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Instance,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v21 > 0, 0LL);
  drawBtnLb = (UIWidget_o *)this->fields.drawBtnLb;
  v23 = v21 <= 0;
  v24 = v21 <= 0 ? 3 : 0;
  if ( v23 )
  {
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_gray(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  else
  {
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  UIWidget__set_color(drawBtnLb, *(UnityEngine_Color_o *)&v25, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxDrawBtn;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(Instance, v15);
  }
  ((void (__fastcall *)(DataManager_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    v24,
    0LL,
    Instance->klass[1]._1.interfaceOffsets);
}


void __fastcall EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
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
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  TreasureBoxDrawRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_42E84AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent_Response__, drawNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E84AA = 1;
  }
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TreasureBoxDrawRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v15,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_WarBoardWallAttackRequest )
    sub_B5D69C(Request_WarBoardWallAttackRequest, v17);
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

  if ( (byte_42E84A6 & 1) == 0 )
  {
    sub_B5D5C4(&EventTreasureBoxPanelComponent_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E84A6 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B5D560(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
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
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0

  if ( (byte_42E84A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&EventTreasureBoxPanelComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E84A7 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_12;
  v17 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform(v17, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_12:
    sub_B5D69C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return v17;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42E84A5 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5938/*"Effect/TreasureBox"*/, v11, v12, v13);
    byte_42E84A5 = 1;
  }
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5938/*"Effect/TreasureBox"*/, v14, 1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
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
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  UISprite_o *Component_srcLineSprite; // x20
  struct EventTreasureBoxPanelComponent_o *v34; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  struct EventTreasureBoxPanelComponent_o *v39; // x8
  struct TreasureBoxEntity_o *v40; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  struct EventTreasureBoxPanelComponent_o *v44; // x8
  struct TreasureBoxEntity_o *v45; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  struct EventTreasureBoxPanelComponent_o *v49; // x8
  struct EventTreasureBoxPanelComponent_o *v50; // x8
  struct EventTreasureBoxPanelComponent_o *v51; // x8
  int v52; // [xsp+Ch] [xbp-24h] BYREF
  int v53; // [xsp+18h] [xbp-18h] BYREF
  int v54; // [xsp+1Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E569B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23101/*"treasurechest_btn_open"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23103/*"treasurechest_img_bg"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23099/*"treasurechest_btn_info"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23107/*"treasurechest_img_line"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23097/*"treasurechest_bg_{0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23105/*"treasurechest_img_frame_0{0}b"*/, v26, v27, v28);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_B5D5C4(&StringLiteral_23106/*"treasurechest_img_frame_0{0}f"*/, v29, v30, v31);
    byte_42E569B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)this,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     Component_srcLineSprite,
                                                                     (System_String_o *)StringLiteral_23101/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v34 = v4->fields.__4__this;
  if ( !v34 )
    goto LABEL_18;
  ent = v4->fields.ent;
  if ( !ent )
    goto LABEL_18;
  treasureBoxBg = v34->fields.treasureBoxBg;
  v54 = ent->fields.idx + 1;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v38 = System_String__Format((System_String_o *)StringLiteral_23097/*"treasurechest_bg_{0}"*/, v37, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v38, 0LL);
  v39 = v4->fields.__4__this;
  if ( !v39 )
    goto LABEL_18;
  v40 = v4->fields.ent;
  if ( !v40 )
    goto LABEL_18;
  treasureIconFrameFront = v39->fields.treasureIconFrameFront;
  v53 = v40->fields.idx + 1;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v43 = System_String__Format((System_String_o *)StringLiteral_23106/*"treasurechest_img_frame_0{0}f"*/, v42, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v43,
                                                                     0LL);
  v44 = v4->fields.__4__this;
  if ( !v44 )
    goto LABEL_18;
  v45 = v4->fields.ent;
  if ( !v45 )
    goto LABEL_18;
  treasureIconFrameBack = v44->fields.treasureIconFrameBack;
  v52 = v45->fields.idx + 1;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v48 = System_String__Format((System_String_o *)StringLiteral_23105/*"treasurechest_img_frame_0{0}b"*/, v47, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v48,
                                                                     0LL);
  v49 = v4->fields.__4__this;
  if ( !v49
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v49->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_23103/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v50 = v4->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v50->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_23099/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v51 = v4->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(this, method);
  }
  AtlasManager__SetEventUI(v51->fields.treasureBoxLine, (System_String_o *)StringLiteral_23107/*"treasurechest_img_line"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v13; // x9
  System_Action_T1__T2__T3__o *static_fields; // x20
  Il2CppObject *v15; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E569C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_B5D5C4(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    byte_42E569C = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
  {
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
  v13 = *((_QWORD *)monitor + 4);
  if ( !v13 )
    goto LABEL_11;
  static_fields = (System_Action_T1__T2__T3__o *)klass->static_fields;
  v15 = *(Il2CppObject **)(v13 + 24);
  v16 = (System_Action_o *)v4[2].monitor;
  if ( !v16 )
  {
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, v4, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0LL);
    v4[2].monitor = v16;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !static_fields )
LABEL_11:
    sub_B5D69C(this, method);
  System_Action_object__int__object___Invoke(
    static_fields,
    v15,
    0,
    (Il2CppObject *)v16,
    (const MethodInfo_259B6D0 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v8; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9
  __int64 v10; // x0

  if ( (byte_42E569E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E569E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    v10 = sub_B5D6C8(Instance);
    sub_B5D668(v10, 0LL);
  }
  v8 = res->m_Items[0];
  if ( !v8 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_B5D69C(Instance, v6);
  CommonUI__OpenTreasureBoxDialog(
    Instance,
    0LL,
    v8->fields.eventRewardInfos,
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_42E569D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E569D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_B5D69C(Instance, v6);
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