void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAEDF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_49BAEDF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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
  Il2CppObject *PK; // x1

  if ( (byte_49BAEDD & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BAEDD = 1;
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
                                         (const MethodInfo_31A2454 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 list; // x0
  const MethodInfo *v18; // x1
  unsigned __int64 v19; // x8
  __int64 v20; // x25
  unsigned __int64 v21; // x9
  int32_t Count; // w0
  int32_t v23; // w26
  int32_t v24; // w27
  __int64 *v25; // x28
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _DWORD *v28; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  il2cpp_array_size_t v32; // w19
  __int64 v33; // x29
  _DWORD *v34; // x29
  int v35; // t1
  __int64 v36; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *v39; // [xsp+10h] [xbp-70h]

  if ( (byte_49BAEE1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__, v10);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__, v11);
    sub_1B4CF90(&int___TypeInfo, v12);
    sub_1B4CF90(&System_Predicate_int__TypeInfo, v13);
    sub_1B4CF90(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v14);
    sub_1B4CF90(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_49BAEE1 = 1;
  }
  v16 = sub_1B4D1DC(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1B4D038(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_33;
  v19 = *(unsigned int *)(list + 24);
  v20 = list;
  if ( (__int64)(v19 << 32) >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= v19 )
LABEL_34:
        sub_1B4D1F4(list, v18);
      *(_DWORD *)(list + 32 + 4 * v21++) = 0;
    }
    while ( (int)v19 != v21 );
  }
  list = (__int64)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1B4D1EC(list, v18);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    v25 = (__int64 *)(v16 + 16);
    v39 = (CGThumbnailListItem_o *)(v16 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v16 )
        goto LABEL_33;
      *v25 = list;
      sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 16), list, v26, v27);
      v28 = (_DWORD *)*v25;
      if ( *v25 && v28[4] == eventId && v28[5] == termId && v28[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v39->klass;
        if ( !v39->klass )
        {
          klass = (System_Predicate_int__o *)sub_1B4D1DC(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v16,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0LL);
          *(_QWORD *)(v16 + 24) = klass;
          sub_1B4CF34(v39, (int32_t)klass, v30, v31);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_2FF9DF0 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v32 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v25;
            if ( !*v25 )
              goto LABEL_33;
            if ( v32 >= *(_DWORD *)(v20 + 24) )
              goto LABEL_34;
            v33 = v20 + 4LL * v32;
            v35 = *(_DWORD *)(v33 + 32);
            v34 = (_DWORD *)(v33 + 32);
            if ( *(_DWORD *)(list + 28) >= v35 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v18);
              if ( (list & 1) != 0 )
              {
                v36 = *v25;
                if ( !*v25 )
                  goto LABEL_33;
                if ( v32 >= *(_DWORD *)(v20 + 24) )
                  goto LABEL_34;
                *v34 = *(_DWORD *)(v36 + 28);
                if ( v32 >= defaultImageIds->max_length )
                  goto LABEL_34;
                defaultImageIds->m_Items[v32 + 1] = *(_DWORD *)(v36 + 36);
              }
            }
          }
        }
      }
      if ( v23 == ++v24 )
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
  System_Collections_Generic_List_object__o *v21; // x20
  const MethodInfo *v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v24; // w25
  int32_t v25; // w26
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  EventPointGroupAddMaster___c_c *v32; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v34; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int v38; // w23
  int32_t v39; // w21
  System_Collections_ObjectModel_Collection_T__o *v40; // x22
  bool result; // w0

  if ( (byte_49BAEE0 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__, v11);
    sub_1B4CF90(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v17);
    sub_1B4CF90(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v18);
    sub_1B4CF90(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v19);
    sub_1B4CF90(&EventPointGroupAddMaster___c_TypeInfo, v20);
    byte_49BAEE0 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !list )
        break;
      v22 = (const MethodInfo *)list;
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list[1].klass) == groupId
        && LODWORD(list[1].monitor) == 1 )
      {
        if ( !v21 )
          break;
        items = v21->fields._items;
        v29 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v22, v26, v27);
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1B4D1EC(list, v22);
  }
LABEL_18:
  if ( !v21 )
    goto LABEL_33;
  if ( !v21->fields._size )
    return 0;
  v32 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v32 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v32->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v34,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0LL);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v36, v37);
  }
  System_Collections_Generic_List_object___Sort_56106144(
    v21,
    _9__3_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v38 = v21->fields._size;
  if ( v38 < 1 )
    return 0;
  v39 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v21,
                                                               v39,
                                                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v40 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v22) )
      break;
    if ( v38 == ++v39 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v40[1].monitor);
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
  Il2CppObject *PK; // x2

  if ( (byte_49BAEDE & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_49BAEDE = 1;
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
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAEE2 & 1) == 0 )
  {
    sub_1B4CF90(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_49BAEE2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, x);
  return tempEnt->fields.groupId == x;
}