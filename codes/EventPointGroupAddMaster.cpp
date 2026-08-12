void EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59708E8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_59708E8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    228,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupAddEntity_o *EventPointGroupAddMaster__GetEntity(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59708E6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_59708E6 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupAddEntity__CreatePK(
                         eventId,
                         termId,
                         groupId,
                         priority,
                         *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


System_Int32_array *EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
        const MethodInfo *method)
{
  __int64 v10; // x24
  __int64 list; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x9
  __int64 v14; // x25
  __int64 v15; // x8
  __int64 v16; // x9
  _DWORD *v17; // x10
  int32_t Count; // w0
  int32_t v19; // w26
  int32_t v20; // w27
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  _DWORD *v27; // x8
  System_Predicate_int__o *v28; // x28
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  unsigned int v35; // w28
  __int64 v36; // x20
  _DWORD *v37; // x20
  int v38; // t1
  __int64 v39; // x8
  unsigned int max_length; // w9

  if ( (byte_59708EA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_2213A60(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_59708EA = 1;
  }
  v10 = sub_2213CCC(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_2213B20(int___TypeInfo, LODWORD(groupIds->max_length));
  if ( !list )
    goto LABEL_33;
  v13 = *(_QWORD *)(list + 24);
  v14 = list;
  if ( (int)v13 >= 1 )
  {
    v15 = (unsigned int)v13 & ~((int)v13 >> 31);
    v16 = (unsigned int)*(_QWORD *)(list + 24);
    v17 = (_DWORD *)(list + 32);
    do
    {
      if ( !v16 )
LABEL_34:
        sub_2213CE4(list);
      --v15;
      --v16;
      *v17++ = 0;
    }
    while ( v15 );
  }
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_33:
    sub_2213CDC(list, v12);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v20,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v10 )
        goto LABEL_33;
      *(_QWORD *)(v10 + 16) = list;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), list, v21, v22, v23, v24, v25, v26);
      v27 = *(_DWORD **)(v10 + 16);
      if ( v27 && v27[4] == eventId && v27[5] == termId && v27[8] == 1 )
      {
        v28 = *(System_Predicate_int__o **)(v10 + 24);
        if ( !v28 )
        {
          v28 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            v28,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0);
          *(_QWORD *)(v10 + 24) = v28;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)v28, v29, v30, v31, v32, v33, v34);
        }
        list = System_Array__FindIndex_int_(
                 groupIds,
                 (System_Predicate_T__o *)v28,
                 (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v35 = list;
          if ( (int)list < SLODWORD(defaultImageIds->max_length) )
          {
            list = *(_QWORD *)(v10 + 16);
            if ( !list )
              goto LABEL_33;
            if ( v35 >= *(_DWORD *)(v14 + 24) )
              goto LABEL_34;
            v36 = v14 + 4LL * v35;
            v38 = *(_DWORD *)(v36 + 32);
            v37 = (_DWORD *)(v36 + 32);
            if ( *(_DWORD *)(list + 28) >= v38 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12);
              if ( (list & 1) != 0 )
              {
                v39 = *(_QWORD *)(v10 + 16);
                if ( !v39 )
                  goto LABEL_33;
                if ( v35 >= *(_DWORD *)(v14 + 24) )
                  goto LABEL_34;
                max_length = defaultImageIds->max_length;
                *v37 = *(_DWORD *)(v39 + 28);
                if ( v35 >= max_length )
                  goto LABEL_34;
                defaultImageIds->m_Items[v35] = *(_DWORD *)(v39 + 36);
              }
            }
          }
        }
      }
      if ( v19 == ++v20 )
        return defaultImageIds;
    }
  }
  return defaultImageIds;
}


bool EventPointGroupAddMaster__IsClearCondChangeImage(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t *imageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w25
  int32_t v15; // w26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  EventPointGroupAddMaster___c_c *v26; // x0
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v29; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int v37; // w23
  int32_t v38; // w21
  System_Collections_ObjectModel_Collection_T__o *v39; // x22

  if ( (byte_59708E9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_2213A60(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_2213A60(&EventPointGroupAddMaster___c_TypeInfo);
    byte_59708E9 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  *imageId = 0;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !list )
        break;
      v12 = (const MethodInfo *)list;
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list[1].klass) == groupId
        && LODWORD(list[1].monitor) == 1 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_18;
    }
LABEL_33:
    sub_2213CDC(list, v12);
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_33;
  if ( !v11->fields._size )
    return 0;
  v26 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !*(&EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo, v12);
    v26 = EventPointGroupAddMaster___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v12);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v29,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0);
    v30 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v30->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__3_0, (int32_t)_9__3_0, v31, v32, v33, v34, v35, v36);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v11,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v37 = v11->fields._size;
  if ( v37 < 1 )
    return 0;
  v38 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v38,
                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v39 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12) )
      break;
    if ( v37 == ++v38 )
      return 0;
  }
  *imageId = HIDWORD(v39[1].monitor);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventPointGroupAddMaster__TryGetEntity(
        EventPointGroupAddMaster_o *this,
        EventPointGroupAddEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59708E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_59708E7 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupAddEntity__CreatePK(
                         eventId,
                         termId,
                         groupId,
                         priority,
                         *(const MethodInfo **)&groupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59708EB & 1) == 0 )
  {
    sub_2213A60(&EventPointGroupAddMaster___c_TypeInfo);
    byte_59708EB = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventPointGroupAddMaster___c___ctor(EventPointGroupAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPointGroupAddMaster___c___IsClearCondChangeImage_b__3_0(
        EventPointGroupAddMaster___c_o *this,
        EventPointGroupAddEntity_o *a,
        EventPointGroupAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


void EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_2213CDC(this, *(_QWORD *)&x);
  return tempEnt->fields.groupId == x;
}