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
  __int64 v22; // x1

  if ( (byte_4B32291 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_13487/*"TIME_OVER_EVENTREWARD"*/, v3);
    sub_1BD3458(&StringLiteral_116/*" "*/, v4);
    sub_1BD3458(&StringLiteral_16120/*"[FFFF00,FFFF00]"*/, v5);
    sub_1BD3458(&StringLiteral_16114/*"[E1A545,FEEF99]"*/, v6);
    sub_1BD3458(&StringLiteral_13495/*"TIME_REST2_TIMEOVER"*/, v7);
    sub_1BD3458(&StringLiteral_13509/*"TIME_REST_EVENTREWARD"*/, v8);
    byte_4B32291 = 1;
  }
  v9 = (System_String_o *)StringLiteral_16114/*"[E1A545,FEEF99]"*/;
  eventEndTime = this->fields.eventEndTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(eventEndTime, -1LL, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13495/*"TIME_REST2_TIMEOVER"*/, 0LL);
  v13 = System_String__op_Equality(RestTime2, v12, 0LL);
  v14 = (System_String_o *)StringLiteral_16120/*"[FFFF00,FFFF00]"*/;
  v15 = v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v15 )
    v16 = (System_String_o **)&StringLiteral_13487/*"TIME_OVER_EVENTREWARD"*/;
  else
    v16 = (System_String_o **)&StringLiteral_13509/*"TIME_REST_EVENTREWARD"*/;
  v17 = LocalizationManager__Get(*v16, 0LL);
  v18 = System_String__Concat_62525248(v9, v17, 0LL);
  v19 = System_String__Concat_62525248(v14, RestTime2, 0LL);
  treasureBoxEndTimeLabel = this->fields.treasureBoxEndTimeLabel;
  v21 = System_String__Concat_62536508(v18, (System_String_o *)StringLiteral_116/*" "*/, v19, 0LL);
  if ( !treasureBoxEndTimeLabel )
    sub_1BD36B4(v21, v22);
  UILabel__set_text(treasureBoxEndTimeLabel, v21, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x26
  void *Master_object; // x0
  const MethodInfo *v30; // x1
  System_Action_o *v31; // x25
  UILabel_o *userEventItemLb; // x25
  UILabel_o *payEventItemLb; // x25
  UILabel_o *drawBtnLb; // x25
  TreasureBoxEntity_o **p_treasureBoxEntity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  struct System_String_o **p_monitor; // x8
  const MethodInfo *v38; // x1
  __int64 v39; // x8
  UILabel_o *treasureBoxPayNum; // x20
  const MethodInfo *v41; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B3228F & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, ent);
    sub_1BD3458(&AtlasManager_TypeInfo, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v15);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v16);
    sub_1BD3458(&DataManager_TypeInfo, v17);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v18);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19);
    sub_1BD3458(&LocalizationManager_TypeInfo, v20);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__, v22);
    sub_1BD3458(&EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo, v23);
    sub_1BD3458(&StringLiteral_13614/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v24);
    sub_1BD3458(&StringLiteral_13613/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v25);
    sub_1BD3458(&StringLiteral_13605/*"TREASURE_BOX_DRAW_TEXT"*/, v26);
    sub_1BD3458(&StringLiteral_1/*""*/, v27);
    byte_4B3228F = 1;
  }
  entity = 0LL;
  v28 = sub_1BD36A4(EventTreasureBoxPanelComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_37;
  *(_QWORD *)(v28 + 16) = this;
  sub_1BD33FC(v28 + 16);
  *(_QWORD *)(v28 + 24) = ent;
  sub_1BD33FC(v28 + 24);
  if ( !*(_QWORD *)(v28 + 24) )
    return;
  v31 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v28,
    Method_EventTreasureBoxPanelComponent___c__DisplayClass26_0__Init_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v31, 1, 0LL);
  userEventItemLb = this->fields.userEventItemLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13614/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
  if ( !userEventItemLb )
    goto LABEL_37;
  UILabel__set_text(userEventItemLb, (System_String_o *)Master_object, 0LL);
  payEventItemLb = this->fields.payEventItemLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13613/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
  if ( !payEventItemLb )
    goto LABEL_37;
  UILabel__set_text(payEventItemLb, (System_String_o *)Master_object, 0LL);
  drawBtnLb = this->fields.drawBtnLb;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13605/*"TREASURE_BOX_DRAW_TEXT"*/, 0LL);
  if ( !drawBtnLb )
    goto LABEL_37;
  UILabel__set_text(drawBtnLb, (System_String_o *)Master_object, 0LL);
  this->fields.treasureBoxEntity = *(struct TreasureBoxEntity_o **)(v28 + 24);
  p_treasureBoxEntity = &this->fields.treasureBoxEntity;
  sub_1BD33FC(&this->fields.treasureBoxEntity);
  this->fields.svtId = svtId;
  this->fields.drawAction = drawAction;
  sub_1BD33FC(&this->fields.drawAction);
  this->fields.playVoiceAction = playVoice;
  sub_1BD33FC(&this->fields.playVoiceAction);
  this->fields.requestCallBack = requestCallBack;
  sub_1BD33FC(&this->fields.requestCallBack);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !*p_treasureBoxEntity )
    goto LABEL_37;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId(*p_treasureBoxEntity, 0LL);
  if ( !v36 )
    goto LABEL_37;
  Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            v36,
                            &entity,
                            (int32_t)Master_object,
                            (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
  this->fields.itemName = *p_monitor;
  sub_1BD33FC(&this->fields.itemName);
  EventTreasureBoxPanelComponent__loadTreasureBoxEffect(this, v38);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
    sub_1BD36BC(Master_object, v30);
  v39 = *((_QWORD *)Master_object + 4);
  if ( !v39 )
    goto LABEL_37;
  this->fields.payNum = *(_DWORD *)(v39 + 32);
  treasureBoxPayNum = this->fields.treasureBoxPayNum;
  Master_object = System_Int32__ToString((int)this + 168, 0LL);
  if ( !treasureBoxPayNum )
    goto LABEL_37;
  UILabel__set_text(treasureBoxPayNum, (System_String_o *)Master_object, 0LL);
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v41);
  Master_object = this->fields.treasureBoxEntity;
  if ( !Master_object )
    goto LABEL_37;
  eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
  Master_object = (void *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)Master_object, 0LL);
  if ( !eventTreasureBoxItemInfo
    || (EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)Master_object, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || (Master_object = this->fields.treasureIcon) == 0LL
    || (ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, treasureBoxEntity->fields.iconId, -1, 1, 0LL),
        (Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___),
        !*p_treasureBoxEntity)
    || !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          (*p_treasureBoxEntity)->fields.eventId,
                          (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_37:
    sub_1BD36B4(Master_object, v30);
  }
  this->fields.eventEndTime = *((_QWORD *)Master_object + 13);
  EventTreasureBoxPanelComponent__SetEventEnableTime(this, v30);
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
  __int64 v10; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  System_Int32_array *EmissionItemList; // x20

  if ( (byte_4B32296 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_TreasureBoxGiftMaster___, method);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent_OnClickDetail__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v6);
    byte_4B32296 = 1;
  }
  v7 = Method_EventTreasureBoxPanelComponent_OnClickDetail__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDetail__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_EventTreasureBoxPanelComponent_OnClickDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_TreasureBoxGiftMaster___),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL)
    || !Instance
    || (EmissionItemList = TreasureBoxGiftMaster__GetEmissionItemList(
                             (TreasureBoxGiftMaster_o *)Instance,
                             treasureBoxEntity->fields.treasureBoxGiftId,
                             0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(Instance, v10);
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
  System_Action_int__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_4B32297 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, method);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__, v3);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__, v4);
    byte_4B32297 = 1;
  }
  v5 = Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__;
  if ( (*((_BYTE *)Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_EventTreasureBoxPanelComponent_OnClickDrawBtn__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  treasureBoxBuyWindow = this->fields.treasureBoxBuyWindow;
  treasureBoxEntity = this->fields.treasureBoxEntity;
  v9 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_TreasureBoxDrawRequest__,
    0LL);
  if ( !treasureBoxBuyWindow )
    sub_1BD36B4(v10, v11);
  TreasureBoxBulkBuyConfirmMenu__Open(treasureBoxBuyWindow, treasureBoxEntity, v9, 8, v12);
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
  Il2CppObject *v16; // x20
  __int64 Instance; // x0
  __int64 v18; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x8
  const MethodInfo *v21; // x1
  EventItemComponent_o *eventTreasureBoxItemInfo; // x22
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x21
  void **p_monitor; // x21
  _DWORD *monitor; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x9
  __int64 v30; // x8
  _DWORD *v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  System_Action_o *v34; // x23
  System_Action_o *v35; // x22
  _DWORD *v36; // x8
  __int64 v37; // x8

  if ( (byte_4B32299 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, result);
    sub_1BD3458(&Method_DataManager_GetMasterData_TreasureBoxTalkMaster___, v5);
    sub_1BD3458(&Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___, v6);
    sub_1BD3458(&JsonManager_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, v10);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, v11);
    sub_1BD3458(&EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo, v12);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v13);
    sub_1BD3458(&StringLiteral_15997/*"["*/, v14);
    sub_1BD3458(&StringLiteral_16255/*"]"*/, v15);
    byte_4B32299 = 1;
  }
  v16 = (Il2CppObject *)sub_1BD36A4(EventTreasureBoxPanelComponent___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_34;
  v16[1].klass = (Il2CppClass *)this;
  sub_1BD33FC(&v16[1]);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22325/*"ng"*/, 0LL) )
    return;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_TreasureBoxTalkMaster___);
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
  EventTreasureBoxPanelComponent__SetTreasureBoxDrawBtn(this, v21);
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
  TreasureBoxBulkBuyConfirmMenu__Close_31374452((TreasureBoxBulkBuyConfirmMenu_o *)Instance, 0LL, v23);
  v24 = (Il2CppObject *)System_String__Concat_62536508(
                          (System_String_o *)StringLiteral_15997/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16255/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16[1].monitor = JsonManager__DeserializeArray_object_(
                     v24,
                     (const MethodInfo_2F98C0C *)Method_JsonManager_DeserializeArray_EventTreasureBoxPanelComponent_resData___);
  p_monitor = &v16[1].monitor;
  Instance = sub_1BD33FC(&v16[1].monitor);
  monitor = v16[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  if ( !monitor[6] )
    goto LABEL_35;
  v27 = *((_QWORD *)monitor + 4);
  if ( !v27 )
    goto LABEL_34;
  v28 = *(_QWORD *)(v27 + 32);
  if ( !v28 )
    goto LABEL_34;
  v29 = *(_QWORD *)(v28 + 24);
  if ( v29 )
  {
    if ( !(_DWORD)v29 )
      goto LABEL_35;
    v30 = *(_QWORD *)(v28 + 32);
    if ( !v30 )
      goto LABEL_34;
    this->fields.eventPointNum = *(_QWORD *)(v30 + 32);
  }
  v16[2].klass = 0LL;
  Instance = sub_1BD33FC(&v16[2]);
  v31 = v16[1].monitor;
  if ( !v31 )
    goto LABEL_34;
  if ( !v31[6] )
LABEL_35:
    sub_1BD36BC(Instance, v18);
  v32 = *((_QWORD *)v31 + 4);
  if ( !v32 )
    goto LABEL_34;
  v33 = *(_QWORD *)(v32 + 24);
  if ( !v33 )
    goto LABEL_34;
  if ( *(_QWORD *)(v33 + 24) )
  {
    v34 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v34, v16, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__0__, 0LL);
    v16[2].klass = (Il2CppClass *)v34;
    sub_1BD33FC(&v16[2]);
    v35 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v35, v16, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__1__, 0LL);
  }
  else
  {
    v35 = 0LL;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = *p_monitor;
  if ( !*p_monitor )
LABEL_34:
    sub_1BD36B4(Instance, v18);
  if ( !v36[6] )
    goto LABEL_35;
  v37 = *((_QWORD *)v36 + 4);
  if ( !v37 || !Instance )
    goto LABEL_34;
  CommonUI__OpenTreasureBoxDialog(
    (CommonUI_o *)Instance,
    *(System_Int32_array **)(v37 + 16),
    *(BattleDropItem_array **)(v37 + 24),
    1,
    this->fields.treasureBoxEntity,
    v35,
    0LL,
    0LL);
}


void __fastcall EventTreasureBoxPanelComponent__SetEventEnableTime(
        EventTreasureBoxPanelComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B32290 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7175/*"GetTreasureBoxEventEnableTime"*/, method);
    byte_4B32290 = 1;
  }
  EventTreasureBoxPanelComponent__GetTreasureBoxEventEnableTime(this, method);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7175/*"GetTreasureBoxEventEnableTime"*/,
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
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  UnityEngine_GameObject_o *ConsumeItemId; // x0
  int64_t v9; // x21
  UnityEngine_GameObject_o *v10; // x8
  int klass_high; // w21
  int32_t payNum; // w22
  int v13; // w21
  float v14; // s8
  __int64 v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B32292 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v4);
    sub_1BD3458(&NetworkManager_TypeInfo, v5);
    byte_4B32292 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    byte_4B31D77 = 1;
  }
  ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ConsumeItemId = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.treasureBoxEntity )
    goto LABEL_28;
  v9 = *(_QWORD *)(*(_QWORD *)&ConsumeItemId[7].fields.m_CachedPtr + 64LL);
  ConsumeItemId = (UnityEngine_GameObject_o *)TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL);
  if ( !Master_object )
    goto LABEL_28;
  ConsumeItemId = (UnityEngine_GameObject_o *)UserItemMaster__GetEntityDefinitely(
                                                (UserItemMaster_o *)Master_object,
                                                v9,
                                                (int32_t)ConsumeItemId,
                                                0LL);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v10 = ConsumeItemId;
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_28;
  klass_high = HIDWORD(v10[1].klass);
  payNum = this->fields.payNum;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v13 = klass_high / payNum;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, void *))ConsumeItemId->klass[1]._1.namespaze)(
    ConsumeItemId,
    v13 > 0,
    ConsumeItemId->klass[1]._1.byval_arg.data);
  ConsumeItemId = this->fields.treasureBoxDrawBtn;
  if ( !ConsumeItemId )
    goto LABEL_28;
  ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                ConsumeItemId,
                                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !ConsumeItemId )
    goto LABEL_28;
  v14 = v13 <= 0 ? 0.5 : 1.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ConsumeItemId, v13 > 0, 0LL);
  ConsumeItemId = (UnityEngine_GameObject_o *)this->fields.drawBtnLb;
  if ( !ConsumeItemId
    || (v16.fields.a = 1.0,
        v16.fields.r = v14,
        v16.fields.g = v14,
        v16.fields.b = v14,
        UIWidget__set_color((UIWidget_o *)ConsumeItemId, v16, 0LL),
        (ConsumeItemId = this->fields.treasureBoxDrawBtn) == 0LL)
    || (ConsumeItemId = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      ConsumeItemId,
                                                      (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
LABEL_28:
    sub_1BD36B4(ConsumeItemId, v6);
  }
  if ( v13 <= 0 )
    v15 = 3LL;
  else
    v15 = 0LL;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))ConsumeItemId->klass[1]._1.implementedInterfaces)(
    ConsumeItemId,
    v15,
    0LL,
    ConsumeItemId->klass[1]._1.interfaceOffsets);
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
  __int64 v10; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4B32298 & 1) == 0 )
  {
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent_Response__, *(_QWORD *)&drawNum);
    sub_1BD3458(&Method_NetworkManager_getRequest_TreasureBoxDrawRequest___, v5);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4B32298 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BD36A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_Response__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2FB5954 *)Method_NetworkManager_getRequest_TreasureBoxDrawRequest___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Request_object )
    sub_1BD36B4(Request_object, v10);
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
  if ( (byte_4B32294 & 1) == 0 )
  {
    sub_1BD3458(&EventTreasureBoxPanelComponent_TypeInfo, data);
    byte_4B32294 = 1;
  }
  if ( data )
  {
    EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1BD33FC(EventTreasureBoxPanelComponent_TypeInfo->static_fields);
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
  Il2CppObject *Object_object__49362760; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B32295 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, parentTr);
    sub_1BD3458(&EventTreasureBoxPanelComponent_TypeInfo, v5);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B32295 = 1;
  }
  effectAssetData = EventTreasureBoxPanelComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49362760,
                                     (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B31941 )
  {
    effectAssetData = (AssetData_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B31941 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B31946 )
  {
    effectAssetData = (AssetData_o *)sub_1BD3458(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B31946 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1BD36B4(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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

  if ( (byte_4B32293 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&Method_EventTreasureBoxPanelComponent_endloadEffect__, v3);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_5985/*"Effect/TreasureBox"*/, v5);
    byte_4B32293 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventTreasureBoxPanelComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5985/*"Effect/TreasureBox"*/, v6, 1, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct EventTreasureBoxPanelComponent_o *v17; // x8
  struct TreasureBoxEntity_o *ent; // x9
  UISprite_o *treasureBoxBg; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventTreasureBoxPanelComponent_o *v25; // x8
  struct TreasureBoxEntity_o *v26; // x9
  UISprite_o *treasureIconFrameFront; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct EventTreasureBoxPanelComponent_o *v33; // x8
  struct TreasureBoxEntity_o *v34; // x9
  UISprite_o *treasureIconFrameBack; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  struct EventTreasureBoxPanelComponent_o *v38; // x8
  struct EventTreasureBoxPanelComponent_o *v39; // x8
  struct EventTreasureBoxPanelComponent_o *v40; // x8
  int v41; // [xsp+Ch] [xbp-34h] BYREF
  int v42; // [xsp+18h] [xbp-28h] BYREF
  int v43; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4B3229A & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_1BD3458(&int_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_24355/*"treasurechest_btn_open"*/, v5);
    sub_1BD3458(&StringLiteral_24357/*"treasurechest_img_bg"*/, v6);
    sub_1BD3458(&StringLiteral_24353/*"treasurechest_btn_info"*/, v7);
    sub_1BD3458(&StringLiteral_24361/*"treasurechest_img_line"*/, v8);
    sub_1BD3458(&StringLiteral_24351/*"treasurechest_bg_{0}"*/, v9);
    sub_1BD3458(&StringLiteral_24359/*"treasurechest_img_frame_0{0}b"*/, v10);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)sub_1BD3458(&StringLiteral_24360/*"treasurechest_img_frame_0{0}f"*/, v11);
    byte_4B3229A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)_4__this->fields.treasureBoxDrawBtn;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     (UISprite_o *)Component_object,
                                                                     (System_String_o *)StringLiteral_24355/*"treasurechest_btn_open"*/,
                                                                     0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  ent = v2->fields.ent;
  if ( !ent )
    goto LABEL_17;
  treasureBoxBg = v17->fields.treasureBoxBg;
  v43 = ent->fields.idx + 1;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v14, v15, v16);
  v21 = System_String__Format((System_String_o *)StringLiteral_24351/*"treasurechest_bg_{0}"*/, v20, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(treasureBoxBg, v21, 0LL);
  v25 = v2->fields.__4__this;
  if ( !v25 )
    goto LABEL_17;
  v26 = v2->fields.ent;
  if ( !v26 )
    goto LABEL_17;
  treasureIconFrameFront = v25->fields.treasureIconFrameFront;
  v42 = v26->fields.idx + 1;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
  v29 = System_String__Format((System_String_o *)StringLiteral_24360/*"treasurechest_img_frame_0{0}f"*/, v28, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameFront,
                                                                     v29,
                                                                     0LL);
  v33 = v2->fields.__4__this;
  if ( !v33 )
    goto LABEL_17;
  v34 = v2->fields.ent;
  if ( !v34 )
    goto LABEL_17;
  treasureIconFrameBack = v33->fields.treasureIconFrameBack;
  v41 = v34->fields.idx + 1;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v30, v31, v32);
  v37 = System_String__Format((System_String_o *)StringLiteral_24359/*"treasurechest_img_frame_0{0}b"*/, v36, 0LL);
  this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                     treasureIconFrameBack,
                                                                     v37,
                                                                     0LL);
  v38 = v2->fields.__4__this;
  if ( !v38
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v38->fields.eventItemRootBg,
                                                                           (System_String_o *)StringLiteral_24357/*"treasurechest_img_bg"*/,
                                                                           0LL),
        (v39 = v2->fields.__4__this) == 0LL)
    || (this = (EventTreasureBoxPanelComponent___c__DisplayClass26_0_o *)AtlasManager__SetEventUI(
                                                                           v39->fields.treasureBoxDetailBtn,
                                                                           (System_String_o *)StringLiteral_24353/*"treasurechest_btn_info"*/,
                                                                           0LL),
        (v40 = v2->fields.__4__this) == 0LL) )
  {
LABEL_17:
    sub_1BD36B4(this, method);
  }
  AtlasManager__SetEventUI(v40->fields.treasureBoxLine, (System_String_o *)StringLiteral_24361/*"treasurechest_img_line"*/, 0LL);
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
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  __int64 v6; // x9
  Il2CppRGCTXData *rgctx_data; // x23
  __int64 v8; // x20
  System_Action_o *v9; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B3229B & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1BD3458(
                                                                       &Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__,
                                                                       v3);
    byte_4B3229B = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor[6] )
    sub_1BD36BC(this, method);
  v6 = *((_QWORD *)monitor + 4);
  if ( !v6 )
    goto LABEL_11;
  rgctx_data = klass->rgctx_data;
  v8 = *(_QWORD *)(v6 + 24);
  v9 = (System_Action_o *)v2[2].monitor;
  if ( !v9 )
  {
    v9 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_EventTreasureBoxPanelComponent___c__DisplayClass36_0__Response_b__2__, 0LL);
    v2[2].monitor = v9;
    this = (EventTreasureBoxPanelComponent___c__DisplayClass36_0_o *)sub_1BD33FC(&v2[2].monitor);
  }
  if ( !rgctx_data )
LABEL_11:
    sub_1BD36B4(this, method);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, System_Action_o *, _QWORD))rgctx_data[3].rgctxDataDummy)(
    (Il2CppRGCTXData)rgctx_data[8].rgctxDataDummy,
    v8,
    0LL,
    v9,
    (Il2CppRGCTXData)rgctx_data[5].rgctxDataDummy);
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

  if ( (byte_4B3229D & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3229D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  res = this->fields.res;
  if ( !res )
    goto LABEL_9;
  if ( !res->max_length )
    sub_1BD36BC(Instance, v4);
  v6 = res->m_Items[0];
  if ( !v6 || (_4__this = this->fields.__4__this) == 0LL || !Instance )
LABEL_9:
    sub_1BD36B4(Instance, v4);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct EventTreasureBoxPanelComponent_o *_4__this; // x8
  struct TreasureBoxEntity_o *treasureBoxEntity; // x9

  if ( (byte_4B3229C & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BD3458(&StringLiteral_1/*""*/, v3);
    byte_4B3229C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (treasureBoxEntity = _4__this->fields.treasureBoxEntity) == 0LL || !Instance )
    sub_1BD36B4(Instance, v5);
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