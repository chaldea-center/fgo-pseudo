void ServantCostumeEntity___ctor(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938FAE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938FAE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


bool ServantCostumeEntity__CheckEnableReleaseTime(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_5938FA6 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938FA6 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  return this->fields.openedAt <= Time && Time < this->fields.endedAt;
}


System_String_o *ServantCostumeEntity__CreatePK(int32_t svtId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5938FA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938FA5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           id,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCostumeEntity__CreatePrimaryKey(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCostumeEntity__CreatePK(this->fields.svtId, this->fields.id, v2);
}


int32_t ServantCostumeEntity__GetSupportBaseLimitCount(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938FAC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25068/*"supportBaseLimitCount"*/);
    byte_5938FAC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25068/*"supportBaseLimitCount"*/, 0, 0);
}


int32_t ServantCostumeEntity__GetSupportLimitCountGroup(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938FAB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25070/*"supportLimitCountGroupIndex"*/);
    byte_5938FAB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25070/*"supportLimitCountGroupIndex"*/, 0, 0);
}


bool ServantCostumeEntity__IsEventCombineCostume(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5938FA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
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
  __int64 v4; // x1
  ServantCostumeEntity_Fields *p_baseSvtId; // x8
  int32_t svtId; // w20
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v9; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t baseSvtId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5938FAD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938FAD = 1;
  }
  baseSvtId = 0;
  if ( ServantCostumeEntity__TryGetBaseSvtId(this, &baseSvtId, v2) )
    p_baseSvtId = (ServantCostumeEntity_Fields *)&baseSvtId;
  else
    p_baseSvtId = &this->fields;
  svtId = p_baseSvtId->svtId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_21FFECC(v9, v7);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v9->static_fields->userIdNumber,
                       svtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = UserServantCollectionEntity__IsCostumeGet(EntityDefinitely, this->fields.id, 0);
  return (char)EntityDefinitely;
}


bool ServantCostumeEntity__TryGetBaseSvtId(ServantCostumeEntity_o *this, int32_t *baseSvtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938FAA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17734/*"baseSvtId"*/);
    byte_5938FAA = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17734/*"baseSvtId"*/, baseSvtId, v3);
}


bool ServantCostumeEntity__checkBgmId(ServantCostumeEntity_o *this, int32_t *param, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938FA9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17845/*"bgmId"*/);
    byte_5938FA9 = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17845/*"bgmId"*/, param, v3);
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
  _QWORD *v11; // x8
  ServantCostumeEntity_o *v12; // x0
  int32_t *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5938FA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5938FA8 = 1;
  }
  script = this->fields.script;
  *param = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_21FFECC(Item, v8);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
      {
        v11 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10);
        LOBYTE(script) = 1;
        *param = *v11;
      }
      else
      {
        sub_220024C(Item, qword_594C090, v10);
        LOBYTE(script) = ServantCostumeEntity__checkBgmId(v12, v13, v14);
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