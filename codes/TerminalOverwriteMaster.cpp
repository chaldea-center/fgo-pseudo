void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_int__int__o *v14; // x19
  struct TerminalOverwriteMaster_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49BBA64 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1B4CF90(&TerminalOverwriteMaster_TypeInfo, v4);
    byte_49BBA64 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    3,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    4,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    2,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v5, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    2,
    7,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    4,
    8,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    6,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v10, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
LABEL_7:
    sub_1B4D1EC(v6, v7);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    7,
    5,
    (const MethodInfo_31EE158 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v15 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v15->overwriteSpriteTypeTable = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)&v15->overwriteSpriteTypeTable, (int32_t)v14, v16, v17);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBA5C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_49BBA5C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TerminalOverwriteEntity_o *__fastcall TerminalOverwriteMaster__GetEntity(
        TerminalOverwriteMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBA5A & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49BBA5A = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31A2454 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49BBA5D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v10);
    byte_49BBA5D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      sub_1B4D1EC(0LL, v25);
    if ( *(_DWORD *)(v24 + 20) == type )
    {
      if ( !v11 )
        sub_1B4D1EC(v24, v25);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v11;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_49BBA60 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    this = (TerminalOverwriteMaster_o *)sub_1B4CF90(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6);
    byte_49BBA60 = 1;
  }
  if ( !table )
    sub_1B4D1EC(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_31EE344 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_31EE0BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetEntity(
        TerminalOverwriteMaster_o *this,
        TerminalOverwriteEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBA5B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_49BBA5B = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_49BBA63 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49BBA63 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x20
  TerminalOverwriteMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v25; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL8 v29; // x0
  __int64 v30; // x1
  bool v31; // w20
  Il2CppObject *current; // x27
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *klass; // x1
  int v39; // w19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BBA5E & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1B4CF90(&CondType_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v13);
    sub_1B4CF90(&string_TypeInfo, v14);
    sub_1B4CF90(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v15);
    sub_1B4CF90(&TerminalOverwriteMaster___c_TypeInfo, v16);
    byte_49BBA5E = 1;
  }
  memset(&v41, 0, sizeof(v41));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1B4CF34((CGThumbnailListItem_o *)overwriteId, (int32_t)Empty, (int32_t)overwriteId, method);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v19);
  if ( !EntityList )
    sub_1B4D1EC(0LL, v21);
  v22 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v23 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v23 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v23->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v25, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, 0LL);
    v26 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v26->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&v26->__9__7_0, (int32_t)_9__7_0, v27, v28);
  }
  System_Collections_Generic_List_object___Sort_56106144(
    v22,
    _9__7_0,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v22,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v31 = v29;
    if ( !v29 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B4D1EC(v29, v30);
    monitor = (int32_t)v41.fields._current[2].monitor;
    monitor_high = HIDWORD(v41.fields._current[2].monitor);
    klass_low = SLODWORD(v41.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_1B4CF34((CGThumbnailListItem_o *)overwriteId, (int32_t)klass, v36, v37);
      v39 = 6;
      goto LABEL_20;
    }
  }
  v39 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v31 && v39 == 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  TerminalOverwriteMaster___c_c *v27; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v29; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_List_object__o *v43; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BBA5F & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1B4CF90(&CondType_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B4CF90(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v18);
    sub_1B4CF90(&TerminalOverwriteMaster___c_TypeInfo, v19);
    byte_49BBA5F = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v20;
  sub_1B4CF34((CGThumbnailListItem_o *)overwriteIds, (int32_t)v20, v21, v22);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v23);
  if ( !EntityList )
    goto LABEL_31;
  v26 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v27 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v27 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__8_0 = (System_Comparison_T__o *)v27->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__8_0,
        v29,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v31, v32);
    }
    System_Collections_Generic_List_object___Sort_56106144(
      v26,
      _9__8_0,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      v26,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v33 = -1;
    v51 = v50;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v34 )
        break;
      current = v51.fields._current;
      if ( !v51.fields._current )
        sub_1B4D1EC(v34, v35);
      monitor = (int32_t)v51.fields._current[2].monitor;
      monitor_high = HIDWORD(v51.fields._current[2].monitor);
      klass_low = SLODWORD(v51.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
      {
        if ( v33 == -1 )
        {
          v33 = (int)current[1].monitor;
        }
        else if ( v33 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v43 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1B4D1EC(0LL, v40);
        klass = (Il2CppObject *)current[2].klass;
        items = v43->fields._items;
        v46 = Method_System_Collections_Generic_List_string__Add__;
        ++v43->fields._version;
        if ( !items )
          sub_1B4D1EC(v43, klass);
        size = v43->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            klass,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v43->fields._size = size + 1;
          v48[4] = (Il2CppClass *)klass;
          sub_1B4CF34((CGThumbnailListItem_o *)(v48 + 4), (int32_t)klass, v41, v42);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1B4D1EC(EntityList, v25);
  }
  return 0;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
        TerminalOverwriteMaster_o *this,
        System_String_o **bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return TerminalOverwriteMaster__TryGetOverwriteId(this, 1, bgmName, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_49BBA61 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49BBA61 = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
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
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, skinName, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_49BBA62 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49BBA62 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
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
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, spriteName, v9);
}


void __fastcall TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BBA65 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_49BBA65 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TerminalOverwriteMaster___c___ctor(TerminalOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteId_b__7_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}