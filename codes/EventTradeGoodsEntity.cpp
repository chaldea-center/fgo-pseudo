void __fastcall EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7C3E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7C3E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v9; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7C36 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventTradePickupMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&EventTradePickupMaster_TypeInfo, v4);
    byte_4BC7C36 = 1;
  }
  pickupEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1LL,
                                    v7);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_1C1AE30(Master_object, v6);
  }
  v9 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v9 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v9->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C3C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25101/*"welcomeAbleReceive"*/, method);
    byte_4BC7C3C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_25101/*"welcomeAbleReceive"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C3A & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25102/*"welcomeDefault"*/, method);
    byte_4BC7C3A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_25102/*"welcomeDefault"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C39 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22918/*"pickup"*/, method);
    byte_4BC7C39 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_22918/*"pickup"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C3B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25103/*"welcomeRefillable"*/, method);
    byte_4BC7C3B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_25103/*"welcomeRefillable"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C38 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16930/*"add"*/, method);
    byte_4BC7C38 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_16930/*"add"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7C37 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23888/*"start"*/, method);
    byte_4BC7C37 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_23888/*"start"*/,
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
  System_Collections_Generic_List_object__o *v10; // x20
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7C3D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__AddRange__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_4BC7C3D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  v10 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( UserEventTradeEntity__IsRefillable(entity, 0LL) )
  {
    Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(this, v9);
    if ( !v10 )
      goto LABEL_23;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1C1AE30(Master_object, v9);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v10 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v9);
  if ( !v10 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
}