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
  System_String_o *v9; // x20
  int64_t eventEndTime; // x21
  System_String_o *RestTime2; // x21
  System_String_o *v12; // x0
  bool v13; // w0
  System_String_o *v14; // x22
  bool v15; // w23
  System_String_o **v16; // x8
  System_String_o *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v21; // x0

  if ( (byte_4A00720 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_13241/*"TIME_OVER_EVENTREWARD"*/, v3);
    sub_1B640C8(&StringLiteral_117/*" "*/, v4);
    sub_1B640C8(&StringLiteral_15867/*"[FFFF00,FFFF00]"*/, v5);
    sub_1B640C8(&StringLiteral_15861/*"[E1A545,FEEF99]"*/, v6);
    sub_1B640C8(&StringLiteral_13249/*"TIME_REST2_TIMEOVER"*/, v7);
    sub_1B640C8(&StringLiteral_13263/*"TIME_REST_EVENTREWARD"*/, v8);
    byte_4A00720 = 1;
  }
  v9 = (System_String_o *)StringLiteral_15861/*"[E1A545,FEEF99]"*/;
  eventEndTime = this->fields.eventEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13249/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v13 = System_String__op_Equality(RestTime2, v12, 0LL);
  v14 = (System_String_o *)StringLiteral_15867/*"[FFFF00,FFFF00]"*/;
  v15 = v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v15 )
    v16 = (System_String_o **)&StringLiteral_13241/*"TIME_OVER_EVENTREWARD"*/;
  else
    v16 = (System_String_o **)&StringLiteral_13263/*"TIME_REST_EVENTREWARD"*/;
  v17 = LocalizationManager__Get(*v16, 0LL);
  v18 = System_String__Concat_61375396(v9, v17, 0LL);
  v19 = System_String__Concat_61375396(v14, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v21 = System_String__Concat_61386656(v18, (System_String_o *)StringLiteral_117/*" "*/, v19, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_1B64324(v21);
  UILabel__set_text(treasureBoxEndTimeLabel, v21, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x26
  void *Master_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct TreasureBoxEntity_o **v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v41; // x1
  TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_String_o **p_monitor; // x8
  struct System_String_o *v55; // x1
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  __int64 v58; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v60; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  const MethodInfo *v63; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A0071E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, ent);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v18);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v22);
    sub_1B640C8(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_13363/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v24);
    sub_1B640C8(&StringLiteral_13362/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v25);
    sub_1B640C8(&StringLiteral_13354/*"TREASURE_BOX_DRAW_TEXT"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_4A0071E = 1;
  }
  entity = 0LL;
  v28 = sub_1B64314(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, ent, *(_QWORD *)&svtId);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_37;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v28 + 24) = ent;
  v32 = (struct TreasureBoxEntity_o **)(v28 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)ent, v33, v34);
  if ( !*(_QWORD *)(v28 + 24) )
    return;
  v37 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v28,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v37, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13363/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_37;
  UILabel__set_text(userEventItemLb, (System_String_o *)Master_object, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13362/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_37;
  UILabel__set_text(payEventItemLb, (System_String_o *)Master_object, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13354/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_37;
  UILabel__set_text(drawBtnLb, (System_String_o *)Master_object, 0LL);
  v41 = *v32;
  this->fields.treasureBoxEntity = *v32;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureBoxEntity, (int32_t)v41, v43, v44);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.drawAction, (int32_t)drawAction, v45, v46);
  this->fields.playVoiceAction = playVoice;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v47, v48);
  this->fields.requestCallBack = requestCallBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)requestCallBack, v49, v50);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId(*p_treasureBoxEntity, 0LL);
  if ( !v51 )
    goto LABEL_37;
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            v51,
                            &entity,
                            (int32_t)Master_object,
                            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  v55 = *p_monitor;
  this->fields.itemName = *p_monitor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemName, (int32_t)v55, v52, v53);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v56);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    sub_1B6432C(Master_object, v57);
  v58 = *((_QWORD *)Master_object + 4);
  if ( !v58 )
    goto LABEL_37;
  this->fields.payNum = *(_DWORD *)(v58 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Master_object = System_Int32__ToString((int)this + 168, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_37;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Master_object, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v60);
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
        (Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (*p_treasureBoxEntity)->fields.eventId,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_37:
    sub_1B64324(Master_object);
  }
  this->fields.eventEndTime = *((_QWORD *)Master_object + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v63);
}


void __fastcall EventTreasureBoxPanelComponent__OnClickDetail(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_4A00725 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, method);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent_OnClickDetail__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_4A00725 = 1;
  }
  v7 = Method_EventTreasureBoxPanelComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_EventTreasureBoxPanelComponent_OnClickDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  TreasureBoxBulkBuyConfirmMenu_o *treasureBoxBuyWindow; // x20
  TreasureBoxEntity_o *treasureBoxEntity; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_int__o *v11; // x22
  __int64 v12; // x0
  const MethodInfo *v13; // x4

  if ( (byte_4A00726 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__, v3);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v4);
    byte_4A00726 = 1;
  }
  v5 = Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v11 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v9, v10);
  System_Action_int____ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    0LL);
  if ( !treasureBoxBuyWindow )
    sub_1B64324(v12);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v11, 8, v13);
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
  __int64 v16; // x20
  DataManager_o *Instance; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x8
  const MethodInfo *v22; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x22
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x21
  System_Object_array *v26; // x0
  __int64 *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  __int64 v38; // x2
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  System_Action_o *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x22
  __int64 v48; // x8
  __int64 v49; // x8

  if ( (byte_4A00728 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v5);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v10);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v11);
    sub_1B640C8(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v13);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v14);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v15);
    byte_4A00728 = 1;
  }
  v16 = sub_1B64314(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, result, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_34;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v18, v19);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
    return;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_34;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                                (TreasureBoxTalkMaster_o *)Instance,
                                treasureBoxEntity->fields.id,
                                0LL);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_34;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, DataManager_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    Instance,
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v22);
  ActionExtensions__Call(this->fields.drawAction, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxEntity;
  if ( !Instance )
    goto LABEL_34;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Instance = (DataManager_o *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Instance, 0LL);
  if ( !eventTreasureBoxItemInfo )
    goto LABEL_34;
  EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_34;
  TreasureBoxBulkBuyConfirmMenu__Close_45920000((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL, v24);
  v25 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = JsonManager__DeserializeArray_object_(
          v25,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  *(_QWORD *)(v16 + 24) = v26;
  v27 = (__int64 *)(v16 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v26, v28, v29);
  v33 = *(_QWORD *)(v16 + 24);
  if ( !v33 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_35;
  v34 = *(_QWORD *)(v33 + 32);
  if ( !v34 )
    goto LABEL_34;
  v35 = *(_QWORD *)(v34 + 32);
  if ( !v35 )
    goto LABEL_34;
  v36 = *(_QWORD *)(v35 + 24);
  if ( v36 )
  {
    if ( !(_DWORD)v36 )
      goto LABEL_35;
    v37 = *(_QWORD *)(v35 + 32);
    if ( !v37 )
      goto LABEL_34;
    this->fields.eventPointNum = *(_QWORD *)(v37 + 32);
  }
  *(_QWORD *)(v16 + 32) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), 0, v31, v32);
  v39 = *(_QWORD *)(v16 + 24);
  if ( !v39 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v39 + 24) )
LABEL_35:
    sub_1B6432C(Instance, v30);
  v40 = *(_QWORD *)(v39 + 32);
  if ( !v40 )
    goto LABEL_34;
  v41 = *(_QWORD *)(v40 + 24);
  if ( !v41 )
    goto LABEL_34;
  if ( *(_QWORD *)(v41 + 24) )
  {
    v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v38);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v16,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__,
      0LL);
    *(_QWORD *)(v16 + 32) = v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v42, v43, v44);
    v47 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v16,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__,
      0LL);
  }
  else
  {
    v47 = 0LL;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = *v27;
  if ( !*v27 )
LABEL_34:
    sub_1B64324(Instance);
  if ( !*(_DWORD *)(v48 + 24) )
    goto LABEL_35;
  v49 = *(_QWORD *)(v48 + 32);
  if ( !v49 || !Instance )
    goto LABEL_34;
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
  if ( (byte_4A0071F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7010/*"GetTreasureBoxEventEnableTime"*/, method);
    byte_4A0071F = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7010/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  int64_t v8; // x21
  int64_t v9; // x8
  int v10; // w21
  int32_t payNum; // w22
  int v12; // w21
  float v13; // s8
  __int64 v14; // x1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A00721 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    byte_4A00721 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.treasureBoxEntity )
    goto LABEL_24;
  v8 = UserId;
  UserId = TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL);
  if ( !Master_object )
    goto LABEL_24;
  UserId = (int64_t)UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)Master_object, v8, UserId, 0LL);
  if ( !UserId )
    goto LABEL_24;
  v9 = UserId;
  UserId = (int64_t)this->fields.treasureBoxDrawBtn;
  if ( !UserId )
    goto LABEL_24;
  v10 = *(_DWORD *)(v9 + 28);
  payNum = this->fields.payNum;
  UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)UserId,
                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UserId )
    goto LABEL_24;
  v12 = v10 / payNum;
  (*(void (__fastcall **)(int64_t, bool, _QWORD))(*(_QWORD *)UserId + 392LL))(
    UserId,
    v12 > 0,
    *(_QWORD *)(*(_QWORD *)UserId + 400LL));
  UserId = (int64_t)this->fields.treasureBoxDrawBtn;
  if ( !UserId )
    goto LABEL_24;
  UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)UserId,
                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UserId )
    goto LABEL_24;
  v13 = v12 <= 0 ? 0.5 : 1.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UserId, v12 > 0, 0LL);
  UserId = (int64_t)this->fields.drawBtnLb;
  if ( !UserId
    || (v15.fields.a = 1.0,
        v15.fields.r = v13,
        v15.fields.g = v13,
        v15.fields.b = v13,
        UIWidget__set_color((UIWidget_o *)UserId, v15, 0LL),
        (UserId = (int64_t)this->fields.treasureBoxDrawBtn) == 0)
    || (UserId = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)UserId,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_24:
    sub_1B64324(UserId);
  }
  if ( v12 <= 0 )
    v14 = 3LL;
  else
    v14 = 0LL;
  (*(void (__fastcall **)(int64_t, __int64, _QWORD, _QWORD))(*(_QWORD *)UserId + 536LL))(
    UserId,
    v14,
    0LL,
    *(_QWORD *)(*(_QWORD *)UserId + 544LL));
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
  Il2CppObject *Request_object; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4A00727 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent_Response__, *(_QWORD *)&drawNum);
    sub_1B640C8(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A00727 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&drawNum,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_object )
    sub_1B64324(Request_object);
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
  int32_t v3; // w3

  if ( (byte_4A00723 & 1) == 0 )
  {
    sub_1B640C8(&EventTreasureBoxPanelComponent_TypeInfo, data);
    byte_4A00723 = 1;
  }
  if ( data )
  {
    EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)EventTreasureBoxPanelComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
  }
}


UnityEngine_GameObject_o *__fastcall EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48347676; // x19
  UnityEngine_GameObject_o *v10; // x19
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4A00724 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, parentTr);
    sub_1B640C8(&EventTreasureBoxPanelComponent_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A00724 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48347676,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7111 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
    byte_49F7111 = 1;
  }
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49F7116 )
  {
    effectAssetData = (AssetData_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_1B64324(effectAssetData);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


void __fastcall EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_4A00722 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_5836/*"Effect/TreasureBox"*/, v6);
    byte_4A00722 = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5836/*"Effect/TreasureBox"*/, v7, 1, 0LL);
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
  Il2CppObject *Component_object; // x20
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
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  int v33; // [xsp+18h] [xbp-28h] BYREF
  int v34; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4A00729 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_23969/*"treasurechest_btn_open"*/, v5);
    sub_1B640C8(&StringLiteral_23971/*"treasurechest_img_bg"*/, v6);
    sub_1B640C8(&StringLiteral_23967/*"treasurechest_btn_info"*/, v7);
    sub_1B640C8(&StringLiteral_23975/*"treasurechest_img_line"*/, v8);
    sub_1B640C8(&StringLiteral_23965/*"treasurechest_bg_{0}"*/, v9);
    sub_1B640C8(&StringLiteral_23973/*"treasurechest_img_frame_0{0}b"*/, v10);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_1B640C8(&StringLiteral_23974/*"treasurechest_img_frame_0{0}f"*/, v11);
    byte_4A00729 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     (UISprite_o *)Component_object,
                                                                     (System_String_o *)StringLiteral_23969/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_17;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_17;
  treasureBoxBg = v14->fields.treasureBoxBg;
  v34 = ent->fields.idx + 1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v18 = System_String__Format((System_String_o *)StringLiteral_23965/*"treasurechest_bg_{0}"*/, v17, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v18, 0LL);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_17;
  v20 = v2->fields.ent;
  if ( !v20 )
    goto LABEL_17;
  treasureIconFrameFront = v19->fields.treasureIconFrameFront;
  v33 = v20->fields.idx + 1;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v23 = System_String__Format((System_String_o *)StringLiteral_23974/*"treasurechest_img_frame_0{0}f"*/, v22, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v23,
                                                                     0LL);
  v24 = v2->fields.__4__this;
  if ( !v24 )
    goto LABEL_17;
  v25 = v2->fields.ent;
  if ( !v25 )
    goto LABEL_17;
  treasureIconFrameBack = v24->fields.treasureIconFrameBack;
  v32 = v25->fields.idx + 1;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v28 = System_String__Format((System_String_o *)StringLiteral_23973/*"treasurechest_img_frame_0{0}b"*/, v27, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v28,
                                                                     0LL);
  v29 = v2->fields.__4__this;
  if ( !v29
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v29->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_23971/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v30 = v2->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v30->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_23967/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v31 = v2->fields.__4__this) == 0LL) )
  {
LABEL_17:
    sub_1B64324(this);
  }
  AtlasManager__SetEventUI(v31->fields.treasureBoxLine, (System_String_o *)StringLiteral_23975/*"treasurechest_img_line"*/, 0LL);
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
  EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *v3; // x19
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct EventTreasureBoxPanelComponent_resData_array *res; // x9
  EventTreasureBoxPanelComponent_resData_o *v7; // x9
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  struct BattleDropItem_array *eventRewardInfos; // x20
  System_Action_o *_9__2; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  v3 = this;
  if ( (byte_4A0072A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1B640C8(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v4);
    byte_4A0072A = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  res = v3->fields.res;
  if ( !res )
    goto LABEL_11;
  if ( !res->max_length )
    sub_1B6432C(this, method);
  v7 = res->m_Items[0];
  if ( !v7 )
    goto LABEL_11;
  requestCallBack = _4__this->fields.requestCallBack;
  eventRewardInfos = v7->fields.eventRewardInfos;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !requestCallBack )
LABEL_11:
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))requestCallBack->fields.m_target)(
    requestCallBack->fields.original_method_info,
    eventRewardInfos,
    0LL,
    _9__2,
    *(_QWORD *)&requestCallBack->fields.extra_arg);
}


void __fastcall EventTreasureBoxPanelComponent___c__DisplayClass36_0___Response_b__1(
        EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventTreasureBoxPanelComponent_resData_array *res; // x8
  EventTreasureBoxPanelComponent_resData_o *v6; // x8
  struct EventTreasureBoxPanelComponent_o *_4__this; // x9

  if ( (byte_4A0072C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0072C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1B6432C(Instance, v4);
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_1B64324(Instance);
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
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
  Il2CppObject *Instance; // x0
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_4A0072B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A0072B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_1B64324(Instance);
  CommonUI__CheckOpenQuestByEventPoint(
    (CommonUI_o *)Instance,
    treasureBoxEntity->fields.eventId,
    _4__this->fields.eventPointNum,
    0LL,
    1,
    0.0,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent_resData___ctor(
        EventTreasureBoxPanelComponent_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}