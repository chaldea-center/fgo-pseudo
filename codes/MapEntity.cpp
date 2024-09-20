void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B4A3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_39399276(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5B4A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B4A4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.mapImageH = *(_QWORD *)&cSrc->fields.mapImageH;
  this->fields.bgmId = cSrc->fields.bgmId;
}


System_String_o *__fastcall MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_4A5B4A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B4A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapEntity__CreatePrimaryKey(MapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapEntity__CreatePK(this->fields.id, this->fields.warId, v2);
}


bool __fastcall MapEntity__GetFirstFadeInfo(
        MapEntity_o *this,
        System_String_o **fadeType,
        int32_t *fadeTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v8; // x0
  __int64 v9; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  MapEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4A5B4A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B4A8 = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_14;
  v8 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v8 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v8->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_14:
    *fadeType = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)fadeType, 0, (int32_t)fadeTime, (int32_t)method);
    return 0;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v11 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v11 )
    goto LABEL_25;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v11,
                              (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    if ( Item->klass != string_TypeInfo )
      goto LABEL_26;
    *fadeType = Item;
    if ( Item->klass != string_TypeInfo )
      goto LABEL_26;
  }
  else
  {
    *fadeType = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)fadeType, (int32_t)Item, v12, v13);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Item,
          (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v15 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v15
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                    (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(Item, v9);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v16, v17);
    return 1;
  }
LABEL_26:
  sub_1B88ACC(Item);
  return MapEntity__GetReferrerMapId(v18, v19);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  MapMaster_c *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_String_o *result; // x0

  if ( (byte_4A5B4AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&MapMaster_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B4AA = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v4 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7 )
    sub_1B8880C(v6, v5);
  result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_1B88ACC(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  int32_t PrioredID; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B4A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B4A6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 3, this->fields.id, this->fields.bgmId, 0, 0, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               PrioredID,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


int32_t __fastcall MapEntity__GetPrioredHeaderId(
        MapEntity_o *this,
        int32_t beforeClearQuestId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x6

  if ( (byte_4A5B4A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B4A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  return MapCondMaster__GetPrioredID(
           (MapCondMaster_o *)Instance,
           4,
           this->fields.id,
           this->fields.headerImageId,
           beforeClearQuestId,
           questPhase,
           v9);
}


int32_t __fastcall MapEntity__GetPrioredMapImageId(MapEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6

  if ( (byte_4A5B4A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B4A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 2, this->fields.id, this->fields.mapImageId, 0, 0, v5);
}


int32_t __fastcall MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  MapEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5B4A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B4A9 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
  sub_1B88ACC(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v11, v12);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_4A5B4AC & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B4AC = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v3->static_fields->SPOT_SCALE;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0LL);
}


bool __fastcall MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  bool result; // w0
  MapEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5B4AB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B4AB = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) > 0;
  sub_1B88ACC(Item);
  MapEntity__GetSpotScale(v11, v12);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_4A5B4A1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B4A1 = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v3->static_fields->CAMERA2D_RESET_DURATION;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v5->static_fields->Camera2DResetDuration;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_4A5B4A0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B4A0 = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v3->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v5->static_fields->MapCameraMoveEasingType;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_38180480(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_4A5B49E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B49E = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v3->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v5->static_fields->MapCameraMoveTimeCoefficient;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_4A5B49D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B49D = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v3->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v5->static_fields->MapCameraMoveTimeConstant;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_4A5B49F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&MapMaster_TypeInfo);
    byte_4A5B49F = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v3->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v5->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_38180480(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}