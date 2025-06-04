void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B023D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B023D4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_41286996(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B023D5 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4B023D5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BC3264(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.mapImageH = *(_QWORD *)&cSrc->fields.mapImageH;
  this->fields.bgmId = cSrc->fields.bgmId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_4B023D3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warId);
    byte_4B023D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v12; // x0
  __int64 v13; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  MapEntity_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4B023D9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, fadeType);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BC3008(&long_TypeInfo, v8);
    sub_1BC3008(&MapMaster_TypeInfo, v9);
    sub_1BC3008(&string_TypeInfo, v10);
    byte_4B023D9 = 1;
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
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_14:
    *fadeType = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)fadeType, 0, (int32_t)fadeTime, method);
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
                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)fadeType, (int32_t)Item, v16, v17);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Item,
          (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v19 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v19
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v19,
                                    (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_25:
    sub_1BC3264(Item, v13);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v20, v21);
    return 1;
  }
LABEL_26:
  sub_1BC3524(Item);
  return MapEntity__GetReferrerMapId(v22, v23);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v8; // x0
  __int64 v9; // x1
  MapMaster_c *v10; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x19
  System_String_o *result; // x0

  if ( (byte_4B023DB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    sub_1BC3008(&string_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4B023DB = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v8 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v8->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v10 = MapMaster_TypeInfo;
  v11 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v11 )
    sub_1BC3264(v10, v9);
  result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v11,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_1BC3524(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x6
  int32_t PrioredID; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B023D7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_MapCondMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B023D7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 3, this->fields.id, this->fields.bgmId, 0, 0, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               PrioredID,
                               (const MethodInfo_32AF0BC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_12:
    sub_1BC3264(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x6

  if ( (byte_4B023D8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_MapCondMaster___, *(_QWORD *)&beforeClearQuestId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B023D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v9);
  }
  return MapCondMaster__GetPrioredID(
           (MapCondMaster_o *)Instance,
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x6

  if ( (byte_4B023D6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_MapCondMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B023D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v5);
  }
  return MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 2, this->fields.id, this->fields.mapImageId, 0, 0, v6);
}


int32_t __fastcall MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v7; // x0
  __int64 v8; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  MapEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B023DA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BC3008(&long_TypeInfo, v4);
    sub_1BC3008(&MapMaster_TypeInfo, v5);
    byte_4B023DA = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v7 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v7 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v7->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v10 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(Item, v8);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  sub_1BC3524(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v14, v15);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MapMaster_c *v4; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_4B023DD & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, method);
    sub_1BC3008(&MapMaster_TypeInfo, v3);
    byte_4B023DD = 1;
  }
  v4 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v4 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v4->static_fields->SPOT_SCALE;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0LL);
}


System_Int32_array *__fastcall MapEntity__GetUseVoiceSvtIDList(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  MapGimmickEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B023DE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1BC3008(&System_Func_string__int__TypeInfo, v5);
    sub_1BC3008(&Method_System_Int32_Parse__, v6);
    sub_1BC3008(&MapMaster_TypeInfo, v7);
    sub_1BC3008(&string_TypeInfo, v8);
    byte_4B023DE = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v10 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v10 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v10->static_fields->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST,
          &value,
          (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0LL;
  if ( !value )
    sub_1BC3264(0LL, v11);
  if ( (System_String_c *)value->klass == string_TypeInfo )
  {
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 (System_String_o *)value,
                                                                 0x2Cu,
                                                                 0,
                                                                 0LL);
    v13 = (System_Func_object__int__o *)sub_1BC3254(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v13, 0LL, Method_System_Int32_Parse__, 0LL);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)v13,
                                                                 (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v14,
             (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    sub_1BC3524(value);
    return (System_Int32_array *)MapGimmickEntity__CreatePrimaryKey(v16, v17);
  }
}


bool __fastcall MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v7; // x0
  __int64 v8; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  bool result; // w0
  MapEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B023DC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BC3008(&long_TypeInfo, v4);
    sub_1BC3008(&MapMaster_TypeInfo, v5);
    byte_4B023DC = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v7 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v7 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v7->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v10 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(Item, v8);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12) > 0;
  sub_1BC3524(Item);
  MapEntity__GetSpotScale(v14, v15);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapMaster_c *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_4B023D2 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    byte_4B023D2 = 1;
  }
  v5 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v5->static_fields->CAMERA2D_RESET_DURATION;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v7->static_fields->Camera2DResetDuration;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapMaster_c *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_4B023D1 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    byte_4B023D1 = 1;
  }
  v5 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v5->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v7->static_fields->MapCameraMoveEasingType;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_39988720(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapMaster_c *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_4B023CF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    byte_4B023CF = 1;
  }
  v5 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v5->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v7->static_fields->MapCameraMoveTimeCoefficient;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapMaster_c *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_4B023CE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    byte_4B023CE = 1;
  }
  v5 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v5->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v7->static_fields->MapCameraMoveTimeConstant;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MapMaster_c *v5; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v7; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_4B023D0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&JsonManager_TypeInfo, v3);
    sub_1BC3008(&MapMaster_TypeInfo, v4);
    byte_4B023D0 = 1;
  }
  v5 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo);
    v5 = MapMaster_TypeInfo;
  }
  v7 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v5->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v7->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__GetScriptValue_39988720(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}