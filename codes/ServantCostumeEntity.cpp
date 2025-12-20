void ServantCostumeEntity___ctor(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D142 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D142 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


bool ServantCostumeEntity__CheckEnableReleaseTime(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4D2D13E & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2D13E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.openedAt <= Time && Time < this->fields.endedAt;
}


System_String_o *ServantCostumeEntity__CreatePK(int32_t svtId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4D2D13D & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2D13D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           id,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4D2D13F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D13F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  return EventCombineCostumeMaster__IsEventCombineCostume(
           (EventCombineCostumeMaster_o *)Instance,
           this->fields.svtId,
           this->fields.id,
           0);
}


bool ServantCostumeEntity__checkBgmId(ServantCostumeEntity_o *this, int32_t *param, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2D141 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17230/*"bgmId"*/);
    byte_4D2D141 = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17230/*"bgmId"*/, param, v3);
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

  if ( (byte_4D2D140 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    byte_4D2D140 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C942F0(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *param = v12;
      }
      else
      {
        sub_1C9468C(Item);
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