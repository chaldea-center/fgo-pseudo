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

  if ( (byte_4B1D186 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1BCAFF8(&TerminalOverwriteMaster_TypeInfo, v4);
    byte_4B1D186 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    3,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    4,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    2,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v5, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    2,
    7,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    4,
    8,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    6,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v10, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
LABEL_7:
    sub_1BCB254(v6, v7);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    7,
    5,
    (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v15 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v15->overwriteSpriteTypeTable = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15->overwriteSpriteTypeTable, (int32_t)v14, v16, v17);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D183 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_4B1D183 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    469,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4B1D184 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B1D184 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32CC8B8 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
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

  if ( (byte_4B1D17C & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v10);
    byte_4B1D17C = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v14);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      sub_1BCB254(0LL, v25);
    if ( *(_DWORD *)(v24 + 20) == type )
    {
      if ( !v11 )
        sub_1BCB254(v24, v25);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BCB254(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
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
    v36 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B1D17F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    this = (TerminalOverwriteMaster_o *)sub_1BCAFF8(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6);
    byte_4B1D17F = 1;
  }
  if ( !table )
    sub_1BCB254(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4B1D185 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_4B1D185 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_4B1D182 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4B1D182 = 1;
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
        TerminalOverwriteEntity_o **overwriteEntity,
        const MethodInfo *method)
{
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x21
  TerminalOverwriteMaster___c_c *v27; // x0
  System_Comparison_T__o *_9__4_0; // x22
  Il2CppObject *v29; // x23
  struct TerminalOverwriteMaster___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL8 v33; // x0
  __int64 v34; // x1
  bool v35; // w21
  TerminalOverwriteEntity_o *current; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int v45; // w19
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1D17D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&CondType_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v15);
    sub_1BCAFF8(&string_TypeInfo, v16);
    sub_1BCAFF8(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, v17);
    sub_1BCAFF8(&TerminalOverwriteMaster___c_TypeInfo, v18);
    byte_4B1D17D = 1;
  }
  memset(&v48, 0, sizeof(v48));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)overwriteId,
    (int32_t)Empty,
    (int32_t)overwriteId,
    (const MethodInfo *)overwriteEntity);
  *overwriteEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)overwriteEntity, 0, v21, v22);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v23);
  if ( !EntityList )
    sub_1BCB254(0LL, v25);
  v26 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v27 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v27 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v27->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v29, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, 0LL);
    v30 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v30->__9__4_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__4_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v30->__9__4_0, (int32_t)_9__4_0, v31, v32);
  }
  System_Collections_Generic_List_object___Sort_57390740(
    v26,
    _9__4_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v26,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v35 = v33;
    if ( !v33 )
      break;
    current = (TerminalOverwriteEntity_o *)v48.fields._current;
    if ( !v48.fields._current )
      sub_1BCB254(v33, v34);
    monitor = (int32_t)v48.fields._current[2].monitor;
    monitor_high = HIDWORD(v48.fields._current[2].monitor);
    klass_low = SLODWORD(v48.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      v42 = current->fields.overwriteId;
      *overwriteId = v42;
      sub_1BCAF9C((CGThumbnailListItem_o *)overwriteId, (int32_t)v42, v40, v41);
      *overwriteEntity = current;
      sub_1BCAF9C((CGThumbnailListItem_o *)overwriteEntity, (int32_t)current, v43, v44);
      v45 = 6;
      goto LABEL_20;
    }
  }
  v45 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v35 && v45 == 6;
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
  System_Comparison_T__o *_9__5_0; // x21
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

  if ( (byte_4B1D17E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&CondType_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1BCAFF8(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__, v18);
    sub_1BCAFF8(&TerminalOverwriteMaster___c_TypeInfo, v19);
    byte_4B1D17E = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)overwriteIds, (int32_t)v20, v21, v22);
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
    _9__5_0 = (System_Comparison_T__o *)v27->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__5_0,
        v29,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__5_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v31, v32);
    }
    System_Collections_Generic_List_object___Sort_57390740(
      v26,
      _9__5_0,
      (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      v26,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v33 = -1;
    v51 = v50;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v34 )
        break;
      current = v51.fields._current;
      if ( !v51.fields._current )
        sub_1BCB254(v34, v35);
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
          sub_1BCB254(0LL, v40);
        klass = (Il2CppObject *)current[2].klass;
        items = v43->fields._items;
        v46 = Method_System_Collections_Generic_List_string__Add__;
        ++v43->fields._version;
        if ( !items )
          sub_1BCB254(v43, klass);
        size = v43->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            klass,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v43->fields._size = size + 1;
          v48[4] = (Il2CppClass *)klass;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)klass, v41, v42);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1BCB254(EntityList, v25);
  }
  return 0;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteMainBgmName(
        TerminalOverwriteMaster_o *this,
        System_String_o **bgmName,
        TerminalOverwriteEntity_o **entity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return TerminalOverwriteMaster__TryGetOverwriteId(this, 1, bgmName, entity, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w0
  const MethodInfo *v9; // x4
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1D180 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4B1D180 = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0LL;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w0
  const MethodInfo *v9; // x4
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1D181 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4B1D181 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0LL;
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


void __fastcall TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1D187 & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_4B1D187 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TerminalOverwriteMaster___c___ctor(TerminalOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteId_b__4_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__5_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}