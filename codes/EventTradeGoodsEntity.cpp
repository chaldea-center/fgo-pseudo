void __fastcall EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC5B0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventTradeGoodsEntity__CreatePrimaryKey(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventTradeGoodsEntity__GetPickUpRateNow(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v6; // x5
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v8; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC5A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradePickupMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&EventTradePickupMaster_TypeInfo, v4);
    byte_49FC5A8 = 1;
  }
  pickupEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1LL,
                                    v6);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_1B64324(Master_object);
  }
  v8 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v8 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v8->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5AE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24582/*"welcomeAbleReceive"*/, method);
    byte_49FC5AE = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24582/*"welcomeAbleReceive"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5AC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24583/*"welcomeDefault"*/, method);
    byte_49FC5AC = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24583/*"welcomeDefault"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5AB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22435/*"pickup"*/, method);
    byte_49FC5AB = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_22435/*"pickup"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5AD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24584/*"welcomeRefillable"*/, method);
    byte_49FC5AD = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24584/*"welcomeRefillable"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5AA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16592/*"add"*/, method);
    byte_49FC5AA = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_16592/*"add"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5A9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23383/*"start"*/, method);
    byte_49FC5A9 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_23383/*"start"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEventTradeMaster_o *Master_object; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC5AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_49FC5AF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserEventTradeMaster__TryGetEntity(Master_object, &entity, this->fields.eventId, 0LL) )
    return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v9);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventTradeEntity__IsRefillable(entity, 0LL) )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( !UserEventTradeEntity__IsAbleReceiveRewards(entity, 0LL) )
      return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v9);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( UserEventTradeEntity__IsRefillable(entity, 0LL) )
  {
    Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(this, v12);
    if ( !v11 )
      goto LABEL_23;
    System_Collections_Generic_List_object___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1B64324(Master_object);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v11 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v13);
  if ( !v11 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v11,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}