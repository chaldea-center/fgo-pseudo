void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188939 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__, method);
    byte_4188939 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    414,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v11; // x19
  WarQuestSelectionMaster___c_c *v12; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v15; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_418893C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B2C35C(&Method_System_Func_WarQuestSelectionEntity__int___ctor__, v6);
    sub_B2C35C(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v7);
    sub_B2C35C(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v8);
    sub_B2C35C(&WarQuestSelectionMaster___c_TypeInfo, v9);
    byte_418893C = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v11 = result;
    v12 = WarQuestSelectionMaster___c_TypeInfo;
    if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v12 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__3_0,
        v15,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_WarQuestSelectionEntity__int___ctor__);
      v16 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v16->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v16->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v24 = System_Linq_Enumerable__Distinct_int_(
            v23,
            (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v24,
                                                       (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t current; // w21
  WarEntity_o *Entity; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  WarEntity_o *v25; // x22
  QuestTree_o *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418893D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v13);
    byte_418893D = 1;
  }
  memset(&v30, 0, sizeof(v30));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_B2C434(v17, v18);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    AllRegisteredWarIds,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(v19, v20);
    current = v30.fields.current;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v30.fields.current,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v25 = Entity;
    if ( Entity )
    {
      Entity = (WarEntity_o *)WarEntity__HasFlag(Entity, 32, v24);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v26 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v26 )
          sub_B2C434(0LL, v27);
        Entity = (WarEntity_o *)QuestTree__IsActiveEventWar_21870556(v26, v25, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v16 )
      sub_B2C434(Entity, v23);
    System_Collections_Generic_List_int___Add(
      v16,
      current,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  void *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  __int64 v21; // x10
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v24; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_418893B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_WarQuestSelectionEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v11);
    sub_B2C35C(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v12);
    sub_B2C35C(&WarQuestSelectionMaster___c_TypeInfo, v13);
    sub_B2C35C(&WarQuestSelectionEntity_TypeInfo, v14);
    byte_418893B = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        v21 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
        }
      }
      if ( ++v20 >= v19 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v16);
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
    v24 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v24,
      Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    v25 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    v25->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v15 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v12; // x10

  if ( (byte_418893E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&WarQuestSelectionEntity_TypeInfo, v6);
    byte_418893E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&warId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == WarQuestSelectionEntity_TypeInfo
        && LODWORD(Item[1].klass) == warId )
      {
        return 1;
      }
    }
    if ( ++v10 >= v9 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__IsActiveRegisteredQuest(
        WarQuestSelectionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-40h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_418893F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_418893F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    AvailableRegisteredWarIds,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v16,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v16.fields.current, questId, v10) )
    {
      v11 = 1;
      v12 = 3;
      goto LABEL_9;
    }
  }
  v11 = 0;
  v12 = 1;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v16,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v11 & ((unsigned int)(v12 + 1) >> 2);
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

  if ( (byte_418893A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__, entity);
    byte_418893A = 1;
  }
  PK = WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185556 & 1) == 0 )
  {
    sub_B2C35C(&WarQuestSelectionMaster___c_TypeInfo, v1);
    byte_4185556 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}