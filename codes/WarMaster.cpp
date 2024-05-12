void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BE2D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
    byte_438BE2D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    4,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarMaster___c_c *v4; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct WarMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438BE2E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_WarEntity___);
    sub_B775C4(&Method_System_Func_DataEntityBase__WarEntity___ctor__);
    sub_B775C4(&System_Func_DataEntityBase__WarEntity__TypeInfo);
    sub_B775C4(&Method_WarMaster___c__GetEntityList_b__1_0__);
    sub_B775C4(&WarMaster___c_TypeInfo);
    byte_438BE2E = 1;
  }
  list = this->fields.list;
  v4 = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v4 = WarMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DataEntityBase__WarEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v7,
      Method_WarMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DataEntityBase__WarEntity___ctor__);
    v8 = WarMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v15,
                                                           (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  const MethodInfo *v7; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x22
  __int64 v9; // x10
  int32_t klass_high; // w22

  if ( (byte_438BE35 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BE35 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B7769C(list, method);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v5 = Count;
  v6 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v6,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v8 = list;
    v9 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (WarEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != WarEntity_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( WarEntity__HasFlag((WarEntity_o *)list, 128, v7) )
    {
      klass_high = HIDWORD(v8[3].klass);
      if ( klass_high >= 1 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsQuestClear_24699280(klass_high, -1, 0, 0LL) )
          return 0;
      }
    }
    if ( ++v6 >= v5 )
      return 1;
  }
}


bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x20
  bool result; // w0

  if ( (byte_438BE34 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_6481/*"FES_WAR_ID"*/);
    byte_438BE34 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  v8 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v7);
  result = 0;
  if ( v8 )
  {
    v9 = v8;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6481/*"FES_WAR_ID"*/, 0LL) == warId && v9->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21
  __int64 v7; // x10

  if ( (byte_438BE30 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BE30 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B7769C(result, *(_QWORD *)&event_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v6,
                                (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v7 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v7
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v7 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v6;
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
  WarEntity_o *result; // x0
  int32_t v6; // w21
  __int64 v7; // x10

  if ( (byte_438BE2F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BE2F = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B7769C(result, *(_QWORD *)&last_quest_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                v6,
                                (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v7 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v7
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v7 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v6;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  const MethodInfo *v7; // x2
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x23
  __int64 v9; // x10
  int32_t klass_high; // w24

  if ( (byte_438BE33 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BE33 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v6,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      v9 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (WarEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarEntity__HasFlag(
                                                                                           (WarEntity_o *)list,
                                                                                           32,
                                                                                           v7);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v8[3].klass);
        if ( klass_high >= 1 )
        {
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CondType__IsQuestClear_24699280(
                                                                                               klass_high,
                                                                                               -1,
                                                                                               0,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_int___Add(
              v5,
              (int32_t)v8->fields.items,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v6 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B7769C(list, method);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_438BE31 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438BE31 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             warId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x23
  __int64 v10; // x10
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v13; // x21
  struct WarMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_438BE32 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_WarEntity___ctor__);
    sub_B775C4(&System_Comparison_WarEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_WarEntity__TypeInfo);
    sub_B775C4(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__);
    sub_B775C4(&WarMaster___c_TypeInfo);
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438BE32 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v8 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
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
               v8,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v10 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == WarEntity_TypeInfo )
        {
          list = (void *)System_Collections_Generic_List_int___Remove(
                           ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v9,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarEntity__Add__);
          }
          list = this->fields.list;
          ++v8;
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
    v13 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v13,
      Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_WarEntity___ctor__);
    v14 = WarMaster___c_TypeInfo->static_fields;
    v14->__9__5_0 = (struct System_Comparison_WarEntity__o *)_9__5_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v5 )
LABEL_27:
    sub_B7769C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438929D & 1) == 0 )
  {
    sub_B775C4(&WarMaster___c_TypeInfo);
    byte_438929D = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438929E & 1) == 0 )
  {
    sub_B775C4(&WarEntity_TypeInfo);
    byte_438929E = 1;
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}