void __fastcall UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE33 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BE33 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A5BE2E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4A5BE2E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_2E7D9C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall UserEventTradeEntity__CreatePrimaryKey(
        UserEventTradeEntity_o *this,
        const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t __fastcall UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v4; // x0
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5BE2F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_1B885B0(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_1B885B0(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__);
    sub_1B885B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4A5BE2F = 1;
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
  _9__6_0 = (System_Func_object__int__o *)v4->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = UserEventTradeEntity___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v6, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__6_0__, 0LL);
    static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__6_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v8, v9);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__6_0,
           (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool __fastcall UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct EventTradeInfo_array *tradeList; // x25
  int max_length; // w8
  bool v8; // w26
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  int v10; // w27
  EventTradeInfo_o *v11; // x28
  Il2CppObject *Entity; // x0
  int64_t startedAt; // x23
  int32_t tradeNum; // w22
  int32_t getNum; // w21
  EventTradeGoodsEntity_o *v16; // x24

  if ( (byte_4A5BE32 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BE32 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_19;
  max_length = tradeList->max_length;
  v8 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1B88814(Master_object, v5);
      v11 = tradeList->m_Items[v10];
      if ( !v11 || !v9 )
        break;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v9,
                 v11->fields.tradeGoodsId,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      startedAt = v11->fields.startedAt;
      tradeNum = v11->fields.tradeNum;
      getNum = v11->fields.getNum;
      v16 = (EventTradeGoodsEntity_o *)Entity;
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_30740228(
                                        v16,
                                        startedAt,
                                        Time,
                                        tradeNum,
                                        getNum,
                                        0LL);
      if ( (int)Master_object <= 0 && v11->fields.getNum < 1 )
      {
        max_length = tradeList->max_length;
        v8 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v8;
    }
LABEL_19:
    sub_1B8880C(Master_object, v5);
  }
  return v8;
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
        sub_1B88814(this, commonConsumeEntityArray);
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
    sub_1B8880C(this, commonConsumeEntityArray);
  }
  return !v5;
}


bool __fastcall UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x19
  Il2CppObject *Master_object; // x20
  CommonConsumeEntity_array *CompleteNum_30740228; // x0
  __int64 v6; // x1
  struct EventTradeInfo_array *tradeList; // x26
  int max_length; // w8
  bool v9; // w27
  CommonConsumeMaster_o *v10; // x21
  int v11; // w28
  EventTradeInfo_o *v12; // x24
  EventTradeGoodsEntity_o *Entity; // x22
  int32_t TradeMaxNum; // w0
  int32_t tradeNum; // w23
  int64_t startedAt; // x1
  int32_t v17; // w24
  int v18; // w25
  const MethodInfo *v19; // x2

  if ( (byte_4A5BE31 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BE31 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  CompleteNum_30740228 = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_21;
  max_length = tradeList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = (CommonConsumeMaster_o *)CompleteNum_30740228;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1B88814(CompleteNum_30740228, v6);
      v12 = tradeList->m_Items[v11];
      if ( !v12 || !Master_object )
        break;
      Entity = (EventTradeGoodsEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            v12->fields.tradeGoodsId,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(Entity, 0LL);
      tradeNum = v12->fields.tradeNum;
      startedAt = v12->fields.startedAt;
      v17 = TradeMaxNum;
      CompleteNum_30740228 = (CommonConsumeEntity_array *)EventTradeTimeCalculation__GetCompleteNum_30740228(
                                                            Entity,
                                                            startedAt,
                                                            Time,
                                                            tradeNum,
                                                            0,
                                                            0LL);
      if ( !Entity || !v10 )
        break;
      v18 = (int)CompleteNum_30740228;
      CompleteNum_30740228 = CommonConsumeMaster__GetSortedEntityList(v10, Entity->fields.commonConsumeId, 0LL);
      if ( tradeNum - v18 >= v17
        || (CompleteNum_30740228 = (CommonConsumeEntity_array *)UserEventTradeEntity__IsBuyAble(
                                                                  (UserEventTradeEntity_o *)CompleteNum_30740228,
                                                                  CompleteNum_30740228,
                                                                  v19),
            ((unsigned __int8)CompleteNum_30740228 & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v9 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v9;
    }
LABEL_21:
    sub_1B8880C(CompleteNum_30740228, v6);
  }
  return v9;
}


bool __fastcall UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  int32_t v3; // w3
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  System_Int32_array **v10; // x8
  System_Int32_array *v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  void *monitor; // x23
  UserEventTradeEntity___c_c *v16; // x0
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v18; // x22
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5BE30 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_1B885B0(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__);
    sub_1B885B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4A5BE30 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(System_Int32_array ***)(v9 + 184);
  v11 = *v10;
  *usedStoreIdx = *v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v11, (int32_t)method, v3);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_1B8880C(v12, v13);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v16 = UserEventTradeEntity___c_TypeInfo;
    if ( !UserEventTradeEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo);
      v16 = UserEventTradeEntity___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v16->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = UserEventTradeEntity___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__7_0, v18, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__7_0__, 0LL);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_EventTradeInfo__int__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v23 = System_Linq_Enumerable__ToArray_int_(
            v22,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedStoreIdx, (int32_t)v23, v24, v25);
  }
  return monitor != 0LL;
}


void __fastcall UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BE34 & 1) == 0 )
  {
    sub_1B885B0(&UserEventTradeEntity___c_TypeInfo);
    byte_4A5BE34 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return v->fields.getNum;
}


int32_t __fastcall UserEventTradeEntity___c___TryGetUsedStoreIdx_b__7_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B8880C(this, 0LL);
  return info->fields.storeIdx;
}