void TerminalOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct TerminalOverwriteMaster_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_int__int__o *v18; // x19
  struct TerminalOverwriteMaster_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_59393C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&TerminalOverwriteMaster_TypeInfo);
    byte_59393C0 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v1,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v1 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    2,
    3,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    4,
    4,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v1,
    7,
    2,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  TerminalOverwriteMaster_TypeInfo->static_fields->overwriteSkinTypeTable = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalOverwriteMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v10 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    2,
    7,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    4,
    8,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  System_Collections_Generic_Dictionary_int__int___Add(
    v10,
    7,
    6,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  static_fields = TerminalOverwriteMaster_TypeInfo->static_fields;
  static_fields->overwriteEffectTypeTable = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->overwriteEffectTypeTable,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v18 )
LABEL_7:
    sub_21FFECC(v2, v3);
  System_Collections_Generic_Dictionary_int__int___Add(
    v18,
    7,
    5,
    (const MethodInfo_3F5F478 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  v19 = TerminalOverwriteMaster_TypeInfo->static_fields;
  v19->overwriteSpriteTypeTable = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->overwriteSpriteTypeTable,
    (int32_t)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void TerminalOverwriteMaster___ctor(TerminalOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
    byte_59393BD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string___ctor__);
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

  if ( (byte_59393BE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
    byte_59393BE = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (TerminalOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__GetEntity__);
}


System_Collections_Generic_List_TerminalOverwriteEntity__o *TerminalOverwriteMaster__GetEntityList(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_59393B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
    byte_59393B6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_TerminalOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_TerminalOverwriteEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_21FFECC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_TerminalOverwriteEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v21 + 20) == type )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_TerminalOverwriteEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return (System_Collections_Generic_List_TerminalOverwriteEntity__o *)v5;
}


int32_t TerminalOverwriteMaster__GetOverwriteType(
        TerminalOverwriteMaster_o *this,
        System_Collections_Generic_Dictionary_int__int__o *table,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_59393B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    this = (TerminalOverwriteMaster_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_59393B9 = 1;
  }
  if ( !table )
    sub_21FFECC(this, table);
  if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
         table,
         type,
         (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
  {
    return System_Collections_Generic_Dictionary_int__int___get_Item(
             table,
             type,
             (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
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

  if ( (byte_59393BF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
    byte_59393BF = 1;
  }
  PK = (Il2CppObject *)TerminalOverwriteEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_TerminalOverwriteMaster__TerminalOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool TerminalOverwriteMaster__TryGetOverwriteEffectNames(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **EffectNameList,
        const MethodInfo *method)
{
  TerminalOverwriteMaster_o *v7; // x0
  int32_t OverwriteType; // w1
  const MethodInfo *v9; // x3

  if ( (byte_59393BC & 1) == 0 )
  {
    sub_21FFC50(&TerminalOverwriteMaster_TypeInfo);
    byte_59393BC = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  if ( !*(&TerminalOverwriteMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o **v12; // x8
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x21
  TerminalOverwriteMaster___c_c *v24; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x22
  Il2CppObject *v27; // x23
  struct TerminalOverwriteMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  _BOOL8 v35; // x0
  __int64 v36; // x1
  bool v37; // w21
  Il2CppObject *current; // x22
  int64_t v39; // x25
  int32_t v40; // w23
  int32_t v41; // w24
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_59393B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__);
    sub_21FFC50(&TerminalOverwriteMaster___c_TypeInfo);
    byte_59393B7 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v12 = *(System_String_o ***)(qword_594C0B8 + 184);
  v13 = *v12;
  *overwriteId = *v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)overwriteId,
    (int32_t)v13,
    (System_String_o *)overwriteId,
    (System_String_o *)overwriteEntity,
    (int32_t)method,
    v5,
    v6,
    v7);
  *overwriteEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteEntity, 0, v14, v15, v16, v17, v18, v19);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v20);
  if ( !EntityList )
    sub_21FFECC(0, v22);
  v23 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v24 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !*(&TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo, v22);
      v24 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v27, Method_TerminalOverwriteMaster___c__TryGetOverwriteId_b__4_0__, 0);
      v28 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v28->__9__4_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__4_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__4_0, (int32_t)_9__4_0, v29, v30, v31, v32, v33, v34);
    }
    System_Collections_Generic_List_object___Sort_71636404(
      v23,
      _9__4_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      v23,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      v37 = v35;
      if ( !v35 )
        break;
      current = v56.fields._current;
      if ( !v56.fields._current )
        sub_21FFECC(v35, v36);
      v39 = *(_DWORD *)((char *)&v56.fields._current->klass + (unsigned __int64)&dword_30);
      v40 = *(_DWORD *)((char *)&v56.fields._current->klass + (unsigned __int64)&qword_28);
      v41 = *(_DWORD *)((char *)&v56.fields._current->klass + (unsigned __int64)&qword_28 + 4);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v36);
      if ( CondType__IsOpen(v40, v41, v39, 0, 0, 0) )
      {
        v48 = *(System_String_o **)((char *)&qword_20 + (_QWORD)current);
        *overwriteId = v48;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteId, (int32_t)v48, v42, v43, v44, v45, v46, v47);
        *overwriteEntity = (TerminalOverwriteEntity_o *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteEntity, (int32_t)current, v49, v50, v51, v52, v53, v54);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
  }
  else
  {
    return 0;
  }
  return v37;
}


bool TerminalOverwriteMaster__TryGetOverwriteIds(
        TerminalOverwriteMaster_o *this,
        int32_t type,
        System_Collections_Generic_List_string__o **overwriteIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_TerminalOverwriteEntity__o *EntityList; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  TerminalOverwriteMaster___c_c *v18; // x0
  struct TerminalOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x21
  Il2CppObject *v21; // x22
  struct TerminalOverwriteMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w27
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x28
  int64_t klass_low; // x22
  int32_t monitor; // w20
  int32_t monitor_high; // w21
  Il2CppObject *klass; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59393B8 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_TerminalOverwriteEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TerminalOverwriteEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__);
    sub_21FFC50(&TerminalOverwriteMaster___c_TypeInfo);
    byte_59393B8 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *overwriteIds = (System_Collections_Generic_List_string__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteIds, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  EntityList = TerminalOverwriteMaster__GetEntityList(this, type, v14);
  if ( !EntityList )
    goto LABEL_31;
  v17 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( EntityList->fields._size )
  {
    v18 = TerminalOverwriteMaster___c_TypeInfo;
    if ( !*(&TerminalOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster___c_TypeInfo, v16);
      v18 = TerminalOverwriteMaster___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v16);
        static_fields = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_TerminalOverwriteEntity__TypeInfo);
      System_Comparison_object____ctor(_9__5_0, v21, Method_TerminalOverwriteMaster___c__TryGetOverwriteIds_b__5_0__, 0);
      v22 = TerminalOverwriteMaster___c_TypeInfo->static_fields;
      v22->__9__5_0 = (struct System_Comparison_TerminalOverwriteEntity__o *)_9__5_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__5_0, (int32_t)_9__5_0, v23, v24, v25, v26, v27, v28);
    }
    System_Collections_Generic_List_object___Sort_71636404(
      v17,
      _9__5_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__Sort__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      v17,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TerminalOverwriteEntity__GetEnumerator__);
    v29 = -1;
    v50 = v49;
    v49.fields._list = 0;
    *(_QWORD *)&v49.fields._index = &v50;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__MoveNext__);
      if ( !v30 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_21FFECC(v30, v31);
      klass_low = SLODWORD(v50.fields._current[3].klass);
      monitor = (int32_t)v50.fields._current[2].monitor;
      monitor_high = HIDWORD(v50.fields._current[2].monitor);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31);
      if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
      {
        if ( v29 == -1 )
        {
          v29 = (int)current[1].monitor;
        }
        else if ( v29 != LODWORD(current[1].monitor) )
        {
          break;
        }
        v43 = (System_Collections_Generic_List_object__o *)*overwriteIds;
        if ( !*overwriteIds
          || (items = v43->fields._items,
              klass = (Il2CppObject *)current[2].klass,
              v45 = Method_System_Collections_Generic_List_string__Add__,
              ++v43->fields._version,
              !items) )
        {
          sub_21FFECC(v43, klass);
        }
        size = v43->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            klass,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v43->fields._size = size + 1;
          v47[4] = (Il2CppClass *)klass;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)klass, v37, v38, v39, v40, v41, v42);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TerminalOverwriteEntity__Dispose__);
    if ( *overwriteIds )
      return (*overwriteIds)->fields._size > 0;
LABEL_31:
    sub_21FFECC(EntityList, v16);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59393BA & 1) == 0 )
  {
    sub_21FFC50(&TerminalOverwriteMaster_TypeInfo);
    byte_59393BA = 1;
  }
  v7 = TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0;
  if ( !*(&TerminalOverwriteMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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

  if ( (byte_59393BB & 1) == 0 )
  {
    sub_21FFC50(&TerminalOverwriteMaster_TypeInfo);
    byte_59393BB = 1;
  }
  v7 = (TerminalOverwriteMaster_o *)TerminalOverwriteMaster_TypeInfo;
  overwriteEntity = 0;
  if ( !*(&TerminalOverwriteMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalOverwriteMaster_TypeInfo, *(_QWORD *)&type);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59393C1 & 1) == 0 )
  {
    sub_21FFC50(&TerminalOverwriteMaster___c_TypeInfo);
    byte_59393C1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TerminalOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TerminalOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct TerminalOverwriteMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TerminalOverwriteMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t TerminalOverwriteMaster___c___TryGetOverwriteIds_b__5_0(
        TerminalOverwriteMaster___c_o *this,
        TerminalOverwriteEntity_o *a,
        TerminalOverwriteEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}