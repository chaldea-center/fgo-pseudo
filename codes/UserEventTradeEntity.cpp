void UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8276 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8276 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4CC8271 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4CC8271 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_3149128 *)Method_DataEntityBase_CreateMultiplePK_int___);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC8272 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_1C713B0(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_1C713B0(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__);
    sub_1C713B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4CC8272 = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v6, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_31896A4 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  struct EventTradeInfo_array *tradeList; // x28
  int max_length; // w8
  bool v6; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  int v8; // w19
  EventTradeInfo_o *v9; // x20
  __int64 v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  EventTradeGoodsEntity_o **v17; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v19; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v21; // x25
  int32_t tradeNum; // w23
  EventTradeGoodsEntity_o *v23; // x26
  int64_t startedAt; // x27
  int32_t getNum; // w24
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_4CC8275 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C713B0(&EventCraftTimeCalculation_TypeInfo);
    sub_1C713B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1C713B0(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__);
    sub_1C713B0(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
    byte_4CC8275 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_28;
  max_length = tradeList->max_length;
  v6 = max_length > 0;
  if ( max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(Master_object);
      v9 = tradeList->m_Items[v8];
      v10 = sub_1C715FC(UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0);
      if ( !v9 )
        break;
      if ( !v7 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v7,
                        v9->fields.tradeGoodsId,
                        (const MethodInfo_3408E80 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v10 )
        break;
      *(_QWORD *)(v10 + 16) = Master_object;
      v17 = (EventTradeGoodsEntity_o **)(v10 + 16);
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)Master_object, v11, v12, v13, v14, v15, v16);
      if ( this->fields.pickupList )
      {
        pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
        v19 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v19,
          (Il2CppObject *)v10,
          Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
          0);
        v20 = System_Linq_Enumerable__Where_object_(
                pickupList,
                (System_Func_TSource__bool__o *)v19,
                (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
        v21 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v20,
                                                                           (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      }
      else
      {
        v21 = 0;
      }
      tradeNum = v9->fields.tradeNum;
      v23 = *v17;
      startedAt = v9->fields.startedAt;
      getNum = v9->fields.getNum;
      if ( v21 )
      {
        if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_31915556(
                                          v23,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          v21,
                                          0,
                                          0);
      }
      else
      {
        if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
        Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_32841948(
                                          v23,
                                          startedAt,
                                          endedAt,
                                          tradeNum,
                                          getNum,
                                          0);
      }
      if ( v9->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v6 = ++v8 < max_length;
        if ( v8 < max_length )
          continue;
      }
      return v6;
    }
LABEL_28:
    sub_1C71608(Master_object, v3);
  }
  return v6;
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
        sub_1C71610(this);
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
    sub_1C71608(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x19
  CommonConsumeMaster_o *Entity; // x0
  __int64 v5; // x1
  struct EventTradeInfo_array *tradeList; // x23
  int max_length; // w8
  int v8; // w21
  EventTradeInfo_o *v9; // x22
  __int64 v10; // x25
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  EventTradeGoodsEntity_o **v17; // x24
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v19; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_TSource__o *v21; // x0
  EventTradeGoodsEntity_o *v22; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v23; // x27
  Il2CppObject *v24; // x23
  UserEventTradeEntity_o *v25; // x19
  int32_t CraftMaxNum; // w0
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *v28; // x29
  int64_t startedAt; // x28
  int32_t v30; // w26
  int32_t CompleteNum_31915556; // w0
  int32_t TradeMaxNum; // w0
  EventTradeGoodsEntity_o *v33; // x28
  int64_t v34; // x27
  int32_t v35; // w27
  const MethodInfo *v36; // x2
  struct EventTradeInfo_array *v38; // [xsp+0h] [xbp-80h]
  CommonConsumeMaster_o *v39; // [xsp+8h] [xbp-78h]
  int64_t endedAt; // [xsp+10h] [xbp-70h]
  bool v41; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4CC8274 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C713B0(&EventCraftTimeCalculation_TypeInfo);
    sub_1C713B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1C713B0(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__);
    sub_1C713B0(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
    byte_4CC8274 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  endedAt = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (CommonConsumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_33:
    sub_1C71608(Entity, v5);
  max_length = tradeList->max_length;
  v41 = max_length > 0;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v38 = this->fields.tradeList;
    v39 = Entity;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(Entity);
      v9 = tradeList->m_Items[v8];
      v10 = sub_1C715FC(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0);
      if ( !v9 )
        goto LABEL_33;
      if ( !Master_object )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          v9->fields.tradeGoodsId,
                                          (const MethodInfo_3408E80 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v10 )
        goto LABEL_33;
      *(_QWORD *)(v10 + 16) = Entity;
      v17 = (EventTradeGoodsEntity_o **)(v10 + 16);
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)Entity, v11, v12, v13, v14, v15, v16);
      if ( !this->fields.pickupList )
        break;
      pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      v19 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v10,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0);
      v20 = System_Linq_Enumerable__Where_object_(
              pickupList,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v21 = System_Linq_Enumerable__ToList_object_(
              v20,
              (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      v22 = *(EventTradeGoodsEntity_o **)(v10 + 16);
      if ( !v21 )
        goto LABEL_22;
      v23 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v21;
      v24 = Master_object;
      v25 = this;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v23, 0, v22, 0);
      tradeNum = v9->fields.tradeNum;
      v28 = *v17;
      startedAt = v9->fields.startedAt;
      v30 = CraftMaxNum;
      if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
      CompleteNum_31915556 = EventCraftTimeCalculation__GetCompleteNum_31915556(
                               v28,
                               startedAt,
                               endedAt,
                               tradeNum,
                               0,
                               v23,
                               0,
                               0);
      this = v25;
      Master_object = v24;
      tradeList = v38;
LABEL_27:
      v35 = CompleteNum_31915556;
      Entity = v39;
      if ( !*v17 || !v39 )
        goto LABEL_33;
      Entity = (CommonConsumeMaster_o *)CommonConsumeMaster__GetSortedEntityList(v39, (*v17)->fields.commonConsumeId, 0);
      if ( tradeNum - v35 >= v30
        || (Entity = (CommonConsumeMaster_o *)UserEventTradeEntity__IsBuyAble(
                                                (UserEventTradeEntity_o *)Entity,
                                                (CommonConsumeEntity_array *)Entity,
                                                v36),
            ((unsigned __int8)Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v41 = ++v8 < max_length;
        if ( v8 < max_length )
          continue;
      }
      return v41;
    }
    v22 = *v17;
LABEL_22:
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v22, 0);
    tradeNum = v9->fields.tradeNum;
    v33 = *v17;
    v34 = v9->fields.startedAt;
    v30 = TradeMaxNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    CompleteNum_31915556 = EventTradeTimeCalculation__GetCompleteNum_32841948(v33, v34, endedAt, tradeNum, 0, 0);
    goto LABEL_27;
  }
  return v41;
}


bool UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Int32_array **v15; // x8
  System_Int32_array *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v21; // x0
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v23; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4CC8273 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_1C713B0(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__);
    sub_1C713B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4CC8273 = 1;
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C47444(inited);
  v15 = *(System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  *usedStoreIdx = *v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)usedStoreIdx, (int32_t)v16, (int32_t)method, v3, v4, v5, v6, v7);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1C71608(v17, v18);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v21 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v21 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v21->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = UserEventTradeEntity___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v23, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
        (int32_t)_9__8_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v32 = System_Linq_Enumerable__ToArray_int_(
            v31,
            (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)usedStoreIdx, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  }
  return monitor != 0;
}


void UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC8277 & 1) == 0 )
  {
    sub_1C713B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4CC8277 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
  return v->fields.getNum;
}


int32_t UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C71608(this, 0);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}