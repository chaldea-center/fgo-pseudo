void BattleLogicBattleScript___ctor(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicBattleScript_BattleScriptData_o *BattleLogicBattleScript__CreateBattleScriptData(
        BattleLogicBattleScript_o *this,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  BattleLogicBattleScript_o *v8; // x22
  BattleData_o *data; // x23
  BattleLogicBattleScript_BattleScriptDataCutIn_o *v10; // x22
  const MethodInfo *v11; // x5
  BattleData_o *v12; // x23
  const MethodInfo *v13; // x5
  BattleData_o *v14; // x23
  const MethodInfo *v15; // x5
  BattleData_o *v16; // x23
  const MethodInfo *v17; // x5

  v8 = this;
  if ( (byte_4CB935E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
    sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
    sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
    this = (BattleLogicBattleScript_o *)sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
    byte_4CB935E = 1;
  }
  if ( !entity )
    sub_1C6BC60(this, *(_QWORD *)&actorId);
  switch ( entity->fields.battleScriptAction )
  {
    case 3:
      data = v8->fields.data;
      v10 = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C6BC54(BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataCutIn___ctor(v10, data, actorId, entity, isEach, v11);
      break;
    case 4:
      v12 = v8->fields.data;
      v10 = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C6BC54(BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataMoveCamera___ctor(
        (BattleLogicBattleScript_BattleScriptDataMoveCamera_o *)v10,
        v12,
        actorId,
        entity,
        isEach,
        v13);
      break;
    case 5:
      v14 = v8->fields.data;
      v10 = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C6BC54(BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataMessage___ctor(
        (BattleLogicBattleScript_BattleScriptDataMessage_o *)v10,
        v14,
        actorId,
        entity,
        isEach,
        v15);
      break;
    case 6:
      v16 = v8->fields.data;
      v10 = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C6BC54(BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataPlayVoice___ctor(
        (BattleLogicBattleScript_BattleScriptDataPlayVoice_o *)v10,
        v16,
        actorId,
        entity,
        isEach,
        v17);
      break;
    default:
      v10 = 0;
      break;
  }
  return (BattleLogicBattleScript_BattleScriptData_o *)v10;
}


BattleLogicBattleScript_BattleScriptData_o *BattleLogicBattleScript__CreateBattleScriptSystemData(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        int32_t type,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  _QWORD *v8; // x8
  __int64 v9; // x20
  const MethodInfo *v10; // x5
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB935F & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo);
    sub_1C6BA08(&BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo);
    byte_4CB935F = 1;
  }
  if ( type == 2 )
  {
    data = this->fields.data;
    v8 = &BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo;
  }
  else
  {
    if ( type != 1 )
      return 0;
    data = this->fields.data;
    v8 = &BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo;
  }
  v9 = sub_1C6BC54(*v8);
  BattleLogicBattleScript_BattleScriptData___ctor((BattleLogicBattleScript_BattleScriptData_o *)v9, data, -1, 0, 0, v10);
  *(_QWORD *)(v9 + 48) = entities;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)entities, v11, v12);
  return (BattleLogicBattleScript_BattleScriptData_o *)v9;
}


void BattleLogicBattleScript__DownloadAsset(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  System_Collections_ICollection_o *AssumedBattleScriptIds; // x22
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  const MethodInfo *v7; // x2
  void *monitor; // x8
  unsigned __int64 v9; // x23
  BattleScriptEntity_array *BattleScriptEntities; // x0
  const MethodInfo *v11; // x4
  Il2CppObject *Instance; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_String_array *v14; // x21
  System_Action_o *v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_String_array *v17; // x20
  System_Action_o *v18; // x21
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9358 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBattleScript__DownloadAsset_b__7_0__);
    sub_1C6BA08(&Method_BattleLogicBattleScript__DownloadAsset_b__7_1__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB9358 = 1;
  }
  collection = 0;
  listAsset = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_23;
  data = (BattleData_o *)BattleData__getStageEntity(data, 0);
  if ( !data )
    goto LABEL_23;
  AssumedBattleScriptIds = (System_Collections_ICollection_o *)StageEntity__GetAssumedBattleScriptIds(
                                                                 (StageEntity_o *)data,
                                                                 0);
  if ( !BasicHelper__IsNullOrEmpty(AssumedBattleScriptIds, 0) )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !AssumedBattleScriptIds )
      goto LABEL_23;
    monitor = AssumedBattleScriptIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)monitor )
          sub_1C6BC68(data);
        BattleScriptEntities = BattleLogicBattleScript__GetBattleScriptEntities(
                                 this,
                                 *((_DWORD *)&AssumedBattleScriptIds[2].klass + v9),
                                 v7);
        BattleLogicBattleScript__GetAssetList(
          this,
          BattleScriptEntities,
          &listAsset,
          (System_Collections_Generic_List_string__o **)&collection,
          v11);
        if ( !v5 )
          goto LABEL_23;
        System_Collections_Generic_List_object___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)listAsset,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
        if ( !v6 )
          goto LABEL_23;
        System_Collections_Generic_List_object___AddRange(
          v6,
          collection,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
        LODWORD(monitor) = AssumedBattleScriptIds[1].monitor;
      }
      while ( (__int64)++v9 < (int)monitor );
    }
    this->fields.loadCount = 0;
    if ( !v5 )
      goto LABEL_23;
    if ( v5->fields._size >= 1 )
    {
      this->fields.loadCount = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      v13 = System_Linq_Enumerable__Distinct_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
              (const MethodInfo_315E6E8 *)Method_System_Linq_Enumerable_Distinct_string___);
      v14 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v13,
                                     (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
      v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__7_0__, 0);
      if ( !Instance )
        goto LABEL_23;
      data = (BattleData_o *)AssetManager__DownloadAssetStorage_40770356((AssetManager_o *)Instance, v14, v15, 1, 0);
    }
    if ( !v6 )
LABEL_23:
      sub_1C6BC60(data, method);
    if ( v6->fields._size >= 1 )
    {
      ++this->fields.loadCount;
      v16 = System_Linq_Enumerable__Distinct_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v6,
              (const MethodInfo_315E6E8 *)Method_System_Linq_Enumerable_Distinct_string___);
      v17 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v16,
                                     (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
      v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__7_1__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__downloadAudioAssetStorage_41755676(v17, v18, 1, 0);
    }
  }
}


void BattleLogicBattleScript__GetAssetList(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        System_Collections_Generic_List_string__o **listAsset,
        System_Collections_Generic_List_string__o **listAudioAsset,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleLogicBattleScript_o *AssetNames; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x25
  BattleScriptEntity_o *v20; // x23
  System_Collections_Generic_List_string__o *v21; // x24
  System_Collections_Generic_List_string__o *v22; // x24
  const MethodInfo *v23; // x2

  if ( (byte_4CB9360 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB9360 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAsset = (System_Collections_Generic_List_string__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)listAsset, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAudioAsset = (System_Collections_Generic_List_string__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)listAudioAsset, (int32_t)v12, v13, v14);
  if ( !entities )
    goto LABEL_11;
  max_length = entities->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C6BC68(AssetNames);
      v20 = entities->m_Items[v19];
      v21 = *listAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAssetNames(AssetNames, v20, v17);
      if ( !v21 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v21,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
      v22 = *listAudioAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAudioAssetNames(this, v20, v23);
      if ( !v22 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v22,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        return;
    }
LABEL_11:
    sub_1C6BC60(AssetNames, v16);
  }
}


System_String_array *BattleLogicBattleScript__GetAssetNames(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  ServantAssetLoadManager_o *CutInId; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4CB9361 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4CB9361 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_14;
  if ( entity->fields.battleScriptAction != 3
    || (CutInId = (ServantAssetLoadManager_o *)BattleScriptEntity__GetCutInId(entity, 0), !(_DWORD)CutInId) )
  {
    if ( v4 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_14:
    sub_1C6BC60(CutInId, v6);
  }
  v7 = (int)CutInId;
  CutInId = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !CutInId )
    goto LABEL_14;
  CutInId = (ServantAssetLoadManager_o *)ServantAssetLoadManager__getSkillCutInPath(CutInId, v7, 0);
  if ( !v4 )
    goto LABEL_14;
  items = v4->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v4->fields._size;
  v13 = CutInId;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)CutInId,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *BattleLogicBattleScript__GetAudioAssetNames(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  _BOOL8 VoiceAssetName_47002148; // x0
  __int64 v7; // x1
  int32_t battleScriptAction; // w8
  System_String_o *CharaVoice; // x0
  const MethodInfo *v10; // x3
  System_String_array **p_assetNames; // x8
  BattleLogicBattleScript_o *CutInVoices; // x0
  const MethodInfo *v13; // x3
  System_String_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *assetNames; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB9362 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB9362 = 1;
  }
  v15 = 0;
  assetNames = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_15;
  battleScriptAction = entity->fields.battleScriptAction;
  if ( battleScriptAction == 3 )
  {
    CutInVoices = (BattleLogicBattleScript_o *)BattleScriptEntity__GetCutInVoices(entity, 0);
    VoiceAssetName_47002148 = BattleLogicBattleScript__TryGetVoiceAssetName_47002148(
                                CutInVoices,
                                (System_String_array *)CutInVoices,
                                &v15,
                                v13);
    if ( VoiceAssetName_47002148 )
    {
      if ( v5 )
      {
        p_assetNames = &v15;
        goto LABEL_12;
      }
LABEL_15:
      sub_1C6BC60(VoiceAssetName_47002148, v7);
    }
LABEL_13:
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_15;
  }
  if ( battleScriptAction != 6 )
    goto LABEL_13;
  CharaVoice = BattleScriptEntity__GetCharaVoice(entity, 0);
  VoiceAssetName_47002148 = BattleLogicBattleScript__TryGetVoiceAssetName(this, CharaVoice, &assetNames, v10);
  if ( !VoiceAssetName_47002148 )
    goto LABEL_13;
  if ( !v5 )
    goto LABEL_15;
  p_assetNames = &assetNames;
LABEL_12:
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)*p_assetNames,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleScriptEntity_array *BattleLogicBattleScript__GetBattleScriptEntities(
        BattleLogicBattleScript_o *this,
        int32_t battleScriptId,
        const MethodInfo *method)
{
  BattleScriptMaster_o *dicCacheBattleScriptEntities; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9357 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BattleScriptMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
    byte_4CB9357 = 1;
  }
  value = 0;
  dicCacheBattleScriptEntities = (BattleScriptMaster_o *)this->fields.dicCacheBattleScriptEntities;
  if ( !dicCacheBattleScriptEntities )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)dicCacheBattleScriptEntities,
          battleScriptId,
          &value,
          (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    dicCacheBattleScriptEntities = (BattleScriptMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BattleScriptMaster___);
    if ( dicCacheBattleScriptEntities )
    {
      value = (Il2CppObject *)BattleScriptMaster__GetBattleScriptEntities(
                                dicCacheBattleScriptEntities,
                                battleScriptId,
                                0);
      dicCacheBattleScriptEntities = (BattleScriptMaster_o *)this->fields.dicCacheBattleScriptEntities;
      if ( dicCacheBattleScriptEntities )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)dicCacheBattleScriptEntities,
          battleScriptId,
          value,
          (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
        return (BattleScriptEntity_array *)value;
      }
    }
LABEL_11:
    sub_1C6BC60(dicCacheBattleScriptEntities, *(_QWORD *)&battleScriptId);
  }
  return (BattleScriptEntity_array *)value;
}


void BattleLogicBattleScript__Initialize(
        BattleLogicBattleScript_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  struct System_Collections_Generic_Dictionary_string__AssetData__o **p_dicAssetData; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB9356 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
    byte_4CB9356 = 1;
  }
  this->fields.data = battleData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)battleData, (int32_t)method, v3);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
  this->fields.dicCacheBattleScriptEntities = (struct System_Collections_Generic_Dictionary_int__BattleScriptEntity____o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dicCacheBattleScriptEntities, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.dicAssetData = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v9;
  p_dicAssetData = &this->fields.dicAssetData;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_dicAssetData, (int32_t)v9, v11, v12);
  *((_DWORD *)p_dicAssetData + 2) = 0;
}


bool BattleLogicBattleScript__IsLoading(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  return this->fields.loadCount > 0;
}


void BattleLogicBattleScript__LoadAsset(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x22
  const MethodInfo *v12; // x3
  __int64 v13; // x0

  if ( (byte_4CB9359 & 1) == 0 )
  {
    sub_1C6BA08(&BattleScriptEntity___TypeInfo);
    byte_4CB9359 = 1;
  }
  v7 = sub_1C6BAB0(BattleScriptEntity___TypeInfo, 1);
  if ( !v7 )
    sub_1C6BC60(0, v8);
  v11 = v7;
  if ( entity )
  {
    v7 = sub_1C6BB44(entity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v13 = sub_1C6BC84(0);
      sub_1C6BB30(v13, 0);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C6BC68(v7);
  *(_QWORD *)(v11 + 32) = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)entity, v9, v10);
  BattleLogicBattleScript__LoadAsset_46998088(this, (BattleScriptEntity_array *)v11, callback, v12);
}


void BattleLogicBattleScript__LoadAsset_46998088(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_string__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t current; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  System_String_o *v24; // x22
  AssetLoader_LoadEndDataHandler_o *v25; // x23
  System_Action_o **v26; // x21
  Il2CppObject *v27; // x22
  System_Action_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+0h] [xbp-B0h] BYREF
  AssetData_o *obj; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_string__o *listAudioAsset; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CB935A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBattleScript___c__DisplayClass9_0__LoadAsset_b__1__);
    sub_1C6BA08(&BattleLogicBattleScript___c__DisplayClass9_0_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBattleScript___c__DisplayClass9_1__LoadAsset_b__0__);
    sub_1C6BA08(&BattleLogicBattleScript___c__DisplayClass9_1_TypeInfo);
    byte_4CB935A = 1;
  }
  listAudioAsset = 0;
  listAsset = 0;
  memset(&v33, 0, sizeof(v33));
  obj = 0;
  v7 = sub_1C6BC54(BattleLogicBattleScript___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  BattleLogicBattleScript__GetAssetList(this, entities, &listAsset, &listAudioAsset, v14);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)listAsset, 0)
    && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)listAudioAsset, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  this->fields.loadCount = 0;
  v8 = listAsset;
  if ( !listAsset )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)listAsset,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v15 = sub_1C6BC54(BattleLogicBattleScript___c__DisplayClass9_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15 )
      sub_1C6BC60(v16, v17);
    *(_QWORD *)(v15 + 24) = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 24), v7, v18, v19);
    current = (int32_t)v33.fields._current;
    *(_QWORD *)(v15 + 16) = v33.fields._current;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 16), current, v21, v22);
    if ( !BattleLogicBattleScript__TryGetAsset(this, *(System_String_o **)(v15 + 16), &obj, v23) )
    {
      ++this->fields.loadCount;
      v24 = *(System_String_o **)(v15 + 16);
      v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v25,
        (Il2CppObject *)v15,
        Method_BattleLogicBattleScript___c__DisplayClass9_1__LoadAsset_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v24, v25, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v8 = listAudioAsset;
  if ( !listAudioAsset )
LABEL_26:
    sub_1C6BC60(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v26 = (System_Action_o **)(v7 + 32);
  v33 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v27 = v33.fields._current;
    ++this->fields.loadCount;
    v28 = *v26;
    if ( !*v26 )
    {
      v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v7,
        Method_BattleLogicBattleScript___c__DisplayClass9_0__LoadAsset_b__1__,
        0);
      *v26 = v28;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v28, v29, v30);
    }
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage((System_String_o *)v27, v28, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


bool BattleLogicBattleScript__TryGetAsset(
        BattleLogicBattleScript_o *this,
        System_String_o *key,
        AssetData_o **obj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *dicAssetData; // x0

  if ( (byte_4CB935D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_4CB935D = 1;
  }
  *obj = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)obj, 0, (int32_t)obj, method);
  dicAssetData = this->fields.dicAssetData;
  if ( !dicAssetData )
    sub_1C6BC60(0, v7);
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)dicAssetData,
           (Il2CppObject *)key,
           (Il2CppObject **)obj,
           (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
}


bool BattleLogicBattleScript__TryGetVoiceAssetName(
        BattleLogicBattleScript_o *this,
        System_String_o *charaVoice,
        System_String_array **assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_array *v10; // x21
  BattleLogicBattleScript_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4CB9363 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    byte_4CB9363 = 1;
  }
  v6 = sub_1C6BAB0(string___TypeInfo, 1);
  if ( !v6 )
    sub_1C6BC60(0, v7);
  v10 = (System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C6BC68(v6);
  *(_QWORD *)(v6 + 32) = charaVoice;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)charaVoice, v8, v9);
  return BattleLogicBattleScript__TryGetVoiceAssetName_47002148(v11, v10, assetNames, v12);
}


bool BattleLogicBattleScript__TryGetVoiceAssetName_47002148(
        BattleLogicBattleScript_o *this,
        System_String_array *charaVoices,
        System_String_array **assetNames,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_array *v8; // x0
  Il2CppObject *v9; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  System_String_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_String_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB9364 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB9364 = 1;
  }
  *assetNames = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)assetNames, 0, (int32_t)assetNames, method);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)charaVoices, 0);
  if ( !IsNullOrEmpty )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !charaVoices )
      goto LABEL_21;
    max_length = charaVoices->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)max_length )
LABEL_22:
          sub_1C6BC68(v8);
        v12 = charaVoices->m_Items[v11];
        v8 = (System_String_array *)System_String__IsNullOrEmpty(v12, 0);
        if ( ((unsigned __int8)v8 & 1) == 0 )
        {
          if ( !v12 )
            goto LABEL_21;
          v8 = System_String__Split_64018700(v12, (System_String_o *)StringLiteral_1449/*":"*/, 0, 0);
          if ( !v8 )
            goto LABEL_21;
          if ( !LODWORD(v8->max_length) )
            goto LABEL_22;
          if ( !v7 )
            goto LABEL_21;
          v9 = (Il2CppObject *)v8->m_Items[0];
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_string__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v9;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v9, v13, v14);
          }
        }
        LODWORD(max_length) = charaVoices->max_length;
      }
      while ( (__int64)++v11 < (int)max_length );
    }
    if ( !v7 )
LABEL_21:
      sub_1C6BC60(v8, v9);
    v19 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
    *assetNames = v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)assetNames, (int32_t)v19, v20, v21);
  }
  return !IsNullOrEmpty;
}


void BattleLogicBattleScript__UnloadAsset(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  if ( (byte_4CB935B & 1) == 0 )
  {
    sub_1C6BA08(&BattleScriptEntity___TypeInfo);
    byte_4CB935B = 1;
  }
  v5 = sub_1C6BAB0(BattleScriptEntity___TypeInfo, 1);
  if ( !v5 )
    sub_1C6BC60(0, v6);
  v9 = v5;
  if ( entity )
  {
    v5 = sub_1C6BB44(entity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v11 = sub_1C6BC84(0);
      sub_1C6BB30(v11, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C6BC68(v5);
  *(_QWORD *)(v9 + 32) = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)entity, v7, v8);
  BattleLogicBattleScript__UnloadAsset_46999560(this, (BattleScriptEntity_array *)v9, v10);
}


void BattleLogicBattleScript__UnloadAsset_46999560(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *dicAssetData; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v9; // x19
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *listAudioAsset; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4CB935C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB935C = 1;
  }
  listAsset = 0;
  listAudioAsset = 0;
  memset(&v11, 0, sizeof(v11));
  BattleLogicBattleScript__GetAssetList(this, entities, &listAsset, &listAudioAsset, v3);
  dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)listAsset;
  if ( !listAsset )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)listAsset,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicAssetData;
  if ( !dicAssetData
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          dicAssetData,
          (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__),
        (dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)listAudioAsset) == 0) )
  {
LABEL_17:
    sub_1C6BC60(dicAssetData, v6);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v9 = v11.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void BattleLogicBattleScript___DownloadAsset_b__7_0(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  --this->fields.loadCount;
}


void BattleLogicBattleScript___DownloadAsset_b__7_1(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  --this->fields.loadCount;
}


void BattleLogicBattleScript_BattleScriptData___ctor(
        BattleLogicBattleScript_BattleScriptData_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, v11, v12);
  this->fields.Entity = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)entity, v13, v14);
  this->fields._ActorId_k__BackingField = actorId;
  *(_WORD *)&this->fields._IsLoaded_k__BackingField = 0;
  this->fields._IsEach_k__BackingField = isEach;
  this->fields.execState = 0;
  if ( entity )
    this->fields.delayTime = (float)BattleScriptEntity__GetDelayTime(entity, 0) / 1000.0;
}


void BattleLogicBattleScript_BattleScriptData__ChangeExecState(
        BattleLogicBattleScript_BattleScriptData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptData_c *klass; // x8

  if ( this->fields.execState != state )
  {
    this->fields.execState = state;
    if ( state == 2 )
    {
      klass = this->klass;
    }
    else
    {
      if ( state != 1 || this->fields.delayTime > 0.0 )
        return;
      klass = this->klass;
      this->fields.execState = 2;
    }
    ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))klass->vtable._8_StartUpdateAction.methodPtr)(
      this,
      klass->vtable._8_StartUpdateAction.method);
  }
}


void BattleLogicBattleScript_BattleScriptData__EndAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptData__ExecAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  int32_t execState; // w8

  execState = this->fields.execState;
  if ( execState == 2 )
  {
    ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))this->klass->vtable._9_UpdateAction.methodPtr)(
      this,
      this->klass->vtable._9_UpdateAction.method);
  }
  else if ( execState == 1 )
  {
    BattleLogicBattleScript_BattleScriptData__PreDelayAction(this, method);
  }
}


void BattleLogicBattleScript_BattleScriptData__Load(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptData_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_o *logicBattleScript; // x20
  BattleScriptEntity_o *Entity; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4CB9365 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptData_o *)sub_1C6BA08(&Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__);
    byte_4CB9365 = 1;
  }
  if ( v2->fields._IsEach_k__BackingField )
  {
    Data_k__BackingField = v2->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (logic = Data_k__BackingField->fields.logic) == 0
      || (logicBattleScript = logic->fields.logicBattleScript,
          Entity = v2->fields.Entity,
          v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
          System_Action___ctor(
            v7,
            (Il2CppObject *)v2,
            Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__,
            0),
          !logicBattleScript) )
    {
      sub_1C6BC60(this, method);
    }
    BattleLogicBattleScript__LoadAsset(logicBattleScript, Entity, v7, v8);
  }
  else
  {
    v2->fields._IsLoaded_k__BackingField = 1;
  }
}


void BattleLogicBattleScript_BattleScriptData__LoadPreExec(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  this->fields._IsPreExecLoaded_k__BackingField = 1;
}


void BattleLogicBattleScript_BattleScriptData__PreDelayAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  float delayTime; // s8
  BattleLogicBattleScript_BattleScriptData_c *klass; // x8

  delayTime = this->fields.delayTime;
  if ( delayTime <= 0.0 )
  {
    if ( this->fields.execState != 2 )
    {
      klass = this->klass;
      this->fields.execState = 2;
      ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))klass->vtable._8_StartUpdateAction.methodPtr)(
        this,
        klass->vtable._8_StartUpdateAction.method);
    }
  }
  else
  {
    this->fields.delayTime = delayTime - UnityEngine_Time__get_deltaTime(0);
  }
}


void BattleLogicBattleScript_BattleScriptData__StartAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  float delayTime; // s0
  BattleLogicBattleScript_BattleScriptData_c *klass; // x8

  if ( this->fields.execState != 1 )
  {
    delayTime = this->fields.delayTime;
    this->fields.execState = 1;
    if ( delayTime <= 0.0 )
    {
      klass = this->klass;
      this->fields.execState = 2;
      ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))klass->vtable._8_StartUpdateAction.methodPtr)(
        this,
        klass->vtable._8_StartUpdateAction.method);
    }
  }
}


void BattleLogicBattleScript_BattleScriptData__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptData__Unload(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_o *logicBattleScript; // x8

  if ( this->fields._IsEach_k__BackingField )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (logic = Data_k__BackingField->fields.logic) == 0
      || (logicBattleScript = logic->fields.logicBattleScript) == 0 )
    {
      sub_1C6BC60(this, method);
    }
    BattleLogicBattleScript__UnloadAsset(logicBattleScript, this->fields.Entity, v2);
  }
}


void BattleLogicBattleScript_BattleScriptData__UnloadPreExec(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptData__UpdateAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptData___Load_b__29_0(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  this->fields._IsLoaded_k__BackingField = 1;
}


int32_t BattleLogicBattleScript_BattleScriptData__get_ActorId(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields._ActorId_k__BackingField;
}


BattleData_o *BattleLogicBattleScript_BattleScriptData__get_Data(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool BattleLogicBattleScript_BattleScriptData__get_IsEach(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEach_k__BackingField;
}


bool BattleLogicBattleScript_BattleScriptData__get_IsEndAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields.execState == 3;
}


bool BattleLogicBattleScript_BattleScriptData__get_IsLoaded(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLoaded_k__BackingField;
}


bool BattleLogicBattleScript_BattleScriptData__get_IsPreExecLoaded(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPreExecLoaded_k__BackingField;
}


int32_t BattleLogicBattleScript_BattleScriptData__get_ScriptAction(
        BattleLogicBattleScript_BattleScriptData_o *this,
        const MethodInfo *method)
{
  struct BattleScriptEntity_o *Entity; // x8

  Entity = this->fields.Entity;
  if ( !Entity )
    sub_1C6BC60(this, method);
  return Entity->fields.battleScriptAction;
}


void BattleLogicBattleScript_BattleScriptData__set_ActorId(
        BattleLogicBattleScript_BattleScriptData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ActorId_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptData__set_Data(
        BattleLogicBattleScript_BattleScriptData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicBattleScript_BattleScriptData__set_IsEach(
        BattleLogicBattleScript_BattleScriptData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEach_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptData__set_IsLoaded(
        BattleLogicBattleScript_BattleScriptData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsLoaded_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptData__set_IsPreExecLoaded(
        BattleLogicBattleScript_BattleScriptData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPreExecLoaded_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptDataCutIn___ctor(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleScriptEntity_o *CutInId; // x0
  BattleScriptEntity_o *v9; // x8
  struct System_String_array *CutInPrefabInfo; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleScriptEntity_o *v13; // x8
  struct System_String_o *CutInMessageText; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_array *CutInVoices; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BattleScriptEntity_o *v20; // x8
  struct UnityEngine_Vector3_array *CutInOffset; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  CutInId = this->fields.Entity;
  if ( !CutInId )
    goto LABEL_9;
  CutInId = (BattleScriptEntity_o *)BattleScriptEntity__GetCutInId(CutInId, 0);
  v9 = this->fields.Entity;
  this->fields._CutInId_k__BackingField = (int)CutInId;
  if ( !v9 )
    goto LABEL_9;
  CutInPrefabInfo = BattleScriptEntity__GetCutInPrefabInfo(v9, 0);
  this->fields._PrefabInfos_k__BackingField = CutInPrefabInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._PrefabInfos_k__BackingField, (int32_t)CutInPrefabInfo, v11, v12);
  CutInId = this->fields.Entity;
  if ( !CutInId )
    goto LABEL_9;
  CutInId = (BattleScriptEntity_o *)BattleScriptEntity__GetCutInMessageMode(CutInId, 0);
  v13 = this->fields.Entity;
  this->fields._MessageMode_k__BackingField = (int)CutInId;
  if ( !v13 )
    goto LABEL_9;
  CutInMessageText = BattleScriptEntity__GetCutInMessageText(v13, 0);
  this->fields._MessageText_k__BackingField = CutInMessageText;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._MessageText_k__BackingField, (int32_t)CutInMessageText, v15, v16);
  CutInId = this->fields.Entity;
  if ( !CutInId
    || (CutInVoices = BattleScriptEntity__GetCutInVoices(CutInId, 0),
        this->fields._VoiceNames_k__BackingField = CutInVoices,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._VoiceNames_k__BackingField, (int32_t)CutInVoices, v18, v19),
        (CutInId = this->fields.Entity) == 0)
    || (CutInId = (BattleScriptEntity_o *)BattleScriptEntity__GetCutInCamPlayerAll(CutInId, 0),
        v20 = this->fields.Entity,
        this->fields._CamPlayerAll_k__BackingField = (int)CutInId,
        !v20) )
  {
LABEL_9:
    sub_1C6BC60(CutInId, v7);
  }
  CutInOffset = BattleScriptEntity__GetCutInOffset(v20, 0);
  this->fields._Offsets_k__BackingField = CutInOffset;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Offsets_k__BackingField, (int32_t)CutInOffset, v22, v23);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__LoadPreExec(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  System_String_o *v4; // x1
  const MethodInfo *v5; // x3
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v8; // x8
  BattlePerformance_o *perf; // x21
  AssetData_o *v10; // x20
  System_Action_o *v11; // x22
  AssetData_o *obj; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9367 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBattleScript_BattleScriptDataCutIn__LoadPreExec_b__29_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4CB9367 = 1;
  }
  obj = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__getSkillCutInPath(
                                            Instance,
                                            this->fields._CutInId_k__BackingField,
                                            0);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  logic = Data_k__BackingField->fields.logic;
  if ( !logic )
    goto LABEL_12;
  v4 = (System_String_o *)Instance;
  Instance = (ServantAssetLoadManager_o *)logic->fields.logicBattleScript;
  if ( !Instance )
    goto LABEL_12;
  Instance = (ServantAssetLoadManager_o *)BattleLogicBattleScript__TryGetAsset(
                                            (BattleLogicBattleScript_o *)Instance,
                                            v4,
                                            &obj,
                                            v5);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = this->fields._Data_k__BackingField;
    if ( v8 )
    {
      perf = v8->fields.perf;
      v10 = obj;
      v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_BattleLogicBattleScript_BattleScriptDataCutIn__LoadPreExec_b__29_0__,
        0);
      if ( perf )
      {
        BattlePerformance__LoadPreCutInForBattleScript(perf, this, v10, v11, 0);
        return;
      }
    }
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  this->fields._IsPreExecLoaded_k__BackingField = 1;
}


void BattleLogicBattleScript_BattleScriptDataCutIn__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattlePerformance_o *v4; // x20
  System_Action_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4CB9368 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C6BA08(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    byte_4CB9368 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = (BattlePerformance_o *)*((_QWORD *)monitor + 8),
        v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0),
        !v4) )
  {
    sub_1C6BC60(this, method);
  }
  BattlePerformance__PlayCutInForBattleScript(v4, (BattleLogicBattleScript_BattleScriptDataCutIn_o *)v2, v5, 0);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__UnloadPreExec(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)Data_k__BackingField->fields.perf) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  BattlePerformance__UnloadPreCutInForBattleScript((BattlePerformance_o *)this, 0);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataCutIn___LoadPreExec_b__29_0(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  this->fields._IsPreExecLoaded_k__BackingField = 1;
}


int32_t BattleLogicBattleScript_BattleScriptDataCutIn__get_CamPlayerAll(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._CamPlayerAll_k__BackingField;
}


int32_t BattleLogicBattleScript_BattleScriptDataCutIn__get_CutInId(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._CutInId_k__BackingField;
}


int32_t BattleLogicBattleScript_BattleScriptDataCutIn__get_MessageMode(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageMode_k__BackingField;
}


System_String_o *BattleLogicBattleScript_BattleScriptDataCutIn__get_MessageText(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._MessageText_k__BackingField;
}


UnityEngine_Vector3_array *BattleLogicBattleScript_BattleScriptDataCutIn__get_Offsets(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._Offsets_k__BackingField;
}


System_String_array *BattleLogicBattleScript_BattleScriptDataCutIn__get_PrefabInfos(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._PrefabInfos_k__BackingField;
}


System_String_array *BattleLogicBattleScript_BattleScriptDataCutIn__get_VoiceNames(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        const MethodInfo *method)
{
  return this->fields._VoiceNames_k__BackingField;
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_CamPlayerAll(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CamPlayerAll_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_CutInId(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CutInId_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_MessageMode(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MessageMode_k__BackingField = value;
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_MessageText(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MessageText_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._MessageText_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_Offsets(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        UnityEngine_Vector3_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Offsets_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Offsets_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_PrefabInfos(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PrefabInfos_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._PrefabInfos_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_VoiceNames(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._VoiceNames_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._VoiceNames_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicBattleScript_BattleScriptDataMessage___ctor(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleScriptEntity_o *v8; // x0
  struct System_String_o *MessageText; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  v8 = this->fields.Entity;
  if ( !v8
    || (MessageText = BattleScriptEntity__GetMessageText(v8, 0),
        this->fields.messageText = MessageText,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.messageText, (int32_t)MessageText, v10, v11),
        (v8 = this->fields.Entity) == 0) )
  {
    sub_1C6BC60(v8, v7);
  }
  this->fields.dispTime = (float)BattleScriptEntity__GetDispTime(v8, 0) / 1000.0;
}


void BattleLogicBattleScript_BattleScriptDataMessage__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicBattleScript_BattleScriptDataMessage_o *v4; // x19
  UnityEngine_GameObject_o *DefaultBattleMessageObjectForBattleScript; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (perf = Data_k__BackingField->fields.perf) == 0
    || (v4 = this, (this = (BattleLogicBattleScript_BattleScriptDataMessage_o *)perf->fields.infoComp) == 0) )
  {
    sub_1C6BC60(this, method);
  }
  DefaultBattleMessageObjectForBattleScript = BattleInformationComponent__CreateDefaultBattleMessageObjectForBattleScript(
                                                (BattleInformationComponent_o *)this,
                                                v4->fields.messageText,
                                                v4->fields.dispTime,
                                                0);
  v4->fields.messageObject = DefaultBattleMessageObjectForBattleScript;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&v4->fields.messageObject,
    (int32_t)DefaultBattleMessageObjectForBattleScript,
    v6,
    v7);
}


void BattleLogicBattleScript_BattleScriptDataMessage__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageObject; // x20

  if ( (byte_4CB9369 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9369 = 1;
  }
  messageObject = (UnityEngine_Object_o *)this->fields.messageObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(messageObject, 0, 0) && this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera___ctor(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_String_o *CameraMotionEventName; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  if ( !entity )
    sub_1C6BC60(v8, v9);
  CameraMotionEventName = BattleScriptEntity__GetCameraMotionEventName(entity, 0);
  this->fields.motionName = CameraMotionEventName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.motionName, (int32_t)CameraMotionEventName, v11, v12);
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        const MethodInfo *method)
{
  BattleActionCamera_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattlePerformance_o *perf; // x8

  IsNullOrEmpty = (BattleActionCamera_o *)System_String__IsNullOrEmpty(this->fields.motionName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (perf = Data_k__BackingField->fields.perf) == 0
      || (IsNullOrEmpty = perf->fields.actioncamera) == 0 )
    {
      sub_1C6BC60(IsNullOrEmpty, v4);
    }
    BattleActionCamera__sendEvent(IsNullOrEmpty, -1, this->fields.motionName, 0);
  }
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataPlayVoice___ctor(
        BattleLogicBattleScript_BattleScriptDataPlayVoice_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleScriptEntity_o *v8; // x0
  struct System_String_o *CharaVoice; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  v8 = this->fields.Entity;
  if ( !v8 )
    sub_1C6BC60(0, v7);
  CharaVoice = BattleScriptEntity__GetCharaVoice(v8, 0);
  this->fields.voiceName = CharaVoice;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voiceName, (int32_t)CharaVoice, v10, v11);
}


void BattleLogicBattleScript_BattleScriptDataPlayVoice__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataPlayVoice_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *voiceName; // x0
  __int64 v5; // x8
  _QWORD *v6; // x20
  System_String_o *v7; // x20
  System_Action_o *v8; // x21
  float v9; // s0
  float v10; // s8
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_4CB936A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB936A = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.voiceName, 0) )
  {
    if ( this->fields.execState != 3 )
      this->fields.execState = 3;
    return;
  }
  voiceName = this->fields.voiceName;
  if ( !voiceName || (voiceName = System_String__Split((System_String_o *)voiceName, 0x3Au, 0, 0)) == 0 )
    sub_1C6BC60(voiceName, v3);
  v5 = *((_QWORD *)voiceName + 3);
  v6 = voiceName;
  if ( (int)v5 < 2 )
  {
    if ( (_DWORD)v5 )
    {
      v7 = (System_String_o *)*((_QWORD *)voiceName + 4);
      v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_41752116(v7, v8, 0, 0);
      return;
    }
LABEL_22:
    sub_1C6BC68(voiceName);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v10 = 1.0;
  }
  else
  {
    v9 = System_Single__Parse(*((System_String_o **)voiceName + 6), 0);
    v5 = v6[3];
    v10 = v9;
  }
  if ( (unsigned int)v5 < 2 )
    goto LABEL_22;
  v12 = (System_String_o *)v6[4];
  v11 = (System_String_o *)v6[5];
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playVoice_41752360(v12, v11, v10, v13, 0, 0);
}


void BattleLogicBattleScript_BattleScriptDataPlayVoice__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataPlayVoice_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataSystemLoad___ctor(
        BattleLogicBattleScript_BattleScriptDataSystemLoad_o *this,
        BattleData_o *data,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetEntities, (int32_t)entities, v7, v8);
}


void BattleLogicBattleScript_BattleScriptDataSystemLoad__Load(
        BattleLogicBattleScript_BattleScriptDataSystemLoad_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x8
  BattleLogicBattleScript_o *v5; // x20
  BattleScriptEntity_array *klass; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  v2 = (Il2CppObject *)this;
  if ( (byte_4CB9366 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataSystemLoad_o *)sub_1C6BA08(&Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__);
    byte_4CB9366 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = monitor[7]) == 0
    || (v5 = *(BattleLogicBattleScript_o **)(v4 + 232),
        klass = (BattleScriptEntity_array *)v2[3].klass,
        v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__, 0),
        !v5) )
  {
    sub_1C6BC60(this, method);
  }
  BattleLogicBattleScript__LoadAsset_46998088(v5, klass, v7, v8);
}


void BattleLogicBattleScript_BattleScriptDataSystemLoad___Load_b__2_0(
        BattleLogicBattleScript_BattleScriptDataSystemLoad_o *this,
        const MethodInfo *method)
{
  this->fields._IsLoaded_k__BackingField = 1;
}


void BattleLogicBattleScript_BattleScriptDataSystemUnload___ctor(
        BattleLogicBattleScript_BattleScriptDataSystemUnload_o *this,
        BattleData_o *data,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetEntities, (int32_t)entities, v7, v8);
}


void BattleLogicBattleScript_BattleScriptDataSystemUnload__Unload(
        BattleLogicBattleScript_BattleScriptDataSystemUnload_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_o *logicBattleScript; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (logic = Data_k__BackingField->fields.logic) == 0
    || (logicBattleScript = logic->fields.logicBattleScript) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  BattleLogicBattleScript__UnloadAsset_46999560(logicBattleScript, this->fields.targetEntities, v2);
}


void BattleLogicBattleScript___c__DisplayClass9_0___ctor(
        BattleLogicBattleScript___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBattleScript___c__DisplayClass9_0___LoadAsset_b__1(
        BattleLogicBattleScript___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  struct BattleLogicBattleScript_o *_4__this; // x8
  int v3; // w9
  bool v4; // zf

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(this, method);
  v3 = _4__this->fields.loadCount - 1;
  v4 = _4__this->fields.loadCount == 1;
  _4__this->fields.loadCount = v3;
  if ( v3 < 0 || v4 )
    ActionExtensions__Call(this->fields.callback, 0);
}


void BattleLogicBattleScript___c__DisplayClass9_1___ctor(
        BattleLogicBattleScript___c__DisplayClass9_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBattleScript___c__DisplayClass9_1___LoadAsset_b__0(
        BattleLogicBattleScript___c__DisplayClass9_1_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleLogicBattleScript___c__DisplayClass9_1_o *v4; // x19
  struct BattleLogicBattleScript___c__DisplayClass9_0_o *CS___8__locals1; // x8
  struct BattleLogicBattleScript_o *_4__this; // x8
  struct BattleLogicBattleScript___c__DisplayClass9_0_o *v7; // x8
  struct BattleLogicBattleScript_o *v8; // x9
  int v9; // w10
  bool v10; // zf

  v4 = this;
  if ( (byte_4CB936B & 1) == 0 )
  {
    this = (BattleLogicBattleScript___c__DisplayClass9_1_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    byte_4CB936B = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (this = (BattleLogicBattleScript___c__DisplayClass9_1_o *)_4__this->fields.dicAssetData) == 0
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v4->fields.asset,
          (Il2CppObject *)assetData,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0 )
  {
    sub_1C6BC60(this, assetData);
  }
  v9 = v8->fields.loadCount - 1;
  v10 = v8->fields.loadCount == 1;
  v8->fields.loadCount = v9;
  if ( v9 < 0 || v10 )
    ActionExtensions__Call(v7->fields.callback, 0);
}