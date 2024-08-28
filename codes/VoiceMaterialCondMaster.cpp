void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A209DF & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__, method);
    byte_4A209DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x24
  __int64 methodPtr_low; // x9
  void *monitor; // x25
  Il2CppClass *v35; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A209E0 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&servantId);
    sub_1B715CC(&System_IDisposable_TypeInfo, v8);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v13);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1B715CC(&VoiceMaterialCondEntity_TypeInfo, v16);
    byte_4A209E0 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B71828(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                            Enumerator,
                            *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (VoiceMaterialCondEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_1B71AE8(v30);
LABEL_41:
      sub_1B71828(v30, v31);
    }
    v35 = v30[1].klass;
    monitor = v30[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v35;
    *(_QWORD *)&v52.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v52, 0LL) == servantId
      && LODWORD(v32[2].klass) == voicePrefix )
    {
      v36 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v32[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v36, v37, 0LL);
      if ( v38 )
      {
        if ( !v17 )
          sub_1B71828(v38, v39);
        items = v17->fields._items;
        v43 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1B71828(v38, v39);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            v32,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v32;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v32, v40, v41);
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_37;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_37:
    v49 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall VoiceMaterialCondMaster__GetPlayableLimitCountList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x19
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A209E1 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      *(_QWORD *)&servantId);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor___75798152, v13);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4A209E1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v15 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v16);
  if ( !EntityList )
    sub_1B71828(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    EntityList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v24.fields._current )
      sub_1B71828(v19, v20);
    if ( LODWORD(v24.fields._current[3].monitor) == 103 )
    {
      klass = v24.fields._current[4].klass;
      v22 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_55257872(
        v22,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_34B2B10 *)Method_System_Collections_Generic_List_int___ctor___75798152);
      goto LABEL_10;
    }
  }
  v22 = v15;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  return v22;
}


int32_t __fastcall VoiceMaterialCondMaster__GetVoicePrefix(
        VoiceMaterialCondMaster_o *this,
        System_String_o **voiceId,
        const MethodInfo *method)
{
  void *v3; // x0
  void *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x1
  int32_t v11; // w21

  v3 = *voiceId;
  if ( !*voiceId || (v3 = System_String__Split((System_String_o *)v3, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1B71828(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0LL);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1B71830(v6, v7);
  v10 = (System_String_o *)*((_QWORD *)v5 + 5);
  v11 = v6;
  *voiceId = v10;
  sub_1B71570((ServantStatusBattleListViewItem_o *)voiceId, (int32_t)v10, v8, v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceMaterialCondMaster__IsVoicePlay(
        VoiceMaterialCondMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v14; // w24
  bool v15; // w27
  System_String_o *PK; // x25
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v18; // x1
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v20; // x26
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  VoiceMaterialCondEntity_c *v24; // x8
  VoiceMaterialCondEntity_o *v25; // x26
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v27; // x10
  __int64 v28; // x0
  __int64 methodPtr_low; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v33; // w10
  int32_t targetId; // w26
  int32_t CondValue; // w27

  if ( (byte_4A209E2 & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1B715CC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1B715CC(&VoiceMaterialCondEntity_TypeInfo, v11);
    byte_4A209E2 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v14 = 1;
  while ( 1 )
  {
    v15 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v14, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_37:
      sub_1B71828(lookup, v18);
    klass = lookup->klass;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v23 = sub_1BC35AC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v23)(
            v20,
            PK,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
      return v15;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_37;
    v24 = lookup->klass;
    v25 = lookup;
    v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = (__int64)(&v24->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v27);
    }
    else
    {
LABEL_17:
      v28 = sub_1BC35AC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v28)(
                                            v25,
                                            PK,
                                            *(_QWORD *)(v28 + 8));
    if ( !lookup )
      goto LABEL_37;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_37;
    }
    ++v14;
    if ( condGroup != lookup->fields.condGroup )
    {
      condGroup = lookup->fields.condGroup;
      if ( v15 )
        return v15;
      goto LABEL_26;
    }
    IsOpen = 0;
    if ( v15 )
    {
LABEL_26:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_37;
        max_length = condValues->max_length;
        v33 = 0;
        if ( max_length >= 1 )
        {
          do
          {
            if ( max_length == v33 )
              sub_1B71830(lookup, v18);
            if ( condValues->m_Items[v33 + 1] == limitCount )
              break;
            ++v33;
          }
          while ( max_length != v33 );
        }
        IsOpen = v33 < max_length;
      }
      else
      {
        targetId = lookup->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v18);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL, 0LL);
      }
    }
  }
}