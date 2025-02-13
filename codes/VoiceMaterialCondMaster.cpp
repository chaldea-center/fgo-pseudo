void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD4E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_4BDD4E2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    295,
    (const MethodInfo_325E55C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x24
  __int64 v24; // x25
  __int64 v25; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4BDD4E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4BDD4E3 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_VoiceMaterialCondEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_VoiceMaterialCondEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v23 )
      sub_1C22094(0LL, v22);
    v25 = *(_QWORD *)(v23 + 16);
    v24 = *(_QWORD *)(v23 + 24);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v25;
    *(_QWORD *)&v45.fields.fakeValue = v24;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL) == servantId
      && *(_DWORD *)(v23 + 32) == voicePrefix )
    {
      v26 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)(v23 + 40);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v26, v27, 0LL);
      if ( v28 )
      {
        if ( !v9 )
          sub_1C22094(v28, v29);
        items = v9->fields._items;
        v37 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C22094(v28, v29);
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v23,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v23;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
        }
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_35;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_35:
    v43 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v9;
}


System_Collections_Generic_List_int__o *__fastcall VoiceMaterialCondMaster__GetPlayableLimitCountList(
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
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDD4E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD4E4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v10);
  if ( !EntityList )
    sub_1C22094(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    EntityList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v18.fields._current )
      sub_1C22094(v13, v14);
    if ( LODWORD(v18.fields._current[3].monitor) == 103 )
    {
      klass = v18.fields._current[4].klass;
      v16 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_56826212(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
      goto LABEL_10;
    }
  }
  v16 = v9;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  return v16;
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
    sub_1C22094(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0LL);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1C2209C(v6, v7);
  v14 = (System_String_o *)*((_QWORD *)v5 + 5);
  v15 = v6;
  *voiceId = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)voiceId, (int64_t)v14, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4BDD4E5 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo);
    byte_4BDD4E5 = 1;
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
                                            (const MethodInfo_325E674 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
LABEL_35:
      sub_1C22094(lookup, v16);
    klass = lookup->klass;
    v18 = lookup;
    v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v21 = sub_1C73E18(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v21)(
            v18,
            PK,
            *(_QWORD *)(v21 + 8)) & 1) == 0 )
      return v13;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            (const MethodInfo_325E674 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string__get_lookup__);
    if ( !lookup )
      goto LABEL_35;
    v22 = lookup->klass;
    v23 = lookup;
    v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)(&v22->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v25);
    }
    else
    {
LABEL_17:
      v26 = sub_1C73E18(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__VoiceMaterialCondEntity__TypeInfo,
              2LL);
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
              sub_1C2209C(lookup, v16);
            if ( condValues->m_Items[v30 + 1] == limitCount )
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
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL, 0LL);
      }
    }
  }
}