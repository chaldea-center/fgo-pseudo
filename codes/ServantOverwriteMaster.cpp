void __fastcall ServantOverwriteMaster___ctor(ServantOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B909 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
    byte_4A5B909 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    476,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantOverwriteEntity_o *__fastcall ServantOverwriteMaster__GetEntity(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B90A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
    byte_4A5B90A = 1;
  }
  PK = (Il2CppObject *)ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&priority);
  return (ServantOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantOverwriteEntity_o *v10; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  ServantOverwriteEntity_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  ServantOverwriteEntity_o *v22; // x23
  __int64 methodPtr_low; // x9
  int32_t condTargetId; // w24
  int32_t condType; // w26
  int64_t condValue; // x25
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4A5B908 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantOverwriteEntity_TypeInfo);
    byte_4A5B908 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  v10 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (ServantOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                        Enumerator,
                                        *(_QWORD *)(v18 + 8));
    v22 = v19;
    if ( !v19 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(ServantOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOverwriteEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOverwriteEntity_TypeInfo )
    {
      sub_1B88ACC(v19);
LABEL_41:
      sub_1B8880C(v19, v20);
    }
    if ( v19->fields.svtId == svtId
      && v19->fields.type == type
      && ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v19, 0, v21) )
    {
      condType = v22->fields.condType;
      condTargetId = v22->fields.condTargetId;
      condValue = v22->fields.condValue;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL, 0LL)
        && (!v10 || v22->fields.priority > v10->fields.priority) )
      {
        v10 = v22;
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_35;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_35:
    v30 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v10 )
    return ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v10, 0, v31);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B90B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
    byte_4A5B90B = 1;
  }
  PK = (Il2CppObject *)ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
}