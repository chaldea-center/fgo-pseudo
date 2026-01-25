void WarEntity___ctor(WarEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF887 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF887 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
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

  v2 = 120;
  if ( this->fields.assetId <= 0 )
    v2 = 16;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t WarEntity__GetBaseMap(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF891 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF891 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 7, this->fields.id, v5);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


System_String_o *WarEntity__GetNoticeText(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t id; // w2
  System_String_o *v7; // x19
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF893 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF893 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
  id = this->fields.id;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 17, id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return v7;
}


int32_t WarEntity__GetPrioredBannerId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t bannerId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  bannerId = this->fields.bannerId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 3, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return bannerId;
}


System_Single_array_array *WarEntity__GetPrioredCoordinates(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  Il2CppObject *overwriteStr; // x19

  if ( (byte_4CEF890 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_JsonManager_DeserializeMultiArray_float___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF890 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 11, this->fields.id, v5);
  if ( !PrioredEntity )
    return this->fields.coordinates;
  overwriteStr = (Il2CppObject *)PrioredEntity->fields.overwriteStr;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_float_(
           overwriteStr,
           (const MethodInfo_31DF0E4 *)Method_JsonManager_DeserializeMultiArray_float___);
}


System_String_o *WarEntity__GetPrioredLongName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_String_o *longName; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  longName = this->fields.longName;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 9, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return longName;
}


int32_t WarEntity__GetPrioredMaterialParentWarId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t materialParentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  materialParentWarId = this->fields.materialParentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 10, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return materialParentWarId;
}


System_String_o *WarEntity__GetPrioredName(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  System_String_o *name; // x20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  name = this->fields.name;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 8, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteStr;
  return name;
}


int32_t WarEntity__GetPrioredParentId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t parentWarId; // w20
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  parentWarId = this->fields.parentWarId;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 2, this->fields.id, v5);
  if ( PrioredEntity )
    return PrioredEntity->fields.overwriteId;
  return parentWarId;
}


int32_t WarEntity__GetPriority(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4CEF894 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF894 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 22, this->fields.id, v5);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.priority;
  return *p_overwriteId;
}


int32_t WarEntity__GetQuestBoardSectionId(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF88C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF88C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 13, this->fields.id, v5);
  if ( PrioredEntity )
    LODWORD(PrioredEntity) = PrioredEntity->fields.overwriteId;
  return (int)PrioredEntity;
}


int32_t WarEntity__GetStartType(WarEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  WarAddEntity_o *PrioredEntity; // x0
  int32_t *p_overwriteId; // x8

  if ( (byte_4CEF892 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF892 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 16, this->fields.id, v5);
  p_overwriteId = &PrioredEntity->fields.overwriteId;
  if ( !PrioredEntity )
    p_overwriteId = &this->fields.startType;
  return *p_overwriteId;
}


bool WarEntity__HasFlag(WarEntity_o *this, int32_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t overwriteId; // w21
  WarAddEntity_o *PrioredEntity; // x0

  if ( (byte_4CEF889 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF889 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarAddMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v6);
  }
  overwriteId = this->fields.flag;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Instance, 6, this->fields.id, v7);
  if ( PrioredEntity )
    overwriteId = PrioredEntity->fields.overwriteId;
  return (overwriteId & flag) != 0;
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


bool WarEntity__IsContainPrioredEntity(WarEntity_o *this, int32_t type, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CEF896 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF896 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v6);
  return WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, type, this->fields.id, v7) != 0;
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


bool WarEntity__IsFolder(WarEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return !WarEntity__HasFlag(this, 2, v2);
}


bool WarEntity__IsGrandBoard(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t id; // w19

  if ( (byte_4CEF897 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEF897 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  id = this->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return id == v3->static_fields->GrandBoardWarId;
}


bool WarEntity__IsMainInterlude(WarEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t parentWarId; // w19

  if ( (byte_4CEF888 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEF888 = 1;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  Il2CppObject *MasterData_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_T__o *m_CancellationTokenSource; // x20
  System_Func_object__bool__o *v21; // x21

  if ( (byte_4CEF895 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__);
    sub_1C7BAE8(&WarEntity___c__DisplayClass52_0_TypeInfo);
    byte_4CEF895 = 1;
  }
  v3 = sub_1C7BD34(WarEntity___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( WarEntity__HasFlag(this, 0x2000, v12) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v3 + 24) = MasterData_object;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)MasterData_object, v14, v15, v16, v17, v18, v19);
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( Instance )
      {
        m_CancellationTokenSource = (System_Collections_Generic_List_T__o *)Instance->fields.m_CancellationTokenSource;
        v21 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MapControl_QuestInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v3,
          Method_WarEntity___c__DisplayClass52_0__IsPurchasedByRarePrism_b__0__,
          0);
        return BasicHelper__Any_object_(
                 m_CancellationTokenSource,
                 (System_Func_T__bool__o *)v21,
                 (const MethodInfo_3159728 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
      }
    }
LABEL_9:
    sub_1C7BD40(Instance, v5);
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


void WarEntity___c__DisplayClass52_0___ctor(WarEntity___c__DisplayClass52_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarEntity___c__DisplayClass52_0___IsPurchasedByRarePrism_b__0(
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
  if ( (byte_4CEF898 & 1) == 0 )
  {
    this = (WarEntity___c__DisplayClass52_0_o *)sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF898 = 1;
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
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  this = (WarEntity___c__DisplayClass52_0_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (WarEntity___c__DisplayClass52_0_o *)NetworkManager_TypeInfo;
  }
  if ( !userQuestMst )
LABEL_17:
    sub_1C7BD40(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   userQuestMst,
                   (int64_t)this[5].fields.userQuestMst->fields.sb,
                   quest->fields.questId,
                   0);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0);
  return 0;
}