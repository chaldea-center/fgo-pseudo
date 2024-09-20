void __fastcall UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
    byte_4A5BDE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    154,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *__fastcall UserEventPointMaster__GetEntity(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BDE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
    byte_4A5BDE2 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x24
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x10
  __int64 v21; // x0
  UserEventPointEntity_o *v22; // x19
  const MethodInfo *v23; // x4
  UserEventPointEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BDE5 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserEventPointEntity_TypeInfo);
    byte_4A5BDE5 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserEventPointEntity_o *)sub_1B887FC(UserEventPointEntity_TypeInfo);
    UserEventPointEntity___ctor_40091716(v22, userId, eventId, groupId, v23);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B8880C(lookup, v11);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                       v18,
                                       PK,
                                       *(_QWORD *)(v21 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserEventPointEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventPointEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


int64_t __fastcall UserEventPointMaster__GetEventActivityPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x4
  int64_t Point; // x0
  BalanceConfig_c *v8; // x8
  int64_t v9; // x19
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_4A5BDE9 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v4);
  Point = UserEventPointMaster__GetPoint((UserEventPointMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0, v6);
  v8 = BalanceConfig_TypeInfo;
  v9 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v8->static_fields->UserEventActivityPointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62526020(v9, UserEventActivityPointMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x4
  int64_t Point; // x0
  BalanceConfig_c *v10; // x8
  int64_t v11; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4A5BDE8 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDE8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v6);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            (int64_t)Instance,
            eventId,
            groupId,
            v8);
  v10 = BalanceConfig_TypeInfo;
  v11 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v10->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62526020(v11, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x4
  int64_t Point; // x0
  BalanceConfig_c *v8; // x8
  int64_t v9; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4A5BDE7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDE7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v4);
  Point = UserEventPointMaster__GetPoint((UserEventPointMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0, v6);
  v8 = BalanceConfig_TypeInfo;
  v9 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v8->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62526020(v9, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w24
  int64_t v12; // x23
  int32_t v13; // w25
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__o *v15; // x8
  _BOOL4 v16; // w9
  _BOOL4 v17; // w10
  BalanceConfig_c *v18; // x0
  int64_t monitor; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_4A5BDE6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UserEventPointEntity_TypeInfo);
    byte_4A5BDE6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_31:
    sub_1B8880C(list, userId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_31;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(UserEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (UserEventPointEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventPointEntity_TypeInfo )
          v15 = list;
        else
          v15 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
        {
LABEL_10:
          if ( !v15 )
            goto LABEL_31;
          v16 = HIDWORD(v15[1].klass) == groupId;
          goto LABEL_18;
        }
      }
      else
      {
        v15 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
          goto LABEL_10;
      }
      if ( v15 )
      {
        v16 = 1;
LABEL_18:
        v17 = v15->fields.items == (struct System_Collections_Generic_IList_T__o *)userId
           && LODWORD(v15[1].klass) == eventId;
        if ( v17 && v16 )
        {
          v18 = BalanceConfig_TypeInfo;
          monitor = (int64_t)v15[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = BalanceConfig_TypeInfo;
          }
          UserPointEventMax = v18->static_fields->UserPointEventMax;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v12 += System_Math__Min_62526020(monitor, UserPointEventMax, 0LL);
        }
      }
      if ( v11 == ++v13 )
        return v12;
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
      sub_1B8880C(0LL, v6);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5BDE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
    byte_4A5BDE3 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}