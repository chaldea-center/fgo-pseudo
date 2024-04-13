void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E93A2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E93A2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    415,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v27; // x19
  WarQuestSelectionMaster___c_c *v28; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v31; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_42E93A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarQuestSelectionEntity__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v20, v21, v22);
    sub_B5D5C4(&WarQuestSelectionMaster___c_TypeInfo, v23, v24, v25);
    byte_42E93A5 = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v27 = result;
    v28 = WarQuestSelectionMaster___c_TypeInfo;
    if ( (BYTE3(WarQuestSelectionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v28 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__3_0,
        v31,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_WarQuestSelectionEntity__int___ctor__);
      v32 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v32->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v32->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v40 = System_Linq_Enumerable__Distinct_int_(
            v39,
            (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v40,
                                                       (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v40; // x19
  __int64 v41; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int32_t current; // w21
  WarEntity_o *Entity; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  WarEntity_o *v49; // x22
  QuestTree_o *v50; // x0
  __int64 v51; // x1
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E93A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v35, v36, v37);
    byte_42E93A6 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
  v40 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !AllRegisteredWarIds )
    sub_B5D69C(v41, v42);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    AllRegisteredWarIds,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v43 )
      break;
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(v43, v44);
    current = v54.fields.current;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v54.fields.current,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v49 = Entity;
    if ( Entity )
    {
      Entity = (WarEntity_o *)WarEntity__HasFlag(Entity, 32, v48);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v50 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v50 )
          sub_B5D69C(0LL, v51);
        Entity = (WarEntity_o *)QuestTree__IsActiveEventWar_22300084(v50, v49, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v40 )
      sub_B5D69C(Entity, v47);
    System_Collections_Generic_List_int___Add(
      v40,
      current,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v40;
}


System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x19
  void *v37; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v40; // w22
  int32_t v41; // w23
  __int64 v42; // x10
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v45; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42E93A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_WarQuestSelectionEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v27, v28, v29);
    sub_B5D5C4(&WarQuestSelectionMaster___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&WarQuestSelectionEntity_TypeInfo, v33, v34, v35);
    byte_42E93A4 = 1;
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v40 = Count;
    v41 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v41,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v37 = list;
        v42 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v42
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v42 - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v36 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
        }
      }
      if ( ++v41 >= v40 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v37);
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
    v45 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v45,
      Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_WarQuestSelectionEntity___ctor__);
    v46 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    v46->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !v36 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v36;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v17; // x10

  if ( (byte_42E93A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&WarQuestSelectionEntity_TypeInfo, v9, v10, v11);
    byte_42E93A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&warId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v15,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&WarQuestSelectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == WarQuestSelectionEntity_TypeInfo
        && LODWORD(Item[1].klass) == warId )
      {
        return 1;
      }
    }
    if ( ++v15 >= v14 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__IsActiveRegisteredQuest(
        WarQuestSelectionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  int v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-40h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_42E93A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13, v14);
    byte_42E93A8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    AvailableRegisteredWarIds,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v23.fields.current, questId, v17) )
    {
      v18 = 1;
      v19 = 3;
      goto LABEL_9;
    }
  }
  v18 = 0;
  v19 = 1;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v18 & ((unsigned int)(v19 + 1) >> 2);
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

  if ( (byte_42E93A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      warId,
      *(_QWORD *)&questId);
    byte_42E93A3 = 1;
  }
  PK = WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FEC & 1) == 0 )
  {
    sub_B5D5C4(&WarQuestSelectionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FEC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}