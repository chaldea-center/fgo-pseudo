void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__int__o *v6; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct TerminalOverwriteMaster_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5BC8B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&TerminalOverwriteMaster_TypeInfo);
    byte_4A5BC8B = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields, (int32_t)v1, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v6 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    2,
    7,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    4,
    8,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v6,
    7,
    6,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->overwriteEffectTypeTable, (int32_t)v6, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
LABEL_7:
    sub_1B8880C(v2, v3);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    5,
    (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v11 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v11->overwriteSpriteTypeTable = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->overwriteSpriteTypeTable, (int32_t)v10, v12, v13);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC83 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_4A5BC83 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4A5BC81 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_4A5BC81 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  TerminalOverwriteEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5BC84 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    sub_1B885B0(&TerminalOverwriteEntity_TypeInfo);
    byte_4A5BC84 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_35;
    v23 = TerminalOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(TerminalOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(TerminalOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != TerminalOverwriteEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 20) == type )
    {
      if ( !v5 )
        sub_1B8880C(v18, TerminalOverwriteEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4A5BC87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4A5BC87 = 1;
  }
  if ( !table )
    sub_1B8880C(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4A5BC82 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_4A5BC82 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_4A5BC8A & 1) == 0 )
  {
    sub_1B885B0(&TerminalOverwriteMaster_TypeInfo);
    byte_4A5BC8A = 1;
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteId(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **overwriteId,
        const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  TerminalOverwriteMaster___c_c *v13; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v15; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool v21; // w20
  Il2CppObject *current; // x27
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *klass; // x1
  int v29; // w19
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BC85 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__);
    sub_1B885B0(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4A5BC85 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteId, (int32_t)Empty, (int32_t)overwriteId, (int32_t)method);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v9);
  if ( !EntityList )
    sub_1B8880C(0LL, v11);
  v12 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v13 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v13 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v13->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v15, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, 0LL);
    v16 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v16->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__7_0, (int32_t)_9__7_0, v17, v18);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v12,
    _9__7_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v12,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v21 = v19;
    if ( !v19 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1B8880C(v19, v20);
    monitor = (int32_t)v31.fields._current[2].monitor;
    monitor_high = HIDWORD(v31.fields._current[2].monitor);
    klass_low = SLODWORD(v31.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteId, (int32_t)klass, v26, v27);
      v29 = 6;
      goto LABEL_20;
    }
  }
  v29 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v21 && v29 == 6;
}


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  TerminalOverwriteMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v16; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int v20; // w27
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5BC86 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__);
    sub_1B885B0(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4A5BC86 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteIds, (int32_t)v7, v8, v9);
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
    _9__8_0 = (System_Comparison_T__o *)v14->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__8_0,
        v16,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v13,
      _9__8_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      v13,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v20 = -1;
    v38 = v37;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v21 )
        break;
      current = v38.fields._current;
      if ( !v38.fields._current )
        sub_1B8880C(v21, v22);
      monitor = (int32_t)v38.fields._current[2].monitor;
      monitor_high = HIDWORD(v38.fields._current[2].monitor);
      klass_low = SLODWORD(v38.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
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
          sub_1B8880C(0LL, v27);
        klass = (Il2CppObject *)current[2].klass;
        items = v30->fields._items;
        v33 = Method_System_Collections_Generic_List_string__Add__;
        ++v30->fields._version;
        if ( !items )
          sub_1B8880C(v30, klass);
        size = v30->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            klass,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v35[4] = (Il2CppClass *)klass;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)klass, v28, v29);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1B8880C(EntityList, v12);
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSkinName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **skinName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_c *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_4A5BC88 & 1) == 0 )
  {
    sub_1B885B0(&TerminalOverwriteMaster_TypeInfo);
    byte_4A5BC88 = 1;
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


bool __fastcall TerminalOverwriteMaster__TryGetOverwriteSpriteName(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_String_o **spriteName,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_4A5BC89 & 1) == 0 )
  {
    sub_1B885B0(&TerminalOverwriteMaster_TypeInfo);
    byte_4A5BC89 = 1;
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BC8C & 1) == 0 )
  {
    sub_1B885B0(&TerminalOverwriteMaster___c_TypeInfo);
    byte_4A5BC8C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}