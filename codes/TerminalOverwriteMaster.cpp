void TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  struct TerminalOverwriteMaster_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2D558 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&TerminalOverwriteMaster_TypeInfo);
    byte_4D2D558 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    2,
    7,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    4,
    8,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    6,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->overwriteEffectTypeTable,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v18 )
LABEL_7:
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_int__int___Add(
    v18,
    7,
    5,
    (const MethodInfo_34ABE1C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v19 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v19->overwriteSpriteTypeTable = v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->overwriteSpriteTypeTable, (int32_t)v18, v20, v21, v22, v23, v24, v25);
}


void TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D555 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_4D2D555 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TerminalOverwriteEntity_o *TerminalOverwriteMaster__GetEntity(
        TerminalOverwriteMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D556 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_4D2D556 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_345FF78 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4D2D54E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    byte_4D2D54E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C942F0(0, v19);
    if ( *(_DWORD *)(v18 + 20) == type )
    {
      if ( !v5 )
        sub_1C942F0(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C942F0(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4D2D551 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4D2D551 = 1;
  }
  if ( !table )
    sub_1C942F0(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_34AC008 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool TerminalOverwriteMaster__TryGetEntity(
        TerminalOverwriteMaster_o *this,
        TerminalOverwriteEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D557 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_4D2D557 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


bool TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_4D2D554 & 1) == 0 )
  {
    sub_1C94098(&TerminalOverwriteMaster_TypeInfo);
    byte_4D2D554 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields.list->monitor,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteIds(this, OverwriteType, EffectNameList, v9);
}


bool TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
        TerminalOverwriteEntity_o **overwriteEntity,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x21
  TerminalOverwriteMaster___c_c *v24; // x0
  System_Comparison_T__o *_9__4_0; // x22
  Il2CppObject *v26; // x23
  struct TerminalOverwriteMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _BOOL8 v34; // x0
  __int64 v35; // x1
  bool v36; // w21
  TerminalOverwriteEntity_o *current; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int v54; // w19
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2D54F & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__);
    sub_1C94098(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4D2D54F = 1;
  }
  memset(&v57, 0, sizeof(v57));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)overwriteId,
    (int32_t)Empty,
    (int32_t)overwriteId,
    (int32_t)overwriteEntity,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  *overwriteEntity = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)overwriteEntity, 0, v14, v15, v16, v17, v18, v19);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v20);
  if ( !EntityList )
    sub_1C942F0(0, v22);
  v23 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v24 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v24 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v24->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v26, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, 0);
    v27 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v27->__9__4_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__4_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->__9__4_0, (int32_t)_9__4_0, v28, v29, v30, v31, v32, v33);
  }
  System_Collections_Generic_List_object___Sort_59164920(
    v23,
    _9__4_0,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v23,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  v57 = v56;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v36 = v34;
    if ( !v34 )
      break;
    current = (TerminalOverwriteEntity_o *)v57.fields._current;
    if ( !v57.fields._current )
      sub_1C942F0(v34, v35);
    monitor = (int32_t)v57.fields._current[2].monitor;
    monitor_high = HIDWORD(v57.fields._current[2].monitor);
    klass_low = SLODWORD(v57.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
    {
      v47 = current->fields.overwriteId;
      *overwriteId = v47;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)overwriteId, (int32_t)v47, v41, v42, v43, v44, v45, v46);
      *overwriteEntity = current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)overwriteEntity, (int32_t)current, v48, v49, v50, v51, v52, v53);
      v54 = 6;
      goto LABEL_20;
    }
  }
  v54 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v36 && v54 == 6;
}


bool TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  TerminalOverwriteMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w27
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_List_object__o *v42; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2D550 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__);
    sub_1C94098(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4D2D550 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)overwriteIds, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v14);
  if ( !EntityList )
    goto LABEL_31;
  v17 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v18 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v18 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v18->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v20, Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__, 0);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__5_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
        (int32_t)_9__5_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    System_Collections_Generic_List_object___Sort_59164920(
      v17,
      _9__5_0,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v17,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v28 = -1;
    v50 = v49;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v29 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_1C942F0(v29, v30);
      monitor = (int32_t)v50.fields._current[2].monitor;
      monitor_high = HIDWORD(v50.fields._current[2].monitor);
      klass_low = SLODWORD(v50.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        if ( v28 == -1 )
        {
          v28 = (int)current[1].monitor;
        }
        else if ( v28 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v42 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1C942F0(0, v35);
        klass = (Il2CppObject *)current[2].klass;
        items = v42->fields._items;
        v45 = Method_System_Collections_Generic_List_string__Add__;
        ++v42->fields._version;
        if ( !items )
          sub_1C942F0(v42, klass);
        size = v42->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            klass,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          v47[4] = (Il2CppClass *)klass;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v47 + 4), (int32_t)klass, v36, v37, v38, v39, v40, v41);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1C942F0(EntityList, v16);
  }
  return 0;
}


bool TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
        TerminalOverwriteMaster_o *this,
        System_String_o **bgmName,
        TerminalOverwriteEntity_o **entity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return TerminalOverwriteMaster__TryGetOverwriteId(this, 1, bgmName, entity, v4);
}


bool TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w0
  const MethodInfo *v9; // x4
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D552 & 1) == 0 )
  {
    sub_1C94098(&TerminalOverwriteMaster_TypeInfo);
    byte_4D2D552 = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    (TerminalOverwriteMaster_o *)v7,
                    v7->static_fields->overwriteSkinTypeTable,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, skinName, &overwriteEntity, v9);
}


bool TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w0
  const MethodInfo *v9; // x4
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D553 & 1) == 0 )
  {
    sub_1C94098(&TerminalOverwriteMaster_TypeInfo);
    byte_4D2D553 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields.list->fields.items,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, spriteName, &overwriteEntity, v9);
}


void TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D559 & 1) == 0 )
  {
    sub_1C94098(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4D2D559 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TerminalOverwriteMaster___c___ctor(TerminalOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TerminalOverwriteMaster___c___TryGetOverwriteId_b__4_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t TerminalOverwriteMaster___c___TryGetOverwriteIds_b__5_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}