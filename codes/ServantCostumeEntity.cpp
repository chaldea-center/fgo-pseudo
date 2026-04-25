void ServantCostumeEntity___ctor(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E052F6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E052F6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


bool ServantCostumeEntity__CheckEnableReleaseTime(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4E052F0 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E052F0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.openedAt <= Time && Time < this->fields.endedAt;
}


System_String_o *ServantCostumeEntity__CreatePK(int32_t svtId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4E052EF & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4E052EF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           id,
           (const MethodInfo_3202530 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCostumeEntity__CreatePrimaryKey(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCostumeEntity__CreatePK(this->fields.svtId, this->fields.id, v2);
}


bool ServantCostumeEntity__IsEventCombineCostume(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E052F1 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E052F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v4);
  }
  return EventCombineCostumeMaster__IsEventCombineCostume(
           (EventCombineCostumeMaster_o *)Instance,
           this->fields.svtId,
           this->fields.id,
           0);
}


bool ServantCostumeEntity__IsHaveCostume(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantCostumeEntity_Fields *p_baseSvtId; // x8
  int32_t svtId; // w20
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v8; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t baseSvtId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E052F5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4E052F5 = 1;
  }
  baseSvtId = 0;
  if ( ServantCostumeEntity__TryGetBaseSvtId(this, &baseSvtId, v2) )
    p_baseSvtId = (ServantCostumeEntity_Fields *)&baseSvtId;
  else
    p_baseSvtId = &this->fields;
  svtId = p_baseSvtId->svtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1CE6958(v8, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v8->static_fields->userIdNumber,
                       svtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, this->fields.id, 0);
  return (unsigned __int8)EntityDefinitely & 1;
}


bool ServantCostumeEntity__TryGetBaseSvtId(ServantCostumeEntity_o *this, int32_t *baseSvtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E052F4 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17221/*"baseSvtId"*/);
    byte_4E052F4 = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17221/*"baseSvtId"*/, baseSvtId, v3);
}


bool ServantCostumeEntity__checkBgmId(ServantCostumeEntity_o *this, int32_t *param, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E052F3 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17330/*"bgmId"*/);
    byte_4E052F3 = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17330/*"bgmId"*/, param, v3);
}


bool ServantCostumeEntity__checkFlag(ServantCostumeEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool ServantCostumeEntity__checkScript(
        ServantCostumeEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  ServantCostumeEntity_o *v13; // x0
  int32_t *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4E052F2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1CE6700(&long_TypeInfo);
    byte_4E052F2 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_35B4B84 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_35B4910 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1CE6958(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1CE6CF4(Item);
        LOBYTE(script) = ServantCostumeEntity__checkBgmId(v13, v14, v15);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


System_String_o *ServantCostumeEntity__getShortName(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  __int64 v4; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.shortName, 0);
  v4 = 40;
  if ( IsNullOrEmpty )
    v4 = 32;
  return *(System_String_o **)((char *)&this->klass + v4);
}