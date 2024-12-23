void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C31 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_4B66C31 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    224,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4B66C2F & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66C2F = 1;
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
                                         (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  __int64 v16; // x1
  __int64 v17; // x24
  __int64 list; // x0
  const MethodInfo *v19; // x1
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x9
  int32_t Count; // w0
  int32_t v23; // w26
  int32_t v24; // w27
  __int64 *v25; // x28
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  EventPointGroupAddEntity_c *v32; // x8
  __int64 methodPtr_low; // x9
  __int64 v34; // x10
  int64_t v35; // x1
  _DWORD *v36; // x8
  System_Predicate_int__o *klass; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  il2cpp_array_size_t v44; // w19
  __int64 v45; // x25
  _DWORD *v46; // x25
  int v47; // t1
  __int64 v48; // x8
  __int64 v50; // [xsp+10h] [xbp-80h]
  System_Int32_array *array; // [xsp+18h] [xbp-78h]
  PartyOrganizationUtility_o *v52; // [xsp+20h] [xbp-70h]

  if ( (byte_4B66C33 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BE4ACC(&EventPointGroupAddEntity_TypeInfo, v12);
    sub_1BE4ACC(&int___TypeInfo, v13);
    sub_1BE4ACC(&System_Predicate_int__TypeInfo, v14);
    sub_1BE4ACC(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v15);
    sub_1BE4ACC(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_4B66C33 = 1;
  }
  v17 = sub_1BE4D18(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !groupIds )
    goto LABEL_45;
  list = sub_1BE4B74(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_45;
  v20 = *(unsigned int *)(list + 24);
  if ( (__int64)(v20 << 32) >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= v20 )
LABEL_46:
        sub_1BE4D30(list, v19);
      *(_DWORD *)(list + 32 + 4 * v21++) = 0;
    }
    while ( (int)v20 != v21 );
  }
  v50 = list;
  array = groupIds;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_45:
    sub_1BE4D28(list, v19);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    v25 = (__int64 *)(v17 + 16);
    v52 = (PartyOrganizationUtility_o *)(v17 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_45;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v24,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v17 )
        goto LABEL_45;
      if ( list )
      {
        v32 = EventPointGroupAddEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventPointGroupAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventPointGroupAddEntity_TypeInfo )
            v34 = list;
          else
            v34 = 0LL;
        }
        else
        {
          v34 = 0LL;
        }
        *v25 = v34;
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v32 )
            v35 = list;
          else
            v35 = 0LL;
        }
        else
        {
          v35 = 0LL;
        }
      }
      else
      {
        v35 = 0LL;
        *v25 = 0LL;
      }
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 16), v35, v26, v27, v28, v29, v30, v31);
      v36 = (_DWORD *)*v25;
      if ( *v25 && v36[4] == eventId && v36[5] == termId && v36[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v52->klass;
        if ( !v52->klass )
        {
          klass = (System_Predicate_int__o *)sub_1BE4D18(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0LL);
          *(_QWORD *)(v17 + 24) = klass;
          sub_1BE4A70(v52, (int64_t)klass, v38, v39, v40, v41, v42, v43);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_30548D4 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_45;
          v44 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v25;
            if ( !*v25 )
              goto LABEL_45;
            if ( v44 >= *(_DWORD *)(v50 + 24) )
              goto LABEL_46;
            v45 = v50 + 4LL * v44;
            v47 = *(_DWORD *)(v45 + 32);
            v46 = (_DWORD *)(v45 + 32);
            if ( *(_DWORD *)(list + 28) >= v47 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v19);
              if ( (list & 1) != 0 )
              {
                v48 = *v25;
                if ( !*v25 )
                  goto LABEL_45;
                if ( v44 >= *(_DWORD *)(v50 + 24) )
                  goto LABEL_46;
                *v46 = *(_DWORD *)(v48 + 28);
                if ( v44 >= defaultImageIds->max_length )
                  goto LABEL_46;
                defaultImageIds->m_Items[v44 + 1] = *(_DWORD *)(v48 + 36);
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
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x20
  const MethodInfo *v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v25; // w25
  int32_t v26; // w26
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  EventPointGroupAddMaster___c_c *v38; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v40; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // w23
  int32_t v49; // w21
  System_Collections_ObjectModel_Collection_T__o *v50; // x22
  bool result; // w0

  if ( (byte_4B66C32 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BE4ACC(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v12);
    sub_1BE4ACC(&EventPointGroupAddEntity_TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v18);
    sub_1BE4ACC(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v19);
    sub_1BE4ACC(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v20);
    sub_1BE4ACC(&EventPointGroupAddMaster___c_TypeInfo, v21);
    byte_4B66C32 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v25 = (int)list;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v26,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventPointGroupAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list[1].klass) == groupId
        && LODWORD(list[1].monitor) == 1 )
      {
        if ( !v22 )
          break;
        items = v22->fields._items;
        v35 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v23, v27, v28, v29, v30, v31, v32);
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_20;
    }
LABEL_35:
    sub_1BE4D28(list, v23);
  }
LABEL_20:
  if ( !v22 )
    goto LABEL_35;
  if ( !v22->fields._size )
    return 0;
  v38 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
    v38 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v38->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v40,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0LL);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v42, v43, v44, v45, v46, v47);
  }
  System_Collections_Generic_List_object___Sort_56548584(
    v22,
    _9__3_0,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v48 = v22->fields._size;
  if ( v48 < 1 )
    return 0;
  v49 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v22,
                                                               v49,
                                                               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_35;
    v50 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v23) )
      break;
    if ( v48 == ++v49 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v50[1].monitor);
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

  if ( (byte_4B66C30 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_4B66C30 = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
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

  if ( (byte_4B66C34 & 1) == 0 )
  {
    sub_1BE4ACC(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_4B66C34 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, a);
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
    sub_1BE4D28(this, x);
  return tempEnt->fields.groupId == x;
}