void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0BA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FD0BA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_49FD0B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49FD0B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2E374A4 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePrimaryKey(
        UserEventTradeEntity_o *this,
        const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t __fastcall UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v8; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v10; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FD0B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___, method);
    sub_1B640C8(&System_Func_EventTradeResultInfo__int__TypeInfo, v4);
    sub_1B640C8(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__, v5);
    sub_1B640C8(&UserEventTradeEntity___c_TypeInfo, v6);
    byte_49FD0B6 = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v8 = UserEventTradeEntity___c_TypeInfo;
  if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
    v8 = UserEventTradeEntity___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v8->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = UserEventTradeEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventTradeResultInfo__int__TypeInfo, method, v2);
    System_Func_object__int____ctor(_9__6_0, v10, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__6_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v12, v13);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__6_0,
           (const MethodInfo_2E700DC *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Time; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct EventTradeInfo_array *tradeList; // x25
  int max_length; // w8
  bool v12; // w26
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  int v14; // w27
  EventTradeInfo_o *v15; // x28
  Il2CppObject *Entity; // x0
  int64_t startedAt; // x23
  int32_t tradeNum; // w22
  int32_t getNum; // w21
  EventTradeGoodsEntity_o *v20; // x24

  if ( (byte_49FD0B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v4);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49FD0B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_19;
  max_length = tradeList->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B6432C(Master_object, v9);
      v15 = tradeList->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v13,
                 v15->fields.tradeGoodsId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      startedAt = v15->fields.startedAt;
      tradeNum = v15->fields.tradeNum;
      getNum = v15->fields.getNum;
      v20 = (EventTradeGoodsEntity_o *)Entity;
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_45899092(
                                        v20,
                                        startedAt,
                                        Time,
                                        tradeNum,
                                        getNum,
                                        0LL);
      if ( (int)Master_object <= 0 && v15->fields.getNum < 1 )
      {
        max_length = tradeList->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_19:
    sub_1B64324(Master_object);
  }
  return v12;
}


bool __fastcall UserEventTradeEntity__IsBuyAble(
        UserEventTradeEntity_o *this,
        CommonConsumeEntity_array *commonConsumeEntityArray,
        const MethodInfo *method)
{
  signed int max_length; // w8
  bool v5; // w20
  signed int v6; // w21

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
        sub_1B6432C(this, commonConsumeEntityArray);
      this = (UserEventTradeEntity_o *)commonConsumeEntityArray->m_Items[v6];
      if ( !this )
        break;
      this = (UserEventTradeEntity_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0LL);
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
    sub_1B64324(this);
  }
  return !v5;
}


bool __fastcall UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Time; // x19
  Il2CppObject *Master_object; // x20
  CommonConsumeEntity_array *CompleteNum_45899092; // x0
  __int64 v11; // x1
  struct EventTradeInfo_array *tradeList; // x26
  int max_length; // w8
  bool v14; // w27
  CommonConsumeMaster_o *v15; // x21
  int v16; // w28
  EventTradeInfo_o *v17; // x24
  EventTradeGoodsEntity_o *Entity; // x22
  int32_t TradeMaxNum; // w0
  int32_t tradeNum; // w23
  int64_t startedAt; // x1
  int32_t v22; // w24
  int v23; // w25
  const MethodInfo *v24; // x2

  if ( (byte_49FD0B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v5);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    byte_49FD0B8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  CompleteNum_45899092 = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_21;
  max_length = tradeList->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = (CommonConsumeMaster_o *)CompleteNum_45899092;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B6432C(CompleteNum_45899092, v11);
      v17 = tradeList->m_Items[v16];
      if ( !v17 || !Master_object )
        break;
      Entity = (EventTradeGoodsEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            v17->fields.tradeGoodsId,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(Entity, 0LL);
      tradeNum = v17->fields.tradeNum;
      startedAt = v17->fields.startedAt;
      v22 = TradeMaxNum;
      CompleteNum_45899092 = (CommonConsumeEntity_array *)EventTradeTimeCalculation__GetCompleteNum_45899092(
                                                            Entity,
                                                            startedAt,
                                                            Time,
                                                            tradeNum,
                                                            0,
                                                            0LL);
      if ( !Entity || !v15 )
        break;
      v23 = (int)CompleteNum_45899092;
      CompleteNum_45899092 = CommonConsumeMaster__GetSortedEntityList(v15, Entity->fields.commonConsumeId, 0LL);
      if ( tradeNum - v23 >= v22
        || (CompleteNum_45899092 = (CommonConsumeEntity_array *)UserEventTradeEntity__IsBuyAble(
                                                                  (UserEventTradeEntity_o *)CompleteNum_45899092,
                                                                  CompleteNum_45899092,
                                                                  v24),
            ((unsigned __int8)CompleteNum_45899092 & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v14 = ++v16 < max_length;
        if ( v16 < max_length )
          continue;
      }
      return v14;
    }
LABEL_21:
    sub_1B64324(CompleteNum_45899092);
  }
  return v14;
}


bool __fastcall UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Int32_array **v15; // x8
  System_Int32_array *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v22; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v24; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FD0B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, usedStoreIdx);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&System_Func_EventTradeInfo__int__TypeInfo, v8);
    sub_1B640C8(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__, v9);
    sub_1B640C8(&UserEventTradeEntity___c_TypeInfo, v10);
    byte_49FD0B7 = 1;
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  if ( !*(_DWORD *)(v13 + 224) )
    j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  v15 = *(System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  *usedStoreIdx = *v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v16, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1B64324(v17);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v22 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v22 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v22->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = UserEventTradeEntity___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventTradeInfo__int__TypeInfo, v18, v19);
      System_Func_object__int____ctor(_9__7_0, v24, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventTradeInfo__int__o *)_9__7_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v26, v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v29 = System_Linq_Enumerable__ToArray_int_(
            v28,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v29, v30, v31);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD0BB & 1) == 0 )
  {
    sub_1B640C8(&UserEventTradeEntity___c_TypeInfo, v1);
    byte_49FD0BB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserEventTradeEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall UserEventTradeEntity___c___ctor(UserEventTradeEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventTradeEntity___c___GetTotalTradeCount_b__6_0(
        UserEventTradeEntity___c_o *this,
        EventTradeResultInfo_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B64324(this);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B64324(this);
  return info->fields.storeIdx;
}