void MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD2A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CD2A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


void MapEntity___ctor_43147008(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2CD2B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CD2B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C942F0(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.mapImageH = *(_QWORD *)&cSrc->fields.mapImageH;
  this->fields.bgmId = cSrc->fields.bgmId;
}


System_String_o *MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_4D2CD29 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CD29 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MapEntity__CreatePrimaryKey(MapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapEntity__CreatePK(this->fields.id, this->fields.warId, v2);
}


bool MapEntity__GetFirstFadeInfo(
        MapEntity_o *this,
        System_String_o **fadeType,
        int32_t *fadeTime,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v12; // x0
  __int64 v13; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  MapEntity_o *v26; // x0
  float *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_4D2CD2F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2CD2F = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_14;
  v12 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v12 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v12->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_14:
    *fadeType = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)fadeType, 0, (int32_t)fadeTime, (int32_t)method, v4, v5, v6, v7);
    return 0;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v15 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v15 )
    goto LABEL_25;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v15,
                              (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
    *fadeType = 0;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)fadeType, (int32_t)Item, v16, v17, v18, v19, v20, v21);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Item,
          (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v23 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v23
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v23,
                                    (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_25:
    sub_1C942F0(Item, v13);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v24, v25);
    return 1;
  }
LABEL_26:
  sub_1C9468C(Item);
  return MapEntity__TryGetFirstFadeTime(v26, v27, v28);
}


System_String_o *MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  MapMaster_c *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_String_o *result; // x0

  if ( (byte_4D2CD32 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&MapMaster_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2CD32 = 1;
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
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7 )
    sub_1C942F0(v6, v5);
  result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_1C9468C(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


int32_t MapEntity__GetPlanetMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD37 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22928/*"planetMapAssetId"*/);
    byte_4D2CD37 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22928/*"planetMapAssetId"*/, this->fields.id, 0);
}


System_String_o *MapEntity__GetPlanetPrefabName(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD38 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10668/*"PlanetEarth"*/);
    sub_1C94098(&StringLiteral_22929/*"planetPrefabName"*/);
    byte_4D2CD38 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22929/*"planetPrefabName"*/,
           (System_String_o *)StringLiteral_10668/*"PlanetEarth"*/,
           0);
}


System_String_o *MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  int32_t PrioredID; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CD2D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1C94098(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CD2D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 3, this->fields.id, this->fields.bgmId, 0, 0, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               PrioredID,
                               (const MethodInfo_345B50C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_12:
    sub_1C942F0(Instance, v4);
  }
  return 0;
}


int32_t MapEntity__GetPrioredHeaderId(
        MapEntity_o *this,
        int32_t beforeClearQuestId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x6

  if ( (byte_4D2CD2E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CD2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v8);
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


int32_t MapEntity__GetPrioredMapImageId(MapEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6

  if ( (byte_4D2CD2C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CD2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  return MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 2, this->fields.id, this->fields.mapImageId, 0, 0, v5);
}


int32_t MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4D2CD31 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD31 = 1;
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
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
  sub_1C9468C(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v11, v12);
}


float MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_4D2CD34 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD34 = 1;
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
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0);
}


System_Int32_array *MapEntity__GetUseVoiceSvtIDList(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  MapEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CD35 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_string__int__TypeInfo);
    sub_1C94098(&Method_System_Int32_Parse__);
    sub_1C94098(&MapMaster_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2CD35 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST,
          &value,
          (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  if ( !value )
    sub_1C942F0(0, v5);
  if ( (System_String_c *)value->klass == string_TypeInfo )
  {
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)value,
                                                                0x2Cu,
                                                                0,
                                                                0);
    v7 = (System_Func_object__int__o *)sub_1C942E4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v7, 0, Method_System_Int32_Parse__, 0);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v6,
                                                                (System_Func_TSource__TResult__o *)v7,
                                                                (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    sub_1C9468C(value);
    return (System_Int32_array *)MapEntity__IsPlanetMap(v10, v11);
  }
}


bool MapEntity__IsHeaderHidden(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_4D2CD39 & 1) == 0 )
  {
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD39 = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v3 = MapMaster_TypeInfo;
  }
  return EntityScriptUtil__GetIntValue(script, v3->static_fields->SCRIPT_KEY_HEADER_HIDDEN, 0, 0) > 0;
}


bool MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4D2CD33 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD33 = 1;
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
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C942F0(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9) > 0;
  sub_1C9468C(Item);
  MapEntity__GetSpotScale(v11, v12);
  return result;
}


bool MapEntity__IsPlanetMap(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD36 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21124/*"isPlanetMap"*/);
    byte_4D2CD36 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21124/*"isPlanetMap"*/, 0, 0) > 0;
}


bool MapEntity__TryGetFirstFadeTime(MapEntity_o *this, float *fadeTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  float v7; // s8
  System_String_o *v8; // x20
  ScrTerminalMap_c *v9; // x0
  bool result; // w0
  int32_t fadeTimea; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *fadeType; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2CD30 & 1) == 0 )
  {
    sub_1C94098(&ScrTerminalMap_TypeInfo);
    byte_4D2CD30 = 1;
  }
  fadeType = 0;
  fadeTimea = 0;
  v7 = 0.0;
  if ( !MapEntity__GetFirstFadeInfo(this, &fadeType, &fadeTimea, v3) )
    goto LABEL_9;
  v8 = fadeType;
  v9 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( !v8 )
    sub_1C942F0(v9, v6);
  if ( System_String__Equals_64453064(v8, ScrTerminalMap_TypeInfo->static_fields->FIRST_FADE_TYPE_DURATION, 0) )
  {
    result = 1;
    v7 = (float)fadeTimea / 1000.0;
  }
  else
  {
LABEL_9:
    result = 0;
  }
  *fadeTime = v7;
  return result;
}


float MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_4D2CD28 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD28 = 1;
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
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0);
}


int32_t MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_4D2CD27 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD27 = 1;
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
  return JsonManager__GetScriptValue_41795824(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0);
}


float MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_4D2CD25 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD25 = 1;
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
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0);
}


float MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_4D2CD24 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD24 = 1;
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
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0);
}


int32_t MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_4D2CD26 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    byte_4D2CD26 = 1;
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
  return JsonManager__GetScriptValue_41795824(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0);
}