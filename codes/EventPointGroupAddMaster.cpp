void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21FCC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_4C21FCC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4C21FCA & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C21FCA = 1;
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
                                         (const MethodInfo_329F900 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  int64_t list; // x0
  const MethodInfo *v18; // x1
  unsigned __int64 v19; // x8
  int64_t v20; // x25
  unsigned __int64 v21; // x9
  int32_t Count; // w0
  int32_t v23; // w26
  int32_t v24; // w27
  int64_t *v25; // x28
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _DWORD *v32; // x8
  System_Predicate_int__o *klass; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  il2cpp_array_size_t v40; // w19
  int64_t v41; // x29
  _DWORD *v42; // x29
  int v43; // t1
  int64_t v44; // x8
  System_Int32_array *array; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *v47; // [xsp+10h] [xbp-70h]

  if ( (byte_4C21FCE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__, v11);
    sub_1C3B764(&int___TypeInfo, v12);
    sub_1C3B764(&System_Predicate_int__TypeInfo, v13);
    sub_1C3B764(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v14);
    sub_1C3B764(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_4C21FCE = 1;
  }
  v16 = sub_1C3B9B0(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !groupIds )
    goto LABEL_33;
  list = sub_1C3B80C(int___TypeInfo, groupIds->max_length);
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
        sub_1C3B9C8(list, v18);
      *(_DWORD *)(list + 32 + 4 * v21++) = 0;
    }
    while ( (int)v19 != v21 );
  }
  list = (int64_t)this->fields.list;
  array = groupIds;
  if ( !list )
LABEL_33:
    sub_1C3B9C0(list, v18);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    v25 = (int64_t *)(v16 + 16);
    v47 = (PartyOrganizationUtility_o *)(v16 + 24);
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
      if ( !v16 )
        goto LABEL_33;
      *v25 = list;
      sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 16), list, v26, v27, v28, v29, v30, v31);
      v32 = (_DWORD *)*v25;
      if ( *v25 && v32[4] == eventId && v32[5] == termId && v32[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v47->klass;
        if ( !v47->klass )
        {
          klass = (System_Predicate_int__o *)sub_1C3B9B0(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v16,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0LL);
          *(_QWORD *)(v16 + 24) = klass;
          sub_1C3B708(v47, (int64_t)klass, v34, v35, v36, v37, v38, v39);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_30ED01C *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_33;
          v40 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v25;
            if ( !*v25 )
              goto LABEL_33;
            if ( v40 >= *(_DWORD *)(v20 + 24) )
              goto LABEL_34;
            v41 = v20 + 4LL * v40;
            v43 = *(_DWORD *)(v41 + 32);
            v42 = (_DWORD *)(v41 + 32);
            if ( *(_DWORD *)(list + 28) >= v43 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v18);
              if ( (list & 1) != 0 )
              {
                v44 = *v25;
                if ( !*v25 )
                  goto LABEL_33;
                if ( v40 >= *(_DWORD *)(v20 + 24) )
                  goto LABEL_34;
                *v42 = *(_DWORD *)(v44 + 28);
                if ( v40 >= defaultImageIds->max_length )
                  goto LABEL_34;
                defaultImageIds->m_Items[v40 + 1] = *(_DWORD *)(v44 + 36);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  EventPointGroupAddMaster___c_c *v36; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v38; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // w23
  int32_t v47; // w21
  System_Collections_ObjectModel_Collection_T__o *v48; // x22
  bool result; // w0

  if ( (byte_4C21FCD & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__, v11);
    sub_1C3B764(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v17);
    sub_1C3B764(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v18);
    sub_1C3B764(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v19);
    sub_1C3B764(&EventPointGroupAddMaster___c_TypeInfo, v20);
    byte_4C21FCD = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Count__);
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
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupAddEntity__get_Item__);
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
        v33 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v22;
          sub_1C3B708((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v22, v26, v27, v28, v29, v30, v31);
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_18;
    }
LABEL_33:
    sub_1C3B9C0(list, v22);
  }
LABEL_18:
  if ( !v21 )
    goto LABEL_33;
  if ( !v21->fields._size )
    return 0;
  v36 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v36 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v36->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v38,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0LL);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v40, v41, v42, v43, v44, v45);
  }
  System_Collections_Generic_List_object___Sort_57202480(
    v21,
    _9__3_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v46 = v21->fields._size;
  if ( v46 < 1 )
    return 0;
  v47 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v21,
                                                               v47,
                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_33;
    v48 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v22) )
      break;
    if ( v46 == ++v47 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v48[1].monitor);
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

  if ( (byte_4C21FCB & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_4C21FCB = 1;
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
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C21FCF & 1) == 0 )
  {
    sub_1C3B764(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_4C21FCF = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, x);
  return tempEnt->fields.groupId == x;
}