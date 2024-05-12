void __fastcall UserSuperBossMaster___ctor(UserSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4391253 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
    byte_4391253 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    170,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSuperBossEntity_o *__fastcall UserSuperBossMaster__GetEntity(
        UserSuperBossMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4391251 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
    byte_4391251 = 1;
  }
  PK = UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&superBossId);
  return (UserSuperBossEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_4391252 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
    byte_4391252 = 1;
  }
  PK = UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int64_t v10; // x19
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  BalanceConfig_c *v25; // x0
  int64_t UserSuperBossDamagePointMax; // x20

  if ( (byte_4391254 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UserSuperBossEntity_TypeInfo);
    byte_4391254 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_42:
    sub_B7769C(UserId, v6);
  v7 = UserId;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  v10 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_13:
      v14 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v16 = *(&UserSuperBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v16
        || *(UserSuperBossEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v16 - 8) != UserSuperBossEntity_TypeInfo )
      {
        sub_B77990(v15);
        goto LABEL_42;
      }
      if ( *(_QWORD *)(v15 + 16) == v7 && *(_DWORD *)(v15 + 24) == eventId )
        v10 += *(_QWORD *)(v15 + 32);
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_32:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  UserSuperBossDamagePointMax = v25->static_fields->UserSuperBossDamagePointMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45851612(v10, UserSuperBossDamagePointMax, 0LL);
}