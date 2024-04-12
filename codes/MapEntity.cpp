void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE6E2 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE6E2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_22267040(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AE6E3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE6E3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B52A5C(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.warId = cSrc->fields.warId;
  this->fields.mapImageId = cSrc->fields.mapImageId;
  this->fields.mapImageW = cSrc->fields.mapImageW;
  this->fields.mapImageH = cSrc->fields.mapImageH;
  this->fields.headerImageId = cSrc->fields.headerImageId;
  this->fields.bgmId = cSrc->fields.bgmId;
}


System_String_o *__fastcall MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_42AE6E1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42AE6E1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v12; // x0
  __int64 v13; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x20
  MapEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_42AE6E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    sub_B52984(&string_TypeInfo);
    byte_42AE6E7 = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_16;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v12->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    *fadeType = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)fadeType,
      0LL,
      (System_String_array **)fadeTime,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    return 0;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v15 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v15 )
    goto LABEL_28;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
                              (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    if ( Item->klass != string_TypeInfo )
      goto LABEL_29;
    *fadeType = Item;
    if ( Item->klass != string_TypeInfo )
      goto LABEL_29;
  }
  else
  {
    *fadeType = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)fadeType, (System_Int32_array **)Item, v16, v17, v18, v19, v20, v21);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v23 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v23
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23,
                                    (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_28:
    sub_B52A5C(Item, v13);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return 1;
  }
LABEL_29:
  v24 = (MapEntity_o *)sub_B52D50(Item);
  return MapEntity__GetReferrerMapId(v24, v25);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  MapMaster_c *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_String_o *result; // x0

  if ( (byte_42AE6E9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&MapMaster_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE6E9 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v4->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7 )
    sub_B52A5C(v6, v5);
  result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_B52D50(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  int32_t PrioredID; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AE6E5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE6E5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 3, this->fields.id, this->fields.bgmId, 0, 0, v5);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                PrioredID,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_12:
    sub_B52A5C(Instance, v4);
  }
  return 0LL;
}


int32_t __fastcall MapEntity__GetPrioredHeaderId(
        MapEntity_o *this,
        int32_t beforeClearQuestId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x6

  if ( (byte_42AE6E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE6E6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6

  if ( (byte_42AE6E4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE6E4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
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
  MapEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42AE6E8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6E8 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v4->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v9 = (MapEntity_o *)sub_B52D50(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v9, v10);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x0
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_42AE6EB & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6EB = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v4->static_fields->SPOT_SCALE;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
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
  bool result; // w0
  MapEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42AE6EA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6EA = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v4->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) > 0;
  v9 = (MapEntity_o *)sub_B52D50(Item);
  MapEntity__GetSpotScale(v9, v10);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_42AE6E0 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6E0 = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v4->static_fields->CAMERA2D_RESET_DURATION;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v5->static_fields->Camera2DResetDuration;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_42AE6DF & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6DF = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v4->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v5->static_fields->MapCameraMoveEasingType;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_23492580(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_42AE6DD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6DD = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v4->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v5->static_fields->MapCameraMoveTimeCoefficient;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_42AE6DC & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6DC = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v4->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v5->static_fields->MapCameraMoveTimeConstant;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x8
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_42AE6DE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&MapMaster_TypeInfo);
    byte_42AE6DE = 1;
  }
  script = this->fields.script;
  v4 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v4->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v5->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_23492580(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}