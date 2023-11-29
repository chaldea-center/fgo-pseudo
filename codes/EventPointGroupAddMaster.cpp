void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC21 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_40FAC21 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    218,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupAddEntity_o *__fastcall EventPointGroupAddMaster__GetEntity(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAC1F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FAC1F = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
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
  __int64 v17; // x24
  __int64 v18; // x2
  EventPointGroupAddEntity_o *IsAvailable; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  unsigned __int64 groupId; // x8
  unsigned __int64 v23; // x9
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w26
  int32_t v27; // w27
  __int64 v28; // x28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x10
  System_Int32_array **v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  EventPointGroupAddEntity_o *v43; // x8
  System_Predicate_int__o *klass; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int32_t Index_int; // w0
  il2cpp_array_size_t v52; // w19
  char *v53; // x21
  _DWORD *v54; // x21
  int32_t v55; // t1
  EventPointGroupAddEntity_o *v57; // [xsp+8h] [xbp-78h]
  BattleServantConfConponent_o *v58; // [xsp+18h] [xbp-68h]

  if ( (byte_40FAC23 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B16FFC(&EventPointGroupAddEntity_TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v13);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v14);
    sub_B16FFC(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v15);
    sub_B16FFC(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_40FAC23 = 1;
  }
  v17 = sub_B170CC(
          EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&termId,
          groupIds,
          defaultImageIds);
  EventPointGroupAddMaster___c__DisplayClass4_0___ctor((EventPointGroupAddMaster___c__DisplayClass4_0_o *)v17, 0LL);
  if ( !groupIds )
    goto LABEL_40;
  IsAvailable = (EventPointGroupAddEntity_o *)sub_B17014(int___TypeInfo, groupIds->max_length, v18);
  if ( !IsAvailable )
    goto LABEL_40;
  groupId = (unsigned int)IsAvailable->fields.groupId;
  if ( (__int64)(groupId << 32) >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= groupId )
      {
LABEL_41:
        sub_B17100(IsAvailable, v20, v21);
        sub_B170A0();
      }
      *(&IsAvailable->fields.overwriteType + v23++) = 0;
    }
    while ( (__int64)v23 < (int)groupId );
  }
  v57 = IsAvailable;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_40:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v58 = (BattleServantConfConponent_o *)(v17 + 24);
    v26 = Count;
    v27 = 0;
    v28 = v17 + 16;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        goto LABEL_40;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v27,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v17 )
        goto LABEL_40;
      if ( Item
        && (v37 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v37) )
      {
        if ( (EventPointGroupAddEntity_c *)Item->klass->_2.typeHierarchy[v37 - 1] == EventPointGroupAddEntity_TypeInfo )
          v38 = (System_Int32_array **)Item;
        else
          v38 = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      *(_QWORD *)v28 = v38;
      sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), v38, v31, v32, v33, v34, v35, v36);
      v43 = *(EventPointGroupAddEntity_o **)v28;
      if ( *(_QWORD *)v28
        && v43->fields.eventId == eventId
        && v43->fields.termId == termId
        && v43->fields.overwriteType == 1 )
      {
        klass = (System_Predicate_int__o *)v58->klass;
        if ( !v58->klass )
        {
          klass = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v39, v40, v41, v42);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
          *(_QWORD *)(v17 + 24) = klass;
          sub_B16F98(v58, (System_Int32_array **)klass, v45, v46, v47, v48, v49, v50);
        }
        Index_int = System_Array__FindIndex_int_(
                      groupIds,
                      (System_Predicate_T__o *)klass,
                      (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___);
        if ( (Index_int & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_40;
          v52 = Index_int;
          if ( Index_int < (signed int)defaultImageIds->max_length )
          {
            IsAvailable = *(EventPointGroupAddEntity_o **)v28;
            if ( !*(_QWORD *)v28 )
              goto LABEL_40;
            if ( v52 >= v57->fields.groupId )
              goto LABEL_41;
            v53 = (char *)v57 + 4 * (int)v52;
            v55 = *((_DWORD *)v53 + 8);
            v54 = v53 + 32;
            if ( IsAvailable->fields.priority >= v55 )
            {
              IsAvailable = (EventPointGroupAddEntity_o *)EventPointGroupAddEntity__IsAvailable(IsAvailable, v20);
              if ( ((unsigned __int8)IsAvailable & 1) != 0 )
              {
                if ( !*(_QWORD *)v28 )
                  goto LABEL_40;
                if ( v52 >= v57->fields.groupId )
                  goto LABEL_41;
                *v54 = *(_DWORD *)(*(_QWORD *)v28 + 28LL);
                if ( !*(_QWORD *)v28 )
                  goto LABEL_40;
                if ( v52 >= defaultImageIds->max_length )
                  goto LABEL_41;
                defaultImageIds->m_Items[v52 + 1] = *(_DWORD *)(*(_QWORD *)v28 + 36LL);
              }
            }
          }
        }
      }
      if ( ++v27 >= v26 )
        return defaultImageIds;
    }
  }
  return defaultImageIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster__IsClearCondChangeImage(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t *imageId,
        const MethodInfo *method)
{
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *v25; // x19
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w25
  int32_t v32; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v35; // x10
  EventPointGroupAddMaster___c_c *v36; // x0
  int32_t *v37; // x23
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v40; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  int size; // w19
  __int64 v50; // x22
  unsigned int v51; // w8
  __int64 v52; // x8
  __int64 v53; // x21
  bool result; // w0

  if ( (byte_40FAC22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&Method_System_Comparison_EventPointGroupAddEntity___ctor__, v12);
    sub_B16FFC(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v13);
    sub_B16FFC(&EventPointGroupAddEntity_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v20);
    sub_B16FFC(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v21);
    sub_B16FFC(&EventPointGroupAddMaster___c_TypeInfo, v22);
    byte_40FAC22 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&termId,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  imageId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  v25 = imageId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      v33 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v33 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v33,
                                                                      v32,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v27 = Item;
      v35 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v35
        || (EventPointGroupAddEntity_c *)Item->klass->_2.typeHierarchy[v35 - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == eventId
        && Item->fields.missionConditionDetailId == termId
        && Item->fields.targetId == groupId
        && Item->fields.addCount == 1 )
      {
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
      }
      if ( ++v32 >= v31 )
        goto LABEL_17;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_17:
  if ( !v23 )
    goto LABEL_38;
  if ( !v23->fields._size )
    return 0;
  v36 = EventPointGroupAddMaster___c_TypeInfo;
  if ( (BYTE3(EventPointGroupAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v37 = v25;
    if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
      v36 = EventPointGroupAddMaster___c_TypeInfo;
    }
  }
  else
  {
    v37 = v25;
  }
  static_fields = v36->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventPointGroupAddEntity__TypeInfo,
                                                                          v27,
                                                                          v28,
                                                                          v29,
                                                                          v30);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v40,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    v41 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v41->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  size = v23->fields._size;
  if ( size < 1 )
    return 0;
  v50 = 0LL;
  v51 = v23->fields._size;
  while ( 1 )
  {
    if ( v51 <= (unsigned int)v50 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v52 = (__int64)v23->fields._items + 8 * v50;
    v53 = *(_QWORD *)(v52 + 32);
    if ( !v53 )
      goto LABEL_38;
    if ( EventPointGroupAddEntity__IsAvailable(*(EventPointGroupAddEntity_o **)(v52 + 32), v48) )
      break;
    if ( (int)v50 + 1 >= size )
      return 0;
    v51 = v23->fields._size;
    ++v50;
  }
  result = 1;
  *v37 = *(_DWORD *)(v53 + 36);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster__TryGetEntity(
        EventPointGroupAddMaster_o *this,
        EventPointGroupAddEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FAC20 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_40FAC20 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7012 & 1) == 0 )
  {
    sub_B16FFC(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_40F7012 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventPointGroupAddMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventPointGroupAddMaster___c___ctor(EventPointGroupAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPointGroupAddMaster___c___IsClearCondChangeImage_b__3_0(
        EventPointGroupAddMaster___c_o *this,
        EventPointGroupAddEntity_o *a,
        EventPointGroupAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


void __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_B170D4();
  return tempEnt->fields.groupId == x;
}