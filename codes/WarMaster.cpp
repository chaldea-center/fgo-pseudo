void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418892E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method);
    byte_418892E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    4,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarMaster___c_c *v9; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct WarMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418892F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarEntity___, v3);
    sub_B2C35C(&Method_System_Func_DataEntityBase__WarEntity___ctor__, v4);
    sub_B2C35C(&System_Func_DataEntityBase__WarEntity__TypeInfo, v5);
    sub_B2C35C(&Method_WarMaster___c__GetEntityList_b__1_0__, v6);
    sub_B2C35C(&WarMaster___c_TypeInfo, v7);
    byte_418892F = 1;
  }
  list = this->fields.list;
  v9 = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v9 = WarMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__WarEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v12,
      Method_WarMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__WarEntity___ctor__);
    v13 = WarMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v20,
                                                           (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x22
  __int64 v12; // x10
  int32_t klass_high; // w22

  if ( (byte_4188936 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&CondType_TypeInfo, v4);
    sub_B2C35C(&WarEntity_TypeInfo, v5);
    byte_4188936 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B2C434(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v9,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v11 = list;
    v12 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (WarEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != WarEntity_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( WarEntity__HasFlag((WarEntity_o *)list, 128, v10) )
    {
      klass_high = HIDWORD(v11[3].klass);
      if ( klass_high >= 1 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsQuestClear_25746984(klass_high, -1, 0, 0LL) )
          return 0;
      }
    }
    if ( ++v9 >= v8 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarEntity_o *v10; // x0
  WarEntity_o *v11; // x20
  bool result; // w0

  if ( (byte_4188935 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_6333/*"FES_WAR_ID"*/, v6);
    byte_4188935 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  v10 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v9);
  result = 0;
  if ( v10 )
  {
    v11 = v10;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6333/*"FES_WAR_ID"*/, 0LL) == warId && v11->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *result; // x0
  int32_t v8; // w21
  __int64 v9; // x10

  if ( (byte_4188931 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&WarEntity_TypeInfo, v6);
    byte_4188931 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B2C434(result, *(_QWORD *)&event_id);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v8,
                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v9 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v8;
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
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *result; // x0
  int32_t v8; // w21
  __int64 v9; // x10

  if ( (byte_4188930 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&last_quest_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&WarEntity_TypeInfo, v6);
    byte_4188930 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B2C434(result, *(_QWORD *)&last_quest_id);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v8,
                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v9 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v8;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x23
  __int64 v16; // x10
  int32_t klass_high; // w24

  if ( (byte_4188934 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&CondType_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&WarEntity_TypeInfo, v9);
    byte_4188934 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      v16 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (WarEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarEntity__HasFlag(
                                                                                           (WarEntity_o *)list,
                                                                                           32,
                                                                                           v14);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v15[3].klass);
        if ( klass_high >= 1 )
        {
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CondType__IsQuestClear_25746984(
                                                                                               klass_high,
                                                                                               -1,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_int___Add(
              v12,
              (int32_t)v15->fields.items,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v13 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(list, method);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_4188932 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188932 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             warId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  __int64 v19; // x1
  void *list; // x0
  int32_t v21; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x23
  __int64 v23; // x10
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v26; // x21
  struct WarMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4188933 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, ids);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_WarEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_WarEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_WarEntity__TypeInfo, v14);
    sub_B2C35C(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v15);
    sub_B2C35C(&WarMaster___c_TypeInfo, v16);
    sub_B2C35C(&WarEntity_TypeInfo, v17);
    byte_4188933 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v21 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
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
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v23 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v23
          && *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) == WarEntity_TypeInfo )
        {
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v22,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarEntity__Add__);
          }
          list = this->fields.list;
          ++v21;
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v26,
      Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarEntity___ctor__);
    v27 = WarMaster___c_TypeInfo->static_fields;
    v27->__9__5_0 = (struct System_Comparison_WarEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v18 )
LABEL_27:
    sub_B2C434(list, v19);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185554 & 1) == 0 )
  {
    sub_B2C35C(&WarMaster___c_TypeInfo, v1);
    byte_4185554 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x10

  if ( (byte_4185555 & 1) == 0 )
  {
    sub_B2C35C(&WarEntity_TypeInfo, data);
    byte_4185555 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (WarEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == WarEntity_TypeInfo )
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}