void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7305 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7305 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_22668832(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E7306 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E7306 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
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
  __int64 v3; // x3

  if ( (byte_42E7304 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, warId, (_DWORD)method, v3);
    byte_42E7304 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v24; // x0
  __int64 v25; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *v35; // x20
  MapEntity_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_42E730A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)fadeType,
      (_DWORD)fadeTime,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&long_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&MapMaster_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&string_TypeInfo, v20, v21, v22);
    byte_42E730A = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_16;
  v24 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v24 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v24->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_16:
    *fadeType = 0LL;
    sub_B5D560(
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
  v27 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v27 )
    goto LABEL_28;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v27,
                              (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_B5D560((BattleServantConfConponent_o *)fadeType, (System_Int32_array **)Item, v28, v29, v30, v31, v32, v33);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v35 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v35
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v35,
                                    (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(Item, v25);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
    return 1;
  }
LABEL_29:
  v36 = (MapEntity_o *)sub_B5D990(Item);
  return MapEntity__GetReferrerMapId(v36, v37);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v18; // x0
  __int64 v19; // x1
  MapMaster_c *v20; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x19
  System_String_o *result; // x0

  if ( (byte_42E730C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&string_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E730C = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v18 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v18 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v18->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v20 = MapMaster_TypeInfo;
  v21 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v21 )
    sub_B5D69C(v20, v19);
  result = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v21,
                                (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_B5D990(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x6
  int32_t PrioredID; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7308 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapCondMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E7308 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID(
                (MapCondMaster_o *)Instance,
                3,
                this->fields.id,
                this->fields.bgmId,
                0,
                0,
                v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                PrioredID,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_12:
    sub_B5D69C(Instance, v15);
  }
  return 0LL;
}


int32_t __fastcall MapEntity__GetPrioredHeaderId(
        MapEntity_o *this,
        int32_t beforeClearQuestId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x6

  if ( (byte_42E7309 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapCondMaster___, beforeClearQuestId, questPhase, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E7309 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  return MapCondMaster__GetPrioredID(
           (MapCondMaster_o *)Instance,
           4,
           this->fields.id,
           this->fields.headerImageId,
           beforeClearQuestId,
           questPhase,
           v12);
}


int32_t __fastcall MapEntity__GetPrioredMapImageId(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x6

  if ( (byte_42E7307 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapCondMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E7307 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return MapCondMaster__GetPrioredID(
           (MapCondMaster_o *)Instance,
           2,
           this->fields.id,
           this->fields.mapImageId,
           0,
           0,
           v10);
}


int32_t __fastcall MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v15; // x0
  __int64 v16; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x19
  MapEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_42E730B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MapMaster_TypeInfo, v11, v12, v13);
    byte_42E730B = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v15 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v15->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v18 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v18
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v18,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v16);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v20 = (MapEntity_o *)sub_B5D990(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v20, v21);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v9; // x0
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_42E730E & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MapMaster_TypeInfo, v5, v6, v7);
    byte_42E730E = 1;
  }
  script = this->fields.script;
  v9 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v9 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v9->static_fields->SPOT_SCALE;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0LL);
}


bool __fastcall MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v15; // x0
  __int64 v16; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x19
  bool result; // w0
  MapEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_42E730D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&long_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MapMaster_TypeInfo, v11, v12, v13);
    byte_42E730D = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v15 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v15 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)v15->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v18 = this->fields.script;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v18
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v18,
                 (System_Type_o *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(Item, v16);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item) > 0;
  v20 = (MapEntity_o *)sub_B5D990(Item);
  MapEntity__GetSpotScale(v20, v21);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v12; // x8
  BalanceConfig_c *v13; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_42E7303 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    byte_42E7303 = 1;
  }
  script = this->fields.script;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  v13 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v12->static_fields->CAMERA2D_RESET_DURATION;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v13->static_fields->Camera2DResetDuration;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v12; // x8
  BalanceConfig_c *v13; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_42E7302 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    byte_42E7302 = 1;
  }
  script = this->fields.script;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  v13 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v12->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v13->static_fields->MapCameraMoveEasingType;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_23861708(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v12; // x8
  BalanceConfig_c *v13; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_42E7300 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    byte_42E7300 = 1;
  }
  script = this->fields.script;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  v13 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v12->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v13->static_fields->MapCameraMoveTimeCoefficient;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v12; // x8
  BalanceConfig_c *v13; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_42E72FF & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    byte_42E72FF = 1;
  }
  script = this->fields.script;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  v13 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v12->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v13->static_fields->MapCameraMoveTimeConstant;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v12; // x8
  BalanceConfig_c *v13; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_42E7301 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&MapMaster_TypeInfo, v8, v9, v10);
    byte_42E7301 = 1;
  }
  script = this->fields.script;
  v12 = MapMaster_TypeInfo;
  if ( (BYTE3(MapMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  v13 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v12->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v13->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_23861708(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}