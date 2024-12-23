void __fastcall ServantCostumeEntity___ctor(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B672B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B672B2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall ServantCostumeEntity__CheckEnableReleaseTime(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4B672AE & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B672AE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.openedAt <= Time && Time < this->fields.endedAt;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCostumeEntity__CreatePK(int32_t svtId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4B672AD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4B672AD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           id,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCostumeEntity__CreatePrimaryKey(
        ServantCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCostumeEntity__CreatePK(this->fields.svtId, this->fields.id, v2);
}


bool __fastcall ServantCostumeEntity__IsEventCombineCostume(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B672AF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B672AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
  }
  return EventCombineCostumeMaster__IsEventCombineCostume(
           (EventCombineCostumeMaster_o *)Instance,
           this->fields.svtId,
           this->fields.id,
           0LL);
}


bool __fastcall ServantCostumeEntity__checkBgmId(
        ServantCostumeEntity_o *this,
        int32_t *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B672B1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17392/*"bgmId"*/, param);
    byte_4B672B1 = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_17392/*"bgmId"*/, param, v3);
}


bool __fastcall ServantCostumeEntity__checkFlag(ServantCostumeEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall ServantCostumeEntity__checkScript(
        ServantCostumeEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x8
  ServantCostumeEntity_o *v15; // x0
  int32_t *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4B672B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BE4ACC(&long_TypeInfo, v8);
    byte_4B672B0 = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_1BE4D28(Item, v10);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v14 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
        LOBYTE(script) = 1;
        *param = v14;
      }
      else
      {
        sub_1BE4FE8(Item);
        LOBYTE(script) = ServantCostumeEntity__checkBgmId(v15, v16, v17);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


System_String_o *__fastcall ServantCostumeEntity__getShortName(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  __int64 v4; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.shortName, 0LL);
  v4 = 40LL;
  if ( IsNullOrEmpty )
    v4 = 32LL;
  return *(System_String_o **)((char *)&this->klass + v4);
}