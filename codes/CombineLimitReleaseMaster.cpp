void __fastcall CombineLimitReleaseMaster___ctor(CombineLimitReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41861E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__, method);
    byte_41861E1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    451,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitReleaseEntity_o *__fastcall CombineLimitReleaseMaster__GetEntity(
        CombineLimitReleaseMaster_o *this,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41861E2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_41861E2 = 1;
  }
  PK = CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, *(const MethodInfo **)&svtLimit);
  return (CombineLimitReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitReleaseMaster__IsExistSealedLimitCount(
        CombineLimitReleaseMaster_o *this,
        int32_t combineLimitId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x11
  int32_t v25; // w21
  int32_t v26; // w23
  int64_t v27; // x22
  bool v28; // w20
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-60h]

  if ( (byte_41861E0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&combineLimitId);
    sub_B2C35C(&CombineLimitReleaseEntity_TypeInfo, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_41861E0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&combineLimitId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
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
      v21 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v12);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    if ( !v22
      || (v24 = *(&CombineLimitReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v24)
      || *(CombineLimitReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v24 - 8) != CombineLimitReleaseEntity_TypeInfo )
    {
      sub_B2C434(v22, v23);
    }
    if ( v22[4] == combineLimitId )
    {
      v26 = v22[6];
      v25 = v22[7];
      v27 = (int)v22[8];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v26, v25, v27, 0, 0LL) )
      {
        v34 = 88;
        v28 = 1;
        goto LABEL_28;
      }
    }
  }
  v28 = 0;
  v34 = 86;
LABEL_28:
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
        goto LABEL_32;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_32:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v12);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v34 == 86 )
    return 0;
  return v28;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitReleaseMaster__TryGetEntity(
        CombineLimitReleaseMaster_o *this,
        CombineLimitReleaseEntity_o **entity,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41861E3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__,
      entity);
    byte_41861E3 = 1;
  }
  PK = CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
}