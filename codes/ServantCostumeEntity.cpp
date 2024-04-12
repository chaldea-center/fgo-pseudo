void __fastcall ServantCostumeEntity___ctor(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2E1C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2E1C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall ServantCostumeEntity__CheckEnableReleaseTime(ServantCostumeEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_42B2E18 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B2E18 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return this->fields.openedAt <= Time && Time < this->fields.endedAt;
}


System_String_o *__fastcall ServantCostumeEntity__CreatePK(int32_t svtId, int32_t id, const MethodInfo *method)
{
  if ( (byte_42B2E17 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2E17 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           id,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B2E19 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2E19 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2E1B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16821/*"bgmId"*/);
    byte_42B2E1B = 1;
  }
  return ServantCostumeEntity__checkScript(this, (System_String_o *)StringLiteral_16821/*"bgmId"*/, param, v3);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  __int64 v10; // x8
  ServantCostumeEntity_o *v11; // x0
  int32_t *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B2E1A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42B2E1A = 1;
  }
  *param = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                       Item,
                                                                                       (System_Type_o *)key,
                                                                                       (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
      {
        sub_B52A5C(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v10 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
        LOBYTE(script) = 1;
        *param = v10;
      }
      else
      {
        sub_B52D50(Item);
        LOBYTE(script) = ServantCostumeEntity__checkBgmId(v11, v12, v13);
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