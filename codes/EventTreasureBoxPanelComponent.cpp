void __fastcall EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x20
  int64_t eventEndTime; // x21
  System_String_o *RestTime2; // x21
  System_String_o *v19; // x0
  bool v20; // w0
  __int64 v21; // x1
  System_String_o *v22; // x22
  bool v23; // w23
  System_String_o **v24; // x8
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v29; // x0
  __int64 v30; // x1

  if ( (byte_4B1130D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13468/*"TIME_OVER_EVENTREWARD"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16101/*"[FFFF00,FFFF00]"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16095/*"[E1A545,FEEF99]"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13476/*"TIME_REST2_TIMEOVER"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_13490/*"TIME_REST_EVENTREWARD"*/, v14, v15);
    byte_4B1130D = 1;
  }
  v16 = (System_String_o *)StringLiteral_16095/*"[E1A545,FEEF99]"*/;
  eventEndTime = this->fields.eventEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13476/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v20 = System_String__op_Equality(RestTime2, v19, 0LL);
  v22 = (System_String_o *)StringLiteral_16101/*"[FFFF00,FFFF00]"*/;
  v23 = v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  if ( v23 )
    v24 = (System_String_o **)&StringLiteral_13468/*"TIME_OVER_EVENTREWARD"*/;
  else
    v24 = (System_String_o **)&StringLiteral_13490/*"TIME_REST_EVENTREWARD"*/;
  v25 = LocalizationManager__Get(*v24, 0LL);
  v26 = System_String__Concat_62401220(v16, v25, 0LL);
  v27 = System_String__Concat_62401220(v22, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v29 = System_String__Concat_62412480(v26, (System_String_o *)StringLiteral_116/*" "*/, v27, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_1BCAA3C(v29, v30);
  UILabel__set_text(treasureBoxEndTimeLabel, v29, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x26
  void *Master_object; // x0
  const MethodInfo *v45; // x1
  struct TreasureBoxEntity_o **p_monitor; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x25
  __int64 v51; // x1
  __int64 v52; // x1
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v56; // x1
  TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  __int64 v58; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x20
  struct System_String_o **v60; // x8
  struct System_String_o *v61; // x1
  const MethodInfo *v62; // x1
  __int64 v63; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v65; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1130B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, ent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v31, v32);
    sub_1BCA7E0(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_13595/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13594/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13586/*"TREASURE_BOX_DRAW_TEXT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    byte_4B1130B = 1;
  }
  entity = 0LL;
  v43 = (Il2CppObject *)sub_1BCAA2C(
                          EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo,
                          ent,
                          *(_QWORD *)&svtId,
                          drawAction);
  System_Object___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_37;
  v43[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v43[1], this);
  v43[1].monitor = ent;
  p_monitor = (struct TreasureBoxEntity_o **)&v43[1].monitor;
  sub_1BCA784(&v43[1].monitor, ent);
  if ( !v43[1].monitor )
    return;
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
  System_Action___ctor(v50, v43, Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51);
  AtlasManager__LoadEventUI(v50, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_37;
  UILabel__set_text(userEventItemLb, (System_String_o *)Master_object, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_37;
  UILabel__set_text(payEventItemLb, (System_String_o *)Master_object, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13586/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_37;
  UILabel__set_text(drawBtnLb, (System_String_o *)Master_object, 0LL);
  v56 = *p_monitor;
  this->fields.treasureBoxEntity = *p_monitor;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_1BCA784(&this->fields.treasureBoxEntity, v56);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_1BCA784(&this->fields.drawAction, drawAction);
  this->fields.playVoiceAction = playVoice;
  sub_1BCA784(&this->fields.playVoiceAction, playVoice);
  this->fields.requestCallBack = requestCallBack;
  sub_1BCA784(&this->fields.requestCallBack, requestCallBack);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId(*p_treasureBoxEntity, 0LL);
  if ( !v59 )
    goto LABEL_37;
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            v59,
                            &entity,
                            (int32_t)Master_object,
                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_37;
    v60 = (struct System_String_o **)&entity[1].monitor;
  }
  else
  {
    v60 = (struct System_String_o **)&StringLiteral_1/*""*/;
  }
  v61 = *v60;
  this->fields.itemName = *v60;
  sub_1BCA784(&this->fields.itemName, v61);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v62);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  if ( !Master_object )
    goto LABEL_37;
  Master_object = CommonConsumeMaster__GetIdEntityList(
                    (CommonConsumeMaster_o *)Master_object,
                    (*p_treasureBoxEntity)->fields.commonConsumeId,
                    0LL);
  if ( !Master_object )
    goto LABEL_37;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_1BCAA44(Master_object, v45);
  v63 = *((_QWORD *)Master_object + 4);
  if ( !v63 )
    goto LABEL_37;
  this->fields.payNum = *(_DWORD *)(v63 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Master_object = System_Int32__ToString((int)this + 168, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_37;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Master_object, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v65);
  Master_object = this->fields.treasureBoxEntity;
  if ( !Master_object )
    goto LABEL_37;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Master_object, 0LL);
  if ( !eventTreasureBoxItemInfo
    || (EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)Master_object, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || (Master_object = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, treasureBoxEntity->fields.iconId, -1, 0LL),
        (Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (*p_treasureBoxEntity)->fields.eventId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_37:
    sub_1BCAA3C(Master_object, v45);
  }
  this->fields.eventEndTime = *((_QWORD *)Master_object + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v45);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDetail(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_4B11312 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, method, v2);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent_OnClickDetail__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v10, v11);
    byte_4B11312 = 1;
  }
  v12 = Method_EventTreasureBoxPanelComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDetail__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_EventTreasureBoxPanelComponent_OnClickDetail__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v15);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_int__o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4

  if ( (byte_4B11313 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__, v4, v5);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v6, v7);
    byte_4B11313 = 1;
  }
  v8 = Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v12, v13, v14);
  System_Action_int____ctor(
    v15,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    0LL);
  if ( !treasureBoxBuyWindow )
    sub_1BCAA3C(v16, v17);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v15, 8, v18);
}


void __fastcall EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x20
  __int64 Instance; // x0
  __int64 v30; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x8
  const MethodInfo *v33; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x22
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  Il2CppObject *v37; // x21
  System_Object_array *v38; // x0
  void **p_monitor; // x21
  _DWORD *monitor; // x8
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  __int64 v45; // x2
  __int64 v46; // x3
  _DWORD *v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  System_Action_o *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x22
  _DWORD *v55; // x8
  __int64 v56; // x8

  if ( (byte_4B11315 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v6, v7);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v8, v9);
    sub_1BCA7E0(&JsonManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v16, v17);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v18, v19);
    sub_1BCA7E0(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v26, v27);
    byte_4B11315 = 1;
  }
  v28 = (Il2CppObject *)sub_1BCAA2C(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, result, method, v3);
  System_Object___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_34;
  v28[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v28[1], this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    return;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_34;
  if ( !Instance )
    goto LABEL_34;
  Instance = (__int64)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                        (TreasureBoxTalkMaster_o *)Instance,
                        treasureBoxEntity->fields.id,
                        0LL);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_34;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    Instance,
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v33);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  Instance = (__int64)this->fields.treasureBoxEntity;
  if ( !Instance )
    goto LABEL_34;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Instance = TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Instance, 0LL);
  if ( !eventTreasureBoxItemInfo )
    goto LABEL_34;
  EventItemComponent__Set(eventTreasureBoxItemInfo, Instance, 0LL);
  Instance = (__int64)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_34;
  TreasureBoxBulkBuyConfirmMenu__Close_31335484((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL, v35);
  v37 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v36);
  v38 = JsonManager__DeserializeArray_object_(
          v37,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  v28[1].monitor = v38;
  p_monitor = &v28[1].monitor;
  Instance = sub_1BCA784(&v28[1].monitor, v38);
  monitor = v28[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  if ( !monitor[6] )
    goto LABEL_35;
  v41 = *((_QWORD *)monitor + 4);
  if ( !v41 )
    goto LABEL_34;
  v42 = *(_QWORD *)(v41 + 32);
  if ( !v42 )
    goto LABEL_34;
  v43 = *(_QWORD *)(v42 + 24);
  if ( v43 )
  {
    if ( !(_DWORD)v43 )
      goto LABEL_35;
    v44 = *(_QWORD *)(v42 + 32);
    if ( !v44 )
      goto LABEL_34;
    this->fields.eventPointNum = *(_QWORD *)(v44 + 32);
  }
  v28[2].klass = 0LL;
  Instance = sub_1BCA784(&v28[2], 0LL);
  v47 = v28[1].monitor;
  if ( !v47 )
    goto LABEL_34;
  if ( !v47[6] )
LABEL_35:
    sub_1BCAA44(Instance, v30);
  v48 = *((_QWORD *)v47 + 4);
  if ( !v48 )
    goto LABEL_34;
  v49 = *(_QWORD *)(v48 + 24);
  if ( !v49 )
    goto LABEL_34;
  if ( *(_QWORD *)(v49 + 24) )
  {
    v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v45, v46);
    System_Action___ctor(v50, v28, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, 0LL);
    v28[2].klass = (Il2CppClass *)v50;
    sub_1BCA784(&v28[2], v50);
    v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
    System_Action___ctor(v54, v28, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, 0LL);
  }
  else
  {
    v54 = 0LL;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = *p_monitor;
  if ( !*p_monitor )
LABEL_34:
    sub_1BCAA3C(Instance, v30);
  if ( !v55[6] )
    goto LABEL_35;
  v56 = *((_QWORD *)v55 + 4);
  if ( !v56 || !Instance )
    goto LABEL_34;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v56 + 16),
    *(BattleDropItem_array **)(v56 + 24),
    1,
    this->fields.treasureBoxEntity,
    v54,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1130C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7161/*"GetTreasureBoxEventEnableTime"*/, method, v2);
    byte_4B1130C = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7161/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  int64_t v14; // x21
  int64_t v15; // x8
  int v16; // w21
  int32_t payNum; // w22
  int v18; // w21
  float v19; // s8
  __int64 v20; // x1
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1130E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B1130E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.treasureBoxEntity )
    goto LABEL_24;
  v14 = UserId;
  UserId = TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL);
  if ( !Master_object )
    goto LABEL_24;
  UserId = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)Master_object, v14, UserId, 0LL);
  if ( !UserId )
    goto LABEL_24;
  v15 = UserId;
  UserId = (int64_t)this->fields.treasureBoxDrawBtn;
  if ( !UserId )
    goto LABEL_24;
  v16 = *(_DWORD *)(v15 + 28);
  payNum = this->fields.payNum;
  UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)UserId,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UserId )
    goto LABEL_24;
  v18 = v16 / payNum;
  (*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
    UserId,
    v18 > 0,
    *(_QWORD *)(*(_QWORD *)UserId + 400LL));
  UserId = (int64_t)this->fields.treasureBoxDrawBtn;
  if ( !UserId )
    goto LABEL_24;
  UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)UserId,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UserId )
    goto LABEL_24;
  v19 = v18 <= 0 ? 0.5 : 1.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UserId, v18 > 0, 0LL);
  UserId = (int64_t)this->fields.drawBtnLb;
  if ( !UserId
    || (v21.fields.a = 1.0,
        v21.fields.r = v19,
        v21.fields.g = v19,
        v21.fields.b = v19,
        UIWidget__set_color((UIWidget_o *)UserId, v21, 0LL),
        (UserId = (int64_t)this->fields.treasureBoxDrawBtn) == 0)
    || (UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)UserId,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_24:
    sub_1BCAA3C(UserId, v13);
  }
  if ( v18 <= 0 )
    v20 = 3LL;
  else
    v20 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, _QWORD, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v20,
    0LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  __int64 v13; // x1
  Il2CppObject *Request_object; // x0
  __int64 v15; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4B11314 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent_Response__, *(_QWORD *)&drawNum, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B11314 = 1;
  }
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&drawNum,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_object )
    sub_1BCAA3C(Request_object, v15);
  TreasureBoxDrawRequest__beginRequest(
    (TreasureBoxDrawRequest_o *)Request_object,
    treasureBoxEntity->fields.id,
    drawNum,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__endloadEffect(
        EventTreasureBoxPanelComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4B11310 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTreasureBoxPanelComponent_TypeInfo, data, method);
    byte_4B11310 = 1;
  }
  if ( data )
  {
    EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCA784(EventTreasureBoxPanelComponent_TypeInfo->static_fields, data);
  }
}


UnityEngine_GameObject_o *__fastcall EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *effectAssetData; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B11311 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&EventTreasureBoxPanelComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B11311 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C1 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v17);
    byte_4B109C6 = 1;
  }
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v14;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  __int64 v12; // x1

  if ( (byte_4B1130F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5975/*"Effect/TreasureBox"*/, v9, v10);
    byte_4B1130F = 1;
  }
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5975/*"Effect/TreasureBox"*/, v11, 1, 0LL);
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
  __int64 v2; // x2
  EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  __int64 v23; // x1
  Il2CppObject *Component_object; // x20
  struct EventTreasureBoxPanelComponent_o *v25; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  struct EventTreasureBoxPanelComponent_o *v30; // x8
  struct TreasureBoxEntity_o *v31; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  struct EventTreasureBoxPanelComponent_o *v35; // x8
  struct TreasureBoxEntity_o *v36; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  struct EventTreasureBoxPanelComponent_o *v40; // x8
  struct EventTreasureBoxPanelComponent_o *v41; // x8
  struct EventTreasureBoxPanelComponent_o *v42; // x8
  int v43; // [xsp+Ch] [xbp-34h] BYREF
  int v44; // [xsp+18h] [xbp-28h] BYREF
  int v45; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B11316 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24320/*"treasurechest_btn_open"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24322/*"treasurechest_img_bg"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24318/*"treasurechest_btn_info"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24326/*"treasurechest_img_line"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24316/*"treasurechest_bg_{0}"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24324/*"treasurechest_img_frame_0{0}b"*/, v18, v19);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_1BCA7E0(&StringLiteral_24325/*"treasurechest_img_frame_0{0}f"*/, v20, v21);
    byte_4B11316 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     (UISprite_o *)Component_object,
                                                                     (System_String_o *)StringLiteral_24320/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v25 = v3->fields.__4__this;
  if ( !v25 )
    goto LABEL_17;
  ent = v3->fields.ent;
  if ( !ent )
    goto LABEL_17;
  treasureBoxBg = v25->fields.treasureBoxBg;
  v45 = ent->fields.idx + 1;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v29 = System_String__Format((System_String_o *)StringLiteral_24316/*"treasurechest_bg_{0}"*/, v28, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v29, 0LL);
  v30 = v3->fields.__4__this;
  if ( !v30 )
    goto LABEL_17;
  v31 = v3->fields.ent;
  if ( !v31 )
    goto LABEL_17;
  treasureIconFrameFront = v30->fields.treasureIconFrameFront;
  v44 = v31->fields.idx + 1;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v34 = System_String__Format((System_String_o *)StringLiteral_24325/*"treasurechest_img_frame_0{0}f"*/, v33, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v34,
                                                                     0LL);
  v35 = v3->fields.__4__this;
  if ( !v35 )
    goto LABEL_17;
  v36 = v3->fields.ent;
  if ( !v36 )
    goto LABEL_17;
  treasureIconFrameBack = v35->fields.treasureIconFrameBack;
  v43 = v36->fields.idx + 1;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v39 = System_String__Format((System_String_o *)StringLiteral_24324/*"treasurechest_img_frame_0{0}b"*/, v38, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v39,
                                                                     0LL);
  v40 = v3->fields.__4__this;
  if ( !v40
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v40->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_24322/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v41 = v3->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v41->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_24318/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v42 = v3->fields.__4__this) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  AtlasManager__SetEventUI(v42->fields.treasureBoxLine, (System_String_o *)StringLiteral_24326/*"treasurechest_img_line"*/, 0LL);
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
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v9; // x9
  Il2CppRGCTXData *rgctx_data; // x23
  __int64 v11; // x20
  System_Action_o *v12; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4B11317 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1BCA7E0(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v5,
                                                                       v6);
    byte_4B11317 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
    sub_1BCAA44(this, method);
  v9 = *((_QWORD *)monitor + 4);
  if ( !v9 )
    goto LABEL_11;
  rgctx_data = klass->rgctx_data;
  v11 = *(_QWORD *)(v9 + 24);
  v12 = (System_Action_o *)v4[2].monitor;
  if ( !v12 )
  {
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v12, v4, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0LL);
    v4[2].monitor = v12;
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1BCA784(&v4[2].monitor, v12);
  }
  if ( !rgctx_data )
LABEL_11:
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, System_Action_o *, _QWORD))rgctx_data[3].rgctxDataDummy)(
    (Il2CppRGCTXData)rgctx_data[8].rgctxDataDummy,
    v11,
    0LL,
    v12,
    (Il2CppRGCTXData)rgctx_data[5].rgctxDataDummy);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v7; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9

  if ( (byte_4B11319 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11319 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1BCAA44(Instance, v5);
  v7 = res->m_Items[0];
  if ( !v7 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_1BCAA3C(Instance, v5);
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_4B11318 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B11318 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_1BCAA3C(Instance, v7);
  CommonUI__CheckOpenQuestByEventPoint(
    (CommonUI_o *)Instance,
    treasureBoxEntity->fields.eventId,
    _4__this->fields.eventPointNum,
    0LL,
    1,
    0.0,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent_resData___ctor(
        EventTreasureBoxPanelComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}