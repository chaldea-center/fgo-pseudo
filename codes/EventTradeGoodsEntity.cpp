void __fastcall EventTradeGoodsEntity___ctor(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1638E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1638E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventTradeGoodsEntity__CreatePrimaryKey(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventTradeGoodsEntity__GetPickUpRateNow(EventTradeGoodsEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v12; // x0
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16386 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v6, v7);
    byte_4B16386 = 1;
  }
  pickupEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    this->fields.id,
                                    this->fields.eventId,
                                    -1LL,
                                    v10);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      return *p_tradeTimeRate;
    }
LABEL_13:
    sub_1BCAA3C(Master_object, v9);
  }
  v12 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v9);
    v12 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v12->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  return *p_tradeTimeRate;
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1638C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24935/*"welcomeAbleReceive"*/, method, v2);
    byte_4B1638C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24935/*"welcomeAbleReceive"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1638A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24936/*"welcomeDefault"*/, method, v2);
    byte_4B1638A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24936/*"welcomeDefault"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradePickupVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16389 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22768/*"pickup"*/, method, v2);
    byte_4B16389 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_22768/*"pickup"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1638B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24937/*"welcomeRefillable"*/, method, v2);
    byte_4B1638B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_24937/*"welcomeRefillable"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16388 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16830/*"add"*/, method, v2);
    byte_4B16388 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_16830/*"add"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetTradeStartVoiceIds(
        EventTradeGoodsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16387 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23728/*"start"*/, method, v2);
    byte_4B16387 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(
           this->fields.voiceData,
           (System_String_o *)StringLiteral_23728/*"start"*/,
           0LL);
}


System_String_array *__fastcall EventTradeGoodsEntity__GetWelcomeVoiceIds(
        EventTradeGoodsEntity_o *this,
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
  UserEventTradeMaster_o *Master_object; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1638D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v12, v13);
    byte_4B1638D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_23;
  if ( !UserEventTradeMaster__TryGetEntity(Master_object, &entity, this->fields.eventId, 0LL) )
    return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v15);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( !UserEventTradeEntity__IsRefillable(entity, 0LL) )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_23;
    if ( !UserEventTradeEntity__IsAbleReceiveRewards(entity, 0LL) )
      return EventTradeGoodsEntity__GetTradeDefaultWelcomeVoiceIds(this, v15);
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( UserEventTradeEntity__IsRefillable(entity, 0LL) )
  {
    Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeRefillableWelcomeVoiceIds(this, v15);
    if ( !v18 )
      goto LABEL_23;
    System_Collections_Generic_List_object___AddRange(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
  Master_object = (UserEventTradeMaster_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1BCAA3C(Master_object, v15);
  Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__IsAbleReceiveRewards(entity, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( v18 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v18,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_23;
  }
  Master_object = (UserEventTradeMaster_o *)EventTradeGoodsEntity__GetTradeAbleReceiveRewardsWelcomeVoiceIds(this, v15);
  if ( !v18 )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v18,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}