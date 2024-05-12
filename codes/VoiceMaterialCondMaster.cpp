void __fastcall VoiceMaterialCondMaster___ctor(VoiceMaterialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43912B6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
    byte_43912B6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    290,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_VoiceMaterialCondMaster__VoiceMaterialCondEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x24
  __int64 v23; // x9
  __int64 v24; // x25
  __int64 v25; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_43912B7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&VoiceMaterialCondEntity_TypeInfo);
    byte_43912B7 = 1;
  }
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_VoiceMaterialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_40;
    v23 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (VoiceMaterialCondEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      sub_B77990(v20);
LABEL_40:
      sub_B7769C(v20, v21);
    }
    v25 = *(_QWORD *)&v20->fields.missionTargetId;
    v24 = *(_QWORD *)&v20->fields.targetId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v25;
    *(_QWORD *)&v36.fields.fakeValue = v24;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v36, 0LL) == servantId
      && v22->fields.addCount == voicePrefix )
    {
      v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v22[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(v26, v27, 0LL) )
      {
        if ( !v34 )
          sub_B7769C(0LL, v28);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v34,
          v22,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_36:
    v32 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_VoiceMaterialCondEntity__o *)v34;
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

  if ( (byte_43912B8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_43912B8 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  EntityList = VoiceMaterialCondMaster__GetEntityList(this, servantId, voicePrefix, voiceId, v10);
  if ( !EntityList )
    sub_B7769C(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_VoiceMaterialCondEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v19.fields.current )
      sub_B7769C(v13, v14);
    if ( LODWORD(v19.fields.current[3].monitor) == 103 )
    {
      klass = v19.fields.current[4].klass;
      v16 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_51270276(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)klass,
        (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
      v17 = 2;
      goto LABEL_10;
    }
  }
  v17 = 0;
  v16 = 0LL;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_VoiceMaterialCondEntity__Dispose__);
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

  if ( (byte_43912B9 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    byte_43912B9 = 1;
  }
  v4 = *voiceId;
  v5 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_13;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !v4 || (v5 = System_String__Split(v4, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_12:
    sub_B7769C(v5, v6);
  v7 = v5;
  if ( (int)v5->max_length < 2 )
    return 0;
  v5 = (System_String_array *)System_Int32__Parse(v5->m_Items[0], 0LL);
  if ( v7->max_length <= 1 )
  {
LABEL_13:
    v17 = sub_B776C8(v5);
    sub_B77668(v17, 0LL);
  }
  v14 = v7->m_Items[1];
  v15 = (int)v5;
  *voiceId = v14;
  sub_B77560((BattleServantConfConponent_o *)voiceId, (System_Int32_array **)v14, v8, v9, v10, v11, v12, v13);
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
  VoiceMaterialCondEntity_c *v15; // x8
  VoiceMaterialCondEntity_o *v16; // x26
  unsigned __int64 v17; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x11
  __int64 v19; // x0
  __int64 v20; // x10
  int32_t condType; // w25
  struct System_Int32_array *condValues; // x9
  int max_length; // w10
  unsigned int v24; // w8
  int32_t targetId; // w26
  int32_t CondValue; // w27
  bool v27; // w27
  System_String_o *PK; // x25
  VoiceMaterialCondEntity_c *klass; // x8
  VoiceMaterialCondEntity_o *v30; // x26
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  __int64 v35; // x0

  if ( (byte_43912BA & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&VoiceMaterialCondEntity_TypeInfo);
    byte_43912BA = 1;
  }
  IsOpen = 1;
  condGroup = 1;
  v12 = 1;
  while ( 1 )
  {
LABEL_32:
    v27 = IsOpen;
    PK = VoiceMaterialCondEntity__CreatePK(svtId, voicePrefix, voiceId, v12, *(const MethodInfo **)&limitCount);
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_41:
      sub_B7769C(lookup, v14);
    klass = lookup->klass;
    v30 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v33 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v33)(
            v30,
            PK,
            *(_QWORD *)(v33 + 8)) & 1) == 0 )
      return v27;
    lookup = (VoiceMaterialCondEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_41;
    v15 = lookup->klass;
    v16 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
    }
    else
    {
LABEL_9:
      v19 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (VoiceMaterialCondEntity_o *)(*(__int64 (__fastcall **)(VoiceMaterialCondEntity_o *, System_String_o *, _QWORD))v19)(
                                            v16,
                                            PK,
                                            *(_QWORD *)(v19 + 8));
    if ( !lookup )
      goto LABEL_41;
    v20 = *(&VoiceMaterialCondEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (VoiceMaterialCondEntity_c *)lookup->klass->_2.typeHierarchy[v20 - 1] != VoiceMaterialCondEntity_TypeInfo )
    {
      goto LABEL_41;
    }
    ++v12;
    if ( condGroup != lookup->fields.condGroup )
    {
      if ( v27 )
        return v27;
      condGroup = lookup->fields.condGroup;
      goto LABEL_19;
    }
    IsOpen = 0;
    if ( v27 )
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
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= max_length )
            {
              v35 = sub_B776C8(lookup);
              sub_B77668(v35, 0LL);
            }
            if ( condValues->m_Items[v24 + 1] == limitCount )
              break;
            if ( (int)++v24 >= max_length )
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