void EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938943 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938943 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventTradeGoodsEntity__CreatePrimaryKey(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventTradeGoodsEntity__GetPickUpRateNow(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v8; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593893B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    byte_593893B = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  pickupEntity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1,
                                    v6);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_21FFECC(Master_object, v5);
  }
  v8 = EventTradePickupMaster_TypeInfo;
  if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v5);
    v8 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v8->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938941 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26130/*"welcomeAbleReceive"*/);
    byte_5938941 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_26130/*"welcomeAbleReceive"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593893F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26131/*"welcomeDefault"*/);
    byte_593893F = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_26131/*"welcomeDefault"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593893E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23812/*"pickup"*/);
    byte_593893E = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_23812/*"pickup"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5938940 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26132/*"welcomeRefillable"*/);
    byte_5938940 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_26132/*"welcomeRefillable"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593893D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17313/*"add"*/);
    byte_593893D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_17313/*"add"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593893C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24861/*"start"*/);
    byte_593893C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.voiceData, (System_String_o *)StringLiteral_24861/*"start"*/, 0);
}


System_String_array *EventTradeGoodsEntity__GetWelcomeVoiceIds(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  UserEventTradeMaster_o *Master_object; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938942 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_5938942 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserEventTradeMaster__TryGetEntity(Master_object, &entity, this->fields.eventId, 0) )
    return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v5);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventTradeEntity__IsRefillable(entity, 0) )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( !UserEventTradeEntity__IsAbleReceiveRewards(entity, 0) )
      return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v5);
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( UserEventTradeEntity__IsRefillable(entity, 0) )
  {
    Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(this, v5);
    if ( !v6 )
      goto LABEL_23;
    System_Collections_Generic_List_object___AddRange(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_21FFECC(Master_object, v5);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v6 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v6,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v5);
  if ( !v6 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}