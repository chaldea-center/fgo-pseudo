void EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30A6B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_4D30A6B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4D30A69 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_4D30A69 = 1;
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
                                         (const MethodInfo_34681D4 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  _DWORD *v26; // x8
  System_Predicate_int__o *klass; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  unsigned int v34; // w19
  __int64 v35; // x29
  _DWORD *v36; // x29
  int v37; // t1
  __int64 v38; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  GrandQuestFolderBoardItem_o *v41; // [xsp+10h] [xbp-70h]

  if ( (byte_4D30A6D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_int___);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_1C93AD4(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_4D30A6D = 1;
  }
  v10 = sub_1C93D20(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1C93B7C(int___TypeInfo, LODWORD(groupIds->max_length));
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
        sub_1C93D34(list);
      *(_DWORD *)(list + 32 + 4 * v15++) = 0;
    }
    while ( (int)v13 != v15 );
  }
  list = (__int64)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1C93D2C(list, v12);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = (__int64 *)(v10 + 16);
    v41 = (GrandQuestFolderBoardItem_o *)(v10 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v18,
                        (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v10 )
        goto LABEL_33;
      *v19 = list;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 16), list, v20, v21, v22, v23, v24, v25);
      v26 = (_DWORD *)*v19;
      if ( *v19 && v26[4] == eventId && v26[5] == termId && v26[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v41->klass;
        if ( !v41->klass )
        {
          klass = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v10,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0);
          *(_QWORD *)(v10 + 24) = klass;
          sub_1C93A78(v41, (int32_t)klass, v28, v29, v30, v31, v32, v33);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_32A9C90 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v34 = list;
          if ( (int)list < SLODWORD(defaultImageIds->max_length) )
          {
            list = *v19;
            if ( !*v19 )
              goto LABEL_33;
            if ( v34 >= *(_DWORD *)(v14 + 24) )
              goto LABEL_34;
            v35 = v14 + 4LL * v34;
            v37 = *(_DWORD *)(v35 + 32);
            v36 = (_DWORD *)(v35 + 32);
            if ( *(_DWORD *)(list + 28) >= v37 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12);
              if ( (list & 1) != 0 )
              {
                v38 = *v19;
                if ( !*v19 )
                  goto LABEL_33;
                if ( v34 >= *(_DWORD *)(v14 + 24) )
                  goto LABEL_34;
                *v36 = *(_DWORD *)(v38 + 28);
                if ( v34 >= LODWORD(defaultImageIds->max_length) )
                  goto LABEL_34;
                defaultImageIds->m_Items[v34] = *(_DWORD *)(v38 + 36);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  EventPointGroupAddMaster___c_c *v26; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v28; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int v36; // w23
  int32_t v37; // w21
  System_Collections_ObjectModel_Collection_T__o *v38; // x22

  if ( (byte_4D30A6C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
    sub_1C93AD4(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_1C93AD4(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_1C93AD4(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4D30A6C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
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
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
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
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v12, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1C93D2C(list, v12);
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_33;
  if ( !v11->fields._size )
    return 0;
  v26 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v26 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v26->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v28,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v30, v31, v32, v33, v34, v35);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v11,
    _9__3_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v36 = v11->fields._size;
  if ( v36 < 1 )
    return 0;
  v37 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v11,
                                                               v37,
                                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v38 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v12) )
      break;
    if ( v36 == ++v37 )
      return 0;
  }
  *imageId = HIDWORD(v38[1].monitor);
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

  if ( (byte_4D30A6A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_4D30A6A = 1;
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
           (const MethodInfo_3468220 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30A6E & 1) == 0 )
  {
    sub_1C93AD4(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4D30A6E = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, a);
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
    sub_1C93D2C(this, x);
  return tempEnt->fields.groupId == x;
}