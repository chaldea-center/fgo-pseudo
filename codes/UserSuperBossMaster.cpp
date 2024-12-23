void __fastcall UserSuperBossMaster___ctor(UserSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67AEB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__, method);
    byte_4B67AEB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    175,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSuperBossEntity_o *__fastcall UserSuperBossMaster__GetEntity(
        UserSuperBossMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67AE9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__, userId);
    byte_4B67AE9 = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&superBossId);
  return (UserSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserSuperBossMaster__TryGetEntity(
        UserSuperBossMaster_o *this,
        UserSuperBossEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67AEA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__, entity);
    byte_4B67AEA = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserSuperBossMaster__getTotalDamagePoint(
        UserSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x23
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int64_t v16; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  BalanceConfig_c *v31; // x0
  int64_t UserSuperBossDamagePointMax; // x19

  if ( (byte_4B67AEC & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BE4ACC(&System_Math_TypeInfo, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&UserSuperBossEntity_TypeInfo, v11);
    byte_4B67AEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B61717 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_43:
    sub_1BE4D28(v12, *(_QWORD *)&eventId);
  userIdNumber = v12->static_fields->userIdNumber;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v14);
  v16 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_23:
      v24 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(UserSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
        || *(UserSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != UserSuperBossEntity_TypeInfo )
      {
        sub_1BE4FE8(v25);
        goto LABEL_43;
      }
      if ( *(_QWORD *)(v25 + 16) == userIdNumber && *(_DWORD *)(v25 + 24) == eventId )
        v16 += *(_QWORD *)(v25 + 32);
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
    v30 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  UserSuperBossDamagePointMax = v31->static_fields->UserSuperBossDamagePointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_63518292(v16, UserSuperBossDamagePointMax, 0LL);
}