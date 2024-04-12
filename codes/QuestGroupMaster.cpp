void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B01D1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
    byte_42B01D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    72,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_int__o *v5; // x21
  System_Collections_Generic_List_int__o *v6; // x24
  __int64 v7; // x1
  void *list; // x0
  int32_t v9; // w25
  int32_t i; // w26
  int v11; // w8
  int32_t missionTargetId; // w1
  System_Collections_Generic_List_int__o *v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x27
  __int64 v15; // x10
  struct QuestGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x22
  Il2CppObject *v18; // x23
  struct QuestGroupMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int size; // w24
  bool IsQuestClear_25987760; // w22
  int v28; // w25
  __int64 v29; // x27
  unsigned int v30; // w8
  __int64 v31; // x8
  int v32; // w19
  int32_t v33; // w23
  System_Collections_Generic_List_int__o *v36; // [xsp+8h] [xbp-58h]

  if ( (byte_42B01D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_QuestGroupEntity___ctor__);
    sub_B52984(&System_Comparison_QuestGroupEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    sub_B52984(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__);
    sub_B52984(&QuestGroupMaster___c_TypeInfo);
    byte_42B01D7 = 1;
  }
  v36 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_61;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    for ( i = 0; i < v9; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_61;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v15 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v15
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v15 - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v11 = *((_DWORD *)list + 5);
      if ( v11 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v6 )
            goto LABEL_61;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v6,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v4 )
              goto LABEL_61;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v4,
              v14,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
            continue;
          }
          if ( !v5 )
            goto LABEL_61;
          missionTargetId = v14->fields.missionTargetId;
          v13 = v5;
          goto LABEL_19;
        }
      }
      else if ( v11 == 2 )
      {
        if ( !v5 )
          goto LABEL_61;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v5,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_15;
        if ( !v6 )
          goto LABEL_61;
        missionTargetId = v14->fields.missionTargetId;
        v13 = v6;
LABEL_19:
        System_Collections_Generic_List_int___Add(
          v13,
          missionTargetId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  if ( !v5 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v5,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
  if ( !v6 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v6,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
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
    v18 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v18,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_QuestGroupEntity___ctor__);
    v19 = QuestGroupMaster___c_TypeInfo->static_fields;
    v19->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)_9__10_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v4 )
    goto LABEL_61;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  size = v4->fields._size;
  if ( size < 1 )
    return v36;
  IsQuestClear_25987760 = 0;
  v28 = -1;
  v29 = 4LL;
  v30 = v4->fields._size;
  while ( 1 )
  {
    if ( v30 <= (int)v29 - 4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v31 = *((_QWORD *)&v4->fields._items->obj.klass + v29);
    if ( !v31 )
      goto LABEL_61;
    v32 = *(_DWORD *)(v31 + 24);
    if ( v4->fields._size <= (unsigned int)(v29 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v33 = *(_DWORD *)(v31 + 16);
    if ( v32 == v28 )
    {
      if ( IsQuestClear_25987760 )
      {
        IsQuestClear_25987760 = 1;
        v32 = v28;
        goto LABEL_56;
      }
      v32 = v28;
    }
    else
    {
      if ( IsQuestClear_25987760 )
      {
        list = v36;
        if ( !v36 )
          goto LABEL_61;
        System_Collections_Generic_List_int___AddRange(
          v36,
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_int___Clear(
        v5,
        (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25987760 = CondType__IsQuestClear_25987760(v33, -1, 0, 0LL);
LABEL_56:
    System_Collections_Generic_List_int___Add(
      v5,
      v33,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    if ( (int)v29 - 3 >= size )
      break;
    v30 = v4->fields._size;
    ++v29;
    v28 = v32;
  }
  if ( IsQuestClear_25987760 )
  {
    list = v36;
    if ( v36 )
    {
      System_Collections_Generic_List_int___AddRange(
        v36,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
      return v36;
    }
LABEL_61:
    sub_B52A5C(list, v7);
  }
  return v36;
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

  if ( (byte_42B01CF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
    byte_42B01CF = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_42B01D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01D6 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v13 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list->fields._syncRoot) == groupId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
    }
LABEL_16:
    sub_B52A5C(list, v8);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v7;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x25
  __int64 v13; // x10
  char v14; // w19
  char v15; // w20
  int32_t i; // w26
  __int64 v17; // x10
  int items_high; // w8
  char v19; // w8
  int32_t v21; // [xsp+8h] [xbp-58h]

  if ( (byte_42B01D9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01D9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  v21 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v11,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v12 = list;
    v13 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list->fields._syncRoot) == floor )
    {
      v14 = 0;
      v15 = 0;
      for ( i = 0; i < v10; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             i,
                                                                                             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v17 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v12->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v15 |= LODWORD(list->fields._syncRoot) == tower;
          }
          else if ( items_high == 1 )
          {
            v14 |= LODWORD(list->fields._syncRoot) == eventId;
          }
        }
      }
      v19 = v15 & v14;
      floor = v21;
      if ( (v19 & 1) != 0 )
        return (int32_t)v12->fields.items;
    }
    if ( ++v11 >= v10 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t *Item; // x0
  __int64 v12; // x10

  if ( (byte_42B01D2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01D2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v10,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v12 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v12
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v12 - 8) == QuestGroupEntity_TypeInfo
        && Item[4] == questId
        && Item[5] == type )
      {
        return Item[6];
      }
    }
    if ( ++v10 >= v9 )
      return 0;
  }
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  unsigned int *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42B01DB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01DB = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                            Enumerator,
                            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_34;
    v22 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != QuestGroupEntity_TypeInfo )
    {
      v20 = (unsigned int *)sub_B52D50(v20);
LABEL_34:
      sub_B52A5C(v20, v21);
    }
    v23 = v20[4];
    if ( (_DWORD)v23 != questId && v20[5] == 13 && v20[6] == questId )
    {
      if ( !v5 )
        sub_B52A5C(v20, v23);
      System_Collections_Generic_List_int___Add(
        v5,
        v23,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_30:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v5;
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_42B01D5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01D5 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v13
          && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) == QuestGroupEntity_TypeInfo
          && *((_DWORD *)list + 5) == type
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_int___Add(
            v7,
            *((_DWORD *)list + 4),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v12 >= v11 )
        return v7;
    }
LABEL_16:
    sub_B52A5C(list, v8);
  }
  return v7;
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

  if ( (byte_42B01D4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42B01D4 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_B52A5C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  int32_t *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B01DA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01DA = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                       Enumerator,
                       *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v22 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) >= (unsigned int)v22
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) == QuestGroupEntity_TypeInfo
        && v20[5] == type )
      {
        if ( !v5 )
          sub_B52A5C(v20, v21);
        System_Collections_Generic_List_int___Add(
          v5,
          v20[4],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int size; // w8
  int32_t v15; // w21
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t *Item; // x0
  int32_t *v20; // x25
  __int64 v21; // x10
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B01D3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__BinarySearch__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    byte_42B01D3 = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v7,
    (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v7,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v23;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          i.fields.current,
          0,
          (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    if ( !v10 )
      sub_B52A5C(v11, v12);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v7->fields._size;
  if ( size >= 1 )
  {
    if ( size == 1 )
    {
      v15 = v7->fields._items->m_Items[1];
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v15,
                                                                                                  type,
                                                                                                  v13);
      if ( v10 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v10,
          v15,
          (int32_t)GroupId,
          (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v10;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                  (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v10;
        v17 = Count;
        v18 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                              v18,
                              (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !Item )
            goto LABEL_29;
          v20 = Item;
          v21 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v21 )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v21 - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( Item[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_50688848(v7, Item[4], (const MethodInfo_3057350 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v10 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v10,
            v20[4],
            v20[6],
            (const MethodInfo_2EFFA74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v7,
            v20[4],
            (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v7->fields._size >= 1 )
          {
LABEL_29:
            if ( ++v18 < v17 )
              continue;
          }
          return v10;
        }
      }
    }
LABEL_26:
    sub_B52A5C(GroupId, v9);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int64 v11; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_42B01D8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestGroupEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B01D8 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_22:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v8 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v9 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v9,
                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_22;
    v10 = list;
    v11 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != QuestGroupEntity_TypeInfo )
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
      if ( !v8 )
        goto LABEL_22;
      EntityFromId = UserQuestMaster__getEntityFromId(v8, list, *(_DWORD *)(v10 + 16), 0LL);
      if ( EntityFromId )
      {
        if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return 1;
      }
    }
    if ( ++v9 >= Count )
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

  if ( (byte_42B01D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
    byte_42B01D0 = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF24A & 1) == 0 )
  {
    sub_B52984(&QuestGroupMaster___c_TypeInfo);
    byte_42AF24A = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, x);
  return x->fields.groupId - y->fields.groupId;
}