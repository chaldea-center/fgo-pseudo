void EventCraftTimeCalculation___cctor(const MethodInfo *method)
{
  if ( (byte_593245C & 1) == 0 )
  {
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    byte_593245C = 1;
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
  int64_t startedAt; // x23
  int32_t tradeNum; // w24
  int32_t getNum; // w25
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21

  v7 = item;
  if ( (byte_5932456 & 1) == 0 )
  {
    item = (EventCraftListViewItem_o *)sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    byte_5932456 = 1;
  }
  if ( !v7 || (TradeInfo_k__BackingField = v7->fields._TradeInfo_k__BackingField) == 0 )
    sub_21FFECC(item, supportTool);
  TradeGoodsEntity_k__BackingField = v7->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  PickupInfoList_k__BackingField = v7->fields._PickupInfoList_k__BackingField;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, supportTool, endedAt);
  return EventCraftTimeCalculation__GetCompleteNum_38116732(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           PickupInfoList_k__BackingField,
           supportTool,
           v4);
}


int32_t EventCraftTimeCalculation__GetCompleteNum_38116732(
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t startedAt,
        int64_t endedAt,
        int32_t tradeNum,
        int32_t getNum,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        const MethodInfo *method)
{
  int64_t v13; // x24
  int32_t v15; // w27
  int64_t v16; // x26
  int64_t CraftTime; // x0

  v13 = startedAt;
  if ( (byte_5932457 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    byte_5932457 = 1;
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
      if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, startedAt, endedAt);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(
                    pickupInfoList,
                    supportTool,
                    goodsEntity,
                    v13,
                    v16,
                    (const MethodInfo *)pickupInfoList);
      v13 += CraftTime;
      if ( v13 >= endedAt )
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

  if ( (byte_5932458 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932458 = 1;
  }
  if ( startedAt <= 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, pickupInfoList, supportTool);
    startedAt = NetworkManager__getTime(0);
  }
  if ( tradeNum < 1 )
    return 0;
  v11 = 0;
  do
  {
    if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, pickupInfoList, supportTool);
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
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x5
  int64_t v12; // x23
  int64_t v13; // x24
  int v14; // w27
  int64_t CraftTime; // x0
  BalanceConfig_c *v16; // x8
  int64_t v17; // x25

  v6 = pickupInfoList;
  if ( (byte_5932459 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    pickupInfoList = (System_Collections_Generic_List_EventCraftPickupInfo__o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932459 = 1;
  }
  if ( !goodsEntity )
    sub_21FFECC(pickupInfoList, supportTool);
  maxNum = goodsEntity->fields.maxNum;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, supportTool, goodsEntity);
  Time = NetworkManager__getTime(0);
  if ( maxNum >= 2 )
  {
    v12 = Time;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v9, v10);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(v6, supportTool, goodsEntity, v12, v13, v11);
      v16 = BalanceConfig_TypeInfo;
      v17 = CraftTime;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v10);
        v16 = BalanceConfig_TypeInfo;
      }
      v13 += v17;
      if ( v13 > v16->static_fields->SECONDS_PER_DAY )
        break;
      if ( maxNum == ++v14 )
        return maxNum;
    }
    return v14 - 1;
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
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Time; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x4
  int64_t v18; // x25
  int64_t v19; // x23
  System_Collections_ICollection_o *PickupInfo; // x21
  int64_t result; // x0
  System_Func_object__bool__o *v22; // x22
  __int64 v23; // x2
  EventCraftTimeCalculation_c *v24; // x8
  int64_t v25; // x22
  int DEFAULT_EVENT_CRAFT_TIME_RATE; // w28
  EventCraftTimeCalculation_c *v27; // x0
  int32_t tradeTime; // w20
  int v29; // w23
  double v30; // d8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x8
  __int64 v34; // x20
  EventTradePickupMaster_c *v35; // x0
  int *p_DEFAULT_EVENT_TRADE_TIME_RATE; // x8
  System_Func_EventCraftPickupInfo__bool__c *v37; // x0
  System_Func_object__bool__o *v38; // x20
  Il2CppObject *v39; // x0
  __int64 v40; // x2
  EventCraftTimeCalculation_c *v41; // x8
  Il2CppObject *v42; // x20
  int klass; // w21
  __int64 v44; // x22
  double v45; // d8
  EventCraftTimeCalculation_c *v46; // x0
  double v47; // d9
  double v48; // d8
  double v49; // d0
  __int64 v50; // x20
  double v51; // d8
  Il2CppObject *v52; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_593245A & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__);
    sub_21FFC50(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__);
    sub_21FFC50(&EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
    byte_593245A = 1;
  }
  entity = 0;
  v52 = 0;
  v11 = sub_21FFEBC(EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
  Time = NetworkManager__getTime(0);
  if ( !v11 )
    goto LABEL_54;
  v18 = Time;
  v19 = endTradeTime + tradeStartedAt;
  *(_QWORD *)(v11 + 16) = v19;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15, v16);
  PickupInfo = (System_Collections_ICollection_o *)EventCraftTimeCalculation__ReCreatePickupInfo(
                                                     pickupInfoList,
                                                     supportTool,
                                                     v18,
                                                     v19,
                                                     v17);
  Time = BasicHelper__IsNullOrEmpty(PickupInfo, 0);
  if ( (Time & 1) != 0 )
  {
    if ( goodsEntity )
      return goodsEntity->fields.tradeTime;
LABEL_54:
    sub_21FFECC(Time, v15);
  }
  v22 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__,
    0);
  Time = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                    (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
                    (System_Func_TSource__bool__o *)v22,
                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
  v24 = EventCraftTimeCalculation_TypeInfo;
  v25 = Time;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15, v23);
    v24 = EventCraftTimeCalculation_TypeInfo;
  }
  DEFAULT_EVENT_CRAFT_TIME_RATE = v24->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( v25 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v23);
    Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Time )
      goto LABEL_54;
    Time = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
             &entity,
             *(_DWORD *)(v25 + 20),
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (Time & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_54;
      DEFAULT_EVENT_CRAFT_TIME_RATE = (int)entity[4].klass;
    }
  }
  if ( !goodsEntity )
    goto LABEL_54;
  v27 = EventCraftTimeCalculation_TypeInfo;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15, v23);
    v27 = EventCraftTimeCalculation_TypeInfo;
  }
  v29 = v27->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v23);
  v30 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / (double)v29);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v15, v23);
  result = System_Convert__ToInt64_76475764(v30, 0);
  if ( v25 )
    v33 = *(_QWORD *)(v25 + 32) - *(_QWORD *)(v11 + 16);
  else
    v33 = 0;
  v34 = result - v33;
  *(_QWORD *)(v11 + 24) = v33;
  if ( result >= v33 )
  {
    v35 = EventTradePickupMaster_TypeInfo;
    if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v31, v32);
      v35 = EventTradePickupMaster_TypeInfo;
    }
    p_DEFAULT_EVENT_TRADE_TIME_RATE = &v35->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
    v37 = System_Func_EventCraftPickupInfo__bool__TypeInfo;
    *(double *)(v11 + 32) = (double)v34
                          * (double)*p_DEFAULT_EVENT_TRADE_TIME_RATE
                          / (double)DEFAULT_EVENT_CRAFT_TIME_RATE;
    v38 = (System_Func_object__bool__o *)sub_21FFEBC(v37);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v11,
      Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__,
      0);
    v39 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    v41 = EventCraftTimeCalculation_TypeInfo;
    v42 = v39;
    if ( *(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( v39 )
      {
LABEL_35:
        klass = v41->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v40);
        Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !Time )
          goto LABEL_54;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v52,
                 HIDWORD(v42[1].klass),
                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !v52 )
            goto LABEL_54;
          klass = (int)v52[4].klass;
        }
        v44 = *(_QWORD *)(v11 + 24);
        v45 = *(double *)(v11 + 32);
        v46 = EventCraftTimeCalculation_TypeInfo;
        v47 = v45 + (double)(v44 + *(_QWORD *)(v11 + 16)) - (double)(__int64)v42[1].monitor;
        if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15, v40);
          v46 = EventCraftTimeCalculation_TypeInfo;
          v44 = *(_QWORD *)(v11 + 24);
        }
        v48 = v45 - v47 + v47 * (double)klass / (double)v46->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v40);
        v49 = (double)v44;
        goto LABEL_50;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15, v40);
      v41 = EventCraftTimeCalculation_TypeInfo;
      if ( v42 )
        goto LABEL_35;
    }
    v50 = *(_QWORD *)(v11 + 24);
    v48 = *(double *)(v11 + 32);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v40);
    v49 = (double)v50;
LABEL_50:
    v51 = ceil(v48 + v49);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v15, v40);
    return System_Convert__ToInt64_76475764(v51, 0);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  Il2CppObject *current; // x29
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x22
  char *monitor; // x23
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Func_object__bool__o *v35; // x23
  Il2CppClass *klass; // x22
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593245B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__get_Current__);
    sub_21FFC50(&EventCraftPickupInfo_TypeInfo);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
    sub_21FFC50(&Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__);
    sub_21FFC50(&EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
    byte_593245B = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v9 = (Il2CppObject *)sub_21FFEBC(EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
LABEL_31:
    sub_21FFECC(v10, v11);
  v9[1].klass = (Il2CppClass *)tradeThisTimeStartedAt;
  v9[1].monitor = (void *)currentTime;
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
  if ( pickupInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)pickupInfoList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    v43 = v42;
    v42.fields._list = 0;
    *(_QWORD *)&v42.fields._index = &v43;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__) )
    {
      current = v43.fields._current;
      v14 = sub_21FFEBC(EventCraftPickupInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( !current )
        sub_21FFECC(v15, v16);
      if ( !v14 )
        sub_21FFECC(v15, v16);
      *(Il2CppObject *)(v14 + 24) = *(Il2CppObject *)((char *)current + 24);
      *(_DWORD *)(v14 + 20) = HIDWORD(current[1].klass);
      if ( !v12
        || (items = v12->fields._items,
            v24 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__,
            ++v12->fields._version,
            !items) )
      {
        sub_21FFECC(v15, v16);
      }
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v14,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v14;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
  }
  if ( supportTool )
  {
    v27 = sub_21FFEBC(EventCraftPickupInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    if ( !v27 )
      goto LABEL_31;
    monitor = (char *)v9[1].monitor;
    *(_QWORD *)(v27 + 24) = monitor;
    *(_QWORD *)(v27 + 32) = &monitor[ItemEntity__GetTradePickupTime(supportTool, 0)];
    *(_DWORD *)(v27 + 20) = supportTool->fields.id;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0) )
    {
      v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v12,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
      if ( !v12 )
        goto LABEL_31;
    }
    else
    {
      v35 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        v9,
        Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__,
        0);
      v10 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
              (System_Collections_Generic_IEnumerable_TSource__o *)v12,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
      if ( v10 )
      {
        klass = v10[2].klass;
        v10[2].klass = (Il2CppClass *)((char *)klass + ItemEntity__GetTradePickupTime(supportTool, 0));
        return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v12;
      }
      if ( !v12 )
        goto LABEL_31;
    }
    v37 = v12->fields._items;
    v38 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
    ++v12->fields._version;
    if ( !v37 )
      goto LABEL_31;
    v39 = v12->fields._size;
    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)v27,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v12->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v27;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), v27, v29, v30, v31, v32, v33, v34);
    }
  }
  return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v12;
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
    sub_21FFECC(this, 0);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  return x->fields.startedAt <= tradeThisTimeStartedAt && tradeThisTimeStartedAt <= x->fields.endedAt;
}


bool EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__1(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x9
  int64_t startedAt; // x8

  if ( !x )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  result = x->fields.startedAt <= tradeThisTimeStartedAt
        && (endedAt = x->fields.endedAt, tradeThisTimeStartedAt <= endedAt)
        && endedAt > this->fields.currentTime;
  return result;
}