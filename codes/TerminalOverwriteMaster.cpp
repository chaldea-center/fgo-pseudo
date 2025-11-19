void TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct TerminalOverwriteMaster_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB6F9B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&TerminalOverwriteMaster_TypeInfo);
    byte_4CB6F9B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v1, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v6 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    2,
    7,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    4,
    8,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    7,
    6,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v6, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
LABEL_7:
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    5,
    (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v11 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v11->overwriteSpriteTypeTable = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->overwriteSpriteTypeTable, (int32_t)v10, v12, v13);
}


void TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F98 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_4CB6F98 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4CB6F99 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_4CB6F99 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_33FDB94 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
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
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4CB6F91 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    byte_4CB6F91 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
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
      v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C6BC60(0, v19);
    if ( *(_DWORD *)(v18 + 20) == type )
    {
      if ( !v5 )
        sub_1C6BC60(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C6BC60(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4CB6F94 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4CB6F94 = 1;
  }
  if ( !table )
    sub_1C6BC60(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_3449C24 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4CB6F9A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_4CB6F9A = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_4CB6F97 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalOverwriteMaster_TypeInfo);
    byte_4CB6F97 = 1;
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x21
  TerminalOverwriteMaster___c_c *v17; // x0
  System_Comparison_T__o *_9__4_0; // x22
  Il2CppObject *v19; // x23
  struct TerminalOverwriteMaster___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  _BOOL8 v23; // x0
  __int64 v24; // x1
  bool v25; // w21
  TerminalOverwriteEntity_o *current; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB6F92 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__);
    sub_1C6BA08(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4CB6F92 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)overwriteId,
    (int32_t)Empty,
    (int32_t)overwriteId,
    (const MethodInfo *)overwriteEntity);
  *overwriteEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)overwriteEntity, 0, v11, v12);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v13);
  if ( !EntityList )
    sub_1C6BC60(0, v15);
  v16 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v17 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v17 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v17->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v19, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, 0);
    v20 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v20->__9__4_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__4_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v20->__9__4_0, (int32_t)_9__4_0, v21, v22);
  }
  System_Collections_Generic_List_object___Sort_58729528(
    v16,
    _9__4_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v16,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v25 = v23;
    if ( !v23 )
      break;
    current = (TerminalOverwriteEntity_o *)v38.fields._current;
    if ( !v38.fields._current )
      sub_1C6BC60(v23, v24);
    monitor = (int32_t)v38.fields._current[2].monitor;
    monitor_high = HIDWORD(v38.fields._current[2].monitor);
    klass_low = SLODWORD(v38.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
    {
      v32 = current->fields.overwriteId;
      *overwriteId = v32;
      sub_1C6B9AC((CGThumbnailListItem_o *)overwriteId, (int32_t)v32, v30, v31);
      *overwriteEntity = current;
      sub_1C6B9AC((CGThumbnailListItem_o *)overwriteEntity, (int32_t)current, v33, v34);
      v35 = 6;
      goto LABEL_20;
    }
  }
  v35 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v25 && v35 == 6;
}


bool TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  TerminalOverwriteMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v16; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int v20; // w27
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB6F93 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__);
    sub_1C6BA08(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4CB6F93 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)overwriteIds, (int32_t)v7, v8, v9);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v10);
  if ( !EntityList )
    goto LABEL_31;
  v13 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v14 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v14 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v14->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v16, Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__, 0);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__5_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v18, v19);
    }
    System_Collections_Generic_List_object___Sort_58729528(
      v13,
      _9__5_0,
      (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      v13,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v20 = -1;
    v38 = v37;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v21 )
        break;
      current = v38.fields._current;
      if ( !v38.fields._current )
        sub_1C6BC60(v21, v22);
      monitor = (int32_t)v38.fields._current[2].monitor;
      monitor_high = HIDWORD(v38.fields._current[2].monitor);
      klass_low = SLODWORD(v38.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        if ( v20 == -1 )
        {
          v20 = (int)current[1].monitor;
        }
        else if ( v20 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v30 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1C6BC60(0, v27);
        klass = (Il2CppObject *)current[2].klass;
        items = v30->fields._items;
        v33 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          sub_1C6BC60(v30, klass);
        size = v30->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            klass,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v35[4] = (Il2CppClass *)klass;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)klass, v28, v29);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1C6BC60(EntityList, v12);
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

  if ( (byte_4CB6F95 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalOverwriteMaster_TypeInfo);
    byte_4CB6F95 = 1;
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

  if ( (byte_4CB6F96 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalOverwriteMaster_TypeInfo);
    byte_4CB6F96 = 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F9C & 1) == 0 )
  {
    sub_1C6BA08(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4CB6F9C = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t TerminalOverwriteMaster___c___TryGetOverwriteIds_b__5_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  return b->fields.priority - a->fields.priority;
}