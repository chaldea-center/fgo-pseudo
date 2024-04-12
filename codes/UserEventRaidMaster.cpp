void __fastcall UserEventRaidMaster___ctor(UserEventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEEC9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string___ctor__);
    byte_42AEEC9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    149,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRaidEntity_o *__fastcall UserEventRaidMaster__GetEntity(
        UserEventRaidMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEEC7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__GetEntity__);
    byte_42AEEC7 = 1;
  }
  PK = UserEventRaidEntity__CreatePK(userId, eventId, day, *(const MethodInfo **)&day);
  return (UserEventRaidEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventRaidMaster__TryGetEntity(
        UserEventRaidMaster_o *this,
        UserEventRaidEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AEEC8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__TryGetEntity__);
    byte_42AEEC8 = 1;
  }
  PK = UserEventRaidEntity__CreatePK(userId, eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventRaidMaster__UserEventRaidEntity__string__TryGetEntity__);
}


int64_t __fastcall UserEventRaidMaster__getDamagePoint(
        UserEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v8; // x4
  int64_t result; // x0
  int64_t v10; // x19
  BalanceConfig_c *v11; // x0
  int64_t UserRaidDamagePointMax; // x20

  if ( (byte_42AEECB & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEECB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  result = (int64_t)UserEventRaidMaster__GetEntity(this, UserId, eventId, day, v8);
  if ( result )
  {
    v10 = *(_QWORD *)(result + 32);
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    UserRaidDamagePointMax = v11->static_fields->UserRaidDamagePointMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    return System_Math__Min_45037076(v10, UserRaidDamagePointMax, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UserEventRaidEntity_o *__fastcall UserEventRaidMaster__getEntityFromEventIdAndDay(
        UserEventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  UserEventRaidEntity_o *v19; // x0
  UserEventRaidEntity_o *v20; // x22
  __int64 v21; // x9
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-50h]

  if ( (byte_42AEECC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UserEventRaidEntity_TypeInfo);
    byte_42AEECC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (UserEventRaidEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                     Enumerator,
                                     *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      v21 = *(&UserEventRaidEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (UserEventRaidEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UserEventRaidEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B52D50(v19);
        goto LABEL_35;
      }
      if ( v19->fields.eventId == eventId && v19->fields.day == day )
      {
        v22 = 73;
        goto LABEL_25;
      }
    }
  }
  v20 = 0LL;
  v22 = 71;
LABEL_25:
  v28 = v22;
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 71 )
    return 0LL;
  return v20;
}


int64_t __fastcall UserEventRaidMaster__getTotalDamagePoint(
        UserEventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  __int64 v6; // x1
  int64_t v7; // x22
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int64_t v11; // x19
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  BalanceConfig_c *v27; // x0
  int64_t UserRaidDamagePointMax; // x20

  if ( (byte_42AEECA & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UserEventRaidEntity_TypeInfo);
    byte_42AEECA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_42:
    sub_B52A5C(UserId, v6);
  v7 = UserId;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  v11 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_25:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_13:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v17 = *(&UserEventRaidEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v17
        || *(UserEventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v17 - 8) != UserEventRaidEntity_TypeInfo )
      {
        UserId = sub_B52D50(v16);
        goto LABEL_42;
      }
      if ( *(_QWORD *)(v16 + 16) == v7 && *(_DWORD *)(v16 + 24) == eventId )
        v11 += *(_QWORD *)(v16 + 32);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_32:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  v27 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  UserRaidDamagePointMax = v27->static_fields->UserRaidDamagePointMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45037076(v11, UserRaidDamagePointMax, 0LL);
}