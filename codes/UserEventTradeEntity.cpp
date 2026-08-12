void UserEventTradeEntity___ctor(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971739 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971739 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventTradeEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_5971734 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_5971734 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_38542C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserEventTradeEntity__CreatePrimaryKey(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  return UserEventTradeEntity__CreatePK(this->fields.eventId, method);
}


int32_t UserEventTradeEntity__GetTotalTradeCount(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *resultList; // x19
  UserEventTradeEntity___c_c *v4; // x0
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v7; // x21
  struct UserEventTradeEntity___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5971735 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
    sub_2213A60(&System_Func_EventTradeResultInfo__int__TypeInfo);
    sub_2213A60(&Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__);
    sub_2213A60(&UserEventTradeEntity___c_TypeInfo);
    byte_5971735 = 1;
  }
  resultList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.resultList;
  if ( !resultList )
    return 0;
  v4 = UserEventTradeEntity___c_TypeInfo;
  if ( !*(&UserEventTradeEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo, method);
    v4 = UserEventTradeEntity___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventTradeResultInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v7, Method_UserEventTradeEntity___c__GetTotalTradeCount_b__7_0__, 0);
    v8 = UserEventTradeEntity___c_TypeInfo->static_fields;
    v8->__9__7_0 = (struct System_Func_EventTradeResultInfo__int__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__7_0, (int32_t)_9__7_0, v9, v10, v11, v12, v13, v14);
  }
  return System_Linq_Enumerable__Sum_object_(
           resultList,
           (System_Func_TSource__int__o *)_9__7_0,
           (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_EventTradeResultInfo___);
}


bool UserEventTradeEntity__IsAbleReceiveRewards(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct EventTradeInfo_array *tradeList; // x27
  int max_length; // w8
  bool v8; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  int v10; // w29
  UserEventTradeEntity___c__DisplayClass10_0_c **v11; // x20
  EventTradeInfo_o *v12; // x19
  __int64 v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventTradeGoodsEntity_o **v20; // x23
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x24
  System_Func_object__bool__o *v23; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_TSource__o *v25; // x0
  int32_t tradeNum; // w22
  System_Collections_Generic_List_EventCraftPickupInfo__o *v27; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x27
  UserEventTradeEntity___c__DisplayClass10_0_c **v29; // x21
  UserEventTradeEntity_o *v30; // x20
  EventTradeGoodsEntity_o *v31; // x25
  int64_t startedAt; // x26
  int32_t getNum; // w23
  EventTradeGoodsEntity_o *v34; // x24
  int64_t v35; // x25
  int32_t v36; // w23
  struct EventTradeInfo_array *v38; // [xsp+0h] [xbp-70h]
  int64_t endedAt; // [xsp+8h] [xbp-68h]

  if ( (byte_5971738 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__);
    sub_2213A60(&UserEventTradeEntity___c__DisplayClass10_0_TypeInfo);
    byte_5971738 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  endedAt = NetworkManager__getTime(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
LABEL_27:
    sub_2213CDC(Master_object, v5);
  max_length = tradeList->max_length;
  v8 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v10 = 0;
    v11 = &UserEventTradeEntity___c__DisplayClass10_0_TypeInfo;
    v38 = this->fields.tradeList;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      v12 = tradeList->m_Items[v10];
      v13 = sub_2213CCC(*v11);
      System_Object___ctor((Il2CppObject *)v13, 0);
      if ( !v12 )
        goto LABEL_27;
      if ( !v9 )
        goto LABEL_27;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        v9,
                        v12->fields.tradeGoodsId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v13 )
        goto LABEL_27;
      *(_QWORD *)(v13 + 16) = Master_object;
      v20 = (EventTradeGoodsEntity_o **)(v13 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Master_object, v14, v15, v16, v17, v18, v19);
      pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        break;
      v23 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v13,
        Method_UserEventTradeEntity___c__DisplayClass10_0__IsAbleReceiveRewards_b__0__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              pickupList,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v25 = System_Linq_Enumerable__ToList_object_(
              v24,
              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      tradeNum = v12->fields.tradeNum;
      if ( !v25 )
        goto LABEL_20;
      v27 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v25;
      v28 = v9;
      v29 = v11;
      v30 = this;
      v31 = *v20;
      startedAt = v12->fields.startedAt;
      getNum = v12->fields.getNum;
      if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v21);
      Master_object = (Il2CppObject *)EventCraftTimeCalculation__GetCompleteNum_38114324(
                                        v31,
                                        startedAt,
                                        endedAt,
                                        tradeNum,
                                        getNum,
                                        v27,
                                        0,
                                        0);
      this = v30;
      v11 = v29;
      v9 = v28;
      tradeList = v38;
LABEL_23:
      if ( v12->fields.getNum <= 0 && tradeNum - (int)Master_object < 1 )
      {
        max_length = tradeList->max_length;
        v8 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v8;
    }
    tradeNum = v12->fields.tradeNum;
LABEL_20:
    v34 = *v20;
    v35 = v12->fields.startedAt;
    v36 = v12->fields.getNum;
    if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v21);
    Master_object = (Il2CppObject *)EventTradeTimeCalculation__GetCompleteNum_39026044(
                                      v34,
                                      v35,
                                      endedAt,
                                      tradeNum,
                                      v36,
                                      0);
    goto LABEL_23;
  }
  return v8;
}


bool UserEventTradeEntity__IsBuyAble(
        UserEventTradeEntity_o *this,
        CommonConsumeEntity_array *commonConsumeEntityArray,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w20
  __int64 v6; // x21

  if ( !commonConsumeEntityArray )
    goto LABEL_9;
  max_length = commonConsumeEntityArray->max_length;
  v5 = max_length < 1;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (UserEventTradeEntity_o *)commonConsumeEntityArray->m_Items[v6];
      if ( !this )
        break;
      this = (UserEventTradeEntity_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0);
      if ( (int)this > 0 )
      {
        max_length = commonConsumeEntityArray->max_length;
        v5 = (int)++v6 >= max_length;
        if ( (int)v6 < max_length )
          continue;
      }
      return v5;
    }
LABEL_9:
    sub_2213CDC(this, commonConsumeEntityArray);
  }
  return v5;
}


bool UserEventTradeEntity__IsRefillable(UserEventTradeEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x21
  CommonConsumeEntity_array *Entity; // x0
  __int64 v5; // x1
  struct EventTradeInfo_array *tradeList; // x29
  int max_length; // w8
  bool v8; // w19
  CommonConsumeMaster_o *v9; // x22
  int v10; // w20
  EventTradeInfo_o *v11; // x28
  __int64 v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  EventTradeGoodsEntity_o **v19; // x23
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x25
  System_Func_object__bool__o *v22; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x0
  System_Collections_Generic_List_EventCraftPickupInfo__o *v25; // x26
  EventTradeGoodsEntity_o *v26; // x24
  int32_t CraftMaxNum; // w0
  __int64 v28; // x1
  int32_t tradeNum; // w24
  int32_t v30; // w25
  EventTradeGoodsEntity_o *v31; // x27
  int64_t startedAt; // x28
  EventTradeGoodsEntity_o *v33; // x24
  int32_t TradeMaxNum; // w0
  __int64 v35; // x1
  EventTradeGoodsEntity_o *v36; // x26
  int64_t v37; // x27
  int v38; // w26
  const MethodInfo *v39; // x2
  int64_t endedAt; // [xsp+0h] [xbp-70h]

  if ( (byte_5971737 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__);
    sub_2213A60(&UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
    byte_5971737 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  endedAt = NetworkManager__getTime(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  Entity = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  tradeList = this->fields.tradeList;
  if ( !tradeList )
    goto LABEL_32;
  max_length = tradeList->max_length;
  v8 = max_length > 0;
  if ( max_length >= 1 )
  {
    v9 = (CommonConsumeMaster_o *)Entity;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(Entity);
      v11 = tradeList->m_Items[v10];
      v12 = sub_2213CCC(UserEventTradeEntity___c__DisplayClass9_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0);
      if ( !v11 )
        break;
      if ( !Master_object )
        break;
      Entity = (CommonConsumeEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              v11->fields.tradeGoodsId,
                                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
      if ( !v12 )
        break;
      *(_QWORD *)(v12 + 16) = Entity;
      v19 = (EventTradeGoodsEntity_o **)(v12 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)Entity, v13, v14, v15, v16, v17, v18);
      pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pickupList;
      if ( !pickupList )
        goto LABEL_21;
      v22 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v12,
        Method_UserEventTradeEntity___c__DisplayClass9_0__IsRefillable_b__0__,
        0);
      v23 = System_Linq_Enumerable__Where_object_(
              pickupList,
              (System_Func_TSource__bool__o *)v22,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
      v24 = System_Linq_Enumerable__ToList_object_(
              v23,
              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
      if ( v24 )
      {
        v25 = (System_Collections_Generic_List_EventCraftPickupInfo__o *)v24;
        v26 = *v19;
        if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v20);
        CraftMaxNum = EventCraftTimeCalculation__GetCraftMaxNum(v25, 0, v26, 0);
        tradeNum = v11->fields.tradeNum;
        v30 = CraftMaxNum;
        v31 = *v19;
        startedAt = v11->fields.startedAt;
        if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v28);
        Entity = (CommonConsumeEntity_array *)EventCraftTimeCalculation__GetCompleteNum_38114324(
                                                v31,
                                                startedAt,
                                                endedAt,
                                                tradeNum,
                                                0,
                                                v25,
                                                0,
                                                0);
      }
      else
      {
LABEL_21:
        v33 = *v19;
        if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v20);
        TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v33, 0);
        tradeNum = v11->fields.tradeNum;
        v30 = TradeMaxNum;
        v36 = *v19;
        v37 = v11->fields.startedAt;
        if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v35);
        Entity = (CommonConsumeEntity_array *)EventTradeTimeCalculation__GetCompleteNum_39026044(
                                                v36,
                                                v37,
                                                endedAt,
                                                tradeNum,
                                                0,
                                                0);
      }
      v38 = (int)Entity;
      if ( !*v19 || !v9 )
        break;
      Entity = CommonConsumeMaster__GetSortedEntityList(v9, (*v19)->fields.commonConsumeId, 0);
      if ( tradeNum - v38 >= v30
        || (Entity = (CommonConsumeEntity_array *)UserEventTradeEntity__IsBuyAble(
                                                    (UserEventTradeEntity_o *)Entity,
                                                    Entity,
                                                    v39),
            ((unsigned __int8)Entity & 1) == 0) )
      {
        max_length = tradeList->max_length;
        v8 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v8;
    }
LABEL_32:
    sub_2213CDC(Entity, v5);
  }
  return v8;
}


bool UserEventTradeEntity__TryGetUsedStoreIdx(
        UserEventTradeEntity_o *this,
        System_Int32_array **usedStoreIdx,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
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
  struct UserEventTradeEntity___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v24; // x22
  struct UserEventTradeEntity___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5971736 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_EventTradeInfo__int__TypeInfo);
    sub_2213A60(&Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__);
    sub_2213A60(&UserEventTradeEntity___c_TypeInfo);
    byte_5971736 = 1;
  }
  v11 = Method_System_Array_Empty_int___;
  v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_int___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, usedStoreIdx);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  v15 = *(System_Int32_array ***)(v14 + 184);
  v16 = *v15;
  *usedStoreIdx = *v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)usedStoreIdx,
    (int32_t)v16,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tradeList;
  if ( !tradeList )
    sub_2213CDC(v17, v18);
  monitor = tradeList[1].monitor;
  if ( monitor )
  {
    v21 = UserEventTradeEntity___c_TypeInfo;
    if ( !*(&UserEventTradeEntity___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserEventTradeEntity___c_TypeInfo, v18);
      v21 = UserEventTradeEntity___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v18);
        static_fields = UserEventTradeEntity___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventTradeInfo__int__TypeInfo);
      System_Func_object__int____ctor(_9__8_0, v24, Method_UserEventTradeEntity___c__TryGetUsedStoreIdx_b__8_0__, 0);
      v25 = UserEventTradeEntity___c_TypeInfo->static_fields;
      v25->__9__8_0 = (struct System_Func_EventTradeInfo__int__o *)_9__8_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__8_0, (int32_t)_9__8_0, v26, v27, v28, v29, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 tradeList,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventTradeInfo__int___);
    v33 = System_Linq_Enumerable__ToArray_int_(
            v32,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    *usedStoreIdx = v33;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)usedStoreIdx, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  }
  return monitor != 0;
}


void UserEventTradeEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597173A & 1) == 0 )
  {
    sub_2213A60(&UserEventTradeEntity___c_TypeInfo);
    byte_597173A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserEventTradeEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventTradeEntity___c_TypeInfo->static_fields->__9 = (struct UserEventTradeEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserEventTradeEntity___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return v->fields.getNum;
}


int32_t UserEventTradeEntity___c___TryGetUsedStoreIdx_b__8_0(
        UserEventTradeEntity___c_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, x);
  return x->fields.tradeGoodsId == goodsEntity->fields.id;
}