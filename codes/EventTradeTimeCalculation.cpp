void __fastcall EventTradeTimeCalculation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6B0C5 & 1) == 0 )
  {
    sub_1B90010(&EventTradeTimeCalculation_TypeInfo, v1);
    byte_4A6B0C5 = 1;
  }
  *EventTradeTimeCalculation_TypeInfo->static_fields = (struct EventTradeTimeCalculation_StaticFields)unk_BB6FA0;
}


int32_t __fastcall EventTradeTimeCalculation__GetCompleteNum(
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
  if ( (byte_4A6B0C0 & 1) == 0 )
  {
    item = (EventTradeListViewItem_o *)sub_1B90010(&EventTradeTimeCalculation_TypeInfo, endedAt);
    byte_4A6B0C0 = 1;
  }
  if ( !v5 || (TradeInfo_k__BackingField = v5->fields._TradeInfo_k__BackingField) == 0LL )
    sub_1B9026C(item, endedAt);
  TradeGoodsEntity_k__BackingField = v5->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return EventTradeTimeCalculation__GetCompleteNum_30771584(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           v3);
}


int32_t __fastcall EventTradeTimeCalculation__GetCompleteNum_30771584(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  EventTradePickupMaster_o *v16; // x24
  int32_t id; // w20
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v19; // x0
  int32_t v20; // w29
  int64_t NextRateStartTime; // x0
  int32_t v22; // w19
  int32_t v23; // w28
  EventTradePickupMaster_c *v24; // x8
  int64_t v26; // x26
  int32_t DEFAULT_EVENT_TRADE_TIME_RATE; // w20
  int v28; // w20
  int32_t v29; // w0
  int32_t v30; // w27
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v32; // x0
  EventTradePickupMaster_c *v33; // x0
  __int64 v34; // x27
  __int64 v35; // x25
  __int64 v36; // x20
  int64_t v37; // x0
  int v38; // w9
  int32_t *v39; // x8
  EventTradePickupMaster_c *v40; // x0
  int32_t v42; // [xsp+0h] [xbp-80h]
  int32_t goodsId; // [xsp+4h] [xbp-7Ch]
  int32_t tradeTime; // [xsp+8h] [xbp-78h]
  EventTradePickupEntity_o *v46; // [xsp+10h] [xbp-70h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-68h] BYREF

  v8 = startedAt;
  if ( (byte_4A6B0C1 & 1) == 0 )
  {
    sub_1B90010(&System_Convert_TypeInfo, startedAt);
    sub_1B90010(&Method_DataManager_GetMaster_EventTradePickupMaster___, v10);
    sub_1B90010(&DataManager_TypeInfo, v11);
    sub_1B90010(&EventTradePickupMaster_TypeInfo, v12);
    sub_1B90010(&System_Math_TypeInfo, v13);
    byte_4A6B0C1 = 1;
  }
  v46 = 0LL;
  pickupEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    goto LABEL_51;
  v16 = (EventTradePickupMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_51;
  id = goodsEntity->fields.id;
  tradeTime = goodsEntity->fields.tradeTime;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    id,
                                    goodsEntity->fields.eventId,
                                    v8,
                                    0LL);
  v42 = getNum;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      goto LABEL_13;
    }
LABEL_51:
    sub_1B9026C(Master_object, v15);
  }
  v19 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v19 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v19->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_13:
  v20 = *p_tradeTimeRate;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v16, goodsEntity->fields.eventId, id, v8, 0LL);
  v22 = 0;
  if ( goodsEntity->fields.maxNum >= 1 )
  {
    v23 = 0;
    goodsId = id;
    do
    {
      v24 = EventTradePickupMaster_TypeInfo;
      if ( NextRateStartTime > endedAt || NextRateStartTime == 0 )
        v26 = endedAt;
      else
        v26 = NextRateStartTime;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v24 = EventTradePickupMaster_TypeInfo;
      }
      DEFAULT_EVENT_TRADE_TIME_RATE = v24->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v28 = v20 * tradeTime / DEFAULT_EVENT_TRADE_TIME_RATE;
      v29 = System_Math__Max_62605740(0, ((int)v26 - (int)v8) / v28, 0LL);
      v30 = System_Math__Min_62606068(v29, tradeNum - v22, 0LL);
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v16,
                                        &v46,
                                        goodsEntity->fields.id,
                                        goodsEntity->fields.eventId,
                                        v26,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_51;
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v46->fields.tradeTimeRate;
      }
      else
      {
        v32 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v32 = EventTradePickupMaster_TypeInfo;
        }
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v32->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v8 += v30 * v28;
      v22 += v30;
      if ( v8 >= 1 && v26 - v30 * v28 - v8 >= 1 )
      {
        v33 = EventTradePickupMaster_TypeInfo;
        v34 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v33 = EventTradePickupMaster_TypeInfo;
        }
        v35 = v33->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v36 = (v28 - v26 + v8) * v35 / v20 * v34;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v37 = System_Convert__ToInt64_62445664(ceil((double)v36 / (double)(int)v35), 0LL);
        v38 = v22 < tradeNum && v37 + v26 <= endedAt;
        v22 += v38;
        if ( v38 )
          v8 = v37 + v26;
      }
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v16,
                                        &pickupEntity,
                                        goodsId,
                                        goodsEntity->fields.eventId,
                                        v8,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !pickupEntity )
          goto LABEL_51;
        v39 = &pickupEntity->fields.tradeTimeRate;
      }
      else
      {
        v40 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
          v40 = EventTradePickupMaster_TypeInfo;
        }
        v39 = &v40->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v20 = *v39;
      NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                            v16,
                            goodsEntity->fields.eventId,
                            goodsId,
                            v8,
                            0LL);
      if ( v22 >= tradeNum )
        break;
      if ( v8 >= endedAt )
        break;
      ++v23;
    }
    while ( v23 < goodsEntity->fields.maxNum );
  }
  return v22 + v42;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventTradeTimeCalculation__GetTradeFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  int32_t v5; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  Il2CppObject *Master_object; // x22
  int64_t v12; // x23

  v5 = tradeNum;
  if ( (byte_4A6B0C2 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventTradePickupMaster___, *(_QWORD *)&tradeNum);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&EventTradeTimeCalculation_TypeInfo, v8);
    sub_1B90010(&NetworkManager_TypeInfo, v9);
    byte_4A6B0C2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    startedAt = NetworkManager__getTime(0LL);
  }
  if ( v5 < 1 )
    return 0LL;
  v12 = 0LL;
  do
  {
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    --v5;
    v12 += EventTradeTimeCalculation__GetTradeTime(
             (EventTradePickupMaster_o *)Master_object,
             goodsEntity,
             startedAt,
             v12,
             v10);
  }
  while ( v5 );
  return v12;
}


int32_t __fastcall EventTradeTimeCalculation__GetTradeMaxNum(
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  EventTradePickupMaster_o *v8; // x21
  int maxNum; // w20
  int64_t Time; // x0
  const MethodInfo *v11; // x4
  int64_t v12; // x22
  int64_t v13; // x23
  int v14; // w25
  EventTradeTimeCalculation_c *v15; // x8
  int64_t TradeTime; // x0

  if ( (byte_4A6B0C3 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventTradePickupMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    sub_1B90010(&EventTradeTimeCalculation_TypeInfo, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    byte_4A6B0C3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    sub_1B9026C(Master_object, v7);
  v8 = (EventTradePickupMaster_o *)Master_object;
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( maxNum >= 2 )
  {
    v12 = Time;
    v13 = 0LL;
    v14 = 1;
    v15 = EventTradeTimeCalculation_TypeInfo;
    while ( 1 )
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      TradeTime = EventTradeTimeCalculation__GetTradeTime(v8, goodsEntity, v12, v13, v11);
      v15 = EventTradeTimeCalculation_TypeInfo;
      v13 += TradeTime;
      if ( v13 > EventTradeTimeCalculation_TypeInfo->static_fields->ONE_DAY_SECOND )
        break;
      if ( maxNum == ++v14 )
        return maxNum;
    }
    return v14 - 1;
  }
  return maxNum;
}


int64_t __fastcall EventTradeTimeCalculation__GetTradeTime(
        EventTradePickupMaster_o *mstTradePickup,
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t tradeStartedAt,
        int64_t endTradeTime,
        const MethodInfo *method)
{
  EventTradePickupMaster_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x19
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v13; // x0
  __int64 v14; // x23
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w26
  double v17; // d8
  int64_t v18; // x22
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v20; // x0
  __int64 v21; // x26
  int64_t NextRateStartTime; // x0
  int64_t v23; // x20
  EventTradePickupMaster_c *v24; // x0
  int64_t v25; // x19
  __int64 v26; // x21
  double v27; // d8
  EventTradePickupEntity_o *v29; // [xsp+0h] [xbp-60h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-58h] BYREF

  v8 = mstTradePickup;
  if ( (byte_4A6B0C4 & 1) == 0 )
  {
    sub_1B90010(&System_Convert_TypeInfo, goodsEntity);
    sub_1B90010(&EventTradePickupMaster_TypeInfo, v9);
    mstTradePickup = (EventTradePickupMaster_o *)sub_1B90010(&System_Math_TypeInfo, v10);
    byte_4A6B0C4 = 1;
  }
  v29 = 0LL;
  pickupEntity = 0LL;
  if ( !goodsEntity || !v8 )
    goto LABEL_32;
  v11 = endTradeTime + tradeStartedAt;
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &pickupEntity,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v11,
                                                 0LL);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( !pickupEntity )
      goto LABEL_32;
    p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
    v13 = EventTradePickupMaster_TypeInfo;
  }
  else
  {
    v13 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v13 = EventTradePickupMaster_TypeInfo;
    }
    p_tradeTimeRate = &v13->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  }
  v14 = *p_tradeTimeRate;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = EventTradePickupMaster_TypeInfo;
  }
  DEFAULT_EVENT_TRADE_TIME_RATE = v13->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = ceil((double)(tradeTime * (int)v14) / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v18 = System_Convert__ToInt64_62445664(v17, 0LL);
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &v29,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v18 + v11,
                                                 0LL);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( v29 )
    {
      p_DEFAULT_EVENT_TRADE_TIME_RATE = &v29->fields.tradeTimeRate;
      goto LABEL_23;
    }
LABEL_32:
    sub_1B9026C(mstTradePickup, goodsEntity);
  }
  v20 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
    v20 = EventTradePickupMaster_TypeInfo;
  }
  p_DEFAULT_EVENT_TRADE_TIME_RATE = &v20->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_23:
  v21 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                        v8,
                        goodsEntity->fields.eventId,
                        goodsEntity->fields.id,
                        v11,
                        0LL);
  if ( (_DWORD)v14 != (_DWORD)v21 )
  {
    v23 = NextRateStartTime;
    v24 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v24 = EventTradePickupMaster_TypeInfo;
    }
    v25 = v23 - v11;
    v26 = v24->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = ceil((double)((v18 - v25) * v26 / v14 * v21) / (double)(int)v26);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return (int)(System_Convert__ToInt64_62445664(v27, 0LL) + v25);
  }
  return v18;
}