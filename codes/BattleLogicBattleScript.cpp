void BattleLogicBattleScript___ctor(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  this->fields.prevBattleSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicBattleScript_BattleScriptData_o *BattleLogicBattleScript__CreateBattleScriptData(
        BattleLogicBattleScript_o *this,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        BaseAiActArgument_o *arg,
        bool isEach,
        const MethodInfo *method)
{
  BattleLogicBattleScript_o *v10; // x24
  __int64 v11; // x22
  BattleData_o *data; // x24
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleData_o *v20; // x23
  const MethodInfo *v21; // x5
  BattleData_o *v22; // x23
  const MethodInfo *v23; // x5
  BattleData_o *v24; // x23
  const MethodInfo *v25; // x5
  BattleData_o *v26; // x23
  const MethodInfo *v27; // x5
  BattleData_o *v28; // x23
  const MethodInfo *v29; // x5
  BattleData_o *v31; // x22
  BattleLogicBattleScript_BattleScriptData_o *v32; // x23
  const MethodInfo *v33; // x5

  v10 = this;
  if ( (byte_4D2F967 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataAiAct_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataNormalSpeed_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
    this = (BattleLogicBattleScript_o *)sub_1C94098(&BattleLogicBattleScript_BattleScriptDataResumeSpeed_TypeInfo);
    byte_4D2F967 = 1;
  }
  if ( !entity )
    sub_1C942F0(this, *(_QWORD *)&actorId);
  v11 = 0;
  switch ( entity->fields.battleScriptAction )
  {
    case 1:
      data = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataAiAct_TypeInfo);
      BattleLogicBattleScript_BattleScriptData___ctor(
        (BattleLogicBattleScript_BattleScriptData_o *)v11,
        data,
        actorId,
        entity,
        isEach,
        v13);
      *(_QWORD *)(v11 + 48) = arg;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)arg, v14, v15, v16, v17, v18, v19);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 3:
      v20 = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataCutIn___ctor(
        (BattleLogicBattleScript_BattleScriptDataCutIn_o *)v11,
        v20,
        actorId,
        entity,
        isEach,
        v21);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 4:
      v24 = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataMoveCamera___ctor(
        (BattleLogicBattleScript_BattleScriptDataMoveCamera_o *)v11,
        v24,
        actorId,
        entity,
        isEach,
        v25);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 5:
      v26 = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataMessage___ctor(
        (BattleLogicBattleScript_BattleScriptDataMessage_o *)v11,
        v26,
        actorId,
        entity,
        isEach,
        v27);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 6:
      v28 = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataPlayVoice___ctor(
        (BattleLogicBattleScript_BattleScriptDataPlayVoice_o *)v11,
        v28,
        actorId,
        entity,
        isEach,
        v29);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 7:
      v22 = v10->fields.data;
      v11 = sub_1C942E4(BattleLogicBattleScript_BattleScriptDataNormalSpeed_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataNormalSpeed___ctor(
        (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)v11,
        v22,
        actorId,
        entity,
        isEach,
        v23);
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
    case 8:
      v31 = v10->fields.data;
      v32 = (BattleLogicBattleScript_BattleScriptData_o *)sub_1C942E4(BattleLogicBattleScript_BattleScriptDataResumeSpeed_TypeInfo);
      BattleLogicBattleScript_BattleScriptData___ctor(v32, v31, actorId, entity, isEach, v33);
      return v32;
    default:
      return (BattleLogicBattleScript_BattleScriptData_o *)v11;
  }
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleData_o *v17; // x19
  _QWORD *v18; // x8
  const MethodInfo *v19; // x5

  if ( (byte_4D2F968 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataSystemExit_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataSystemInit_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo);
    sub_1C94098(&BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo);
    byte_4D2F968 = 1;
  }
  switch ( type )
  {
    case 1:
      data = this->fields.data;
      v8 = &BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo;
      goto LABEL_7;
    case 2:
      data = this->fields.data;
      v8 = &BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo;
LABEL_7:
      v9 = sub_1C942E4(*v8);
      BattleLogicBattleScript_BattleScriptData___ctor(
        (BattleLogicBattleScript_BattleScriptData_o *)v9,
        data,
        -1,
        0,
        0,
        v10);
      *(_QWORD *)(v9 + 48) = entities;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)entities, v11, v12, v13, v14, v15, v16);
      return (BattleLogicBattleScript_BattleScriptData_o *)v9;
    case 3:
      v17 = this->fields.data;
      v18 = &BattleLogicBattleScript_BattleScriptDataSystemInit_TypeInfo;
      goto LABEL_11;
    case 4:
      v17 = this->fields.data;
      v18 = &BattleLogicBattleScript_BattleScriptDataSystemExit_TypeInfo;
      goto LABEL_11;
    case 5:
      v17 = this->fields.data;
      v18 = &BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_TypeInfo;
LABEL_11:
      v9 = sub_1C942E4(*v18);
      BattleLogicBattleScript_BattleScriptData___ctor(
        (BattleLogicBattleScript_BattleScriptData_o *)v9,
        v17,
        -1,
        0,
        0,
        v19);
      break;
    default:
      v9 = 0;
      break;
  }
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

  if ( (byte_4D2F961 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleLogicBattleScript__DownloadAsset_b__10_0__);
    sub_1C94098(&Method_BattleLogicBattleScript__DownloadAsset_b__10_1__);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2F961 = 1;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !AssumedBattleScriptIds )
      goto LABEL_23;
    monitor = AssumedBattleScriptIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)monitor )
          sub_1C942F8(data);
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
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
        if ( !v6 )
          goto LABEL_23;
        System_Collections_Generic_List_object___AddRange(
          v6,
          collection,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      v13 = System_Linq_Enumerable__Distinct_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
              (const MethodInfo_31BF74C *)Method_System_Linq_Enumerable_Distinct_string___);
      v14 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v13,
                                     (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
      v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__10_0__, 0);
      if ( !Instance )
        goto LABEL_23;
      data = (BattleData_o *)AssetManager__DownloadAssetStorage_41290132((AssetManager_o *)Instance, v14, v15, 1, 0);
    }
    if ( !v6 )
LABEL_23:
      sub_1C942F0(data, method);
    if ( v6->fields._size >= 1 )
    {
      ++this->fields.loadCount;
      v16 = System_Linq_Enumerable__Distinct_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v6,
              (const MethodInfo_31BF74C *)Method_System_Linq_Enumerable_Distinct_string___);
      v17 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v16,
                                     (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
      v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__10_1__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__downloadAudioAssetStorage_42284444(v17, v18, 1, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleLogicBattleScript_o *AssetNames; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x25
  BattleScriptEntity_o *v28; // x23
  System_Collections_Generic_List_string__o *v29; // x24
  System_Collections_Generic_List_string__o *v30; // x24
  const MethodInfo *v31; // x2

  if ( (byte_4D2F969 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D2F969 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAsset = (System_Collections_Generic_List_string__o *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)listAsset, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAudioAsset = (System_Collections_Generic_List_string__o *)v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)listAudioAsset, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( !entities )
    goto LABEL_11;
  max_length = entities->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        sub_1C942F8(AssetNames);
      v28 = entities->m_Items[v27];
      v29 = *listAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAssetNames(AssetNames, v28, v25);
      if ( !v29 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v29,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
      v30 = *listAudioAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAudioAssetNames(this, v28, v31);
      if ( !v30 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v30,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v27 >= (int)max_length )
        return;
    }
LABEL_11:
    sub_1C942F0(AssetNames, v24);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4D2F96A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2F96A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_14;
  if ( entity->fields.battleScriptAction != 3
    || (CutInId = (ServantAssetLoadManager_o *)BattleScriptEntity__GetCutInId(entity, 0), !(_DWORD)CutInId) )
  {
    if ( v4 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_14:
    sub_1C942F0(CutInId, v6);
  }
  v7 = (int)CutInId;
  CutInId = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !CutInId )
    goto LABEL_14;
  CutInId = (ServantAssetLoadManager_o *)ServantAssetLoadManager__getSkillCutInPath(CutInId, v7, 0);
  if ( !v4 )
    goto LABEL_14;
  items = v4->fields._items;
  v15 = Method_System_Collections_Generic_List_string__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v4->fields._size;
  v17 = CutInId;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)CutInId,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v17;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *BattleLogicBattleScript__GetAudioAssetNames(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  _BOOL8 VoiceAssetName_47568032; // x0
  __int64 v7; // x1
  int32_t battleScriptAction; // w8
  System_String_o *CharaVoice; // x0
  const MethodInfo *v10; // x3
  System_String_array **p_assetNames; // x8
  BattleLogicBattleScript_o *CutInVoices; // x0
  const MethodInfo *v13; // x3
  System_String_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *assetNames; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2F96B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D2F96B = 1;
  }
  v15 = 0;
  assetNames = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_15;
  battleScriptAction = entity->fields.battleScriptAction;
  if ( battleScriptAction == 3 )
  {
    CutInVoices = (BattleLogicBattleScript_o *)BattleScriptEntity__GetCutInVoices(entity, 0);
    VoiceAssetName_47568032 = BattleLogicBattleScript__TryGetVoiceAssetName_47568032(
                                CutInVoices,
                                (System_String_array *)CutInVoices,
                                &v15,
                                v13);
    if ( VoiceAssetName_47568032 )
    {
      if ( v5 )
      {
        p_assetNames = &v15;
        goto LABEL_12;
      }
LABEL_15:
      sub_1C942F0(VoiceAssetName_47568032, v7);
    }
LABEL_13:
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_15;
  }
  if ( battleScriptAction != 6 )
    goto LABEL_13;
  CharaVoice = BattleScriptEntity__GetCharaVoice(entity, 0);
  VoiceAssetName_47568032 = BattleLogicBattleScript__TryGetVoiceAssetName(this, CharaVoice, &assetNames, v10);
  if ( !VoiceAssetName_47568032 )
    goto LABEL_13;
  if ( !v5 )
    goto LABEL_15;
  p_assetNames = &assetNames;
LABEL_12:
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)*p_assetNames,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleScriptEntity_array *BattleLogicBattleScript__GetBattleScriptEntities(
        BattleLogicBattleScript_o *this,
        int32_t battleScriptId,
        const MethodInfo *method)
{
  BattleScriptMaster_o *dicCacheBattleScriptEntities; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2F960 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BattleScriptMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
    byte_4D2F960 = 1;
  }
  value = 0;
  dicCacheBattleScriptEntities = (BattleScriptMaster_o *)this->fields.dicCacheBattleScriptEntities;
  if ( !dicCacheBattleScriptEntities )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)dicCacheBattleScriptEntities,
          battleScriptId,
          &value,
          (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    dicCacheBattleScriptEntities = (BattleScriptMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattleScriptMaster___);
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
          (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
        return (BattleScriptEntity_array *)value;
      }
    }
LABEL_11:
    sub_1C942F0(dicCacheBattleScriptEntities, *(_QWORD *)&battleScriptId);
  }
  return (BattleScriptEntity_array *)value;
}


System_String_o *BattleLogicBattleScript__GetNormalSpeedOnlyFirstKeyByEntity(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x21
  Il2CppObject *v6; // x0
  int32_t idx; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t playOrder; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F972 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    this = (BattleLogicBattleScript_o *)sub_1C94098(&StringLiteral_25452/*"{0}_{1}_{2}"*/);
    byte_4D2F972 = 1;
  }
  if ( !entity )
    sub_1C942F0(this, entity);
  id = entity->fields.id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  playOrder = entity->fields.playOrder;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playOrder);
  idx = entity->fields.idx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  return System_String__Format_64459120((System_String_o *)StringLiteral_25452/*"{0}_{1}_{2}"*/, v4, v5, v6, 0);
}


void BattleLogicBattleScript__Initialize(
        BattleLogicBattleScript_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1

  if ( (byte_4D2F95F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
    byte_4D2F95F = 1;
  }
  this->fields.data = battleData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)battleData, (int32_t)method, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
  this->fields.dicCacheBattleScriptEntities = (struct System_Collections_Generic_Dictionary_int__BattleScriptEntity____o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicCacheBattleScriptEntities,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.dicAssetData = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dicAssetData, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)&this->fields.loadCount = 0x3F80000000000000LL;
  BattleLogicBattleScript__LoadPlayedNormalSpeedOnlyFirstKey(this, v24);
}


bool BattleLogicBattleScript__IsEnableNormalSpeedOnlyFirst(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *NormalSpeedOnlyFirstKeyByEntity; // x0
  __int64 v9; // x1

  if ( (byte_4D2F970 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4D2F970 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.listPlayedNormalSpeedOnlyFirstKey,
                    0);
  if ( IsNullOrEmpty )
    return 1;
  NormalSpeedOnlyFirstKeyByEntity = (Il2CppObject *)BattleLogicBattleScript__GetNormalSpeedOnlyFirstKeyByEntity(
                                                      (BattleLogicBattleScript_o *)IsNullOrEmpty,
                                                      entity,
                                                      v6);
  if ( !this->fields.listPlayedNormalSpeedOnlyFirstKey )
    sub_1C942F0(NormalSpeedOnlyFirstKeyByEntity, v9);
  return !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)this->fields.listPlayedNormalSpeedOnlyFirstKey,
            NormalSpeedOnlyFirstKeyByEntity,
            (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x0

  if ( (byte_4D2F962 & 1) == 0 )
  {
    sub_1C94098(&BattleScriptEntity___TypeInfo);
    byte_4D2F962 = 1;
  }
  v7 = sub_1C94140(BattleScriptEntity___TypeInfo, 1);
  if ( !v7 )
    sub_1C942F0(0, v8);
  v15 = v7;
  if ( entity )
  {
    v7 = sub_1C941D4(entity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v17 = sub_1C94314(0);
      sub_1C941C0(v17, 0);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1C942F8(v7);
  *(_QWORD *)(v15 + 32) = entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)entity, v9, v10, v11, v12, v13, v14);
  BattleLogicBattleScript__LoadAsset_47563428(this, (BattleScriptEntity_array *)v15, callback, v16);
}


void BattleLogicBattleScript__LoadAsset_47563428(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_string__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x4
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t current; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x3
  System_String_o *v40; // x22
  AssetLoader_LoadEndDataHandler_o *v41; // x23
  System_Action_o **v42; // x21
  Il2CppObject *v43; // x22
  System_Action_o *v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+0h] [xbp-B0h] BYREF
  AssetData_o *obj; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_string__o *listAudioAsset; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D2F963 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&Method_BattleLogicBattleScript___c__DisplayClass12_0__LoadAsset_b__1__);
    sub_1C94098(&BattleLogicBattleScript___c__DisplayClass12_0_TypeInfo);
    sub_1C94098(&Method_BattleLogicBattleScript___c__DisplayClass12_1__LoadAsset_b__0__);
    sub_1C94098(&BattleLogicBattleScript___c__DisplayClass12_1_TypeInfo);
    byte_4D2F963 = 1;
  }
  listAudioAsset = 0;
  listAsset = 0;
  memset(&v53, 0, sizeof(v53));
  obj = 0;
  v7 = sub_1C942E4(BattleLogicBattleScript___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  BattleLogicBattleScript__GetAssetList(this, entities, &listAsset, &listAudioAsset, v22);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)listAsset,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v53 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v23 = sub_1C942E4(BattleLogicBattleScript___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    if ( !v23 )
      sub_1C942F0(v24, v25);
    *(_QWORD *)(v23 + 24) = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 24), v7, v26, v27, v28, v29, v30, v31);
    current = (int32_t)v53.fields._current;
    *(_QWORD *)(v23 + 16) = v53.fields._current;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 16), current, v33, v34, v35, v36, v37, v38);
    if ( !BattleLogicBattleScript__TryGetAsset(this, *(System_String_o **)(v23 + 16), &obj, v39) )
    {
      ++this->fields.loadCount;
      v40 = *(System_String_o **)(v23 + 16);
      v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v41,
        (Il2CppObject *)v23,
        Method_BattleLogicBattleScript___c__DisplayClass12_1__LoadAsset_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(v40, v41, 1, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v8 = listAudioAsset;
  if ( !listAudioAsset )
LABEL_26:
    sub_1C942F0(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v42 = (System_Action_o **)(v7 + 32);
  v53 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v43 = v53.fields._current;
    ++this->fields.loadCount;
    v44 = *v42;
    if ( !*v42 )
    {
      v44 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v7,
        Method_BattleLogicBattleScript___c__DisplayClass12_0__LoadAsset_b__1__,
        0);
      *v42 = v44;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
    }
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage((System_String_o *)v43, v44, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void BattleLogicBattleScript__LoadPlayedNormalSpeedOnlyFirstKey(
        BattleLogicBattleScript_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Collections_Generic_List_string__o **p_listPlayedNormalSpeedOnlyFirstKey; // x0
  int32_t v14; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct System_Collections_Generic_List_string__o *v16; // x0

  if ( (byte_4D2F96E & 1) == 0 )
  {
    sub_1C94098(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&StringLiteral_3129/*"BattleScriptNormalSpeedListKey"*/);
    byte_4D2F96E = 1;
  }
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  String = EncryptedPlayerPrefs__GetString((System_String_o *)StringLiteral_3129/*"BattleScriptNormalSpeedListKey"*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.listPlayedNormalSpeedOnlyFirstKey = (struct System_Collections_Generic_List_string__o *)v6;
    p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
    v14 = (int)v6;
  }
  else
  {
    if ( !String )
      sub_1C942F0(IsNullOrEmpty, v5);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x2Cu, 0, 0);
    v16 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                v15,
                                                                (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___);
    this->fields.listPlayedNormalSpeedOnlyFirstKey = v16;
    v14 = (int)v16;
    p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_listPlayedNormalSpeedOnlyFirstKey, v14, v7, v8, v9, v10, v11, v12);
}


void BattleLogicBattleScript__RegistNormalSpeedOnlyFirst(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  BattleLogicBattleScript_o *v4; // x19
  System_Collections_Generic_List_object__o *listPlayedNormalSpeedOnlyFirstKey; // x19
  Il2CppObject *NormalSpeedOnlyFirstKeyByEntity; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0

  v4 = this;
  if ( (byte_4D2F971 & 1) == 0 )
  {
    this = (BattleLogicBattleScript_o *)sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    byte_4D2F971 = 1;
  }
  listPlayedNormalSpeedOnlyFirstKey = (System_Collections_Generic_List_object__o *)v4->fields.listPlayedNormalSpeedOnlyFirstKey;
  NormalSpeedOnlyFirstKeyByEntity = (Il2CppObject *)BattleLogicBattleScript__GetNormalSpeedOnlyFirstKeyByEntity(
                                                      this,
                                                      entity,
                                                      method);
  if ( !listPlayedNormalSpeedOnlyFirstKey
    || (items = listPlayedNormalSpeedOnlyFirstKey->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++listPlayedNormalSpeedOnlyFirstKey->fields._version,
        !items) )
  {
    sub_1C942F0(NormalSpeedOnlyFirstKeyByEntity, v7);
  }
  size = listPlayedNormalSpeedOnlyFirstKey->fields._size;
  v17 = NormalSpeedOnlyFirstKeyByEntity;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listPlayedNormalSpeedOnlyFirstKey,
      NormalSpeedOnlyFirstKeyByEntity,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    listPlayedNormalSpeedOnlyFirstKey->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
  }
}


void BattleLogicBattleScript__ResumeInitSpeed(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattlePerformance_o *perf; // x8

  data = this->fields.data;
  if ( !data || (perf = data->fields.perf) == 0 )
    sub_1C942F0(this, method);
  BattlePerformance__SetTimeScale(perf, this->fields.prevBattleSpeed, 0);
}


void BattleLogicBattleScript__SaveInitSpeed(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  this->fields.prevBattleSpeed = UnityEngine_Time__get_timeScale(0);
}


void BattleLogicBattleScript__SavePlayedNormalSpeedOnlyFirstKey(
        BattleLogicBattleScript_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o **p_listPlayedNormalSpeedOnlyFirstKey; // x19
  System_Collections_ICollection_o *listPlayedNormalSpeedOnlyFirstKey; // t1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_List_TSource__o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *v13; // x19

  if ( (byte_4D2F96F & 1) == 0 )
  {
    sub_1C94098(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&StringLiteral_3129/*"BattleScriptNormalSpeedListKey"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D2F96F = 1;
  }
  listPlayedNormalSpeedOnlyFirstKey = (System_Collections_ICollection_o *)this->fields.listPlayedNormalSpeedOnlyFirstKey;
  p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
  if ( !BasicHelper__IsNullOrEmpty(listPlayedNormalSpeedOnlyFirstKey, 0) )
  {
    v5 = System_Linq_Enumerable__Distinct_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*p_listPlayedNormalSpeedOnlyFirstKey,
           (const MethodInfo_31BF74C *)Method_System_Linq_Enumerable_Distinct_string___);
    v6 = System_Linq_Enumerable__ToList_object_(
           v5,
           (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___);
    *p_listPlayedNormalSpeedOnlyFirstKey = (struct System_Collections_Generic_List_string__o *)v6;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)p_listPlayedNormalSpeedOnlyFirstKey,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = System_String__Join_64460336(
            (System_String_o *)StringLiteral_808/*","*/,
            (System_Collections_Generic_IEnumerable_string__o *)*p_listPlayedNormalSpeedOnlyFirstKey,
            0);
    if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
    EncryptedPlayerPrefs__SetString((System_String_o *)StringLiteral_3129/*"BattleScriptNormalSpeedListKey"*/, v13, 0);
  }
}


bool BattleLogicBattleScript__TryGetAsset(
        BattleLogicBattleScript_o *this,
        System_String_o *key,
        AssetData_o **obj,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *dicAssetData; // x0

  if ( (byte_4D2F966 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_4D2F966 = 1;
  }
  *obj = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)obj, 0, (int32_t)obj, (int32_t)method, v4, v5, v6, v7);
  dicAssetData = this->fields.dicAssetData;
  if ( !dicAssetData )
    sub_1C942F0(0, v11);
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)dicAssetData,
           (Il2CppObject *)key,
           (Il2CppObject **)obj,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_array *v14; // x21
  BattleLogicBattleScript_o *v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_4D2F96C & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    byte_4D2F96C = 1;
  }
  v6 = sub_1C94140(string___TypeInfo, 1);
  if ( !v6 )
    sub_1C942F0(0, v7);
  v14 = (System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C942F8(v6);
  *(_QWORD *)(v6 + 32) = charaVoice;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)charaVoice, v8, v9, v10, v11, v12, v13);
  return BattleLogicBattleScript__TryGetVoiceAssetName_47568032(v15, v14, assetNames, v16);
}


bool BattleLogicBattleScript__TryGetVoiceAssetName_47568032(
        BattleLogicBattleScript_o *this,
        System_String_array *charaVoices,
        System_String_array **assetNames,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool IsNullOrEmpty; // w21
  System_Collections_Generic_List_object__o *v11; // x22
  System_String_array *v12; // x0
  Il2CppObject *v13; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x24
  System_String_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_String_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D2F96D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2F96D = 1;
  }
  *assetNames = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)assetNames, 0, (int32_t)assetNames, (int32_t)method, v4, v5, v6, v7);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)charaVoices, 0);
  if ( !IsNullOrEmpty )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !charaVoices )
      goto LABEL_21;
    max_length = charaVoices->max_length;
    if ( (int)max_length >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 >= (unsigned int)max_length )
LABEL_22:
          sub_1C942F8(v12);
        v16 = charaVoices->m_Items[v15];
        v12 = (System_String_array *)System_String__IsNullOrEmpty(v16, 0);
        if ( ((unsigned __int8)v12 & 1) == 0 )
        {
          if ( !v16 )
            goto LABEL_21;
          v12 = System_String__Split_64469652(v16, (System_String_o *)StringLiteral_1450/*":"*/, 0, 0);
          if ( !v12 )
            goto LABEL_21;
          if ( !LODWORD(v12->max_length) )
            goto LABEL_22;
          if ( !v11 )
            goto LABEL_21;
          v13 = (Il2CppObject *)v12->m_Items[0];
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v13;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v13, v17, v18, v19, v20, v21, v22);
          }
        }
        LODWORD(max_length) = charaVoices->max_length;
      }
      while ( (__int64)++v15 < (int)max_length );
    }
    if ( !v11 )
LABEL_21:
      sub_1C942F0(v12, v13);
    v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   v11,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
    *assetNames = v27;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)assetNames, (int32_t)v27, v28, v29, v30, v31, v32, v33);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  if ( (byte_4D2F964 & 1) == 0 )
  {
    sub_1C94098(&BattleScriptEntity___TypeInfo);
    byte_4D2F964 = 1;
  }
  v5 = sub_1C94140(BattleScriptEntity___TypeInfo, 1);
  if ( !v5 )
    sub_1C942F0(0, v6);
  v13 = v5;
  if ( entity )
  {
    v5 = sub_1C941D4(entity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v15 = sub_1C94314(0);
      sub_1C941C0(v15, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C942F8(v5);
  *(_QWORD *)(v13 + 32) = entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)entity, v7, v8, v9, v10, v11, v12);
  BattleLogicBattleScript__UnloadAsset_47564900(this, (BattleScriptEntity_array *)v13, v14);
}


void BattleLogicBattleScript__UnloadAsset_47564900(
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

  if ( (byte_4D2F965 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2F965 = 1;
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicAssetData;
  if ( !dicAssetData
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          dicAssetData,
          (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__),
        (dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)listAudioAsset) == 0) )
  {
LABEL_17:
    sub_1C942F0(dicAssetData, v6);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v9 = v11.fields._current;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage((System_String_o *)v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void BattleLogicBattleScript___DownloadAsset_b__10_0(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  --this->fields.loadCount;
}


void BattleLogicBattleScript___DownloadAsset_b__10_1(BattleLogicBattleScript_o *this, const MethodInfo *method)
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)data,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.Entity = entity;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)entity, v17, v18, v19, v20, v21, v22);
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
  if ( (byte_4D2F973 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptData_o *)sub_1C94098(&Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__);
    byte_4D2F973 = 1;
  }
  if ( v2->fields._IsEach_k__BackingField )
  {
    Data_k__BackingField = v2->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (logic = Data_k__BackingField->fields.logic) == 0
      || (logicBattleScript = logic->fields.logicBattleScript,
          Entity = v2->fields.Entity,
          v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
          System_Action___ctor(
            v7,
            (Il2CppObject *)v2,
            Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__,
            0),
          !logicBattleScript) )
    {
      sub_1C942F0(this, method);
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
      sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


// local variable allocation has failed, the output may be wrong!
void BattleLogicBattleScript_BattleScriptDataAiAct___ctor(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        BaseAiActArgument_o *arg,
        bool isEach,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    (const MethodInfo *)isEach);
  this->fields.aiActArg = arg;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.aiActArg, (int32_t)arg, v9, v10, v11, v12, v13, v14);
}


void BattleLogicBattleScript_BattleScriptDataAiAct__AddBattleScriptTaskAiAct(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w27
  System_Collections_Generic_Dictionary_object__object__o *v10; // x22
  BattleFieldData_o *v11; // x21
  __int64 v12; // x22
  System_Collections_Generic_Dictionary_string__object__o *AiBaseEntityScript; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x9
  struct BaseAiActArgument_o *aiActArg; // x8
  BattleLogicTask_array *v23; // x0
  System_Collections_ICollection_o *v24; // x21
  unsigned int v25; // w22
  int32_t uniqueId; // w22
  struct BattleData_o *v27; // x8
  struct BattleLogic_o *v28; // x8
  __int64 v29; // x21
  System_Collections_Generic_Dictionary_string__object__o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct BattleData_o *v37; // x8
  struct BattleLogic_o *v38; // x8
  __int64 v39; // x9
  BattleLogicBaseAi_o *v40; // x23
  int32_t v41; // w24
  struct BaseAiActArgument_o *v42; // x8
  int32_t v43; // w26
  AiState_o *v44; // x25
  AiLogic_AiInfo_o *v45; // x22
  const MethodInfo *v46; // x6
  struct BattleData_o *v47; // x8
  struct BattleLogic_o *v48; // x9
  struct BaseAiActArgument_o *v49; // x8
  BattleServantData_o *v50; // x23
  __int64 naturalAligment; // x10
  struct BattleData_o *v52; // x8
  struct BattleLogic_o *v53; // x9
  struct BaseAiActArgument_o *v54; // x8
  struct BaseAiActArgument_o *v55; // x8
  int32_t FromProcState_k__BackingField; // w25
  NpcAiCheckTask_Argument_o *v57; // x24
  struct BattleData_o *v58; // x8
  struct BattleLogic_o *v59; // x8
  BattleServantData_o *servantData; // [xsp+8h] [xbp-68h] BYREF
  int32_t actorType; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D2F976 & 1) == 0 )
  {
    sub_1C94098(&AiEntity_TypeInfo);
    sub_1C94098(&AiFieldEntity_TypeInfo);
    sub_1C94098(&AiLogic_AiInfo_TypeInfo);
    sub_1C94098(&AiNpcBattleServantData_TypeInfo);
    sub_1C94098(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C94098(&BattleFieldData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_4D2F976 = 1;
  }
  entity = 0;
  actorType = 0;
  servantData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !this->fields.Entity )
    goto LABEL_60;
  v7 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleScriptEntity__GetAiActId(this->fields.Entity, 0);
  if ( !v7 )
    goto LABEL_60;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v7,
         &entity,
         (int32_t)Master_object,
         (const MethodInfo_345B50C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__)
    && BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActor(this, &actorType, &servantData, v8) )
  {
    v9 = actorType;
    if ( actorType == 1 )
    {
      v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v10,
        (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v11 = (BattleFieldData_o *)sub_1C942E4(BattleFieldData_TypeInfo);
      BattleFieldData___ctor_46902460(v11, 0x7FFFFFFF, (Il2CppObject *)v10, 0);
      v12 = sub_1C942E4(AiFieldEntity_TypeInfo);
      AiFieldEntity___ctor((AiFieldEntity_o *)v12, 0);
      if ( !v12 )
        goto LABEL_60;
      *(_OWORD *)(v12 + 16) = xmmword_CFF470;
      if ( !entity )
        goto LABEL_60;
      *(_DWORD *)(v12 + 48) = entity[1].klass;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.Entity;
      if ( !Master_object )
        goto LABEL_60;
      AiBaseEntityScript = BattleScriptEntity__GetAiBaseEntityScript((BattleScriptEntity_o *)Master_object, 0);
      *(_QWORD *)(v12 + 72) = AiBaseEntityScript;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 72), (int32_t)AiBaseEntityScript, v14, v15, v16, v17, v18, v19);
      Data_k__BackingField = this->fields._Data_k__BackingField;
      if ( !Data_k__BackingField )
        goto LABEL_60;
      logic = Data_k__BackingField->fields.logic;
      if ( !logic )
        goto LABEL_60;
      aiActArg = this->fields.aiActArg;
      if ( !aiActArg )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)logic->fields.logicFieldAi;
      if ( !Master_object )
        goto LABEL_60;
      v23 = BattleLogicFieldAi__procAiAct(
              (BattleLogicFieldAi_o *)Master_object,
              v11,
              (AiFieldEntity_o *)v12,
              0,
              aiActArg->fields._FromProcState_k__BackingField,
              0);
    }
    else
    {
      v25 = actorType - 2;
      if ( (unsigned int)(actorType - 2) > 2 )
        goto LABEL_20;
      v29 = sub_1C942E4(AiEntity_TypeInfo);
      AiEntity___ctor((AiEntity_o *)v29, 0);
      if ( !v29 )
        goto LABEL_60;
      *(_OWORD *)(v29 + 16) = xmmword_CFF470;
      if ( !entity )
        goto LABEL_60;
      *(_DWORD *)(v29 + 48) = entity[1].klass;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.Entity;
      if ( !Master_object )
        goto LABEL_60;
      v30 = BattleScriptEntity__GetAiBaseEntityScript((BattleScriptEntity_o *)Master_object, 0);
      *(_QWORD *)(v29 + 72) = v30;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v29 + 72), (int32_t)v30, v31, v32, v33, v34, v35, v36);
      if ( v25 > 1 )
      {
        v50 = servantData;
        if ( !servantData )
          goto LABEL_60;
        uniqueId = servantData->fields.uniqueId;
        naturalAligment = AiNpcBattleServantData_TypeInfo->_2.naturalAligment;
        if ( servantData->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (AiNpcBattleServantData_c *)servantData->klass->_2.typeHierarchy[naturalAligment - 1] == AiNpcBattleServantData_TypeInfo )
        {
          v55 = this->fields.aiActArg;
          if ( !v55 )
            goto LABEL_60;
          FromProcState_k__BackingField = v55->fields._FromProcState_k__BackingField;
          v57 = (NpcAiCheckTask_Argument_o *)sub_1C942E4(NpcAiCheckTask_Argument_TypeInfo);
          NpcAiCheckTask_Argument___ctor_47880968(
            v57,
            FromProcState_k__BackingField,
            (AiNpcBattleServantData_o *)v50,
            0);
          v58 = this->fields._Data_k__BackingField;
          if ( !v58 )
            goto LABEL_60;
          v59 = v58->fields.logic;
          if ( !v59 )
            goto LABEL_60;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v59->fields.logicNpcAi;
          if ( !Master_object )
            goto LABEL_60;
          v24 = (System_Collections_ICollection_o *)BattleLogicNpcAi__ProcAiAct(
                                                      (BattleLogicNpcAi_o *)Master_object,
                                                      (AiNpcBattleServantData_o *)v50,
                                                      (AiEntity_o *)v29,
                                                      v57,
                                                      0);
        }
        else
        {
          v24 = 0;
        }
        goto LABEL_22;
      }
      v37 = this->fields._Data_k__BackingField;
      if ( !v37 )
        goto LABEL_60;
      v38 = v37->fields.logic;
      if ( !v38 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)servantData;
      v39 = 208;
      if ( v9 == 2 )
        v39 = 176;
      if ( !servantData )
        goto LABEL_60;
      v40 = *(BattleLogicBaseAi_o **)((char *)&v38->klass + v39);
      v41 = servantData->fields.uniqueId;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (*)(void))servantData->klass->vtable._18_getAiState.methodPtr)();
      v42 = this->fields.aiActArg;
      if ( !v42 )
        goto LABEL_60;
      v43 = v42->fields._FromProcState_k__BackingField;
      v44 = (AiState_o *)Master_object;
      v45 = (AiLogic_AiInfo_o *)sub_1C942E4(AiLogic_AiInfo_TypeInfo);
      AiLogic_AiInfo___ctor(v45, 1, v41, v44, v40, v43, 0);
      if ( v9 == 3 )
      {
        v52 = this->fields._Data_k__BackingField;
        if ( !v52 )
          goto LABEL_60;
        v53 = v52->fields.logic;
        if ( !v53 )
          goto LABEL_60;
        v54 = this->fields.aiActArg;
        if ( !v54 )
          goto LABEL_60;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v53->fields.logicPlayerAi;
        if ( !Master_object )
          goto LABEL_60;
        v23 = (BattleLogicTask_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, BattleServantData_o *, __int64, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppClass **))Master_object->klass[1]._1.nestedTypes)(
                                         Master_object,
                                         servantData,
                                         v29,
                                         0,
                                         v45,
                                         (unsigned int)v54->fields._FromProcState_k__BackingField,
                                         Master_object->klass[1]._1.implementedInterfaces);
        goto LABEL_18;
      }
      if ( v9 != 2 )
      {
LABEL_20:
        v24 = 0;
        goto LABEL_21;
      }
      v47 = this->fields._Data_k__BackingField;
      if ( !v47 )
        goto LABEL_60;
      v48 = v47->fields.logic;
      if ( !v48 )
        goto LABEL_60;
      v49 = this->fields.aiActArg;
      if ( !v49 )
        goto LABEL_60;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v48->fields.logicEnemyAi;
      if ( !Master_object )
        goto LABEL_60;
      v23 = BattleLogicEnemyAi__ProcAiActBattleScript(
              (BattleLogicEnemyAi_o *)Master_object,
              servantData,
              (AiEntity_o *)v29,
              0,
              v45,
              v49->fields._FromProcState_k__BackingField,
              v46);
    }
LABEL_18:
    v24 = (System_Collections_ICollection_o *)v23;
LABEL_21:
    uniqueId = -1;
LABEL_22:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(v24, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      return;
    v27 = this->fields._Data_k__BackingField;
    if ( v27 )
    {
      v28 = v27->fields.logic;
      if ( v28 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v28->fields.logicNpcAi;
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleLogicNpcAi__MakeBackStepFieldNpcTaskArray(
                                                                          (BattleLogicNpcAi_o *)Master_object,
                                                                          uniqueId,
                                                                          0);
          if ( retList )
          {
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)retList,
              (System_Collections_Generic_IEnumerable_T__o *)Master_object,
              (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)retList,
              (System_Collections_Generic_IEnumerable_T__o *)v24,
              (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return;
          }
        }
      }
    }
LABEL_60:
    sub_1C942F0(Master_object, v6);
  }
}


void BattleLogicBattleScript_BattleScriptDataAiAct__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x2
  System_Object_array *IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  BattleLogic_o *logic; // x21

  if ( (byte_4D2F975 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2F975 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  BattleLogicBattleScript_BattleScriptDataAiAct__AddBattleScriptTaskAiAct(
    this,
    (System_Collections_Generic_List_BattleLogicTask__o *)v3,
    v4);
  IsNullOrEmpty = (System_Object_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || !v3
      || (logic = Data_k__BackingField->fields.logic,
          IsNullOrEmpty = System_Collections_Generic_List_object___ToArray(
                            v3,
                            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__),
          !logic) )
    {
      sub_1C942F0(IsNullOrEmpty, v6);
    }
    BattleLogic__AddBattleLogicTaskFirst(logic, (BattleLogicTask_array *)IsNullOrEmpty, 0);
  }
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


bool BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActor(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        int32_t *actorType,
        BattleServantData_o **servantData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  BattleScriptEntity_o *Entity; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w8
  bool result; // w0
  BattleServantData_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleServantData_o *v23; // x21
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  uniqueId = 0;
  *actorType = 0;
  *servantData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)servantData, 0, (int32_t)servantData, (int32_t)method, v4, v5, v6, v7);
  Entity = this->fields.Entity;
  if ( !Entity )
    goto LABEL_14;
  if ( BattleScriptEntity__GetAiActType(Entity, 0) == 1 )
    goto LABEL_3;
  if ( BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActorUniqueId(this, &uniqueId, v13) )
  {
    Entity = (BattleScriptEntity_o *)this->fields._Data_k__BackingField;
    if ( Entity )
    {
      v16 = BattleData__getServantData((BattleData_o *)Entity, uniqueId, 0);
      if ( v16 )
      {
        v23 = v16;
        *servantData = v16;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)servantData, (int32_t)v16, v17, v18, v19, v20, v21, v22);
        if ( (((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v23->klass->vtable._15_get_IsAiNpc.methodPtr)(
                v23,
                v23->klass->vtable._15_get_IsAiNpc.method)
            & 1) != 0 )
        {
          v14 = 4;
        }
        else if ( v23->fields.isEnemy )
        {
          v14 = 2;
        }
        else
        {
          v14 = 3;
        }
        goto LABEL_4;
      }
LABEL_3:
      v14 = 1;
LABEL_4:
      result = 1;
      *actorType = v14;
      return result;
    }
LABEL_14:
    sub_1C942F0(Entity, v11);
  }
  return 0;
}


bool BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActorUniqueId(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        int32_t *uniqueId,
        const MethodInfo *method)
{
  __int64 Entity; // x0
  char *v6; // x0
  struct BaseAiActArgument_o *aiActArg; // x0
  struct BattleData_o *Data_k__BackingField; // x8
  char *v9; // x21
  int32_t AiActIndividuality; // w22
  System_Int32_array *v11; // x20
  int v12; // w8
  unsigned int v13; // w23
  char *v14; // x8
  __int64 v15; // x22

  if ( (byte_4D2F977 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
    byte_4D2F977 = 1;
  }
  *uniqueId = -1;
  Entity = (__int64)this->fields.Entity;
  if ( !Entity )
    goto LABEL_35;
  Entity = BattleScriptEntity__GetAiActType((BattleScriptEntity_o *)Entity, 0);
  if ( (_DWORD)Entity )
  {
    if ( (unsigned int)(Entity - 2) > 2 )
      goto LABEL_32;
    switch ( (_DWORD)Entity )
    {
      case 4:
        Data_k__BackingField = this->fields._Data_k__BackingField;
        if ( !Data_k__BackingField )
          goto LABEL_35;
        Entity = (__int64)Data_k__BackingField->fields.aiNpcDataList;
        if ( !Entity )
          goto LABEL_35;
        v6 = (char *)System_Collections_Generic_List_object___ToArray(
                       (System_Collections_Generic_List_object__o *)Entity,
                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
        break;
      case 3:
        Entity = (__int64)this->fields._Data_k__BackingField;
        if ( !Entity )
          goto LABEL_35;
        v6 = (char *)BattleData__GetOnFieldPlayerServantList((BattleData_o *)Entity, 0);
        break;
      case 2:
        Entity = (__int64)this->fields._Data_k__BackingField;
        if ( !Entity )
          goto LABEL_35;
        v6 = (char *)BattleData__GetOnFieldEnemyServantList((BattleData_o *)Entity, 0, 0);
        break;
      default:
        v9 = 0;
LABEL_21:
        if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v9, 0) )
          goto LABEL_32;
        Entity = (__int64)this->fields.Entity;
        if ( Entity )
        {
          AiActIndividuality = BattleScriptEntity__GetAiActIndividuality((BattleScriptEntity_o *)Entity, 0);
          Entity = sub_1C94140(int___TypeInfo, 1);
          if ( Entity )
          {
            v11 = (System_Int32_array *)Entity;
            if ( !*(_DWORD *)(Entity + 24) )
LABEL_36:
              sub_1C942F8(Entity);
            *(_DWORD *)(Entity + 32) = AiActIndividuality;
            if ( v9 )
            {
              v12 = *((_DWORD *)v9 + 6);
              if ( v12 >= 1 )
              {
                v13 = 0;
                while ( 1 )
                {
                  if ( v13 >= v12 )
                    goto LABEL_36;
                  v14 = &v9[8 * v13];
                  v15 = *((_QWORD *)v14 + 4);
                  if ( !v15 )
                    goto LABEL_35;
                  Entity = BattleServantData__checkIndividualities(*((BattleServantData_o **)v14 + 4), v11, 0);
                  if ( (Entity & 1) != 0 )
                    break;
                  v12 = *((_DWORD *)v9 + 6);
                  if ( (int)++v13 >= v12 )
                    goto LABEL_32;
                }
                *uniqueId = *(_DWORD *)(v15 + 24);
                goto LABEL_13;
              }
LABEL_32:
              LOBYTE(aiActArg) = 0;
              return (char)aiActArg;
            }
          }
        }
LABEL_35:
        sub_1C942F0(Entity, uniqueId);
    }
    v9 = v6;
    goto LABEL_21;
  }
  aiActArg = this->fields.aiActArg;
  if ( !aiActArg )
    return (char)aiActArg;
  *uniqueId = ((__int64 (__fastcall *)(struct BaseAiActArgument_o *, const MethodInfo *))aiActArg->klass->vtable._4_get_UniqueId.methodPtr)(
                aiActArg,
                aiActArg->klass->vtable._4_get_UniqueId.method);
LABEL_13:
  LOBYTE(aiActArg) = 1;
  return (char)aiActArg;
}


void BattleLogicBattleScript_BattleScriptDataAiAct__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        const MethodInfo *method)
{
  ;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleScriptEntity_o *v17; // x8
  struct System_String_o *CutInMessageText; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_String_array *CutInVoices; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  BattleScriptEntity_o *v32; // x8
  struct UnityEngine_Vector3_array *CutInOffset; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PrefabInfos_k__BackingField,
    (int32_t)CutInPrefabInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  CutInId = this->fields.Entity;
  if ( !CutInId )
    goto LABEL_9;
  CutInId = (BattleScriptEntity_o *)BattleScriptEntity__GetCutInMessageMode(CutInId, 0);
  v17 = this->fields.Entity;
  this->fields._MessageMode_k__BackingField = (int)CutInId;
  if ( !v17 )
    goto LABEL_9;
  CutInMessageText = BattleScriptEntity__GetCutInMessageText(v17, 0);
  this->fields._MessageText_k__BackingField = CutInMessageText;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._MessageText_k__BackingField,
    (int32_t)CutInMessageText,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  CutInId = this->fields.Entity;
  if ( !CutInId
    || (CutInVoices = BattleScriptEntity__GetCutInVoices(CutInId, 0),
        this->fields._VoiceNames_k__BackingField = CutInVoices,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields._VoiceNames_k__BackingField,
          (int32_t)CutInVoices,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (CutInId = this->fields.Entity) == 0)
    || (CutInId = (BattleScriptEntity_o *)BattleScriptEntity__GetCutInCamPlayerAll(CutInId, 0),
        v32 = this->fields.Entity,
        this->fields._CamPlayerAll_k__BackingField = (int)CutInId,
        !v32) )
  {
LABEL_9:
    sub_1C942F0(CutInId, v7);
  }
  CutInOffset = BattleScriptEntity__GetCutInOffset(v32, 0);
  this->fields._Offsets_k__BackingField = CutInOffset;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Offsets_k__BackingField,
    (int32_t)CutInOffset,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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

  if ( (byte_4D2F978 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleLogicBattleScript_BattleScriptDataCutIn__LoadPreExec_b__29_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2F978 = 1;
  }
  obj = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
    sub_1C942F0(Instance, v4);
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
  if ( (byte_4D2F979 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_1C94098(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    byte_4D2F979 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = (BattlePerformance_o *)*((_QWORD *)monitor + 8),
        v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0),
        !v4) )
  {
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MessageText_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._MessageText_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_Offsets(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        UnityEngine_Vector3_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Offsets_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Offsets_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_PrefabInfos(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PrefabInfos_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PrefabInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBattleScript_BattleScriptDataCutIn__set_VoiceNames(
        BattleLogicBattleScript_BattleScriptDataCutIn_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._VoiceNames_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._VoiceNames_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

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
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.messageText,
          (int32_t)MessageText,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v8 = this->fields.Entity) == 0) )
  {
    sub_1C942F0(v8, v7);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (perf = Data_k__BackingField->fields.perf) == 0
    || (v4 = this, (this = (BattleLogicBattleScript_BattleScriptDataMessage_o *)perf->fields.infoComp) == 0) )
  {
    sub_1C942F0(this, method);
  }
  DefaultBattleMessageObjectForBattleScript = BattleInformationComponent__CreateDefaultBattleMessageObjectForBattleScript(
                                                (BattleInformationComponent_o *)this,
                                                v4->fields.messageText,
                                                v4->fields.dispTime,
                                                0);
  v4->fields.messageObject = DefaultBattleMessageObjectForBattleScript;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v4->fields.messageObject,
    (int32_t)DefaultBattleMessageObjectForBattleScript,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void BattleLogicBattleScript_BattleScriptDataMessage__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageObject; // x20

  if ( (byte_4D2F97B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F97B = 1;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleScriptCameraTargetData_array *CameraTargetDataArray; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  if ( !entity )
    sub_1C942F0(v8, v9);
  CameraMotionEventName = BattleScriptEntity__GetCameraMotionEventName(entity, 0);
  this->fields.motionName = CameraMotionEventName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.motionName,
    (int32_t)CameraMotionEventName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  CameraTargetDataArray = BattleScriptEntity__GetCameraTargetDataArray(entity, 0);
  this->fields.cameraTargetDataArray = CameraTargetDataArray;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cameraTargetDataArray,
    (int32_t)CameraTargetDataArray,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera__SetCameraTargetObject(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        BattleScriptCameraTargetData_o *targetData,
        const MethodInfo *method)
{
  int32_t targetType; // w21
  __int64 v6; // x1
  BattleData_o *Data_k__BackingField; // x0
  UnityEngine_Object_o *MatchIndividuality; // x21
  struct BattleData_o *v9; // x8
  struct BattlePerformance_o *perf; // x8
  System_String_o *setVariableName; // x2
  UnityEngine_GameObject_o *v12; // x1
  UnityEngine_Transform_o *transform; // x0
  struct BattleData_o *v14; // x8
  struct BattlePerformance_o *v15; // x8
  BattleData_o *actioncamera; // x20

  if ( (byte_4D2F97A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F97A = 1;
  }
  if ( targetData )
  {
    targetType = targetData->fields.targetType;
    if ( (targetType & 0xFFFFFFFE) == 2 && !System_String__IsNullOrEmpty(targetData->fields.setVariableName, 0) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      if ( Data_k__BackingField )
      {
        MatchIndividuality = (UnityEngine_Object_o *)BattleData__GetOnFieldServantGameObjectFirstMatchIndividuality(
                                                       Data_k__BackingField,
                                                       targetType == 2,
                                                       targetData->fields.targetIndividualities,
                                                       0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(MatchIndividuality, 0, 0) )
          return;
        Data_k__BackingField = (BattleData_o *)System_String__IsNullOrEmpty(targetData->fields.targetNodeName, 0);
        if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
        {
          v9 = this->fields._Data_k__BackingField;
          if ( v9 )
          {
            perf = v9->fields.perf;
            if ( perf )
            {
              Data_k__BackingField = (BattleData_o *)perf->fields.actioncamera;
              if ( Data_k__BackingField )
              {
                setVariableName = targetData->fields.setVariableName;
                v12 = (UnityEngine_GameObject_o *)MatchIndividuality;
LABEL_22:
                BattleActionCamera__SetGameObjectToField(
                  (BattleActionCamera_o *)Data_k__BackingField,
                  v12,
                  setVariableName,
                  0);
                return;
              }
            }
          }
        }
        else if ( MatchIndividuality )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MatchIndividuality, 0);
          Data_k__BackingField = (BattleData_o *)TransformHelper__getNodeFromLvName(
                                                   transform,
                                                   targetData->fields.targetNodeName,
                                                   -1,
                                                   0,
                                                   0);
          v14 = this->fields._Data_k__BackingField;
          if ( v14 )
          {
            v15 = v14->fields.perf;
            if ( v15 )
            {
              if ( Data_k__BackingField )
              {
                actioncamera = (BattleData_o *)v15->fields.actioncamera;
                Data_k__BackingField = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Data_k__BackingField,
                                                         0);
                if ( actioncamera )
                {
                  setVariableName = targetData->fields.setVariableName;
                  v12 = (UnityEngine_GameObject_o *)Data_k__BackingField;
                  Data_k__BackingField = actioncamera;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      sub_1C942F0(Data_k__BackingField, v6);
    }
  }
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera__SetCameraTargetObjectToField(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct BattleScriptCameraTargetData_array *cameraTargetDataArray; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.cameraTargetDataArray, 0);
  if ( !IsNullOrEmpty )
  {
    cameraTargetDataArray = this->fields.cameraTargetDataArray;
    if ( !cameraTargetDataArray )
      sub_1C942F0(IsNullOrEmpty, v4);
    max_length = cameraTargetDataArray->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C942F8(IsNullOrEmpty);
        BattleLogicBattleScript_BattleScriptDataMoveCamera__SetCameraTargetObject(
          this,
          cameraTargetDataArray->m_Items[v8],
          v5);
        LODWORD(max_length) = cameraTargetDataArray->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}


void BattleLogicBattleScript_BattleScriptDataMoveCamera__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataMoveCamera_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattleActionCamera_o *actioncamera; // x0
  __int64 v5; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattlePerformance_o *perf; // x8

  if ( !System_String__IsNullOrEmpty(this->fields.motionName, 0) )
  {
    BattleLogicBattleScript_BattleScriptDataMoveCamera__SetCameraTargetObjectToField(this, v3);
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (perf = Data_k__BackingField->fields.perf) == 0
      || (actioncamera = perf->fields.actioncamera) == 0 )
    {
      sub_1C942F0(actioncamera, v5);
    }
    BattleActionCamera__sendEvent(actioncamera, -1, this->fields.motionName, 0);
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


void BattleLogicBattleScript_BattleScriptDataNormalSpeed___ctor(
        BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x1

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  if ( !entity )
    sub_1C942F0(v8, v9);
  this->fields.isOnlyFirst = BattleScriptEntity__GetNormalSpeedOnlyFirst(entity, 0) != 0;
}


void BattleLogicBattleScript_BattleScriptDataNormalSpeed__SetBattleSpeed(
        BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *v4; // x19
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v6; // x8
  const MethodInfo *v7; // x2
  struct BattleData_o *v8; // x8
  struct BattleLogic_o *v9; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_15;
  v4 = this;
  if ( this->fields.isOnlyFirst )
  {
    logic = Data_k__BackingField->fields.logic;
    if ( !logic )
      goto LABEL_15;
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)logic->fields.logicBattleScript;
    if ( !this )
      goto LABEL_15;
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)BattleLogicBattleScript__IsEnableNormalSpeedOnlyFirst(
                                                                      (BattleLogicBattleScript_o *)this,
                                                                      v4->fields.Entity,
                                                                      v2);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v4->fields._Data_k__BackingField;
      if ( v6 )
      {
        this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)v6->fields.perf;
        if ( this )
        {
          BattlePerformance__SetTimeScale((BattlePerformance_o *)this, 1.0, 0);
          v8 = v4->fields._Data_k__BackingField;
          if ( v8 )
          {
            v9 = v8->fields.logic;
            if ( v9 )
            {
              this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)v9->fields.logicBattleScript;
              if ( this )
              {
                BattleLogicBattleScript__RegistNormalSpeedOnlyFirst(
                  (BattleLogicBattleScript_o *)this,
                  v4->fields.Entity,
                  v7);
                return;
              }
            }
          }
        }
      }
LABEL_15:
      sub_1C942F0(this, method);
    }
  }
  else
  {
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)Data_k__BackingField->fields.perf;
    if ( !this )
      goto LABEL_15;
    BattlePerformance__SetTimeScale((BattlePerformance_o *)this, 1.0, 0);
  }
}


void BattleLogicBattleScript_BattleScriptDataNormalSpeed__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *this,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptDataNormalSpeed__SetBattleSpeed(this, method);
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataNormalSpeed__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *this,
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  v8 = this->fields.Entity;
  if ( !v8 )
    sub_1C942F0(0, v7);
  CharaVoice = BattleScriptEntity__GetCharaVoice(v8, 0);
  this->fields.voiceName = CharaVoice;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.voiceName, (int32_t)CharaVoice, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4D2F97C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2F97C = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.voiceName, 0) )
  {
    if ( this->fields.execState != 3 )
      this->fields.execState = 3;
    return;
  }
  voiceName = this->fields.voiceName;
  if ( !voiceName || (voiceName = System_String__Split((System_String_o *)voiceName, 0x3Au, 0, 0)) == 0 )
    sub_1C942F0(voiceName, v3);
  v5 = *((_QWORD *)voiceName + 3);
  v6 = voiceName;
  if ( (int)v5 < 2 )
  {
    if ( (_DWORD)v5 )
    {
      v7 = (System_String_o *)*((_QWORD *)voiceName + 4);
      v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice_42280884(v7, v8, 0, 0);
      return;
    }
LABEL_22:
    sub_1C942F8(voiceName);
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
  v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playVoice_42281128(v12, v11, v10, v13, 0, 0);
}


void BattleLogicBattleScript_BattleScriptDataPlayVoice__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataPlayVoice_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataResumeSpeed___ctor(
        BattleLogicBattleScript_BattleScriptDataResumeSpeed_o *this,
        BattleData_o *data,
        int32_t actorId,
        BattleScriptEntity_o *entity,
        bool isEach,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
}


void BattleLogicBattleScript_BattleScriptDataResumeSpeed__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataResumeSpeed_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_BattleScriptDataResumeSpeed_o *v4; // x19

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (logic = Data_k__BackingField->fields.logic) == 0
    || (v4 = this, (this = (BattleLogicBattleScript_BattleScriptDataResumeSpeed_o *)logic->fields.logicBattleScript) == 0) )
  {
    sub_1C942F0(this, method);
  }
  BattleLogicBattleScript__ResumeInitSpeed((BattleLogicBattleScript_o *)this, method);
  if ( v4->fields.execState != 3 )
    v4->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataResumeSpeed__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataResumeSpeed_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc___ctor(
        BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v3);
}


void BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc__InsertBackStepFieldNpcTask(
        BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *v4; // x19
  System_Collections_ICollection_o *BackStepFieldNpcTaskArray; // x20
  struct BattleData_o *v6; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_8;
  logic = Data_k__BackingField->fields.logic;
  if ( !logic )
    goto LABEL_8;
  v4 = this;
  this = (BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *)logic->fields.logicNpcAi;
  if ( !this )
    goto LABEL_8;
  BackStepFieldNpcTaskArray = (System_Collections_ICollection_o *)BattleLogicNpcAi__MakeBackStepFieldNpcTaskArray(
                                                                    (BattleLogicNpcAi_o *)this,
                                                                    -1,
                                                                    0);
  this = (BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *)BasicHelper__IsNullOrEmpty(
                                                                               BackStepFieldNpcTaskArray,
                                                                               0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v6 = v4->fields._Data_k__BackingField;
  if ( !v6 || (this = (BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *)v6->fields.logic) == 0 )
LABEL_8:
    sub_1C942F0(this, method);
  BattleLogic__AddBattleLogicTaskFirst((BattleLogic_o *)this, (BattleLogicTask_array *)BackStepFieldNpcTaskArray, 0);
}


void BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *this,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc__InsertBackStepFieldNpcTask(this, method);
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataSystemExit___ctor(
        BattleLogicBattleScript_BattleScriptDataSystemExit_o *this,
        BattleData_o *data,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
}


void BattleLogicBattleScript_BattleScriptDataSystemExit__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemExit_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_BattleScriptDataSystemExit_o *v4; // x19
  struct BattleData_o *v5; // x8
  struct BattleLogic_o *v6; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (logic = Data_k__BackingField->fields.logic) == 0
    || (v4 = this, (this = (BattleLogicBattleScript_BattleScriptDataSystemExit_o *)logic->fields.logicBattleScript) == 0)
    || (BattleLogicBattleScript__SavePlayedNormalSpeedOnlyFirstKey((BattleLogicBattleScript_o *)this, method),
        (v5 = v4->fields._Data_k__BackingField) == 0)
    || (v6 = v5->fields.logic) == 0
    || (this = (BattleLogicBattleScript_BattleScriptDataSystemExit_o *)v6->fields.logicBattleScript) == 0 )
  {
    sub_1C942F0(this, method);
  }
  BattleLogicBattleScript__ResumeInitSpeed((BattleLogicBattleScript_o *)this, method);
  if ( v4->fields.execState != 3 )
    v4->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataSystemExit__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemExit_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataSystemInit___ctor(
        BattleLogicBattleScript_BattleScriptDataSystemInit_o *this,
        BattleData_o *data,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
}


void BattleLogicBattleScript_BattleScriptDataSystemInit__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemInit_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  struct BattleLogicBattleScript_o *logicBattleScript; // x20

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (logic = Data_k__BackingField->fields.logic) == 0
    || (logicBattleScript = logic->fields.logicBattleScript) == 0 )
  {
    sub_1C942F0(this, method);
  }
  logicBattleScript->fields.prevBattleSpeed = UnityEngine_Time__get_timeScale(0);
  if ( this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataSystemInit__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataSystemInit_o *this,
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetEntities, (int32_t)entities, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4D2F974 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataSystemLoad_o *)sub_1C94098(&Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__);
    byte_4D2F974 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = monitor[7]) == 0
    || (v5 = *(BattleLogicBattleScript_o **)(v4 + 232),
        klass = (BattleScriptEntity_array *)v2[3].klass,
        v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__, 0),
        !v5) )
  {
    sub_1C942F0(this, method);
  }
  BattleLogicBattleScript__LoadAsset_47563428(v5, klass, v7, v8);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetEntities, (int32_t)entities, v7, v8, v9, v10, v11, v12);
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
    sub_1C942F0(this, method);
  }
  BattleLogicBattleScript__UnloadAsset_47564900(logicBattleScript, this->fields.targetEntities, v2);
}


void BattleLogicBattleScript___c__DisplayClass12_0___ctor(
        BattleLogicBattleScript___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBattleScript___c__DisplayClass12_0___LoadAsset_b__1(
        BattleLogicBattleScript___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct BattleLogicBattleScript_o *_4__this; // x8
  int v3; // w9
  bool v4; // zf

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(this, method);
  v3 = _4__this->fields.loadCount - 1;
  v4 = _4__this->fields.loadCount == 1;
  _4__this->fields.loadCount = v3;
  if ( v3 < 0 || v4 )
    ActionExtensions__Call(this->fields.callback, 0);
}


void BattleLogicBattleScript___c__DisplayClass12_1___ctor(
        BattleLogicBattleScript___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBattleScript___c__DisplayClass12_1___LoadAsset_b__0(
        BattleLogicBattleScript___c__DisplayClass12_1_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleLogicBattleScript___c__DisplayClass12_1_o *v4; // x19
  struct BattleLogicBattleScript___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct BattleLogicBattleScript_o *_4__this; // x8
  struct BattleLogicBattleScript___c__DisplayClass12_0_o *v7; // x8
  struct BattleLogicBattleScript_o *v8; // x9
  int v9; // w10
  bool v10; // zf

  v4 = this;
  if ( (byte_4D2F97D & 1) == 0 )
  {
    this = (BattleLogicBattleScript___c__DisplayClass12_1_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    byte_4D2F97D = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (this = (BattleLogicBattleScript___c__DisplayClass12_1_o *)_4__this->fields.dicAssetData) == 0
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v4->fields.asset,
          (Il2CppObject *)assetData,
          (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0 )
  {
    sub_1C942F0(this, assetData);
  }
  v9 = v8->fields.loadCount - 1;
  v10 = v8->fields.loadCount == 1;
  v8->fields.loadCount = v9;
  if ( v9 < 0 || v10 )
    ActionExtensions__Call(v7->fields.callback, 0);
}