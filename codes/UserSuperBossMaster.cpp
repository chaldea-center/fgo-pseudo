void __fastcall UserSuperBossMaster___ctor(UserSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C036 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
    byte_4A5C036 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
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

  if ( (byte_4A5C034 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
    byte_4A5C034 = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&superBossId);
  return (UserSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
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

  if ( (byte_4A5C035 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
    byte_4A5C035 = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
}


int64_t __fastcall UserSuperBossMaster__getTotalDamagePoint(
        UserSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  __int64 v6; // x1
  int64_t v7; // x22
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int64_t v10; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  BalanceConfig_c *v25; // x0
  int64_t UserSuperBossDamagePointMax; // x19

  if ( (byte_4A5C037 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserSuperBossEntity_TypeInfo);
    byte_4A5C037 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_39:
    sub_1B8880C(UserId, v6);
  v7 = UserId;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
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
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_19:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(UserSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
        || *(UserSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) != UserSuperBossEntity_TypeInfo )
      {
        sub_1B88ACC(v19);
        goto LABEL_39;
      }
      if ( *(_QWORD *)(v19 + 16) == v7 && *(_DWORD *)(v19 + 24) == eventId )
        v10 += *(_QWORD *)(v19 + 32);
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_31:
    v24 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  v25 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  UserSuperBossDamagePointMax = v25->static_fields->UserSuperBossDamagePointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62526020(v10, UserSuperBossDamagePointMax, 0LL);
}