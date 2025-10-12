void TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__int__o *v9; // x19
  struct TerminalOverwriteMaster_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3867D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&TerminalOverwriteMaster_TypeInfo);
    byte_4C3867D = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v1, v3, v4);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    7,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    8,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    6,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v5, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v9 )
LABEL_7:
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_int__int___Add(
    v9,
    7,
    5,
    (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v10 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v10->overwriteSpriteTypeTable = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->overwriteSpriteTypeTable, (int32_t)v9, v11, v12);
}


void TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3867A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_4C3867A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4C3867B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_4C3867B = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_339B2F0 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  struct System_Object_array *items; // x9
  _QWORD *v21; // x10
  __int64 size; // x11
  Il2CppClass **v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C38673 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    byte_4C38673 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v19 = v16;
    if ( !v16 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v16 + 20) == type )
    {
      if ( !v5 )
        sub_1C32E7C(v16);
      items = v5->fields._items;
      v21 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C32E7C(v16);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v16,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), v19, v17, v18);
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_29:
    v27 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4C38676 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C38676 = 1;
  }
  if ( !table )
    sub_1C32E7C(this);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4C3867C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_4C3867C = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_4C38679 & 1) == 0 )
  {
    sub_1C32C20(&TerminalOverwriteMaster_TypeInfo);
    byte_4C38679 = 1;
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
  System_Collections_Generic_List_object__o *v15; // x21
  TerminalOverwriteMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__4_0; // x22
  Il2CppObject *v18; // x23
  struct TerminalOverwriteMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _BOOL8 v22; // x0
  bool v23; // w21
  TerminalOverwriteEntity_o *current; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w19
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C38674 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__);
    sub_1C32C20(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4C38674 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)overwriteId,
    (int32_t)Empty,
    (int32_t)overwriteId,
    (const MethodInfo *)overwriteEntity);
  *overwriteEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)overwriteEntity, 0, v11, v12);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v13);
  if ( !EntityList )
    sub_1C32E7C(0);
  v15 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v16 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v16 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v16->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v18, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, 0);
    v19 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v19->__9__4_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__4_0, (int32_t)_9__4_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v15,
    _9__4_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v15,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v23 = v22;
    if ( !v22 )
      break;
    current = (TerminalOverwriteEntity_o *)v36.fields._current;
    if ( !v36.fields._current )
      sub_1C32E7C(v22);
    monitor = (int32_t)v36.fields._current[2].monitor;
    monitor_high = HIDWORD(v36.fields._current[2].monitor);
    klass_low = SLODWORD(v36.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
    {
      v30 = current->fields.overwriteId;
      *overwriteId = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)overwriteId, (int32_t)v30, v28, v29);
      *overwriteEntity = current;
      sub_1C32BC4((CGThumbnailListItem_o *)overwriteEntity, (int32_t)current, v31, v32);
      v33 = 6;
      goto LABEL_20;
    }
  }
  v33 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v23 && v33 == 6;
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
  System_Collections_Generic_List_object__o *v12; // x20
  TerminalOverwriteMaster___c_c *v13; // x0
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v15; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int v19; // w27
  _BOOL8 v20; // x0
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C38675 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__);
    sub_1C32C20(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4C38675 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)overwriteIds, (int32_t)v7, v8, v9);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v10);
  if ( !EntityList )
    goto LABEL_31;
  v12 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v13 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v13 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__5_0 = (System_Comparison_T__o *)v13->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v15, Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__, 0);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__5_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v17, v18);
    }
    System_Collections_Generic_List_object___Sort_58303104(
      v12,
      _9__5_0,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v12,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v19 = -1;
    v35 = v34;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v20 )
        break;
      current = v35.fields._current;
      if ( !v35.fields._current )
        sub_1C32E7C(v20);
      monitor = (int32_t)v35.fields._current[2].monitor;
      monitor_high = HIDWORD(v35.fields._current[2].monitor);
      klass_low = SLODWORD(v35.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        if ( v19 == -1 )
        {
          v19 = (int)current[1].monitor;
        }
        else if ( v19 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v27 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1C32E7C(0);
        klass = (Il2CppObject *)current[2].klass;
        items = v27->fields._items;
        v30 = Method_System_Collections_Generic_List_string__Add__;
        ++v27->fields._version;
        if ( !items )
          sub_1C32E7C(v27);
        size = v27->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            klass,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v32[4] = (Il2CppClass *)klass;
          sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)klass, v25, v26);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1C32E7C(EntityList);
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

  if ( (byte_4C38677 & 1) == 0 )
  {
    sub_1C32C20(&TerminalOverwriteMaster_TypeInfo);
    byte_4C38677 = 1;
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

  if ( (byte_4C38678 & 1) == 0 )
  {
    sub_1C32C20(&TerminalOverwriteMaster_TypeInfo);
    byte_4C38678 = 1;
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

  if ( (byte_4C3867E & 1) == 0 )
  {
    sub_1C32C20(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4C3867E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t TerminalOverwriteMaster___c___TryGetOverwriteIds_b__5_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.priority - a->fields.priority;
}