void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB5AE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FB5AE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_27688372(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  if ( (byte_40FB5AF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_40FB5AF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  this->fields.warId = cSrc->fields.warId;
  this->fields.mapImageId = cSrc->fields.mapImageId;
  this->fields.mapImageW = cSrc->fields.mapImageW;
  this->fields.mapImageH = cSrc->fields.mapImageH;
  this->fields.headerImageId = cSrc->fields.headerImageId;
  this->fields.bgmId = cSrc->fields.bgmId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_40FB5AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warId);
    byte_40FB5AD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v16; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x22
  System_String_o *Item; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *v26; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x20
  MapEntity_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_40FB5B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, fadeType);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11);
    sub_B16FFC(&long_TypeInfo, v12);
    sub_B16FFC(&MapMaster_TypeInfo, v13);
    sub_B16FFC(&string_TypeInfo, v14);
    byte_40FB5B3 = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_16;
  v16 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v16 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v16->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    *fadeType = 0LL;
    sub_B16F98(
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
  v17 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v17 )
    goto LABEL_28;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
                              (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_B16F98((BattleServantConfConponent_o *)fadeType, (System_Int32_array **)Item, v19, v20, v21, v22, v23, v24);
  v26 = this->fields.script;
  if ( !v26 )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26,
          (System_Xml_XmlQualifiedName_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  v27 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v27
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v27,
                                    (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return 1;
  }
LABEL_29:
  v28 = (MapEntity_o *)sub_B173C8(Item);
  return MapEntity__GetReferrerMapId(v28, v29);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  System_String_o *result; // x0

  if ( (byte_40FB5B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FB5B5 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1;
  v8 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v8 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v8->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1;
  v9 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v9 )
    sub_B170D4();
  result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                                (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_B173C8(result);
    return (System_String_o *)StringLiteral_1;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x6
  int32_t PrioredID; // w19
  WebViewManager_o *v10; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB5B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapCondMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB5B1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID(
                MasterData_WarQuestSelectionMaster,
                3,
                this->fields.id,
                this->fields.bgmId,
                0,
                0,
                v8);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_12;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v10,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !v11 )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v11,
         &entity,
         PrioredID,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return entity->fields.age;
LABEL_12:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MapEntity__GetPrioredHeaderId(
        MapEntity_o *this,
        int32_t beforeClearQuestId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x6

  if ( (byte_40FB5B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapCondMaster___, *(_QWORD *)&beforeClearQuestId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB5B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return MapCondMaster__GetPrioredID(
           MasterData_WarQuestSelectionMaster,
           4,
           this->fields.id,
           this->fields.headerImageId,
           beforeClearQuestId,
           questPhase,
           v10);
}


int32_t __fastcall MapEntity__GetPrioredMapImageId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x6

  if ( (byte_40FB5B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapCondMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FB5B0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return MapCondMaster__GetPrioredID(
           MasterData_WarQuestSelectionMaster,
           2,
           this->fields.id,
           this->fields.mapImageId,
           0,
           0,
           v6);
}


int32_t __fastcall MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  MapEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FB5B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&MapMaster_TypeInfo, v5);
    byte_40FB5B4 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v7 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v7 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v7->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v8 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (MapEntity_o *)sub_B173C8(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v11, v12);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v5; // x0
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_40FB5B7 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    sub_B16FFC(&MapMaster_TypeInfo, v3);
    byte_40FB5B7 = 1;
  }
  script = this->fields.script;
  v5 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v5->static_fields->SPOT_SCALE;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0LL);
}


bool __fastcall MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  bool result; // w0
  MapEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FB5B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&long_TypeInfo, v4);
    sub_B16FFC(&MapMaster_TypeInfo, v5);
    byte_40FB5B6 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v7 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v7 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v7->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v8 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) > 0;
  v11 = (MapEntity_o *)sub_B173C8(Item);
  MapEntity__GetSpotScale(v11, v12);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_40FB5AC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    byte_40FB5AC = 1;
  }
  script = this->fields.script;
  v6 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v6 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v6->static_fields->CAMERA2D_RESET_DURATION;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v7->static_fields->Camera2DResetDuration;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_40FB5AB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    byte_40FB5AB = 1;
  }
  script = this->fields.script;
  v6 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v6 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v6->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v7->static_fields->MapCameraMoveEasingType;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_28973760(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_40FB5A9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    byte_40FB5A9 = 1;
  }
  script = this->fields.script;
  v6 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v6 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v6->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v7->static_fields->MapCameraMoveTimeCoefficient;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_40FB5A8 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    byte_40FB5A8 = 1;
  }
  script = this->fields.script;
  v6 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v6 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v6->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v7->static_fields->MapCameraMoveTimeConstant;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v6; // x8
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_40FB5AA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&MapMaster_TypeInfo, v4);
    byte_40FB5AA = 1;
  }
  script = this->fields.script;
  v6 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v6 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v6->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v7->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_28973760(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}