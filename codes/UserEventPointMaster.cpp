void __fastcall UserEventPointMaster___ctor(UserEventPointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__, method, v2);
    byte_4B16E99 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    154,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string___ctor__);
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

  if ( (byte_4B16E97 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E97 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  return (UserEventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__GetEntity__);
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
  __int64 v10; // x2
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x24
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x20
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  UserEventPointEntity_o *v27; // x19
  const MethodInfo *v28; // x4
  UserEventPointEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16E9A & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&UserEventPointEntity_TypeInfo, v9, v10);
    byte_4B16E9A = 1;
  }
  PK = UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&groupId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v27 = (UserEventPointEntity_o *)sub_1BCAA2C(UserEventPointEntity_TypeInfo, v19, v20, v21);
    UserEventPointEntity___ctor_40821504(v27, userId, eventId, groupId, v28);
    return v27;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1BCAA3C(lookup, v13);
  v22 = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v24;
      v25 += 2;
      if ( !v24 )
        goto LABEL_16;
    }
    v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2].method;
  }
  else
  {
LABEL_16:
    v26 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserEventPointEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v26)(
                                       v23,
                                       PK,
                                       *(_QWORD *)(v26 + 8));
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x4
  int64_t Point; // x0
  __int64 v18; // x1
  BalanceConfig_c *v19; // x8
  int64_t v20; // x19
  int64_t UserEventActivityPointMax; // x20

  if ( (byte_4B16E9E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v4, v5);
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16E9E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            (int64_t)Instance,
            eventId,
            0,
            v16);
  v19 = BalanceConfig_TypeInfo;
  v20 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
    v19 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v19->static_fields->UserEventActivityPointMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
  return System_Math__Min_63220536(v20, UserEventActivityPointMax, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserEventPointMaster__GetEventPoint(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v17; // x4
  int64_t Point; // x0
  __int64 v19; // x1
  BalanceConfig_c *v20; // x8
  int64_t v21; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4B16E9D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5, v6);
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16E9D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            (int64_t)Instance,
            eventId,
            groupId,
            v17);
  v20 = BalanceConfig_TypeInfo;
  v21 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
    v20 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v20->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19);
  return System_Math__Min_63220536(v21, UserPointEventMax, 0LL);
}


int64_t __fastcall UserEventPointMaster__GetEventPointNoGroup(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x4
  int64_t Point; // x0
  __int64 v18; // x1
  BalanceConfig_c *v19; // x8
  int64_t v20; // x19
  int64_t UserPointEventMax; // x20

  if ( (byte_4B16E9C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v4, v5);
    sub_1BCA7E0(&System_Math_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16E9C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v13);
  Point = UserEventPointMaster__GetPoint(
            (UserEventPointMaster_o *)MasterData_object,
            (int64_t)Instance,
            eventId,
            0,
            v16);
  v19 = BalanceConfig_TypeInfo;
  v20 = Point;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
    v19 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v19->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
  return System_Math__Min_63220536(v20, UserPointEventMax, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall UserEventPointMaster__GetEventPointTotal(
        UserEventPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w24
  int64_t v20; // x23
  int32_t v21; // w25
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__o *v23; // x8
  _BOOL4 v24; // w9
  _BOOL4 v25; // w10
  BalanceConfig_c *v26; // x0
  int64_t monitor; // x26
  int64_t UserPointEventMax; // x27

  if ( (byte_4B16E9B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    sub_1BCA7E0(&UserEventPointEntity_TypeInfo, v15, v16);
    byte_4B16E9B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_31:
    sub_1BCAA3C(list, userId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_31;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (methodPtr_low = LOBYTE(UserEventPointEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (UserEventPointEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventPointEntity_TypeInfo )
          v23 = list;
        else
          v23 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
        {
LABEL_10:
          if ( !v23 )
            goto LABEL_31;
          v24 = HIDWORD(v23[1].klass) == groupId;
          goto LABEL_18;
        }
      }
      else
      {
        v23 = 0LL;
        if ( (groupId & 0x80000000) == 0 )
          goto LABEL_10;
      }
      if ( v23 )
      {
        v24 = 1;
LABEL_18:
        v25 = v23->fields.items == (struct System_Collections_Generic_IList_T__o *)userId
           && LODWORD(v23[1].klass) == eventId;
        if ( v25 && v24 )
        {
          v26 = BalanceConfig_TypeInfo;
          monitor = (int64_t)v23[1].monitor;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userId);
            v26 = BalanceConfig_TypeInfo;
          }
          UserPointEventMax = v26->static_fields->UserPointEventMax;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, userId);
          v20 += System_Math__Min_63220536(monitor, UserPointEventMax, 0LL);
        }
      }
      if ( v19 == ++v21 )
        return v20;
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
      sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B16E98 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16E98 = 1;
  }
  PK = (Il2CppObject *)UserEventPointEntity__CreatePK(userId, eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventPointMaster__UserEventPointEntity__string__TryGetEntity__);
}