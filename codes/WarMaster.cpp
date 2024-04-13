void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E938A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E938A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    4,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarMaster___c_c *v21; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v24; // x21
  struct WarMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E938B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__WarEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DataEntityBase__WarEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarMaster___c__GetEntityList_b__1_0__, v14, v15, v16);
    sub_B5D5C4(&WarMaster___c_TypeInfo, v17, v18, v19);
    byte_42E938B = 1;
  }
  list = this->fields.list;
  v21 = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v21 = WarMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__WarEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v24,
      Method_WarMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__WarEntity___ctor__);
    v25 = WarMaster___c_TypeInfo->static_fields;
    v25->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v32,
                                                           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w20
  int32_t v17; // w21
  const MethodInfo *v18; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x22
  __int64 v20; // x10
  int32_t klass_high; // w22

  if ( (byte_42E9392 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarEntity_TypeInfo, v11, v12, v13);
    byte_42E9392 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B5D69C(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v17,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v19 = list;
    v20 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (WarEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != WarEntity_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( WarEntity__HasFlag((WarEntity_o *)list, 128, v18) )
    {
      klass_high = HIDWORD(v19[3].klass);
      if ( klass_high >= 1 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsQuestClear_25877652(klass_high, -1, 0, 0LL) )
          return 0;
      }
    }
    if ( ++v17 >= v16 )
      return 1;
  }
}


bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  WarEntity_o *v15; // x0
  WarEntity_o *v16; // x20
  bool result; // w0

  if ( (byte_42E9391 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6412/*"FES_WAR_ID"*/, v9, v10, v11);
    byte_42E9391 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  v15 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v14);
  result = 0;
  if ( v15 )
  {
    v16 = v15;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL) == warId && v16->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarEntity_o *result; // x0
  int32_t v13; // w21
  __int64 v14; // x10

  if ( (byte_42E938D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      event_id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&WarEntity_TypeInfo, v9, v10, v11);
    byte_42E938D = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B5D69C(result, *(_QWORD *)&event_id);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v13,
                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v13;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarEntity_o *result; // x0
  int32_t v13; // w21
  __int64 v14; // x10

  if ( (byte_42E938C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      last_quest_id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&WarEntity_TypeInfo, v9, v10, v11);
    byte_42E938C = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B5D69C(result, *(_QWORD *)&last_quest_id);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v13,
                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v13;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


System_Int32_array *__fastcall WarMaster__getClearWarIdList(WarMaster_o *this, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v28; // x21
  int32_t v29; // w22
  const MethodInfo *v30; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x23
  __int64 v32; // x10
  int32_t klass_high; // w24

  if ( (byte_42E9390 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarEntity_TypeInfo, v23, v24, v25);
    byte_42E9390 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v29,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v31 = list;
      v32 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (WarEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarEntity__HasFlag(
                                                                                           (WarEntity_o *)list,
                                                                                           32,
                                                                                           v30);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v31[3].klass);
        if ( klass_high >= 1 )
        {
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CondType__IsQuestClear_25877652(
                                                                                               klass_high,
                                                                                               -1,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v28 )
              break;
            System_Collections_Generic_List_int___Add(
              v28,
              (int32_t)v31->fields.items,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v29 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(list, method);
  }
LABEL_19:
  if ( !v28 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v28,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42E938E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E938E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             warId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    return Entity->fields.eventId;
  else
    return -1;
}


WarEntity_array *__fastcall WarMaster__getPrioredWarEntsWithIds(
        WarMaster_o *this,
        System_Collections_Generic_List_int__o *ids,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  __int64 v46; // x1
  void *list; // x0
  int32_t v48; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x23
  __int64 v50; // x10
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v53; // x21
  struct WarMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42E938F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)ids,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_WarEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_WarEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_WarEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v36, v37, v38);
    sub_B5D5C4(&WarMaster___c_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarEntity_TypeInfo, v42, v43, v44);
    byte_42E938F = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v48 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v48 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_27;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v48,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v50 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v50
          && *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v50 - 8) == WarEntity_TypeInfo )
        {
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v45 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v45,
              v49,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarEntity__Add__);
          }
          list = this->fields.list;
          ++v48;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  list = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  static_fields = (struct WarMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v53,
      Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_WarEntity___ctor__);
    v54 = WarMaster___c_TypeInfo->static_fields;
    v54->__9__5_0 = (struct System_Comparison_WarEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v54->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v45 )
LABEL_27:
    sub_B5D69C(list, v46);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FE9 & 1) == 0 )
  {
    sub_B5D5C4(&WarMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FE9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarEntity_o *__fastcall WarMaster___c___GetEntityList_b__1_0(
        WarMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E5FEA & 1) == 0 )
  {
    sub_B5D5C4(&WarEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E5FEA = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (WarEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == WarEntity_TypeInfo )
    return (WarEntity_o *)data;
  return 0LL;
}


int32_t __fastcall WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}