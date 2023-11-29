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

  if ( (byte_40F9BE3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_13316, v3);
    sub_B16FFC(&StringLiteral_80, v4);
    sub_B16FFC(&StringLiteral_15679, v5);
    sub_B16FFC(&StringLiteral_15675, v6);
    sub_B16FFC(&StringLiteral_13324, v7);
    sub_B16FFC(&StringLiteral_13338, v8);
    byte_40F9BE3 = 1;
  }
  eventEndTime = this->fields.eventEndTime;
  v10 = (System_String_o *)StringLiteral_15675;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13324, 0LL);
  v13 = System_String__op_Equality(RestTime2, v12, 0LL);
  v14 = (System_String_o *)StringLiteral_15679;
  if ( v13 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_13316;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = &StringLiteral_13338;
  }
  v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
  v17 = System_String__Concat_43743732(v10, v16, 0LL);
  v18 = System_String__Concat_43743732(v14, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v20 = System_String__Concat_43746016(v17, (System_String_o *)StringLiteral_80, v18, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_B170D4();
  UILabel__set_text(treasureBoxEndTimeLabel, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct TreasureBoxEntity_o **v34; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x25
  UILabel_o *userEventItemLb; // x25
  System_String_o *v47; // x0
  UILabel_o *payEventItemLb; // x25
  System_String_o *v49; // x0
  UILabel_o *drawBtnLb; // x25
  System_String_o *v51; // x0
  struct TreasureBoxEntity_o *v52; // x1
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_String_o **p_age; // x8
  struct System_String_o *v87; // x1
  const MethodInfo *v88; // x1
  WebViewManager_o *v89; // x0
  CommonConsumeMaster_o *v90; // x0
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  CommonConsumeEntity_o *v94; // x8
  UILabel_o *treasureBoxPayNum; // x20
  System_String_o *v96; // x0
  const MethodInfo *v97; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x0
  struct TreasureBoxEntity_o *v100; // x8
  ItemIconComponent_o *treasureIcon; // x0
  WebViewManager_o *v102; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v103; // x0
  WarEntity_o *v104; // x0
  const MethodInfo *v105; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F9BE1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, ent);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v21);
    sub_B16FFC(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_13391, v23);
    sub_B16FFC(&StringLiteral_13390, v24);
    sub_B16FFC(&StringLiteral_13382, v25);
    sub_B16FFC(&StringLiteral_1, v26);
    byte_40F9BE1 = 1;
  }
  entity = 0LL;
  v27 = sub_B170CC(
          EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo,
          ent,
          *(_QWORD *)&svtId,
          drawAction,
          playVoice);
  EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_38;
  *(_QWORD *)(v27 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v27 + 24) = ent;
  v34 = (struct TreasureBoxEntity_o **)(v27 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)ent, v35, v36, v37, v38, v39, v40);
  if ( !*(_QWORD *)(v27 + 24) )
    return;
  v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v27,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v45, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13391, 0LL);
  if ( !userEventItemLb )
    goto LABEL_38;
  UILabel__set_text(userEventItemLb, v47, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_13390, 0LL);
  if ( !payEventItemLb )
    goto LABEL_38;
  UILabel__set_text(payEventItemLb, v49, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_13382, 0LL);
  if ( !drawBtnLb )
    goto LABEL_38;
  UILabel__set_text(drawBtnLb, v51, 0LL);
  v52 = *v34;
  this->fields.treasureBoxEntity = *v34;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
    (System_Int32_array **)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.drawAction,
    (System_Int32_array **)drawAction,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.playVoiceAction = playVoice;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.requestCallBack = requestCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)requestCallBack,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*p_treasureBoxEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (*p_treasureBoxEntity)->fields.iconId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_38;
    p_age = &entity->fields.age;
  }
  else
  {
    p_age = (struct System_String_o **)&StringLiteral_1;
  }
  v87 = *p_age;
  this->fields.itemName = *p_age;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemName,
    (System_Int32_array **)v87,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v88);
  v89 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v89 )
    goto LABEL_38;
  v90 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v89,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_38;
  if ( !v90 )
    goto LABEL_38;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(v90, (*p_treasureBoxEntity)->fields.commonConsumeId, 0LL);
  if ( !IdEntityList )
    goto LABEL_38;
  if ( !IdEntityList->max_length )
  {
    sub_B17100(IdEntityList, v92, v93);
    sub_B170A0();
  }
  v94 = IdEntityList->m_Items[0];
  if ( !v94 )
    goto LABEL_38;
  this->fields.payNum = v94->fields.num;
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  v96 = System_Int32__ToString((int)this + 160, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_38;
  UILabel__set_text(treasureBoxPayNum, v96, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v97);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_38;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  if ( !eventTreasureBoxItemInfo
    || (EventItemComponent__Set(eventTreasureBoxItemInfo, treasureBoxEntity->fields.iconId, 0LL),
        (v100 = this->fields.treasureBoxEntity) == 0LL)
    || (treasureIcon = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem(treasureIcon, v100->fields.iconId, -1, 0LL),
        (v102 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v103 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v102,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !v103
    || (v104 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v103,
                 (*p_treasureBoxEntity)->fields.eventId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  this->fields.eventEndTime = (int64_t)v104->fields.coordinate;
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v105);
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
  WebViewManager_o *v8; // x0
  TreasureBoxGiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20
  CommonUI_o *v12; // x0

  if ( (byte_40F9BE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F9BE8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (TreasureBoxGiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v8,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !MasterData_WarQuestSelectionMaster
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             MasterData_WarQuestSelectionMaster,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__OpenTreasureBoxDialog(
    v12,
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_int__o *v12; // x22

  if ( (byte_40F9BE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F9BE9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v12 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v8, v9, v10, v11);
  System_Action_int____ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  if ( !treasureBoxBuyWindow )
    sub_B170D4();
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v12, 8, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
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
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WebViewManager_o *Instance; // x0
  TreasureBoxTalkMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_String_o *TreasureBoxVoiceData; // x0
  const MethodInfo *v30; // x1
  struct TreasureBoxEntity_o *v31; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x0
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x0
  Il2CppObject *v34; // x21
  System_Int32_array **v35; // x0
  __int64 *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  CommonUI_o *v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x8
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x8
  __int64 v59; // x8
  __int64 v60; // x8
  System_Action_o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_o *v72; // x22
  __int64 v73; // x8
  __int64 v74; // x8

  if ( (byte_40F9BEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__string____Action__Invoke__, result);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v8);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v13);
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v14);
    sub_B16FFC(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_20980, v16);
    sub_B16FFC(&StringLiteral_15571, v17);
    sub_B16FFC(&StringLiteral_15807, v18);
    byte_40F9BEB = 1;
  }
  v19 = sub_B170CC(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, result, method, v3, v4);
  EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
    (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_35;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (TreasureBoxTalkMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_35;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  TreasureBoxVoiceData = (System_String_o *)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                                              MasterData_WarQuestSelectionMaster,
                                              treasureBoxEntity->fields.id,
                                              0LL);
  if ( !this->fields.playVoiceAction )
    goto LABEL_35;
  System_Action_int__string__string___Invoke(
    (System_Action_int__string__string__o *)this->fields.playVoiceAction,
    this->fields.svtId,
    TreasureBoxVoiceData,
    0LL,
    (const MethodInfo_24C613C *)Method_System_Action_int__string____Action__Invoke__);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v30);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  v31 = this->fields.treasureBoxEntity;
  if ( !v31 )
    goto LABEL_35;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  if ( !eventTreasureBoxItemInfo )
    goto LABEL_35;
  EventItemComponent__Set(eventTreasureBoxItemInfo, v31->fields.iconId, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  if ( !treasureBoxBuyWindow )
    goto LABEL_35;
  TreasureBoxBulkBuyConfirmMenu__Close(treasureBoxBuyWindow, 0LL);
  v34 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          result,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v35 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v34,
                                 (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v19 + 24) = v35;
  v36 = (__int64 *)(v19 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 24), v35, v37, v38, v39, v40, v41, v42);
  v51 = *(_QWORD *)(v19 + 24);
  if ( !v51 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v51 + 24) )
    goto LABEL_36;
  v52 = *(_QWORD *)(v51 + 32);
  if ( !v52 )
    goto LABEL_35;
  v53 = *(_QWORD *)(v52 + 32);
  if ( !v53 )
    goto LABEL_35;
  v54 = *(_QWORD *)(v53 + 24);
  if ( v54 )
  {
    if ( !(_DWORD)v54 )
      goto LABEL_36;
    v55 = *(_QWORD *)(v53 + 32);
    if ( !v55 )
      goto LABEL_35;
    this->fields.eventPointNum = *(_QWORD *)(v55 + 32);
  }
  *(_QWORD *)(v19 + 32) = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 32), 0LL, v45, v46, v47, v48, v49, v50);
  v58 = *(_QWORD *)(v19 + 24);
  if ( !v58 )
    goto LABEL_35;
  if ( !*(_DWORD *)(v58 + 24) )
  {
LABEL_36:
    sub_B17100(v43, v44, v45);
    sub_B170A0();
  }
  v59 = *(_QWORD *)(v58 + 32);
  if ( !v59 )
    goto LABEL_35;
  v60 = *(_QWORD *)(v59 + 24);
  if ( !v60 )
    goto LABEL_35;
  if ( *(_QWORD *)(v60 + 24) )
  {
    v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v56, v57);
    System_Action___ctor(
      v61,
      (Il2CppObject *)v19,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0LL);
    *(_QWORD *)(v19 + 32) = v61;
    sub_B16F98((BattleServantConfConponent_o *)(v19 + 32), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
    v72 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v19,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0LL);
  }
  else
  {
    v72 = 0LL;
  }
  v43 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v73 = *v36;
  if ( !*v36 )
LABEL_35:
    sub_B170D4();
  if ( !*(_DWORD *)(v73 + 24) )
    goto LABEL_36;
  v74 = *(_QWORD *)(v73 + 32);
  if ( !v74 || !v43 )
    goto LABEL_35;
  CommonUI__OpenTreasureBoxDialog(
    v43,
    *(System_Int32_array **)(v74 + 16),
    *(BattleDropItem_array **)(v74 + 24),
    1,
    this->fields.treasureBoxEntity,
    v72,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9BE2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6947, method);
    byte_40F9BE2 = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6947,
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *v11; // x8
  UnityEngine_GameObject_o *treasureBoxDrawBtn; // x0
  int32_t num; // w20
  int32_t payNum; // w21
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v16; // w20
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Behaviour_o *v18; // x0
  UIWidget_o *drawBtnLb; // x21
  bool v20; // cc
  unsigned int v21; // w20
  int v22; // s0
  UnityEngine_GameObject_o *v26; // x0
  srcLineSprite_o *v27; // x0

  if ( (byte_40F9BE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9BE4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_24;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       treasureBoxEntity->fields.iconId,
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_24;
  v11 = EntityDefinitely;
  treasureBoxDrawBtn = this->fields.treasureBoxDrawBtn;
  if ( !treasureBoxDrawBtn )
    goto LABEL_24;
  num = v11->fields.num;
  payNum = this->fields.payNum;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              treasureBoxDrawBtn,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Component_srcLineSprite )
    goto LABEL_24;
  v16 = num / payNum;
  ((void (__fastcall *)(srcLineSprite_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
    Component_srcLineSprite,
    v16 > 0,
    Component_srcLineSprite->klass[1]._1.byval_arg.data);
  v17 = this->fields.treasureBoxDrawBtn;
  if ( !v17 )
    goto LABEL_24;
  v18 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v17,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !v18 )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(v18, v16 > 0, 0LL);
  drawBtnLb = (UIWidget_o *)this->fields.drawBtnLb;
  v20 = v16 <= 0;
  v21 = v16 <= 0 ? 3 : 0;
  if ( v20 )
  {
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  else
  {
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
    if ( !drawBtnLb )
      goto LABEL_24;
  }
  UIWidget__set_color(drawBtnLb, *(UnityEngine_Color_o *)&v22, 0LL);
  v26 = this->fields.treasureBoxDrawBtn;
  if ( !v26
    || (v27 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v26,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  ((void (__fastcall *)(srcLineSprite_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v27->klass[1]._1.implementedInterfaces)(
    v27,
    v21,
    0LL,
    v27->klass[1]._1.interfaceOffsets);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  TreasureBoxDrawRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_40F9BEA & 1) == 0 )
  {
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent_Response__, *(_QWORD *)&drawNum);
    sub_B16FFC(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40F9BEA = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&drawNum,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TreasureBoxDrawRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v10,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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

  if ( (byte_40F9BE6 & 1) == 0 )
  {
    sub_B16FFC(&EventTreasureBoxPanelComponent_TypeInfo, data);
    byte_40F9BE6 = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B16F98(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_40F9BE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parentTr);
    sub_B16FFC(&EventTreasureBoxPanelComponent_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F9BE7 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_12;
  v11 = v10;
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTr, 0LL),
        v13 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !v13)
    || (UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  return v11;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  if ( (byte_40F9BE5 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5842, v8);
    byte_40F9BE5 = 1;
  }
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5842, v9, 1, 0LL);
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
  UnityEngine_GameObject_o *treasureBoxDrawBtn; // x0
  UISprite_o *Component_srcLineSprite; // x20
  struct EventTreasureBoxPanelComponent_o *v15; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct EventTreasureBoxPanelComponent_o *v20; // x8
  struct TreasureBoxEntity_o *v21; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  struct EventTreasureBoxPanelComponent_o *v25; // x8
  struct TreasureBoxEntity_o *v26; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  struct EventTreasureBoxPanelComponent_o *v30; // x8
  struct EventTreasureBoxPanelComponent_o *v31; // x8
  struct EventTreasureBoxPanelComponent_o *v32; // x8
  int v33; // [xsp+Ch] [xbp-24h] BYREF
  int v34; // [xsp+18h] [xbp-18h] BYREF
  int v35; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F706E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_22703, v5);
    sub_B16FFC(&StringLiteral_22705, v6);
    sub_B16FFC(&StringLiteral_22701, v7);
    sub_B16FFC(&StringLiteral_22709, v8);
    sub_B16FFC(&StringLiteral_22699, v9);
    sub_B16FFC(&StringLiteral_22707, v10);
    sub_B16FFC(&StringLiteral_22708, v11);
    byte_40F706E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  treasureBoxDrawBtn = _4__this->fields.treasureBoxDrawBtn;
  if ( !treasureBoxDrawBtn )
    goto LABEL_18;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            treasureBoxDrawBtn,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, (System_String_o *)StringLiteral_22703, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_18;
  ent = this->fields.ent;
  if ( !ent )
    goto LABEL_18;
  treasureBoxBg = v15->fields.treasureBoxBg;
  v35 = ent->fields.idx + 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  v19 = System_String__Format((System_String_o *)StringLiteral_22699, v18, 0LL);
  AtlasManager__SetEventUI(treasureBoxBg, v19, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_18;
  v21 = this->fields.ent;
  if ( !v21 )
    goto LABEL_18;
  treasureIconFrameFront = v20->fields.treasureIconFrameFront;
  v34 = v21->fields.idx + 1;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v24 = System_String__Format((System_String_o *)StringLiteral_22708, v23, 0LL);
  AtlasManager__SetEventUI(treasureIconFrameFront, v24, 0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_18;
  v26 = this->fields.ent;
  if ( !v26 )
    goto LABEL_18;
  treasureIconFrameBack = v25->fields.treasureIconFrameBack;
  v33 = v26->fields.idx + 1;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v29 = System_String__Format((System_String_o *)StringLiteral_22707, v28, 0LL);
  AtlasManager__SetEventUI(treasureIconFrameBack, v29, 0LL);
  v30 = this->fields.__4__this;
  if ( !v30
    || (AtlasManager__SetEventUI(v30->fields.eventItemRootBg, (System_String_o *)StringLiteral_22705, 0LL),
        (v31 = this->fields.__4__this) == 0LL)
    || (AtlasManager__SetEventUI(v31->fields.treasureBoxDetailBtn, (System_String_o *)StringLiteral_22701, 0LL),
        (v32 = this->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  AtlasManager__SetEventUI(v32->fields.treasureBoxLine, (System_String_o *)StringLiteral_22709, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct EventTreasureBoxPanelComponent_resData_array *res; // x9
  EventTreasureBoxPanelComponent_resData_o *v10; // x9
  System_Action_T1__T2__T3__o *requestCallBack; // x20
  Il2CppObject *p_obj; // x21
  System_Action_o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  v5 = this;
  if ( (byte_40F706F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v6);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_B16FFC(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v7);
    byte_40F706F = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  res = v5->fields.res;
  if ( !res )
    goto LABEL_11;
  if ( !res->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10 = res->m_Items[0];
  if ( !v10 )
    goto LABEL_11;
  requestCallBack = (System_Action_T1__T2__T3__o *)_4__this->fields.requestCallBack;
  p_obj = &v10->fields.eventRewardInfos->obj;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v5->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !requestCallBack )
LABEL_11:
    sub_B170D4();
  System_Action_object__int__object___Invoke(
    requestCallBack,
    p_obj,
    0,
    (Il2CppObject *)_9__2,
    (const MethodInfo_24C705C *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v7; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9

  if ( (byte_40F7071 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7071 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
  {
    sub_B17100(Instance, v4, v5);
    sub_B170A0();
  }
  v7 = res->m_Items[0];
  if ( !v7 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__OpenTreasureBoxDialog(
    Instance,
    0LL,
    v7->fields.eventRewardInfos,
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
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_40F7070 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7070 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_B170D4();
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