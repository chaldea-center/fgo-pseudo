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
  BattleLogicBattleScript_o *v10; // x23
  int32_t battleScriptAction; // w8
  __int64 v12; // x22
  BattleData_o *v13; // x23
  const MethodInfo *v14; // x5
  BattleData_o *v15; // x23
  const MethodInfo *v16; // x5
  BattleData_o *v17; // x23
  const MethodInfo *v18; // x5
  BattleData_o *data; // x23
  const MethodInfo *v20; // x5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x5
  BattleData_o *v28; // x23
  const MethodInfo *v29; // x5
  BattleData_o *v30; // x23
  const MethodInfo *v31; // x5

  v10 = this;
  if ( (byte_593B946 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataAiAct_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataNormalSpeed_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
    this = (BattleLogicBattleScript_o *)sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataResumeSpeed_TypeInfo);
    byte_593B946 = 1;
  }
  if ( !entity )
    sub_21FFECC(this, *(_QWORD *)&actorId);
  battleScriptAction = entity->fields.battleScriptAction;
  v12 = 0;
  if ( battleScriptAction <= 4 )
  {
    switch ( battleScriptAction )
    {
      case 1:
        data = v10->fields.data;
        v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataAiAct_TypeInfo);
        BattleLogicBattleScript_BattleScriptData___ctor(
          (BattleLogicBattleScript_BattleScriptData_o *)v12,
          data,
          actorId,
          entity,
          isEach,
          v20);
        *(_QWORD *)(v12 + 48) = arg;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 48), (int32_t)arg, v21, v22, v23, v24, v25, v26);
        break;
      case 3:
        v30 = v10->fields.data;
        v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataCutIn_TypeInfo);
        BattleLogicBattleScript_BattleScriptDataCutIn___ctor(
          (BattleLogicBattleScript_BattleScriptDataCutIn_o *)v12,
          v30,
          actorId,
          entity,
          isEach,
          v31);
        break;
      case 4:
        v15 = v10->fields.data;
        v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataMoveCamera_TypeInfo);
        BattleLogicBattleScript_BattleScriptDataMoveCamera___ctor(
          (BattleLogicBattleScript_BattleScriptDataMoveCamera_o *)v12,
          v15,
          actorId,
          entity,
          isEach,
          v16);
        break;
    }
  }
  else if ( battleScriptAction > 6 )
  {
    if ( battleScriptAction == 7 )
    {
      v28 = v10->fields.data;
      v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataNormalSpeed_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataNormalSpeed___ctor(
        (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)v12,
        v28,
        actorId,
        entity,
        isEach,
        v29);
    }
    else if ( battleScriptAction == 8 )
    {
      v17 = v10->fields.data;
      v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataResumeSpeed_TypeInfo);
      BattleLogicBattleScript_BattleScriptData___ctor(
        (BattleLogicBattleScript_BattleScriptData_o *)v12,
        v17,
        actorId,
        entity,
        isEach,
        v18);
    }
  }
  else
  {
    v13 = v10->fields.data;
    if ( battleScriptAction == 5 )
    {
      v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataMessage_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataMessage___ctor(
        (BattleLogicBattleScript_BattleScriptDataMessage_o *)v12,
        v13,
        actorId,
        entity,
        isEach,
        v27);
    }
    else
    {
      v12 = sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataPlayVoice_TypeInfo);
      BattleLogicBattleScript_BattleScriptDataPlayVoice___ctor(
        (BattleLogicBattleScript_BattleScriptDataPlayVoice_o *)v12,
        v13,
        actorId,
        entity,
        isEach,
        v14);
    }
  }
  return (BattleLogicBattleScript_BattleScriptData_o *)v12;
}


BattleLogicBattleScript_BattleScriptData_o *BattleLogicBattleScript__CreateBattleScriptSystemData(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x19
  _QWORD *v8; // x8
  _QWORD *v9; // x8
  BattleData_o *v10; // x20
  const MethodInfo *v11; // x5
  BattleData_o *data; // x21
  const MethodInfo *v13; // x5
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B947 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataSystemExit_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataSystemInit_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo);
    byte_593B947 = 1;
  }
  v7 = 0;
  if ( type <= 2 )
  {
    if ( type == 1 )
    {
      v9 = &BattleLogicBattleScript_BattleScriptDataSystemLoad_TypeInfo;
    }
    else
    {
      if ( type != 2 )
        return (BattleLogicBattleScript_BattleScriptData_o *)v7;
      v9 = &BattleLogicBattleScript_BattleScriptDataSystemUnload_TypeInfo;
    }
    data = this->fields.data;
    v7 = sub_21FFEBC(*v9);
    BattleLogicBattleScript_BattleScriptData___ctor(
      (BattleLogicBattleScript_BattleScriptData_o *)v7,
      data,
      -1,
      0,
      0,
      v13);
    *(_QWORD *)(v7 + 48) = entities;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)entities, v14, v15, v16, v17, v18, v19);
    return (BattleLogicBattleScript_BattleScriptData_o *)v7;
  }
  switch ( type )
  {
    case 3:
      v8 = &BattleLogicBattleScript_BattleScriptDataSystemInit_TypeInfo;
      goto LABEL_13;
    case 4:
      v8 = &BattleLogicBattleScript_BattleScriptDataSystemExit_TypeInfo;
      goto LABEL_13;
    case 5:
      v8 = &BattleLogicBattleScript_BattleScriptDataSystemBackStepFieldNpc_TypeInfo;
LABEL_13:
      v10 = this->fields.data;
      v7 = sub_21FFEBC(*v8);
      BattleLogicBattleScript_BattleScriptData___ctor(
        (BattleLogicBattleScript_BattleScriptData_o *)v7,
        v10,
        -1,
        0,
        0,
        v11);
      break;
  }
  return (BattleLogicBattleScript_BattleScriptData_o *)v7;
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
  const MethodInfo_38491DC *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array *v18; // x20
  System_Action_o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593B940 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript__DownloadAsset_b__10_0__);
    sub_21FFC50(&Method_BattleLogicBattleScript__DownloadAsset_b__10_1__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593B940 = 1;
  }
  data = this->fields.data;
  collection = 0;
  listAsset = 0;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !AssumedBattleScriptIds )
      goto LABEL_23;
    monitor = AssumedBattleScriptIds[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)monitor )
          sub_21FFED4(data);
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
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
        if ( !v6 )
          goto LABEL_23;
        System_Collections_Generic_List_object___AddRange(
          v6,
          collection,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      v13 = System_Linq_Enumerable__Distinct_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v5,
              (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_string___);
      v14 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v13,
                                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
      v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__10_0__, 0);
      if ( !Instance )
        goto LABEL_23;
      data = (BattleData_o *)AssetManager__DownloadAssetStorage_47470348((AssetManager_o *)Instance, v14, v15, 1, 0);
    }
    if ( !v6 )
LABEL_23:
      sub_21FFECC(data, method);
    if ( v6->fields._size >= 1 )
    {
      v16 = (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_string___;
      ++this->fields.loadCount;
      v17 = System_Linq_Enumerable__Distinct_object_((System_Collections_Generic_IEnumerable_TSource__o *)v6, v16);
      v18 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v17,
                                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
      v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_BattleLogicBattleScript__DownloadAsset_b__10_1__, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v20);
      SoundManager__downloadAudioAssetStorage_48468660(v18, v19, 1, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleLogicBattleScript_o *AssetNames; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x25
  BattleScriptEntity_o *v28; // x23
  System_Collections_Generic_List_string__o *v29; // x24
  System_Collections_Generic_List_string__o *v30; // x24
  const MethodInfo *v31; // x2

  if ( (byte_593B948 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593B948 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAsset = (System_Collections_Generic_List_string__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)listAsset, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  *listAudioAsset = (System_Collections_Generic_List_string__o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)listAudioAsset, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( !entities )
    goto LABEL_11;
  max_length = entities->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        sub_21FFED4(AssetNames);
      v28 = entities->m_Items[v27];
      v29 = *listAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAssetNames(AssetNames, v28, v25);
      if ( !v29 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v29,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
      v30 = *listAudioAsset;
      AssetNames = (BattleLogicBattleScript_o *)BattleLogicBattleScript__GetAudioAssetNames(this, v28, v31);
      if ( !v30 )
        break;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)v30,
        (System_Collections_Generic_IEnumerable_T__o *)AssetNames,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v27 >= (int)max_length )
        return;
    }
LABEL_11:
    sub_21FFECC(AssetNames, v24);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_593B949 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593B949 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_14;
  if ( entity->fields.battleScriptAction != 3
    || (CutInId = (ServantAssetLoadManager_o *)BattleScriptEntity__GetCutInId(entity, 0), !(_DWORD)CutInId) )
  {
    if ( v4 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_14:
    sub_21FFECC(CutInId, v6);
  }
  v7 = (int)CutInId;
  CutInId = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v17;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *BattleLogicBattleScript__GetAudioAssetNames(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  _BOOL8 VoiceAssetName_53893376; // x0
  __int64 v7; // x1
  int32_t battleScriptAction; // w8
  System_String_o *CharaVoice; // x0
  const MethodInfo *v10; // x3
  System_String_array **p_assetNames; // x8
  BattleLogicBattleScript_o *CutInVoices; // x0
  const MethodInfo *v13; // x3
  System_String_array *v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_array *assetNames; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593B94A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593B94A = 1;
  }
  v15 = 0;
  assetNames = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !entity )
    goto LABEL_15;
  battleScriptAction = entity->fields.battleScriptAction;
  if ( battleScriptAction == 3 )
  {
    CutInVoices = (BattleLogicBattleScript_o *)BattleScriptEntity__GetCutInVoices(entity, 0);
    VoiceAssetName_53893376 = BattleLogicBattleScript__TryGetVoiceAssetName_53893376(
                                CutInVoices,
                                (System_String_array *)CutInVoices,
                                &v15,
                                v13);
    if ( VoiceAssetName_53893376 )
    {
      if ( v5 )
      {
        p_assetNames = &v15;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(VoiceAssetName_53893376, v7);
    }
LABEL_13:
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    goto LABEL_15;
  }
  if ( battleScriptAction != 6 )
    goto LABEL_13;
  CharaVoice = BattleScriptEntity__GetCharaVoice(entity, 0);
  VoiceAssetName_53893376 = BattleLogicBattleScript__TryGetVoiceAssetName(this, CharaVoice, &assetNames, v10);
  if ( !VoiceAssetName_53893376 )
    goto LABEL_13;
  if ( !v5 )
    goto LABEL_15;
  p_assetNames = &assetNames;
LABEL_12:
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)*p_assetNames,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleScriptEntity_array *BattleLogicBattleScript__GetBattleScriptEntities(
        BattleLogicBattleScript_o *this,
        int32_t battleScriptId,
        const MethodInfo *method)
{
  BattleScriptMaster_o *dicCacheBattleScriptEntities; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__BattleScriptEntity____o *v7; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B93F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattleScriptMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
    byte_593B93F = 1;
  }
  dicCacheBattleScriptEntities = (BattleScriptMaster_o *)this->fields.dicCacheBattleScriptEntities;
  value = 0;
  if ( !dicCacheBattleScriptEntities )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)dicCacheBattleScriptEntities,
          battleScriptId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____TryGetValue__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    dicCacheBattleScriptEntities = (BattleScriptMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleScriptMaster___);
    if ( dicCacheBattleScriptEntities )
    {
      dicCacheBattleScriptEntities = (BattleScriptMaster_o *)BattleScriptMaster__GetBattleScriptEntities(
                                                               dicCacheBattleScriptEntities,
                                                               battleScriptId,
                                                               0);
      v7 = this->fields.dicCacheBattleScriptEntities;
      value = (Il2CppObject *)dicCacheBattleScriptEntities;
      if ( v7 )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)v7,
          battleScriptId,
          (Il2CppObject *)dicCacheBattleScriptEntities,
          (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity____set_Item__);
        return (BattleScriptEntity_array *)value;
      }
    }
LABEL_11:
    sub_21FFECC(dicCacheBattleScriptEntities, *(_QWORD *)&battleScriptId);
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

  if ( (byte_593B951 & 1) == 0 )
  {
    this = (BattleLogicBattleScript_o *)sub_21FFC50(&StringLiteral_26546/*"{0}_{1}_{2}"*/);
    byte_593B951 = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  id = entity->fields.id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &id);
  playOrder = entity->fields.playOrder;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &playOrder);
  idx = entity->fields.idx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &idx);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26546/*"{0}_{1}_{2}"*/, v4, v5, v6, 0);
}


void BattleLogicBattleScript__Initialize(
        BattleLogicBattleScript_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1

  if ( (byte_593B93E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
    byte_593B93E = 1;
  }
  this->fields.data = battleData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)battleData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__BattleScriptEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__BattleScriptEntity_____ctor__);
  this->fields.dicCacheBattleScriptEntities = (struct System_Collections_Generic_Dictionary_int__BattleScriptEntity____o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicCacheBattleScriptEntities,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.dicAssetData = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicAssetData,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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

  if ( (byte_593B94F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    byte_593B94F = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.listPlayedNormalSpeedOnlyFirstKey,
                    0);
  if ( IsNullOrEmpty )
  {
    return 1;
  }
  else
  {
    NormalSpeedOnlyFirstKeyByEntity = (Il2CppObject *)BattleLogicBattleScript__GetNormalSpeedOnlyFirstKeyByEntity(
                                                        (BattleLogicBattleScript_o *)IsNullOrEmpty,
                                                        entity,
                                                        v6);
    if ( !this->fields.listPlayedNormalSpeedOnlyFirstKey )
      sub_21FFECC(NormalSpeedOnlyFirstKeyByEntity, v9);
    return !System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)this->fields.listPlayedNormalSpeedOnlyFirstKey,
              NormalSpeedOnlyFirstKeyByEntity,
              (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
  }
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // x0

  if ( (byte_593B941 & 1) == 0 )
  {
    sub_21FFC50(&BattleScriptEntity___TypeInfo);
    byte_593B941 = 1;
  }
  v7 = sub_21FFD10(BattleScriptEntity___TypeInfo, 1);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v15 = v7;
  if ( entity )
  {
    v7 = sub_21FFDA4(entity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v18 = sub_21FFEF0(0, v16);
      sub_21FFD90(v18, 0);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_21FFED4(v7);
  *(_QWORD *)(v15 + 32) = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)entity, v9, v10, v11, v12, v13, v14);
  BattleLogicBattleScript__LoadAsset_53888712(this, (BattleScriptEntity_array *)v15, callback, v17);
}


void BattleLogicBattleScript__LoadAsset_53888712(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_string__o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x4
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t current; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3
  AssetLoader_LoadEndDataHandler_c *v40; // x0
  System_String_o *v41; // x22
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x1
  Il2CppObject *v45; // x21
  System_Action_o *v46; // x22
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+0h] [xbp-B0h] BYREF
  AssetData_o *obj; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_string__o *listAudioAsset; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_593B942 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript___c__DisplayClass12_0__LoadAsset_b__1__);
    sub_21FFC50(&BattleLogicBattleScript___c__DisplayClass12_0_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript___c__DisplayClass12_1__LoadAsset_b__0__);
    sub_21FFC50(&BattleLogicBattleScript___c__DisplayClass12_1_TypeInfo);
    byte_593B942 = 1;
  }
  listAudioAsset = 0;
  listAsset = 0;
  memset(&v55, 0, sizeof(v55));
  obj = 0;
  v7 = sub_21FFEBC(BattleLogicBattleScript___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  BattleLogicBattleScript__GetAssetList(this, entities, &listAsset, &listAudioAsset, v22);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)listAsset, 0)
    && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)listAudioAsset, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  v8 = listAsset;
  this->fields.loadCount = 0;
  if ( !v8 )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v55 = v53;
  v53.fields._list = 0;
  *(_QWORD *)&v53.fields._index = &v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v23 = sub_21FFEBC(BattleLogicBattleScript___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    if ( !v23 )
      sub_21FFECC(v24, v25);
    *(_QWORD *)(v23 + 24) = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 24), v7, v26, v27, v28, v29, v30, v31);
    current = (int32_t)v55.fields._current;
    *(_QWORD *)(v23 + 16) = v55.fields._current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 16), current, v33, v34, v35, v36, v37, v38);
    if ( !BattleLogicBattleScript__TryGetAsset(this, *(System_String_o **)(v23 + 16), &obj, v39) )
    {
      v40 = AssetLoader_LoadEndDataHandler_TypeInfo;
      ++this->fields.loadCount;
      v41 = *(System_String_o **)(v23 + 16);
      v42 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(v40);
      AssetLoader_LoadEndDataHandler___ctor(
        v42,
        (Il2CppObject *)v23,
        Method_BattleLogicBattleScript___c__DisplayClass12_1__LoadAsset_b__0__,
        0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
      AssetManager__loadAssetStorage(v41, v42, 1, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v8 = listAudioAsset;
  if ( !listAudioAsset )
LABEL_26:
    sub_21FFECC(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v55 = v53;
  v53.fields._list = 0;
  *(_QWORD *)&v53.fields._index = &v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v45 = v55.fields._current;
    ++this->fields.loadCount;
    v46 = *(System_Action_o **)(v7 + 32);
    if ( !v46 )
    {
      v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v7,
        Method_BattleLogicBattleScript___c__DisplayClass12_0__LoadAsset_b__1__,
        0);
      *(_QWORD *)(v7 + 32) = v46;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v46, v47, v48, v49, v50, v51, v52);
    }
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v44);
    SoundManager__loadAudioAssetStorage((System_String_o *)v45, v46, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void BattleLogicBattleScript__LoadPlayedNormalSpeedOnlyFirstKey(
        BattleLogicBattleScript_o *this,
        const MethodInfo *method)
{
  System_String_o *String; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_List_string__o **p_listPlayedNormalSpeedOnlyFirstKey; // x0
  int32_t v14; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct System_Collections_Generic_List_string__o *v16; // x0

  if ( (byte_593B94D & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_3246/*"BattleScriptNormalSpeedListKey"*/);
    byte_593B94D = 1;
  }
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, method);
  String = EncryptedPlayerPrefs__GetString((System_String_o *)StringLiteral_3246/*"BattleScriptNormalSpeedListKey"*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( IsNullOrEmpty )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    this->fields.listPlayedNormalSpeedOnlyFirstKey = (struct System_Collections_Generic_List_string__o *)v6;
    p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
    v14 = (int)v6;
  }
  else
  {
    if ( !String )
      sub_21FFECC(IsNullOrEmpty, v5);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String, 0x2Cu, 0, 0);
    v16 = (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                                v15,
                                                                (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
    v14 = (int)v16;
    this->fields.listPlayedNormalSpeedOnlyFirstKey = v16;
    p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_listPlayedNormalSpeedOnlyFirstKey, v14, v7, v8, v9, v10, v11, v12);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0

  v4 = this;
  if ( (byte_593B950 & 1) == 0 )
  {
    this = (BattleLogicBattleScript_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_593B950 = 1;
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
    sub_21FFECC(NormalSpeedOnlyFirstKeyByEntity, v7);
  }
  size = listPlayedNormalSpeedOnlyFirstKey->fields._size;
  v17 = NormalSpeedOnlyFirstKeyByEntity;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listPlayedNormalSpeedOnlyFirstKey,
      NormalSpeedOnlyFirstKeyByEntity,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    listPlayedNormalSpeedOnlyFirstKey->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v17;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
  }
}


void BattleLogicBattleScript__ResumeInitSpeed(BattleLogicBattleScript_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattlePerformance_o *perf; // x8

  data = this->fields.data;
  if ( !data || (perf = data->fields.perf) == 0 )
    sub_21FFECC(this, method);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_String_o *v14; // x19

  if ( (byte_593B94E & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&StringLiteral_3246/*"BattleScriptNormalSpeedListKey"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593B94E = 1;
  }
  listPlayedNormalSpeedOnlyFirstKey = (System_Collections_ICollection_o *)this->fields.listPlayedNormalSpeedOnlyFirstKey;
  p_listPlayedNormalSpeedOnlyFirstKey = &this->fields.listPlayedNormalSpeedOnlyFirstKey;
  if ( !BasicHelper__IsNullOrEmpty(listPlayedNormalSpeedOnlyFirstKey, 0) )
  {
    v5 = System_Linq_Enumerable__Distinct_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*p_listPlayedNormalSpeedOnlyFirstKey,
           (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_string___);
    v6 = System_Linq_Enumerable__ToList_object_(
           v5,
           (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
    *p_listPlayedNormalSpeedOnlyFirstKey = (struct System_Collections_Generic_List_string__o *)v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_listPlayedNormalSpeedOnlyFirstKey,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v14 = System_String__Join_75485788(
            (System_String_o *)StringLiteral_869/*","*/,
            (System_Collections_Generic_IEnumerable_string__o *)*p_listPlayedNormalSpeedOnlyFirstKey,
            0);
    if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v13);
    EncryptedPlayerPrefs__SetString((System_String_o *)StringLiteral_3246/*"BattleScriptNormalSpeedListKey"*/, v14, 0);
  }
}


bool BattleLogicBattleScript__TryGetAsset(
        BattleLogicBattleScript_o *this,
        System_String_o *key,
        AssetData_o **obj,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *dicAssetData; // x0

  if ( (byte_593B945 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_593B945 = 1;
  }
  *obj = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)obj,
    0,
    (System_String_o *)obj,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  dicAssetData = this->fields.dicAssetData;
  if ( !dicAssetData )
    sub_21FFECC(0, v11);
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)dicAssetData,
           (Il2CppObject *)key,
           (Il2CppObject **)obj,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
}


bool BattleLogicBattleScript__TryGetVoiceAssetName(
        BattleLogicBattleScript_o *this,
        System_String_o *charaVoice,
        System_String_array **assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_array *v14; // x21
  BattleLogicBattleScript_o *v15; // x0
  const MethodInfo *v16; // x3

  if ( (byte_593B94B & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    byte_593B94B = 1;
  }
  v6 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v14 = (System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_21FFED4(v6);
  *(_QWORD *)(v6 + 32) = charaVoice;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)charaVoice, v8, v9, v10, v11, v12, v13);
  return BattleLogicBattleScript__TryGetVoiceAssetName_53893376(v15, v14, assetNames, v16);
}


bool BattleLogicBattleScript__TryGetVoiceAssetName_53893376(
        BattleLogicBattleScript_o *this,
        System_String_array *charaVoices,
        System_String_array **assetNames,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  bool IsNullOrEmpty; // w21
  System_Collections_Generic_List_object__o *v11; // x22
  System_String_array *v12; // x0
  Il2CppObject *v13; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x24
  System_String_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_String_array *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_593B94C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_1532/*":"*/);
    byte_593B94C = 1;
  }
  *assetNames = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)assetNames,
    0,
    (System_String_o *)assetNames,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)charaVoices, 0);
  if ( !IsNullOrEmpty )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
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
          sub_21FFED4(v12);
        v16 = charaVoices->m_Items[v15];
        v12 = (System_String_array *)System_String__IsNullOrEmpty(v16, 0);
        if ( ((unsigned __int8)v12 & 1) == 0 )
        {
          if ( !v16 )
            goto LABEL_21;
          v12 = System_String__Split_75495420(v16, (System_String_o *)StringLiteral_1532/*":"*/, 0, 0);
          if ( !v12 )
            goto LABEL_21;
          if ( !LODWORD(v12->max_length) )
            goto LABEL_22;
          if ( !v11 )
            goto LABEL_21;
          items = v11->fields._items;
          v13 = (Il2CppObject *)v12->m_Items[0];
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v13;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v17, v18, v19, v20, v21, v22);
          }
        }
        LODWORD(max_length) = charaVoices->max_length;
      }
      while ( (__int64)++v15 < (int)max_length );
    }
    if ( !v11 )
LABEL_21:
      sub_21FFECC(v12, v13);
    v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   v11,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    *assetNames = v27;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)assetNames, (int32_t)v27, v28, v29, v30, v31, v32, v33);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x21
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  if ( (byte_593B943 & 1) == 0 )
  {
    sub_21FFC50(&BattleScriptEntity___TypeInfo);
    byte_593B943 = 1;
  }
  v5 = sub_21FFD10(BattleScriptEntity___TypeInfo, 1);
  if ( !v5 )
    sub_21FFECC(0, v6);
  v13 = v5;
  if ( entity )
  {
    v5 = sub_21FFDA4(entity, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v16 = sub_21FFEF0(0, v14);
      sub_21FFD90(v16, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_21FFED4(v5);
  *(_QWORD *)(v13 + 32) = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)entity, v7, v8, v9, v10, v11, v12);
  BattleLogicBattleScript__UnloadAsset_53890144(this, (BattleScriptEntity_array *)v13, v15);
}


void BattleLogicBattleScript__UnloadAsset_53890144(
        BattleLogicBattleScript_o *this,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *dicAssetData; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *listAudioAsset; // [xsp+38h] [xbp-58h] BYREF
  System_Collections_Generic_List_string__o *listAsset; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_593B944 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593B944 = 1;
  }
  listAsset = 0;
  listAudioAsset = 0;
  memset(&v13, 0, sizeof(v13));
  BattleLogicBattleScript__GetAssetList(this, entities, &listAsset, &listAudioAsset, v3);
  dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)listAsset;
  if ( !listAsset )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)listAsset,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    AssetManager__releaseAssetStorage((System_String_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicAssetData;
  if ( !dicAssetData
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          dicAssetData,
          (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__),
        (dicAssetData = (System_Collections_Generic_Dictionary_object__object__o *)listAudioAsset) == 0) )
  {
LABEL_17:
    sub_21FFECC(dicAssetData, v6);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)listAudioAsset,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v13 = v12;
  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = &v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v11 = v13.fields._current;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
    SoundManager__releaseAudioAssetStorage((System_String_o *)v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)data,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.Entity = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)entity, v17, v18, v19, v20, v21, v22);
  this->fields._IsEach_k__BackingField = isEach;
  this->fields._ActorId_k__BackingField = actorId;
  *(_WORD *)&this->fields._IsLoaded_k__BackingField = 0;
  this->fields.execState = 0;
  if ( entity )
    this->fields.delayTime = (float)BattleScriptEntity__GetDelayTime(entity, 0) / 1000.0;
}


void BattleLogicBattleScript_BattleScriptData__ChangeExecState(
        BattleLogicBattleScript_BattleScriptData_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( this->fields.execState != state )
  {
    this->fields.execState = state;
    if ( state != 2 )
    {
      if ( state != 1 || this->fields.delayTime > 0.0 )
        return;
      this->fields.execState = 2;
    }
    ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))this->klass->vtable._8_StartUpdateAction.methodPtr)(
      this,
      this->klass->vtable._8_StartUpdateAction.method);
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
  if ( (byte_593B952 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptData_o *)sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__);
    byte_593B952 = 1;
  }
  if ( v2->fields._IsEach_k__BackingField )
  {
    Data_k__BackingField = v2->fields._Data_k__BackingField;
    if ( !Data_k__BackingField
      || (logic = Data_k__BackingField->fields.logic) == 0
      || (logicBattleScript = logic->fields.logicBattleScript,
          Entity = v2->fields.Entity,
          v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(
            v7,
            (Il2CppObject *)v2,
            Method_BattleLogicBattleScript_BattleScriptData__Load_b__29_0__,
            0),
          !logicBattleScript) )
    {
      sub_21FFECC(this, method);
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
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x2

  delayTime = this->fields.delayTime;
  if ( delayTime <= 0.0 )
  {
    if ( this->fields.execState != 2 )
    {
      methodPtr = this->klass->vtable._8_StartUpdateAction.methodPtr;
      v3 = this->klass->vtable._8_StartUpdateAction.method;
      this->fields.execState = 2;
      ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))methodPtr)(this, v3);
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
  const MethodInfo *v3; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( this->fields.execState != 1 )
  {
    delayTime = this->fields.delayTime;
    this->fields.execState = 1;
    if ( delayTime <= 0.0 )
    {
      methodPtr = this->klass->vtable._8_StartUpdateAction.methodPtr;
      v3 = this->klass->vtable._8_StartUpdateAction.method;
      this->fields.execState = 2;
      ((void (__fastcall *)(BattleLogicBattleScript_BattleScriptData_o *, const MethodInfo *))methodPtr)(this, v3);
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
      sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Data_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    (const MethodInfo *)isEach);
  this->fields.aiActArg = arg;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.aiActArg, (int32_t)arg, v9, v10, v11, v12, v13, v14);
}


void BattleLogicBattleScript_BattleScriptDataAiAct__AddBattleScriptTaskAiAct(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        const MethodInfo *method)
{
  int v5; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w27
  System_Collections_Generic_Dictionary_object__object__o *v11; // x22
  BattleFieldData_o *v12; // x21
  __int64 v13; // x22
  Il2CppObject *v14; // x8
  System_Collections_Generic_Dictionary_string__object__o *AiBaseEntityScript; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x9
  struct BaseAiActArgument_o *aiActArg; // x8
  BattleLogicTask_array *v25; // x0
  System_Collections_ICollection_o *v26; // x21
  int v27; // w22
  int32_t v28; // w22
  struct BattleData_o *v29; // x8
  struct BattleLogic_o *v30; // x8
  __int64 v31; // x1
  BattleLogicBattleScript_BattleScriptDataAiAct___c_c *v32; // x0
  struct BattleLogicBattleScript_BattleScriptDataAiAct___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__4_0; // x20
  Il2CppObject *v35; // x22
  struct BattleLogicBattleScript_BattleScriptDataAiAct___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x21
  Il2CppObject *v44; // x8
  System_Collections_Generic_Dictionary_string__object__o *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  BattleServantData_o *v52; // x23
  __int64 naturalAligment; // x10
  struct BattleData_o *v54; // x8
  struct BattleLogic_o *v55; // x8
  BattleLogicBaseAi_o **p_logicEnemyAi; // x8
  struct BattleLogic_o *v57; // x8
  BattleLogicBaseAi_o *v58; // x23
  int32_t uniqueId; // w24
  struct BaseAiActArgument_o *v60; // x8
  AiState_o *v61; // x25
  int32_t FromProcState_k__BackingField; // w26
  AiLogic_AiInfo_o *v63; // x22
  const MethodInfo *v64; // x6
  struct BattleData_o *v65; // x8
  struct BattleLogic_o *v66; // x9
  struct BaseAiActArgument_o *v67; // x8
  struct BattleData_o *v68; // x8
  struct BattleLogic_o *v69; // x9
  struct BaseAiActArgument_o *v70; // x8
  struct BaseAiActArgument_o *v71; // x8
  int32_t v72; // w25
  NpcAiCheckTask_Argument_o *v73; // x24
  struct BattleData_o *v74; // x8
  struct BattleLogic_o *v75; // x8
  BattleServantData_o *servantData; // [xsp+8h] [xbp-68h] BYREF
  int32_t actorType; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593B955 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleLogicTask__TypeInfo);
    sub_21FFC50(&AiEntity_TypeInfo);
    sub_21FFC50(&AiFieldEntity_TypeInfo);
    sub_21FFC50(&AiLogic_AiInfo_TypeInfo);
    sub_21FFC50(&AiNpcBattleServantData_TypeInfo);
    sub_21FFC50(&NpcAiCheckTask_Argument_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_21FFC50(&BattleFieldData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_AiActMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataAiAct___c__AddBattleScriptTaskAiAct_b__4_0__);
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo);
    byte_593B955 = 1;
  }
  entity = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  actorType = 0;
  servantData = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, retList);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !this->fields.Entity )
    goto LABEL_69;
  v8 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleScriptEntity__GetAiActId(this->fields.Entity, 0);
  if ( !v8 )
    goto LABEL_69;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v8,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__)
    || !BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActor(this, &actorType, &servantData, v9) )
  {
    return;
  }
  v10 = actorType;
  if ( actorType == 1 )
  {
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    v12 = (BattleFieldData_o *)sub_21FFEBC(BattleFieldData_TypeInfo);
    BattleFieldData___ctor_53123236(v12, 0x7FFFFFFF, (Il2CppObject *)v11, 0);
    v13 = sub_21FFEBC(AiFieldEntity_TypeInfo);
    AiFieldEntity___ctor((AiFieldEntity_o *)v13, 0);
    if ( !v13 )
      goto LABEL_69;
    v14 = entity;
    *(_OWORD *)(v13 + 16) = xmmword_E94090;
    if ( !v14 )
      goto LABEL_69;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.Entity;
    *(_DWORD *)(v13 + 48) = v14[1].klass;
    if ( !Master_object )
      goto LABEL_69;
    AiBaseEntityScript = BattleScriptEntity__GetAiBaseEntityScript((BattleScriptEntity_o *)Master_object, 0);
    *(_QWORD *)(v13 + 72) = AiBaseEntityScript;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v13 + 72),
      (int32_t)AiBaseEntityScript,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      goto LABEL_69;
    logic = Data_k__BackingField->fields.logic;
    if ( !logic )
      goto LABEL_69;
    aiActArg = this->fields.aiActArg;
    if ( !aiActArg )
      goto LABEL_69;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)logic->fields.logicFieldAi;
    if ( !Master_object )
      goto LABEL_69;
    v25 = BattleLogicFieldAi__procAiAct(
            (BattleLogicFieldAi_o *)Master_object,
            v12,
            (AiFieldEntity_o *)v13,
            0,
            aiActArg->fields._FromProcState_k__BackingField,
            0);
LABEL_18:
    v26 = (System_Collections_ICollection_o *)v25;
LABEL_21:
    v28 = -1;
    goto LABEL_22;
  }
  v27 = actorType - 2;
  if ( (unsigned int)(actorType - 2) > 2 )
  {
LABEL_20:
    v26 = 0;
    goto LABEL_21;
  }
  v43 = sub_21FFEBC(AiEntity_TypeInfo);
  AiEntity___ctor((AiEntity_o *)v43, 0);
  if ( !v43 )
    goto LABEL_69;
  v44 = entity;
  *(_OWORD *)(v43 + 16) = xmmword_E94090;
  if ( !v44 )
    goto LABEL_69;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.Entity;
  *(_DWORD *)(v43 + 48) = v44[1].klass;
  if ( !Master_object )
    goto LABEL_69;
  v45 = BattleScriptEntity__GetAiBaseEntityScript((BattleScriptEntity_o *)Master_object, 0);
  *(_QWORD *)(v43 + 72) = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 72), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  if ( v27 != 2 )
  {
    v54 = this->fields._Data_k__BackingField;
    if ( v10 == 2 )
    {
      if ( !v54 )
        goto LABEL_69;
      v55 = v54->fields.logic;
      if ( !v55 )
        goto LABEL_69;
      p_logicEnemyAi = (BattleLogicBaseAi_o **)&v55->fields.logicEnemyAi;
    }
    else
    {
      if ( !v54 )
        goto LABEL_69;
      v57 = v54->fields.logic;
      if ( !v57 )
        goto LABEL_69;
      p_logicEnemyAi = (BattleLogicBaseAi_o **)&v57->fields.logicPlayerAi;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)servantData;
    if ( !servantData )
      goto LABEL_69;
    v58 = *p_logicEnemyAi;
    uniqueId = servantData->fields.uniqueId;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))servantData->klass->vtable._18_getAiState.methodPtr)(
                                                                    servantData,
                                                                    servantData->klass->vtable._18_getAiState.method);
    v60 = this->fields.aiActArg;
    if ( !v60 )
      goto LABEL_69;
    v61 = (AiState_o *)Master_object;
    FromProcState_k__BackingField = v60->fields._FromProcState_k__BackingField;
    v63 = (AiLogic_AiInfo_o *)sub_21FFEBC(AiLogic_AiInfo_TypeInfo);
    AiLogic_AiInfo___ctor(v63, 1, uniqueId, v61, v58, FromProcState_k__BackingField, 0);
    if ( v10 == 3 )
    {
      v68 = this->fields._Data_k__BackingField;
      if ( !v68 )
        goto LABEL_69;
      v69 = v68->fields.logic;
      if ( !v69 )
        goto LABEL_69;
      v70 = this->fields.aiActArg;
      if ( !v70 )
        goto LABEL_69;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v69->fields.logicPlayerAi;
      if ( !Master_object )
        goto LABEL_69;
      v25 = (BattleLogicTask_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, BattleServantData_o *, __int64, _QWORD, AiLogic_AiInfo_o *, _QWORD, _QWORD))Master_object->klass[1]._2.genericContainerHandle)(
                                       Master_object,
                                       servantData,
                                       v43,
                                       0,
                                       v63,
                                       (unsigned int)v70->fields._FromProcState_k__BackingField,
                                       *(_QWORD *)&Master_object->klass[1]._2.instance_size);
      goto LABEL_18;
    }
    if ( v10 == 2 )
    {
      v65 = this->fields._Data_k__BackingField;
      if ( !v65 )
        goto LABEL_69;
      v66 = v65->fields.logic;
      if ( !v66 )
        goto LABEL_69;
      v67 = this->fields.aiActArg;
      if ( !v67 )
        goto LABEL_69;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v66->fields.logicEnemyAi;
      if ( !Master_object )
        goto LABEL_69;
      v25 = BattleLogicEnemyAi__ProcAiActBattleScript(
              (BattleLogicEnemyAi_o *)Master_object,
              servantData,
              (AiEntity_o *)v43,
              0,
              v63,
              v67->fields._FromProcState_k__BackingField,
              v64);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
  v52 = servantData;
  if ( !servantData )
    goto LABEL_69;
  v28 = servantData->fields.uniqueId;
  naturalAligment = AiNpcBattleServantData_TypeInfo->_2.naturalAligment;
  if ( servantData->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (AiNpcBattleServantData_c *)servantData->klass->_2.typeHierarchy[naturalAligment - 1] == AiNpcBattleServantData_TypeInfo )
  {
    v71 = this->fields.aiActArg;
    if ( !v71 )
      goto LABEL_69;
    v72 = v71->fields._FromProcState_k__BackingField;
    v73 = (NpcAiCheckTask_Argument_o *)sub_21FFEBC(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor_54125748(v73, v72, (AiNpcBattleServantData_o *)v52, 0);
    v74 = this->fields._Data_k__BackingField;
    if ( !v74 )
      goto LABEL_69;
    v75 = v74->fields.logic;
    if ( !v75 )
      goto LABEL_69;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v75->fields.logicNpcAi;
    if ( !Master_object )
      goto LABEL_69;
    v26 = (System_Collections_ICollection_o *)BattleLogicNpcAi__ProcAiAct(
                                                (BattleLogicNpcAi_o *)Master_object,
                                                (AiNpcBattleServantData_o *)v52,
                                                (AiEntity_o *)v43,
                                                v73,
                                                0);
  }
  else
  {
    v26 = 0;
  }
LABEL_22:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(v26, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return;
  v29 = this->fields._Data_k__BackingField;
  if ( !v29
    || (v30 = v29->fields.logic) == 0
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v30->fields.logicNpcAi) == 0
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleLogicNpcAi__MakeBackStepFieldNpcTaskArray(
                                                                        (BattleLogicNpcAi_o *)Master_object,
                                                                        v28,
                                                                        0),
        !retList) )
  {
LABEL_69:
    sub_21FFECC(Master_object, v7);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)retList,
    (System_Collections_Generic_IEnumerable_T__o *)Master_object,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  v32 = BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo;
  if ( !*(&BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo, v31);
    v32 = BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__4_0 = (System_Action_object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v31);
      static_fields = BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleLogicTask__TypeInfo);
    System_Action_object____ctor(
      _9__4_0,
      v35,
      Method_BattleLogicBattleScript_BattleScriptDataAiAct___c__AddBattleScriptTaskAiAct_b__4_0__,
      0);
    v36 = BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo->static_fields;
    v36->__9__4_0 = (struct System_Action_BattleLogicTask__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->__9__4_0, (int32_t)_9__4_0, v37, v38, v39, v40, v41, v42);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (System_Action_T__o *)_9__4_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleLogicTask___);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)retList,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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

  if ( (byte_593B954 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_593B954 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__),
          !logic) )
    {
      sub_21FFECC(IsNullOrEmpty, v6);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  BattleScriptEntity_o *Entity; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w8
  bool result; // w0
  BattleServantData_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattleServantData_o *v23; // x21
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  *actorType = 0;
  uniqueId = 0;
  *servantData = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)servantData,
    0,
    (System_String_o *)servantData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
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
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)servantData, (int32_t)v16, v17, v18, v19, v20, v21, v22);
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
    sub_21FFECC(Entity, v11);
  }
  return 0;
}


bool BattleLogicBattleScript_BattleScriptDataAiAct__TryGetBattleScriptActorUniqueId(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        int32_t *uniqueId,
        const MethodInfo *method)
{
  __int64 Entity; // x0
  void *v6; // x0
  struct BaseAiActArgument_o *aiActArg; // x0
  struct BattleData_o *Data_k__BackingField; // x8
  void *v9; // x21
  int32_t AiActIndividuality; // w22
  System_Int32_array *v11; // x20
  int v12; // w8
  __int64 v13; // x23
  __int64 v14; // x22

  if ( (byte_593B956 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
    byte_593B956 = 1;
  }
  Entity = (__int64)this->fields.Entity;
  *uniqueId = -1;
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
        v6 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)Entity,
               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
        break;
      case 3:
        Entity = (__int64)this->fields._Data_k__BackingField;
        if ( !Entity )
          goto LABEL_35;
        v6 = BattleData__GetOnFieldPlayerServantList((BattleData_o *)Entity, 0);
        break;
      case 2:
        Entity = (__int64)this->fields._Data_k__BackingField;
        if ( !Entity )
          goto LABEL_35;
        v6 = BattleData__GetOnFieldEnemyServantList((BattleData_o *)Entity, 0, 0);
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
          Entity = sub_21FFD10(int___TypeInfo, 1);
          if ( Entity )
          {
            v11 = (System_Int32_array *)Entity;
            if ( !*(_DWORD *)(Entity + 24) )
LABEL_36:
              sub_21FFED4(Entity);
            *(_DWORD *)(Entity + 32) = AiActIndividuality;
            if ( v9 )
            {
              v12 = *((_DWORD *)v9 + 6);
              if ( v12 >= 1 )
              {
                v13 = 0;
                while ( 1 )
                {
                  if ( (unsigned int)v13 >= v12 )
                    goto LABEL_36;
                  v14 = *((_QWORD *)v9 + v13 + 4);
                  if ( !v14 )
                    goto LABEL_35;
                  Entity = BattleServantData__checkIndividualities(*((BattleServantData_o **)v9 + v13 + 4), v11, 0);
                  if ( (Entity & 1) != 0 )
                    break;
                  v12 = *((_DWORD *)v9 + 6);
                  if ( (int)++v13 >= v12 )
                    goto LABEL_32;
                }
                LODWORD(aiActArg) = *(_DWORD *)(v14 + 24);
                goto LABEL_13;
              }
LABEL_32:
              LOBYTE(aiActArg) = 0;
              return (char)aiActArg;
            }
          }
        }
LABEL_35:
        sub_21FFECC(Entity, uniqueId);
    }
    v9 = v6;
    goto LABEL_21;
  }
  aiActArg = this->fields.aiActArg;
  if ( !aiActArg )
    return (char)aiActArg;
  LODWORD(aiActArg) = ((__int64 (__fastcall *)(struct BaseAiActArgument_o *, const MethodInfo *))aiActArg->klass->vtable._4_get_UniqueId.methodPtr)(
                        aiActArg,
                        aiActArg->klass->vtable._4_get_UniqueId.method);
LABEL_13:
  *uniqueId = (int)aiActArg;
  LOBYTE(aiActArg) = 1;
  return (char)aiActArg;
}


void BattleLogicBattleScript_BattleScriptDataAiAct__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataAiAct_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBattleScript_BattleScriptDataAiAct___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B957 & 1) == 0 )
  {
    sub_21FFC50(&BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo);
    byte_593B957 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo->static_fields->__9 = (struct BattleLogicBattleScript_BattleScriptDataAiAct___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleLogicBattleScript_BattleScriptDataAiAct___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBattleScript_BattleScriptDataAiAct___c___ctor(
        BattleLogicBattleScript_BattleScriptDataAiAct___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBattleScript_BattleScriptDataAiAct___c___AddBattleScriptTaskAiAct_b__4_0(
        BattleLogicBattleScript_BattleScriptDataAiAct___c_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  x->fields._IsBattleScriptRelationTask_k__BackingField = 1;
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleScriptEntity_o *v17; // x8
  struct System_String_o *CutInMessageText; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_String_array *CutInVoices; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  BattleScriptEntity_o *v32; // x8
  struct UnityEngine_Vector3_array *CutInOffset; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PrefabInfos_k__BackingField,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MessageText_k__BackingField,
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._VoiceNames_k__BackingField,
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
    sub_21FFECC(CutInId, v7);
  }
  CutInOffset = BattleScriptEntity__GetCutInOffset(v32, 0);
  this->fields._Offsets_k__BackingField = CutInOffset;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Offsets_k__BackingField,
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

  if ( (byte_593B958 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataCutIn__LoadPreExec_b__29_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_593B958 = 1;
  }
  obj = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
    sub_21FFECC(Instance, v4);
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
  if ( (byte_593B959 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataCutIn_o *)sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    byte_593B959 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = (BattlePerformance_o *)*((_QWORD *)monitor + 8),
        v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v5, v2, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0),
        !v4) )
  {
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MessageText_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MessageText_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Offsets_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Offsets_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PrefabInfos_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PrefabInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._VoiceNames_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._VoiceNames_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_Collections_Generic_Queue_T__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x3

  if ( (byte_593B95B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__TypeInfo);
    byte_593B95B = 1;
  }
  v11 = (System_Collections_Generic_Queue_T__o *)sub_21FFEBC(System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v11,
    (const MethodInfo_469F6A0 *)Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData___ctor__);
  this->fields.queueMessage = (struct System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.queueMessage,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    v18);
  BattleLogicBattleScript_BattleScriptDataMessage__SetDisplayMessage(this, data, actorId, v19);
}


void BattleLogicBattleScript_BattleScriptDataMessage__AddMessageQueue(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        BattleActionData_DisplayMessageData_array *messageArray,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21

  if ( (byte_593B960 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleActionData_DisplayMessageData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleActionData_DisplayMessageData___);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataMessage__AddMessageQueue_b__10_0__);
    byte_593B960 = 1;
  }
  v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleActionData_DisplayMessageData__TypeInfo);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleLogicBattleScript_BattleScriptDataMessage__AddMessageQueue_b__10_0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)messageArray,
    (System_Action_T__o *)v5,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleActionData_DisplayMessageData___);
}


void BattleLogicBattleScript_BattleScriptDataMessage__DestroyMessageObject(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_messageObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *messageObject; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593B95E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B95E = 1;
  }
  messageObject = this->fields.messageObject;
  p_messageObject = (MissionNaviTransitionBoardItem_o *)&this->fields.messageObject;
  v4 = (UnityEngine_Object_o *)messageObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_messageObject->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_messageObject->klass = 0;
    sub_21FFBF4(p_messageObject, 0, v8, v9, v10, v11, v12, v13);
  }
}


void BattleLogicBattleScript_BattleScriptDataMessage__DisplayMessage(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *queueMessage; // x0
  int size; // w8
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattlePerformance_o *perf; // x8
  BattleActionData_DisplayMessageData_o *v7; // x20
  struct UnityEngine_GameObject_o *BattleMessage; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_MonoBehaviour_o *v15; // x21
  float DispTime; // s8
  System_Action_object__o *v17; // x22

  if ( (byte_593B95C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleActionData_DisplayMessageData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_RealDelayCall_BattleActionData_DisplayMessageData___);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataMessage_EndMessage__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__Dequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__get_Count__);
    byte_593B95C = 1;
  }
  queueMessage = (System_Collections_Generic_Queue_T__o *)this->fields.queueMessage;
  if ( !queueMessage )
    goto LABEL_12;
  size = queueMessage->fields._size;
  this->fields.existDisplayMessage = size > 0;
  if ( size >= 1 )
  {
    queueMessage = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                              queueMessage,
                                                              (const MethodInfo_469FDFC *)Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__Dequeue__);
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      perf = Data_k__BackingField->fields.perf;
      if ( perf )
      {
        v7 = (BattleActionData_DisplayMessageData_o *)queueMessage;
        if ( queueMessage )
        {
          queueMessage = (System_Collections_Generic_Queue_T__o *)perf->fields.infoComp;
          if ( queueMessage )
          {
            BattleMessage = BattleInformationComponent__CreateBattleMessage(
                              (BattleInformationComponent_o *)queueMessage,
                              v7->fields._Messages_k__BackingField,
                              v7->fields._MessageType_k__BackingField,
                              0);
            this->fields.messageObject = BattleMessage;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.messageObject,
              (int32_t)BattleMessage,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14);
            v15 = (UnityEngine_MonoBehaviour_o *)this->fields._Data_k__BackingField;
            DispTime = BattleActionData_DisplayMessageData__get_DispTime(v7, 0);
            v17 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleActionData_DisplayMessageData__TypeInfo);
            System_Action_object____ctor(
              v17,
              (Il2CppObject *)this,
              Method_BattleLogicBattleScript_BattleScriptDataMessage_EndMessage__,
              0);
            queueMessage = (System_Collections_Generic_Queue_T__o *)BasicHelper__RealDelayCall_object_(
                                                                      DispTime,
                                                                      (System_Action_T__o *)v17,
                                                                      (Il2CppObject *)v7,
                                                                      (const MethodInfo_37E1CD8 *)Method_BasicHelper_RealDelayCall_BattleActionData_DisplayMessageData___);
            if ( v15 )
            {
              UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                v15,
                (System_Collections_IEnumerator_o *)queueMessage,
                0);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_21FFECC(queueMessage, method);
  }
  BattleLogicBattleScript_BattleScriptDataMessage__DestroyMessageObject(this, method);
}


void BattleLogicBattleScript_BattleScriptDataMessage__EndMessage(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        BattleActionData_DisplayMessageData_o *msgData,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_MonoBehaviour_o *Data_k__BackingField; // x20
  float Interval; // s8
  System_Action_o *v9; // x21

  if ( (byte_593B95D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataMessage_DisplayMessage__);
    byte_593B95D = 1;
  }
  BattleLogicBattleScript_BattleScriptDataMessage__DestroyMessageObject(this, (const MethodInfo *)msgData);
  if ( !msgData
    || (Data_k__BackingField = (UnityEngine_MonoBehaviour_o *)this->fields._Data_k__BackingField,
        Interval = BattleActionData_DisplayMessageData__get_Interval(msgData, 0),
        v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleLogicBattleScript_BattleScriptDataMessage_DisplayMessage__,
          0),
        v5 = BasicHelper__RealDelayCall(Interval, v9, 0),
        !Data_k__BackingField) )
  {
    sub_21FFECC(v5, v6);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(Data_k__BackingField, v5, 0);
}


void BattleLogicBattleScript_BattleScriptDataMessage__SetDisplayMessage(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        BattleData_o *data,
        int32_t actorId,
        const MethodInfo *method)
{
  int v7; // w8
  __int64 Master_object; // x0
  __int64 v9; // x1
  BattleMessageMaster_o *v10; // x23
  ParseBattleMessage_o *v11; // x21
  int32_t v12; // w1
  BattleActionData_DisplayMessageData_array *DisplayMessageArray; // x1
  const MethodInfo *v14; // x2
  BattleLogicBattleScript_BattleScriptDataMessage_o *v15; // x0
  BattleActionData_DisplayMessageData_array *v16; // x20
  System_String_o *v17; // x23
  int32_t DispTime; // w24
  BattleActionData_DisplayMessageData_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x0
  int32_t groupId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593B95F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&BattleActionData_DisplayMessageData___TypeInfo);
    sub_21FFC50(&BattleActionData_DisplayMessageData_TypeInfo);
    byte_593B95F = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)groupId = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, data);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMessageMaster___);
  if ( !data )
    goto LABEL_25;
  v10 = (BattleMessageMaster_o *)Master_object;
  Master_object = (__int64)data->fields.logic;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (__int64)BattleLogic__get_ParseBattleMsg((BattleLogic_o *)Master_object, 0);
  if ( !this->fields.Entity )
    goto LABEL_25;
  v11 = (ParseBattleMessage_o *)Master_object;
  if ( BattleScriptEntity__TryGetBattleMessageGroupId(this->fields.Entity, &groupId[1], 0) )
  {
    Master_object = (__int64)data->fields._DrawLotsDispMsg_k__BackingField;
    if ( Master_object )
    {
      Master_object = DrawLotsDisplayMessage__DrawLots((DrawLotsDisplayMessage_o *)Master_object, groupId[1], -1, 0);
      if ( v10 )
      {
        v12 = Master_object;
LABEL_16:
        DisplayMessageArray = BattleMessageMaster__GetDisplayMessageArray(v10, v12, v11, actorId, 0);
        v15 = this;
        goto LABEL_24;
      }
    }
    goto LABEL_25;
  }
  Master_object = (__int64)this->fields.Entity;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = BattleScriptEntity__TryGetBattleMessageId((BattleScriptEntity_o *)Master_object, groupId, 0);
  if ( (Master_object & 1) != 0 )
  {
    if ( v10 )
    {
      v12 = groupId[0];
      goto LABEL_16;
    }
LABEL_25:
    sub_21FFECC(Master_object, v9);
  }
  Master_object = sub_21FFD10(BattleActionData_DisplayMessageData___TypeInfo, 1);
  if ( !this->fields.Entity )
    goto LABEL_25;
  v16 = (BattleActionData_DisplayMessageData_array *)Master_object;
  Master_object = (__int64)BattleScriptEntity__GetMessageText(this->fields.Entity, 0);
  if ( !this->fields.Entity )
    goto LABEL_25;
  v17 = (System_String_o *)Master_object;
  DispTime = BattleScriptEntity__GetDispTime(this->fields.Entity, 0);
  v19 = (BattleActionData_DisplayMessageData_o *)sub_21FFEBC(BattleActionData_DisplayMessageData_TypeInfo);
  BattleActionData_DisplayMessageData___ctor_52736068(v19, v11, v17, DispTime, 0);
  if ( !v16 )
    goto LABEL_25;
  if ( v19 )
  {
    Master_object = sub_21FFDA4(v19, v16->obj.klass->_1.element_class);
    if ( !Master_object )
    {
      v27 = sub_21FFEF0(0, v26);
      sub_21FFD90(v27, 0);
    }
  }
  if ( !LODWORD(v16->max_length) )
    sub_21FFED4(Master_object);
  v16->m_Items[0] = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v16->m_Items, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v15 = this;
  DisplayMessageArray = v16;
LABEL_24:
  BattleLogicBattleScript_BattleScriptDataMessage__AddMessageQueue(v15, DisplayMessageArray, v14);
}


// attributes: thunk
void BattleLogicBattleScript_BattleScriptDataMessage__StartUpdateAction(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  BattleLogicBattleScript_BattleScriptDataMessage__DisplayMessage(this, method);
}


void BattleLogicBattleScript_BattleScriptDataMessage__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.existDisplayMessage && this->fields.execState != 3 )
    this->fields.execState = 3;
}


void BattleLogicBattleScript_BattleScriptDataMessage___AddMessageQueue_b__10_0(
        BattleLogicBattleScript_BattleScriptDataMessage_o *this,
        BattleActionData_DisplayMessageData_o *message,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *queueMessage; // x0

  if ( (byte_593B961 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__Enqueue__);
    byte_593B961 = 1;
  }
  queueMessage = (System_Collections_Generic_Queue_T__o *)this->fields.queueMessage;
  if ( !queueMessage )
    sub_21FFECC(0, message);
  System_Collections_Generic_Queue_object___Enqueue(
    queueMessage,
    (Il2CppObject *)message,
    (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_BattleActionData_DisplayMessageData__Enqueue__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleScriptCameraTargetData_array *CameraTargetDataArray; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  this->fields.fov = -1.0;
  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  if ( !entity )
    sub_21FFECC(v8, v9);
  CameraMotionEventName = BattleScriptEntity__GetCameraMotionEventName(entity, 0);
  this->fields.motionName = CameraMotionEventName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.motionName,
    (int32_t)CameraMotionEventName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.fov = BattleScriptEntity__GetFovValue(entity, 0);
  CameraTargetDataArray = BattleScriptEntity__GetCameraTargetDataArray(entity, 0);
  this->fields.cameraTargetDataArray = CameraTargetDataArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraTargetDataArray,
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
  __int64 v8; // x1
  UnityEngine_Object_o *MatchIndividuality; // x21
  struct BattleData_o *v10; // x8
  struct BattlePerformance_o *perf; // x8
  System_String_o *setVariableName; // x2
  UnityEngine_GameObject_o *v13; // x1
  UnityEngine_Transform_o *transform; // x0
  struct BattleData_o *v15; // x8
  struct BattlePerformance_o *v16; // x8
  BattleData_o *actioncamera; // x20

  if ( (byte_593B95A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B95A = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Equality(MatchIndividuality, 0, 0) )
          return;
        Data_k__BackingField = (BattleData_o *)System_String__IsNullOrEmpty(targetData->fields.targetNodeName, 0);
        if ( ((unsigned __int8)Data_k__BackingField & 1) != 0 )
        {
          v10 = this->fields._Data_k__BackingField;
          if ( v10 )
          {
            perf = v10->fields.perf;
            if ( perf )
            {
              Data_k__BackingField = (BattleData_o *)perf->fields.actioncamera;
              if ( Data_k__BackingField )
              {
                setVariableName = targetData->fields.setVariableName;
                v13 = (UnityEngine_GameObject_o *)MatchIndividuality;
LABEL_22:
                BattleActionCamera__SetGameObjectToField(
                  (BattleActionCamera_o *)Data_k__BackingField,
                  v13,
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
          v15 = this->fields._Data_k__BackingField;
          if ( v15 )
          {
            v16 = v15->fields.perf;
            if ( v16 )
            {
              if ( Data_k__BackingField )
              {
                actioncamera = (BattleData_o *)v16->fields.actioncamera;
                Data_k__BackingField = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Data_k__BackingField,
                                                         0);
                if ( actioncamera )
                {
                  setVariableName = targetData->fields.setVariableName;
                  v13 = (UnityEngine_GameObject_o *)Data_k__BackingField;
                  Data_k__BackingField = actioncamera;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      sub_21FFECC(Data_k__BackingField, v6);
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
      sub_21FFECC(IsNullOrEmpty, v4);
    max_length = cameraTargetDataArray->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_21FFED4(IsNullOrEmpty);
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
  float fov; // s0
  struct BattleData_o *v9; // x8
  int32_t *p_execState; // x19
  int32_t execState; // t1

  if ( System_String__IsNullOrEmpty(this->fields.motionName, 0) )
    goto LABEL_9;
  BattleLogicBattleScript_BattleScriptDataMoveCamera__SetCameraTargetObjectToField(this, v3);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_12;
  perf = Data_k__BackingField->fields.perf;
  if ( !perf )
    goto LABEL_12;
  actioncamera = perf->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_12;
  BattleActionCamera__sendEvent(actioncamera, -1, this->fields.motionName, 0);
  fov = this->fields.fov;
  if ( fov < 0.0 )
    goto LABEL_9;
  v9 = this->fields._Data_k__BackingField;
  if ( !v9 || (actioncamera = (BattleActionCamera_o *)v9->fields.perf) == 0 )
LABEL_12:
    sub_21FFECC(actioncamera, v5);
  BattlePerformance__setupCameraFov((BattlePerformance_o *)actioncamera, fov, 0);
LABEL_9:
  execState = this->fields.execState;
  p_execState = &this->fields.execState;
  if ( execState != 3 )
    *p_execState = 3;
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
    sub_21FFECC(v8, v9);
  this->fields.isOnlyFirst = BattleScriptEntity__GetNormalSpeedOnlyFirst(entity, 0) != 0;
}


void BattleLogicBattleScript_BattleScriptDataNormalSpeed__SetBattleSpeed(
        BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *v5; // x19
  struct BattleData_o *v6; // x8
  const MethodInfo *v7; // x2
  struct BattleData_o *v8; // x8
  struct BattleLogic_o *v9; // x8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( this->fields.isOnlyFirst )
  {
    if ( !Data_k__BackingField )
      goto LABEL_16;
    logic = Data_k__BackingField->fields.logic;
    if ( !logic )
      goto LABEL_16;
    v5 = this;
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)logic->fields.logicBattleScript;
    if ( !this )
      goto LABEL_16;
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)BattleLogicBattleScript__IsEnableNormalSpeedOnlyFirst(
                                                                      (BattleLogicBattleScript_o *)this,
                                                                      v5->fields.Entity,
                                                                      v2);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v5->fields._Data_k__BackingField;
      if ( v6 )
      {
        this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)v6->fields.perf;
        if ( this )
        {
          BattlePerformance__SetTimeScale((BattlePerformance_o *)this, 1.0, 0);
          v8 = v5->fields._Data_k__BackingField;
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
                  v5->fields.Entity,
                  v7);
                return;
              }
            }
          }
        }
      }
LABEL_16:
      sub_21FFECC(this, method);
    }
  }
  else
  {
    if ( !Data_k__BackingField )
      goto LABEL_16;
    this = (BattleLogicBattleScript_BattleScriptDataNormalSpeed_o *)Data_k__BackingField->fields.perf;
    if ( !this )
      goto LABEL_16;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    actorId,
    entity,
    isEach,
    method);
  v8 = this->fields.Entity;
  if ( !v8 )
    sub_21FFECC(0, v7);
  CharaVoice = BattleScriptEntity__GetCharaVoice(v8, 0);
  this->fields.voiceName = CharaVoice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceName,
    (int32_t)CharaVoice,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  __int64 v9; // x1
  float v10; // s8
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x1

  if ( (byte_593B962 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptData_EndAction__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593B962 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.voiceName, 0) )
  {
    if ( this->fields.execState != 3 )
      this->fields.execState = 3;
    return;
  }
  voiceName = this->fields.voiceName;
  if ( !voiceName || (voiceName = System_String__Split((System_String_o *)voiceName, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(voiceName, v3);
  v5 = *((_QWORD *)voiceName + 3);
  v6 = voiceName;
  if ( (int)v5 < 2 )
  {
    if ( (_DWORD)v5 )
    {
      v7 = (System_String_o *)*((_QWORD *)voiceName + 4);
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9);
      SoundManager__playVoice_48465104(v7, v8, 0, 0);
      return;
    }
LABEL_22:
    sub_21FFED4(voiceName);
  }
  if ( (_DWORD)v5 == 2 )
  {
    v10 = 1.0;
  }
  else
  {
    v10 = System_Single__Parse(*((System_String_o **)voiceName + 6), 0);
    v5 = v6[3];
  }
  if ( (unsigned int)v5 < 2 )
    goto LABEL_22;
  v12 = (System_String_o *)v6[4];
  v11 = (System_String_o *)v6[5];
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleLogicBattleScript_BattleScriptData_EndAction__, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v14);
  SoundManager__playVoice_48465348(v12, v11, v10, v13, 0, 0);
}


void BattleLogicBattleScript_BattleScriptDataPlayVoice__UpdateAction(
        BattleLogicBattleScript_BattleScriptDataPlayVoice_o *this,
        const MethodInfo *method)
{
  ;
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  float timeScale; // s0
  int32_t execState; // w8

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (logic = Data_k__BackingField->fields.logic) == 0
    || (logicBattleScript = logic->fields.logicBattleScript) == 0 )
  {
    sub_21FFECC(this, method);
  }
  timeScale = UnityEngine_Time__get_timeScale(0);
  execState = this->fields.execState;
  logicBattleScript->fields.prevBattleSpeed = timeScale;
  if ( execState != 3 )
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetEntities,
    (int32_t)entities,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  if ( (byte_593B953 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (BattleLogicBattleScript_BattleScriptDataSystemLoad_o *)sub_21FFC50(&Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__);
    byte_593B953 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor
    || (v4 = monitor[7]) == 0
    || (v5 = *(BattleLogicBattleScript_o **)(v4 + 232),
        klass = (BattleScriptEntity_array *)v2[3].klass,
        v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v7, v2, Method_BattleLogicBattleScript_BattleScriptDataSystemLoad__Load_b__2_0__, 0),
        !v5) )
  {
    sub_21FFECC(this, method);
  }
  BattleLogicBattleScript__LoadAsset_53888712(v5, klass, v7, v8);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  BattleLogicBattleScript_BattleScriptData___ctor(
    (BattleLogicBattleScript_BattleScriptData_o *)this,
    data,
    -1,
    0,
    0,
    v4);
  this->fields.targetEntities = entities;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetEntities,
    (int32_t)entities,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_21FFECC(this, method);
  }
  BattleLogicBattleScript__UnloadAsset_53890144(logicBattleScript, this->fields.targetEntities, v2);
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
    sub_21FFECC(this, method);
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
  if ( (byte_593B963 & 1) == 0 )
  {
    this = (BattleLogicBattleScript___c__DisplayClass12_1_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    byte_593B963 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (this = (BattleLogicBattleScript___c__DisplayClass12_1_o *)_4__this->fields.dicAssetData) == 0
    || (System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v4->fields.asset,
          (Il2CppObject *)assetData,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__),
        (v7 = v4->fields.CS___8__locals1) == 0)
    || (v8 = v7->fields.__4__this) == 0 )
  {
    sub_21FFECC(this, assetData);
  }
  v9 = v8->fields.loadCount - 1;
  v10 = v8->fields.loadCount == 1;
  v8->fields.loadCount = v9;
  if ( v9 < 0 || v10 )
    ActionExtensions__Call(v7->fields.callback, 0);
}