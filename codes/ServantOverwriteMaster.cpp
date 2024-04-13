void __fastcall ServantOverwriteMaster___ctor(ServantOverwriteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA03 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAA03 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    475,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
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

  if ( (byte_42EAA04 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__,
      svtId,
      type,
      *(_QWORD *)&priority);
    byte_42EAA04 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&priority);
  return (ServantOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantOverwriteEntity_o *v26; // x24
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  ServantOverwriteEntity_o *v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  ServantOverwriteEntity_o *v34; // x23
  __int64 v35; // x9
  int32_t condTargetId; // w24
  int32_t condType; // w26
  int64_t condValue; // x25
  bool IsOpen; // w0
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  const MethodInfo *v49; // x2
  ServantOverwriteEntity_o *v51; // [xsp+0h] [xbp-60h]

  if ( (byte_42EAA02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, svtId, type, method);
    sub_B5D5C4(&CondType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantOverwriteEntity_TypeInfo, v19, v20, v21);
    byte_42EAA02 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v23);
  v26 = 0LL;
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
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
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
          goto LABEL_10;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_10:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v44);
    }
    v31 = (ServantOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                        Enumerator,
                                        *(_QWORD *)(v30 + 8));
    v34 = v31;
    if ( !v31 )
      goto LABEL_42;
    v35 = *(&ServantOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (ServantOverwriteEntity_c *)v31->klass->_2.typeHierarchy[v35 - 1] != ServantOverwriteEntity_TypeInfo )
    {
      sub_B5D990(v31);
LABEL_42:
      sub_B5D69C(v31, v32);
    }
    if ( v31->fields.svtId == svtId
      && v31->fields.type == type
      && ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v31, 0, v33) )
    {
      v51 = v26;
      condType = v34->fields.condType;
      condTargetId = v34->fields.condTargetId;
      condValue = v34->fields.condValue;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
      v26 = v51;
      if ( IsOpen && (!v51 || v34->fields.priority > v51->fields.priority) )
        v26 = v34;
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_36:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  if ( v26 )
    return ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v26, 0, v49);
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

  if ( (byte_42EAA05 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&type);
    byte_42EAA05 = 1;
  }
  PK = ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
}