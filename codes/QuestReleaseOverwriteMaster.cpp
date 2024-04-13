void __fastcall QuestReleaseOverwriteMaster___ctor(QuestReleaseOverwriteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED285 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED285 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    405,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string___ctor__);
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

  if ( (byte_42ED283 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__,
      questId,
      priority,
      *(_QWORD *)&imagePriority);
    byte_42ED283 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&imagePriority);
  return (QuestReleaseOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseOverwriteEntity_o *__fastcall QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  QuestReleaseOverwriteEntity_o *v19; // x23
  int32_t v20; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v22; // x2
  QuestReleaseOverwriteEntity_o *v23; // x25
  __int64 v24; // x10
  int32_t priority; // w8
  int32_t v26; // w9

  Time = nowTime;
  if ( (byte_42ED286 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, nowTime, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&QuestReleaseOverwriteEntity_TypeInfo, v13, v14, v15);
    byte_42ED286 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0LL;
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v20,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = (QuestReleaseOverwriteEntity_o *)Item;
        v24 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && LODWORD(Item[1].klass) == questId
          && QuestReleaseOverwriteEntity__IsPeriod((QuestReleaseOverwriteEntity_o *)Item, Time, v22) )
        {
          if ( !v19
            || (priority = v19->fields.priority, v26 = v23->fields.priority, priority < v26)
            || priority == v26 && v19->fields.imagePriority < v23->fields.imagePriority )
          {
            v19 = v23;
          }
        }
      }
      if ( ++v20 >= v18 )
        return v19;
    }
LABEL_26:
    sub_B5D69C(list, *(_QWORD *)&questId);
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

  if ( (byte_42ED284 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&priority);
    byte_42ED284 = 1;
  }
  PK = QuestReleaseOverwriteEntity__CreatePK(questId, priority, imagePriority, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestReleaseOverwriteMaster__QuestReleaseOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall QuestReleaseOverwriteMaster__TryGetEntityListByQuestIdAndTime(
        QuestReleaseOverwriteMaster_o *this,
        System_Collections_Generic_List_QuestReleaseOverwriteEntity__o **entityList,
        int32_t questId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x23
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x22
  __int64 v61; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v64; // w24
  int32_t v65; // w25
  QuestReleaseOverwriteEntity_o *Item; // x0
  const MethodInfo *v67; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x26
  __int64 v69; // x10
  struct QuestReleaseOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v72; // x21
  struct QuestReleaseOverwriteMaster___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v80; // x8
  int32_t missionConditionDetailId; // w20
  _BOOL8 v82; // x0
  __int64 v83; // x1
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-68h] BYREF

  Time = nowTime;
  if ( (byte_42ED287 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)entityList,
      questId,
      nowTime);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_QuestReleaseOverwriteEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__, v21, v22, v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__get_Item__, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&NetworkManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&QuestReleaseOverwriteEntity_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__, v54, v55, v56);
    sub_B5D5C4(&QuestReleaseOverwriteMaster___c_TypeInfo, v57, v58, v59);
    byte_42ED287 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_42;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v64 = Count;
    v65 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (QuestReleaseOverwriteEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                                v65,
                                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v68 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v69 = *(&QuestReleaseOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v69
          && (QuestReleaseOverwriteEntity_c *)Item->klass->_2.typeHierarchy[v69 - 1] == QuestReleaseOverwriteEntity_TypeInfo
          && Item->fields.questId == questId )
        {
          list = (void *)QuestReleaseOverwriteEntity__IsPeriod(Item, Time, v67);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v60 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v60,
              v68,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
          }
        }
      }
      if ( ++v65 >= v64 )
        goto LABEL_20;
    }
LABEL_42:
    sub_B5D69C(list, v61);
  }
LABEL_20:
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v60,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___) )
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
      v72 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestReleaseOverwriteEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v72,
        Method_QuestReleaseOverwriteMaster___c__TryGetEntityListByQuestIdAndTime_b__4_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_QuestReleaseOverwriteEntity___ctor__);
      v73 = QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
      v73->__9__4_0 = (struct System_Comparison_QuestReleaseOverwriteEntity__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v73->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( !v60 )
      goto LABEL_42;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Sort__);
    if ( !v60->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v80 = v60->fields._items->m_Items[0];
    if ( !v80 )
      goto LABEL_42;
    missionConditionDetailId = v80->fields.missionConditionDetailId;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v86,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v60,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__GetEnumerator__);
    while ( 1 )
    {
      v82 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v86,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__MoveNext__);
      if ( !v82 )
        break;
      if ( !v86.fields.current )
        sub_B5D69C(v82, v83);
      if ( HIDWORD(v86.fields.current[1].klass) == missionConditionDetailId )
      {
        if ( !*entityList )
          sub_B5D69C(0LL, v83);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*entityList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v86.fields.current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseOverwriteEntity__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v86,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseOverwriteEntity__Dispose__);
    return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             (System_Collections_Generic_IEnumerable_TSource__o *)*entityList,
             (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestReleaseOverwriteEntity___);
  }
  else
  {
    return 0;
  }
}


void __fastcall QuestReleaseOverwriteMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F08 & 1) == 0 )
  {
    sub_B5D5C4(&QuestReleaseOverwriteMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F08 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestReleaseOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestReleaseOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}