void UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C387E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
    byte_4C387E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    158,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *UserEventPointMaster__GetEntity(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C387E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
    byte_4C387E3 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventPointEntity_o *UserEventPointMaster__GetEntityDefinitely(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v12; // x24
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v16; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **v19; // x10
  __int64 v20; // x0
  UserEventPointEntity_o *v21; // x19
  const MethodInfo *v22; // x4

  if ( (byte_4C387E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo);
    sub_1C32C20(&UserEventPointEntity_TypeInfo);
    byte_4C387E6 = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v12 = lookup;
  v13 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_8;
    }
    v15 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v15 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v15)(
          v12,
          PK,
          *(_QWORD *)(v15 + 8))
      & 1) == 0 )
  {
    v21 = (UserEventPointEntity_o *)sub_1C32E6C(UserEventPointEntity_TypeInfo);
    UserEventPointEntity___ctor_42948292(v21, userId, eventId, groupId, v22);
    return v21;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C32E7C(lookup);
  v16 = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v19 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_16;
    }
    v20 = (__int64)&v16->vtable[*(_DWORD *)v19 + 2];
  }
  else
  {
LABEL_16:
    v20 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventPointEntity__TypeInfo, 2);
  }
  return (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v20)(
                                     v17,
                                     PK,
                                     *(_QWORD *)(v20 + 8));
}


int64_t UserEventPointMaster__GetEventActivityPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x4
  Il2CppObject *MasterData_object; // x20
  int64_t Point; // x0
  BalanceConfig_c *v7; // x8
  int64_t v8; // x19
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_4C387EA & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C387EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            0,
            v4);
  v7 = BalanceConfig_TypeInfo;
  v8 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v7->static_fields->UserEventActivityPointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65042316(v8, UserEventActivityPointMax, 0);
}


int64_t UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x4
  Il2CppObject *MasterData_object; // x21
  int64_t Point; // x0
  BalanceConfig_c *v9; // x8
  int64_t v10; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4C387E9 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C387E9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            groupId,
            v6);
  v9 = BalanceConfig_TypeInfo;
  v10 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v9->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65042316(v10, UserPointEventMax, 0);
}


int64_t UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x4
  Il2CppObject *MasterData_object; // x20
  int64_t Point; // x0
  BalanceConfig_c *v7; // x8
  int64_t v8; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4C387E8 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C387E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            eventId,
            0,
            v4);
  v7 = BalanceConfig_TypeInfo;
  v8 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v7->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65042316(v8, UserPointEventMax, 0);
}


int64_t UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w24
  int64_t v12; // x23
  int32_t v13; // w25
  _BOOL4 v14; // w8
  _BOOL4 v15; // w9
  BalanceConfig_c *v16; // x8
  int64_t v17; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_4C387E7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Item__);
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C387E7 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_25:
    sub_1C32E7C(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_25;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventPointEntity__get_Item__);
      if ( (groupId & 0x80000000) == 0 )
        break;
      if ( list )
      {
        v14 = 1;
LABEL_12:
        v15 = *((_QWORD *)list + 2) == userId && *((_DWORD *)list + 6) == eventId;
        if ( v15 && v14 )
        {
          v16 = BalanceConfig_TypeInfo;
          v17 = *((_QWORD *)list + 4);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v16 = BalanceConfig_TypeInfo;
          }
          UserPointEventMax = v16->static_fields->UserPointEventMax;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v12 += System_Math__Min_65042316(v17, UserPointEventMax, 0);
        }
      }
      if ( v11 == ++v13 )
        return v12;
    }
    if ( !list )
      goto LABEL_25;
    v14 = *((_DWORD *)list + 7) == groupId;
    goto LABEL_12;
  }
  return 0;
}


int64_t UserEventPointMaster__GetPoint(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool v6; // w8
  int64_t result; // x0
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v6 = UserEventPointMaster__TryGetEntity(this, &entity, userId, eventId, groupId, v5);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_1C32E7C(0);
    return *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  }
  return result;
}


UserEventPointEntity_o *UserEventPointMaster__GetTowerProgress(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserEventPointEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( UserEventPointMaster__TryGetEntity(this, &entity, userId, eventId, groupId, v5) )
    return entity;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserEventPointMaster__TryGetEntity(
        UserEventPointMaster_o *this,
        UserEventPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C387E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
    byte_4C387E4 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}