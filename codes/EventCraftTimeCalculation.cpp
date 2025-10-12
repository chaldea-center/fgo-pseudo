void EventCraftTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_4C31C51 & 1) == 0 )
  {
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    byte_4C31C51 = 1;
  }
  EventCraftTimeCalculation_TypeInfo->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE = 1000;
}


int32_t EventCraftTimeCalculation__GetCompleteNum(
        EventCraftListViewItem_o *item,
        ItemEntity_o *supportTool,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  EventCraftListViewItem_o *v7; // x21
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int64_t startedAt; // x25
  int32_t tradeNum; // w24
  int32_t getNum; // w23
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21

  v7 = item;
  if ( (byte_4C31C4B & 1) == 0 )
  {
    item = (EventCraftListViewItem_o *)sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    byte_4C31C4B = 1;
  }
  if ( !v7 || (TradeInfo_k__BackingField = v7->fields._TradeInfo_k__BackingField) == 0 )
    sub_1C32E7C(item);
  TradeGoodsEntity_k__BackingField = v7->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  PickupInfoList_k__BackingField = v7->fields._PickupInfoList_k__BackingField;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum_31586996(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           PickupInfoList_k__BackingField,
           supportTool,
           v4);
}


int32_t EventCraftTimeCalculation__GetCompleteNum_31586996(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        const MethodInfo *method)
{
  int32_t v15; // w27
  int64_t v16; // x26
  int64_t CraftTime; // x0

  if ( (byte_4C31C4C & 1) == 0 )
  {
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    byte_4C31C4C = 1;
  }
  if ( tradeNum < 1 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(
                    pickupInfoList,
                    supportTool,
                    goodsEntity,
                    startedAt,
                    v16,
                    (const MethodInfo *)pickupInfoList);
      startedAt += CraftTime;
      if ( startedAt >= endedAt )
        break;
      ++v15;
      v16 = CraftTime;
      if ( tradeNum == v15 )
      {
        v15 = tradeNum;
        return v15 + getNum;
      }
    }
  }
  return v15 + getNum;
}


int64_t EventCraftTimeCalculation__GetCraftFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  int64_t v11; // x24

  if ( (byte_4C31C4D & 1) == 0 )
  {
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31C4D = 1;
  }
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    startedAt = NetworkManager__getTime(0);
  }
  if ( tradeNum < 1 )
    return 0;
  v11 = 0;
  do
  {
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    --tradeNum;
    v11 += EventCraftTimeCalculation__GetCraftTime(pickupInfoList, supportTool, goodsEntity, startedAt, v11, method);
  }
  while ( tradeNum );
  return v11;
}


int32_t EventCraftTimeCalculation__GetCraftMaxNum(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftPickupInfo__o *v6; // x21
  int maxNum; // w22
  int64_t Time; // x0
  const MethodInfo *v9; // x5
  int64_t v10; // x23
  int64_t v11; // x24
  int v12; // w26
  int64_t CraftTime; // x0
  BalanceConfig_c *v14; // x8
  int64_t v15; // x25

  v6 = pickupInfoList;
  if ( (byte_4C31C4E & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    pickupInfoList = (System_Collections_Generic_List_EventCraftPickupInfo__o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31C4E = 1;
  }
  if ( !goodsEntity )
    sub_1C32E7C(pickupInfoList);
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( maxNum >= 2 )
  {
    v10 = Time;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(v6, supportTool, goodsEntity, v10, v11, v9);
      v14 = BalanceConfig_TypeInfo;
      v15 = CraftTime;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      v11 += v15;
      if ( v11 > v14->static_fields->SECONDS_PER_DAY )
        break;
      if ( maxNum == ++v12 )
        return maxNum;
    }
    return v12 - 1;
  }
  return maxNum;
}


int64_t EventCraftTimeCalculation__GetCraftTime(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t tradeStartedAt,
        int64_t endTradeTime,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 Time; // x0
  const MethodInfo *v13; // x4
  int64_t v14; // x23
  int64_t v15; // x25
  System_Collections_ICollection_o *PickupInfo; // x21
  int64_t result; // x0
  System_Func_object__bool__o *v18; // x22
  EventCraftTimeCalculation_c *v19; // x8
  __int64 v20; // x22
  int DEFAULT_EVENT_CRAFT_TIME_RATE; // w28
  EventCraftTimeCalculation_c *v22; // x0
  int32_t tradeTime; // w20
  int v24; // w29
  double v25; // d8
  __int64 v26; // x8
  __int64 v27; // x20
  EventTradePickupMaster_c *v28; // x0
  System_Func_object__bool__o *v29; // x20
  Il2CppObject *v30; // x0
  EventCraftTimeCalculation_c *v31; // x8
  Il2CppObject *v32; // x20
  int klass; // w21
  __int64 v34; // x22
  EventCraftTimeCalculation_c *v35; // x0
  double v36; // d8
  double v37; // d9
  double v38; // d8
  System_Convert_c *v39; // x0
  double v40; // d0
  __int64 v41; // x20
  double v42; // d8
  Il2CppObject *v43; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C31C4F & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    sub_1C32C20(&EventTradePickupMaster_TypeInfo);
    sub_1C32C20(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__);
    sub_1C32C20(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__);
    sub_1C32C20(&EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
    byte_4C31C4F = 1;
  }
  v43 = 0;
  entity = 0;
  v11 = sub_1C32E6C(EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v11 )
    goto LABEL_54;
  v14 = endTradeTime + tradeStartedAt;
  *(_QWORD *)(v11 + 16) = v14;
  v15 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  PickupInfo = (System_Collections_ICollection_o *)EventCraftTimeCalculation__ReCreatePickupInfo(
                                                     pickupInfoList,
                                                     supportTool,
                                                     v15,
                                                     v14,
                                                     v13);
  Time = BasicHelper__IsNullOrEmpty(PickupInfo, 0);
  if ( (Time & 1) != 0 )
  {
    if ( goodsEntity )
      return goodsEntity->fields.tradeTime;
LABEL_54:
    sub_1C32E7C(Time);
  }
  v18 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__,
    0);
  Time = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                    (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
                    (System_Func_TSource__bool__o *)v18,
                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
  v19 = EventCraftTimeCalculation_TypeInfo;
  v20 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    Time = j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v19 = EventCraftTimeCalculation_TypeInfo;
  }
  DEFAULT_EVENT_CRAFT_TIME_RATE = v19->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( v20 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Time = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Time )
      goto LABEL_54;
    Time = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
             &entity,
             *(_DWORD *)(v20 + 20),
             (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (Time & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_54;
      DEFAULT_EVENT_CRAFT_TIME_RATE = (int)entity[4].klass;
    }
  }
  if ( !goodsEntity )
    goto LABEL_54;
  v22 = EventCraftTimeCalculation_TypeInfo;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    v22 = EventCraftTimeCalculation_TypeInfo;
  }
  v24 = v22->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v25 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / (double)v24);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  result = System_Convert__ToInt64_64608348(v25, 0);
  if ( v20 )
    v26 = *(_QWORD *)(v20 + 32) - *(_QWORD *)(v11 + 16);
  else
    v26 = 0;
  v27 = result - v26;
  *(_QWORD *)(v11 + 24) = v26;
  if ( result >= v26 )
  {
    v28 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
      v28 = EventTradePickupMaster_TypeInfo;
    }
    *(double *)(v11 + 32) = (double)v27
                          * (double)v28->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE
                          / (double)DEFAULT_EVENT_CRAFT_TIME_RATE;
    v29 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v29,
      (Il2CppObject *)v11,
      Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__,
      0);
    v30 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    v31 = EventCraftTimeCalculation_TypeInfo;
    v32 = v30;
    if ( EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      if ( v30 )
      {
LABEL_35:
        klass = v31->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Time = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !Time )
          goto LABEL_54;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v43,
                 HIDWORD(v32[1].klass),
                 (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_54;
          klass = (int)v43[4].klass;
        }
        v34 = *(_QWORD *)(v11 + 24);
        v35 = EventCraftTimeCalculation_TypeInfo;
        v36 = *(double *)(v11 + 32);
        v37 = v36 + (double)(v34 + *(_QWORD *)(v11 + 16)) - (double)(__int64)v32[1].monitor;
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
          v35 = EventCraftTimeCalculation_TypeInfo;
          v34 = *(_QWORD *)(v11 + 24);
        }
        v38 = v36 - v37 + v37 * (double)klass / (double)v35->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v39 = System_Convert_TypeInfo;
        v40 = (double)v34;
        goto LABEL_50;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      v31 = EventCraftTimeCalculation_TypeInfo;
      if ( v32 )
        goto LABEL_35;
    }
    v41 = *(_QWORD *)(v11 + 24);
    v38 = *(double *)(v11 + 32);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v39 = System_Convert_TypeInfo;
    v40 = (double)v41;
LABEL_50:
    v42 = ceil(v38 + v40);
    if ( !v39->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v39);
    return System_Convert__ToInt64_64608348(v42, 0);
  }
  return result;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *EventCraftTimeCalculation__ReCreatePickupInfo(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int64_t currentTime,
        int64_t tradeThisTimeStartedAt,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  Il2CppObject *current; // x29
  __int64 v13; // x22
  __int64 v14; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  __int64 v19; // x22
  char *monitor; // x23
  System_Func_object__bool__o *v21; // x23
  Il2CppClass *klass; // x22
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31C50 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__get_Current__);
    sub_1C32C20(&EventCraftPickupInfo_TypeInfo);
    sub_1C32C20(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
    sub_1C32C20(&Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__);
    sub_1C32C20(&EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
    byte_4C31C50 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v9 = (Il2CppObject *)sub_1C32E6C(EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
LABEL_32:
    sub_1C32E7C(v10);
  v9[1].klass = (Il2CppClass *)tradeThisTimeStartedAt;
  v9[1].monitor = (void *)currentTime;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
  if ( pickupInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)pickupInfoList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    v29 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__) )
    {
      current = v29.fields._current;
      v13 = sub_1C32E6C(EventCraftPickupInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0);
      if ( !current )
        sub_1C32E7C(v14);
      if ( !v13 )
        sub_1C32E7C(v14);
      *(Il2CppObject *)(v13 + 24) = *(Il2CppObject *)((char *)current + 24);
      *(_DWORD *)(v13 + 20) = HIDWORD(current[1].klass);
      if ( !v11 )
        sub_1C32E7C(v14);
      items = v11->fields._items;
      v16 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C32E7C(v14);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v13,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v13;
        sub_1C32BC4(v18 + 4, v13);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
  }
  if ( supportTool )
  {
    v19 = sub_1C32E6C(EventCraftPickupInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    if ( !v19 )
      goto LABEL_32;
    monitor = (char *)v9[1].monitor;
    *(_QWORD *)(v19 + 24) = monitor;
    *(_QWORD *)(v19 + 32) = &monitor[ItemEntity__GetTradePickupTime(supportTool, 0)];
    *(_DWORD *)(v19 + 20) = supportTool->fields.id;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0) )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
      if ( !v11 )
        goto LABEL_32;
    }
    else
    {
      v21 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        v9,
        Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__,
        0);
      v10 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              (System_Collections_Generic_IEnumerable_TSource__o *)v11,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
      if ( v10 )
      {
        klass = v10[2].klass;
        v10[2].klass = (Il2CppClass *)((char *)klass + ItemEntity__GetTradePickupTime(supportTool, 0));
        return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v11;
      }
      if ( !v11 )
        goto LABEL_32;
    }
    v23 = v11->fields._items;
    v24 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
    ++v11->fields._version;
    if ( !v23 )
      goto LABEL_32;
    v25 = v11->fields._size;
    if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v19,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->obj.klass + v25;
      v11->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)v19;
      sub_1C32BC4(v26 + 4, v19);
    }
  }
  return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v11;
}


void EventCraftTimeCalculation___c__DisplayClass5_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__0(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8

  if ( !x )
    sub_1C32E7C(this);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  return x->fields.startedAt <= tradeThisTimeStartedAt && tradeThisTimeStartedAt <= x->fields.endedAt;
}


bool EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__1(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t startedAt; // x9

  if ( !x )
    sub_1C32E7C(this);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  startedAt = x->fields.startedAt;
  return tradeThisTimeStartedAt < startedAt
      && this->fields.leftTradeTime + (double)(this->fields.beforeTime + tradeThisTimeStartedAt) > (double)startedAt;
}


void EventCraftTimeCalculation___c__DisplayClass6_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftTimeCalculation___c__DisplayClass6_0___ReCreatePickupInfo_b__0(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t endedAt; // x9
  bool result; // w0

  if ( !x )
    sub_1C32E7C(this);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  result = x->fields.startedAt <= tradeThisTimeStartedAt
        && (endedAt = x->fields.endedAt, tradeThisTimeStartedAt <= endedAt)
        && endedAt > this->fields.currentTime;
  return result;
}