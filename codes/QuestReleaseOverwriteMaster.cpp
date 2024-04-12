void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B48F7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
    byte_42B48F7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    405,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_42B48F5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
    byte_42B48F5 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  QuestReleaseOverwriteEntity_o *v10; // x23
  int32_t v11; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v13; // x2
  QuestReleaseOverwriteEntity_o *v14; // x25
  __int64 v15; // x10
  int32_t priority; // w8
  int32_t v17; // w9

  if ( (byte_42B48F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestReleaseOverwriteEntity_TypeInfo);
    byte_42B48F8 = 1;
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
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (QuestReleaseOverwriteEntity_o *)Item;
        v15 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, nowTime, v13) )
        {
          if ( !v10
            || (priority = v10->fields.priority, v17 = v14->fields.priority, priority < v17)
            || priority == v17 && v10->fields.imagePriority < v14->fields.imagePriority )
          {
            v10 = v14;
          }
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_26:
    sub_B52A5C(list, *(_QWORD *)&questId);
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

  if ( (byte_42B48F6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
    byte_42B48F6 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v16; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x26
  __int64 v18; // x10
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v21; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x8
  int32_t missionConditionDetailId; // w20
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42B48F9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__);
    sub_B52984(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestReleaseOverwriteEntity_TypeInfo);
    sub_B52984(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__);
    sub_B52984(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_42B48F9 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                v14,
                                                (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v18 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, nowTime, v16);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v17,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
          }
        }
      }
      if ( ++v14 >= v13 )
        goto LABEL_20;
    }
LABEL_42:
    sub_B52A5C(list, v10);
  }
LABEL_20:
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
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
      v21 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v21,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__);
      v22 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      v22->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v22->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !v9 )
      goto LABEL_42;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    if ( !v9->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v29 = v9->fields._items->m_Items[0];
    if ( !v29 )
      goto LABEL_42;
    missionConditionDetailId = v29->fields.missionConditionDetailId;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v31 )
        break;
      if ( !v35.fields.current )
        sub_B52A5C(v31, v32);
      if ( HIDWORD(v35.fields.current[1].klass) == missionConditionDetailId )
      {
        if ( !*entityList )
          sub_B52A5C(0LL, v32);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35.fields.current,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF264 & 1) == 0 )
  {
    sub_B52984(&QuestReleaseOverwriteMaster___c_TypeInfo);
    byte_42AF264 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}