void EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE82B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE82B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventTradeGoodsEntity__CreatePrimaryKey(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventTradeGoodsEntity__GetPickUpRateNow(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x5
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v7; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE823 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventTradePickupMaster_TypeInfo);
    byte_4CEE823 = 1;
  }
  pickupEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1,
                                    v5);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_1C7BD40(Master_object, v4);
  }
  v7 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v7 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v7->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE829 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_25059/*"welcomeAbleReceive"*/);
    byte_4CEE829 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25059/*"welcomeAbleReceive"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE827 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_25060/*"welcomeDefault"*/);
    byte_4CEE827 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25060/*"welcomeDefault"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE826 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22905/*"pickup"*/);
    byte_4CEE826 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_22905/*"pickup"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE828 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_25061/*"welcomeRefillable"*/);
    byte_4CEE828 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_25061/*"welcomeRefillable"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE825 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16735/*"add"*/);
    byte_4CEE825 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_16735/*"add"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE824 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23876/*"start"*/);
    byte_4CEE824 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_23876/*"start"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetWelcomeVoiceIds(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE82A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CEE82A = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1C7BD40(Master_object, v4);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v4);
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
}