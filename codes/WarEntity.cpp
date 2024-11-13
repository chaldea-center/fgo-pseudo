void __fastcall WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17277 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B17277 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall WarEntity___ctor_41097344(WarEntity_o *this, WarEntity_o *cSrc, const MethodInfo *method)
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

  if ( (byte_4B17278 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, cSrc, method);
    byte_4B17278 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  this->fields.id = cSrc->fields.id;
  age = cSrc->fields.age;
  this->fields.age = age;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.age, (int64_t)age, v7, v8, v9, v10, v11, v12);
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v15, v16, v17, v18, v19, v20);
  longName = cSrc->fields.longName;
  this->fields.longName = longName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.longName, (int64_t)longName, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&this->fields.bannerId = *(_QWORD *)&cSrc->fields.bannerId;
  this->fields.parentWarId = cSrc->fields.parentWarId;
  this->fields.flag = cSrc->fields.flag;
  emptyMessage = cSrc->fields.emptyMessage;
  this->fields.emptyMessage = emptyMessage;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coordinate, (int64_t)coordinate, v36, v37, v38, v39, v40, v41);
  coordinates = cSrc->fields.coordinates;
  this->fields.coordinates = coordinates;
  p_coordinates = &this->fields.coordinates;
  sub_1BCA784((PartyOrganizationUtility_o *)p_coordinates, (int64_t)coordinates, v44, v45, v46, v47, v48, v49);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B17282 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B17282 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 7, this->fields.id, v8);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


System_String_o *__fastcall WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t id; // w2
  System_String_o *v12; // x19
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B17284 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarAddMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17284 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  id = this->fields.id;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 17, id, v10);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v12;
}


int32_t __fastcall WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t bannerId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1727B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  bannerId = this->fields.bannerId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 3, this->fields.id, v8);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return bannerId;
}


System_Single_array_array *__fastcall WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  WarAddEntity_o *PrioredEntity; // x0
  __int64 v14; // x1
  Il2CppObject *overwriteStr; // x19

  if ( (byte_4B17281 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_JsonManager_DeserializeMultiArray_float___, v4, v5);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B17281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, v12);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v14);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_2F798B4 *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *__fastcall WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *longName; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1727F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  longName = this->fields.longName;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 9, this->fields.id, v8);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return longName;
}


int32_t __fastcall WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t materialParentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B17280 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B17280 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  materialParentWarId = this->fields.materialParentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 10, this->fields.id, v8);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return materialParentWarId;
}


System_String_o *__fastcall WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *name; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1727E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  name = this->fields.name;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 8, this->fields.id, v8);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return name;
}


int32_t __fastcall WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t parentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1727C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  parentWarId = this->fields.parentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 2, this->fields.id, v8);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return parentWarId;
}


int32_t __fastcall WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1727D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 13, this->fields.id, v8);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


int32_t __fastcall WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4B17283 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarAddMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B17283 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 16, this->fields.id, v8);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.startType;
  return *p_overwriteId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t overwriteId; // w21
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4B1727A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarAddMaster___, *(_QWORD *)&flag, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B1727A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  overwriteId = this->fields.flag;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 6, this->fields.id, v9);
  if ( PrioredEntity )
    overwriteId = PrioredEntity->fields.overwriteId;
  return (overwriteId & flag) != 0;
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
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B17286 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarAddMaster___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B17286 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v8);
  return WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, type, this->fields.id, v9) != 0LL;
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t parentWarId; // w19

  if ( (byte_4B17279 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B17279 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  parentWarId = this->fields.parentWarId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v4 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v4->static_fields->MainInterludeWarId;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  Il2CppObject *MasterData_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_T__o *m_CancellationTokenSource; // x20
  System_Func_object__bool__o *v37; // x21

  if ( (byte_4B17285 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_MapControl_QuestInfo___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v5, v6);
    sub_1BCA7E0(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__, v13, v14);
    sub_1BCA7E0(&WarEntity___c__DisplayClass52_0_TypeInfo, v15, v16);
    byte_4B17285 = 1;
  }
  v17 = sub_1BCAA2C(WarEntity___c__DisplayClass52_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_9;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  if ( WarEntity__HasFlag(this, 0x2000, v26) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v17 + 24) = MasterData_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)MasterData_object, v28, v29, v30, v31, v32, v33);
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        m_CancellationTokenSource = (System_Collections_Generic_List_T__o *)Instance->fields.m_CancellationTokenSource;
        v37 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                               v19,
                                               v34,
                                               v35);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v17,
          Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__,
          0LL);
        return BasicHelper__Any_object_(
                 m_CancellationTokenSource,
                 (System_Func_T__bool__o *)v37,
                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_9:
    sub_1BCAA3C(Instance, v19);
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


void __fastcall WarEntity___c__DisplayClass52_0___ctor(
        WarEntity___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarEntity___c__DisplayClass52_0___IsPurchasedByRarePrism_b__0(
        WarEntity___c__DisplayClass52_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  WarEntity___c__DisplayClass52_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *_4__this; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4B17287 & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass52_0_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, quest, method);
    byte_4B17287 = 1;
  }
  if ( !quest )
    goto LABEL_13;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_13;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( WarInfo_k__BackingField->fields.warId != _4__this->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, quest);
  this = (WarEntity___c__DisplayClass52_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_13:
    sub_1BCAA3C(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}