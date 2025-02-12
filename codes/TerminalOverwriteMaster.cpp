void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_Dictionary_int__int__o *v14; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_Dictionary_int__int__o *v22; // x19
  struct TerminalOverwriteMaster_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BB5260 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v3);
    sub_1C13D24(&TerminalOverwriteMaster_TypeInfo, v4);
    byte_4BB5260 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v5 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    2,
    3,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    4,
    4,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v5,
    7,
    2,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v5;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TerminalOverwriteMaster_TypeInfo->static_fields,
    (int64_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v14 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    2,
    7,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    4,
    8,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v14,
    7,
    6,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v14;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->overwriteEffectTypeTable,
    (int64_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v22,
    (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v22 )
LABEL_7:
    sub_1C13F80(v6, v7);
  System_Collections_Generic_Dictionary_int__int___Add(
    v22,
    7,
    5,
    (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v23 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v23->overwriteSpriteTypeTable = v22;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->overwriteSpriteTypeTable, (int64_t)v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5258 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method);
    byte_4BB5258 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4BB5256 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4BB5256 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_323D0DC *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4BB5259 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__,
      *(_QWORD *)&type);
    sub_1C13D24(&System_IDisposable_TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, v6);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v10);
    byte_4BB5259 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v14);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v32 = v24;
    if ( !v24 )
      sub_1C13F80(0LL, v25);
    if ( *(_DWORD *)(v24 + 20) == type )
    {
      if ( !v11 )
        sub_1C13F80(v24, v25);
      items = v11->fields._items;
      v34 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C13F80(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v32;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 4), v32, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_29:
    v40 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v11;
}


int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4BB525C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table);
    this = (TerminalOverwriteMaster_o *)sub_1C13D24(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6);
    byte_4BB525C = 1;
  }
  if ( !table )
    sub_1C13F80(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_32899C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_328973C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4BB5257 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__, entity);
    byte_4BB5257 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_4BB525F & 1) == 0 )
  {
    sub_1C13D24(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4BB525F = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  TerminalOverwriteMaster___c_c *v27; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v29; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  _BOOL8 v37; // x0
  __int64 v38; // x1
  bool v39; // w20
  Il2CppObject *current; // x27
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *klass; // x1
  int v51; // w19
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB525A & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&CondType_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v17);
    sub_1C13D24(&string_TypeInfo, v18);
    sub_1C13D24(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v19);
    sub_1C13D24(&TerminalOverwriteMaster___c_TypeInfo, v20);
    byte_4BB525A = 1;
  }
  memset(&v53, 0, sizeof(v53));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)overwriteId,
    (int64_t)Empty,
    (int64_t)overwriteId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v23);
  if ( !EntityList )
    sub_1C13F80(0LL, v25);
  v26 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v27 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
    v27 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v27->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_TerminalOverwriteEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v29, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, 0LL);
    v30 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v30->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v30->__9__7_0, (int64_t)_9__7_0, v31, v32, v33, v34, v35, v36);
  }
  System_Collections_Generic_List_object___Sort_56814736(
    v26,
    _9__7_0,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v26,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v39 = v37;
    if ( !v37 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_1C13F80(v37, v38);
    monitor = (int32_t)v53.fields._current[2].monitor;
    monitor_high = HIDWORD(v53.fields._current[2].monitor);
    klass_low = SLODWORD(v53.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_1C13CC8((PartyOrganizationUtility_o *)overwriteId, (int64_t)klass, v44, v45, v46, v47, v48, v49);
      v51 = 6;
      goto LABEL_20;
    }
  }
  v51 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v39 && v51 == 6;
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_object__o *v30; // x20
  TerminalOverwriteMaster___c_c *v31; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v33; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int v41; // w27
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_List_object__o *v55; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x8
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB525B & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&CondType_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v16);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1C13D24(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v18);
    sub_1C13D24(&TerminalOverwriteMaster___c_TypeInfo, v19);
    byte_4BB525B = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v20;
  sub_1C13CC8((PartyOrganizationUtility_o *)overwriteIds, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v27);
  if ( !EntityList )
    goto LABEL_31;
  v30 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v31 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo);
      v31 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__8_0 = (System_Comparison_T__o *)v31->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__8_0,
        v33,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    System_Collections_Generic_List_object___Sort_56814736(
      v30,
      _9__8_0,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v62,
      v30,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v41 = -1;
    v63 = v62;
    while ( 1 )
    {
      v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v63,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v42 )
        break;
      current = v63.fields._current;
      if ( !v63.fields._current )
        sub_1C13F80(v42, v43);
      monitor = (int32_t)v63.fields._current[2].monitor;
      monitor_high = HIDWORD(v63.fields._current[2].monitor);
      klass_low = SLODWORD(v63.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
      {
        if ( v41 == -1 )
        {
          v41 = (int)current[1].monitor;
        }
        else if ( v41 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v55 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1C13F80(0LL, v48);
        klass = (Il2CppObject *)current[2].klass;
        items = v55->fields._items;
        v58 = Method_System_Collections_Generic_List_string__Add__;
        ++v55->fields._version;
        if ( !items )
          sub_1C13F80(v55, klass);
        size = v55->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v55,
            klass,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &items->obj.klass + size;
          v55->fields._size = size + 1;
          v60[4] = (Il2CppClass *)klass;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)klass, v49, v50, v51, v52, v53, v54);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v63,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1C13F80(EntityList, v29);
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

  if ( (byte_4BB525D & 1) == 0 )
  {
    sub_1C13D24(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4BB525D = 1;
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

  if ( (byte_4BB525E & 1) == 0 )
  {
    sub_1C13D24(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
    byte_4BB525E = 1;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB5261 & 1) == 0 )
  {
    sub_1C13D24(&TerminalOverwriteMaster___c_TypeInfo, v1);
    byte_4BB5261 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}