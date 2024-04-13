void __fastcall UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70A6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    153,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
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

  if ( (byte_42E70A4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&groupId);
    byte_42E70A4 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *__fastcall UserEventPointMaster__GetEntityDefinitely(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x24
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x20
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x11
  __int64 v26; // x0
  UserEventPointEntity_o *v27; // x19
  const MethodInfo *v28; // x4
  UserEventPointEntity_o *v29; // x0
  __int64 v30; // x10

  if ( (byte_42E70A7 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      eventId,
      *(_QWORD *)&groupId);
    sub_B5D5C4(&UserEventPointEntity_TypeInfo, v9, v10, v11);
    byte_42E70A7 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v17 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v15);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v17,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v27 = (UserEventPointEntity_o *)sub_B5D694(UserEventPointEntity_TypeInfo);
    UserEventPointEntity___ctor_22460752(v27, userId, eventId, groupId, v28);
    return v27;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B5D69C(lookup, v14);
  v22 = lookup->klass;
  v23 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2].method;
  }
  else
  {
LABEL_16:
    v26 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v21);
  }
  v29 = (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v26)(
                                    v23,
                                    PK,
                                    *(_QWORD *)(v26 + 8));
  if ( !v29 )
    return 0LL;
  v30 = *(&UserEventPointEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v30 )
    return 0LL;
  if ( (UserEventPointEntity_c *)v29->klass->_2.typeHierarchy[v30 - 1] == UserEventPointEntity_TypeInfo )
    return v29;
  return 0LL;
}


int64_t __fastcall UserEventPointMaster__GetEventActivityPoint(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v20; // x4
  int64_t Point; // x19
  BalanceConfig_c *v22; // x8
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_42E70AB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5, v6, v7);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E70AB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B5D69C(Instance, v18);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0, v20);
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v22->static_fields->UserEventActivityPointMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45149944(Point, UserEventActivityPointMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v21; // x4
  int64_t Point; // x19
  BalanceConfig_c *v23; // x8
  int64_t UserPointEventMax; // x20

  if ( (byte_42E70AA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v6, v7, v8);
    sub_B5D5C4(&System_Math_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E70AA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B5D69C(Instance, v19);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, groupId, v21);
  v23 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v23->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45149944(Point, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v20; // x4
  int64_t Point; // x19
  BalanceConfig_c *v22; // x8
  int64_t UserPointEventMax; // x20

  if ( (byte_42E70A9 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5, v6, v7);
    sub_B5D5C4(&System_Math_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E70A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B5D69C(Instance, v18);
  Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0, v20);
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v22->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_45149944(Point, UserPointEventMax, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v22; // w24
  int64_t v23; // x23
  int32_t v24; // w25
  __int64 v25; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x8
  _BOOL4 v27; // w9
  _BOOL4 v28; // w10
  BalanceConfig_c *v29; // x0
  int64_t klass; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_42E70A8 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, eventId, *(_QWORD *)&groupId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Math_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UserEventPointEntity_TypeInfo, v17, v18, v19);
    byte_42E70A8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_B5D69C(list, userId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_33;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v24,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (v25 = *(&UserEventPointEntity_TypeInfo->_2.bitflags2 + 1),
            *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
      {
        if ( (UserEventPointEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] == UserEventPointEntity_TypeInfo )
          v26 = list;
        else
          v26 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
        {
LABEL_10:
          if ( !v26 )
            goto LABEL_33;
          v27 = HIDWORD(v26->fields._syncRoot) == groupId;
          goto LABEL_17;
        }
      }
      else
      {
        v26 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
          goto LABEL_10;
      }
      v27 = 1;
      if ( !v26 )
        goto LABEL_19;
LABEL_17:
      if ( v26->fields.items != (struct System_Collections_Generic_IList_T__o *)userId )
      {
LABEL_19:
        v28 = 0;
        goto LABEL_20;
      }
      v28 = LODWORD(v26->fields._syncRoot) == eventId;
LABEL_20:
      if ( v28 && v27 )
      {
        if ( !v26 )
          goto LABEL_33;
        v29 = BalanceConfig_TypeInfo;
        klass = (int64_t)v26[1].klass;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v29 = BalanceConfig_TypeInfo;
        }
        UserPointEventMax = v29->static_fields->UserPointEventMax;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v23 += System_Math__Min_45149944(klass, UserPointEventMax, 0LL);
      }
      if ( ++v24 >= v22 )
        return v23;
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
      sub_B5D69C(0LL, v6);
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

  if ( (byte_42E70A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42E70A5 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}