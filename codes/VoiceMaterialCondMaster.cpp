void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF750 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__, method);
    byte_40FF750 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    289,
    (const MethodInfo_266F73C *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  __int64 v29; // x9
  __int64 v30; // x25
  __int64 v31; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v32; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v33; // x1
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40FF751 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&servantId);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B16FFC(&VoiceMaterialCondEntity_TypeInfo, v16);
    byte_40FF751 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo,
                                                                                                  *(_QWORD *)&servantId,
                                                                                                  *(_QWORD *)&voicePrefix,
                                                                                                  voiceId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    v28 = v27;
    if ( !v27 )
      goto LABEL_40;
    v29 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (VoiceMaterialCondEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_B173C8(v27);
LABEL_40:
      sub_B170D4();
    }
    v31 = *(_QWORD *)&v27->fields.missionTargetId;
    v30 = *(_QWORD *)&v27->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v31;
    *(_QWORD *)&v41.fields.fakeValue = v30;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL) == servantId
      && v28->fields.addCount == voicePrefix )
    {
      v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v28[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v32, v33, 0LL) )
      {
        if ( !v39 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
      }
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_36:
    v37 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v39;
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v23; // x20
  char v24; // w21
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FF752 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      *(_QWORD *)&servantId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_40FF752 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&servantId,
                                                    *(_QWORD *)&voicePrefix,
                                                    voiceId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = VoiceMaterialCondMaster__GetEntityList(this, servantId, voicePrefix, voiceId, v16);
  if ( !EntityList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__) )
  {
    if ( !v26.fields.current )
      sub_B170D4();
    if ( LODWORD(v26.fields.current[3].monitor) == 103 )
    {
      klass = v26.fields.current[4].klass;
      v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v18,
                                                        v19,
                                                        v20,
                                                        v21);
      System_Collections_Generic_List_int____ctor_49346956(
        v23,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
      v24 = 2;
      goto LABEL_10;
    }
  }
  v24 = 0;
  v23 = 0LL;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  if ( ((v24 + 2) & 3) == 0 )
    return v23;
  return v15;
}


int32_t __fastcall VoiceMaterialCondMaster__GetVoicePrefix(
        VoiceMaterialCondMaster_o *this,
        System_String_o **voiceId,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_Char_array *v5; // x0
  System_String_array **v6; // x2
  System_Char_array *v7; // x1
  System_String_array *v8; // x0
  System_String_array *v9; // x20
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o *v15; // x1
  int32_t v16; // w21

  if ( (byte_40FF753 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, voiceId);
    byte_40FF753 = 1;
  }
  v4 = *voiceId;
  v5 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_12;
  v7 = v5;
  if ( !v5->max_length )
    goto LABEL_13;
  v5->m_Items[2] = 95;
  if ( !v4 || (v8 = System_String__Split(v4, v5, 0LL)) == 0LL )
LABEL_12:
    sub_B170D4();
  v9 = v8;
  if ( (int)v8->max_length < 2 )
    return 0;
  v5 = (System_Char_array *)System_Int32__Parse(v8->m_Items[0], 0LL);
  if ( v9->max_length <= 1 )
  {
LABEL_13:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  v15 = v9->m_Items[1];
  v16 = (int)v5;
  *voiceId = v15;
  sub_B16F98((BattleServantConfConponent_o *)voiceId, (System_Int32_array **)v15, v6, v10, v11, v12, v13, v14);
  return v16;
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x26
  unsigned __int64 v18; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x11
  __int64 v20; // x0
  VoiceMaterialCondEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w10
  unsigned int v28; // w8
  int32_t targetId; // w26
  int32_t CondValue; // w27
  bool v31; // w27
  System_String_o *PK; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v35; // x26
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40FF754 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&VoiceMaterialCondEntity_TypeInfo, v11);
    byte_40FF754 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v14 = 1;
  while ( 1 )
  {
LABEL_32:
    v31 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v14, *(const MethodInfo **)&limitCount);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_41:
      sub_B170D4();
    klass = lookup->klass;
    v35 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_37:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v35,
            PK,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      return v31;
    v15 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !v15 )
      goto LABEL_41;
    v16 = v15->klass;
    v17 = v15;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 2].method;
    }
    else
    {
LABEL_9:
      v20 = sub_AAFEF8(v15, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v21 = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v20)(
                                         v17,
                                         PK,
                                         *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_41;
    v24 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (VoiceMaterialCondEntity_c *)v21->klass->_2.typeHierarchy[v24 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_41;
    }
    ++v14;
    if ( condGroup != v21->fields.condGroup )
    {
      if ( v31 )
        return v31;
      condGroup = v21->fields.condGroup;
      goto LABEL_19;
    }
    IsOpen = 0;
    if ( v31 )
    {
LABEL_19:
      condType = v21->fields.condType;
      if ( condType == 103 )
      {
        condValues = v21->fields.condValues;
        if ( !condValues )
          goto LABEL_41;
        max_length = condValues->max_length;
        IsOpen = 0;
        if ( max_length >= 1 )
        {
          v28 = 0;
          while ( 1 )
          {
            if ( v28 >= max_length )
            {
              sub_B17100(v21, v22, v23);
              sub_B170A0();
            }
            if ( condValues->m_Items[v28 + 1] == limitCount )
              break;
            if ( (int)++v28 >= max_length )
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
        targetId = v21->fields.targetId;
        CondValue = VoiceMaterialCondEntity__getCondValue(v21, v22);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
      }
    }
  }
}