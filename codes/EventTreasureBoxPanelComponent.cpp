void EventTreasureBoxPanelComponent___ctor(EventTreasureBoxPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  int64_t eventEndTime; // x21
  System_String_o *RestTime2; // x21
  System_String_o *v6; // x0
  bool v7; // w0
  System_String_o *v8; // x22
  bool v9; // w23
  System_String_o **v10; // x8
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  UILabel_o *treasureBoxEndTimeLabel; // x19
  System_String_o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4CE8FFD & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13452/*"TIME_OVER_EVENTREWARD"*/);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_15981/*"[FFFF00,FFFF00]"*/);
    sub_1C7BAE8(&StringLiteral_15975/*"[E1A545,FEEF99]"*/);
    sub_1C7BAE8(&StringLiteral_13460/*"TIME_REST2_TIMEOVER"*/);
    sub_1C7BAE8(&StringLiteral_13474/*"TIME_REST_EVENTREWARD"*/);
    byte_4CE8FFD = 1;
  }
  v3 = (System_String_o *)StringLiteral_15975/*"[E1A545,FEEF99]"*/;
  eventEndTime = this->fields.eventEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13460/*"TIME_REST2_TIMEOVER"*/, 0);
  v7 = System_String__op_Equality(RestTime2, v6, 0);
  v8 = (System_String_o *)StringLiteral_15981/*"[FFFF00,FFFF00]"*/;
  v9 = v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v9 )
    v10 = (System_String_o **)&StringLiteral_13452/*"TIME_OVER_EVENTREWARD"*/;
  else
    v10 = (System_String_o **)&StringLiteral_13474/*"TIME_REST_EVENTREWARD"*/;
  v11 = LocalizationManager__Get(*v10, 0);
  v12 = System_String__Concat_64176912(v3, v11, 0);
  v13 = System_String__Concat_64176912(v8, RestTime2, 0);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v15 = System_String__Concat_64215176(v12, (System_String_o *)StringLiteral_113/*" "*/, v13, 0);
  if ( !treasureBoxEndTimeLabel )
    sub_1C7BD40(v15, v16);
  UILabel__set_text(treasureBoxEndTimeLabel, v15, 0);
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
  Il2CppObject *v13; // x26
  void *Master_object; // x0
  const MethodInfo *v15; // x1
  struct TreasureBoxEntity_o **p_monitor; // x24
  System_Action_o *v17; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  struct TreasureBoxEntity_o *v21; // x1
  TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  struct System_String_o **v24; // x8
  struct System_String_o *v25; // x1
  const MethodInfo *v26; // x1
  __int64 v27; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v29; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CE8FFB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__);
    sub_1C7BAE8(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13582/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_1C7BAE8(&StringLiteral_13581/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_1C7BAE8(&StringLiteral_13574/*"TREASURE_BOX_DRAW_TEXT"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8FFB = 1;
  }
  entity = 0;
  v13 = (Il2CppObject *)sub_1C7BD34(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_37;
  v13[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v13[1], this);
  v13[1].monitor = ent;
  p_monitor = (struct TreasureBoxEntity_o **)&v13[1].monitor;
  sub_1C7BA8C(&v13[1].monitor, ent);
  if ( !v13[1].monitor )
    return;
  v17 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v17, v13, Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v17, 1, 0);
  userEventItemLb = this->fields.userEventItemLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13582/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0);
  if ( !userEventItemLb )
    goto LABEL_37;
  UILabel__set_text(userEventItemLb, (System_String_o *)Master_object, 0);
  payEventItemLb = this->fields.payEventItemLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0);
  if ( !payEventItemLb )
    goto LABEL_37;
  UILabel__set_text(payEventItemLb, (System_String_o *)Master_object, 0);
  drawBtnLb = this->fields.drawBtnLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TREASURE_BOX_DRAW_TEXT"*/, 0);
  if ( !drawBtnLb )
    goto LABEL_37;
  UILabel__set_text(drawBtnLb, (System_String_o *)Master_object, 0);
  v21 = *p_monitor;
  this->fields.treasureBoxEntity = *p_monitor;
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_1C7BA8C(&this->fields.treasureBoxEntity, v21);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_1C7BA8C(&this->fields.drawAction, drawAction);
  this->fields.playVoiceAction = playVoice;
  sub_1C7BA8C(&this->fields.playVoiceAction, playVoice);
  this->fields.requestCallBack = requestCallBack;
  sub_1C7BA8C(&this->fields.requestCallBack, requestCallBack);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId(*p_treasureBoxEntity, 0);
  if ( !v23 )
    goto LABEL_37;
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            v23,
                            &entity,
                            (int32_t)Master_object,
                            (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_37;
    v24 = (struct System_String_o **)&entity[1].monitor;
  }
  else
  {
    v24 = (struct System_String_o **)&StringLiteral_1/*""*/;
  }
  v25 = *v24;
  this->fields.itemName = *v24;
  sub_1C7BA8C(&this->fields.itemName, v25);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v26);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    sub_1C7BD48(Master_object);
  v27 = *((_QWORD *)Master_object + 4);
  if ( !v27 )
    goto LABEL_37;
  this->fields.payNum = *(_DWORD *)(v27 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Master_object = System_Int32__ToString((int)this + 168, 0);
  if ( !treasureBoxPayNum )
    goto LABEL_37;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Master_object, 0);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v29);
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
        (Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Master_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (*p_treasureBoxEntity)->fields.eventId,
                          (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_37:
    sub_1C7BD40(Master_object, v15);
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

  if ( (byte_4CE9002 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent_OnClickDetail__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4CE9002 = 1;
  }
  v3 = Method_EventTreasureBoxPanelComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventTreasureBoxPanelComponent_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Instance, v6);
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

  if ( (byte_4CE9003 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__);
    byte_4CE9003 = 1;
  }
  v3 = Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v7 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
  System_Action_int____ctor(v7, (Il2CppObject *)this, Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, 0);
  if ( !treasureBoxBuyWindow )
    sub_1C7BD40(v8, v9);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v7, 8, v10);
}


void EventTreasureBoxPanelComponent__Response(
        EventTreasureBoxPanelComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 Instance; // x0
  __int64 v7; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x8
  const MethodInfo *v10; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x21
  System_Object_array *v14; // x0
  void **p_monitor; // x21
  _DWORD *monitor; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  _DWORD *v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  System_Action_o *v24; // x23
  System_Action_o *v25; // x22
  _DWORD *v26; // x8
  __int64 v27; // x8

  if ( (byte_4CE9005 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__);
    sub_1C7BAE8(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CE9005 = 1;
  }
  v5 = (Il2CppObject *)sub_1C7BD34(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_34;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v5[1], this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
    return;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    goto LABEL_34;
  if ( !Instance )
    goto LABEL_34;
  Instance = (__int64)TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
                        (TreasureBoxTalkMaster_o *)Instance,
                        treasureBoxEntity->fields.id,
                        0);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_34;
  ((void (__fastcall *)(intptr_t, _QWORD, __int64, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)this->fields.svtId,
    Instance,
    0,
    playVoiceAction->fields.method);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v10);
  ActionExtensions__Call(this->fields.drawAction, 0);
  Instance = (__int64)this->fields.treasureBoxEntity;
  if ( !Instance )
    goto LABEL_34;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Instance = TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Instance, 0);
  if ( !eventTreasureBoxItemInfo )
    goto LABEL_34;
  EventItemComponent__Set(eventTreasureBoxItemInfo, Instance, 0);
  Instance = (__int64)this->fields.treasureBoxBuyWindow;
  if ( !Instance )
    goto LABEL_34;
  TreasureBoxBulkBuyConfirmMenu__Close_33027492((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0, v12);
  v13 = (Il2CppObject *)System_String__Concat_64215176(
                          (System_String_o *)StringLiteral_15862/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16114/*"]"*/,
                          0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__DeserializeArray_object_(
          v13,
          (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  v5[1].monitor = v14;
  p_monitor = &v5[1].monitor;
  Instance = sub_1C7BA8C(&v5[1].monitor, v14);
  monitor = v5[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  if ( !monitor[6] )
    goto LABEL_35;
  v17 = *((_QWORD *)monitor + 4);
  if ( !v17 )
    goto LABEL_34;
  v18 = *(_QWORD *)(v17 + 32);
  if ( !v18 )
    goto LABEL_34;
  v19 = *(_QWORD *)(v18 + 24);
  if ( v19 )
  {
    if ( !(_DWORD)v19 )
      goto LABEL_35;
    v20 = *(_QWORD *)(v18 + 32);
    if ( !v20 )
      goto LABEL_34;
    this->fields.eventPointNum = *(_QWORD *)(v20 + 32);
  }
  v5[2].klass = 0;
  Instance = sub_1C7BA8C(&v5[2], 0);
  v21 = v5[1].monitor;
  if ( !v21 )
    goto LABEL_34;
  if ( !v21[6] )
LABEL_35:
    sub_1C7BD48(Instance);
  v22 = *((_QWORD *)v21 + 4);
  if ( !v22 )
    goto LABEL_34;
  v23 = *(_QWORD *)(v22 + 24);
  if ( !v23 )
    goto LABEL_34;
  if ( *(_QWORD *)(v23 + 24) )
  {
    v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v24, v5, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, 0);
    v5[2].klass = (Il2CppClass *)v24;
    sub_1C7BA8C(&v5[2], v24);
    v25 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v25, v5, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, 0);
  }
  else
  {
    v25 = 0;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = *p_monitor;
  if ( !*p_monitor )
LABEL_34:
    sub_1C7BD40(Instance, v7);
  if ( !v26[6] )
    goto LABEL_35;
  v27 = *((_QWORD *)v26 + 4);
  if ( !v27 || !Instance )
    goto LABEL_34;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v27 + 16),
    *(BattleDropItem_array **)(v27 + 24),
    1,
    this->fields.treasureBoxEntity,
    v25,
    0,
    0);
}


void EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE8FFC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7122/*"GetTreasureBoxEventEnableTime"*/);
    byte_4CE8FFC = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7122/*"GetTreasureBoxEventEnableTime"*/,
    1.0,
    1.0,
    0);
}


void EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  UnityEngine_GameObject_o *ConsumeItemId; // x0
  int64_t v6; // x21
  UnityEngine_GameObject_o *v7; // x8
  int klass_high; // w21
  int32_t payNum; // w22
  int v10; // w21
  float v11; // s8
  __int64 v12; // x1
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE8FFE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE8FFE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.treasureBoxEntity )
    goto LABEL_28;
  v6 = *(_QWORD *)(ConsumeItemId[7].fields.m_CachedPtr + 64);
  ConsumeItemId = (UnityEngine_GameObject_o *)TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0);
  if ( !Master_object )
    goto LABEL_28;
  ConsumeItemId = (UnityEngine_GameObject_o *)UserItemMaster__GetEntityDefinitely(
                                                (UserItemMaster_o *)Master_object,
                                                v6,
                                                (int32_t)ConsumeItemId,
                                                0);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v7 = ConsumeItemId;
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_28;
  klass_high = HIDWORD(v7[1].klass);
  payNum = this->fields.payNum;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v10 = klass_high / payNum;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))ConsumeItemId->klass[1]._1.name)(
    ConsumeItemId,
    v10 > 0,
    ConsumeItemId->klass[1]._1.namespaze);
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_28;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v11 = v10 <= 0 ? 0.5 : 1.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ConsumeItemId, v10 > 0, 0);
  ConsumeItemId = (UnityEngine_GameObject_o *)this->fields.drawBtnLb;
  if ( !ConsumeItemId
    || (v13.fields.a = 1.0,
        v13.fields.r = v11,
        v13.fields.g = v11,
        v13.fields.b = v11,
        UIWidget__set_color((UIWidget_o *)ConsumeItemId, v13, 0),
        (ConsumeItemId = this->fields.treasureBoxDrawBtn) == 0)
    || (ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      ConsumeItemId,
                                                      (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
LABEL_28:
    sub_1C7BD40(ConsumeItemId, v3);
  }
  if ( v10 <= 0 )
    v12 = 3;
  else
    v12 = 0;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))ConsumeItemId->klass[1]._1.nestedTypes)(
    ConsumeItemId,
    v12,
    0,
    ConsumeItemId->klass[1]._1.implementedInterfaces);
}


void EventTreasureBoxPanelComponent__TreasureBoxDrawRequest(
        EventTreasureBoxPanelComponent_o *this,
        int32_t drawNum,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4CE9004 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent_Response__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CE9004 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_object )
    sub_1C7BD40(Request_object, v7);
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
  if ( (byte_4CE9000 & 1) == 0 )
  {
    sub_1C7BAE8(&EventTreasureBoxPanelComponent_TypeInfo);
    byte_4CE9000 = 1;
  }
  if ( data )
  {
    EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1C7BA8C(EventTreasureBoxPanelComponent_TypeInfo->static_fields, data);
  }
}


UnityEngine_GameObject_o *EventTreasureBoxPanelComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51713432; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4CE9001 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&EventTreasureBoxPanelComponent_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9001 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              effectAssetData,
                              name,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51713432,
                                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CE7E59 )
  {
    effectAssetData = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CE7E5E )
  {
    effectAssetData = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C7BD40(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


void EventTreasureBoxPanelComponent__loadTreasureBoxEffect(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4CE8FFF & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent_endloadEffect__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5913/*"Effect/TreasureBox"*/);
    byte_4CE8FFF = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5913/*"Effect/TreasureBox"*/, v3, 1, 0);
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
  Il2CppObject *Component_object; // x20
  struct EventTreasureBoxPanelComponent_o *v5; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct EventTreasureBoxPanelComponent_o *v10; // x8
  struct TreasureBoxEntity_o *v11; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  struct EventTreasureBoxPanelComponent_o *v15; // x8
  struct TreasureBoxEntity_o *v16; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct EventTreasureBoxPanelComponent_o *v20; // x8
  struct EventTreasureBoxPanelComponent_o *v21; // x8
  struct EventTreasureBoxPanelComponent_o *v22; // x8
  int v23; // [xsp+Ch] [xbp-34h] BYREF
  int v24; // [xsp+18h] [xbp-28h] BYREF
  int v25; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4CE9006 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24444/*"treasurechest_btn_open"*/);
    sub_1C7BAE8(&StringLiteral_24446/*"treasurechest_img_bg"*/);
    sub_1C7BAE8(&StringLiteral_24442/*"treasurechest_btn_info"*/);
    sub_1C7BAE8(&StringLiteral_24450/*"treasurechest_img_line"*/);
    sub_1C7BAE8(&StringLiteral_24440/*"treasurechest_bg_{0}"*/);
    sub_1C7BAE8(&StringLiteral_24448/*"treasurechest_img_frame_0{0}b"*/);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_1C7BAE8(&StringLiteral_24449/*"treasurechest_img_frame_0{0}f"*/);
    byte_4CE9006 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     (UISprite_o *)Component_object,
                                                                     (System_String_o *)StringLiteral_24444/*"treasurechest_btn_open"*/,
                                                                     0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_17;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_17;
  treasureBoxBg = v5->fields.treasureBoxBg;
  v25 = ent->fields.idx + 1;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v9 = System_String__Format((System_String_o *)StringLiteral_24440/*"treasurechest_bg_{0}"*/, v8, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v9, 0);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  v11 = v2->fields.ent;
  if ( !v11 )
    goto LABEL_17;
  treasureIconFrameFront = v10->fields.treasureIconFrameFront;
  v24 = v11->fields.idx + 1;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v14 = System_String__Format((System_String_o *)StringLiteral_24449/*"treasurechest_img_frame_0{0}f"*/, v13, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v14,
                                                                     0);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_17;
  v16 = v2->fields.ent;
  if ( !v16 )
    goto LABEL_17;
  treasureIconFrameBack = v15->fields.treasureIconFrameBack;
  v23 = v16->fields.idx + 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v19 = System_String__Format((System_String_o *)StringLiteral_24448/*"treasurechest_img_frame_0{0}b"*/, v18, 0);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v19,
                                                                     0);
  v20 = v2->fields.__4__this;
  if ( !v20
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v20->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_24446/*"treasurechest_img_bg"*/,
                                                                           0),
        (v21 = v2->fields.__4__this) == 0)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v21->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_24442/*"treasurechest_btn_info"*/,
                                                                           0),
        (v22 = v2->fields.__4__this) == 0) )
  {
LABEL_17:
    sub_1C7BD40(this, method);
  }
  AtlasManager__SetEventUI(v22->fields.treasureBoxLine, (System_String_o *)StringLiteral_24450/*"treasurechest_img_line"*/, 0);
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
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v5; // x9
  Il2CppRGCTXData *rgctx_data; // x23
  __int64 v7; // x20
  System_Action_o *v8; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4CE9007 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1C7BAE8(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__);
    byte_4CE9007 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
    sub_1C7BD48(this);
  v5 = *((_QWORD *)monitor + 4);
  if ( !v5 )
    goto LABEL_11;
  rgctx_data = klass->rgctx_data;
  v7 = *(_QWORD *)(v5 + 24);
  v8 = (System_Action_o *)v2[2].monitor;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, v2, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0);
    v2[2].monitor = v8;
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1C7BA8C(&v2[2].monitor, v8);
  }
  if ( !rgctx_data )
LABEL_11:
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, System_Action_o *, _QWORD))rgctx_data[3].rgctxDataDummy)(
    (Il2CppRGCTXData)rgctx_data[8].rgctxDataDummy,
    v7,
    0,
    v8,
    (Il2CppRGCTXData)rgctx_data[5].rgctxDataDummy);
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

  if ( (byte_4CE9009 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE9009 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !LODWORD(res->max_length) )
    sub_1C7BD48(Instance);
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0 || !Instance )
LABEL_9:
    sub_1C7BD40(Instance, v4);
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

  if ( (byte_4CE9008 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9008 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0 || !Instance )
    sub_1C7BD40(Instance, v4);
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