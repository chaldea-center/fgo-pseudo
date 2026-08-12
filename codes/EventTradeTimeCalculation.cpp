void EventTradeTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_596ADAA & 1) == 0 )
  {
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    byte_596ADAA = 1;
  }
  *EventTradeTimeCalculation_TypeInfo->static_fields = (struct EventTradeTimeCalculation_StaticFields)xmmword_E9D880;
}


int32_t EventTradeTimeCalculation__GetCompleteNum(
        EventTradeListViewItem_o *item,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventTradeListViewItem_o *v5; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int64_t startedAt; // x23
  int32_t tradeNum; // w21
  int32_t getNum; // w22

  v5 = item;
  if ( (byte_596ADA5 & 1) == 0 )
  {
    item = (EventTradeListViewItem_o *)sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    byte_596ADA5 = 1;
  }
  if ( !v5 || (TradeInfo_k__BackingField = v5->fields._TradeInfo_k__BackingField) == 0 )
    sub_2213CDC(item, endedAt);
  TradeGoodsEntity_k__BackingField = v5->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, endedAt, method);
  return EventTradeTimeCalculation__GetCompleteNum_39026044(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           v3);
}


int32_t EventTradeTimeCalculation__GetCompleteNum_39026044(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int v10; // w8
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  EventTradePickupMaster_o *v13; // x24
  int32_t id; // w26
  __int64 v15; // x2
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v17; // x0
  int32_t v18; // w28
  int64_t NextRateStartTime; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t v22; // w25
  int32_t v23; // w19
  int32_t v24; // w29
  EventTradePickupMaster_c *v25; // x8
  int64_t v27; // x26
  int32_t DEFAULT_EVENT_TRADE_TIME_RATE; // w20
  int v29; // w20
  int32_t v30; // w0
  int32_t v31; // w27
  __int64 v32; // x2
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v34; // x0
  __int64 v35; // x10
  __int64 v37; // x27
  EventTradePickupMaster_c *v38; // x0
  __int64 v39; // x25
  int64_t v40; // x0
  int v41; // w9
  __int64 v42; // x2
  int32_t *v43; // x8
  EventTradePickupMaster_c *v44; // x0
  int32_t v47; // [xsp+Ch] [xbp-84h]
  int32_t goodsId; // [xsp+18h] [xbp-78h]
  int32_t tradeTime; // [xsp+1Ch] [xbp-74h]
  EventTradePickupEntity_o *v51; // [xsp+20h] [xbp-70h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+28h] [xbp-68h] BYREF

  v8 = startedAt;
  if ( (byte_596ADA6 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventTradePickupMaster_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    byte_596ADA6 = 1;
  }
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v51 = 0;
  pickupEntity = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, startedAt, endedAt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    goto LABEL_56;
  v13 = (EventTradePickupMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_56;
  id = goodsEntity->fields.id;
  tradeTime = goodsEntity->fields.tradeTime;
  Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                    (EventTradePickupMaster_o *)Master_object,
                                    &pickupEntity,
                                    id,
                                    goodsEntity->fields.eventId,
                                    v8,
                                    0);
  v47 = getNum;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( pickupEntity )
    {
      p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
      goto LABEL_13;
    }
LABEL_56:
    sub_2213CDC(Master_object, v12);
  }
  v17 = EventTradePickupMaster_TypeInfo;
  if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v12, v15);
    v17 = EventTradePickupMaster_TypeInfo;
  }
  p_tradeTimeRate = &v17->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_13:
  v18 = *p_tradeTimeRate;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v13, goodsEntity->fields.eventId, id, v8, 0);
  v22 = tradeNum;
  v23 = 0;
  if ( goodsEntity->fields.maxNum >= 1 )
  {
    v24 = 0;
    goodsId = id;
    do
    {
      v25 = EventTradePickupMaster_TypeInfo;
      if ( NextRateStartTime > endedAt || NextRateStartTime == 0 )
        v27 = endedAt;
      else
        v27 = NextRateStartTime;
      if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v20, v21);
        v25 = EventTradePickupMaster_TypeInfo;
      }
      DEFAULT_EVENT_TRADE_TIME_RATE = v25->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20, v21);
      v29 = v18 * tradeTime / DEFAULT_EVENT_TRADE_TIME_RATE;
      v30 = System_Math__Max_77153260(0, ((int)v27 - (int)v8) / v29, 0);
      v31 = System_Math__Min_77153596(v30, v22 - v23, 0);
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v13,
                                        &v51,
                                        goodsEntity->fields.id,
                                        goodsEntity->fields.eventId,
                                        v27,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_56;
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v51->fields.tradeTimeRate;
      }
      else
      {
        v34 = EventTradePickupMaster_TypeInfo;
        if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v12, v32);
          v34 = EventTradePickupMaster_TypeInfo;
        }
        p_DEFAULT_EVENT_TRADE_TIME_RATE = &v34->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v23 += v31;
      v35 = v31 * v29;
      v8 += v35;
      if ( v8 >= 1 && v27 - (v8 + v35) >= 1 )
      {
        v37 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
        v38 = EventTradePickupMaster_TypeInfo;
        if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v12, v32);
          v38 = EventTradePickupMaster_TypeInfo;
        }
        v39 = v38->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12, v32);
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12, v32);
        v40 = System_Convert__ToInt64_76689068(ceil((double)((v8 - v27 + v29) * v39 / v18 * v37) / (double)(int)v39), 0);
        v22 = tradeNum;
        v41 = v23 < tradeNum && v40 + v27 <= endedAt;
        v23 += v41;
        if ( v41 )
          v8 = v40 + v27;
      }
      Master_object = (Il2CppObject *)EventTradePickupMaster__TryGetEntityTargetTime(
                                        v13,
                                        &pickupEntity,
                                        goodsId,
                                        goodsEntity->fields.eventId,
                                        v8,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !pickupEntity )
          goto LABEL_56;
        v43 = &pickupEntity->fields.tradeTimeRate;
      }
      else
      {
        v44 = EventTradePickupMaster_TypeInfo;
        if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v12, v42);
          v44 = EventTradePickupMaster_TypeInfo;
        }
        v43 = &v44->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
      }
      v18 = *v43;
      NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(v13, goodsEntity->fields.eventId, goodsId, v8, 0);
      if ( v23 >= v22 || v8 >= endedAt )
        break;
      ++v24;
    }
    while ( v24 < goodsEntity->fields.maxNum );
  }
  return v23 + v47;
}


// local variable allocation has failed, the output may be wrong!
int64_t EventTradeTimeCalculation__GetTradeFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  __int64 Time; // x21
  int32_t v5; // w19
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x4
  Il2CppObject *Master_object; // x22
  int64_t v11; // x23

  Time = startedAt;
  v5 = tradeNum;
  if ( (byte_596ADA7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596ADA7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&tradeNum, startedAt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( Time <= 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Time = NetworkManager__getTime(0);
  }
  if ( v5 < 1 )
    return 0;
  v11 = 0;
  do
  {
    if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v7, v8);
    --v5;
    v11 += EventTradeTimeCalculation__GetTradeTime(
             (EventTradePickupMaster_o *)Master_object,
             goodsEntity,
             Time,
             v11,
             v9);
  }
  while ( v5 );
  return v11;
}


int32_t EventTradeTimeCalculation__GetTradeMaxNum(EventTradeGoodsEntity_o *goodsEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  EventTradePickupMaster_o *v7; // x21
  int maxNum; // w20
  int64_t Time; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  int64_t v13; // x22
  int64_t v14; // x23
  int v15; // w25
  EventTradeTimeCalculation_c *v16; // x0
  int64_t TradeTime; // x8

  if ( (byte_596ADA8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596ADA8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !goodsEntity )
    sub_2213CDC(Master_object, v5);
  v7 = (EventTradePickupMaster_o *)Master_object;
  maxNum = goodsEntity->fields.maxNum;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Time = NetworkManager__getTime(0);
  if ( maxNum >= 2 )
  {
    v13 = Time;
    v14 = 0;
    v15 = 1;
    v16 = EventTradeTimeCalculation_TypeInfo;
    while ( 1 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v16, v10, v11);
      TradeTime = EventTradeTimeCalculation__GetTradeTime(v7, goodsEntity, v13, v14, v12);
      v16 = EventTradeTimeCalculation_TypeInfo;
      v14 += TradeTime;
      if ( v14 > EventTradeTimeCalculation_TypeInfo->static_fields->ONE_DAY_SECOND )
        break;
      if ( maxNum == ++v15 )
        return maxNum;
    }
    return v15 - 1;
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
  __int64 v10; // x2
  int32_t *p_tradeTimeRate; // x8
  EventTradePickupMaster_c *v12; // x0
  __int64 v13; // x23
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w26
  double v16; // d8
  int64_t v17; // x22
  __int64 v18; // x2
  int32_t *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  EventTradePickupMaster_c *v20; // x0
  __int64 v21; // x26
  int64_t NextRateStartTime; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x20
  EventTradePickupMaster_c *v26; // x0
  int64_t v27; // x19
  __int64 v28; // x21
  double v29; // d8
  EventTradePickupEntity_o *v31; // [xsp+0h] [xbp-60h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+8h] [xbp-58h] BYREF

  v8 = mstTradePickup;
  if ( (byte_596ADA9 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&EventTradePickupMaster_TypeInfo);
    mstTradePickup = (EventTradePickupMaster_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_596ADA9 = 1;
  }
  v31 = 0;
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
    v12 = EventTradePickupMaster_TypeInfo;
  }
  else
  {
    v12 = EventTradePickupMaster_TypeInfo;
    if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, goodsEntity, v10);
      v12 = EventTradePickupMaster_TypeInfo;
    }
    p_tradeTimeRate = &v12->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  }
  v13 = *p_tradeTimeRate;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, goodsEntity, v10);
    v12 = EventTradePickupMaster_TypeInfo;
  }
  DEFAULT_EVENT_TRADE_TIME_RATE = v12->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, goodsEntity, v10);
  v16 = ceil((double)(tradeTime * (int)v13) / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, goodsEntity, v10);
  v17 = System_Convert__ToInt64_76689068(v16, 0);
  mstTradePickup = (EventTradePickupMaster_o *)EventTradePickupMaster__TryGetEntityTargetTime(
                                                 v8,
                                                 &v31,
                                                 goodsEntity->fields.id,
                                                 goodsEntity->fields.eventId,
                                                 v17 + v9,
                                                 0);
  if ( ((unsigned __int8)mstTradePickup & 1) != 0 )
  {
    if ( v31 )
    {
      p_DEFAULT_EVENT_TRADE_TIME_RATE = &v31->fields.tradeTimeRate;
      goto LABEL_23;
    }
LABEL_32:
    sub_2213CDC(mstTradePickup, goodsEntity);
  }
  v20 = EventTradePickupMaster_TypeInfo;
  if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, goodsEntity, v18);
    v20 = EventTradePickupMaster_TypeInfo;
  }
  p_DEFAULT_EVENT_TRADE_TIME_RATE = &v20->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
LABEL_23:
  v21 = *p_DEFAULT_EVENT_TRADE_TIME_RATE;
  NextRateStartTime = EventTradePickupMaster__GetNextRateStartTime(
                        v8,
                        goodsEntity->fields.eventId,
                        goodsEntity->fields.id,
                        v9,
                        0);
  if ( (_DWORD)v13 != (_DWORD)v21 )
  {
    v25 = NextRateStartTime;
    v26 = EventTradePickupMaster_TypeInfo;
    if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v23, v24);
      v26 = EventTradePickupMaster_TypeInfo;
    }
    v27 = v25 - v9;
    v28 = v26->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23, v24);
    v29 = ceil((double)((v17 - v27) * v28 / v13 * v21) / (double)(int)v28);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v23, v24);
    return (int)(System_Convert__ToInt64_76689068(v29, 0) + v27);
  }
  return v17;
}