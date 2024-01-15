void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FA950 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method);
    byte_40FA950 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    4,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarMaster___c_c *v12; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct WarMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FA951 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarEntity___, v6);
    sub_B16FFC(&Method_System_Func_DataEntityBase__WarEntity___ctor__, v7);
    sub_B16FFC(&System_Func_DataEntityBase__WarEntity__TypeInfo, v8);
    sub_B16FFC(&Method_WarMaster___c__GetEntityList_b__1_0__, v9);
    sub_B16FFC(&WarMaster___c_TypeInfo, v10);
    byte_40FA951 = 1;
  }
  list = this->fields.list;
  v12 = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v12 = WarMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__WarEntity__TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v15,
      Method_WarMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__WarEntity___ctor__);
    v16 = WarMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v23,
                                                           (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v12; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v13; // x22
  __int64 v14; // x10
  int32_t klass_high; // w22

  if ( (byte_40FA958 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&WarEntity_TypeInfo, v5);
    byte_40FA958 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v10 )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v10,
             v9,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_19;
    v13 = Item;
    v14 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (WarEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] != WarEntity_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( WarEntity__HasFlag((WarEntity_o *)Item, 128, v12) )
    {
      klass_high = HIDWORD(v13[6].klass);
      if ( klass_high >= 1 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsQuestClear_25438860(klass_high, -1, 0, 0LL) )
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
  WebViewManager_o *Instance; // x0
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x2
  WarEntity_o *v10; // x0
  WarEntity_o *v11; // x20
  bool result; // w0

  if ( (byte_40FA957 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_6315/*"FES_WAR_ID"*/, v6);
    byte_40FA957 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v10 = WarMaster__getByLastQuestId(MasterData_WarQuestSelectionMaster, questId, v9);
  result = 0;
  if ( v10 )
  {
    v11 = v10;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6315/*"FES_WAR_ID"*/, 0LL) == warId && v11->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  WarEntity_o *result; // x0
  __int64 v11; // x10

  if ( (byte_40FA953 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&WarEntity_TypeInfo, v6);
    byte_40FA953 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B170D4();
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v9 )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                v9,
                                v8,
                                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v11 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  WarEntity_o *result; // x0
  __int64 v11; // x10

  if ( (byte_40FA952 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&last_quest_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&WarEntity_TypeInfo, v6);
    byte_40FA952 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B170D4();
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v9 )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                v9,
                                v8,
                                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v11 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (WarEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_int__o *v16; // x21
  int32_t v17; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v20; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x23
  __int64 v22; // x10
  int32_t klass_high; // w24

  if ( (byte_40FA956 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&CondType_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&WarEntity_TypeInfo, v9);
    byte_40FA956 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v18,
               v17,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v21 = Item;
      v22 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (WarEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      if ( !WarEntity__HasFlag((WarEntity_o *)Item, 32, v20) )
      {
        klass_high = HIDWORD(v21[6].klass);
        if ( klass_high >= 1 )
        {
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsQuestClear_25438860(klass_high, -1, 0, 0LL) )
          {
            if ( !v16 )
              break;
            System_Collections_Generic_List_int___Add(
              v16,
              (int32_t)v21[1].klass,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v16 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FA954 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA954 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v22; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x23
  __int64 v30; // x10
  WarMaster___c_c *v31; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v34; // x21
  struct WarMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FA955 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, ids);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_WarEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_WarEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_List_WarEntity__TypeInfo, v16);
    sub_B16FFC(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v17);
    sub_B16FFC(&WarMaster___c_TypeInfo, v18);
    sub_B16FFC(&WarEntity_TypeInfo, v19);
    byte_40FA955 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarEntity__TypeInfo,
                                                                                                  ids,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    if ( !ids )
      goto LABEL_27;
    if ( !ids->fields._size )
      break;
    v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v27 )
    {
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v27,
                          v22,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v30 = *(&WarEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v30
          && *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v30 - 8) == WarEntity_TypeInfo )
        {
          if ( System_Collections_Generic_List_int___Remove(
                 ids,
                 Item[4],
                 (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__) )
          {
            if ( !v20 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v29,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v22;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  v31 = WarMaster___c_TypeInfo;
  if ( (BYTE3(WarMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v31 = WarMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_WarEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v34,
      Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_WarEntity___ctor__);
    v35 = WarMaster___c_TypeInfo->static_fields;
    v35->__9__5_0 = (struct System_Comparison_WarEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v20 )
LABEL_27:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F788E & 1) == 0 )
  {
    sub_B16FFC(&WarMaster___c_TypeInfo, v1);
    byte_40F788E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F788F & 1) == 0 )
  {
    sub_B16FFC(&WarEntity_TypeInfo, data);
    byte_40F788F = 1;
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}