void UserSuperBossMaster___ctor(UserSuperBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971971 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
    byte_5971971 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    177,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSuperBossEntity_o *UserSuperBossMaster__GetEntity(
        UserSuperBossMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597196F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
    byte_597196F = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&superBossId);
  return (UserSuperBossEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserSuperBossMaster__TryGetEntity(
        UserSuperBossMaster_o *this,
        UserSuperBossEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t superBossId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971970 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
    byte_5971970 = 1;
  }
  PK = (Il2CppObject *)UserSuperBossEntity__CreatePK(userId, eventId, superBossId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserSuperBossMaster__UserSuperBossEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t UserSuperBossMaster__getTotalDamagePoint(
        UserSuperBossMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *v9; // x21
  int64_t v10; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  BalanceConfig_c *v26; // x0
  int64_t UserSuperBossDamagePointMax; // x20
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5971972 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserSuperBossEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5971972 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    v5 = NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    sub_2213CDC(v5, *(_QWORD *)&eventId);
  userIdNumber = v5->static_fields->userIdNumber;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserSuperBossEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v8);
  v9 = Enumerator;
  v10 = 0;
  while ( 1 )
  {
    klass = v9->klass;
    v12 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v14 = sub_224BC3C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            v9,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v29 )
      sub_2213CDC(v15, v16);
    v17 = v29->klass;
    v18 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserSuperBossEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_24:
      v20 = sub_224BC3C(v29, System_Collections_Generic_IEnumerator_UserSuperBossEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v29,
            *(_QWORD *)(v20 + 8));
    if ( v21 && *(_QWORD *)(v21 + 16) == userIdNumber && *(_DWORD *)(v21 + 24) == eventId )
    {
      v9 = v29;
      v10 += *(_QWORD *)(v21 + 32);
    }
    else
    {
      v9 = v29;
    }
  }
  if ( v29 )
  {
    v22 = v29->klass;
    v23 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_39;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_39:
      v25 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v29, *(_QWORD *)(v25 + 8));
  }
  v26 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v26 = BalanceConfig_TypeInfo;
  }
  UserSuperBossDamagePointMax = v26->static_fields->UserSuperBossDamagePointMax;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  return System_Math__Min_77153608(v10, UserSuperBossDamagePointMax, 0);
}