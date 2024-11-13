void __fastcall ServantOverwriteMaster___ctor(ServantOverwriteMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__, method, v2);
    byte_4B16A97 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    476,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string___ctor__);
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

  if ( (byte_4B16A98 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&type);
    byte_4B16A98 = 1;
  }
  PK = (Il2CppObject *)ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&priority);
  return (ServantOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteMaster__GetServantOverwriteTreasureDeviceId(
        ServantOverwriteMaster_o *this,
        int32_t svtId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantOverwriteEntity_o *v20; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  ServantOverwriteEntity_o *v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  ServantOverwriteEntity_o *v32; // x23
  __int64 methodPtr_low; // x9
  __int64 v34; // x1
  int32_t condTargetId; // w24
  int32_t condType; // w26
  int64_t condValue; // x25
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x2

  if ( (byte_4B16A96 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&type);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantOverwriteEntity_TypeInfo, v15, v16);
    byte_4B16A96 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v18);
  v20 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_17:
      v28 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (ServantOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                        Enumerator,
                                        *(_QWORD *)(v28 + 8));
    v32 = v29;
    if ( !v29 )
      goto LABEL_41;
    methodPtr_low = LOBYTE(ServantOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOverwriteEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOverwriteEntity_TypeInfo )
    {
      sub_1BCACFC(v29);
LABEL_41:
      sub_1BCAA3C(v29, v30);
    }
    if ( v29->fields.svtId == svtId
      && v29->fields.type == type
      && ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v29, 0, v31) )
    {
      condType = v32->fields.condType;
      condTargetId = v32->fields.condTargetId;
      condValue = v32->fields.condValue;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v34);
      if ( CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL, 0LL)
        && (!v20 || v32->fields.priority > v20->fields.priority) )
      {
        v20 = v32;
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_35;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_35:
    v41 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( v20 )
    return ServantOverwriteEntity__GetOverwriteTreasureDeviceId(v20, 0, v42);
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

  if ( (byte_4B16A99 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16A99 = 1;
  }
  PK = (Il2CppObject *)ServantOverwriteEntity__CreatePK(svtId, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantOverwriteMaster__ServantOverwriteEntity__string__TryGetEntity__);
}