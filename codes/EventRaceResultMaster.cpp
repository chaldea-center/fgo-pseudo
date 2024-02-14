void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42149C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__, method);
    byte_42149C6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    210,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_42149C4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_42149C4 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266A024 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v22; // x21
  EventRaceResultMaster___c_c *v23; // x8
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v26; // x23
  struct EventRaceResultMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  signed __int64 size; // x8
  unsigned __int64 v35; // x23
  int32_t v36; // w22
  TitleInfoControl_EventEndTimeInfo_o *v37; // x26
  __int64 v38; // x10
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42149C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_DataEntityBase___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_DataEntityBase__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v7);
    sub_B0D8A4(&EventRaceResultEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v14);
    sub_B0D8A4(&EventRaceResultMaster___c_TypeInfo, v15);
    byte_42149C7 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v19 = (UserEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v22 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v23 = EventRaceResultMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceResultMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v23 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_DataEntityBase__TypeInfo,
                                                                          v20,
                                                                          v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_DataEntityBase___ctor__);
    v27 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v22 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v22,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  LODWORD(size) = v22->fields._size;
  if ( (int)size >= 1 )
  {
    v35 = 0LL;
    v36 = 0;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v37 = v22->fields._items->m_Items[v35];
      if ( !v37 )
        break;
      v38 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (EventRaceResultEntity_c *)v37->klass->_2.typeHierarchy[v38 - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( v37->fields.event_id == eventId && v36 != *(_DWORD *)&v37->fields.is_reward )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v19 )
          break;
        Instance = UserEventRaceMaster__TryGetEntity(
                     v19,
                     &entity,
                     Instance,
                     eventId,
                     *(_DWORD *)&v37->fields.is_reward,
                     0LL);
        if ( !v36 || (Instance & 1) != 0 )
          v36 = *(_DWORD *)&v37->fields.is_reward;
      }
      size = v22->fields._size;
      if ( (__int64)++v35 >= size )
        return v36;
    }
LABEL_33:
    sub_B0D97C(Instance);
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
  System_Collections_Generic_List_int__o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_long__o *v30; // x25
  int32_t v31; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v33; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v34; // x19
  __int64 monitor; // x8
  int64_t v36; // x27
  int32_t v37; // w20
  int32_t v38; // w28
  System_Int64_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42149CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&EventRaceResultEntity_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Insert__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Insert__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    byte_42149CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v27 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v28, v29);
  System_Collections_Generic_List_long____ctor(
    v30,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v31,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (v33 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
      {
        if ( (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] == EventRaceResultEntity_TypeInfo )
          v34 = Item;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = 0LL;
      }
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
      if ( !v34 )
        break;
      if ( LODWORD(v34[1].klass) == eventId && HIDWORD(v34[1].klass) == termId )
      {
        monitor = (__int64)v34[2].monitor;
        if ( monitor < (__int64)list )
        {
          v36 = monitor - (unsigned __int64)v34[2].klass;
          if ( v36 >= 1 )
          {
            if ( !v27 )
              break;
            v37 = termId;
            if ( v27->fields._size < 1 )
            {
LABEL_29:
              System_Collections_Generic_List_int___Add(
                v27,
                (int32_t)v34[1].monitor,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v30 )
                break;
              System_Collections_Generic_List_long___Add(
                v30,
                v36,
                (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
            }
            else
            {
              v38 = 0;
              while ( 1 )
              {
                if ( !v30 )
                  goto LABEL_37;
                if ( v30->fields._size <= (unsigned int)v38 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( v30->fields._items->m_Items[v38] > v36 )
                  break;
                if ( v27->fields._size <= ++v38 )
                  goto LABEL_29;
              }
              System_Collections_Generic_List_int___Insert(
                v27,
                v38,
                (int32_t)v34[1].monitor,
                (const MethodInfo_2FB10E0 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v30,
                v38,
                v36,
                (const MethodInfo_2FB7090 *)Method_System_Collections_Generic_List_long__Insert__);
            }
            termId = v37;
          }
        }
      }
      if ( ++v31 >= Count )
        goto LABEL_34;
    }
LABEL_37:
    sub_B0D97C(list);
  }
LABEL_34:
  if ( !v30 )
    goto LABEL_37;
  v39 = System_Collections_Generic_List_long___ToArray(
          v30,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v39;
  sub_B0D840((BattleServantConfConponent_o *)goalTime, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  if ( !v27 )
    goto LABEL_37;
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t max_length; // w9
  int64_t v10; // x8
  int32_t v11; // w8
  __int64 v13; // x0
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
    v10 = goalTimea->m_Items[rank - 1];
  }
  else
  {
    v10 = 0LL;
  }
  *goalTime = v10;
  if ( !RankDatas )
LABEL_12:
    sub_B0D97C(RankDatas);
  v11 = RankDatas->max_length;
  if ( v11 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v11 )
  {
LABEL_13:
    v13 = sub_B0D9A8(RankDatas);
    sub_B0D948(v13, 0LL);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_42149C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&EventRaceResultEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v12);
    byte_42149C8 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRaceResultEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&term);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v17,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v18 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v18
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
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

  if ( (byte_42149C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__, entity);
    byte_42149C5 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
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

  if ( (byte_42149C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&EventRaceResultEntity_TypeInfo, v8);
    byte_42149C9 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BBB & 1) == 0 )
  {
    sub_B0D8A4(&EventRaceResultMaster___c_TypeInfo, v1);
    byte_4211BBB = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRaceResultMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceResultMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211BBC & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_B0D8A4(&EventRaceResultEntity_TypeInfo, a);
    byte_4211BBC = 1;
  }
  if ( !a
    || (v6 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1), *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_B0D97C(this);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}