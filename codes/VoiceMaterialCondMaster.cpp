void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C081 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_4A5C081 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x9
  void *monitor; // x25
  Il2CppClass *v26; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A5C082 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&VoiceMaterialCondEntity_TypeInfo);
    byte_4A5C082 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
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
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (VoiceMaterialCondEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_1B88ACC(v21);
LABEL_41:
      sub_1B8880C(v21, v22);
    }
    v26 = v21[1].klass;
    monitor = v21[1].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v26;
    *(_QWORD *)&v43.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL) == servantId
      && LODWORD(v23[2].klass) == voicePrefix )
    {
      v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v23[2].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v27, v28, 0LL);
      if ( v29 )
      {
        if ( !v8 )
          sub_1B8880C(v29, v30);
        items = v8->fields._items;
        v34 = Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1B8880C(v29, v30);
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v23,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v23;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v23, v31, v32);
        }
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
        goto LABEL_37;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_37:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v8;
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

  if ( (byte_4A5C083 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5C083 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = (System_Collections_Generic_List_object__o *)VoiceMaterialCondMaster__GetEntityList(
                                                              this,
                                                              servantId,
                                                              voicePrefix,
                                                              voiceId,
                                                              v10);
  if ( !EntityList )
    sub_1B8880C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    EntityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v18.fields._current )
      sub_1B8880C(v13, v14);
    if ( LODWORD(v18.fields._current[3].monitor) == 103 )
    {
      klass = v18.fields._current[4].klass;
      v16 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_55443684(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
      goto LABEL_10;
    }
  }
  v16 = v9;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x1
  int32_t v11; // w21

  v3 = *voiceId;
  if ( !*voiceId || (v3 = System_String__Split((System_String_o *)v3, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1B8880C(v3, voiceId);
  v5 = v3;
  if ( *((int *)v3 + 6) < 2 )
    return 0;
  v6 = System_Int32__Parse(*((System_String_o **)v3 + 4), 0LL);
  if ( *((_DWORD *)v5 + 6) <= 1u )
    sub_1B88814(v6, v7);
  v10 = (System_String_o *)*((_QWORD *)v5 + 5);
  v11 = v6;
  *voiceId = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)voiceId, (int32_t)v10, v8, v9);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  __int64 methodPtr_low; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w8
  int v31; // w10
  int32_t targetId; // w26
  int32_t CondValue; // w27

  if ( (byte_4A5C084 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&VoiceMaterialCondEntity_TypeInfo);
    byte_4A5C084 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v12 = 1;
  while ( 1 )
  {
    v13 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v12, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_37:
      sub_1B8880C(lookup, v16);
    klass = lookup->klass;
    v18 = lookup;
    v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v21 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v21)(
            v18,
            PK,
            *(_QWORD *)(v21 + 8)) & 1) == 0 )
      return v13;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_37;
    v22 = lookup->klass;
    v23 = lookup;
    v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
    {
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
      v26 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v26)(
                                            v23,
                                            PK,
                                            *(_QWORD *)(v26 + 8));
    if ( !lookup )
      goto LABEL_37;
    methodPtr_low = LOBYTE(VoiceMaterialCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_37;
    }
    ++v12;
    if ( condGroup != lookup->fields.condGroup )
    {
      condGroup = lookup->fields.condGroup;
      if ( v13 )
        return v13;
      goto LABEL_26;
    }
    IsOpen = 0;
    if ( v13 )
    {
LABEL_26:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_37;
        max_length = condValues->max_length;
        v31 = 0;
        if ( max_length >= 1 )
        {
          do
          {
            if ( max_length == v31 )
              sub_1B88814(lookup, v16);
            if ( condValues->m_Items[v31 + 1] == limitCount )
              break;
            ++v31;
          }
          while ( max_length != v31 );
        }
        IsOpen = v31 < max_length;
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