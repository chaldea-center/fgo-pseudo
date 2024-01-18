void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2DE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__, method);
    byte_418D2DE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    289,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
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
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  __int64 v32; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x24
  __int64 v34; // x9
  __int64 v35; // x25
  __int64 v36; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v38; // x1
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_418D2DF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&servantId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B2C35C(&VoiceMaterialCondEntity_TypeInfo, v16);
    byte_418D2DF = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_40;
    v34 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (VoiceMaterialCondEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_B2C728(v31);
LABEL_40:
      sub_B2C434(v31, v32);
    }
    v36 = *(_QWORD *)&v31->fields.missionTargetId;
    v35 = *(_QWORD *)&v31->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v47.fields.currentCryptoKey = v36;
    *(_QWORD *)&v47.fields.fakeValue = v35;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL) == servantId
      && v33->fields.addCount == voicePrefix )
    {
      v37 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v33[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v37, v38, 0LL) )
      {
        if ( !v45 )
          sub_B2C434(0LL, v39);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v45,
          v33,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
      }
    }
  }
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_36:
    v43 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v45;
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
  System_Collections_Generic_List_VoiceMaterialCondEntity__o *EntityList; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v22; // x20
  char v23; // w21
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418D2E0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      *(_QWORD *)&servantId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_418D2E0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = VoiceMaterialCondMaster__GetEntityList(this, servantId, voicePrefix, voiceId, v16);
  if ( !EntityList )
    sub_B2C434(0LL, v18);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v25.fields.current )
      sub_B2C434(v19, v20);
    if ( LODWORD(v25.fields.current[3].monitor) == 103 )
    {
      klass = v25.fields.current[4].klass;
      v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_49702036(
        v22,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
      v23 = 2;
      goto LABEL_10;
    }
  }
  v23 = 0;
  v22 = 0LL;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  if ( ((v23 + 2) & 3) == 0 )
    return v22;
  return v15;
}


int32_t __fastcall VoiceMaterialCondMaster__GetVoicePrefix(
        VoiceMaterialCondMaster_o *this,
        System_String_o **voiceId,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  System_String_array *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *v14; // x1
  int32_t v15; // w21
  __int64 v17; // x0

  if ( (byte_418D2E1 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, voiceId);
    byte_418D2E1 = 1;
  }
  v4 = *voiceId;
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_13;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !v4 || (v5 = System_String__Split(v4, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_12:
    sub_B2C434(v5, v6);
  v7 = v5;
  if ( (int)v5->max_length < 2 )
    return 0;
  v5 = (System_String_array *)System_Int32__Parse(v5->m_Items[0], 0LL);
  if ( v7->max_length <= 1 )
  {
LABEL_13:
    v17 = sub_B2C460(v5);
    sub_B2C400(v17, 0LL);
  }
  v14 = v7->m_Items[1];
  v15 = (int)v5;
  *voiceId = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)voiceId, (System_Int32_array **)v14, v8, v9, v10, v11, v12, v13);
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
  __int64 v11; // x1
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v14; // w24
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x3
  VoiceMaterialCondEntity_c *v18; // x8
  VoiceMaterialCondEntity_o *v19; // x26
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  __int64 v23; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w10
  unsigned int v27; // w8
  int32_t targetId; // w26
  int32_t CondValue; // w27
  bool v30; // w27
  System_String_o *PK; // x25
  __int64 v32; // x3
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v34; // x26
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  __int64 v39; // x0

  if ( (byte_418D2E2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&VoiceMaterialCondEntity_TypeInfo, v11);
    byte_418D2E2 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v14 = 1;
  while ( 1 )
  {
LABEL_32:
    v30 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v14, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_41:
      sub_B2C434(lookup, v16);
    klass = lookup->klass;
    v34 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v37 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v32);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v37)(
            v34,
            PK,
            *(_QWORD *)(v37 + 8)) & 1) == 0 )
      return v30;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_41;
    v18 = lookup->klass;
    v19 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 2;
        if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v22 = (__int64)(&v18->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v21);
    }
    else
    {
LABEL_9:
      v22 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v17);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v22)(
                                            v19,
                                            PK,
                                            *(_QWORD *)(v22 + 8));
    if ( !lookup )
      goto LABEL_41;
    v23 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[v23 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_41;
    }
    ++v14;
    if ( condGroup != lookup->fields.condGroup )
    {
      if ( v30 )
        return v30;
      condGroup = lookup->fields.condGroup;
      goto LABEL_19;
    }
    IsOpen = 0;
    if ( v30 )
    {
LABEL_19:
      condType = lookup->fields.condType;
      if ( condType == 103 )
      {
        condValues = lookup->fields.condValues;
        if ( !condValues )
          goto LABEL_41;
        max_length = condValues->max_length;
        IsOpen = 0;
        if ( max_length >= 1 )
        {
          v27 = 0;
          while ( 1 )
          {
            if ( v27 >= max_length )
            {
              v39 = sub_B2C460(lookup);
              sub_B2C400(v39, 0LL);
            }
            if ( condValues->m_Items[v27 + 1] == limitCount )
              break;
            if ( (int)++v27 >= max_length )
            {
              IsOpen = 0;
              goto LABEL_32;
            }
          }
          IsOpen = 1;
        }
      }
      else
      {
        targetId = lookup->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v16);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
      }
    }
  }
}