void __fastcall WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1BE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C1BE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall WarEntity___ctor_40365792(WarEntity_o *this, WarEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *age; // x1
  struct System_String_o *name; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_o *longName; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *emptyMessage; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Single_array *coordinate; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Single_array_array *coordinates; // x1
  struct System_Single_array_array **p_coordinates; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5C1BF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5C1BF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  this->fields.id = cSrc->fields.id;
  age = cSrc->fields.age;
  this->fields.age = age;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.age, (int32_t)age, v7, v8);
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v11, v12);
  longName = cSrc->fields.longName;
  this->fields.longName = longName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.longName, (int32_t)longName, v14, v15);
  *(_QWORD *)&this->fields.bannerId = *(_QWORD *)&cSrc->fields.bannerId;
  this->fields.parentWarId = cSrc->fields.parentWarId;
  this->fields.flag = cSrc->fields.flag;
  emptyMessage = cSrc->fields.emptyMessage;
  this->fields.emptyMessage = emptyMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.emptyMessage, (int32_t)emptyMessage, v17, v18);
  this->fields.startType = cSrc->fields.startType;
  this->fields.targetId = cSrc->fields.targetId;
  *(_QWORD *)&this->fields.eventId = *(_QWORD *)&cSrc->fields.eventId;
  coordinate = cSrc->fields.coordinate;
  this->fields.coordinate = coordinate;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.coordinate, (int32_t)coordinate, v20, v21);
  coordinates = cSrc->fields.coordinates;
  this->fields.coordinates = coordinates;
  p_coordinates = &this->fields.coordinates;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_coordinates, (int32_t)coordinates, v24, v25);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 7, this->fields.id, v5);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


System_String_o *__fastcall WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t id; // w2
  System_String_o *v7; // x19
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C1CB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  id = this->fields.id;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 17, id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v7;
}


int32_t __fastcall WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t bannerId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  bannerId = this->fields.bannerId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 3, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return bannerId;
}


System_Single_array_array *__fastcall WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  Il2CppObject *overwriteStr; // x19

  if ( (byte_4A5C1C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_JsonManager_DeserializeMultiArray_float___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, v5);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_2EE6070 *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *__fastcall WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_String_o *longName; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  longName = this->fields.longName;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 9, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return longName;
}


int32_t __fastcall WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t materialParentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  materialParentWarId = this->fields.materialParentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 10, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return materialParentWarId;
}


System_String_o *__fastcall WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_String_o *name; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  name = this->fields.name;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 8, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return name;
}


int32_t __fastcall WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t parentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  parentWarId = this->fields.parentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 2, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return parentWarId;
}


int32_t __fastcall WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 13, this->fields.id, v5);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


int32_t __fastcall WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4A5C1CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5C1CA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 16, this->fields.id, v5);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.startType;
  return *p_overwriteId;
}


bool __fastcall WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t overwriteId; // w21
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4A5C1C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C1C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  overwriteId = this->fields.flag;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 6, this->fields.id, v7);
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


bool __fastcall WarEntity__IsContainPrioredEntity(WarEntity_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5C1CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5C1CD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  return WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, type, this->fields.id, v7) != 0LL;
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

  if ( (byte_4A5C1C0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A5C1C0 = 1;
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
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_T__o *m_CancellationTokenSource; // x20
  System_Func_object__bool__o *v13; // x21

  if ( (byte_4A5C1CC & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__);
    sub_1B885B0(&WarEntity___c__DisplayClass52_0_TypeInfo);
    byte_4A5C1CC = 1;
  }
  v3 = sub_1B887FC(WarEntity___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( WarEntity__HasFlag(this, 0x2000, v8) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)MasterData_object, v10, v11);
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        m_CancellationTokenSource = (System_Collections_Generic_List_T__o *)Instance->fields.m_CancellationTokenSource;
        v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_MapControl_QuestInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v3,
          Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__,
          0LL);
        return BasicHelper__Any_object_(
                 m_CancellationTokenSource,
                 (System_Func_T__bool__o *)v13,
                 (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_9:
    sub_1B8880C(Instance, v5);
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
  if ( (byte_4A5C1CE & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass52_0_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C1CE = 1;
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
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (WarEntity___c__DisplayClass52_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_13:
    sub_1B8880C(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}