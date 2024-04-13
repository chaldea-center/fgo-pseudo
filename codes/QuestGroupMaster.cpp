void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8AC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8AC2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    72,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  System_Collections_Generic_List_int__o *v63; // x21
  System_Collections_Generic_List_int__o *v64; // x24
  __int64 v65; // x1
  void *list; // x0
  int32_t v67; // w25
  int32_t i; // w26
  int v69; // w8
  int32_t missionTargetId; // w1
  System_Collections_Generic_List_int__o *v71; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x27
  __int64 v73; // x10
  struct QuestGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x22
  Il2CppObject *v76; // x23
  struct QuestGroupMaster___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int size; // w24
  bool IsQuestClear_25877652; // w22
  int v86; // w25
  __int64 v87; // x27
  unsigned int v88; // w8
  __int64 v89; // x8
  int v90; // w19
  int32_t v91; // w23
  System_Collections_Generic_List_int__o *v94; // [xsp+8h] [xbp-58h]

  if ( (byte_42E8AC8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_QuestGroupEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_QuestGroupEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CondType_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v56, v57, v58);
    sub_B5D5C4(&QuestGroupMaster___c_TypeInfo, v59, v60, v61);
    byte_42E8AC8 = 1;
  }
  v94 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v94,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v63 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v63,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v64 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_61;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v67 = (int)list;
    for ( i = 0; i < v67; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_61;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v72 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v73 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v73
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v73 - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v69 = *((_DWORD *)list + 5);
      if ( v69 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v64 )
            goto LABEL_61;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v64,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v62 )
              goto LABEL_61;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v62,
              v72,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
            continue;
          }
          if ( !v63 )
            goto LABEL_61;
          missionTargetId = v72->fields.missionTargetId;
          v71 = v63;
          goto LABEL_19;
        }
      }
      else if ( v69 == 2 )
      {
        if ( !v63 )
          goto LABEL_61;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v63,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_15;
        if ( !v64 )
          goto LABEL_61;
        missionTargetId = v72->fields.missionTargetId;
        v71 = v64;
LABEL_19:
        System_Collections_Generic_List_int___Add(
          v71,
          missionTargetId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  if ( !v63 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v63,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  if ( !v64 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v64,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  list = QuestGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestGroupMaster___c_TypeInfo);
    list = QuestGroupMaster___c_TypeInfo;
  }
  static_fields = (struct QuestGroupMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v76,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestGroupEntity___ctor__);
    v77 = QuestGroupMaster___c_TypeInfo->static_fields;
    v77->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v77->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  if ( !v62 )
    goto LABEL_61;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  size = v62->fields._size;
  if ( size < 1 )
    return v94;
  IsQuestClear_25877652 = 0;
  v86 = -1;
  v87 = 4LL;
  v88 = v62->fields._size;
  while ( 1 )
  {
    if ( v88 <= (int)v87 - 4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v89 = *((_QWORD *)&v62->fields._items->obj.klass + v87);
    if ( !v89 )
      goto LABEL_61;
    v90 = *(_DWORD *)(v89 + 24);
    if ( v62->fields._size <= (unsigned int)(v87 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v91 = *(_DWORD *)(v89 + 16);
    if ( v90 == v86 )
    {
      if ( IsQuestClear_25877652 )
      {
        IsQuestClear_25877652 = 1;
        v90 = v86;
        goto LABEL_56;
      }
      v90 = v86;
    }
    else
    {
      if ( IsQuestClear_25877652 )
      {
        list = v94;
        if ( !v94 )
          goto LABEL_61;
        System_Collections_Generic_List_int___AddRange(
          v94,
          (System_Collections_Generic_IEnumerable_T__o *)v63,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_int___Clear(
        v63,
        (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25877652 = CondType__IsQuestClear_25877652(v91, -1, 0, 0LL);
LABEL_56:
    System_Collections_Generic_List_int___Add(
      v63,
      v91,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    if ( (int)v87 - 3 >= size )
      break;
    v88 = v62->fields._size;
    ++v87;
    v86 = v90;
  }
  if ( IsQuestClear_25877652 )
  {
    list = v94;
    if ( v94 )
    {
      System_Collections_Generic_List_int___AddRange(
        v94,
        (System_Collections_Generic_IEnumerable_T__o *)v63,
        (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v94;
    }
LABEL_61:
    sub_B5D69C(list, v65);
  }
  return v94;
}


// local variable allocation has failed, the output may be wrong!
QuestGroupEntity_o *__fastcall QuestGroupMaster__GetEntity(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8AC0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__,
      questId,
      type,
      *(_QWORD *)&groupId);
    byte_42E8AC0 = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42E8AC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, groupId, type, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v19, v20, v21);
    byte_42E8AC7 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        v28 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list->fields._syncRoot) == groupId )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v22;
    }
LABEL_16:
    sub_B5D69C(list, v23);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v22;
}


int32_t __fastcall QuestGroupMaster__GetEventId(QuestGroupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetGroupId(this, questId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetEventTowerQuestId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        int32_t tower,
        int32_t floor,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x25
  __int64 v19; // x10
  char v20; // w19
  char v21; // w20
  int32_t i; // w26
  __int64 v23; // x10
  int items_high; // w8
  char v25; // w8
  int32_t v27; // [xsp+8h] [xbp-58h]

  v5 = floor;
  if ( (byte_42E8ACA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      tower,
      *(_QWORD *)&floor);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v11, v12, v13);
    byte_42E8ACA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v16 = Count;
  v17 = 0;
  v27 = v5;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v17,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v18 = list;
    v19 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list->fields._syncRoot) == v5 )
    {
      v20 = 0;
      v21 = 0;
      for ( i = 0; i < v16; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             i,
                                                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v23 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v18->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v21 |= LODWORD(list->fields._syncRoot) == tower;
          }
          else if ( items_high == 1 )
          {
            v20 |= LODWORD(list->fields._syncRoot) == eventId;
          }
        }
      }
      v25 = v21 & v20;
      v5 = v27;
      if ( (v25 & 1) != 0 )
        return (int32_t)v18->fields.items;
    }
    if ( ++v17 >= v16 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestGroupMaster__GetGroupId(
        QuestGroupMaster_o *this,
        int32_t questId,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t *Item; // x0
  __int64 v18; // x10

  if ( (byte_42E8AC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, type, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v10, v11, v12);
    byte_42E8AC3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v16,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v18
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v18 - 8) == QuestGroupEntity_TypeInfo
        && Item[4] == questId
        && Item[5] == type )
      {
        return Item[6];
      }
    }
    if ( ++v16 >= v15 )
      return 0;
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
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
  System_Collections_Generic_List_int__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  unsigned int *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x9
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42E8ACC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v24, v25, v26);
    byte_42E8ACC = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                            Enumerator,
                            *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_34;
    v44 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v44
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) != QuestGroupEntity_TypeInfo )
    {
      v42 = (unsigned int *)sub_B5D990(v42);
LABEL_34:
      sub_B5D69C(v42, v43);
    }
    v45 = v42[4];
    if ( (_DWORD)v45 != questId && v42[5] == 13 && v42[6] == questId )
    {
      if ( !v27 )
        sub_B5D69C(v42, v45);
      System_Collections_Generic_List_int___Add(
        v27,
        v45,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_30:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return v27;
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_int__o *v22; // x22
  __int64 v23; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42E8AC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, groupId, type, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v19, v20, v21);
    byte_42E8AC6 = 1;
  }
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v27,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v28
          && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) == QuestGroupEntity_TypeInfo
          && *((_DWORD *)list + 5) == type
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_int___Add(
            v22,
            *((_DWORD *)list + 4),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v27 >= v26 )
        return v22;
    }
LABEL_16:
    sub_B5D69C(list, v23);
  }
  return v22;
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_42E8AC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, groupId, type, method);
    byte_42E8AC5 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_B5D69C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
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
  System_Collections_Generic_List_int__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int32_t *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E8ACB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      type,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v24, v25, v26);
    byte_42E8ACB = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                       Enumerator,
                       *(_QWORD *)(v41 + 8));
    if ( v42 )
    {
      v44 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) >= (unsigned int)v44
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) == QuestGroupEntity_TypeInfo
        && v42[5] == type )
      {
        if ( !v27 )
          sub_B5D69C(v42, v43);
        System_Collections_Generic_List_int___Add(
          v27,
          v42[4],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return v27;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  System_Collections_Generic_List_int__o *v55; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v57; // x1
  System_Collections_Generic_Dictionary_int__int__o *v58; // x22
  _BOOL8 v59; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  int size; // w8
  int32_t v63; // w21
  int32_t Count; // w0
  int32_t v65; // w23
  int32_t v66; // w24
  int32_t *Item; // x0
  int32_t *v68; // x25
  __int64 v69; // x10
  System_Collections_Generic_List_Enumerator_int__o v71; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8AC4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)questIdList,
      type,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__BinarySearch__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v52, v53, v54);
    byte_42E8AC4 = 1;
  }
  memset(&i, 0, sizeof(i));
  v55 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v55,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v55 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v55,
    (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
  v58 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v58,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v55,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v71;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v58,
          i.fields.current,
          0,
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v59 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v59 )
      break;
    if ( !v58 )
      sub_B5D69C(v59, v60);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v55->fields._size;
  if ( size >= 1 )
  {
    if ( size == 1 )
    {
      v63 = v55->fields._items->m_Items[1];
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v63,
                                                                                                  type,
                                                                                                  v61);
      if ( v58 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v58,
          v63,
          (int32_t)GroupId,
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v58;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v58;
        v65 = Count;
        v66 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                              v66,
                              (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !Item )
            goto LABEL_29;
          v68 = Item;
          v69 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v69 )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v69 - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( Item[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_50874284(v55, Item[4], (const MethodInfo_30847AC *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v58 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v58,
            v68[4],
            v68[6],
            (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v55,
            v68[4],
            (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v55->fields._size >= 1 )
          {
LABEL_29:
            if ( ++v66 < v65 )
              continue;
          }
          return v58;
        }
      }
    }
LABEL_26:
    sub_B5D69C(GroupId, v57);
  }
  return v58;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
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
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v24; // x22
  int32_t v25; // w23
  int64_t v26; // x24
  __int64 v27; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_42E8AC9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestGroupEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8AC9 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_22:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v24 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v25 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v25,
                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_22;
    v26 = list;
    v27 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( *(_DWORD *)(list + 20) == 1 && *(_DWORD *)(list + 24) == eventId )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      list = NetworkManager__get_UserId(0LL);
      if ( !v24 )
        goto LABEL_22;
      EntityFromId = UserQuestMaster__getEntityFromId(v24, list, *(_DWORD *)(v26 + 16), 0LL);
      if ( EntityFromId )
      {
        if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return 1;
      }
    }
    if ( ++v25 >= Count )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__TryGetEntity(
        QuestGroupMaster_o *this,
        QuestGroupEntity_o **entity,
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8AC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&type);
    byte_42E8AC1 = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7EEE & 1) == 0 )
  {
    sub_B5D5C4(&QuestGroupMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7EEE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall QuestGroupMaster___c___ctor(QuestGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestGroupMaster___c___GetClearedGroupOpenQuestListByEventId_b__10_0(
        QuestGroupMaster___c_o *this,
        QuestGroupEntity_o *x,
        QuestGroupEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B5D69C(this, x);
  return x->fields.groupId - y->fields.groupId;
}