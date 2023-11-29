void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FACBD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_40FACBD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    210,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRaceResultEntity_o *__fastcall EventRaceResultMaster__GetEntity(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FACBB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FACBB = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v24; // x21
  EventRaceResultMaster___c_c *v25; // x8
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v28; // x23
  struct EventRaceResultMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  signed __int64 size; // x8
  unsigned __int64 v37; // x23
  int32_t v38; // w22
  TitleInfoControl_EventEndTimeInfo_o *v39; // x26
  __int64 v40; // x10
  int64_t UserId; // x0
  bool v42; // w0
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FACBE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_DataEntityBase___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_DataEntityBase__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v7);
    sub_B16FFC(&EventRaceResultEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v14);
    sub_B16FFC(&EventRaceResultMaster___c_TypeInfo, v15);
    byte_40FACBE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v19 = (UserEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  v24 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                                                  (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v25 = EventRaceResultMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceResultMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v25 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_DataEntityBase__TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v28,
      Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_DataEntityBase___ctor__);
    v29 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v29->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v24 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v24,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  LODWORD(size) = v24->fields._size;
  if ( (int)size >= 1 )
  {
    v37 = 0LL;
    v38 = 0;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v39 = v24->fields._items->m_Items[v37];
      if ( !v39 )
        break;
      v40 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (EventRaceResultEntity_c *)v39->klass->_2.typeHierarchy[v40 - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( v39->fields.event_id == eventId && v38 != *(_DWORD *)&v39->fields.is_reward )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v19 )
          break;
        v42 = UserEventRaceMaster__TryGetEntity(v19, &entity, UserId, eventId, *(_DWORD *)&v39->fields.is_reward, 0LL);
        if ( !v38 || v42 )
          v38 = *(_DWORD *)&v39->fields.is_reward;
      }
      size = v24->fields._size;
      if ( (__int64)++v37 >= size )
        return v38;
    }
LABEL_33:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventRaceResultMaster__GetRankDatas(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int64_array **goalTime,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_int__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_long__o *v34; // x25
  int32_t v35; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v36; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v38; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v39; // x19
  int64_t Time; // x0
  int64_t monitor; // x8
  int64_t v42; // x27
  int32_t v43; // w20
  int32_t v44; // w28
  System_Int64_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FACC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventRaceResultEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Insert__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Insert__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    byte_40FACC1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v34 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v30,
                                                     v31,
                                                     v32,
                                                     v33);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      v36 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v36 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v36,
               v35,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (v38 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v38) )
      {
        if ( (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v38 - 1] == EventRaceResultEntity_TypeInfo )
          v39 = Item;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( !v39 )
        break;
      if ( LODWORD(v39[1].klass) == eventId && HIDWORD(v39[1].klass) == termId )
      {
        monitor = (int64_t)v39[2].monitor;
        if ( monitor < Time )
        {
          v42 = monitor - (unsigned __int64)v39[2].klass;
          if ( v42 >= 1 )
          {
            if ( !v29 )
              break;
            v43 = termId;
            if ( v29->fields._size < 1 )
            {
LABEL_29:
              System_Collections_Generic_List_int___Add(
                v29,
                (int32_t)v39[1].monitor,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v34 )
                break;
              System_Collections_Generic_List_long___Add(
                v34,
                v42,
                (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
            }
            else
            {
              v44 = 0;
              while ( 1 )
              {
                if ( !v34 )
                  goto LABEL_37;
                if ( v34->fields._size <= (unsigned int)v44 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( v34->fields._items->m_Items[v44] > v42 )
                  break;
                if ( v29->fields._size <= ++v44 )
                  goto LABEL_29;
              }
              System_Collections_Generic_List_int___Insert(
                v29,
                v44,
                (int32_t)v39[1].monitor,
                (const MethodInfo_2F116D0 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v34,
                v44,
                v42,
                (const MethodInfo_2F17680 *)Method_System_Collections_Generic_List_long__Insert__);
            }
            termId = v43;
          }
        }
      }
      if ( ++v35 >= Count )
        goto LABEL_34;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_34:
  if ( !v34 )
    goto LABEL_37;
  v45 = System_Collections_Generic_List_long___ToArray(
          v34,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v45;
  sub_B16F98((BattleServantConfConponent_o *)goalTime, (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  if ( !v29 )
    goto LABEL_37;
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaceResultMaster__GetRankedGroupId(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        int64_t *goalTime,
        const MethodInfo *method)
{
  System_Int32_array *RankDatas; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t max_length; // w9
  int64_t v12; // x8
  int32_t v13; // w8
  System_Int64_array *goalTimea; // [xsp+8h] [xbp-18h] BYREF

  goalTimea = 0LL;
  RankDatas = EventRaceResultMaster__GetRankDatas(this, eventId, termId, &goalTimea, (const MethodInfo *)goalTime);
  if ( !goalTimea )
    goto LABEL_12;
  max_length = goalTimea->max_length;
  if ( max_length >= rank )
  {
    if ( rank - 1 >= (unsigned int)max_length )
      goto LABEL_13;
    v12 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v12 = 0LL;
  }
  *goalTime = v12;
  if ( !RankDatas )
LABEL_12:
    sub_B170D4();
  v13 = RankDatas->max_length;
  if ( v13 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v13 )
  {
LABEL_13:
    sub_B17100(RankDatas, v9, v10);
    sub_B170A0();
  }
  return RankDatas->m_Items[rank];
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__GetTargetGoalTime(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t term,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FACBF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventRaceResultEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v12);
    byte_40FACBF = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRaceResultEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&term,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v18 )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v18,
             v17,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v20 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == term && LODWORD(Item[1].monitor) == groupId )
      return (int64_t)Item[2].monitor;
    if ( ++v17 >= v16 )
      return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaceResultMaster__TryGetEntity(
        EventRaceResultMaster_o *this,
        EventRaceResultEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FACBC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_40FACBC = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10

  if ( (byte_40FACC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventRaceResultEntity_TypeInfo, v8);
    byte_40FACC0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v13,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_15;
    v15 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == termId )
      return (int64_t)Item[2].klass;
    if ( ++v12 >= v11 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7020 & 1) == 0 )
  {
    sub_B16FFC(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_40F7020 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRaceResultMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRaceResultMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventRaceResultMaster___c___ctor(EventRaceResultMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaceResultMaster___c___GetNowTerm_b__3_0(
        EventRaceResultMaster___c_o *this,
        DataEntityBase_o *a,
        DataEntityBase_o *b,
        const MethodInfo *method)
{
  __int64 v6; // x9

  if ( (byte_40F7021 & 1) == 0 )
  {
    sub_B16FFC(&EventRaceResultEntity_TypeInfo, a);
    byte_40F7021 = 1;
  }
  if ( !a
    || (v6 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1), *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_B170D4();
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}