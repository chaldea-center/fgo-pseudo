void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5EBB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_42B5EBB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    290,
    (const MethodInfo_23E268C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x24
  __int64 v25; // x9
  __int64 v26; // x25
  __int64 v27; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42B5EBC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&VoiceMaterialCondEntity_TypeInfo);
    byte_42B5EBC = 1;
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      goto LABEL_40;
    v25 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (VoiceMaterialCondEntity_c *)v22->klass->_2.typeHierarchy[v25 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_40:
      sub_B52A5C(v22, v23);
    }
    v27 = *(_QWORD *)&v22->fields.missionTargetId;
    v26 = *(_QWORD *)&v22->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v27;
    *(_QWORD *)&v38.fields.fakeValue = v26;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v38, 0LL) == servantId
      && v24->fields.addCount == voicePrefix )
    {
      v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v28, v29, 0LL) )
      {
        if ( !v36 )
          sub_B52A5C(0LL, v30);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v36,
          v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_36:
    v34 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v36;
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
  System_Collections_Generic_List_VoiceMaterialCondEntity__o *EntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  char v17; // w21
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B5EBD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B5EBD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = VoiceMaterialCondMaster__GetEntityList(this, servantId, voicePrefix, voiceId, v10);
  if ( !EntityList )
    sub_B52A5C(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v19.fields.current )
      sub_B52A5C(v13, v14);
    if ( LODWORD(v19.fields.current[3].monitor) == 103 )
    {
      klass = v19.fields.current[4].klass;
      v16 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50685004(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
      v17 = 2;
      goto LABEL_10;
    }
  }
  v17 = 0;
  v16 = 0LL;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  if ( ((v17 + 2) & 3) == 0 )
    return v16;
  return v9;
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

  if ( (byte_42B5EBE & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42B5EBE = 1;
  }
  v4 = *voiceId;
  v5 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_13;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !v4 || (v5 = System_String__Split(v4, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_12:
    sub_B52A5C(v5, v6);
  v7 = v5;
  if ( (int)v5->max_length < 2 )
    return 0;
  v5 = (System_String_array *)System_Int32__Parse(v5->m_Items[0], 0LL);
  if ( v7->max_length <= 1 )
  {
LABEL_13:
    v17 = sub_B52A88(v5);
    sub_B52A28(v17, 0LL);
  }
  v14 = v7->m_Items[1];
  v15 = (int)v5;
  *voiceId = v14;
  sub_B52920((BattleServantConfConponent_o *)voiceId, (System_Int32_array **)v14, v8, v9, v10, v11, v12, v13);
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
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x3
  VoiceMaterialCondEntity_c *v16; // x8
  VoiceMaterialCondEntity_o *v17; // x26
  unsigned __int64 v18; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x11
  __int64 v20; // x0
  __int64 v21; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w10
  unsigned int v25; // w8
  int32_t targetId; // w26
  int32_t CondValue; // w27
  bool v28; // w27
  System_String_o *PK; // x25
  __int64 v30; // x3
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v32; // x26
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  __int64 v37; // x0

  if ( (byte_42B5EBF & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&VoiceMaterialCondEntity_TypeInfo);
    byte_42B5EBF = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v12 = 1;
  while ( 1 )
  {
LABEL_32:
    v28 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v12, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_41:
      sub_B52A5C(lookup, v14);
    klass = lookup->klass;
    v32 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v35 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v30);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v35)(
            v32,
            PK,
            *(_QWORD *)(v35 + 8)) & 1) == 0 )
      return v28;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_41;
    v16 = lookup->klass;
    v17 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v20 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v19);
    }
    else
    {
LABEL_9:
      v20 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v15);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v20)(
                                            v17,
                                            PK,
                                            *(_QWORD *)(v20 + 8));
    if ( !lookup )
      goto LABEL_41;
    v21 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[v21 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_41;
    }
    ++v12;
    if ( condGroup != lookup->fields.condGroup )
    {
      if ( v28 )
        return v28;
      condGroup = lookup->fields.condGroup;
      goto LABEL_19;
    }
    IsOpen = 0;
    if ( v28 )
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
          v25 = 0;
          while ( 1 )
          {
            if ( v25 >= max_length )
            {
              v37 = sub_B52A88(lookup);
              sub_B52A28(v37, 0LL);
            }
            if ( condValues->m_Items[v25 + 1] == limitCount )
              break;
            if ( (int)++v25 >= max_length )
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
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v14);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
      }
    }
  }
}