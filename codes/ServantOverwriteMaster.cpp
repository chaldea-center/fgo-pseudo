void __fastcall ServantOverwriteMaster___ctor(ServantOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B20A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
    byte_42B20A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    474,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantOverwriteEntity_o *__fastcall ServantOverwriteMaster__GetEntity(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B20A5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
    byte_42B20A5 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&priority);
  return (ServantOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantOverwriteEntity_o *v11; // x24
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  ServantOverwriteEntity_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  ServantOverwriteEntity_o *v19; // x23
  __int64 v20; // x9
  int32_t condTargetId; // w24
  int32_t condType; // w26
  int64_t condValue; // x25
  bool IsOpen; // w0
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  const MethodInfo *v34; // x2
  ServantOverwriteEntity_o *v36; // [xsp+0h] [xbp-60h]

  if ( (byte_42B20A3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantOverwriteEntity_TypeInfo);
    byte_42B20A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  v11 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_10:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v16 = (ServantOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                        Enumerator,
                                        *(_QWORD *)(v15 + 8));
    v19 = v16;
    if ( !v16 )
      goto LABEL_42;
    v20 = *(&ServantOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (ServantOverwriteEntity_c *)v16->klass->_2.typeHierarchy[v20 - 1] != ServantOverwriteEntity_TypeInfo )
    {
      sub_B52D50(v16);
LABEL_42:
      sub_B52A5C(v16, v17);
    }
    if ( v16->fields.svtId == svtId
      && v16->fields.type == type
      && ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v16, 0, v18) )
    {
      v36 = v11;
      condType = v19->fields.condType;
      condTargetId = v19->fields.condTargetId;
      condValue = v19->fields.condValue;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
      v11 = v36;
      if ( IsOpen && (!v36 || v19->fields.priority > v36->fields.priority) )
        v11 = v19;
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_36:
    v33 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v11 )
    return ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v11, 0, v34);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantOverwriteMaster__TryGetEntity(
        ServantOverwriteMaster_o *this,
        ServantOverwriteEntity_o **entity,
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B20A6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
    byte_42B20A6 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
}