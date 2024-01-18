void __fastcall ServantOverwriteMaster___ctor(ServantOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189B97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__, method);
    byte_4189B97 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    473,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
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

  if ( (byte_4189B98 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189B98 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&priority);
  return (ServantOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantOverwriteEntity_o *v16; // x24
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantOverwriteEntity_o *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  ServantOverwriteEntity_o *v24; // x23
  __int64 v25; // x9
  int32_t condTargetId; // w24
  int32_t condType; // w26
  int64_t condValue; // x25
  bool IsOpen; // w0
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  const MethodInfo *v39; // x2
  ServantOverwriteEntity_o *v41; // [xsp+0h] [xbp-60h]

  if ( (byte_4189B96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&ServantOverwriteEntity_TypeInfo, v11);
    byte_4189B96 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  v16 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_10:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v21 = (ServantOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                        Enumerator,
                                        *(_QWORD *)(v20 + 8));
    v24 = v21;
    if ( !v21 )
      goto LABEL_42;
    v25 = *(&ServantOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (ServantOverwriteEntity_c *)v21->klass->_2.typeHierarchy[v25 - 1] != ServantOverwriteEntity_TypeInfo )
    {
      sub_B2C728(v21);
LABEL_42:
      sub_B2C434(v21, v22);
    }
    if ( v21->fields.svtId == svtId
      && v21->fields.type == type
      && ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v21, 0, v23) )
    {
      v41 = v16;
      condType = v24->fields.condType;
      condTargetId = v24->fields.condTargetId;
      condValue = v24->fields.condValue;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
      v16 = v41;
      if ( IsOpen && (!v41 || v24->fields.priority > v41->fields.priority) )
        v16 = v24;
    }
  }
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_36:
    v38 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v16 )
    return ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v16, 0, v39);
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

  if ( (byte_4189B99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__, entity);
    byte_4189B99 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
}