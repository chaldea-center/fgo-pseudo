void UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E28 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43E28 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C43E23 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C43E23 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_30E5C74 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserEventTradeEntity__CreatePrimaryKey(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v4; // x0
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C43E24 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_1C37058(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_1C37058(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__);
    sub_1C37058(&UserEventTradeEntity___c_TypeInfo);
    byte_4C43E24 = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v4 = UserEventTradeEntity___c_TypeInfo;
  if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
    v4 = UserEventTradeEntity___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v4->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = UserEventTradeEntity___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v6, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_31259AC *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v5; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  int v7; // w19
  EventTradeInfo_o *v8; // x20
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventTradeGoodsEntity_o **v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v14; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v16; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v18; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4C43E27 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C37058(&EventCraftTimeCalculation_TypeInfo);
    sub_1C37058(&EventTradeTimeCalculation_TypeInfo);
    sub_1C37058(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__);
    sub_1C37058(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
    byte_4C43E27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_28;
  max_length = tradeList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(Master_object);
      v8 = tradeList->m_Items[v7];
      v9 = sub_1C372A4(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( !v8 )
        break;
      if ( !v6 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v6,
                        v8->fields.tradeGoodsId,
                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v9 )
        break;
      *(_QWORD *)(v9 + 16) = Master_object;
      v12 = (EventTradeGoodsEntity_o **)(v9 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)Master_object, v10, v11);
      if ( this->fields.pickupList )
      {
        pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
        v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0);
        v15 = System_Linq_Enumerable__Where_object_(
                pickupList,
                (System_Func_TSource__bool__o *)v14,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v16 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v15,
                                                                           (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v16 = 0;
      }
      tradeNum = v8->fields.tradeNum;
      v18 = *v12;
      startedAt = v8->fields.startedAt;
      getNum = v8->fields.getNum;
      if ( v16 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_31682628(
                                          v18,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v16,
                                          0,
                                          0);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_32608700(
                                          v18,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0);
      }
      if ( v8->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v5 = ++v7 < max_length;
        if ( v7 < max_length )
          continue;
      }
      return v5;
    }
LABEL_28:
    sub_1C372B4(Master_object);
  }
  return v5;
}


bool UserEventTradeEntity__IsBuyAble(
        UserEventTradeEntity_o *this,
        CommonConsumeEntity_array *commonConsumeEntityArray,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w20
  int v6; // w21

  if ( !commonConsumeEntityArray )
    goto LABEL_10;
  max_length = commonConsumeEntityArray->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C372BC(this);
      this = (UserEventTradeEntity_o *)commonConsumeEntityArray->m_Items[v6];
      if ( !this )
        break;
      this = (UserEventTradeEntity_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0);
      if ( (int)this > 0 )
      {
        max_length = commonConsumeEntityArray->max_length;
        v5 = ++v6 < max_length;
        if ( v6 < max_length )
          continue;
      }
      return !v5;
    }
LABEL_10:
    sub_1C372B4(this);
  }
  return !v5;
}


bool UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  CommonConsumeMaster_o *Entity; // x0
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  int v7; // w21
  EventTradeInfo_o *v8; // x22
  __int64 v9; // x25
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventTradeGoodsEntity_o **v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v14; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_TSource__o *v16; // x0
  EventTradeGoodsEntity_o *v17; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v18; // x27
  Il2CppObject *v19; // x23
  UserEventTradeEntity_o *v20; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v23; // x29
  int64_t startedAt; // x28
  int32_t v25; // w26
  int32_t CompleteNum_31682628; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v28; // x28
  int64_t v29; // x27
  int32_t v30; // w27
  const MethodInfo *v31; // x2
  struct EventTradeInfo_array *v33; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v34; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v36; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C43E26 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C37058(&EventCraftTimeCalculation_TypeInfo);
    sub_1C37058(&EventTradeTimeCalculation_TypeInfo);
    sub_1C37058(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__);
    sub_1C37058(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
    byte_4C43E26 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (CommonConsumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_33:
    sub_1C372B4(Entity);
  max_length = tradeList->max_length;
  v36 = max_length > 0;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v33 = this->fields.tradeList;
    v34 = Entity;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(Entity);
      v8 = tradeList->m_Items[v7];
      v9 = sub_1C372A4(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( !v8 )
        goto LABEL_33;
      if ( !Master_object )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          v8->fields.tradeGoodsId,
                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v9 )
        goto LABEL_33;
      *(_QWORD *)(v9 + 16) = Entity;
      v12 = (EventTradeGoodsEntity_o **)(v9 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)Entity, v10, v11);
      if ( !this->fields.pickupList )
        break;
      pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v9,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0);
      v15 = System_Linq_Enumerable__Where_object_(
              pickupList,
              (System_Func_TSource__bool__o *)v14,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v16 = System_Linq_Enumerable__ToList_object_(
              v15,
              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v17 = *(EventTradeGoodsEntity_o **)(v9 + 16);
      if ( !v16 )
        goto LABEL_22;
      v18 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v16;
      v19 = Master_object;
      v20 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v18, 0, v17, 0);
      tradeNum = v8->fields.tradeNum;
      v23 = *v12;
      startedAt = v8->fields.startedAt;
      v25 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_31682628 = EventCraftTimeCalculation__GetCompleteNum_31682628(
                               v23,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v18,
                               0,
                               0);
      this = v20;
      Master_object = v19;
      tradeList = v33;
LABEL_27:
      v30 = CompleteNum_31682628;
      Entity = v34;
      if ( !*v12 || !v34 )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)CommonConsumeMaster__GetSortedEntityList(v34, (*v12)->fields.commonConsumeId, 0);
      if ( tradeNum - v30 >= v25
        || (Entity = (CommonConsumeMaster_o *)UserEventTradeEntity__IsBuyAble(
                                                (UserEventTradeEntity_o *)Entity,
                                                (CommonConsumeEntity_array *)Entity,
                                                v31),
            ((unsigned __int8)Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v36 = ++v7 < max_length;
        if ( v7 < max_length )
          continue;
      }
      return v36;
    }
    v17 = *v12;
LABEL_22:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v17, 0);
    tradeNum = v8->fields.tradeNum;
    v28 = *v12;
    v29 = v8->fields.startedAt;
    v25 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_31682628 = EventTradeTimeCalculation__GetCompleteNum_32608700(v28, v29, endedAt, tradeNum, 0, 0);
    goto LABEL_27;
  }
  return v36;
}


bool UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array **v11; // x8
  System_Int32_array *v12; // x1
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v16; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v18; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C43E25 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_1C37058(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__);
    sub_1C37058(&UserEventTradeEntity___c_TypeInfo);
    byte_4C43E25 = 1;
  }
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(inited);
  v11 = *(System_Int32_array ***)(v10 + 184);
  v12 = *v11;
  *usedStoreIdx = *v11;
  sub_1C36FFC((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v12, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1C372B4(v13);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v16 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v16 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v16->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = UserEventTradeEntity___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v18, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v23 = System_Linq_Enumerable__ToArray_int_(
            v22,
            (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v23;
    sub_1C36FFC((CGThumbnailListItem_o *)usedStoreIdx, (int32_t)v23, v24, v25);
  }
  return monitor != 0;
}


void UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43E29 & 1) == 0 )
  {
    sub_1C37058(&UserEventTradeEntity___c_TypeInfo);
    byte_4C43E29 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventTradeEntity___c___ctor(UserEventTradeEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserEventTradeEntity___c___GetTotalTradeCount_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeResultInfo_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C372B4(this);
  return v->fields.getNum;
}


int32_t UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return info->fields.storeIdx;
}


void UserEventTradeEntity___c__DisplayClass10_0___ctor(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventTradeEntity___c__DisplayClass10_0___IsAbleReceiveRewards_b__0(
        UserEventTradeEntity___c__DisplayClass10_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0 )
    sub_1C372B4(this);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}


void UserEventTradeEntity___c__DisplayClass9_0___ctor(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventTradeEntity___c__DisplayClass9_0___IsRefillable_b__0(
        UserEventTradeEntity___c__DisplayClass9_0_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *goodsEntity; // x8

  if ( !x || (goodsEntity = this->fields.goodsEntity) == 0 )
    sub_1C372B4(this);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}