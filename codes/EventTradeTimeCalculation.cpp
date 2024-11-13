void __fastcall EventTradeTimeCalculation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11309 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v1, v2);
    byte_4B11309 = 1;
  }
  *EventTradeTimeCalculation_TypeInfo->static_fields = (struct EventTradeTimeCalculation_StaticFields)xmmword_BD22E0;
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
  if ( (byte_4B11304 & 1) == 0 )
  {
    item = (EventTradeListViewItem_o *)sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, endedAt, method);
    byte_4B11304 = 1;
  }
  if ( !v5 || (TradeInfo_k__BackingField = v5->fields._TradeInfo_k__BackingField) == 0LL )
    sub_1BCAA3C(item, endedAt);
  TradeGoodsEntity_k__BackingField = v5->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, endedAt);
  return EventTradeTimeCalculation__GetCompleteNum_31314548(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           v3);
}


int32_t __fastcall EventTradeTimeCalculation__GetCompleteNum_31314548(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  EventTradePickupMaster_o *v20; // x24
  int32_t id; // w20
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v23; // x0
  int32_t v24; // w29
  int64_t NextRateStartTime; // x0
  __int64 v26; // x1
  int32_t v27; // w19
  int32_t v28; // w28
  EventTradePickupMaster_c *v29; // x8
  int64_t v31; // x26
  int32_t DEFAULT_EVENT_TRADE_TIME_RATE; // w20
  int v33; // w20
  int32_t v34; // w0
  int32_t v35; // w27
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v37; // x0
  EventTradePickupMaster_c *v38; // x0
  __int64 v39; // x27
  __int64 v40; // x25
  __int64 v41; // x20
  int64_t v42; // x0
  int v43; // w9
  int32_t *v44; // x8
  EventTradePickupMaster_c *v45; // x0
  int32_t v47; // [xsp+0h] [xbp-80h]
  int32_t goodsId; // [xsp+4h] [xbp-7Ch]
  int32_t tradeTime; // [xsp+8h] [xbp-78h]
  EventTradePickupEntity_o *v51; // [xsp+10h] [xbp-70h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-68h] BYREF

  v8 = startedAt;
  if ( (byte_4B11305 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, startedAt, endedAt);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Math_TypeInfo, v16, v17);
    byte_4B11305 = 1;
  }
  v51 = 0LL;
  pickupEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, startedAt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    goto LABEL_51;
  v20 = (EventTradePickupMaster_o *)Master_object;
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
  v47 = getNum;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      goto LABEL_13;
    }
LABEL_51:
    sub_1BCAA3C(Master_object, v19);
  }
  v23 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v19);
    v23 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v23->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_13:
  v24 = *p_tradeTimeRate;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v20, goodsEntity->fields.eventId, id, v8, 0LL);
  v27 = 0;
  if ( goodsEntity->fields.maxNum >= 1 )
  {
    v28 = 0;
    goodsId = id;
    do
    {
      v29 = EventTradePickupMaster_TypeInfo;
      if ( NextRateStartTime > endedAt || NextRateStartTime == 0 )
        v31 = endedAt;
      else
        v31 = NextRateStartTime;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v26);
        v29 = EventTradePickupMaster_TypeInfo;
      }
      DEFAULT_EVENT_TRADE_TIME_RATE = v29->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
      v33 = v24 * tradeTime / DEFAULT_EVENT_TRADE_TIME_RATE;
      v34 = System_Math__Max_63220196(0, ((int)v31 - (int)v8) / v33, 0LL);
      v35 = System_Math__Min_63220524(v34, tradeNum - v27, 0LL);
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v20,
                                        &v51,
                                        goodsEntity->fields.id,
                                        goodsEntity->fields.eventId,
                                        v31,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_51;
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v51->fields.tradeTimeRate;
      }
      else
      {
        v37 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v19);
          v37 = EventTradePickupMaster_TypeInfo;
        }
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v37->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v8 += v35 * v33;
      v27 += v35;
      if ( v8 >= 1 && v31 - v35 * v33 - v8 >= 1 )
      {
        v38 = EventTradePickupMaster_TypeInfo;
        v39 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v19);
          v38 = EventTradePickupMaster_TypeInfo;
        }
        v40 = v38->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
        v41 = (v33 - v31 + v8) * v40 / v24 * v39;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v19);
        v42 = System_Convert__ToInt64_63060120(ceil((double)v41 / (double)(int)v40), 0LL);
        v43 = v27 < tradeNum && v42 + v31 <= endedAt;
        v27 += v43;
        if ( v43 )
          v8 = v42 + v31;
      }
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v20,
                                        &pickupEntity,
                                        goodsId,
                                        goodsEntity->fields.eventId,
                                        v8,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !pickupEntity )
          goto LABEL_51;
        v44 = &pickupEntity->fields.tradeTimeRate;
      }
      else
      {
        v45 = EventTradePickupMaster_TypeInfo;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v19);
          v45 = EventTradePickupMaster_TypeInfo;
        }
        v44 = &v45->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v24 = *v44;
      NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                            v20,
                            goodsEntity->fields.eventId,
                            goodsId,
                            v8,
                            0LL);
      if ( v27 >= tradeNum )
        break;
      if ( v8 >= endedAt )
        break;
      ++v28;
    }
    while ( v28 < goodsEntity->fields.maxNum );
  }
  return v27 + v47;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventTradeTimeCalculation__GetTradeFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  __int64 Time; // x21
  int32_t v5; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  Il2CppObject *Master_object; // x22
  int64_t v16; // x23

  Time = startedAt;
  v5 = tradeNum;
  if ( (byte_4B11306 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, *(_QWORD *)&tradeNum, startedAt);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B11306 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&tradeNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( Time <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Time = NetworkManager__getTime(0LL);
  }
  if ( v5 < 1 )
    return 0LL;
  v16 = 0LL;
  do
  {
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v13);
    --v5;
    v16 += EventTradeTimeCalculation__GetTradeTime(
             (EventTradePickupMaster_o *)Master_object,
             goodsEntity,
             Time,
             v16,
             v14);
  }
  while ( v5 );
  return v16;
}


int32_t __fastcall EventTradeTimeCalculation__GetTradeMaxNum(
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  EventTradePickupMaster_o *v12; // x21
  int maxNum; // w20
  int64_t Time; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  int64_t v17; // x22
  int64_t v18; // x23
  int v19; // w25
  EventTradeTimeCalculation_c *v20; // x8
  int64_t TradeTime; // x0

  if ( (byte_4B11307 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B11307 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    sub_1BCAA3C(Master_object, v11);
  v12 = (EventTradePickupMaster_o *)Master_object;
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Time = NetworkManager__getTime(0LL);
  if ( maxNum >= 2 )
  {
    v17 = Time;
    v18 = 0LL;
    v19 = 1;
    v20 = EventTradeTimeCalculation_TypeInfo;
    while ( 1 )
    {
      if ( !v20->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v20, v15);
      TradeTime = EventTradeTimeCalculation__GetTradeTime(v12, goodsEntity, v17, v18, v16);
      v20 = EventTradeTimeCalculation_TypeInfo;
      v18 += TradeTime;
      if ( v18 > EventTradeTimeCalculation_TypeInfo->static_fields->ONE_DAY_SECOND )
        break;
      if ( maxNum == ++v19 )
        return maxNum;
    }
    return v19 - 1;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x19
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v15; // x0
  __int64 v16; // x23
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w26
  double v19; // d8
  int64_t v20; // x22
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v22; // x0
  __int64 v23; // x26
  int64_t NextRateStartTime; // x0
  __int64 v25; // x1
  int64_t v26; // x20
  EventTradePickupMaster_c *v27; // x0
  int64_t v28; // x19
  __int64 v29; // x21
  double v30; // d8
  EventTradePickupEntity_o *v32; // [xsp+0h] [xbp-60h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-58h] BYREF

  v8 = mstTradePickup;
  if ( (byte_4B11308 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, goodsEntity, tradeStartedAt);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v9, v10);
    mstTradePickup = (EventTradePickupMaster_o *)sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    byte_4B11308 = 1;
  }
  v32 = 0LL;
  pickupEntity = 0LL;
  if ( !goodsEntity || !v8 )
    goto LABEL_32;
  v13 = endTradeTime + tradeStartedAt;
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &pickupEntity,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v13,
                                                 0LL);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( !pickupEntity )
      goto LABEL_32;
    p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
    v15 = EventTradePickupMaster_TypeInfo;
  }
  else
  {
    v15 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, goodsEntity);
      v15 = EventTradePickupMaster_TypeInfo;
    }
    p_tradeTimeRate = &v15->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  }
  v16 = *p_tradeTimeRate;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15, goodsEntity);
    v15 = EventTradePickupMaster_TypeInfo;
  }
  DEFAULT_EVENT_TRADE_TIME_RATE = v15->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, goodsEntity);
  v19 = ceil((double)(tradeTime * (int)v16) / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, goodsEntity);
  v20 = System_Convert__ToInt64_63060120(v19, 0LL);
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &v32,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v20 + v13,
                                                 0LL);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( v32 )
    {
      p_DEFAULT_EVENT_TRADE_TIME_RATE = &v32->fields.tradeTimeRate;
      goto LABEL_23;
    }
LABEL_32:
    sub_1BCAA3C(mstTradePickup, goodsEntity);
  }
  v22 = EventTradePickupMaster_TypeInfo;
  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, goodsEntity);
    v22 = EventTradePickupMaster_TypeInfo;
  }
  p_DEFAULT_EVENT_TRADE_TIME_RATE = &v22->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_23:
  v23 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                        v8,
                        goodsEntity->fields.eventId,
                        goodsEntity->fields.id,
                        v13,
                        0LL);
  if ( (_DWORD)v16 != (_DWORD)v23 )
  {
    v26 = NextRateStartTime;
    v27 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v25);
      v27 = EventTradePickupMaster_TypeInfo;
    }
    v28 = v26 - v13;
    v29 = v27->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25);
    v30 = ceil((double)((v20 - v28) * v29 / v16 * v23) / (double)(int)v29);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v25);
    return (int)(System_Convert__ToInt64_63060120(v30, 0LL) + v28);
  }
  return v20;
}