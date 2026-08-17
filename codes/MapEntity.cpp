void MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D41 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970D41 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_5970D40 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970D40 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
        int32_t *fadeColorKind,
        UnityEngine_Color_o *fadeColor,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MapMaster_c *v19; // x0
  __int64 v20; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v22; // x24
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  bool result; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v31; // x23
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x22
  System_String_o *v33; // x22
  int32_t v34; // w8
  struct System_Collections_Generic_Dictionary_string__object__o *v35; // x22
  __int64 v36; // x1
  MapMaster_c *v37; // x0
  System_Collections_Generic_Dictionary_string__object__o *v38; // x20
  System_Single_array *FloatArray; // x0
  float v41; // s1
  MapEntity_o *v42; // x0
  float *v43; // x1
  const MethodInfo *v44; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970D45 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&MapMaster_TypeInfo);
    sub_2213A60(&StringLiteral_16241/*"White"*/);
    sub_2213A60(&StringLiteral_14218/*"TargetColor"*/);
    sub_2213A60(&StringLiteral_3304/*"Black"*/);
    byte_5970D45 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  *fadeTime = 0;
  *fadeColorKind = 2;
  value = 0;
  *fadeColor = _Q0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_14;
  v19 = MapMaster_TypeInfo;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, fadeType);
    v19 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v19->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_14:
    *fadeType = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)fadeType,
      0,
      (System_String_o *)fadeTime,
      (System_String_o *)fadeColorKind,
      (int32_t)fadeColor,
      (int32_t)method,
      v6,
      v7);
    return 0;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v22 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v20);
  if ( !v22 )
    goto LABEL_50;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v22,
                              (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v29 = qword_5984390;
    if ( Item->klass != (System_String_c *)qword_5984390 )
      goto LABEL_51;
    *fadeType = Item;
    v29 = qword_5984390;
    if ( Item->klass != (System_String_c *)qword_5984390 )
      goto LABEL_51;
  }
  else
  {
    *fadeType = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)fadeType, (int32_t)Item, v23, v24, v25, v26, v27, v28);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_50;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)Item,
         (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_String_o *)MapMaster_TypeInfo;
    v31 = this->fields.script;
    if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v20);
    if ( !v31 )
      goto LABEL_50;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v31,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_50;
    v29 = qword_5984368;
    if ( Item->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    {
LABEL_51:
      sub_221405C(Item, v29, v23);
      return MapEntity__TryGetFirstFadeTime(v42, v43, v44);
    }
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v23);
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v32 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v20);
  if ( !v32 )
    goto LABEL_50;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v32,
         (Il2CppObject *)MapMaster_TypeInfo->static_fields->ScriptKeyFadeKind,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Item = (System_String_o *)value;
    if ( !value )
      goto LABEL_50;
    v33 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                               value,
                               value->klass->vtable[3].method);
    if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_16241/*"White"*/, 0) )
    {
      v34 = 2;
    }
    else if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_3304/*"Black"*/, 0) )
    {
      v34 = 1;
    }
    else if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_14218/*"TargetColor"*/, 0) )
    {
      v34 = 3;
    }
    else
    {
      v34 = *fadeColorKind;
    }
    *fadeColorKind = v34;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v35 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v20);
  if ( !v35 )
LABEL_50:
    sub_2213CDC(Item, v20);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v35,
          (Il2CppObject *)MapMaster_TypeInfo->static_fields->ScriptKeyFadeColor,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || *fadeColorKind != 3 )
  {
    return 1;
  }
  v37 = MapMaster_TypeInfo;
  v38 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v36);
    v37 = MapMaster_TypeInfo;
  }
  FloatArray = EntityScriptUtil__GetFloatArray(v38, v37->static_fields->ScriptKeyFadeColor, 0, 0);
  __asm { FMOV            V0.2S, #1.0 }
  v41 = 1.0;
  if ( FloatArray )
  {
    if ( SLODWORD(FloatArray->max_length) >= 3 )
    {
      _D0 = *(_QWORD *)FloatArray->m_Items;
      v41 = FloatArray->m_Items[2];
    }
  }
  *(_QWORD *)&fadeColor->fields.r = _D0;
  result = 1;
  fadeColor->fields.b = v41;
  fadeColor->fields.a = 1.0;
  return result;
}


System_String_o *MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  MapMaster_c *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_String_o *result; // x0
  __int64 v9; // x2

  if ( (byte_5970D48 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&MapMaster_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970D48 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v4 = MapMaster_TypeInfo;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v6 = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v5);
  if ( !v7 )
    sub_2213CDC(v6, v5);
  result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != (System_String_c *)qword_5984390 )
  {
    sub_221405C(result, qword_5984390, v9);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


int32_t MapEntity__GetPlanetMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D4D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23879/*"planetMapAssetId"*/);
    byte_5970D4D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23879/*"planetMapAssetId"*/, this->fields.id, 0);
}


System_String_o *MapEntity__GetPlanetPrefabName(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D4E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11079/*"PlanetEarth"*/);
    sub_2213A60(&StringLiteral_23880/*"planetPrefabName"*/);
    byte_5970D4E = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23880/*"planetPrefabName"*/,
           (System_String_o *)StringLiteral_11079/*"PlanetEarth"*/,
           0);
}


System_String_o *MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  int32_t PrioredID; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D43 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970D43 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 3, this->fields.id, this->fields.bgmId, 0, 0, v5);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               PrioredID,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_12:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_5970D44 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970D44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v8);
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

  if ( (byte_5970D42 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970D42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
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
  MapEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5970D47 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D47 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v5);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v5);
  }
  if ( *(_QWORD *)(*(_QWORD *)Item + 64LL) == *(_QWORD *)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v8);
  sub_221405C(Item, qword_5984368, v8);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v10, v11);
}


float MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_5970D4A & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D4A = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v3->static_fields->SPOT_SCALE;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0);
}


System_Int32_array *MapEntity__GetUseVoiceSvtIDList(MapEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  MapEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970D4B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_System_Int32_Parse__);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D4B = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  if ( !value )
    sub_2213CDC(0, v5);
  if ( value->klass == (Il2CppClass *)qword_5984390 )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)value,
                                                                0x2Cu,
                                                                0,
                                                                0);
    v8 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(v8, 0, Method_System_Int32_Parse__, 0);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v7,
                                                                (System_Func_TSource__TResult__o *)v8,
                                                                (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v9,
             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    sub_221405C(value, qword_5984390, v6);
    return (System_Int32_array *)MapEntity__IsPlanetMap(v11, v12);
  }
}


bool MapEntity__IsHeaderHidden(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19

  if ( (byte_5970D4F & 1) == 0 )
  {
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D4F = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
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
  bool result; // w0
  MapEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5970D49 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D49 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = MapMaster_TypeInfo;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v4 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v4->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v7 = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v5);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(Item, v5);
  }
  if ( *(_QWORD *)(*(_QWORD *)Item + 64LL) == *(_QWORD *)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v8) > 0;
  sub_221405C(Item, qword_5984368, v8);
  MapEntity__GetSpotScale(v10, v11);
  return result;
}


bool MapEntity__IsPlanetMap(MapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970D4C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21966/*"isPlanetMap"*/);
    byte_5970D4C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21966/*"isPlanetMap"*/, 0, 0) > 0;
}


bool MapEntity__TryGetFirstFadeTime(MapEntity_o *this, float *fadeTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  float v7; // s8
  System_String_o *v8; // x20
  ScrTerminalMap_c *v9; // x0
  bool result; // w0
  UnityEngine_Color_o fadeColor; // [xsp+8h] [xbp-48h] BYREF
  int32_t fadeColorKind[2]; // [xsp+18h] [xbp-38h] BYREF
  System_String_o *fadeType; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_5970D46 & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalMap_TypeInfo);
    byte_5970D46 = 1;
  }
  fadeType = 0;
  *(_QWORD *)&fadeColor.fields.b = 0;
  *(_QWORD *)fadeColorKind = 0;
  *(_QWORD *)&fadeColor.fields.r = 0;
  v7 = 0.0;
  if ( !MapEntity__GetFirstFadeInfo(this, &fadeType, &fadeColorKind[1], fadeColorKind, &fadeColor, v3) )
    goto LABEL_9;
  v8 = fadeType;
  v9 = ScrTerminalMap_TypeInfo;
  if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, v6);
  if ( !v8 )
    sub_2213CDC(v9, v6);
  if ( System_String__Equals_75686512(v8, ScrTerminalMap_TypeInfo->static_fields->FIRST_FADE_TYPE_DURATION, 0) )
  {
    result = 1;
    v7 = (float)fadeColorKind[1] / 1000.0;
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

  if ( (byte_5970D3F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D3F = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v3->static_fields->CAMERA2D_RESET_DURATION;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v5->static_fields->Camera2DResetDuration;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0);
}


int32_t MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_5970D3E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D3E = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v3->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v5->static_fields->MapCameraMoveEasingType;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue_48000580(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0);
}


float MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_5970D3C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D3C = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v3->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v5->static_fields->MapCameraMoveTimeCoefficient;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0);
}


float MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_5970D3B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D3B = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v3->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v5->static_fields->MapCameraMoveTimeConstant;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0);
}


int32_t MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  MapMaster_c *v3; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v5; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_5970D3D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&MapMaster_TypeInfo);
    byte_5970D3D = 1;
  }
  v3 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !*(&MapMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v3 = MapMaster_TypeInfo;
  }
  v5 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v3->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v5->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue_48000580(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0);
}