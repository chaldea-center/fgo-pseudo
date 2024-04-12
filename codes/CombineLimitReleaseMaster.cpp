void __fastcall CombineLimitReleaseMaster___ctor(CombineLimitReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C17 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
    byte_42B2C17 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    452,
    (const MethodInfo_23E268C *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitReleaseEntity_o *__fastcall CombineLimitReleaseMaster__GetEntity(
        CombineLimitReleaseMaster_o *this,
        int32_t svtId,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2C18 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
    byte_42B2C18 = 1;
  }
  PK = CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, *(const MethodInfo **)&svtLimit);
  return (CombineLimitReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitReleaseMaster__IsExistSealedLimitCount(
        CombineLimitReleaseMaster_o *this,
        int32_t combineLimitId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x11
  int32_t v20; // w21
  int32_t v21; // w23
  int64_t v22; // x22
  bool v23; // w20
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-60h]

  if ( (byte_42B2C16 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CombineLimitReleaseEntity_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B2C16 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&combineLimitId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17
      || (v19 = *(&CombineLimitReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v19)
      || *(CombineLimitReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v19 - 8) != CombineLimitReleaseEntity_TypeInfo )
    {
      sub_B52A5C(v17, v18);
    }
    if ( v17[4] == combineLimitId )
    {
      v21 = v17[6];
      v20 = v17[7];
      v22 = (int)v17[8];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(v21, v20, v22, 0, 0LL) )
      {
        v29 = 88;
        v23 = 1;
        goto LABEL_28;
      }
    }
  }
  v23 = 0;
  v29 = 86;
LABEL_28:
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 86 )
    return 0;
  return v23;
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

  if ( (byte_42B2C19 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
    byte_42B2C19 = 1;
  }
  PK = CombineLimitReleaseEntity__CreatePK(svtId, svtLimit, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_CombineLimitReleaseMaster__CombineLimitReleaseEntity__string__TryGetEntity__);
}