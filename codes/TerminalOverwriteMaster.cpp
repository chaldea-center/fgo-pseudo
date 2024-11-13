void __fastcall TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_Dictionary_int__int__o *v22; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_Dictionary_int__int__o *v33; // x19
  struct TerminalOverwriteMaster_StaticFields *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B16D40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalOverwriteMaster_TypeInfo, v8, v9);
    byte_4B16D40 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v1,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    2,
    3,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    4,
    4,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    2,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalOverwriteMaster_TypeInfo->static_fields,
    (int64_t)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v19,
                                                               v20,
                                                               v21);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v22,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v22 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v22,
    2,
    7,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v22,
    4,
    8,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v22,
    7,
    6,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->overwriteEffectTypeTable,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v30,
                                                               v31,
                                                               v32);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v33 )
LABEL_7:
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_Dictionary_int__int___Add(
    v33,
    7,
    5,
    (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v34 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v34->overwriteSpriteTypeTable = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->overwriteSpriteTypeTable, (int64_t)v33, v35, v36, v37, v38, v39, v40);
}


void __fastcall TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__, method, v2);
    byte_4B16D38 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_4B16D36 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&type);
    byte_4B16D36 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_TerminalOverwriteEntity__o *__fastcall TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  TerminalOverwriteEntity_c *v42; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B16D39 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&TerminalOverwriteEntity_TypeInfo, v18, v19);
    byte_4B16D39 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v41 = v33;
    if ( !v33 )
      goto LABEL_35;
    v42 = TerminalOverwriteEntity_TypeInfo;
    methodPtr_low = LOBYTE(TerminalOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
      || *(TerminalOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != TerminalOverwriteEntity_TypeInfo )
    {
      sub_1BCACFC(v33);
LABEL_35:
      sub_1BCAA3C(v33, v34);
    }
    if ( *(_DWORD *)(v33 + 20) == type )
    {
      if ( !v20 )
        sub_1BCAA3C(v33, TerminalOverwriteEntity_TypeInfo);
      items = v20->fields._items;
      v45 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1BCAA3C(v33, v42);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_31;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_31:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B16D3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, table, *(_QWORD *)&type);
    this = (TerminalOverwriteMaster_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                          v6,
                                          v7);
    byte_4B16D3C = 1;
  }
  if ( !table )
    sub_1BCAA3C(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_4B16D37 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16D37 = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
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

  if ( (byte_4B16D3F & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type, EffectNameList);
    byte_4B16D3F = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct System_String_StaticFields *static_fields; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x20
  TerminalOverwriteMaster___c_c *v39; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v41; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  _BOOL8 v49; // x0
  __int64 v50; // x1
  bool v51; // w20
  Il2CppObject *current; // x27
  int32_t monitor_high; // w21
  int32_t monitor; // w23
  int64_t klass_low; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_String_o *klass; // x1
  int v63; // w19
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16D3A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type, overwriteId);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&string_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, v27, v28);
    sub_1BCA7E0(&TerminalOverwriteMaster___c_TypeInfo, v29, v30);
    byte_4B16D3A = 1;
  }
  memset(&v65, 0, sizeof(v65));
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  *overwriteId = static_fields->Empty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)overwriteId,
    (int64_t)Empty,
    (int64_t)overwriteId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v33);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v35);
  v38 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v39 = TerminalOverwriteMaster___c_TypeInfo;
  if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo, v35);
    v39 = TerminalOverwriteMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v39->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, v35);
      v39 = TerminalOverwriteMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_TerminalOverwriteEntity__TypeInfo, v35, v36, v37);
    System_Comparison_object____ctor(_9__7_0, v41, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__7_0__, 0LL);
    v42 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
    v42->__9__7_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v42->__9__7_0, (int64_t)_9__7_0, v43, v44, v45, v46, v47, v48);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v38,
    _9__7_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    v38,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    v51 = v49;
    if ( !v49 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_1BCAA3C(v49, v50);
    monitor = (int32_t)v65.fields._current[2].monitor;
    monitor_high = HIDWORD(v65.fields._current[2].monitor);
    klass_low = SLODWORD(v65.fields._current[3].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v50);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      klass = (System_String_o *)current[2].klass;
      *overwriteId = klass;
      sub_1BCA784((PartyOrganizationUtility_o *)overwriteId, (int64_t)klass, v56, v57, v58, v59, v60, v61);
      v63 = 6;
      goto LABEL_20;
    }
  }
  v63 = 7;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  return v51 && v63 == 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_List_object__o *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  TerminalOverwriteMaster___c_c *v46; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v48; // x22
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int v56; // w27
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *current; // x28
  int32_t monitor_high; // w20
  int32_t monitor; // w22
  int64_t klass_low; // x21
  __int64 v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_List_object__o *v70; // x0
  Il2CppObject *klass; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16D3B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_TerminalOverwriteEntity__TypeInfo, *(_QWORD *)&type, overwriteIds);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__, v29, v30);
    sub_1BCA7E0(&TerminalOverwriteMaster___c_TypeInfo, v31, v32);
    byte_4B16D3B = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       overwriteIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)overwriteIds, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v40);
  if ( !EntityList )
    goto LABEL_31;
  v45 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v46 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo, v42);
      v46 = TerminalOverwriteMaster___c_TypeInfo;
    }
    _9__8_0 = (System_Comparison_T__o *)v46->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46, v42);
        v46 = TerminalOverwriteMaster___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_TerminalOverwriteEntity__TypeInfo,
                                            v42,
                                            v43,
                                            v44);
      System_Comparison_object____ctor(
        _9__8_0,
        v48,
        Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__8_0__,
        0LL);
      static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v45,
      _9__8_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      v45,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v56 = -1;
    v78 = v77;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v57 )
        break;
      current = v78.fields._current;
      if ( !v78.fields._current )
        sub_1BCAA3C(v57, v58);
      monitor = (int32_t)v78.fields._current[2].monitor;
      monitor_high = HIDWORD(v78.fields._current[2].monitor);
      klass_low = SLODWORD(v78.fields._current[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v58);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
      {
        if ( v56 == -1 )
        {
          v56 = (int)current[1].monitor;
        }
        else if ( v56 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v70 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds )
          sub_1BCAA3C(0LL, v63);
        klass = (Il2CppObject *)current[2].klass;
        items = v70->fields._items;
        v73 = Method_System_Collections_Generic_List_string__Add__;
        ++v70->fields._version;
        if ( !items )
          sub_1BCAA3C(v70, klass);
        size = v70->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            klass,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &items->obj.klass + size;
          v70->fields._size = size + 1;
          v75[4] = (Il2CppClass *)klass;
          sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)klass, v64, v65, v66, v67, v68, v69);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_1BCAA3C(EntityList, v42);
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

  if ( (byte_4B16D3D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type, skinName);
    byte_4B16D3D = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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

  if ( (byte_4B16D3E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type, spriteName);
    byte_4B16D3E = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !TerminalOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16D41 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalOverwriteMaster___c_TypeInfo, v1, v2);
    byte_4B16D41 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalOverwriteMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall TerminalOverwriteMaster___c___TryGetOverwriteIds_b__8_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}