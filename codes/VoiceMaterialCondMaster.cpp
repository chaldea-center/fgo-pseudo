void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE724 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE724 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    290,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
}


System_Collections_Generic_List_VoiceMaterialCondEntity__o *__fastcall VoiceMaterialCondMaster__GetEntityList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x0
  __int64 v50; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x24
  __int64 v52; // x9
  __int64 v53; // x25
  __int64 v54; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v55; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v56; // x1
  __int64 v57; // x1
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42EE725 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      servantId,
      voicePrefix,
      voiceId);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&VoiceMaterialCondEntity_TypeInfo, v32, v33, v34);
    byte_42EE725 = 1;
  }
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v35);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v38);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_16:
      v48 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v44);
    }
    v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      goto LABEL_40;
    v52 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v49->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (VoiceMaterialCondEntity_c *)v49->klass->_2.typeHierarchy[v52 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_B5D990(v49);
LABEL_40:
      sub_B5D69C(v49, v50);
    }
    v54 = *(_QWORD *)&v49->fields.missionTargetId;
    v53 = *(_QWORD *)&v49->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = v54;
    *(_QWORD *)&v65.fields.fakeValue = v53;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL) == servantId
      && v51->fields.addCount == voicePrefix )
    {
      v55 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v51[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v55, v56, 0LL) )
      {
        if ( !v63 )
          sub_B5D69C(0LL, v57);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v63,
          v51,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
      }
    }
  }
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_36:
    v61 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v63;
}


System_Collections_Generic_List_int__o *__fastcall VoiceMaterialCondMaster__GetPlayableLimitCountList(
        VoiceMaterialCondMaster_o *this,
        int32_t servantId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x19
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_VoiceMaterialCondEntity__o *EntityList; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppClass *klass; // x21
  System_Collections_Generic_List_int__o *v34; // x20
  char v35; // w21
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EE726 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__,
      servantId,
      voicePrefix,
      voiceId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    byte_42EE726 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  EntityList = VoiceMaterialCondMaster__GetEntityList(this, servantId, voicePrefix, voiceId, v28);
  if ( !EntityList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v31 )
      break;
    if ( !v37.fields.current )
      sub_B5D69C(v31, v32);
    if ( LODWORD(v37.fields.current[3].monitor) == 103 )
    {
      klass = v37.fields.current[4].klass;
      v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50870440(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
      v35 = 2;
      goto LABEL_10;
    }
  }
  v35 = 0;
  v34 = 0LL;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
  if ( ((v35 + 2) & 3) == 0 )
    return v34;
  return v27;
}


int32_t __fastcall VoiceMaterialCondMaster__GetVoicePrefix(
        VoiceMaterialCondMaster_o *this,
        System_String_o **voiceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x20
  System_String_array *v6; // x0
  System_String_array *v7; // x1
  System_String_array *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o *v15; // x1
  int32_t v16; // w21
  __int64 v18; // x0

  if ( (byte_42EE727 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)voiceId, (_DWORD)method, v3);
    byte_42EE727 = 1;
  }
  v5 = *voiceId;
  v6 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_12;
  v7 = v6;
  if ( !v6->max_length )
    goto LABEL_13;
  LOWORD(v6->m_Items[0]) = 95;
  if ( !v5 || (v6 = System_String__Split(v5, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_12:
    sub_B5D69C(v6, v7);
  v8 = v6;
  if ( (int)v6->max_length < 2 )
    return 0;
  v6 = (System_String_array *)System_Int32__Parse(v6->m_Items[0], 0LL);
  if ( v8->max_length <= 1 )
  {
LABEL_13:
    v18 = sub_B5D6C8(v6);
    sub_B5D668(v18, 0LL);
  }
  v15 = v8->m_Items[1];
  v16 = (int)v6;
  *voiceId = v15;
  sub_B5D560((BattleServantConfConponent_o *)voiceId, (System_Int32_array **)v15, v9, v10, v11, v12, v13, v14);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  bool IsOpen; // w8
  int condGroup; // w19
  int32_t v18; // w24
  VoiceMaterialCondEntity_o *lookup; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x3
  VoiceMaterialCondEntity_c *v22; // x8
  VoiceMaterialCondEntity_o *v23; // x26
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w10
  unsigned int v31; // w8
  int32_t targetId; // w26
  int32_t CondValue; // w27
  bool v34; // w27
  System_String_o *PK; // x25
  __int64 v36; // x3
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v38; // x26
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  __int64 v43; // x0

  if ( (byte_42EE728 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, svtId, voicePrefix, voiceId);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&VoiceMaterialCondEntity_TypeInfo, v13, v14, v15);
    byte_42EE728 = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v18 = 1;
  while ( 1 )
  {
LABEL_32:
    v34 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v18, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_41:
      sub_B5D69C(lookup, v20);
    klass = lookup->klass;
    v38 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v41 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v36);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v41)(
            v38,
            PK,
            *(_QWORD *)(v41 + 8)) & 1) == 0 )
      return v34;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_41;
    v22 = lookup->klass;
    v23 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v26 = (__int64)(&v22->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v25);
    }
    else
    {
LABEL_9:
      v26 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v21);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v26)(
                                            v23,
                                            PK,
                                            *(_QWORD *)(v26 + 8));
    if ( !lookup )
      goto LABEL_41;
    v27 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[v27 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_41;
    }
    ++v18;
    if ( condGroup != lookup->fields.condGroup )
    {
      if ( v34 )
        return v34;
      condGroup = lookup->fields.condGroup;
      goto LABEL_19;
    }
    IsOpen = 0;
    if ( v34 )
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
          v31 = 0;
          while ( 1 )
          {
            if ( v31 >= max_length )
            {
              v43 = sub_B5D6C8(lookup);
              sub_B5D668(v43, 0LL);
            }
            if ( condValues->m_Items[v31 + 1] == limitCount )
              break;
            if ( (int)++v31 >= max_length )
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
        CondValue = VoiceMaterialCondEntity__getCondValue(lookup, v20);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsOpen = CondType__IsOpen(condType, targetId, CondValue, 0, 0LL);
      }
    }
  }
}