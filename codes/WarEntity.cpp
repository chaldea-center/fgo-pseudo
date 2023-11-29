void __fastcall WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FA93A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FA93A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall WarEntity___ctor_26392172(WarEntity_o *this, WarEntity_o *cSrc, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *age; // x1
  struct System_String_o *name; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_o *longName; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_o *emptyMessage; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Single_array *coordinate; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Single_array_array *coordinates; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40FA93B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40FA93B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  age = cSrc->fields.age;
  this->fields.age = age;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.age, (System_Int32_array **)age, v5, v6, v7, v8, v9, v10);
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  longName = cSrc->fields.longName;
  this->fields.longName = longName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.longName,
    (System_Int32_array **)longName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.bannerId = cSrc->fields.bannerId;
  this->fields.priority = cSrc->fields.priority;
  this->fields.parentWarId = cSrc->fields.parentWarId;
  this->fields.flag = cSrc->fields.flag;
  emptyMessage = cSrc->fields.emptyMessage;
  this->fields.emptyMessage = emptyMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.emptyMessage,
    (System_Int32_array **)emptyMessage,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.startType = cSrc->fields.startType;
  this->fields.targetId = cSrc->fields.targetId;
  this->fields.eventId = cSrc->fields.eventId;
  this->fields.lastQuestId = cSrc->fields.lastQuestId;
  coordinate = cSrc->fields.coordinate;
  this->fields.coordinate = coordinate;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.coordinate,
    (System_Int32_array **)coordinate,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  coordinates = cSrc->fields.coordinates;
  this->fields.coordinates = coordinates;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.coordinates,
    (System_Int32_array **)coordinates,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA945 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA945 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredID(MasterData_WarQuestSelectionMaster, 7, this->fields.id, 0, 0LL);
}


System_String_o *__fastcall WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarAddMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FA947 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FA947 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return WarAddMaster__GetPrioredStr(
           Master_WarQuestSelectionMaster,
           17,
           this->fields.id,
           (System_String_o *)StringLiteral_1,
           0LL);
}


int32_t __fastcall WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA93E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA93E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredID(MasterData_WarQuestSelectionMaster, 3, this->fields.id, this->fields.bannerId, 0LL);
}


System_Single_array_array *__fastcall WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarAddEntity_o *PrioredEntity; // x0
  Il2CppObject *overwriteStr; // x19

  if ( (byte_40FA944 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_JsonManager_DeserializeMultiArray_float___, v3);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA944 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity(MasterData_WarQuestSelectionMaster, 11, this->fields.id, 0LL);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_19D6920 *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *__fastcall WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA942 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA942 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredStr(MasterData_WarQuestSelectionMaster, 9, this->fields.id, this->fields.longName, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA943 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA943 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredID(
           MasterData_WarQuestSelectionMaster,
           10,
           this->fields.id,
           this->fields.materialParentWarId,
           0LL);
}


System_String_o *__fastcall WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA941 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA941 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredStr(MasterData_WarQuestSelectionMaster, 8, this->fields.id, this->fields.name, 0LL);
}


int32_t __fastcall WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA93F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA93F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredID(
           MasterData_WarQuestSelectionMaster,
           2,
           this->fields.id,
           this->fields.parentWarId,
           0LL);
}


int32_t __fastcall WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA940 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA940 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return WarAddMaster__GetPrioredID(MasterData_WarQuestSelectionMaster, 13, this->fields.id, 0, 0LL);
}


int32_t __fastcall WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarAddMaster_o *Master_WarQuestSelectionMaster; // x0
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_40FA946 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FA946 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarAddMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA93D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_WarAddMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA93D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return (WarAddMaster__GetPrioredID(MasterData_WarQuestSelectionMaster, 6, this->fields.id, this->fields.flag, 0LL) & flag) != 0;
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

  if ( (byte_40FA949 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarAddMaster___, *(_QWORD *)&type);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FA949 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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

  if ( (byte_40FA93C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FA93C = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  clsQuestCheck_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_T__o *cQuestReleaseListP; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x21

  if ( (byte_40FA948 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_MapControl_QuestInfo___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B16FFC(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v7);
    sub_B16FFC(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v11);
    sub_B16FFC(&Method_WarEntity___c__DisplayClass50_0__IsPurchasedByRarePrism_b__0__, v12);
    sub_B16FFC(&WarEntity___c__DisplayClass50_0_TypeInfo, v13);
    byte_40FA948 = 1;
  }
  v14 = sub_B170CC(WarEntity___c__DisplayClass50_0_TypeInfo, method, v2, v3, v4);
  WarEntity___c__DisplayClass50_0___ctor((WarEntity___c__DisplayClass50_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  if ( WarEntity__HasFlag(this, 0x2000, v21) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v14 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v14 + 24),
        MasterData_WarQuestSelectionMaster,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v30 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( v30 )
      {
        cQuestReleaseListP = (System_Collections_Generic_List_T__o *)v30->fields.cQuestReleaseListP;
        v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                                                                   v31,
                                                                                   v32,
                                                                                   v33,
                                                                                   v34);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v36,
          (Il2CppObject *)v14,
          Method_WarEntity___c__DisplayClass50_0__IsPurchasedByRarePrism_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
        return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 cQuestReleaseListP,
                 (System_Func_T__bool__o *)v36,
                 (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_12:
    sub_B170D4();
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
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *_4__this; // x9
  UserQuestMaster_o *userQuestMst; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_40F788D & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, quest);
    byte_40F788D = 1;
  }
  if ( !quest )
    goto LABEL_14;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( WarInfo_k__BackingField->fields.warId != _4__this->fields.id )
    return 0;
  userQuestMst = this->fields.userQuestMst;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B170D4();
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, UserId, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}