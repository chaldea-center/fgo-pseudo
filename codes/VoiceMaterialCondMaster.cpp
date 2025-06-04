void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B030AF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__, method);
    byte_4B030AF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
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
  __int64 v30; // x1
  __int64 v31; // x24
  __int64 v32; // x25
  __int64 v33; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v34; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B030B0 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__,
      *(_QWORD *)&servantId);
    sub_1BC3008(&System_IDisposable_TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16);
    byte_4B030B0 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v20);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo )
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
      v29 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    if ( !v31 )
      sub_1BC3264(0LL, v30);
    v33 = *(_QWORD *)(v31 + 16);
    v32 = *(_QWORD *)(v31 + 24);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v33;
    *(_QWORD *)&v49.fields.fakeValue = v32;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v49, 0LL) == servantId
      && *(_DWORD *)(v31 + 32) == voicePrefix )
    {
      v34 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v31 + 40);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v34, v35, 0LL);
      if ( v36 )
      {
        if ( !v17 )
          sub_1BC3264(v36, v37);
        items = v17->fields._items;
        v41 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          sub_1BC3264(v36, v37);
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v31,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v31;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 4), v31, v38, v39);
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_35;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_35:
    v47 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
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

  if ( (byte_4B030B1 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      *(_QWORD *)&servantId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor___76760816, v13);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4B030B1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v15 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v16);
  if ( !EntityList )
    sub_1BC3264(0LL, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    EntityList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v24.fields._current )
      sub_1BC3264(v19, v20);
    if ( LODWORD(v24.fields._current[3].monitor) == 103 )
    {
      klass = v24.fields._current[4].klass;
      v22 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_57161456(
        v22,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_36836F0 *)Method_System_Collections_Generic_List_int___ctor___76760816);
      goto LABEL_10;
    }
  }
  v22 = v15;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x1
  int32_t v11; // w21

  v3 = *voiceId;
  if ( !*voiceId || (v3 = System_String__Split((System_String_o *)v3, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BC3264(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0LL);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1BC326C(v6, v7, v8);
  v10 = (System_String_o *)*((_QWORD *)v5 + 5);
  v11 = v6;
  *voiceId = v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)voiceId, (int32_t)v10, v8, v9);
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
  System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x2
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v33; // w10
  int32_t targetId; // w26
  int32_t CondValue; // w27

  if ( (byte_4B030B2 & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__, v10);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo, v11);
    byte_4B030B2 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v14 = 1;
  while ( 1 )
  {
    v15 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v14, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_32B191C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
LABEL_35:
      sub_1BC3264(lookup, v18);
    klass = lookup->klass;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
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
      v23 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v23)(
            v20,
            PK,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
      return v15;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_32B191C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_35;
    v24 = lookup->klass;
    v25 = lookup;
    v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v27 = (System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
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
      v28 = sub_1C13570(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              2LL);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v28)(
                                            v25,
                                            PK,
                                            *(_QWORD *)(v28 + 8));
    if ( !lookup )
      goto LABEL_35;
    ++v14;
    if ( condGroup != lookup->fields.condGroup )
    {
      condGroup = lookup->fields.condGroup;
      if ( v15 )
        return v15;
      goto LABEL_24;
    }
    IsOpen = 0;
    if ( v15 )
    {
LABEL_24:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_35;
        max_length = condValues->max_length;
        v33 = 0;
        if ( max_length >= 1 )
        {
          do
          {
            if ( max_length == v33 )
              sub_1BC326C(lookup, v18, v29);
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