void WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A1E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939A1E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


bool WarEntity__ClearedReturnToTilte(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 512, v2);
}


int32_t WarEntity__CreatePrimaryKey(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t WarEntity__GetAssetId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 16;
  if ( this->fields.assetId > 0 )
    v2 = 120;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t WarEntity__GetBaseMap(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A28 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 7, this->fields.id, 0, 0);
}


int32_t WarEntity__GetMaterialPriority(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarAddEntity_o *PrioredEntity; // x0
  const MethodInfo *v6; // x1
  int32_t result; // w0

  if ( (byte_5939A30 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A30 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 27, this->fields.id, 0);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  result = this->fields.materialPriority;
  if ( !result )
    return WarEntity__GetPriority(this, v6);
  return result;
}


System_String_o *WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5939A2E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939A2E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return WarAddMaster__GetPrioredStr(
           (WarAddMaster_o *)Master_object,
           17,
           this->fields.id,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


int32_t WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A21 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 3, this->fields.id, this->fields.bannerId, 0);
}


System_Single_array_array *WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarAddEntity_o *PrioredEntity; // x0
  __int64 v6; // x1
  Il2CppObject *overwriteStr; // x19

  if ( (byte_5939A27 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_JsonManager_DeserializeMultiArray_float___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, 0);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_38A069C *)Method_JsonManager_DeserializeMultiArray_float___);
}


int32_t WarEntity__GetPrioredFolderHeaderId(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5939A2A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A2A = 1;
  }
  if ( WarEntity__HasFlag(this, 2, v2) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v7);
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Master_object, 26, this->fields.id, 0, 0);
}


System_String_o *WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A25 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 9, this->fields.id, this->fields.longName, 0);
}


System_String_o *WarEntity__GetPrioredMaterialFolderName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5939A2D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939A2D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return WarAddMaster__GetPrioredStr(
           (WarAddMaster_o *)Master_object,
           28,
           this->fields.id,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


int32_t WarEntity__GetPrioredMaterialGalleryHeaderImgId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5939A2C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A2C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Master_object, 30, this->fields.id, this->fields.id, 0);
}


int32_t WarEntity__GetPrioredMaterialHeaderImgId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5939A2B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A2B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Master_object, 29, this->fields.id, this->fields.id, 0);
}


int32_t WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A26 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredID(
           (WarAddMaster_o *)Instance,
           10,
           this->fields.id,
           this->fields.materialParentWarId,
           0);
}


System_String_o *WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A24 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 8, this->fields.id, this->fields.name, 0);
}


int32_t WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A22 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 2, this->fields.id, this->fields.parentWarId, 0);
}


int32_t WarEntity__GetPriority(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_priority; // x8

  if ( (byte_5939A2F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A2F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 22, this->fields.id, 0);
  p_priority = &this->fields.priority;
  if ( PrioredEntity )
    p_priority = &PrioredEntity->fields.overwriteId;
  return *p_priority;
}


int32_t WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5939A23 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 13, this->fields.id, 0, 0);
}


int32_t WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_startType; // x8

  if ( (byte_5939A29 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A29 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 16, this->fields.id, 0);
  p_startType = &this->fields.startType;
  if ( PrioredEntity )
    p_startType = &PrioredEntity->fields.overwriteId;
  return *p_startType;
}


bool WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5939A20 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939A20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  return (WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 6, this->fields.id, this->fields.flag, 0) & flag) != 0;
}


bool WarEntity__IsBlackMarkWithClear(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x4000, v2);
}


bool WarEntity__IsChangeDispClosedMessage(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x1000000, v2);
}


bool WarEntity__IsChapterSubIdJapaneseNumeralsNormal(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x2000000, v2);
}


// local variable allocation has failed, the output may be wrong!
bool WarEntity__IsContainPrioredEntity(WarEntity_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_5939A32 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A32 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  return WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, type, this->fields.id, 0) != 0;
}


bool WarEntity__IsDispWhiteMarkUnderBoard(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x40000, v2);
}


bool WarEntity__IsDisplayEarthPointWithoutMap(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x100000, v2);
}


bool WarEntity__IsEvent(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 32, v2);
}


bool WarEntity__IsExecuteFirstFade(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_5939A34 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939A34 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 7, this->fields.id, 0);
  if ( PrioredEntity )
    LOBYTE(PrioredEntity) = WarAddEntity__IsExecuteFirstFade(PrioredEntity, 0);
  return (char)PrioredEntity;
}


bool WarEntity__IsFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return !WarEntity__HasFlag(this, 2, v2);
}


bool WarEntity__IsGrandBoard(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t id; // w19

  if ( (byte_5939A33 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5939A33 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  id = this->fields.id;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  return id == v3->static_fields->GrandBoardWarId;
}


bool WarEntity__IsMainInterlude(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t parentWarId; // w19

  if ( (byte_5939A1F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5939A1F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  parentWarId = this->fields.parentWarId;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v3->static_fields->MainInterludeWarId;
}


bool WarEntity__IsMainScenarioFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return WarEntity__HasFlag(this, 128, v2) && !WarEntity__HasFlag(this, 2, v4);
}


bool WarEntity__IsNoticeBoard(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x800000, v2);
}


bool WarEntity__IsPlayEffectChangeBlackMark(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__IsContainPrioredEntity(this, 12, v2);
}


bool WarEntity__IsPlayEffectChangeWhiteMark(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__IsContainPrioredEntity(this, 19, v2);
}


bool WarEntity__IsPurchasedByRarePrism(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  Il2CppObject *MasterData_object; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_T__o *m_CancellationTokenSource; // x20
  System_Func_object__bool__o *v21; // x21

  if ( (byte_5939A31 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_WarEntity___c__DisplayClass58_0__IsPurchasedByRarePrism_b__0__);
    sub_21FFC50(&WarEntity___c__DisplayClass58_0_TypeInfo);
    byte_5939A31 = 1;
  }
  v3 = sub_21FFEBC(WarEntity___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( WarEntity__HasFlag(this, 0x2000, v12) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v3 + 24),
        (int32_t)MasterData_object,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        m_CancellationTokenSource = (System_Collections_Generic_List_T__o *)Instance->fields.m_CancellationTokenSource;
        v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MapControl_QuestInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v3,
          Method_WarEntity___c__DisplayClass58_0__IsPurchasedByRarePrism_b__0__,
          0);
        return BasicHelper__Any_object_(
                 m_CancellationTokenSource,
                 (System_Func_T__bool__o *)v21,
                 (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_9:
    sub_21FFECC(Instance, v5);
  }
  return 0;
}


bool WarEntity__IsShop(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x2000, v2);
}


bool WarEntity__IsStartTypeQuest(WarEntity_o *this, const MethodInfo *method)
{
  return WarEntity__GetStartType(this, method) == 2;
}


bool WarEntity__IsSubFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x80000, v2);
}


bool WarEntity__IsWarIconFree(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x200000, v2);
}


bool WarEntity__IsWarShortcut(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x8000000, v2);
}


bool WarEntity__IsWhiteMarkWithClear(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x20000, v2);
}


bool WarEntity__UseEvent(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId > 0;
}


int32_t WarEntity__getWarId(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


void WarEntity___c__DisplayClass58_0___ctor(WarEntity___c__DisplayClass58_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarEntity___c__DisplayClass58_0___IsPurchasedByRarePrism_b__0(
        WarEntity___c__DisplayClass58_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  WarEntity___c__DisplayClass58_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *_4__this; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_5939A35 & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass58_0_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939A35 = 1;
  }
  if ( !quest )
    goto LABEL_17;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_17;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( WarInfo_k__BackingField->fields.warId != _4__this->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, quest);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  this = (WarEntity___c__DisplayClass58_0_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, quest);
    this = (WarEntity___c__DisplayClass58_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_21FFECC(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   userQuestMst,
                   (int64_t)this[5].fields.userQuestMst->fields.sb,
                   quest->fields.questId,
                   0);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0);
  return 0;
}