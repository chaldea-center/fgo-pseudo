void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16268 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method, v2);
    byte_4B16268 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    220,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4B16266 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    byte_4B16266 = 1;
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
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x24
  __int64 list; // x0
  const MethodInfo *v26; // x1
  unsigned __int64 v27; // x8
  unsigned __int64 v28; // x9
  int32_t Count; // w0
  int32_t v30; // w26
  int32_t v31; // w27
  __int64 *v32; // x28
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  EventPointGroupAddEntity_c *v39; // x8
  __int64 methodPtr_low; // x9
  __int64 v41; // x10
  int64_t v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  _DWORD *v45; // x8
  System_Predicate_int__o *klass; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  il2cpp_array_size_t v53; // w19
  __int64 v54; // x25
  _DWORD *v55; // x25
  int v56; // t1
  __int64 v57; // x8
  __int64 v59; // [xsp+10h] [xbp-80h]
  System_Int32_array *array; // [xsp+18h] [xbp-78h]
  PartyOrganizationUtility_o *v61; // [xsp+20h] [xbp-70h]

  if ( (byte_4B1626A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId, *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12, v13);
    sub_1BCA7E0(&EventPointGroupAddEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&int___TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v20, v21);
    sub_1BCA7E0(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v22, v23);
    byte_4B1626A = 1;
  }
  v24 = sub_1BCAA2C(
          EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&termId,
          groupIds);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !groupIds )
    goto LABEL_45;
  list = sub_1BCA888(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_45;
  v27 = *(unsigned int *)(list + 24);
  if ( (__int64)(v27 << 32) >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= v27 )
LABEL_46:
        sub_1BCAA44(list, v26);
      *(_DWORD *)(list + 32 + 4 * v28++) = 0;
    }
    while ( (int)v27 != v28 );
  }
  v59 = list;
  array = groupIds;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_45:
    sub_1BCAA3C(list, v26);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    v32 = (__int64 *)(v24 + 16);
    v61 = (PartyOrganizationUtility_o *)(v24 + 24);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_45;
      list = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v31,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v24 )
        goto LABEL_45;
      if ( list )
      {
        v39 = EventPointGroupAddEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventPointGroupAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventPointGroupAddEntity_TypeInfo )
            v41 = list;
          else
            v41 = 0LL;
        }
        else
        {
          v41 = 0LL;
        }
        *v32 = v41;
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == v39 )
            v42 = list;
          else
            v42 = 0LL;
        }
        else
        {
          v42 = 0LL;
        }
      }
      else
      {
        v42 = 0LL;
        *v32 = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), v42, v33, v34, v35, v36, v37, v38);
      v45 = (_DWORD *)*v32;
      if ( *v32 && v45[4] == eventId && v45[5] == termId && v45[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v61->klass;
        if ( !v61->klass )
        {
          klass = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v26, v43, v44);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v24,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            0LL);
          *(_QWORD *)(v24 + 24) = klass;
          sub_1BCA784(v61, (int64_t)klass, v47, v48, v49, v50, v51, v52);
        }
        list = System_Array__FindIndex_int_(
                 array,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_45;
          v53 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v32;
            if ( !*v32 )
              goto LABEL_45;
            if ( v53 >= *(_DWORD *)(v59 + 24) )
              goto LABEL_46;
            v54 = v59 + 4LL * v53;
            v56 = *(_DWORD *)(v54 + 32);
            v55 = (_DWORD *)(v54 + 32);
            if ( *(_DWORD *)(list + 28) >= v56 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v26);
              if ( (list & 1) != 0 )
              {
                v57 = *v32;
                if ( !*v32 )
                  goto LABEL_45;
                if ( v53 >= *(_DWORD *)(v59 + 24) )
                  goto LABEL_46;
                *v55 = *(_DWORD *)(v57 + 28);
                if ( v53 >= defaultImageIds->max_length )
                  goto LABEL_46;
                defaultImageIds->m_Items[v53 + 1] = *(_DWORD *)(v57 + 36);
              }
            }
          }
        }
      }
      if ( v30 == ++v31 )
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x20
  const MethodInfo *v34; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int64_t v36; // x2
  __int64 v37; // x3
  int v38; // w25
  int32_t v39; // w26
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  EventPointGroupAddMaster___c_c *v49; // x0
  System_Comparison_T__o *_9__3_0; // x21
  Il2CppObject *v51; // x22
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // w23
  int32_t v60; // w21
  System_Collections_ObjectModel_Collection_T__o *v61; // x22
  bool result; // w0

  if ( (byte_4B16269 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&termId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&EventPointGroupAddEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v29, v30);
    sub_1BCA7E0(&EventPointGroupAddMaster___c_TypeInfo, v31, v32);
    byte_4B16269 = 1;
  }
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&termId,
                                                       *(_QWORD *)&groupId);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_35;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v38 = (int)list;
    v39 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v39,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v34 = (const MethodInfo *)list;
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
        if ( !v33 )
          break;
        items = v33->fields._items;
        v46 = Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__;
        ++v33->fields._version;
        if ( !items )
          break;
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v34;
          sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v34, v36, v37, v40, v41, v42, v43);
        }
      }
      if ( v38 == ++v39 )
        goto LABEL_20;
    }
LABEL_35:
    sub_1BCAA3C(list, v34);
  }
LABEL_20:
  if ( !v33 )
    goto LABEL_35;
  if ( !v33->fields._size )
    return 0;
  v49 = EventPointGroupAddMaster___c_TypeInfo;
  if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo, v34);
    v49 = EventPointGroupAddMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v49->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49, v34);
      v49 = EventPointGroupAddMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventPointGroupAddEntity__TypeInfo, v34, v36, v37);
    System_Comparison_object____ctor(
      _9__3_0,
      v51,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      0LL);
    static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v53, v54, v55, v56, v57, v58);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  v59 = v33->fields._size;
  if ( v59 < 1 )
    return 0;
  v60 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_List_object___get_Item(
                                                               v33,
                                                               v60,
                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    if ( !list )
      goto LABEL_35;
    v61 = list;
    if ( EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v34) )
      break;
    if ( v59 == ++v60 )
      return 0;
  }
  result = 1;
  *imageId = HIDWORD(v61[1].monitor);
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

  if ( (byte_4B16267 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16267 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1626B & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointGroupAddMaster___c_TypeInfo, v1, v2);
    byte_4B1626B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventPointGroupAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventPointGroupAddMaster___c_TypeInfo->static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventPointGroupAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return tempEnt->fields.groupId == x;
}