void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42156A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__, method);
    byte_42156A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    414,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x19
  WarQuestSelectionMaster___c_c *v14; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v17; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_42156A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B0D8A4(&Method_System_Func_WarQuestSelectionEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v7);
    sub_B0D8A4(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v8);
    sub_B0D8A4(&WarQuestSelectionMaster___c_TypeInfo, v9);
    byte_42156A7 = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v13 = result;
    v14 = WarQuestSelectionMaster___c_TypeInfo;
    if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v14 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_WarQuestSelectionEntity__int__TypeInfo,
                                                                                  v11,
                                                                                  v12);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__3_0,
        v17,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        (const MethodInfo_2619564 *)Method_System_Func_WarQuestSelectionEntity__int___ctor__);
      v18 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v18->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v18->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v26 = System_Linq_Enumerable__Distinct_int_(
            v25,
            (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v26,
                                                       (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x19
  __int64 v19; // x0
  _BOOL8 v20; // x0
  int32_t current; // w21
  WarEntity_o *Entity; // x0
  const MethodInfo *v23; // x2
  WarEntity_o *v24; // x22
  QuestTree_o *v25; // x0
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42156A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v13);
    byte_42156A8 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_B0D97C(v19);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    AllRegisteredWarIds,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v20 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(v20);
    current = v28.fields.current;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v28.fields.current,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v24 = Entity;
    if ( Entity )
    {
      Entity = (WarEntity_o *)WarEntity__HasFlag(Entity, 32, v23);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v25 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v25 )
          sub_B0D97C(0LL);
        Entity = (WarEntity_o *)QuestTree__IsActiveEventWar_21484996(v25, v24, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v18 )
      sub_B0D97C(Entity);
    System_Collections_Generic_List_int___Add(
      v18,
      current,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v18;
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
  void *list; // x0
  int32_t Count; // w0
  void *v18; // x1
  __int64 v19; // x2
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v25; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42156A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_WarQuestSelectionEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v12);
    sub_B0D8A4(&WarQuestSelectionMaster___c_TypeInfo, v13);
    sub_B0D8A4(&WarQuestSelectionEntity_TypeInfo, v14);
    byte_42156A6 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v22 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(list);
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_WarQuestSelectionEntity__TypeInfo,
                                                                          v18,
                                                                          v19);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v25,
      Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    v26 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    v26->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v15 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
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

  if ( (byte_42156A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&WarQuestSelectionEntity_TypeInfo, v6);
    byte_42156A9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  const MethodInfo *v9; // x4
  int v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+20h] [xbp-40h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_42156AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_42156AA = 1;
  }
  memset(&v15, 0, sizeof(v15));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    AvailableRegisteredWarIds,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v15.fields.current, questId, v9) )
    {
      v10 = 1;
      v11 = 3;
      goto LABEL_9;
    }
  }
  v10 = 0;
  v11 = 1;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v15,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v10 & ((unsigned int)(v11 + 1) >> 2);
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

  if ( (byte_42156A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__, entity);
    byte_42156A5 = 1;
  }
  PK = WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211F2D & 1) == 0 )
  {
    sub_B0D8A4(&WarQuestSelectionMaster___c_TypeInfo, v1);
    byte_4211F2D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarQuestSelectionMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}