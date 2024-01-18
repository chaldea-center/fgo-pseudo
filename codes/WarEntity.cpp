void __fastcall WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188918 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188918 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


void __fastcall WarEntity___ctor_26829280(WarEntity_o *this, WarEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *age; // x1
  struct System_String_o *name; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_o *longName; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_String_o *emptyMessage; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Single_array *coordinate; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Single_array_array *coordinates; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4188919 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4188919 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  age = cSrc->fields.age;
  this->fields.age = age;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.age, (System_Int32_array **)age, v7, v8, v9, v10, v11, v12);
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  longName = cSrc->fields.longName;
  this->fields.longName = longName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.longName,
    (System_Int32_array **)longName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.bannerId = cSrc->fields.bannerId;
  this->fields.priority = cSrc->fields.priority;
  this->fields.parentWarId = cSrc->fields.parentWarId;
  this->fields.flag = cSrc->fields.flag;
  emptyMessage = cSrc->fields.emptyMessage;
  this->fields.emptyMessage = emptyMessage;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.emptyMessage,
    (System_Int32_array **)emptyMessage,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.startType = cSrc->fields.startType;
  this->fields.targetId = cSrc->fields.targetId;
  this->fields.eventId = cSrc->fields.eventId;
  this->fields.lastQuestId = cSrc->fields.lastQuestId;
  coordinate = cSrc->fields.coordinate;
  this->fields.coordinate = coordinate;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.coordinate,
    (System_Int32_array **)coordinate,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  coordinates = cSrc->fields.coordinates;
  this->fields.coordinates = coordinates;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.coordinates,
    (System_Int32_array **)coordinates,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.assetId = cSrc->fields.assetId;
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
  int32_t result; // w0

  result = this->fields.assetId;
  if ( result <= 0 )
    return this->fields.id;
  return result;
}


int32_t __fastcall WarEntity__GetBaseMap(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188923 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188923 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 7, this->fields.id, 0, 0LL);
}


System_String_o *__fastcall WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1

  if ( (byte_4188925 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188925 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  return WarAddMaster__GetPrioredStr(
           Master_WarQuestSelectionMaster,
           17,
           this->fields.id,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


int32_t __fastcall WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418891C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418891C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 3, this->fields.id, this->fields.bannerId, 0LL);
}


System_Single_array_array *__fastcall WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarAddEntity_o *PrioredEntity; // x0
  Il2CppObject *overwriteStr; // x19

  if ( (byte_4188922 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_JsonManager_DeserializeMultiArray_float___, v3);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188922 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, 0LL);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_1AAD14C *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *__fastcall WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188920 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188920 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 9, this->fields.id, this->fields.longName, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188921 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188921 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418891F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418891F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredStr((WarAddMaster_o *)Instance, 8, this->fields.id, this->fields.name, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418891D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418891D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 2, this->fields.id, this->fields.parentWarId, 0LL);
}


int32_t __fastcall WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418891E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418891E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 13, this->fields.id, 0, 0LL);
}


int32_t __fastcall WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4188924 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188924 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  PrioredEntity = WarAddMaster__GetPrioredEntity(Master_WarQuestSelectionMaster, 16, this->fields.id, 0LL);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.startType;
  return *p_overwriteId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418891B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_WarAddMaster___, *(_QWORD *)&flag);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418891B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return (WarAddMaster__GetPrioredID((WarAddMaster_o *)Instance, 6, this->fields.id, this->fields.flag, 0LL) & flag) != 0;
}


bool __fastcall WarEntity__IsBlackMarkWithClear(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarEntity__HasFlag(this, 0x4000, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarEntity__IsContainPrioredEntity(WarEntity_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  WarAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1

  if ( (byte_4188927 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarAddMaster___, *(_QWORD *)&type);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4188927 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  return WarAddMaster__GetPrioredEntity(Master_WarQuestSelectionMaster, type, this->fields.id, 0LL) != 0LL;
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
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_418891A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418891A = 1;
  }
  parentWarId = this->fields.parentWarId;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_T__o *datalist; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x21

  if ( (byte_4188926 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_MapControl_QuestInfo___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v3);
    sub_B2C35C(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v4);
    sub_B2C35C(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v8);
    sub_B2C35C(&Method_WarEntity___c__DisplayClass50_0__IsPurchasedByRarePrism_b__0__, v9);
    sub_B2C35C(&WarEntity___c__DisplayClass50_0_TypeInfo, v10);
    byte_4188926 = 1;
  }
  v11 = sub_B2C42C(WarEntity___c__DisplayClass50_0_TypeInfo);
  WarEntity___c__DisplayClass50_0___ctor((WarEntity___c__DisplayClass50_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( WarEntity__HasFlag(this, 0x2000, v20) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v11 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v11 + 24),
        MasterData_WarQuestSelectionMaster,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        datalist = (System_Collections_Generic_List_T__o *)Instance->fields.datalist;
        v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MapControl_QuestInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v29,
          (Il2CppObject *)v11,
          Method_WarEntity___c__DisplayClass50_0__IsPurchasedByRarePrism_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
        return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 datalist,
                 (System_Func_T__bool__o *)v29,
                 (const MethodInfo_17266AC *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_12:
    sub_B2C434(Instance, v13);
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


void __fastcall WarEntity___c__DisplayClass50_0___ctor(
        WarEntity___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarEntity___c__DisplayClass50_0___IsPurchasedByRarePrism_b__0(
        WarEntity___c__DisplayClass50_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  WarEntity___c__DisplayClass50_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *_4__this; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_4185553 & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass50_0_o *)sub_B2C35C(&NetworkManager_TypeInfo, quest);
    byte_4185553 = 1;
  }
  if ( !quest )
    goto LABEL_14;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_14;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( WarInfo_k__BackingField->fields.warId != _4__this->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (WarEntity___c__DisplayClass50_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B2C434(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}