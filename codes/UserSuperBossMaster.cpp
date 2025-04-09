void __fastcall UserSuperBossMaster___ctor(UserSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBE21 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__, method);
    byte_49BBE21 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    175,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
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

  if ( (byte_49BBE1F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__, userId);
    byte_49BBE1F = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&superBossId);
  return (UserSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
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

  if ( (byte_49BBE20 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__, entity);
    byte_49BBE20 = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
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
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x22
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int64_t v15; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  BalanceConfig_c *v29; // x0
  int64_t UserSuperBossDamagePointMax; // x19

  if ( (byte_49BBE22 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserSuperBossEntity__GetEnumerator__, v5);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&System_Math_TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49BBE22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49B57A5 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    sub_1B4D1EC(v11, *(_QWORD *)&eventId);
  userIdNumber = v11->static_fields->userIdNumber;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserSuperBossEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v13);
  v15 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserSuperBossEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_23;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_23:
      v23 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( v24 && *(_QWORD *)(v24 + 16) == userIdNumber && *(_DWORD *)(v24 + 24) == eventId )
      v15 += *(_QWORD *)(v24 + 32);
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_33:
    v28 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  UserSuperBossDamagePointMax = v29->static_fields->UserSuperBossDamagePointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62622128(v15, UserSuperBossDamagePointMax, 0LL);
}