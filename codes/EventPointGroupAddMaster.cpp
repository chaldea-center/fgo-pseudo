void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E90BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E90BD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    219,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_42E90BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      eventId,
      termId,
      *(_QWORD *)&groupId);
    byte_42E90BB = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
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
  __int64 v33; // x24
  __int64 list; // x0
  const MethodInfo *v35; // x1
  unsigned __int64 v36; // x8
  unsigned __int64 v37; // x9
  int32_t Count; // w0
  int32_t v39; // w26
  int32_t v40; // w27
  __int64 *v41; // x28
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x10
  System_Int32_array **v49; // x1
  _DWORD *v50; // x8
  System_Predicate_int__o *klass; // x19
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  il2cpp_array_size_t v58; // w19
  __int64 v59; // x21
  _DWORD *v60; // x21
  int v61; // t1
  __int64 v63; // x0
  __int64 v64; // [xsp+8h] [xbp-78h]
  BattleServantConfConponent_o *v65; // [xsp+18h] [xbp-68h]

  if ( (byte_42E90BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, eventId, termId, groupIds);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12, v13, v14);
    sub_B5D5C4(&EventPointGroupAddEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v27, v28, v29);
    sub_B5D5C4(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v30, v31, v32);
    byte_42E90BF = 1;
  }
  v33 = sub_B5D694(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  EventPointGroupAddMaster___c__DisplayClass4_0___ctor((EventPointGroupAddMaster___c__DisplayClass4_0_o *)v33, 0LL);
  if ( !groupIds )
    goto LABEL_40;
  list = sub_B5D5DC(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_40;
  v36 = *(unsigned int *)(list + 24);
  if ( (__int64)(v36 << 32) >= 1 )
  {
    v37 = 0LL;
    do
    {
      if ( v37 >= v36 )
      {
LABEL_41:
        v63 = sub_B5D6C8(list);
        sub_B5D668(v63, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v37++) = 0;
    }
    while ( (__int64)v37 < (int)v36 );
  }
  v64 = list;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_40:
    sub_B5D69C(list, v35);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v65 = (BattleServantConfConponent_o *)(v33 + 24);
    v39 = Count;
    v40 = 0;
    v41 = (__int64 *)(v33 + 16);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_40;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v40,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v33 )
        goto LABEL_40;
      if ( list
        && (v48 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v48) )
      {
        if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v48 - 8) == EventPointGroupAddEntity_TypeInfo )
          v49 = (System_Int32_array **)list;
        else
          v49 = 0LL;
      }
      else
      {
        v49 = 0LL;
      }
      *v41 = (__int64)v49;
      sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), v49, v42, v43, v44, v45, v46, v47);
      v50 = (_DWORD *)*v41;
      if ( *v41 && v50[4] == eventId && v50[5] == termId && v50[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v65->klass;
        if ( !v65->klass )
        {
          klass = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v33,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
          *(_QWORD *)(v33 + 24) = klass;
          sub_B5D560(v65, (System_Int32_array **)klass, v52, v53, v54, v55, v56, v57);
        }
        list = System_Array__FindIndex_int_(
                 groupIds,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_40;
          v58 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v41;
            if ( !*v41 )
              goto LABEL_40;
            if ( v58 >= *(_DWORD *)(v64 + 24) )
              goto LABEL_41;
            v59 = v64 + 4LL * (int)v58;
            v61 = *(_DWORD *)(v59 + 32);
            v60 = (_DWORD *)(v59 + 32);
            if ( *(_DWORD *)(list + 28) >= v61 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v35);
              if ( (list & 1) != 0 )
              {
                if ( !*v41 )
                  goto LABEL_40;
                if ( v58 >= *(_DWORD *)(v64 + 24) )
                  goto LABEL_41;
                *v60 = *(_DWORD *)(*v41 + 28);
                if ( !*v41 )
                  goto LABEL_40;
                if ( v58 >= defaultImageIds->max_length )
                  goto LABEL_41;
                defaultImageIds->m_Items[v58 + 1] = *(_DWORD *)(*v41 + 36);
              }
            }
          }
        }
      }
      if ( ++v40 >= v39 )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  const MethodInfo *v48; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *v50; // x19
  int32_t v51; // w25
  int32_t v52; // w26
  __int64 v53; // x10
  EventPointGroupAddMaster___c_c *v54; // x0
  int32_t *v55; // x23
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v58; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int size; // w19
  __int64 v67; // x22
  unsigned int v68; // w8
  __int64 v69; // x8
  __int64 v70; // x21
  bool result; // w0

  if ( (byte_42E90BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      termId,
      *(_QWORD *)&groupId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Comparison_EventPointGroupAddEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EventPointGroupAddEntity_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v41, v42, v43);
    sub_B5D5C4(&EventPointGroupAddMaster___c_TypeInfo, v44, v45, v46);
    byte_42E90BE = 1;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  v50 = imageId;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v51 = (int)list;
    v52 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v52,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v48 = (const MethodInfo *)list;
      v53 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v53
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[v53 - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list->fields._syncRoot) == groupId
        && LODWORD(list[1].klass) == 1 )
      {
        if ( !v47 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v47,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
      }
      if ( ++v52 >= v51 )
        goto LABEL_17;
    }
LABEL_38:
    sub_B5D69C(list, v48);
  }
LABEL_17:
  if ( !v47 )
    goto LABEL_38;
  if ( !v47->fields._size )
    return 0;
  v54 = EventPointGroupAddMaster___c_TypeInfo;
  if ( (BYTE3(EventPointGroupAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v55 = v50;
    if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
      v54 = EventPointGroupAddMaster___c_TypeInfo;
    }
  }
  else
  {
    v55 = v50;
  }
  static_fields = v54->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v58,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    v59 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v59->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  size = v47->fields._size;
  if ( size < 1 )
    return 0;
  v67 = 0LL;
  v68 = v47->fields._size;
  while ( 1 )
  {
    if ( v68 <= (unsigned int)v67 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v69 = (__int64)v47->fields._items + 8 * v67;
    v70 = *(_QWORD *)(v69 + 32);
    if ( !v70 )
      goto LABEL_38;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventPointGroupAddEntity__IsAvailable(
                                                                                         *(EventPointGroupAddEntity_o **)(v69 + 32),
                                                                                         v48);
    if ( ((unsigned __int8)list & 1) != 0 )
      break;
    if ( (int)v67 + 1 >= size )
      return 0;
    v68 = v47->fields._size;
    ++v67;
  }
  result = 1;
  *v55 = *(_DWORD *)(v70 + 36);
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

  if ( (byte_42E90BC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&termId);
    byte_42E90BC = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6581 & 1) == 0 )
  {
    sub_B5D5C4(&EventPointGroupAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6581 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, x);
  return tempEnt->fields.groupId == x;
}