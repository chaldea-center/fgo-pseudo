void __fastcall MapEntity___ctor(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16544 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16544 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapEntity___ctor_40123300(MapEntity_o *this, MapEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B16545 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, cSrc, method);
    byte_4B16545 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.mapImageH = *(_QWORD *)&cSrc->fields.mapImageH;
  this->fields.bgmId = cSrc->fields.bgmId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapEntity__CreatePK(int32_t id, int32_t warId, const MethodInfo *method)
{
  if ( (byte_4B16543 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&warId, method);
    byte_4B16543 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           warId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  MapMaster_c *v20; // x0
  __int64 v21; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  MapEntity_o *v34; // x0
  const MethodInfo *v35; // x1

  if ( (byte_4B16549 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, fadeType, fadeTime);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&long_TypeInfo, v13, v14);
    sub_1BCA7E0(&MapMaster_TypeInfo, v15, v16);
    sub_1BCA7E0(&string_TypeInfo, v17, v18);
    byte_4B16549 = 1;
  }
  *fadeTime = 0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_14;
  v20 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, fadeType);
    v20 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v20->static_fields->SCRIPT_KEY_FADE_TYPE,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
LABEL_14:
    *fadeType = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)fadeType, 0LL, (int64_t)fadeTime, (int32_t)method, v4, v5, v6, v7);
    return 0;
  }
  Item = (System_String_o *)MapMaster_TypeInfo;
  v23 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v21);
  if ( !v23 )
    goto LABEL_25;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v23,
                              (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TYPE,
                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  sub_1BCA784((PartyOrganizationUtility_o *)fadeType, (int64_t)Item, v24, v25, v26, v27, v28, v29);
  Item = (System_String_o *)this->fields.script;
  if ( !Item )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Item,
          (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  Item = (System_String_o *)MapMaster_TypeInfo;
  v31 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v21);
  if ( !v31
    || (Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v31,
                                    (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_FADE_TIME,
                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(Item, v21);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    *fadeTime = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v32, v33);
    return 1;
  }
LABEL_26:
  sub_1BCACFC(Item);
  return MapEntity__GetReferrerMapId(v34, v35);
}


System_String_o *__fastcall MapEntity__GetOverwriteMapAssetId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v13; // x0
  __int64 v14; // x1
  MapMaster_c *v15; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  System_String_o *result; // x0

  if ( (byte_4B1654B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B1654B = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_String_o *)StringLiteral_1/*""*/;
  v13 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v13 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v13->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = MapMaster_TypeInfo;
  v16 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v14);
  if ( !v16 )
    sub_1BCAA3C(v15, v14);
  result = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_OVERWRITE_MAP_ASSET_ID,
                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( result && result->klass != string_TypeInfo )
  {
    sub_1BCACFC(result);
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  return result;
}


System_String_o *__fastcall MapEntity__GetPrioredBgmName(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x6
  int32_t PrioredID; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16547 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapCondMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16547 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !Instance )
    goto LABEL_12;
  PrioredID = MapCondMaster__GetPrioredID(
                (MapCondMaster_o *)Instance,
                3,
                this->fields.id,
                this->fields.bgmId,
                0,
                0,
                v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               PrioredID,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_12:
    sub_1BCAA3C(Instance, v11);
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
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x6

  if ( (byte_4B16548 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_MapCondMaster___,
      *(_QWORD *)&beforeClearQuestId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16548 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return MapCondMaster__GetPrioredID(
           (MapCondMaster_o *)Instance,
           4,
           this->fields.id,
           this->fields.headerImageId,
           beforeClearQuestId,
           questPhase,
           v11);
}


int32_t __fastcall MapEntity__GetPrioredMapImageId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x6

  if ( (byte_4B16546 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapCondMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16546 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapCondMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return MapCondMaster__GetPrioredID((MapCondMaster_o *)Instance, 2, this->fields.id, this->fields.mapImageId, 0, 0, v8);
}


int32_t __fastcall MapEntity__GetReferrerMapId(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v11; // x0
  __int64 v12; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  MapEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4B1654A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&MapMaster_TypeInfo, v8, v9);
    byte_4B1654A = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v11 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v11 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v11->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v14 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v12);
  if ( !v14
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v14,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_REFERRER_MAP_ID,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  sub_1BCACFC(Item);
  return (unsigned int)MapEntity__GetOverwriteMapAssetId(v18, v19);
}


float __fastcall MapEntity__GetSpotScale(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MapMaster_c *v6; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *SPOT_SCALE; // x20

  if ( (byte_4B1654D & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    sub_1BCA7E0(&MapMaster_TypeInfo, v4, v5);
    byte_4B1654D = 1;
  }
  v6 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v6 = MapMaster_TypeInfo;
  }
  SPOT_SCALE = v6->static_fields->SPOT_SCALE;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, SPOT_SCALE, 1.0, 0LL);
}


System_Int32_array *__fastcall MapEntity__GetUseVoiceSvtIDList(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  MapMaster_c *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__int__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  MapGimmickEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1654E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Int32_Parse__, v10, v11);
    sub_1BCA7E0(&MapMaster_TypeInfo, v12, v13);
    sub_1BCA7E0(&string_TypeInfo, v14, v15);
    byte_4B1654E = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return 0LL;
  v17 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v17 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v17->static_fields->SCRIPT_KEY_USE_VOICE_SVT_ID_LIST,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0LL;
  if ( !value )
    sub_1BCAA3C(0LL, v18);
  if ( (System_String_c *)value->klass == string_TypeInfo )
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 (System_String_o *)value,
                                                                 0x2Cu,
                                                                 0,
                                                                 0LL);
    v23 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v20, v21, v22);
    System_Func_object__int____ctor(v23, 0LL, Method_System_Int32_Parse__, 0LL);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v24,
             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  else
  {
    sub_1BCACFC(value);
    return (System_Int32_array *)MapGimmickEntity__CreatePrimaryKey(v26, v27);
  }
}


bool __fastcall MapEntity__IsMapModel(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  MapMaster_c *v11; // x0
  __int64 v12; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  bool result; // w0
  MapEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4B1654C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&MapMaster_TypeInfo, v8, v9);
    byte_4B1654C = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v11 = MapMaster_TypeInfo;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v11 = MapMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)v11->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = MapMaster_TypeInfo;
  v14 = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, v12);
  if ( !v14
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v14,
                 (Il2CppObject *)MapMaster_TypeInfo->static_fields->SCRIPT_KEY_ON_MAP_MODEL,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16) > 0;
  sub_1BCACFC(Item);
  MapEntity__GetSpotScale(v18, v19);
  return result;
}


float __fastcall MapEntity__get_Camera2DResetDuration(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapMaster_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v10; // x0
  System_String_o *CAMERA2D_RESET_DURATION; // x20
  float Camera2DResetDuration; // s8

  if ( (byte_4B16542 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    byte_4B16542 = 1;
  }
  v8 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v8 = MapMaster_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  CAMERA2D_RESET_DURATION = v8->static_fields->CAMERA2D_RESET_DURATION;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  Camera2DResetDuration = v10->static_fields->Camera2DResetDuration;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, CAMERA2D_RESET_DURATION, Camera2DResetDuration, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveEasingType(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapMaster_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v10; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_EASING_TYPE; // x20
  int32_t MapCameraMoveEasingType; // w21

  if ( (byte_4B16541 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    byte_4B16541 = 1;
  }
  v8 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v8 = MapMaster_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_EASING_TYPE = v8->static_fields->MAP_CAMERA_MOVE_TIME_EASING_TYPE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveEasingType = v10->static_fields->MapCameraMoveEasingType;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue_38890912(script, MAP_CAMERA_MOVE_TIME_EASING_TYPE, MapCameraMoveEasingType, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeCoefficient(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapMaster_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v10; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_COEFFICIENT; // x20
  float MapCameraMoveTimeCoefficient; // s8

  if ( (byte_4B1653F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    byte_4B1653F = 1;
  }
  v8 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v8 = MapMaster_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_COEFFICIENT = v8->static_fields->MAP_CAMERA_MOVE_TIME_COEFFICIENT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeCoefficient = v10->static_fields->MapCameraMoveTimeCoefficient;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_COEFFICIENT, MapCameraMoveTimeCoefficient, 0LL);
}


float __fastcall MapEntity__get_MapCameraMoveTimeConstant(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapMaster_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v10; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_CONSTANT; // x20
  float MapCameraMoveTimeConstant; // s8

  if ( (byte_4B1653E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    byte_4B1653E = 1;
  }
  v8 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v8 = MapMaster_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_CONSTANT = v8->static_fields->MAP_CAMERA_MOVE_TIME_CONSTANT;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeConstant = v10->static_fields->MapCameraMoveTimeConstant;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue(script, MAP_CAMERA_MOVE_TIME_CONSTANT, MapCameraMoveTimeConstant, 0LL);
}


int32_t __fastcall MapEntity__get_MapCameraMoveTimeLogarithmBase(MapEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapMaster_c *v8; // x8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  BalanceConfig_c *v10; // x0
  System_String_o *MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE; // x20
  int32_t MapCameraMoveTimeLogarithmBase; // w21

  if ( (byte_4B16540 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&MapMaster_TypeInfo, v6, v7);
    byte_4B16540 = 1;
  }
  v8 = MapMaster_TypeInfo;
  script = this->fields.script;
  if ( !MapMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapMaster_TypeInfo, method);
    v8 = MapMaster_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE = v8->static_fields->MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  MapCameraMoveTimeLogarithmBase = v10->static_fields->MapCameraMoveTimeLogarithmBase;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__GetScriptValue_38890912(
           script,
           MAP_CAMERA_MOVE_TIME_LOGARITHM_BASE,
           MapCameraMoveTimeLogarithmBase,
           0LL);
}