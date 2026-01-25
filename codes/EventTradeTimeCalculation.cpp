void EventTradeTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_4CE8FF9 & 1) == 0 )
  {
    sub_1C7BAE8(&EventTradeTimeCalculation_TypeInfo);
    byte_4CE8FF9 = 1;
  }
  *EventTradeTimeCalculation_TypeInfo->static_fields = (struct EventTradeTimeCalculation_StaticFields)xmmword_CF5350;
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
  if ( (byte_4CE8FF4 & 1) == 0 )
  {
    item = (EventTradeListViewItem_o *)sub_1C7BAE8(&EventTradeTimeCalculation_TypeInfo);
    byte_4CE8FF4 = 1;
  }
  if ( !v5 || (TradeInfo_k__BackingField = v5->fields._TradeInfo_k__BackingField) == 0 )
    sub_1C7BD40(item, endedAt);
  TradeGoodsEntity_k__BackingField = v5->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return EventTradeTimeCalculation__GetCompleteNum_33007212(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           v3);
}


int32_t EventTradeTimeCalculation__GetCompleteNum_33007212(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  EventTradePickupMaster_o *v12; // x24
  int32_t id; // w20
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v15; // x0
  int32_t v16; // w29
  int64_t NextRateStartTime; // x0
  int32_t v18; // w19
  int32_t v19; // w28
  EventTradePickupMaster_c *v20; // x8
  int64_t v22; // x26
  int32_t DEFAULT_EVENT_TRADE_TIME_RATE; // w20
  int v24; // w20
  int32_t v25; // w0
  int32_t v26; // w27
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v28; // x0
  EventTradePickupMaster_c *v29; // x0
  __int64 v30; // x27
  __int64 v31; // x25
  int64_t v32; // x20
  int64_t v33; // x0
  int v34; // w9
  int32_t *v35; // x8
  EventTradePickupMaster_c *v36; // x0
  int32_t v38; // [xsp+0h] [xbp-80h]
  int32_t goodsId; // [xsp+4h] [xbp-7Ch]
  int32_t tradeTime; // [xsp+8h] [xbp-78h]
  EventTradePickupEntity_o *v42; // [xsp+10h] [xbp-70h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CE8FF5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventTradePickupMaster_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8FF5 = 1;
  }
  v42 = 0;
  pickupEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    goto LABEL_51;
  v12 = (EventTradePickupMaster_o *)Master_object;
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
  v38 = getNum;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      goto LABEL_13;
    }
LABEL_51:
    sub_1C7BD40(Master_object, v11);
  }
  v15 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v15 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v15->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_13:
  v16 = *p_tradeTimeRate;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v12, goodsEntity->fields.eventId, id, startedAt, 0);
  v18 = 0;
  if ( goodsEntity->fields.maxNum >= 1 )
  {
    v19 = 0;
    goodsId = id;
    do
    {
      v20 = EventTradePickupMaster_TypeInfo;
      if ( NextRateStartTime > endedAt || NextRateStartTime == 0 )
        v22 = endedAt;
      else
        v22 = NextRateStartTime;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v20 = EventTradePickupMaster_TypeInfo;
      }
      DEFAULT_EVENT_TRADE_TIME_RATE = v20->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v24 = v16 * tradeTime / DEFAULT_EVENT_TRADE_TIME_RATE;
      v25 = System_Math__Max_65698740(0, ((int)v22 - (int)startedAt) / v24, 0);
      v26 = System_Math__Min_65699068(v25, tradeNum - v18, 0);
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v12,
                                        &v42,
                                        goodsEntity->fields.id,
                                        goodsEntity->fields.eventId,
                                        v22,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_51;
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v42->fields.tradeTimeRate;
      }
      else
      {
        v28 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v28 = EventTradePickupMaster_TypeInfo;
        }
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v28->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      startedAt += v26 * v24;
      v18 += v26;
      if ( startedAt >= 1 && v22 - v26 * v24 - startedAt >= 1 )
      {
        v29 = EventTradePickupMaster_TypeInfo;
        v30 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v29 = EventTradePickupMaster_TypeInfo;
        }
        v31 = v29->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v32 = (v24 - v22 + startedAt) * v31 / v16 * v30;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v33 = System_Convert__ToInt64_65264772(ceil((double)v32 / (double)(int)v31), 0);
        v34 = v18 < tradeNum && v33 + v22 <= endedAt;
        v18 += v34;
        if ( v34 )
          startedAt = v33 + v22;
      }
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v12,
                                        &pickupEntity,
                                        goodsId,
                                        goodsEntity->fields.eventId,
                                        startedAt,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !pickupEntity )
          goto LABEL_51;
        v35 = &pickupEntity->fields.tradeTimeRate;
      }
      else
      {
        v36 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v36 = EventTradePickupMaster_TypeInfo;
        }
        v35 = &v36->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v16 = *v35;
      NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                            v12,
                            goodsEntity->fields.eventId,
                            goodsId,
                            startedAt,
                            0);
      if ( v18 >= tradeNum )
        break;
      if ( startedAt >= endedAt )
        break;
      ++v19;
    }
    while ( v19 < goodsEntity->fields.maxNum );
  }
  return v18 + v38;
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

  if ( (byte_4CE8FF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventTradeTimeCalculation_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE8FF6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
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
  __int64 v4; // x1
  EventTradePickupMaster_o *v5; // x21
  int maxNum; // w20
  int64_t Time; // x0
  const MethodInfo *v8; // x4
  int64_t v9; // x22
  int64_t v10; // x23
  int v11; // w25
  EventTradeTimeCalculation_c *v12; // x8
  int64_t TradeTime; // x0

  if ( (byte_4CE8FF7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventTradeTimeCalculation_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE8FF7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    sub_1C7BD40(Master_object, v4);
  v5 = (EventTradePickupMaster_o *)Master_object;
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( maxNum >= 2 )
  {
    v9 = Time;
    v10 = 0;
    v11 = 1;
    v12 = EventTradeTimeCalculation_TypeInfo;
    while ( 1 )
    {
      if ( !v12->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      TradeTime = EventTradeTimeCalculation__GetTradeTime(v5, goodsEntity, v9, v10, v8);
      v12 = EventTradeTimeCalculation_TypeInfo;
      v10 += TradeTime;
      if ( v10 > EventTradeTimeCalculation_TypeInfo->static_fields->ONE_DAY_SECOND )
        break;
      if ( maxNum == ++v11 )
        return maxNum;
    }
    return v11 - 1;
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
  if ( (byte_4CE8FF8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&EventTradePickupMaster_TypeInfo);
    mstTradePickup = (EventTradePickupMaster_o *)sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8FF8 = 1;
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
  v16 = System_Convert__ToInt64_65264772(v15, 0);
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
    sub_1C7BD40(mstTradePickup, goodsEntity);
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
    return (int)(System_Convert__ToInt64_65264772(v25, 0) + v23);
  }
  return v16;
}