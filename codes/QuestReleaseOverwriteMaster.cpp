void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AEFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__, method);
    byte_418AEFB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    404,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntity(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AEF9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418AEF9 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w22
  QuestReleaseOverwriteEntity_o *v13; // x23
  int32_t v14; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v16; // x2
  QuestReleaseOverwriteEntity_o *v17; // x25
  __int64 v18; // x10
  int32_t priority; // w8
  int32_t v20; // w9

  if ( (byte_418AEFC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&QuestReleaseOverwriteEntity_TypeInfo, v9);
    byte_418AEFC = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v14,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (QuestReleaseOverwriteEntity_o *)Item;
        v18 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v16) )
        {
          if ( !v13
            || (priority = v13->fields.priority, v20 = v17->fields.priority, priority < v20)
            || priority == v20 && v13->fields.imagePriority < v17->fields.imagePriority )
          {
            v13 = v17;
          }
        }
      }
      if ( ++v14 >= v12 )
        return v13;
    }
LABEL_26:
    sub_B2C434(list, *(_QWORD *)&questId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseOverwriteMaster__TryGetEntity(
        QuestReleaseOverwriteMaster_o *this,
        QuestReleaseOverwriteEntity_o **entity,
        int32_t questId,
        int32_t priority,
        int32_t imagePriority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AEFA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_418AEFA = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  __int64 v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v30; // w24
  int32_t v31; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v33; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x26
  __int64 v35; // x10
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v38; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x8
  int32_t missionConditionDetailId; // w20
  _BOOL8 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_418AEFD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, entityList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&QuestReleaseOverwriteEntity_TypeInfo, v23);
    sub_B2C35C(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v24);
    sub_B2C35C(&QuestReleaseOverwriteMaster___c_TypeInfo, v25);
    byte_418AEFD = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                v31,
                                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v33);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v26 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              v34,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_20;
    }
LABEL_42:
    sub_B2C434(list, v27);
  }
LABEL_20:
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v26,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    list = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(QuestReleaseOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
      list = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    static_fields = (struct QuestReleaseOverwriteMaster___c_StaticFields *)*((_QWORD *)list + 23);
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v38,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__);
      v39 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      v39->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v39->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !v26 )
      goto LABEL_42;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    if ( !v26->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v46 = v26->fields._items->m_Items[0];
    if ( !v46 )
      goto LABEL_42;
    missionConditionDetailId = v46->fields.missionConditionDetailId;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v52,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v48 )
        break;
      if ( !v52.fields.current )
        sub_B2C434(v48, v49);
      if ( HIDWORD(v52.fields.current[1].klass) == missionConditionDetailId )
      {
        if ( !*entityList )
          sub_B2C434(0LL, v49);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v52.fields.current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v52,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185614 & 1) == 0 )
  {
    sub_B2C35C(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_4185614 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestReleaseOverwriteMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall QuestReleaseOverwriteMaster___c___ctor(
        QuestReleaseOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestReleaseOverwriteMaster___c___TryGetEntityListByQuestIdAndTime_b__4_0(
        QuestReleaseOverwriteMaster___c_o *this,
        QuestReleaseOverwriteEntity_o *a,
        QuestReleaseOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}