void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__int__o *v12; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  struct TerminalOverwriteMaster_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FCE38 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1B640C8(&TerminalOverwriteMaster_TypeInfo, v5);
    byte_49FCE38 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                              System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                              v1,
                                                              v2);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v6 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    2,
    3,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    4,
    4,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    7,
    2,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v6, v8, v9);
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v10,
                                                               v11);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v12 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v12,
    2,
    7,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v12,
    4,
    8,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v12,
    7,
    6,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v12, v14, v15);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v16,
                                                               v17);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v18 )
LABEL_7:
    sub_1B64324(v7);
  System_Collections_Generic_Dictionary_int__int___Add(
    v18,
    7,
    5,
    (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v19 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v19->overwriteSpriteTypeTable = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->overwriteSpriteTypeTable, (int32_t)v18, v20, v21);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCE30 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_49FCE30 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_49FCE2E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FCE2E = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_49FCE31 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v10);
    sub_1B640C8(&TerminalOverwriteEntity_TypeInfo, v11);
    byte_49FCE31 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v26 = v23;
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(TerminalOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(TerminalOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != TerminalOverwriteEntity_TypeInfo )
    {
      sub_1B645E4(v23);
LABEL_35:
      sub_1B64324(v23);
    }
    if ( *(_DWORD *)(v23 + 20) == type )
    {
      if ( !v12 )
        sub_1B64324(v23);
      items = v12->fields._items;
      v29 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(v23);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v23,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), v26, v24, v25);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_31:
    v35 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v12;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_49FCE34 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    this = (TerminalOverwriteMaster_o *)sub_1B640C8(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6);
    byte_49FCE34 = 1;
  }
  if ( !table )
    sub_1B64324(this);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_49FCE2F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_49FCE2F = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_49FCE37 & 1) == 0 )
  {
    sub_1B640C8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49FCE37 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->monitor,
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
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  TerminalOverwriteMaster___c_c *v24; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v26; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL8 v30; // x0
  bool v31; // w20
  Il2CppObject *current; // x27
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *klass; // x1
  int v39; // w19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCE32 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&CondType_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v13);
    sub_1B640C8(&string_TypeInfo, v14);
    sub_1B640C8(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v15);
    sub_1B640C8(&TerminalOverwriteMaster___c_TypeInfo, v16);
    byte_49FCE32 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteId, (int32_t)Empty, (int32_t)overwriteId, (int32_t)method);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v19);
  if ( !EntityList )
    sub_1B64324(0LL);
  v23 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v24 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v24 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v24->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_TerminalOverwriteEntity__TypeInfo, v21, v22);
    System_Comparison_object____ctor(_9__7_0, v26, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, 0LL);
    v27 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v27->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->__9__7_0, (int32_t)_9__7_0, v28, v29);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v23,
    _9__7_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v23,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v31 = v30;
    if ( !v30 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_1B64324(v30);
    monitor = (int32_t)v41.fields._current[2].monitor;
    monitor_high = HIDWORD(v41.fields._current[2].monitor);
    klass_low = SLODWORD(v41.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteId, (int32_t)klass, v36, v37);
      v39 = 6;
      goto LABEL_20;
    }
  }
  v39 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
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
  int32_t v22; // w3
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  TerminalOverwriteMaster___c_c *v28; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v30; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w27
  _BOOL8 v35; // x0
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_List_object__o *v42; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FCE33 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&CondType_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v18);
    sub_1B640C8(&TerminalOverwriteMaster___c_TypeInfo, v19);
    byte_49FCE33 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       overwriteIds);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteIds, (int32_t)v20, v21, v22);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v23);
  if ( !EntityList )
    goto LABEL_31;
  v27 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v28 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v28 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__8_0 = (System_Comparison_T__o *)v28->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_TerminalOverwriteEntity__TypeInfo, v25, v26);
      System_Comparison_object____ctor(
        _9__8_0,
        v30,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v32, v33);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      v27,
      _9__8_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v27,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v34 = -1;
    v50 = v49;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v35 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_1B64324(v35);
      monitor = (int32_t)v50.fields._current[2].monitor;
      monitor_high = HIDWORD(v50.fields._current[2].monitor);
      klass_low = SLODWORD(v50.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
      {
        if ( v34 == -1 )
        {
          v34 = (int)current[1].monitor;
        }
        else if ( v34 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v42 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1B64324(0LL);
        klass = (Il2CppObject *)current[2].klass;
        items = v42->fields._items;
        v45 = Method_System_Collections_Generic_List_string__Add__;
        ++v42->fields._version;
        if ( !items )
          sub_1B64324(v42);
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v42,
            klass,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v42->fields._size = size + 1;
          v47[4] = (Il2CppClass *)klass;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)klass, v40, v41);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1B64324(EntityList);
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

  if ( (byte_49FCE35 & 1) == 0 )
  {
    sub_1B640C8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49FCE35 = 1;
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

  if ( (byte_49FCE36 & 1) == 0 )
  {
    sub_1B640C8(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_49FCE36 = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo);
    v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  }
  OverwriteType = TerminalOverwriteMaster__GetOverwriteType(
                    v7,
                    (System_Collections_Generic_Dictionary_int__int__o *)v7[2].fields._lookup->fields._buckets,
                    type,
                    method);
  return TerminalOverwriteMaster__TryGetOverwriteId(this, OverwriteType, spriteName, v9);
}


void __fastcall TerminalOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCE39 & 1) == 0 )
  {
    sub_1B640C8(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_49FCE39 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TerminalOverwriteMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}