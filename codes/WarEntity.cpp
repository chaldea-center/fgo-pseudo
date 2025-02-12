void __fastcall WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8B80 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC8B80 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall WarEntity___ctor_41588312(WarEntity_o *this, WarEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *age; // x1
  struct System_String_o *name; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_o *longName; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *emptyMessage; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Single_array *coordinate; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Single_array_array *coordinates; // x1
  struct System_Single_array_array **p_coordinates; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4BC8B81 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4BC8B81 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C1AE30(v5, v6);
  this->fields.id = cSrc->fields.id;
  age = cSrc->fields.age;
  this->fields.age = age;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.age, (int64_t)age, v7, v8, v9, v10, v11, v12);
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v15, v16, v17, v18, v19, v20);
  longName = cSrc->fields.longName;
  this->fields.longName = longName;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.longName, (int64_t)longName, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&this->fields.bannerId = *(_QWORD *)&cSrc->fields.bannerId;
  this->fields.parentWarId = cSrc->fields.parentWarId;
  this->fields.flag = cSrc->fields.flag;
  emptyMessage = cSrc->fields.emptyMessage;
  this->fields.emptyMessage = emptyMessage;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.emptyMessage,
    (int64_t)emptyMessage,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.startType = cSrc->fields.startType;
  this->fields.targetId = cSrc->fields.targetId;
  *(_QWORD *)&this->fields.eventId = *(_QWORD *)&cSrc->fields.eventId;
  coordinate = cSrc->fields.coordinate;
  this->fields.coordinate = coordinate;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.coordinate, (int64_t)coordinate, v36, v37, v38, v39, v40, v41);
  coordinates = cSrc->fields.coordinates;
  this->fields.coordinates = coordinates;
  p_coordinates = &this->fields.coordinates;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_coordinates, (int64_t)coordinates, v44, v45, v46, v47, v48, v49);
  *((_DWORD *)p_coordinates + 2) = cSrc->fields.assetId;
}


bool __fastcall WarEntity__ClearedReturnToTilte(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 512, v2);
}


int32_t __fastcall WarEntity__CreatePrimaryKey(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall WarEntity__GetAssetId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 120LL;
  if ( this->fields.assetId <= 0 )
    v2 = 16LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t __fastcall WarEntity__GetBaseMap(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B8C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 7, this->fields.id, 0, 0LL);
}


System_String_o *__fastcall WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4BC8B8E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC8B8E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v6);
  return WarAddMaster__GetPrioredStr(
           (WarAddMaster_o *)Master_object,
           17,
           this->fields.id,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


int32_t __fastcall WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B85 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 3, this->fields.id, this->fields.bannerId, 0LL);
}


System_Single_array_array *__fastcall WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  WarAddEntity_o *PrioredEntity; // x0
  Il2CppObject *overwriteStr; // x19

  if ( (byte_4BC8B8B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_JsonManager_DeserializeMultiArray_float___, v3);
    sub_1C1ABD4(&JsonManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC8B8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v7);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, 0LL);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_3006FC0 *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *__fastcall WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B89 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 9, this->fields.id, this->fields.longName, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B8A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredID(
           (WarAddMaster_o *)Instance,
           10,
           this->fields.id,
           this->fields.materialParentWarId,
           0LL);
}


System_String_o *__fastcall WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B88 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 8, this->fields.id, this->fields.name, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B86 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 2, this->fields.id, this->fields.parentWarId, 0LL);
}


int32_t __fastcall WarEntity__GetPriority(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4BC8B8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC8B8F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v5);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 22, this->fields.id, 0LL);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.priority;
  return *p_overwriteId;
}


int32_t __fastcall WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BC8B87 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC8B87 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 13, this->fields.id, 0, 0LL);
}


int32_t __fastcall WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4BC8B8D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC8B8D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v5);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 16, this->fields.id, 0LL);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.startType;
  return *p_overwriteId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BC8B84 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_WarAddMaster___, *(_QWORD *)&flag);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC8B84 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v7);
  }
  return (WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 6, this->fields.id, this->fields.flag, 0LL) & flag) != 0;
}


bool __fastcall WarEntity__IsBelongingToOrdealCall(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t parentWarId; // w19

  if ( (byte_4BC8B83 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC8B83 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  parentWarId = this->fields.parentWarId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v3->static_fields->OrdealCallWarId;
}


bool __fastcall WarEntity__IsBlackMarkWithClear(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x4000, v2);
}


bool __fastcall WarEntity__IsChangeDispClosedMessage(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x1000000, v2);
}


bool __fastcall WarEntity__IsChapterSubIdJapaneseNumeralsNormal(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x2000000, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarEntity__IsContainPrioredEntity(WarEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4BC8B91 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarAddMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    byte_4BC8B91 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v7);
  return WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, type, this->fields.id, 0LL) != 0LL;
}


bool __fastcall WarEntity__IsDispWhiteMarkUnderBoard(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x40000, v2);
}


bool __fastcall WarEntity__IsDisplayEarthPointWithoutMap(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x100000, v2);
}


bool __fastcall WarEntity__IsEvent(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 32, v2);
}


bool __fastcall WarEntity__IsFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return !WarEntity__HasFlag(this, 2, v2);
}


bool __fastcall WarEntity__IsMainInterlude(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t parentWarId; // w19

  if ( (byte_4BC8B82 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC8B82 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  parentWarId = this->fields.parentWarId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v3->static_fields->MainInterludeWarId;
}


bool __fastcall WarEntity__IsMainScenarioFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return WarEntity__HasFlag(this, 128, v2) && !WarEntity__HasFlag(this, 2, v4);
}


bool __fastcall WarEntity__IsNoticeBoard(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x800000, v2);
}


bool __fastcall WarEntity__IsPlayEffectChangeBlackMark(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__IsContainPrioredEntity(this, 12, v2);
}


bool __fastcall WarEntity__IsPlayEffectChangeWhiteMark(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__IsContainPrioredEntity(this, 19, v2);
}


bool __fastcall WarEntity__IsPurchasedByRarePrism(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2
  Il2CppObject *MasterData_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_T__o *m_CancellationTokenSource; // x20
  System_Func_object__bool__o *v27; // x21

  if ( (byte_4BC8B90 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_MapControl_QuestInfo___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_1C1ABD4(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_1C1ABD4(&Method_WarEntity___c__DisplayClass54_0__IsPurchasedByRarePrism_b__0__, v7);
    sub_1C1ABD4(&WarEntity___c__DisplayClass54_0_TypeInfo, v8);
    byte_4BC8B90 = 1;
  }
  v9 = sub_1C1AE20(WarEntity___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  if ( WarEntity__HasFlag(this, 0x2000, v18) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v9 + 24) = MasterData_object;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)MasterData_object, v20, v21, v22, v23, v24, v25);
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        m_CancellationTokenSource = (System_Collections_Generic_List_T__o *)Instance->fields.m_CancellationTokenSource;
        v27 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_MapControl_QuestInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v9,
          Method_WarEntity___c__DisplayClass54_0__IsPurchasedByRarePrism_b__0__,
          0LL);
        return BasicHelper__Any_object_(
                 m_CancellationTokenSource,
                 (System_Func_T__bool__o *)v27,
                 (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_9:
    sub_1C1AE30(Instance, v11);
  }
  return 0;
}


bool __fastcall WarEntity__IsShop(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x2000, v2);
}


bool __fastcall WarEntity__IsStartTypeQuest(WarEntity_o *this, const MethodInfo *method)
{
  return WarEntity__GetStartType(this, method) == 2;
}


bool __fastcall WarEntity__IsSubFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x80000, v2);
}


bool __fastcall WarEntity__IsWhiteMarkWithClear(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x20000, v2);
}


bool __fastcall WarEntity__UseEvent(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId > 0;
}


int32_t __fastcall WarEntity__getWarId(WarEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


void __fastcall WarEntity___c__DisplayClass54_0___ctor(
        WarEntity___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarEntity___c__DisplayClass54_0___IsPurchasedByRarePrism_b__0(
        WarEntity___c__DisplayClass54_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  WarEntity___c__DisplayClass54_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *_4__this; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4BC8B92 & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass54_0_o *)sub_1C1ABD4(&NetworkManager_TypeInfo, quest);
    byte_4BC8B92 = 1;
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
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, quest);
    byte_4BC2585 = 1;
  }
  this = (WarEntity___c__DisplayClass54_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (WarEntity___c__DisplayClass54_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C1AE30(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   userQuestMst,
                   (int64_t)this[5].fields.userQuestMst->fields.sb,
                   quest->fields.questId,
                   0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}