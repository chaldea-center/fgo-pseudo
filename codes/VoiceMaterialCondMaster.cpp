void VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57E80 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_4C57E80 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x24
  __int64 v24; // x25
  __int64 v25; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C57E81 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C57E81 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v17 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_16:
      v21 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v23 )
      sub_1C3E7C0(0, v22);
    v25 = *(_QWORD *)(v23 + 16);
    v24 = *(_QWORD *)(v23 + 24);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v25;
    *(_QWORD *)&v41.fields.fakeValue = v24;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v41, 0) == servantId
      && *(_DWORD *)(v23 + 32) == voicePrefix )
    {
      v26 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v23 + 40);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v26, v27, 0);
      if ( v28 )
      {
        if ( !v9 )
          sub_1C3E7C0(v28, v29);
        items = v9->fields._items;
        v33 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C3E7C0(v28, v29);
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v23,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_1C3E508((CGThumbnailListItem_o *)(v35 + 4), v23, v30, v31);
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_35:
    v39 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v9;
}


System_Collections_Generic_List_int__o *VoiceMaterialCondMaster__GetPlayableLimitCountList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x19
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C57E82 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C57E82 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v10);
  if ( !EntityList )
    sub_1C3E7C0(0, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    EntityList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v18.fields._current )
      sub_1C3E7C0(v13, v14);
    if ( *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&word_38) == 103 )
    {
      v15 = *(System_Collections_Generic_IEnumerable_T__o **)((char *)&v18.fields._current->klass
                                                            + (unsigned __int64)&dword_40);
      v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_58293520(
        v16,
        v15,
        (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
      goto LABEL_10;
    }
  }
  v16 = v9;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  return v16;
}


int32_t VoiceMaterialCondMaster__GetVoicePrefix(
        VoiceMaterialCondMaster_o *this,
        System_String_o **voiceId,
        const MethodInfo *method)
{
  void *v3; // x0
  void *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x1
  int32_t v11; // w21

  v3 = *voiceId;
  if ( !*voiceId || (v3 = System_String__Split((System_String_o *)v3, 0x5Fu, 0, 0)) == 0 )
    sub_1C3E7C0(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1C3E7C8(v6, v7);
  v10 = (System_String_o *)*((_QWORD *)v5 + 5);
  v11 = v6;
  *voiceId = v10;
  sub_1C3E508((CGThumbnailListItem_o *)voiceId, (int32_t)v10, v8, v9);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool VoiceMaterialCondMaster__IsVoicePlay(
        VoiceMaterialCondMaster_o *this,
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t limitCount,
        const MethodInfo *method)
{
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v12; // w24
  bool v13; // w27
  System_String_o *PK; // x25
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v16; // x1
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v18; // x26
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  VoiceMaterialCondEntity_c *v22; // x8
  VoiceMaterialCondEntity_o *v23; // x26
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **v25; // x10
  __int64 v26; // x0
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v30; // w10
  int32_t targetId; // w26
  int32_t CondValue; // w27

  if ( (byte_4C57E83 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    sub_1C3E564(&System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo);
    byte_4C57E83 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v12 = 1;
  while ( 1 )
  {
    v13 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v12, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_33B5804 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
LABEL_35:
      sub_1C3E7C0(lookup, v16);
    klass = lookup->klass;
    v18 = lookup;
    v19 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_9:
      v21 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              0);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v21)(
            v18,
            PK,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      return v13;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_33B5804 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_35;
    v22 = lookup->klass;
    v23 = lookup;
    v24 = *(unsigned __int16 *)&lookup->klass->_2.rank;
    if ( *(_WORD *)&lookup->klass->_2.rank )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)(&v22->vtable._2_GetHashCode + *(_DWORD *)v25);
    }
    else
    {
LABEL_17:
      v26 = sub_1C8ED7C(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              2);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v26)(
                                            v23,
                                            PK,
                                            *(_QWORD *)(v26 + 8));
    if ( !lookup )
      goto LABEL_35;
    ++v12;
    if ( condGroup != lookup->fields.condGroup )
    {
      condGroup = lookup->fields.condGroup;
      if ( v13 )
        return v13;
      goto LABEL_24;
    }
    IsOpen = 0;
    if ( v13 )
    {
LABEL_24:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_35;
        max_length = condValues->max_length;
        v30 = 0;
        if ( max_length >= 1 )
        {
          do
          {
            if ( max_length == v30 )
              sub_1C3E7C8(lookup, v16);
            if ( condValues->m_Items[v30] == limitCount )
              break;
            ++v30;
          }
          while ( max_length != v30 );
        }
        IsOpen = v30 < max_length;
      }
      else
      {
        targetId = lookup->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v16);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0, 0);
      }
    }
  }
}