void __fastcall EventRaceResultMaster___ctor(EventRaceResultMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8E35 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    211,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string___ctor__);
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

  if ( (byte_42E8E33 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__,
      eventId,
      termId,
      *(_QWORD *)&groupId);
    byte_42E8E33 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (EventRaceResultEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__GetEntity__);
}


int32_t __fastcall EventRaceResultMaster__GetNowTerm(
        EventRaceResultMaster_o *this,
        int32_t eventId,
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
  int64_t Instance; // x0
  __int64 v40; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  UserEventRaceMaster_o *v43; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x21
  EventRaceResultMaster___c_c *v45; // x8
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v48; // x23
  struct EventRaceResultMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  signed __int64 size; // x8
  unsigned __int64 v57; // x23
  int32_t v58; // w22
  TitleInfoControl_EventEndTimeInfo_o *v59; // x26
  __int64 v60; // x10
  UserEventRaceEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8E36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_DataEntityBase___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_DataEntityBase___, v12, v13, v14);
    sub_B5D5C4(&EventRaceResultEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Item__, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__, v33, v34, v35);
    sub_B5D5C4(&EventRaceResultMaster___c_TypeInfo, v36, v37, v38);
    byte_42E8E36 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaceMaster___);
  list = this->fields.list;
  v43 = (UserEventRaceMaster_o *)MasterData_WarQuestSelectionMaster;
  Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)list,
                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_DataEntityBase___);
  v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v45 = EventRaceResultMaster___c_TypeInfo;
  if ( (BYTE3(EventRaceResultMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaceResultMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaceResultMaster___c_TypeInfo);
    v45 = EventRaceResultMaster___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_DataEntityBase__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v48,
      Method_EventRaceResultMaster___c__GetNowTerm_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_DataEntityBase___ctor__);
    v49 = EventRaceResultMaster___c_TypeInfo->static_fields;
    v49->__9__3_0 = (struct System_Comparison_DataEntityBase__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v44 )
    goto LABEL_33;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v44,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_DataEntityBase__Sort__);
  LODWORD(size) = v44->fields._size;
  if ( (int)size >= 1 )
  {
    v57 = 0LL;
    v58 = 0;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v59 = v44->fields._items->m_Items[v57];
      if ( !v59 )
        break;
      v60 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v60
        || (EventRaceResultEntity_c *)v59->klass->_2.typeHierarchy[v60 - 1] != EventRaceResultEntity_TypeInfo )
      {
        break;
      }
      if ( v59->fields.event_id == eventId && v58 != *(_DWORD *)&v59->fields.is_reward )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v43 )
          break;
        Instance = UserEventRaceMaster__TryGetEntity(
                     v43,
                     &entity,
                     Instance,
                     eventId,
                     *(_DWORD *)&v59->fields.is_reward,
                     0LL);
        if ( !v58 || (Instance & 1) != 0 )
          v58 = *(_DWORD *)&v59->fields.is_reward;
      }
      size = v44->fields._size;
      if ( (__int64)++v57 >= size )
        return v58;
    }
LABEL_33:
    sub_B5D69C(Instance, v40);
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
  int32_t v5; // w28
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  System_Collections_Generic_List_int__o *v55; // x23
  System_Collections_Generic_List_long__o *v56; // x25
  int32_t v57; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v59; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v60; // x19
  __int64 monitor; // x8
  int64_t v62; // x27
  int32_t v63; // w20
  int32_t v64; // w28
  System_Int64_array *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  v5 = termId;
  if ( (byte_42E8E39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, termId, goalTime);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&EventRaceResultEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Insert__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Insert__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&NetworkManager_TypeInfo, v50, v51, v52);
    byte_42E8E39 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_37;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v55 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v55,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v56 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v56,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( Count >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v57,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item
        && (v59 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v59) )
      {
        if ( (EventRaceResultEntity_c *)Item->klass->_2.typeHierarchy[v59 - 1] == EventRaceResultEntity_TypeInfo )
          v60 = Item;
        else
          v60 = 0LL;
      }
      else
      {
        v60 = 0LL;
      }
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)NetworkManager__getTime(0LL);
      if ( !v60 )
        break;
      if ( LODWORD(v60[1].klass) == eventId && HIDWORD(v60[1].klass) == v5 )
      {
        monitor = (__int64)v60[2].monitor;
        if ( monitor < (__int64)list )
        {
          v62 = monitor - (unsigned __int64)v60[2].klass;
          if ( v62 >= 1 )
          {
            if ( !v55 )
              break;
            v63 = v5;
            if ( v55->fields._size < 1 )
            {
LABEL_29:
              System_Collections_Generic_List_int___Add(
                v55,
                (int32_t)v60[1].monitor,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              if ( !v56 )
                break;
              System_Collections_Generic_List_long___Add(
                v56,
                v62,
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
            }
            else
            {
              v64 = 0;
              while ( 1 )
              {
                if ( !v56 )
                  goto LABEL_37;
                if ( v56->fields._size <= (unsigned int)v64 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                if ( v56->fields._items->m_Items[v64] > v62 )
                  break;
                if ( v55->fields._size <= ++v64 )
                  goto LABEL_29;
              }
              System_Collections_Generic_List_int___Insert(
                v55,
                v64,
                (int32_t)v60[1].monitor,
                (const MethodInfo_30855EC *)Method_System_Collections_Generic_List_int__Insert__);
              System_Collections_Generic_List_long___Insert(
                v56,
                v64,
                v62,
                (const MethodInfo_3048968 *)Method_System_Collections_Generic_List_long__Insert__);
            }
            v5 = v63;
          }
        }
      }
      if ( ++v57 >= Count )
        goto LABEL_34;
    }
LABEL_37:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
LABEL_34:
  if ( !v56 )
    goto LABEL_37;
  v65 = System_Collections_Generic_List_long___ToArray(
          v56,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *goalTime = v65;
  sub_B5D560((BattleServantConfConponent_o *)goalTime, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
  if ( !v55 )
    goto LABEL_37;
  return System_Collections_Generic_List_int___ToArray(
           v55,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_B5D69C(RankDatas, v9);
  v12 = RankDatas->max_length;
  if ( v12 < rank )
    return 0;
  if ( rank - 1 >= (unsigned int)v12 )
  {
LABEL_13:
    v14 = sub_B5D6C8(RankDatas);
    sub_B5D668(v14, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0
  __int64 v22; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v25; // w23
  int32_t v26; // w24
  __int64 v27; // x10

  if ( (byte_42E8E37 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      term,
      *(_QWORD *)&groupId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventRaceResultEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventRaceResultEntity__TypeInfo, v18, v19, v20);
    byte_42E8E37 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRaceResultEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRaceResultEntity___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_16:
    sub_B5D69C(list, v22);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v26,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v27 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term && *((_DWORD *)list + 6) == groupId )
      return *((_QWORD *)list + 5);
    if ( ++v26 >= v25 )
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

  if ( (byte_42E8E34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&termId);
    byte_42E8E34 = 1;
  }
  PK = EventRaceResultEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRaceResultMaster__EventRaceResultEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventRaceResultMaster__getRaceStartedAt(
        EventRaceResultMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  void *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_42E8E38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, termId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventRaceResultEntity_TypeInfo, v10, v11, v12);
    byte_42E8E38 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v16,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v17 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v17
      || *(EventRaceResultEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) != EventRaceResultEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == termId )
      return *((_QWORD *)list + 4);
    if ( ++v16 >= v15 )
      return 0LL;
  }
}


void __fastcall EventRaceResultMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRaceResultMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5644 & 1) == 0 )
  {
    sub_B5D5C4(&EventRaceResultMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5644 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRaceResultMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRaceResultMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaceResultMaster___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E5645 & 1) == 0 )
  {
    this = (EventRaceResultMaster___c_o *)sub_B5D5C4(&EventRaceResultEntity_TypeInfo, (_DWORD)a, (_DWORD)b, method);
    byte_42E5645 = 1;
  }
  if ( !a
    || (v6 = *(&EventRaceResultEntity_TypeInfo->_2.bitflags2 + 1), *(&a->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventRaceResultEntity_c *)a->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo
    || !b
    || *(&b->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (EventRaceResultEntity_c *)b->klass->_2.typeHierarchy[v6 - 1] != EventRaceResultEntity_TypeInfo )
  {
    sub_B5D69C(this, a);
  }
  return HIDWORD(a[1].klass) - HIDWORD(b[1].klass);
}