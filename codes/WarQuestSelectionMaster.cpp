void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43526C9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
    byte_43526C9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    415,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v4; // x19
  WarQuestSelectionMaster___c_c *v5; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v8; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_43526CC & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&Method_System_Func_WarQuestSelectionEntity__int___ctor__);
    sub_B70694(&System_Func_WarQuestSelectionEntity__int__TypeInfo);
    sub_B70694(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__);
    sub_B70694(&WarQuestSelectionMaster___c_TypeInfo);
    byte_43526CC = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v4 = result;
    v5 = WarQuestSelectionMaster___c_TypeInfo;
    if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v5 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__3_0,
        v8,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_WarQuestSelectionEntity__int___ctor__);
      v9 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v9->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v9->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v17 = System_Linq_Enumerable__Distinct_int_(
            v16,
            (const MethodInfo_1CB96F0 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v17,
                                                       (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t current; // w21
  WarEntity_o *Entity; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  WarEntity_o *v14; // x22
  QuestTree_o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_43526CD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_WarMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_43526CD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_WarMaster___);
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_B7076C(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    AllRegisteredWarIds,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v19,
           (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(v8, v9);
    current = v19.fields.current;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v19.fields.current,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v14 = Entity;
    if ( Entity )
    {
      Entity = (WarEntity_o *)WarEntity__HasFlag(Entity, 32, v13);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v15 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v15 )
          sub_B7076C(0LL, v16);
        Entity = (WarEntity_o *)QuestTree__IsActiveEventWar_22270752(v15, v14, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v5 )
      sub_B7076C(Entity, v12);
    System_Collections_Generic_List_int___Add(
      v5,
      current,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v19,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v5;
}


System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v14; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_43526CB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    sub_B70694(&System_Comparison_WarQuestSelectionEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
    sub_B70694(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__);
    sub_B70694(&WarQuestSelectionMaster___c_TypeInfo);
    sub_B70694(&WarQuestSelectionEntity_TypeInfo);
    byte_43526CB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7076C(list, v6);
  }
LABEL_14:
  list = WarQuestSelectionMaster___c_TypeInfo;
  if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
    list = WarQuestSelectionMaster___c_TypeInfo;
  }
  static_fields = (struct WarQuestSelectionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v14,
      Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    v15 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    v15->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)_9__2_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v10; // x10

  if ( (byte_43526CE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&WarQuestSelectionEntity_TypeInfo);
    byte_43526CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7076C(list, *(_QWORD *)&warId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] == WarQuestSelectionEntity_TypeInfo
        && LODWORD(Item[1].klass) == warId )
      {
        return 1;
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__IsActiveRegisteredQuest(
        WarQuestSelectionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  int v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-40h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_43526CF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_43526CF = 1;
  }
  memset(&v13, 0, sizeof(v13));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_B7076C(0LL, v6);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    AvailableRegisteredWarIds,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v13.fields.current, questId, v7) )
    {
      v8 = 1;
      v9 = 3;
      goto LABEL_9;
    }
  }
  v8 = 0;
  v9 = 1;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8 & ((unsigned int)(v9 + 1) >> 2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__TryGetEntity(
        WarQuestSelectionMaster_o *this,
        WarQuestSelectionEntity_o **entity,
        int32_t warId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43526CA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
    byte_43526CA = 1;
  }
  PK = WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FCB7 & 1) == 0 )
  {
    sub_B70694(&WarQuestSelectionMaster___c_TypeInfo);
    byte_434FCB7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarQuestSelectionMaster___c___ctor(WarQuestSelectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarQuestSelectionMaster___c___GetAllRegisteredWarIds_b__3_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7076C(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}