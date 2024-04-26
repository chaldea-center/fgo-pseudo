void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43525BB & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
    byte_43525BB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    211,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_43525B9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
    byte_43525B9 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21C0890 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v9; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x21
  EventRaceResultMaster___c_c *v11; // x8
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v14; // x23
  struct EventRaceResultMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  signed __int64 size; // x8
  unsigned __int64 v23; // x23
  int32_t v24; // w22
  TitleInfoControl_EventEndTimeInfo_o *v25; // x26
  __int64 v26; // x10
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43525BC & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_DataEntityBase___ctor__);
    sub_B70694(&System_Comparison_DataEntityBase__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_DataEntityBase___);
    sub_B70694(&EventRaceResultEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataEntityBase__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__);
    sub_B70694(&EventRaceResultMaster___c_TypeInfo);
    byte_43525BC = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v9 = (UserEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v11 = EventRaceResultMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceResultMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v11 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_DataEntityBase__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_DataEntityBase___ctor__);
    v15 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v10 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v10,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  LODWORD(size) = v10->fields._size;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v25 = v10->fields._items->m_Items[v23];
      if ( !v25 )
        break;
      v26 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (EventRaceResultEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( v25->fields.event_id == eventId && v24 != *(_DWORD *)&v25->fields.is_reward )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v9 )
          break;
        Instance = UserEventRaceMaster__TryGetEntity(
                     v9,
                     &entity,
                     Instance,
                     eventId,
                     *(_DWORD *)&v25->fields.is_reward,
                     0LL);
        if ( !v24 || (Instance & 1) != 0 )
          v24 = *(_DWORD *)&v25->fields.is_reward;
      }
      size = v10->fields._size;
      if ( (__int64)++v23 >= size )
        return v24;
    }
LABEL_33:
    sub_B7076C(Instance, v6);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x25
  int32_t v12; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v14; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x19
  __int64 monitor; // x8
  int64_t v17; // x27
  int32_t v18; // w20
  int32_t v19; // w28
  System_Int64_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_43525BF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventRaceResultEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43525BF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v12,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (v14 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == EventRaceResultEntity_TypeInfo )
          v15 = Item;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
      if ( !v15 )
        break;
      if ( LODWORD(v15[1].klass) == eventId && HIDWORD(v15[1].klass) == termId )
      {
        monitor = (__int64)v15[2].monitor;
        if ( monitor < (__int64)list )
        {
          v17 = monitor - (unsigned __int64)v15[2].klass;
          if ( v17 >= 1 )
          {
            if ( !v10 )
              break;
            v18 = termId;
            if ( v10->fields._size < 1 )
            {
LABEL_29:
              System_Collections_Generic_List_int___Add(
                v10,
                (int32_t)v15[1].monitor,
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v11 )
                break;
              System_Collections_Generic_List_long___Add(
                v11,
                v17,
                (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
            }
            else
            {
              v19 = 0;
              while ( 1 )
              {
                if ( !v11 )
                  goto LABEL_37;
                if ( v11->fields._size <= (unsigned int)v19 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                if ( v11->fields._items->m_Items[v19] > v17 )
                  break;
                if ( v10->fields._size <= ++v19 )
                  goto LABEL_29;
              }
              System_Collections_Generic_List_int___Insert(
                v10,
                v19,
                (int32_t)v15[1].monitor,
                (const MethodInfo_30B73B8 *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v11,
                v19,
                v17,
                (const MethodInfo_30BD368 *)Method_System_Collections_Generic_List_long__Insert__);
            }
            termId = v18;
          }
        }
      }
      if ( ++v12 >= Count )
        goto LABEL_34;
    }
LABEL_37:
    sub_B7076C(list, *(_QWORD *)&eventId);
  }
LABEL_34:
  if ( !v11 )
    goto LABEL_37;
  v20 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v20;
  sub_B70630((BattleServantConfConponent_o *)goalTime, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  if ( !v10 )
    goto LABEL_37;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B7076C(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
  {
LABEL_13:
    v14 = sub_B70798(RankDatas);
    sub_B70738(v14, 0LL);
  }
  return RankDatas->m_Items[rank];
}


int64_t __fastcall EventRaceResultMaster__GetTargetGoalTime(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t term,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x0
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  __int64 v15; // x10

  if ( (byte_43525BD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventRaceResultEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
    byte_43525BD = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_B7076C(list, v10);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v14,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v15 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( ++v14 >= v13 )
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

  if ( (byte_43525BA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
    byte_43525BA = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10

  if ( (byte_43525BE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&EventRaceResultEntity_TypeInfo);
    byte_43525BE = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_B7076C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v10,
             (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v11 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( ++v10 >= v9 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434EA28 & 1) == 0 )
  {
    sub_B70694(&EventRaceResultMaster___c_TypeInfo);
    byte_434EA28 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceResultMaster___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434EA29 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_B70694(&EventRaceResultEntity_TypeInfo);
    byte_434EA29 = 1;
  }
  if ( !a
    || (v6 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1), *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_B7076C(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}