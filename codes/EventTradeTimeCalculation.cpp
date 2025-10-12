void EventTradeTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_4C3246E & 1) == 0 )
  {
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    byte_4C3246E = 1;
  }
  *EventTradeTimeCalculation_TypeInfo->static_fields = (struct EventTradeTimeCalculation_StaticFields)xmmword_C0C4B0;
}


int32_t EventTradeTimeCalculation__GetCompleteNum(
        EventTradeListViewItem_o *item,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventTradeListViewItem_o *v5; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x23
  int64_t startedAt; // x22
  int32_t tradeNum; // w20
  int32_t getNum; // w21

  v5 = item;
  if ( (byte_4C32469 & 1) == 0 )
  {
    item = (EventTradeListViewItem_o *)sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    byte_4C32469 = 1;
  }
  if ( !v5 || (TradeInfo_k__BackingField = v5->fields._TradeInfo_k__BackingField) == 0 )
    sub_1C32E7C(item);
  TradeGoodsEntity_k__BackingField = v5->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return EventTradeTimeCalculation__GetCompleteNum_32513068(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           v3);
}


int32_t EventTradeTimeCalculation__GetCompleteNum_32513068(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  EventTradePickupMaster_o *v11; // x24
  int32_t id; // w20
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v14; // x0
  int32_t v15; // w29
  int64_t NextRateStartTime; // x0
  int32_t v17; // w19
  int32_t v18; // w28
  EventTradePickupMaster_c *v19; // x8
  int64_t v21; // x26
  int32_t DEFAULT_EVENT_TRADE_TIME_RATE; // w20
  int v23; // w20
  int32_t v24; // w0
  int32_t v25; // w27
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v27; // x0
  EventTradePickupMaster_c *v28; // x0
  __int64 v29; // x27
  __int64 v30; // x25
  int64_t v31; // x20
  int64_t v32; // x0
  int v33; // w9
  int32_t *v34; // x8
  EventTradePickupMaster_c *v35; // x0
  int32_t v37; // [xsp+0h] [xbp-80h]
  int32_t goodsId; // [xsp+4h] [xbp-7Ch]
  int32_t tradeTime; // [xsp+8h] [xbp-78h]
  EventTradePickupEntity_o *v41; // [xsp+10h] [xbp-70h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3246A & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventTradePickupMaster_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3246A = 1;
  }
  v41 = 0;
  pickupEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    goto LABEL_51;
  v11 = (EventTradePickupMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_51;
  id = goodsEntity->fields.id;
  tradeTime = goodsEntity->fields.tradeTime;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    id,
                                    goodsEntity->fields.eventId,
                                    startedAt,
                                    0);
  v37 = getNum;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      goto LABEL_13;
    }
LABEL_51:
    sub_1C32E7C(Master_object);
  }
  v14 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v14 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v14->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_13:
  v15 = *p_tradeTimeRate;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v11, goodsEntity->fields.eventId, id, startedAt, 0);
  v17 = 0;
  if ( goodsEntity->fields.maxNum >= 1 )
  {
    v18 = 0;
    goodsId = id;
    do
    {
      v19 = EventTradePickupMaster_TypeInfo;
      if ( NextRateStartTime > endedAt || NextRateStartTime == 0 )
        v21 = endedAt;
      else
        v21 = NextRateStartTime;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v19 = EventTradePickupMaster_TypeInfo;
      }
      DEFAULT_EVENT_TRADE_TIME_RATE = v19->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v23 = v15 * tradeTime / DEFAULT_EVENT_TRADE_TIME_RATE;
      v24 = System_Math__Max_65041976(0, ((int)v21 - (int)startedAt) / v23, 0);
      v25 = System_Math__Min_65042304(v24, tradeNum - v17, 0);
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v11,
                                        &v41,
                                        goodsEntity->fields.id,
                                        goodsEntity->fields.eventId,
                                        v21,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_51;
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v41->fields.tradeTimeRate;
      }
      else
      {
        v27 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v27 = EventTradePickupMaster_TypeInfo;
        }
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v27->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      startedAt += v25 * v23;
      v17 += v25;
      if ( startedAt >= 1 && v21 - v25 * v23 - startedAt >= 1 )
      {
        v28 = EventTradePickupMaster_TypeInfo;
        v29 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v28 = EventTradePickupMaster_TypeInfo;
        }
        v30 = v28->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v31 = (v23 - v21 + startedAt) * v30 / v15 * v29;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v32 = System_Convert__ToInt64_64608348(ceil((double)v31 / (double)(int)v30), 0);
        v33 = v17 < tradeNum && v32 + v21 <= endedAt;
        v17 += v33;
        if ( v33 )
          startedAt = v32 + v21;
      }
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v11,
                                        &pickupEntity,
                                        goodsId,
                                        goodsEntity->fields.eventId,
                                        startedAt,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !pickupEntity )
          goto LABEL_51;
        v34 = &pickupEntity->fields.tradeTimeRate;
      }
      else
      {
        v35 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v35 = EventTradePickupMaster_TypeInfo;
        }
        v34 = &v35->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v15 = *v34;
      NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                            v11,
                            goodsEntity->fields.eventId,
                            goodsId,
                            startedAt,
                            0);
      if ( v17 >= tradeNum )
        break;
      if ( startedAt >= endedAt )
        break;
      ++v18;
    }
    while ( v18 < goodsEntity->fields.maxNum );
  }
  return v17 + v37;
}


int64_t EventTradeTimeCalculation__GetTradeFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  Il2CppObject *Master_object; // x22
  int64_t v9; // x23

  if ( (byte_4C3246B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3246B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    startedAt = NetworkManager__getTime(0);
  }
  if ( tradeNum < 1 )
    return 0;
  v9 = 0;
  do
  {
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    --tradeNum;
    v9 += EventTradeTimeCalculation__GetTradeTime(
            (EventTradePickupMaster_o *)Master_object,
            goodsEntity,
            startedAt,
            v9,
            v7);
  }
  while ( tradeNum );
  return v9;
}


int32_t EventTradeTimeCalculation__GetTradeMaxNum(EventTradeGoodsEntity_o *goodsEntity, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  EventTradePickupMaster_o *v4; // x21
  int maxNum; // w20
  int64_t Time; // x0
  const MethodInfo *v7; // x4
  int64_t v8; // x22
  int64_t v9; // x23
  int v10; // w25
  EventTradeTimeCalculation_c *v11; // x8
  int64_t TradeTime; // x0

  if ( (byte_4C3246C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventTradeTimeCalculation_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3246C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    sub_1C32E7C(Master_object);
  v4 = (EventTradePickupMaster_o *)Master_object;
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( maxNum >= 2 )
  {
    v8 = Time;
    v9 = 0;
    v10 = 1;
    v11 = EventTradeTimeCalculation_TypeInfo;
    while ( 1 )
    {
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11);
      TradeTime = EventTradeTimeCalculation__GetTradeTime(v4, goodsEntity, v8, v9, v7);
      v11 = EventTradeTimeCalculation_TypeInfo;
      v9 += TradeTime;
      if ( v9 > EventTradeTimeCalculation_TypeInfo->static_fields->ONE_DAY_SECOND )
        break;
      if ( maxNum == ++v10 )
        return maxNum;
    }
    return v10 - 1;
  }
  return maxNum;
}


int64_t EventTradeTimeCalculation__GetTradeTime(
        EventTradePickupMaster_o *mstTradePickup,
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t tradeStartedAt,
        int64_t endTradeTime,
        const MethodInfo *method)
{
  EventTradePickupMaster_o *v8; // x21
  int64_t v9; // x19
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v11; // x0
  __int64 v12; // x23
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w26
  double v15; // d8
  int64_t v16; // x22
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v18; // x0
  __int64 v19; // x26
  int64_t NextRateStartTime; // x0
  int64_t v21; // x20
  EventTradePickupMaster_c *v22; // x0
  int64_t v23; // x19
  __int64 v24; // x21
  double v25; // d8
  EventTradePickupEntity_o *v27; // [xsp+0h] [xbp-60h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-58h] BYREF

  v8 = mstTradePickup;
  if ( (byte_4C3246D & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&EventTradePickupMaster_TypeInfo);
    mstTradePickup = (EventTradePickupMaster_o *)sub_1C32C20(&System_Math_TypeInfo);
    byte_4C3246D = 1;
  }
  v27 = 0;
  pickupEntity = 0;
  if ( !goodsEntity || !v8 )
    goto LABEL_32;
  v9 = endTradeTime + tradeStartedAt;
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &pickupEntity,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v9,
                                                 0);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( !pickupEntity )
      goto LABEL_32;
    p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
    v11 = EventTradePickupMaster_TypeInfo;
  }
  else
  {
    v11 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v11 = EventTradePickupMaster_TypeInfo;
    }
    p_tradeTimeRate = &v11->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  }
  v12 = *p_tradeTimeRate;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = EventTradePickupMaster_TypeInfo;
  }
  DEFAULT_EVENT_TRADE_TIME_RATE = v11->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = ceil((double)(tradeTime * (int)v12) / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v16 = System_Convert__ToInt64_64608348(v15, 0);
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &v27,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v16 + v9,
                                                 0);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( v27 )
    {
      p_DEFAULT_EVENT_TRADE_TIME_RATE = &v27->fields.tradeTimeRate;
      goto LABEL_23;
    }
LABEL_32:
    sub_1C32E7C(mstTradePickup);
  }
  v18 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v18 = EventTradePickupMaster_TypeInfo;
  }
  p_DEFAULT_EVENT_TRADE_TIME_RATE = &v18->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_23:
  v19 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                        v8,
                        goodsEntity->fields.eventId,
                        goodsEntity->fields.id,
                        v9,
                        0);
  if ( (_DWORD)v12 != (_DWORD)v19 )
  {
    v21 = NextRateStartTime;
    v22 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v22 = EventTradePickupMaster_TypeInfo;
    }
    v23 = v21 - v9;
    v24 = v22->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = ceil((double)((v16 - v23) * v24 / v12 * v19) / (double)(int)v24);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return (int)(System_Convert__ToInt64_64608348(v25, 0) + v23);
  }
  return v16;
}