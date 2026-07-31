void EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  int64_t eventEndTime; // x21
  System_String_o *RestTime2; // x21
  System_String_o *v7; // x0
  bool v8; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x22
  bool v12; // w23
  __int64 *v13; // x8
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v18; // x0
  __int64 v19; // x1

  if ( (byte_5932CAA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13921/*"TIME_OVER_EVENTREWARD"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_16515/*"[FFFF00,FFFF00]"*/);
    sub_21FFC50(&StringLiteral_16509/*"[E1A545,FEEF99]"*/);
    sub_21FFC50(&StringLiteral_13929/*"TIME_REST2_TIMEOVER"*/);
    sub_21FFC50(&StringLiteral_13943/*"TIME_REST_EVENTREWARD"*/);
    byte_5932CAA = 1;
  }
  v4 = (System_String_o *)StringLiteral_16509/*"[E1A545,FEEF99]"*/;
  eventEndTime = this->fields.eventEndTime;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13929/*"TIME_REST2_TIMEOVER"*/, 0);
  v8 = System_String__op_Equality(RestTime2, v7, 0);
  v11 = (System_String_o *)StringLiteral_16515/*"[FFFF00,FFFF00]"*/;
  v12 = v8;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  if ( v12 )
    v13 = &StringLiteral_13921/*"TIME_OVER_EVENTREWARD"*/;
  else
    v13 = &StringLiteral_13943/*"TIME_REST_EVENTREWARD"*/;
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0);
  v15 = System_String__Concat_75438412(v4, v14, 0);
  v16 = System_String__Concat_75438412(v11, RestTime2, 0);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v18 = System_String__Concat_75481624(v15, (System_String_o *)StringLiteral_113/*" "*/, v16, 0);
  if ( !treasureBoxEndTimeLabel )
    sub_21FFECC(v18, v19);
  UILabel__set_text(treasureBoxEndTimeLabel, v18, 0);
}


void EventTreasureBoxPanelComponent__Init(
        EventTreasureBoxPanelComponent_o *this,
        TreasureBoxEntity_o *ent,
        int32_t svtId,
        System_Action_o *drawAction,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 v13; // x26
  void *Master_object; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct TreasureBoxEntity_o **v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Action_o *v29; // x25
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v37; // x1
  TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  __int64 v64; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x20
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_String_o **p_monitor; // x8
  struct System_String_o *v73; // x1
  const MethodInfo *v74; // x1
  __int64 v75; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v77; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5932CA8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__);
    sub_21FFC50(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14052/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_21FFC50(&StringLiteral_14051/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_21FFC50(&StringLiteral_14044/*"TREASURE_BOX_DRAW_TEXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932CA8 = 1;
  }
  entity = 0;
  v13 = sub_21FFEBC(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_37;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = ent;
  v22 = (struct TreasureBoxEntity_o **)(v13 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)ent, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v13 + 24) )
    return;
  v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30, v31);
  AtlasManager__LoadEventUI(v29, 1, 0);
  userEventItemLb = this->fields.userEventItemLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_14052/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0);
  if ( !userEventItemLb )
    goto LABEL_37;
  UILabel__set_text(userEventItemLb, (System_String_o *)Master_object, 0);
  payEventItemLb = this->fields.payEventItemLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_14051/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0);
  if ( !payEventItemLb )
    goto LABEL_37;
  UILabel__set_text(payEventItemLb, (System_String_o *)Master_object, 0);
  drawBtnLb = this->fields.drawBtnLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_14044/*"TREASURE_BOX_DRAW_TEXT"*/, 0);
  if ( !drawBtnLb )
    goto LABEL_37;
  UILabel__set_text(drawBtnLb, (System_String_o *)Master_object, 0);
  v37 = *v22;
  this->fields.treasureBoxEntity = *v22;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureBoxEntity,
    (int32_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.drawAction,
    (int32_t)drawAction,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.playVoiceAction = playVoice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAction,
    (int32_t)playVoice,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.requestCallBack = requestCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallBack,
    (int32_t)requestCallBack,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63, v64);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId(*p_treasureBoxEntity, 0);
  if ( !v65 )
    goto LABEL_37;
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            v65,
                            &entity,
                            (int32_t)Master_object,
                            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_37;
    p_monitor = (struct System_String_o **)&entity[1].monitor;
  }
  else
  {
    p_monitor = (struct System_String_o **)&StringLiteral_1/*""*/;
  }
  v73 = *p_monitor;
  this->fields.itemName = *p_monitor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemName, (int32_t)v73, v66, v67, v68, v69, v70, v71);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v74);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  if ( !Master_object )
    goto LABEL_37;
  Master_object = CommonConsumeMaster__GetIdEntityList(
                    (CommonConsumeMaster_o *)Master_object,
                    (*p_treasureBoxEntity)->fields.commonConsumeId,
                    0);
  if ( !Master_object )
    goto LABEL_37;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_21FFED4(Master_object);
  v75 = *((_QWORD *)Master_object + 4);
  if ( !v75 )
    goto LABEL_37;
  this->fields.payNum = *(_DWORD *)(v75 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Master_object = System_Int32__ToString((int)this + 168, 0);
  if ( !treasureBoxPayNum )
    goto LABEL_37;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Master_object, 0);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v77);
  Master_object = this->fields.treasureBoxEntity;
  if ( !Master_object )
    goto LABEL_37;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Master_object, 0);
  if ( !eventTreasureBoxItemInfo
    || (EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)Master_object, 0),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0)
    || (Master_object = this->fields.treasureIcon) == 0
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, treasureBoxEntity->fields.iconId, -1, 1, 0),
        (Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (*p_treasureBoxEntity)->fields.eventId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_37:
    sub_21FFECC(Master_object, v15);
  }
  this->fields.eventEndTime = *((_QWORD *)Master_object + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v15);
}


void EventTreasureBoxPanelComponent__OnClickDetail(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_5932CAF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent_OnClickDetail__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_5932CAF = 1;
  }
  v3 = Method_EventTreasureBoxPanelComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventTreasureBoxPanelComponent_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    EmissionItemList,
    0,
    0,
    this->fields.treasureBoxEntity,
    0,
    this->fields.itemName,
    0);
}


void EventTreasureBoxPanelComponent__OnClickDrawBtn(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  System_Action_int__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_5932CB0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__);
    byte_5932CB0 = 1;
  }
  v3 = Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v7 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v7, (Il2CppObject *)this, Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, 0);
  if ( !treasureBoxBuyWindow )
    sub_21FFECC(v8, v9);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v7, 8, v10);
}


void EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x8
  const MethodInfo *v16; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x22
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  System_Object_array *v22; // x0
  __int64 *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x8
  System_Action_o *v44; // x23
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Action_o *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x8

  if ( (byte_5932CB2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__);
    sub_21FFC50(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932CB2 = 1;
  }
  v5 = sub_21FFEBC(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_34;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                                (TreasureBoxTalkMaster_o *)Instance,
                                treasureBoxEntity->fields.id,
                                0);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_34;
  ((void (__fastcall *)(intptr_t, _QWORD, DataManager_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)this->fields.svtId,
    Instance,
    0,
    playVoiceAction->fields.method);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v16);
  ActionExtensions__Call(this->fields.drawAction, 0);
  Instance = (DataManager_o *)this->fields.treasureBoxEntity;
  if ( !Instance )
    goto LABEL_34;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Instance = (DataManager_o *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Instance, 0);
  if ( !eventTreasureBoxItemInfo )
    goto LABEL_34;
  EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)Instance, 0);
  Instance = (DataManager_o *)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_34;
  TreasureBoxBulkBuyConfirmMenu__Close_39047928((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0, v18);
  v21 = (Il2CppObject *)System_String__Concat_75481624(
                          (System_String_o *)StringLiteral_16395/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16659/*"]"*/,
                          0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19, v20);
  v22 = JsonManager__DeserializeArray_object_(
          v21,
          (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v5 + 24) = v22;
  v23 = (__int64 *)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v22, v24, v25, v26, v27, v28, v29);
  v36 = *(_QWORD *)(v5 + 24);
  if ( !v36 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_35;
  v37 = *(_QWORD *)(v36 + 32);
  if ( !v37 )
    goto LABEL_34;
  v38 = *(_QWORD *)(v37 + 32);
  if ( !v38 )
    goto LABEL_34;
  v39 = *(_QWORD *)(v38 + 24);
  if ( v39 )
  {
    if ( !(_DWORD)v39 )
      goto LABEL_35;
    v40 = *(_QWORD *)(v38 + 32);
    if ( !v40 )
      goto LABEL_34;
    this->fields.eventPointNum = *(_QWORD *)(v40 + 32);
  }
  *(_QWORD *)(v5 + 32) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), 0, v30, v31, v32, v33, v34, v35);
  v41 = *(_QWORD *)(v5 + 24);
  if ( !v41 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v41 + 24) )
LABEL_35:
    sub_21FFED4(Instance);
  v42 = *(_QWORD *)(v41 + 32);
  if ( !v42 )
    goto LABEL_34;
  v43 = *(_QWORD *)(v42 + 24);
  if ( !v43 )
    goto LABEL_34;
  if ( *(_QWORD *)(v43 + 24) )
  {
    v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v5,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0);
    *(_QWORD *)(v5 + 32) = v44;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
    v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v5,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0);
  }
  else
  {
    v51 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v52 = *v23;
  if ( !*v23 )
LABEL_34:
    sub_21FFECC(Instance, v7);
  if ( !*(_DWORD *)(v52 + 24) )
    goto LABEL_35;
  v53 = *(_QWORD *)(v52 + 32);
  if ( !v53 || !Instance )
    goto LABEL_34;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v53 + 16),
    *(BattleDropItem_array **)(v53 + 24),
    1,
    this->fields.treasureBoxEntity,
    v51,
    0,
    0);
}


void EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5932CA9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7392/*"GetTreasureBoxEventEnableTime"*/);
    byte_5932CA9 = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7392/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  UnityEngine_GameObject_o *ConsumeItemId; // x0
  int64_t v8; // x21
  UnityEngine_GameObject_o *v9; // x8
  int klass_high; // w20
  int32_t payNum; // w22
  int v12; // w20
  float v13; // s0 OVERLAPPED
  float v14; // s3
  float v15; // s1
  float v16; // s2
  __int64 v17; // x1

  if ( (byte_5932CAB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932CAB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.treasureBoxEntity )
    goto LABEL_27;
  v8 = *(_QWORD *)(ConsumeItemId[7].fields.m_CachedPtr + 64);
  ConsumeItemId = (UnityEngine_GameObject_o *)TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0);
  if ( !Master_object )
    goto LABEL_27;
  ConsumeItemId = (UnityEngine_GameObject_o *)UserItemMaster__GetEntityDefinitely(
                                                (UserItemMaster_o *)Master_object,
                                                v8,
                                                (int32_t)ConsumeItemId,
                                                0);
  if ( !ConsumeItemId )
    goto LABEL_27;
  v9 = ConsumeItemId;
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_27;
  klass_high = HIDWORD(v9[1].klass);
  payNum = this->fields.payNum;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_27;
  v12 = klass_high / payNum;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))ConsumeItemId->klass[1]._1.name)(
    ConsumeItemId,
    v12 > 0,
    ConsumeItemId->klass[1]._1.namespaze);
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_27;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_27;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ConsumeItemId, v12 > 0, 0);
  ConsumeItemId = (UnityEngine_GameObject_o *)this->fields.drawBtnLb;
  if ( !ConsumeItemId )
    goto LABEL_27;
  v13 = 0.5;
  v14 = 1.0;
  if ( v12 > 0 )
    v13 = 1.0;
  v15 = v13;
  v16 = v13;
  UIWidget__set_color((UIWidget_o *)ConsumeItemId, *(UnityEngine_Color_o *)&v13, 0);
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId
    || (ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      ConsumeItemId,
                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_27:
    sub_21FFECC(ConsumeItemId, v4);
  }
  if ( v12 <= 0 )
    v17 = 3;
  else
    v17 = 0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))ConsumeItemId->klass[1]._1.nestedTypes)(
    ConsumeItemId,
    v17,
    0,
    ConsumeItemId->klass[1]._1.implementedInterfaces);
}


void EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_5932CB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent_Response__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932CB1 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_object )
    sub_21FFECC(Request_object, v9);
  TreasureBoxDrawRequest__beginRequest(
    (TreasureBoxDrawRequest_o *)Request_object,
    treasureBoxEntity->fields.id,
    drawNum,
    0);
}


void EventTreasureBoxPanelComponent__endloadEffect(
        EventTreasureBoxPanelComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932CAD & 1) == 0 )
  {
    sub_21FFC50(&EventTreasureBoxPanelComponent_TypeInfo);
    byte_5932CAD = 1;
  }
  if ( data )
  {
    EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


UnityEngine_GameObject_o *EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58323140; // x19
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_5932CAE & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&EventTreasureBoxPanelComponent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932CAE = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              effectAssetData,
                              name,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58323140,
                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v9 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5931940 )
  {
    effectAssetData = (AssetData_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5931945 )
  {
    effectAssetData = (AssetData_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v11 )
LABEL_15:
    sub_21FFECC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v9;
}


void EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5932CAC & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_EventTreasureBoxPanelComponent_endloadEffect__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&StringLiteral_6142/*"Effect/TreasureBox"*/);
    byte_5932CAC = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6142/*"Effect/TreasureBox"*/, v3, 1, 0, 0);
}


void EventTreasureBoxPanelComponent___c__DisplayClass26_0___ctor(
        EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTreasureBoxPanelComponent___c__DisplayClass26_0___Init_b__0(
        EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *v2; // x19
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x20
  struct EventTreasureBoxPanelComponent_o *v7; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct EventTreasureBoxPanelComponent_o *v12; // x8
  struct TreasureBoxEntity_o *v13; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  struct EventTreasureBoxPanelComponent_o *v17; // x8
  struct TreasureBoxEntity_o *v18; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct EventTreasureBoxPanelComponent_o *v22; // x8
  struct EventTreasureBoxPanelComponent_o *v23; // x8
  struct EventTreasureBoxPanelComponent_o *v24; // x8
  int v25; // [xsp+Ch] [xbp-34h] BYREF
  int v26; // [xsp+18h] [xbp-28h] BYREF
  int v27; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_5932CB3 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&StringLiteral_25466/*"treasurechest_btn_open"*/);
    sub_21FFC50(&StringLiteral_25468/*"treasurechest_img_bg"*/);
    sub_21FFC50(&StringLiteral_25464/*"treasurechest_btn_info"*/);
    sub_21FFC50(&StringLiteral_25472/*"treasurechest_img_line"*/);
    sub_21FFC50(&StringLiteral_25462/*"treasurechest_bg_{0}"*/);
    sub_21FFC50(&StringLiteral_25470/*"treasurechest_img_frame_0{0}b"*/);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_21FFC50(&StringLiteral_25471/*"treasurechest_img_frame_0{0}f"*/);
    byte_5932CB3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     (UISprite_o *)Component_object,
                                                                     (System_String_o *)StringLiteral_25466/*"treasurechest_btn_open"*/,
                                                                     0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_17;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_17;
  treasureBoxBg = v7->fields.treasureBoxBg;
  v27 = ent->fields.idx + 1;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v27);
  v11 = System_String__Format((System_String_o *)StringLiteral_25462/*"treasurechest_bg_{0}"*/, v10, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v11, 0);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_17;
  v13 = v2->fields.ent;
  if ( !v13 )
    goto LABEL_17;
  treasureIconFrameFront = v12->fields.treasureIconFrameFront;
  v26 = v13->fields.idx + 1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
  v16 = System_String__Format((System_String_o *)StringLiteral_25471/*"treasurechest_img_frame_0{0}f"*/, v15, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v16,
                                                                     0);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  v18 = v2->fields.ent;
  if ( !v18 )
    goto LABEL_17;
  treasureIconFrameBack = v17->fields.treasureIconFrameBack;
  v25 = v18->fields.idx + 1;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v25);
  v21 = System_String__Format((System_String_o *)StringLiteral_25470/*"treasurechest_img_frame_0{0}b"*/, v20, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v21,
                                                                     0);
  v22 = v2->fields.__4__this;
  if ( !v22
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v22->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_25468/*"treasurechest_img_bg"*/,
                                                                           0),
        (v23 = v2->fields.__4__this) == 0)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v23->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_25464/*"treasurechest_btn_info"*/,
                                                                           0),
        (v24 = v2->fields.__4__this) == 0) )
  {
LABEL_17:
    sub_21FFECC(this, method);
  }
  AtlasManager__SetEventUI(v24->fields.treasureBoxLine, (System_String_o *)StringLiteral_25472/*"treasurechest_img_line"*/, 0);
}


void EventTreasureBoxPanelComponent___c__DisplayClass36_0___ctor(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__0(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *v2; // x19
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct EventTreasureBoxPanelComponent_resData_array *res; // x9
  EventTreasureBoxPanelComponent_resData_o *v5; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *eventRewardInfos; // x20
  System_Action_o *_9__2; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  if ( (byte_5932CB4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_21FFC50(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__);
    byte_5932CB4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  res = v2->fields.res;
  if ( !res )
    goto LABEL_11;
  if ( !LODWORD(res->max_length) )
    sub_21FFED4(this);
  v5 = res->m_Items[0];
  if ( !v5 )
    goto LABEL_11;
  requestCallBack = _4__this->fields.requestCallBack;
  eventRewardInfos = v5->fields.eventRewardInfos;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
      0);
    v2->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  if ( !requestCallBack )
LABEL_11:
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, struct BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))requestCallBack->fields.invoke_impl)(
    requestCallBack->fields.method_code,
    eventRewardInfos,
    0,
    _9__2,
    requestCallBack->fields.method);
}


void EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v6; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9

  if ( (byte_5932CB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932CB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !LODWORD(res->max_length) )
    sub_21FFED4(Instance);
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0 || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v4);
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    0,
    v6->fields.eventRewardInfos,
    2,
    _4__this->fields.treasureBoxEntity,
    this->fields.pointRewardCallBack,
    0,
    0);
}


void EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__2(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_5932CB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932CB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0 || !Instance )
    sub_21FFECC(Instance, v4);
  CommonUI__CheckOpenQuestByEventPoint(
    (CommonUI_o *)Instance,
    treasureBoxEntity->fields.eventId,
    _4__this->fields.eventPointNum,
    0,
    1,
    0.0,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    0);
}


void EventTreasureBoxPanelComponent_resData___ctor(
        EventTreasureBoxPanelComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}