void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418870A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_418870A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    210,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_4188708 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4188708 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
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
  int64_t Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v20; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v21; // x21
  EventRaceResultMaster___c_c *v22; // x8
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v25; // x23
  struct EventRaceResultMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  signed __int64 size; // x8
  unsigned __int64 v34; // x23
  int32_t v35; // w22
  TitleInfoControl_EventEndTimeInfo_o *v36; // x26
  __int64 v37; // x10
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418870B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_DataEntityBase___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v7);
    sub_B2C35C(&EventRaceResultEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v14);
    sub_B2C35C(&EventRaceResultMaster___c_TypeInfo, v15);
    byte_418870B = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v20 = (UserEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v21 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v22 = EventRaceResultMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceResultMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v22 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_DataEntityBase__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_DataEntityBase___ctor__);
    v26 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v21 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v21,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  LODWORD(size) = v21->fields._size;
  if ( (int)size >= 1 )
  {
    v34 = 0LL;
    v35 = 0;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v36 = v21->fields._items->m_Items[v34];
      if ( !v36 )
        break;
      v37 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v37
        || (EventRaceResultEntity_c *)v36->klass->_2.typeHierarchy[v37 - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( v36->fields.event_id == eventId && v35 != *(_DWORD *)&v36->fields.is_reward )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v20 )
          break;
        Instance = UserEventRaceMaster__TryGetEntity(
                     v20,
                     &entity,
                     Instance,
                     eventId,
                     *(_DWORD *)&v36->fields.is_reward,
                     0LL);
        if ( !v35 || (Instance & 1) != 0 )
          v35 = *(_DWORD *)&v36->fields.is_reward;
      }
      size = v21->fields._size;
      if ( (__int64)++v34 >= size )
        return v35;
    }
LABEL_33:
    sub_B2C434(Instance, v17);
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
  System_Collections_Generic_List_int__o *v25; // x23
  System_Collections_Generic_List_long__o *v26; // x25
  int32_t v27; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v30; // x19
  __int64 monitor; // x8
  int64_t v32; // x27
  int32_t v33; // w20
  int32_t v34; // w28
  System_Int64_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_418870E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&EventRaceResultEntity_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Insert__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Insert__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    byte_418870E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v27,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (v29 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
      {
        if ( (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == EventRaceResultEntity_TypeInfo )
          v30 = Item;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
      if ( !v30 )
        break;
      if ( LODWORD(v30[1].klass) == eventId && HIDWORD(v30[1].klass) == termId )
      {
        monitor = (__int64)v30[2].monitor;
        if ( monitor < (__int64)list )
        {
          v32 = monitor - (unsigned __int64)v30[2].klass;
          if ( v32 >= 1 )
          {
            if ( !v25 )
              break;
            v33 = termId;
            if ( v25->fields._size < 1 )
            {
LABEL_29:
              System_Collections_Generic_List_int___Add(
                v25,
                (int32_t)v30[1].monitor,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v26 )
                break;
              System_Collections_Generic_List_long___Add(
                v26,
                v32,
                (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
            }
            else
            {
              v34 = 0;
              while ( 1 )
              {
                if ( !v26 )
                  goto LABEL_37;
                if ( v26->fields._size <= (unsigned int)v34 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( v26->fields._items->m_Items[v34] > v32 )
                  break;
                if ( v25->fields._size <= ++v34 )
                  goto LABEL_29;
              }
              System_Collections_Generic_List_int___Insert(
                v25,
                v34,
                (int32_t)v30[1].monitor,
                (const MethodInfo_2F681D8 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v26,
                v34,
                v32,
                (const MethodInfo_2F6E188 *)Method_System_Collections_Generic_List_long__Insert__);
            }
            termId = v33;
          }
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_34;
    }
LABEL_37:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
LABEL_34:
  if ( !v26 )
    goto LABEL_37;
  v35 = System_Collections_Generic_List_long___ToArray(
          v26,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v35;
  sub_B2C2F8((BattleServantConfConponent_o *)goalTime, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  if ( !v25 )
    goto LABEL_37;
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t max_length; // w9
  int64_t v11; // x8
  int32_t v12; // w8
  __int64 v14; // x0
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
    v11 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v11 = 0LL;
  }
  *goalTime = v11;
  if ( !RankDatas )
LABEL_12:
    sub_B2C434(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
  {
LABEL_13:
    v14 = sub_B2C460(RankDatas);
    sub_B2C400(v14, 0LL);
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
  __int64 v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  __int64 v19; // x10

  if ( (byte_418870C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventRaceResultEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v12);
    byte_418870C = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_B2C434(list, v14);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v19 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v19
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( ++v18 >= v17 )
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

  if ( (byte_4188709 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_4188709 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_418870D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventRaceResultEntity_TypeInfo, v8);
    byte_418870D = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v12,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v13 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( ++v12 >= v11 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B54 & 1) == 0 )
  {
    sub_B2C35C(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_4184B54 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceResultMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184B55 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_B2C35C(&EventRaceResultEntity_TypeInfo, a);
    byte_4184B55 = 1;
  }
  if ( !a
    || (v6 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1), *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_B2C434(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}