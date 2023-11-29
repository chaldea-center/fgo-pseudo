void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD577 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__, method);
    byte_40FD577 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    404,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_40FD575 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_40FD575 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v17; // x2
  QuestReleaseOverwriteEntity_o *v18; // x25
  __int64 v19; // x10
  int32_t priority; // w8
  int32_t v21; // w9

  if ( (byte_40FD578 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&QuestReleaseOverwriteEntity_TypeInfo, v9);
    byte_40FD578 = 1;
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
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v15 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v15,
               v14,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = (QuestReleaseOverwriteEntity_o *)Item;
        v19 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v17) )
        {
          if ( !v13
            || (priority = v13->fields.priority, v21 = v18->fields.priority, priority < v21)
            || priority == v21 && v13->fields.imagePriority < v18->fields.imagePriority )
          {
            v13 = v18;
          }
        }
      }
      if ( ++v14 >= v12 )
        return v13;
    }
LABEL_26:
    sub_B170D4();
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

  if ( (byte_40FD576 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_40FD576 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x23
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v29; // w24
  int32_t v30; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v33; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x26
  __int64 v35; // x10
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  QuestReleaseOverwriteMaster___c_c *v40; // x0
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v43; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x8
  int32_t missionConditionDetailId; // w20
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+8h] [xbp-68h] BYREF

  Time = nowTime;
  if ( (byte_40FD579 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, entityList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&QuestReleaseOverwriteEntity_TypeInfo, v23);
    sub_B16FFC(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v24);
    sub_B16FFC(&QuestReleaseOverwriteMaster___c_TypeInfo, v25);
    byte_40FD579 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo,
                                                                                                  entityList,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  nowTime,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v31,
               v30,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v35 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v35
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, Time, v33) )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            v34,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_20;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_20:
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v26,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
  {
    v40 = QuestReleaseOverwriteMaster___c_TypeInfo;
    if ( (BYTE3(QuestReleaseOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestReleaseOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestReleaseOverwriteMaster___c_TypeInfo);
      v40 = QuestReleaseOverwriteMaster___c_TypeInfo;
    }
    static_fields = v40->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        static_fields = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_QuestReleaseOverwriteEntity__TypeInfo,
                                                                            v36,
                                                                            v37,
                                                                            v38,
                                                                            v39);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v43,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__);
      v44 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      v44->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v44->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    if ( !v26 )
      goto LABEL_42;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    if ( !v26->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v51 = v26->fields._items->m_Items[0];
    if ( !v51 )
      goto LABEL_42;
    missionConditionDetailId = v51->fields.missionConditionDetailId;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v55,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v55,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__) )
    {
      if ( !v55.fields.current )
        sub_B170D4();
      if ( HIDWORD(v55.fields.current[1].klass) == missionConditionDetailId )
      {
        if ( !*entityList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55.fields.current,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v55,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40FA319 & 1) == 0 )
  {
    sub_B16FFC(&QuestReleaseOverwriteMaster___c_TypeInfo, v1);
    byte_40FA319 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestReleaseOverwriteMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}