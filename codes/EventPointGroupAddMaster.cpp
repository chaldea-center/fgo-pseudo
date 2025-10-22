void EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56DE4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_4C56DE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4C56DE2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_4C56DE2 = 1;
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
                                         (const MethodInfo_33B7A10 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  unsigned __int64 v13; // x8
  __int64 v14; // x25
  unsigned __int64 v15; // x9
  int32_t Count; // w0
  int32_t v17; // w26
  int32_t v18; // w27
  __int64 *v19; // x28
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _DWORD *v22; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned int v26; // w19
  __int64 v27; // x29
  _DWORD *v28; // x29
  int v29; // t1
  __int64 v30; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v33; // [xsp+10h] [xbp-70h]

  if ( (byte_4C56DE6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_FindIndex_int___);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&System_Predicate_int__TypeInfo);
    sub_1C3E564(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_1C3E564(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_4C56DE6 = 1;
  }
  v10 = sub_1C3E7B0(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1C3E60C(int___TypeInfo, LODWORD(groupIds->max_length));
  if ( !list )
    goto LABEL_33;
  v13 = *(unsigned int *)(list + 24);
  v14 = list;
  if ( (__int64)(v13 << 32) >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= v13 )
LABEL_34:
        sub_1C3E7C8(list, v12);
      *(_DWORD *)(list + 32 + 4 * v15++) = 0;
    }
    while ( (int)v13 != v15 );
  }
  list = (__int64)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1C3E7C0(list, v12);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = (__int64 *)(v10 + 16);
    v33 = (CGThumbnailListItem_o *)(v10 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v18,
                        (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v10 )
        goto LABEL_33;
      *v19 = list;
      sub_1C3E508((CGThumbnailListItem_o *)(v10 + 16), list, v20, v21);
      v22 = (_DWORD *)*v19;
      if ( *v19 && v22[4] == eventId && v22[5] == termId && v22[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v33->klass;
        if ( !v33->klass )
        {
          klass = (System_Predicate_int__o *)sub_1C3E7B0(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0);
          *(_QWORD *)(v10 + 24) = klass;
          sub_1C3E508(v33, (int32_t)klass, v24, v25);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_31FF768 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v26 = list;
          if ( (int)list < SLODWORD(defaultImageIds->max_length) )
          {
            list = *v19;
            if ( !*v19 )
              goto LABEL_33;
            if ( v26 >= *(_DWORD *)(v14 + 24) )
              goto LABEL_34;
            v27 = v14 + 4LL * v26;
            v29 = *(_DWORD *)(v27 + 32);
            v28 = (_DWORD *)(v27 + 32);
            if ( *(_DWORD *)(list + 28) >= v29 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12);
              if ( (list & 1) != 0 )
              {
                v30 = *v19;
                if ( !*v19 )
                  goto LABEL_33;
                if ( v26 >= *(_DWORD *)(v14 + 24) )
                  goto LABEL_34;
                *v28 = *(_DWORD *)(v30 + 28);
                if ( v26 >= LODWORD(defaultImageIds->max_length) )
                  goto LABEL_34;
                defaultImageIds->m_Items[v26] = *(_DWORD *)(v30 + 36);
              }
            }
          }
        }
      }
      if ( v17 == ++v18 )
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  EventPointGroupAddMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v24; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w23
  int32_t v29; // w21
  System_Collections_ObjectModel_Collection_T__o *v30; // x22
  bool result; // w0

  if ( (byte_4C56DE5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C3E564(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_1C3E564(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_1C3E564(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C56DE5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
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
        v19 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1C3E7C0(list, v12);
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_33;
  if ( !v11->fields._size )
    return 0;
  v22 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v22 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v24,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_58421028(
    v11,
    _9__3_0,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v28 = v11->fields._size;
  if ( v28 < 1 )
    return 0;
  v29 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v29,
                                                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v30 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12) )
      break;
    if ( v28 == ++v29 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v30[1].monitor);
  return result;
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

  if ( (byte_4C56DE3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_4C56DE3 = 1;
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
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C56DE7 & 1) == 0 )
  {
    sub_1C3E564(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C56DE7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, *(_QWORD *)&x);
  return tempEnt->fields.groupId == x;
}