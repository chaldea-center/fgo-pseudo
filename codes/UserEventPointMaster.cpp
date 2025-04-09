void __fastcall UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBBC4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__, method);
    byte_49BBBC4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    158,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
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

  if ( (byte_49BBBC2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__, userId);
    byte_49BBBC2 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *__fastcall UserEventPointMaster__GetEntityDefinitely(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x24
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v19; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v20; // x20
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **v22; // x10
  __int64 v23; // x0
  UserEventPointEntity_o *v24; // x19
  const MethodInfo *v25; // x4

  if ( (byte_49BBBC5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__, userId);
    sub_1B4CF90(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo, v9);
    sub_1B4CF90(&UserEventPointEntity_TypeInfo, v10);
    byte_49BBBC5 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_31A0248 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B9D724(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo,
                 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v24 = (UserEventPointEntity_o *)sub_1B4D1DC(UserEventPointEntity_TypeInfo);
    UserEventPointEntity___ctor_40688552(v24, userId, eventId, groupId, v25);
    return v24;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_31A0248 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1B4D1EC(lookup, v13);
  v19 = lookup->klass;
  v20 = lookup;
  v21 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_16;
    }
    v23 = (__int64)&v19->vtable[*(_DWORD *)v22 + 2].method;
  }
  else
  {
LABEL_16:
    v23 = sub_1B9D724(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo,
            2LL);
  }
  return (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v23)(
                                     v20,
                                     PK,
                                     *(_QWORD *)(v23 + 8));
}


int64_t __fastcall UserEventPointMaster__GetEventActivityPoint(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  Il2CppObject *MasterData_object; // x20
  int64_t Point; // x0
  BalanceConfig_c *v12; // x8
  int64_t v13; // x19
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_49BBBC9 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventPointMaster___, v3);
    sub_1B4CF90(&System_Math_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BBBC9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49B57A5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1B4D1EC(Instance, v8);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            0,
            v9);
  v12 = BalanceConfig_TypeInfo;
  v13 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v12->static_fields->UserEventActivityPointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62622128(v13, UserEventActivityPointMax, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  Il2CppObject *MasterData_object; // x21
  int64_t Point; // x0
  BalanceConfig_c *v14; // x8
  int64_t v15; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_49BBBC8 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&groupId);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5);
    sub_1B4CF90(&System_Math_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49BBBC8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49B57A5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1B4D1EC(Instance, v10);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            groupId,
            v11);
  v14 = BalanceConfig_TypeInfo;
  v15 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v14->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62622128(v15, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  Il2CppObject *MasterData_object; // x20
  int64_t Point; // x0
  BalanceConfig_c *v12; // x8
  int64_t v13; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_49BBBC7 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventPointMaster___, v3);
    sub_1B4CF90(&System_Math_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BBBC7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49B57A5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1B4D1EC(Instance, v8);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            0,
            v9);
  v12 = BalanceConfig_TypeInfo;
  v13 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v12->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62622128(v13, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w24
  int64_t v15; // x23
  int32_t v16; // w25
  _BOOL4 v17; // w8
  _BOOL4 v18; // w9
  BalanceConfig_c *v19; // x8
  int64_t v20; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_49BBBC6 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, userId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Item__, v10);
    sub_1B4CF90(&System_Math_TypeInfo, v11);
    byte_49BBBC6 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_25:
    sub_1B4D1EC(list, userId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_25;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Item__);
      if ( (groupId & 0x80000000) == 0 )
        break;
      if ( list )
      {
        v17 = 1;
LABEL_12:
        v18 = *((_QWORD *)list + 2) == userId && *((_DWORD *)list + 6) == eventId;
        if ( v18 && v17 )
        {
          v19 = BalanceConfig_TypeInfo;
          v20 = *((_QWORD *)list + 4);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          UserPointEventMax = v19->static_fields->UserPointEventMax;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v15 += System_Math__Min_62622128(v20, UserPointEventMax, 0LL);
        }
      }
      if ( v14 == ++v16 )
        return v15;
    }
    if ( !list )
      goto LABEL_25;
    v17 = *((_DWORD *)list + 7) == groupId;
    goto LABEL_12;
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
      sub_1B4D1EC(0LL, v6);
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

  if ( (byte_49BBBC3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__, entity);
    byte_49BBBC3 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}