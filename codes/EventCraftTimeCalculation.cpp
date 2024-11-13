void __fastcall EventCraftTimeCalculation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A01B & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v1, v2);
    byte_4B1A01B = 1;
  }
  EventCraftTimeCalculation_TypeInfo->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE = 1000;
}


int32_t __fastcall EventCraftTimeCalculation__GetCompleteNum(
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
  if ( (byte_4B1A015 & 1) == 0 )
  {
    item = (EventCraftListViewItem_o *)sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, supportTool, endedAt);
    byte_4B1A015 = 1;
  }
  if ( !v7 || (TradeInfo_k__BackingField = v7->fields._TradeInfo_k__BackingField) == 0LL )
    sub_1BCAA3C(item, supportTool);
  TradeGoodsEntity_k__BackingField = v7->fields._TradeGoodsEntity_k__BackingField;
  startedAt = TradeInfo_k__BackingField->fields.startedAt;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  getNum = TradeInfo_k__BackingField->fields.getNum;
  PickupInfoList_k__BackingField = v7->fields._PickupInfoList_k__BackingField;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, supportTool);
  return EventCraftTimeCalculation__GetCompleteNum_46368688(
           TradeGoodsEntity_k__BackingField,
           startedAt,
           endedAt,
           tradeNum,
           getNum,
           PickupInfoList_k__BackingField,
           supportTool,
           v4);
}


int32_t __fastcall EventCraftTimeCalculation__GetCompleteNum_46368688(
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
  if ( (byte_4B1A016 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, startedAt, endedAt);
    byte_4B1A016 = 1;
  }
  if ( tradeNum < 1 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, startedAt);
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


int64_t __fastcall EventCraftTimeCalculation__GetCraftFinishTime(
        EventTradeGoodsEntity_o *goodsEntity,
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int32_t tradeNum,
        int64_t startedAt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x24

  if ( (byte_4B1A017 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, pickupInfoList, supportTool);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B1A017 = 1;
  }
  if ( startedAt <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, pickupInfoList);
    startedAt = NetworkManager__getTime(0LL);
  }
  if ( tradeNum < 1 )
    return 0LL;
  v13 = 0LL;
  do
  {
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, pickupInfoList);
    --tradeNum;
    v13 += EventCraftTimeCalculation__GetCraftTime(pickupInfoList, supportTool, goodsEntity, startedAt, v13, method);
  }
  while ( tradeNum );
  return v13;
}


int32_t __fastcall EventCraftTimeCalculation__GetCraftMaxNum(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftPickupInfo__o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int maxNum; // w22
  int64_t Time; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  int64_t v15; // x23
  int64_t v16; // x24
  int v17; // w26
  int64_t CraftTime; // x0
  BalanceConfig_c *v19; // x8
  int64_t v20; // x25

  v6 = pickupInfoList;
  if ( (byte_4B1A018 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, supportTool, goodsEntity);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v7, v8);
    pickupInfoList = (System_Collections_Generic_List_EventCraftPickupInfo__o *)sub_1BCA7E0(
                                                                                  &NetworkManager_TypeInfo,
                                                                                  v9,
                                                                                  v10);
    byte_4B1A018 = 1;
  }
  if ( !goodsEntity )
    sub_1BCAA3C(pickupInfoList, supportTool);
  maxNum = goodsEntity->fields.maxNum;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, supportTool);
  Time = NetworkManager__getTime(0LL);
  if ( maxNum >= 2 )
  {
    v15 = Time;
    v16 = 0LL;
    v17 = 1;
    while ( 1 )
    {
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v13);
      CraftTime = EventCraftTimeCalculation__GetCraftTime(v6, supportTool, goodsEntity, v15, v16, v14);
      v19 = BalanceConfig_TypeInfo;
      v20 = CraftTime;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
        v19 = BalanceConfig_TypeInfo;
      }
      v16 += v20;
      if ( v16 > v19->static_fields->SECONDS_PER_DAY )
        break;
      if ( maxNum == ++v17 )
        return maxNum;
    }
    return v17 - 1;
  }
  return maxNum;
}


int64_t __fastcall EventCraftTimeCalculation__GetCraftTime(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        EventTradeGoodsEntity_o *goodsEntity,
        int64_t tradeStartedAt,
        int64_t endTradeTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x19
  __int64 v36; // x1
  int64_t Time; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  int64_t v40; // x23
  int64_t v41; // x25
  System_Collections_ICollection_o *PickupInfo; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  int64_t result; // x0
  System_Func_object__bool__o *v46; // x22
  EventCraftTimeCalculation_c *v47; // x8
  int64_t v48; // x22
  int DEFAULT_EVENT_CRAFT_TIME_RATE; // w28
  EventCraftTimeCalculation_c *v50; // x0
  int32_t tradeTime; // w20
  int v52; // w29
  double v53; // d8
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x8
  __int64 v58; // x20
  EventTradePickupMaster_c *v59; // x0
  System_Func_object__bool__o *v60; // x20
  Il2CppObject *v61; // x0
  EventCraftTimeCalculation_c *v62; // x8
  Il2CppObject *v63; // x20
  int klass; // w21
  __int64 v65; // x22
  EventCraftTimeCalculation_c *v66; // x0
  double v67; // d8
  double v68; // d9
  double v69; // d8
  System_Convert_c *v70; // x0
  double v71; // d0
  __int64 v72; // x20
  double v73; // d8
  Il2CppObject *v74; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B1A019 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, supportTool, goodsEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___, v17, v18);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v19, v20);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Math_TypeInfo, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__, v29, v30);
    sub_1BCA7E0(&Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__, v31, v32);
    sub_1BCA7E0(&EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo, v33, v34);
    byte_4B1A019 = 1;
  }
  v74 = 0LL;
  entity = 0LL;
  v35 = sub_1BCAA2C(EventCraftTimeCalculation___c__DisplayClass5_0_TypeInfo, supportTool, goodsEntity, tradeStartedAt);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
  Time = NetworkManager__getTime(0LL);
  if ( !v35 )
    goto LABEL_54;
  v40 = endTradeTime + tradeStartedAt;
  *(_QWORD *)(v35 + 16) = v40;
  v41 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v38);
  PickupInfo = (System_Collections_ICollection_o *)EventCraftTimeCalculation__ReCreatePickupInfo(
                                                     pickupInfoList,
                                                     supportTool,
                                                     v41,
                                                     v40,
                                                     v39);
  Time = BasicHelper__IsNullOrEmpty(PickupInfo, 0LL);
  if ( (Time & 1) != 0 )
  {
    if ( goodsEntity )
      return goodsEntity->fields.tradeTime;
LABEL_54:
    sub_1BCAA3C(Time, v38);
  }
  v46 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v38, v43, v44);
  System_Func_object__bool____ctor(
    v46,
    (Il2CppObject *)v35,
    Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__0__,
    0LL);
  Time = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                    (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
                    (System_Func_TSource__bool__o *)v46,
                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
  v47 = EventCraftTimeCalculation_TypeInfo;
  v48 = Time;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v38);
    v47 = EventCraftTimeCalculation_TypeInfo;
  }
  DEFAULT_EVENT_CRAFT_TIME_RATE = v47->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( v48 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
    Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Time )
      goto LABEL_54;
    Time = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
             &entity,
             *(_DWORD *)(v48 + 20),
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( (Time & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_54;
      DEFAULT_EVENT_CRAFT_TIME_RATE = (int)entity[4].klass;
    }
  }
  if ( !goodsEntity )
    goto LABEL_54;
  v50 = EventCraftTimeCalculation_TypeInfo;
  tradeTime = goodsEntity->fields.tradeTime;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v38);
    v50 = EventCraftTimeCalculation_TypeInfo;
  }
  v52 = v50->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
  v53 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / (double)v52);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v38);
  result = System_Convert__ToInt64_63060120(v53, 0LL);
  if ( v48 )
    v57 = *(_QWORD *)(v48 + 32) - *(_QWORD *)(v35 + 16);
  else
    v57 = 0LL;
  v58 = result - v57;
  *(_QWORD *)(v35 + 24) = v57;
  if ( result >= v57 )
  {
    v59 = EventTradePickupMaster_TypeInfo;
    if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v54);
      v59 = EventTradePickupMaster_TypeInfo;
    }
    *(double *)(v35 + 32) = (double)v58
                          * (double)v59->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE
                          / (double)DEFAULT_EVENT_CRAFT_TIME_RATE;
    v60 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v54, v55, v56);
    System_Func_object__bool____ctor(
      v60,
      (Il2CppObject *)v35,
      Method_EventCraftTimeCalculation___c__DisplayClass5_0__GetCraftTime_b__1__,
      0LL);
    v61 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfo,
            (System_Func_TSource__bool__o *)v60,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
    v62 = EventCraftTimeCalculation_TypeInfo;
    v63 = v61;
    if ( EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      if ( v61 )
      {
LABEL_35:
        klass = v62->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
        Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( !Time )
          goto LABEL_54;
        Time = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                 &v74,
                 HIDWORD(v63[1].klass),
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (Time & 1) != 0 )
        {
          if ( !v74 )
            goto LABEL_54;
          klass = (int)v74[4].klass;
        }
        v65 = *(_QWORD *)(v35 + 24);
        v66 = EventCraftTimeCalculation_TypeInfo;
        v67 = *(double *)(v35 + 32);
        v68 = v67 + (double)(v65 + *(_QWORD *)(v35 + 16)) - (double)(__int64)v63[1].monitor;
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v38);
          v66 = EventCraftTimeCalculation_TypeInfo;
          v65 = *(_QWORD *)(v35 + 24);
        }
        v69 = v67 - v68 + v68 * (double)klass / (double)v66->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
        v70 = System_Convert_TypeInfo;
        v71 = (double)v65;
        goto LABEL_50;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v38);
      v62 = EventCraftTimeCalculation_TypeInfo;
      if ( v63 )
        goto LABEL_35;
    }
    v72 = *(_QWORD *)(v35 + 24);
    v69 = *(double *)(v35 + 32);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38);
    v70 = System_Convert_TypeInfo;
    v71 = (double)v72;
LABEL_50:
    v73 = ceil(v69 + v71);
    if ( !v70->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v70, v38);
    return System_Convert__ToInt64_63060120(v73, 0LL);
  }
  return result;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *__fastcall EventCraftTimeCalculation__ReCreatePickupInfo(
        System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList,
        ItemEntity_o *supportTool,
        int64_t currentTime,
        int64_t tradeThisTimeStartedAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *current; // x29
  int64_t v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v57; // x22
  char *monitor; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Func_object__bool__o *v68; // x23
  Il2CppClass *klass; // x22
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A01A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___, supportTool, currentTime);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__get_Current__, v13, v14);
    sub_1BCA7E0(&EventCraftPickupInfo_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__, v27, v28);
    sub_1BCA7E0(&EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo, v29, v30);
    byte_4B1A01A = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v31 = (Il2CppObject *)sub_1BCAA2C(
                          EventCraftTimeCalculation___c__DisplayClass6_0_TypeInfo,
                          supportTool,
                          currentTime,
                          tradeThisTimeStartedAt);
  System_Object___ctor(v31, 0LL);
  if ( !v31 )
LABEL_32:
    sub_1BCAA3C(v32, v33);
  v31[1].klass = (Il2CppClass *)tradeThisTimeStartedAt;
  v31[1].monitor = (void *)currentTime;
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
  if ( pickupInfoList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v75,
      (System_Collections_Generic_List_object__o *)pickupInfoList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCraftPickupInfo__GetEnumerator__);
    v76 = v75;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v76,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__MoveNext__) )
    {
      current = v76.fields._current;
      v44 = sub_1BCAA2C(EventCraftPickupInfo_TypeInfo, v40, v41, v42);
      System_Object___ctor((Il2CppObject *)v44, 0LL);
      if ( !current )
        sub_1BCAA3C(v45, v46);
      if ( !v44 )
        sub_1BCAA3C(v45, v46);
      *(Il2CppObject *)(v44 + 24) = *(Il2CppObject *)((char *)current + 24);
      *(_DWORD *)(v44 + 20) = HIDWORD(current[1].klass);
      if ( !v36 )
        sub_1BCAA3C(v45, v46);
      items = v36->fields._items;
      v54 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1BCAA3C(v45, v46);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v44,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v44;
        sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v44, v47, v48, v49, v50, v51, v52);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v76,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCraftPickupInfo__Dispose__);
  }
  if ( supportTool )
  {
    v57 = sub_1BCAA2C(EventCraftPickupInfo_TypeInfo, v37, v38, v39);
    System_Object___ctor((Il2CppObject *)v57, 0LL);
    if ( !v57 )
      goto LABEL_32;
    monitor = (char *)v31[1].monitor;
    *(_QWORD *)(v57 + 24) = monitor;
    *(_QWORD *)(v57 + 32) = &monitor[ItemEntity__GetTradePickupTime(supportTool, 0LL)];
    *(_DWORD *)(v57 + 20) = supportTool->fields.id;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v36, 0LL) )
    {
      v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventCraftPickupInfo__TypeInfo,
                                                           v59,
                                                           v60,
                                                           v61);
      System_Collections_Generic_List_object____ctor(
        v36,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCraftPickupInfo___ctor__);
      if ( !v36 )
        goto LABEL_32;
    }
    else
    {
      v68 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventCraftPickupInfo__bool__TypeInfo, v59, v60, v61);
      System_Func_object__bool____ctor(
        v68,
        v31,
        Method_EventCraftTimeCalculation___c__DisplayClass6_0__ReCreatePickupInfo_b__0__,
        0LL);
      v32 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              (System_Collections_Generic_IEnumerable_TSource__o *)v36,
              (System_Func_TSource__bool__o *)v68,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftPickupInfo___);
      if ( v32 )
      {
        klass = v32[2].klass;
        v32[2].klass = (Il2CppClass *)((char *)klass + ItemEntity__GetTradePickupTime(supportTool, 0LL));
        return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v36;
      }
      if ( !v36 )
        goto LABEL_32;
    }
    v70 = v36->fields._items;
    v71 = Method_System_Collections_Generic_List_EventCraftPickupInfo__Add__;
    ++v36->fields._version;
    if ( !v70 )
      goto LABEL_32;
    v72 = v36->fields._size;
    if ( (unsigned int)v72 >= v70->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v57,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v70->obj.klass + v72;
      v36->fields._size = v72 + 1;
      v73[4] = (Il2CppClass *)v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), v57, v62, v63, v64, v65, v66, v67);
    }
  }
  return (System_Collections_Generic_List_EventCraftPickupInfo__o *)v36;
}


void __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__0(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  return x->fields.startedAt <= tradeThisTimeStartedAt && tradeThisTimeStartedAt <= x->fields.endedAt;
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass5_0___GetCraftTime_b__1(
        EventCraftTimeCalculation___c__DisplayClass5_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t startedAt; // x9

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  startedAt = x->fields.startedAt;
  return tradeThisTimeStartedAt < startedAt
      && this->fields.leftTradeTime + (double)(this->fields.beforeTime + tradeThisTimeStartedAt) > (double)startedAt;
}


void __fastcall EventCraftTimeCalculation___c__DisplayClass6_0___ctor(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftTimeCalculation___c__DisplayClass6_0___ReCreatePickupInfo_b__0(
        EventCraftTimeCalculation___c__DisplayClass6_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  int64_t tradeThisTimeStartedAt; // x8
  int64_t endedAt; // x9
  bool result; // w0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  tradeThisTimeStartedAt = this->fields.tradeThisTimeStartedAt;
  result = x->fields.startedAt <= tradeThisTimeStartedAt
        && (endedAt = x->fields.endedAt, tradeThisTimeStartedAt <= endedAt)
        && endedAt > this->fields.currentTime;
  return result;
}