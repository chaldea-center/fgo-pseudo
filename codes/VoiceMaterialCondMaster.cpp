void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1713A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__, method, v2);
    byte_4B1713A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  _QWORD *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x24
  __int64 methodPtr_low; // x9
  __int64 v43; // x25
  __int64 v44; // x26
  __int64 v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v46; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v47; // x1
  _BOOL8 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4B1713B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&servantId,
      *(_QWORD *)&voicePrefix);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22, v23);
    sub_1BCA7E0(&VoiceMaterialCondEntity_TypeInfo, v24, v25);
    byte_4B1713B = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo,
                                                       *(_QWORD *)&servantId,
                                                       *(_QWORD *)&voicePrefix,
                                                       voiceId);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v27);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
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
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                      Enumerator,
                      *(_QWORD *)(v38 + 8));
    v41 = (int64_t)v39;
    if ( !v39 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v39 + 304LL) < (unsigned int)methodPtr_low
      || *(VoiceMaterialCondEntity_c **)(*(_QWORD *)(*v39 + 200LL) + 8 * methodPtr_low - 8) != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_1BCACFC(v39);
LABEL_41:
      sub_1BCAA3C(v39, v40);
    }
    v44 = v39[2];
    v43 = v39[3];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        VoiceMaterialCondEntity_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = v44;
    *(_QWORD *)&v66.fields.fakeValue = v43;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL) == servantId
      && *(_DWORD *)(v41 + 32) == voicePrefix )
    {
      v46 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v41 + 40);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v45);
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v46, v47, 0LL);
      if ( v48 )
      {
        if ( !v26 )
          sub_1BCAA3C(v48, v49);
        items = v26->fields._items;
        v57 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v26->fields._version;
        if ( !items )
          sub_1BCAA3C(v48, v49);
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v41,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v59[4] = (Il2CppClass *)v41;
          sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v41, v50, v51, v52, v53, v54, v55);
        }
      }
    }
  }
  v60 = Enumerator->klass;
  v61 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_37;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_37:
    v63 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v26;
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
  System_Collections_Generic_List_int__o *v21; // x19
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v30; // x20
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1713C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      *(_QWORD *)&servantId,
      *(_QWORD *)&voicePrefix);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    byte_4B1713C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    *(_QWORD *)&voicePrefix,
                                                    voiceId);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v22);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    EntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v25 )
      break;
    if ( !v32.fields._current )
      sub_1BCAA3C(v25, v26);
    if ( LODWORD(v32.fields._current[3].monitor) == 103 )
    {
      klass = v32.fields._current[4].klass;
      v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v26,
                                                        v27,
                                                        v28);
      System_Collections_Generic_List_int____ctor_56116492(
        v30,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
      goto LABEL_10;
    }
  }
  v30 = v21;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  return v30;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_String_o *v14; // x1
  int32_t v15; // w21

  v3 = *voiceId;
  if ( !*voiceId || (v3 = System_String__Split((System_String_o *)v3, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BCAA3C(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0LL);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1BCAA44(v6, v7);
  v14 = (System_String_o *)*((_QWORD *)v5 + 5);
  v15 = v6;
  *voiceId = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)voiceId, (int64_t)v14, v8, v9, v10, v11, v12, v13);
  return v15;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v16; // w24
  bool v17; // w27
  System_String_o *PK; // x25
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v20; // x1
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v22; // x26
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  VoiceMaterialCondEntity_c *v26; // x8
  VoiceMaterialCondEntity_o *v27; // x26
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v29; // x10
  __int64 v30; // x0
  __int64 methodPtr_low; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v35; // w10
  int32_t targetId; // w26
  __int64 v37; // x1
  int32_t CondValue; // w27

  if ( (byte_4B1713D & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&voicePrefix);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&VoiceMaterialCondEntity_TypeInfo, v12, v13);
    byte_4B1713D = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v16 = 1;
  while ( 1 )
  {
    v17 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v16, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_37:
      sub_1BCAA3C(lookup, v20);
    klass = lookup->klass;
    v22 = lookup;
    v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v25 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v25)(
            v22,
            PK,
            *(_QWORD *)(v25 + 8)) & 1) == 0 )
      return v17;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_37;
    v26 = lookup->klass;
    v27 = lookup;
    v28 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v29 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_17;
      }
      v30 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v29);
    }
    else
    {
LABEL_17:
      v30 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v30)(
                                            v27,
                                            PK,
                                            *(_QWORD *)(v30 + 8));
    if ( !lookup )
      goto LABEL_37;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_37;
    }
    ++v16;
    if ( condGroup != lookup->fields.condGroup )
    {
      condGroup = lookup->fields.condGroup;
      if ( v17 )
        return v17;
      goto LABEL_26;
    }
    IsOpen = 0;
    if ( v17 )
    {
LABEL_26:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_37;
        max_length = condValues->max_length;
        v35 = 0;
        if ( max_length >= 1 )
        {
          do
          {
            if ( max_length == v35 )
              sub_1BCAA44(lookup, v20);
            if ( condValues->m_Items[v35 + 1] == limitCount )
              break;
            ++v35;
          }
          while ( max_length != v35 );
        }
        IsOpen = v35 < max_length;
      }
      else
      {
        targetId = lookup->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v20);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v37);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL, 0LL);
      }
    }
  }
}