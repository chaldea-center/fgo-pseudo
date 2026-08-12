void UserEventRaidMaster___ctor(UserEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597170C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string___ctor__);
    byte_597170C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaidEntity_o *UserEventRaidMaster__GetEntity(
        UserEventRaidMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597170A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__GetEntity__);
    byte_597170A = 1;
  }
  PK = (Il2CppObject *)UserEventRaidEntity__CreatePK(userId, eventId, day, *(const MethodInfo **)&day);
  return (UserEventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventRaidMaster__TryGetEntity(
        UserEventRaidMaster_o *this,
        UserEventRaidEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597170B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__TryGetEntity__);
    byte_597170B = 1;
  }
  PK = (Il2CppObject *)UserEventRaidEntity__CreatePK(userId, eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t UserEventRaidMaster__getDamagePoint(
        UserEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t result; // x0
  __int64 v10; // x1
  int64_t v11; // x8
  BalanceConfig_c *v12; // x0
  int64_t v13; // x19
  int64_t UserRaidDamagePointMax; // x20

  if ( (byte_597170E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597170E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    v8 = NetworkManager_TypeInfo;
  }
  result = (int64_t)UserEventRaidMaster__GetEntity(this, v8->static_fields->userIdNumber, eventId, day, v4);
  if ( result )
  {
    v11 = result;
    v12 = BalanceConfig_TypeInfo;
    v13 = *(_QWORD *)(v11 + 32);
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v12 = BalanceConfig_TypeInfo;
    }
    UserRaidDamagePointMax = v12->static_fields->UserRaidDamagePointMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    return System_Math__Min_77153608(v13, UserRaidDamagePointMax, 0);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UserEventRaidEntity_o *UserEventRaidMaster__getEntityFromEventIdAndDay(
        UserEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
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
  UserEventRaidEntity_o *v22; // x21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerator_T__o *v28; // [xsp+18h] [xbp-38h]

  if ( (byte_597170F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597170F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserEventRaidEntity__GetEnumerator__);
  v28 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v28 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v28 )
      sub_2213CDC(v15, v16);
    v17 = v28->klass;
    v18 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventRaidEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v28, System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v28,
            *(_QWORD *)(v20 + 8));
    v22 = (UserEventRaidEntity_o *)v21;
    if ( v21 && *(_DWORD *)(v21 + 24) == eventId && *(_DWORD *)(v21 + 28) == day )
      goto LABEL_26;
  }
  v22 = 0;
LABEL_26:
  if ( v28 )
  {
    v23 = v28->klass;
    v24 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_31;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_31:
      v26 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(v28, *(_QWORD *)(v26 + 8));
  }
  return v22;
}


// local variable allocation has failed, the output may be wrong!
int64_t UserEventRaidMaster__getTotalDamagePoint(
        UserEventRaidMaster_o *this,
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
  int64_t UserRaidDamagePointMax; // x20
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_597170D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserEventRaidEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597170D = 1;
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
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserEventRaidEntity__GetEnumerator__);
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
      while ( *((System_Collections_Generic_IEnumerator_UserEventRaidEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo )
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
      v20 = sub_224BC3C(v29, System_Collections_Generic_IEnumerator_UserEventRaidEntity__TypeInfo, 0);
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
  UserRaidDamagePointMax = v26->static_fields->UserRaidDamagePointMax;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  return System_Math__Min_77153608(v10, UserRaidDamagePointMax, 0);
}