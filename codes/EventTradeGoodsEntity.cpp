void EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CA13 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2CA13 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t EventTradeGoodsEntity__CreatePrimaryKey(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventTradeGoodsEntity__GetPickUpRateNow(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v6; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CA0B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&EventTradePickupMaster_TypeInfo);
    byte_4D2CA0B = 1;
  }
  pickupEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_1C942F0(Master_object, v4);
  }
  v6 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v6 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v6->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA11 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_25056/*"welcomeAbleReceive"*/);
    byte_4D2CA11 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25056/*"welcomeAbleReceive"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA0F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_25057/*"welcomeDefault"*/);
    byte_4D2CA0F = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25057/*"welcomeDefault"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA0E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22910/*"pickup"*/);
    byte_4D2CA0E = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_22910/*"pickup"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA10 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_25058/*"welcomeRefillable"*/);
    byte_4D2CA10 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25058/*"welcomeRefillable"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA0D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16733/*"add"*/);
    byte_4D2CA0D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_16733/*"add"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CA0C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_23880/*"start"*/);
    byte_4D2CA0C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_23880/*"start"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetWelcomeVoiceIds(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CA12 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D2CA12 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserEventTradeMaster__TryGetEntity(Master_object, &entity, this->fields.eventId, 0) )
    return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v4);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventTradeEntity__IsRefillable(entity, 0) )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( !UserEventTradeEntity__IsAbleReceiveRewards(entity, 0) )
      return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v4);
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( UserEventTradeEntity__IsRefillable(entity, 0) )
  {
    Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(this, v4);
    if ( !v5 )
      goto LABEL_23;
    System_Collections_Generic_List_object___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1C942F0(Master_object, v4);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v4);
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
}