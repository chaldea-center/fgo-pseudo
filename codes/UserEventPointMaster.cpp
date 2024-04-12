void __fastcall UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEEAE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
    byte_42AEEAE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    153,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *__fastcall UserEventPointMaster__GetEntity(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AEEAC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
    byte_42AEEAC = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *__fastcall UserEventPointMaster__GetEntityDefinitely(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v14; // x24
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v19; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x20
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x11
  __int64 v23; // x0
  UserEventPointEntity_o *v24; // x19
  const MethodInfo *v25; // x4
  UserEventPointEntity_o *v26; // x0
  __int64 v27; // x10

  if ( (byte_42AEEAF & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&UserEventPointEntity_TypeInfo);
    byte_42AEEAF = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v14 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v12);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v14,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v24 = (UserEventPointEntity_o *)sub_B52A54(UserEventPointEntity_TypeInfo);
    UserEventPointEntity___ctor_23171268(v24, userId, eventId, groupId, v25);
    return v24;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B52A5C(lookup, v11);
  v19 = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v23 = (__int64)&v19->vtable[*(_DWORD *)v22 + 2].method;
  }
  else
  {
LABEL_16:
    v23 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v18);
  }
  v26 = (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v23)(
                                    v20,
                                    PK,
                                    *(_QWORD *)(v23 + 8));
  if ( !v26 )
    return 0LL;
  v27 = *(&UserEventPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27 )
    return 0LL;
  if ( (UserEventPointEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] == UserEventPointEntity_TypeInfo )
    return v26;
  return 0LL;
}


int64_t __fastcall UserEventPointMaster__GetEventActivityPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x4
  int64_t Point; // x19
  BalanceConfig_c *v8; // x8
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_42AEEB3 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B52A5C(Instance, v4);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0, v6);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v8->static_fields->UserEventActivityPointMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45037076(Point, UserEventActivityPointMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x4
  int64_t Point; // x19
  BalanceConfig_c *v10; // x8
  int64_t UserPointEventMax; // x20

  if ( (byte_42AEEB2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEB2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B52A5C(Instance, v6);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, groupId, v8);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v10->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45037076(Point, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x4
  int64_t Point; // x19
  BalanceConfig_c *v8; // x8
  int64_t UserPointEventMax; // x20

  if ( (byte_42AEEB1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEEB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B52A5C(Instance, v4);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0, v6);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v8->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45037076(Point, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w24
  int64_t v11; // x23
  int32_t v12; // w25
  __int64 v13; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x8
  _BOOL4 v15; // w9
  _BOOL4 v16; // w10
  BalanceConfig_c *v17; // x0
  int64_t klass; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_42AEEB0 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&UserEventPointEntity_TypeInfo);
    byte_42AEEB0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B52A5C(list, userId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (v13 = *(&UserEventPointEntity_TypeInfo->_2.bitflags2 + 1),
            *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
      {
        if ( (UserEventPointEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == UserEventPointEntity_TypeInfo )
          v14 = list;
        else
          v14 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
        {
LABEL_10:
          if ( !v14 )
            goto LABEL_33;
          v15 = HIDWORD(v14->fields._syncRoot) == groupId;
          goto LABEL_17;
        }
      }
      else
      {
        v14 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
          goto LABEL_10;
      }
      v15 = 1;
      if ( !v14 )
        goto LABEL_19;
LABEL_17:
      if ( v14->fields.items != (struct System_Collections_Generic_IList_T__o *)userId )
      {
LABEL_19:
        v16 = 0;
        goto LABEL_20;
      }
      v16 = LODWORD(v14->fields._syncRoot) == eventId;
LABEL_20:
      if ( v16 && v15 )
      {
        if ( !v14 )
          goto LABEL_33;
        v17 = BalanceConfig_TypeInfo;
        klass = (int64_t)v14[1].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        UserPointEventMax = v17->static_fields->UserPointEventMax;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v11 += System_Math__Min_45037076(klass, UserPointEventMax, 0LL);
      }
      if ( ++v12 >= v10 )
        return v11;
    }
  }
  return 0LL;
}


int64_t __fastcall UserEventPointMaster__GetPoint(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v6; // x1
  bool v7; // w8
  int64_t result; // x0
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v7 = UserEventPointMaster__TryGetEntity(this, &entity, userId, eventId, groupId, v5);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v6);
    return entity->fields.value;
  }
  return result;
}


UserEventPointEntity_o *__fastcall UserEventPointMaster__GetTowerProgress(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  if ( UserEventPointMaster__TryGetEntity(this, &entity, userId, eventId, groupId, v5) )
    return entity;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventPointMaster__TryGetEntity(
        UserEventPointMaster_o *this,
        UserEventPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AEEAD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
    byte_42AEEAD = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}