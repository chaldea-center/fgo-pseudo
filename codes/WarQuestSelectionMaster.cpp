void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA95B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__, method);
    byte_40FA95B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    414,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_int__o *v15; // x19
  WarQuestSelectionMaster___c_c *v16; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v19; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_40FA95E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B16FFC(&Method_System_Func_WarQuestSelectionEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v8);
    sub_B16FFC(&WarQuestSelectionMaster___c_TypeInfo, v9);
    byte_40FA95E = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v15 = result;
    v16 = WarQuestSelectionMaster___c_TypeInfo;
    if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v16 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_WarQuestSelectionEntity__int__TypeInfo,
                                                                                  v11,
                                                                                  v12,
                                                                                  v13,
                                                                                  v14);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__3_0,
        v19,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_WarQuestSelectionEntity__int___ctor__);
      v20 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v20->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v20->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v28 = System_Linq_Enumerable__Distinct_int_(
            v27,
            (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v28,
                                                       (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x19
  int32_t current; // w21
  WarEntity_o *Entity; // x0
  const MethodInfo *v23; // x2
  WarEntity_o *v24; // x22
  QuestTree_o *v25; // x0
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FA95F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v13);
    byte_40FA95F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    AllRegisteredWarIds,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v28,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    current = v28.fields.current;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v28.fields.current,
               (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v24 = Entity;
    if ( Entity && WarEntity__HasFlag(Entity, 32, v23) )
    {
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v25 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v25 )
        sub_B170D4();
      if ( !QuestTree__IsActiveEventWar_21525412(v25, v24, 0LL) )
        continue;
    }
    if ( !v20 )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      v20,
      current,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v28,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w22
  int32_t v25; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v28; // x10
  WarQuestSelectionMaster___c_c *v29; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v32; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40FA95D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_WarQuestSelectionEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v13);
    sub_B16FFC(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v14);
    sub_B16FFC(&WarQuestSelectionMaster___c_TypeInfo, v15);
    sub_B16FFC(&WarQuestSelectionEntity_TypeInfo, v16);
    byte_40FA95D = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      v26 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v26 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v26,
                                                                      v25,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        v28 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == WarQuestSelectionEntity_TypeInfo
          && Item->fields.missionTargetId == warId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v29 = WarQuestSelectionMaster___c_TypeInfo;
  if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
    v29 = WarQuestSelectionMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_WarQuestSelectionEntity__TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v32,
      Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    v33 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    v33->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v17 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v17;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_40FA960 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&WarQuestSelectionEntity_TypeInfo, v6);
    byte_40FA960 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == WarQuestSelectionEntity_TypeInfo
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

  if ( (byte_40FA961 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_40FA961 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    AvailableRegisteredWarIds,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
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
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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

  if ( (byte_40FA95C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__, entity);
    byte_40FA95C = 1;
  }
  PK = WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7890 & 1) == 0 )
  {
    sub_B16FFC(&WarQuestSelectionMaster___c_TypeInfo, v1);
    byte_40F7890 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarQuestSelectionMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}