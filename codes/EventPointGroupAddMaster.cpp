void EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27347 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_4C27347 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4C27345 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_4C27345 = 1;
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
                                         (const MethodInfo_338C850 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  __int64 v13; // x2
  unsigned __int64 v14; // x8
  __int64 v15; // x25
  unsigned __int64 v16; // x9
  int32_t Count; // w0
  int32_t v18; // w26
  int32_t v19; // w27
  __int64 *v20; // x28
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  _DWORD *v23; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned int v27; // w19
  __int64 v28; // x29
  _DWORD *v29; // x29
  int v30; // t1
  __int64 v31; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v34; // [xsp+10h] [xbp-70h]

  if ( (byte_4C27349 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindIndex_int___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_1C2D490(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_4C27349 = 1;
  }
  v10 = sub_1C2D6DC(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1C2D538(int___TypeInfo, LODWORD(groupIds->max_length));
  if ( !list )
    goto LABEL_33;
  v14 = *(unsigned int *)(list + 24);
  v15 = list;
  if ( (__int64)(v14 << 32) >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= v14 )
LABEL_34:
        sub_1C2D6F4(list, v12, v13);
      *(_DWORD *)(list + 32 + 4 * v16++) = 0;
    }
    while ( (int)v14 != v16 );
  }
  list = (__int64)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1C2D6EC(list, v12);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    v20 = (__int64 *)(v10 + 16);
    v34 = (CGThumbnailListItem_o *)(v10 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v19,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v10 )
        goto LABEL_33;
      *v20 = list;
      sub_1C2D434((CGThumbnailListItem_o *)(v10 + 16), list, v21, v22);
      v23 = (_DWORD *)*v20;
      if ( *v20 && v23[4] == eventId && v23[5] == termId && v23[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v34->klass;
        if ( !v34->klass )
        {
          klass = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0);
          *(_QWORD *)(v10 + 24) = klass;
          sub_1C2D434(v34, (int32_t)klass, v25, v26);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_31D450C *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v27 = list;
          if ( (int)list < SLODWORD(defaultImageIds->max_length) )
          {
            list = *v20;
            if ( !*v20 )
              goto LABEL_33;
            if ( v27 >= *(_DWORD *)(v15 + 24) )
              goto LABEL_34;
            v28 = v15 + 4LL * v27;
            v30 = *(_DWORD *)(v28 + 32);
            v29 = (_DWORD *)(v28 + 32);
            if ( *(_DWORD *)(list + 28) >= v30 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12);
              if ( (list & 1) != 0 )
              {
                v31 = *v20;
                if ( !*v20 )
                  goto LABEL_33;
                if ( v27 >= *(_DWORD *)(v15 + 24) )
                  goto LABEL_34;
                *v29 = *(_DWORD *)(v31 + 28);
                if ( v27 >= LODWORD(defaultImageIds->max_length) )
                  goto LABEL_34;
                defaultImageIds->m_Items[v27] = *(_DWORD *)(v31 + 36);
              }
            }
          }
        }
      }
      if ( v18 == ++v19 )
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

  if ( (byte_4C27348 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C2D490(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_1C2D490(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_1C2D490(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C27348 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1C2D6EC(list, v12);
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
    _9__3_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v24,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_58242632(
    v11,
    _9__3_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v28 = v11->fields._size;
  if ( v28 < 1 )
    return 0;
  v29 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v29,
                                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
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

  if ( (byte_4C27346 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_4C27346 = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2734A & 1) == 0 )
  {
    sub_1C2D490(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C2734A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


void EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_1C2D6EC(this, x);
  return tempEnt->fields.groupId == x;
}