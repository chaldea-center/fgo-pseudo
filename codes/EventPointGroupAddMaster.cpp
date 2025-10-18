void EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43035 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_4C43035 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4C43033 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_4C43033 = 1;
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
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  unsigned __int64 v12; // x8
  __int64 v13; // x25
  unsigned __int64 v14; // x9
  int32_t Count; // w0
  int32_t v16; // w26
  int32_t v17; // w27
  __int64 *v18; // x28
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _DWORD *v21; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  unsigned int v26; // w19
  __int64 v27; // x29
  _DWORD *v28; // x29
  int v29; // t1
  __int64 v30; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v33; // [xsp+10h] [xbp-70h]

  if ( (byte_4C43037 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindIndex_int___);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_1C37058(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_4C43037 = 1;
  }
  v10 = sub_1C372A4(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1C37100(int___TypeInfo, LODWORD(groupIds->max_length));
  if ( !list )
    goto LABEL_33;
  v12 = *(unsigned int *)(list + 24);
  v13 = list;
  if ( (__int64)(v12 << 32) >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= v12 )
LABEL_34:
        sub_1C372BC(list);
      *(_DWORD *)(list + 32 + 4 * v14++) = 0;
    }
    while ( (int)v12 != v14 );
  }
  list = (__int64)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1C372B4(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = (__int64 *)(v10 + 16);
    v33 = (CGThumbnailListItem_o *)(v10 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v10 )
        goto LABEL_33;
      *v18 = list;
      sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 16), list, v19, v20);
      v21 = (_DWORD *)*v18;
      if ( *v18 && v21[4] == eventId && v21[5] == termId && v21[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v33->klass;
        if ( !v33->klass )
        {
          klass = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0);
          *(_QWORD *)(v10 + 24) = klass;
          sub_1C36FFC(v33, (int32_t)klass, v23, v24);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_31ED814 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v26 = list;
          if ( (int)list < SLODWORD(defaultImageIds->max_length) )
          {
            list = *v18;
            if ( !*v18 )
              goto LABEL_33;
            if ( v26 >= *(_DWORD *)(v13 + 24) )
              goto LABEL_34;
            v27 = v13 + 4LL * v26;
            v29 = *(_DWORD *)(v27 + 32);
            v28 = (_DWORD *)(v27 + 32);
            if ( *(_DWORD *)(list + 28) >= v29 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v25);
              if ( (list & 1) != 0 )
              {
                v30 = *v18;
                if ( !*v18 )
                  goto LABEL_33;
                if ( v26 >= *(_DWORD *)(v13 + 24) )
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
      if ( v16 == ++v17 )
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w25
  int32_t v14; // w26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
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
  const MethodInfo *v30; // x1
  System_Collections_ObjectModel_Collection_T__o *v31; // x22
  bool result; // w0

  if ( (byte_4C43036 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_1C37058(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_1C37058(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C43036 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !list )
        break;
      v17 = list;
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
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v17;
          sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1C372B4(list);
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
    _9__3_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v24,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_58346216(
    v11,
    _9__3_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v28 = v11->fields._size;
  if ( v28 < 1 )
    return 0;
  v29 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v29,
                                                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v31 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v30) )
      break;
    if ( v28 == ++v29 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v31[1].monitor);
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

  if ( (byte_4C43034 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_4C43034 = 1;
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
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43038 & 1) == 0 )
  {
    sub_1C37058(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4C43038 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return tempEnt->fields.groupId == x;
}