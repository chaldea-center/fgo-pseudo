void __fastcall QuestGroupMaster___ctor(QuestGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186E76 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__, method);
    byte_4186E76 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    71,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetClearedGroupOpenQuestListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_Collections_Generic_List_int__o *v24; // x21
  System_Collections_Generic_List_int__o *v25; // x24
  __int64 v26; // x1
  void *list; // x0
  int32_t v28; // w25
  int32_t i; // w26
  int v30; // w8
  int32_t missionTargetId; // w1
  System_Collections_Generic_List_int__o *v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x27
  __int64 v34; // x10
  struct QuestGroupMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__10_0; // x22
  Il2CppObject *v37; // x23
  struct QuestGroupMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int size; // w24
  bool IsQuestClear_25746984; // w22
  int v47; // w25
  __int64 v48; // x27
  unsigned int v49; // w8
  __int64 v50; // x8
  int v51; // w19
  int32_t v52; // w23
  System_Collections_Generic_List_int__o *v55; // [xsp+8h] [xbp-58h]

  if ( (byte_4186E7C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B2C35C(&Method_System_Comparison_QuestGroupEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_QuestGroupEntity__TypeInfo, v6);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v19);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v20);
    sub_B2C35C(&Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__, v21);
    sub_B2C35C(&QuestGroupMaster___c_TypeInfo, v22);
    byte_4186E7C = 1;
  }
  v55 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v55,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_61;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v28 = (int)list;
    for ( i = 0; i < v28; ++i )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_61;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               i,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        continue;
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v34 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v34
        || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v34 - 8) != QuestGroupEntity_TypeInfo )
      {
        continue;
      }
      v30 = *((_DWORD *)list + 5);
      if ( v30 == 1 )
      {
        if ( *((_DWORD *)list + 6) == eventId )
        {
          if ( !v25 )
            goto LABEL_61;
          list = (void *)System_Collections_Generic_List_int___Remove(
                           v25,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_15:
            if ( !v23 )
              goto LABEL_61;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              v33,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
            continue;
          }
          if ( !v24 )
            goto LABEL_61;
          missionTargetId = v33->fields.missionTargetId;
          v32 = v24;
          goto LABEL_19;
        }
      }
      else if ( v30 == 2 )
      {
        if ( !v24 )
          goto LABEL_61;
        list = (void *)System_Collections_Generic_List_int___Remove(
                         v24,
                         *((_DWORD *)list + 4),
                         (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
        if ( ((unsigned __int8)list & 1) != 0 )
          goto LABEL_15;
        if ( !v25 )
          goto LABEL_61;
        missionTargetId = v33->fields.missionTargetId;
        v32 = v25;
LABEL_19:
        System_Collections_Generic_List_int___Add(
          v32,
          missionTargetId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  if ( !v24 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v24,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  if ( !v25 )
    goto LABEL_61;
  System_Collections_Generic_List_int___Clear(
    v25,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
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
    v37 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestGroupEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__10_0,
      v37,
      Method_QuestGroupMaster___c__GetClearedGroupOpenQuestListByEventId_b__10_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestGroupEntity___ctor__);
    v38 = QuestGroupMaster___c_TypeInfo->static_fields;
    v38->__9__10_0 = (struct System_Comparison_QuestGroupEntity__o *)_9__10_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v38->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !v23 )
    goto LABEL_61;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__10_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestGroupEntity__Sort__);
  size = v23->fields._size;
  if ( size < 1 )
    return v55;
  IsQuestClear_25746984 = 0;
  v47 = -1;
  v48 = 4LL;
  v49 = v23->fields._size;
  while ( 1 )
  {
    if ( v49 <= (int)v48 - 4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v50 = *((_QWORD *)&v23->fields._items->obj.klass + v48);
    if ( !v50 )
      goto LABEL_61;
    v51 = *(_DWORD *)(v50 + 24);
    if ( v23->fields._size <= (unsigned int)(v48 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v52 = *(_DWORD *)(v50 + 16);
    if ( v51 == v47 )
    {
      if ( IsQuestClear_25746984 )
      {
        IsQuestClear_25746984 = 1;
        v51 = v47;
        goto LABEL_56;
      }
      v51 = v47;
    }
    else
    {
      if ( IsQuestClear_25746984 )
      {
        list = v55;
        if ( !v55 )
          goto LABEL_61;
        System_Collections_Generic_List_int___AddRange(
          v55,
          (System_Collections_Generic_IEnumerable_T__o *)v24,
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      System_Collections_Generic_List_int___Clear(
        v24,
        (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25746984 = CondType__IsQuestClear_25746984(v52, -1, 0, 0LL);
LABEL_56:
    System_Collections_Generic_List_int___Add(
      v24,
      v52,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( (int)v48 - 3 >= size )
      break;
    v49 = v23->fields._size;
    ++v48;
    v47 = v51;
  }
  if ( IsQuestClear_25746984 )
  {
    list = v55;
    if ( v55 )
    {
      System_Collections_Generic_List_int___AddRange(
        v55,
        (System_Collections_Generic_IEnumerable_T__o *)v24,
        (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
      return v55;
    }
LABEL_61:
    sub_B2C434(list, v26);
  }
  return v55;
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

  if ( (byte_4186E74 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4186E74 = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&groupId);
  return (QuestGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestGroupEntity__o *__fastcall QuestGroupMaster__GetEntityListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4186E7B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestGroupEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_QuestGroupEntity__TypeInfo, v10);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v11);
    byte_4186E7B = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v18 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == QuestGroupEntity_TypeInfo
          && HIDWORD(list->fields.items) == type
          && LODWORD(list->fields._syncRoot) == groupId )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestGroupEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
    }
LABEL_16:
    sub_B2C434(list, v13);
  }
  return (System_Collections_Generic_List_QuestGroupEntity__o *)v12;
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
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x25
  __int64 v15; // x10
  char v16; // w19
  char v17; // w20
  int32_t i; // w26
  __int64 v19; // x10
  int items_high; // w8
  char v21; // w8
  int32_t v23; // [xsp+8h] [xbp-58h]

  if ( (byte_4186E7E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v9);
    byte_4186E7E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v12 = Count;
  v13 = 0;
  v23 = floor;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v14 = list;
    v15 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != QuestGroupEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( HIDWORD(list->fields.items) == 9 && LODWORD(list->fields._syncRoot) == floor )
    {
      v16 = 0;
      v17 = 0;
      for ( i = 0; i < v12; ++i )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          goto LABEL_27;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             i,
                                                                                             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !list )
          goto LABEL_27;
        v19 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (QuestGroupEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != QuestGroupEntity_TypeInfo )
        {
          goto LABEL_27;
        }
        if ( LODWORD(list->fields.items) == LODWORD(v14->fields.items) )
        {
          items_high = HIDWORD(list->fields.items);
          if ( items_high == 8 )
          {
            v17 |= LODWORD(list->fields._syncRoot) == tower;
          }
          else if ( items_high == 1 )
          {
            v16 |= LODWORD(list->fields._syncRoot) == eventId;
          }
        }
      }
      v21 = v17 & v16;
      floor = v23;
      if ( (v21 & 1) != 0 )
        return (int32_t)v14->fields.items;
    }
    if ( ++v13 >= v12 )
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  int32_t *Item; // x0
  __int64 v14; // x10

  if ( (byte_4186E77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v8);
    byte_4186E77 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&questId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        list,
                        v12,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v14
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v14 - 8) == QuestGroupEntity_TypeInfo
        && Item[4] == questId
        && Item[5] == type )
      {
        return Item[6];
      }
    }
    if ( ++v12 >= v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetInterludeQuestIdList(
        QuestGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  unsigned int *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4186E80 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v11);
    byte_4186E80 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                            Enumerator,
                            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_34;
    v29 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v29
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) != QuestGroupEntity_TypeInfo )
    {
      v27 = (unsigned int *)sub_B2C728(v27);
LABEL_34:
      sub_B2C434(v27, v28);
    }
    v30 = v27[4];
    if ( (_DWORD)v30 != questId && v27[5] == 13 && v27[6] == questId )
    {
      if ( !v12 )
        sub_B2C434(v27, v30);
      System_Collections_Generic_List_int___Add(
        v12,
        v30,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_30:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetListOfQuestIdByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x22
  __int64 v13; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4186E7A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v11);
    byte_4186E7A = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v17,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18
          && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == QuestGroupEntity_TypeInfo
          && *((_DWORD *)list + 5) == type
          && *((_DWORD *)list + 6) == groupId )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_int___Add(
            v12,
            *((_DWORD *)list + 4),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return v12;
    }
LABEL_16:
    sub_B2C434(list, v13);
  }
  return v12;
}


System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByEventId(
        QuestGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return QuestGroupMaster__GetQuestIdListByGroupId(this, eventId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestGroupMaster__GetQuestIdListByGroupId(
        QuestGroupMaster_o *this,
        int32_t groupId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *ListOfQuestIdByGroupId; // x0
  __int64 v8; // x1

  if ( (byte_4186E79 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&groupId);
    byte_4186E79 = 1;
  }
  ListOfQuestIdByGroupId = QuestGroupMaster__GetListOfQuestIdByGroupId(this, groupId, type, method);
  if ( !ListOfQuestIdByGroupId )
    sub_B2C434(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           ListOfQuestIdByGroupId,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall QuestGroupMaster__GetQuestIdListByGroupType(
        QuestGroupMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int32_t *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_4186E7F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v11);
    byte_4186E7F = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                       Enumerator,
                       *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      v29 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v29
        && *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) == QuestGroupEntity_TypeInfo
        && v27[5] == type )
      {
        if ( !v12 )
          sub_B2C434(v27, v28);
        System_Collections_Generic_List_int___Add(
          v12,
          v27[4],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v12;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestGroupMaster__GetQuestIdToGroupIdDict(
        QuestGroupMaster_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
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
  System_Collections_Generic_List_int__o *v23; // x21
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *GroupId; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__int__o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  int size; // w8
  int32_t v31; // w21
  int32_t Count; // w0
  int32_t v33; // w23
  int32_t v34; // w24
  int32_t *Item; // x0
  int32_t *v36; // x25
  __int64 v37; // x10
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4186E78 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIdList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__BinarySearch__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v22);
    byte_4186E78 = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdList,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  if ( !v23 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort(
    v23,
    (const MethodInfo_2F68F18 *)Method_System_Collections_Generic_List_int__Sort__);
  v26 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v26,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v23,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v39;
        ;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          i.fields.current,
          0,
          (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__) )
  {
    v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v27 )
      break;
    if ( !v26 )
      sub_B2C434(v27, v28);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  size = v23->fields._size;
  if ( size >= 1 )
  {
    if ( size == 1 )
    {
      v31 = v23->fields._items->m_Items[1];
      GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)QuestGroupMaster__GetGroupId(
                                                                                                  this,
                                                                                                  v31,
                                                                                                  type,
                                                                                                  v29);
      if ( v26 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v26,
          v31,
          (int32_t)GroupId,
          (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        return v26;
      }
    }
    else
    {
      GroupId = this->fields.list;
      if ( GroupId )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        if ( Count < 1 )
          return v26;
        v33 = Count;
        v34 = 0;
        while ( 1 )
        {
          GroupId = this->fields.list;
          if ( !GroupId )
            break;
          Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)GroupId,
                              v34,
                              (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( !Item )
            goto LABEL_29;
          v36 = Item;
          v37 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v37 )
            goto LABEL_29;
          if ( *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v37 - 8) != QuestGroupEntity_TypeInfo )
            goto LABEL_29;
          if ( Item[5] != type )
            goto LABEL_29;
          GroupId = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_Generic_List_int___BinarySearch_49705880(v23, Item[4], (const MethodInfo_2F67398 *)Method_System_Collections_Generic_List_int__BinarySearch__);
          if ( ((unsigned int)GroupId & 0x80000000) != 0 )
            goto LABEL_29;
          if ( !v26 )
            break;
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v26,
            v36[4],
            v36[6],
            (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
          System_Collections_Generic_List_int___Remove(
            v23,
            v36[4],
            (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
          if ( v23->fields._size >= 1 )
          {
LABEL_29:
            if ( ++v34 < v33 )
              continue;
          }
          return v26;
        }
      }
    }
LABEL_26:
    sub_B2C434(GroupId, v25);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestGroupMaster__IsEntryEvent(QuestGroupMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t list; // x0
  int32_t Count; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserQuestMaster_o *v13; // x22
  int32_t v14; // w23
  int64_t v15; // x24
  __int64 v16; // x10
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4186E7D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&QuestGroupEntity_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4186E7D = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list
    || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_22:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)list,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( Count < 1 )
    return 0;
  v13 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
  v14 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v14,
                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_22;
    v15 = list;
    v16 = *(&QuestGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v16
      || *(QuestGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v16 - 8) != QuestGroupEntity_TypeInfo )
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
      if ( !v13 )
        goto LABEL_22;
      EntityFromId = UserQuestMaster__getEntityFromId(v13, list, *(_DWORD *)(v15 + 16), 0LL);
      if ( EntityFromId )
      {
        if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
          return 1;
      }
    }
    if ( ++v14 >= Count )
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

  if ( (byte_4186E75 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__, entity);
    byte_4186E75 = 1;
  }
  PK = QuestGroupEntity__CreatePK(questId, type, groupId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestGroupMaster__QuestGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41852F8 & 1) == 0 )
  {
    sub_B2C35C(&QuestGroupMaster___c_TypeInfo, v1);
    byte_41852F8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestGroupMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
  return x->fields.groupId - y->fields.groupId;
}