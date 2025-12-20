void ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w1
  struct ServantAssetLoadManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2BA47 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BA47 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v1,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->unloadIgnoredAssetArgs,
    (int32_t)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = StringLiteral_1/*""*/;
  v10 = ServantAssetLoadManager_TypeInfo->static_fields;
  v10->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->wkSpace, v9, v11, v12, v13, v14, v15, v16);
}


void ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_Dictionary_object__object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4D2BA46 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__Object__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
    byte_4D2BA46 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadedList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.loadlist, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.downloadlist, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ActorVoice, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.LastActorVoice, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgAssetDataList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nobleEffectList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v52;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._releaseAssets, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4D2BA33 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4D2BA33 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1C942F0(0, path);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
}


void ServantAssetLoadManager__DebugPrint(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0)) == 0 )
    sub_1C942F0(this, data);
}


void ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2B9C9 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9C9 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, 0, v2);
}


void ServantAssetLoadManager__DownloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x4

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                                        skillInfo,
                                        skillInfo->klass->vtable._9_getCutInId.method,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__setLoadList(this, SkillCutInPath, 1, 0, v7);
    }
  }
}


void ServantAssetLoadManager__EndPlaySe(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ;
}


void ServantAssetLoadManager__EndRetryTransition(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  __int64 v4; // x1
  ServantAssetLoadManager_c *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantAssetArgs_o *currentValue; // x19
  int32_t v10; // w24
  ServantAssetLoadManager_c *v11; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2BA32 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
    byte_4D2BA32 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v5 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v5 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v5->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v6 )
      break;
    currentValue = (ServantAssetArgs_o *)v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_1C942F0(v6, v7);
    if ( SHIDWORD(v13.fields._currentValue[6].monitor) >= 1 )
    {
      v10 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, 0, v8);
        ++v10;
      }
      while ( v10 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v11 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1C942F0(Instance, v4);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


bool ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4D2B9E2 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B9E2 = 1;
  }
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   svtId,
                                   limitCount,
                                   appearanceId,
                                   isForce,
                                   method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__isExistAssetStorage(PreloadBattleActorFolderName, 0);
}


bool ServantAssetLoadManager__ExistsBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2BA13 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA13 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v10);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           type,
           v11);
}


// local variable allocation has failed, the output may be wrong!
bool ServantAssetLoadManager__ExistsBattleVoiceLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  int32_t VoicePrefix; // w24
  const MethodInfo *v12; // x3
  int32_t VoiceId; // w0
  int32_t v14; // w9
  Il2CppObject *v15; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v17; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  int32_t v23; // [xsp+8h] [xbp-68h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2BA14 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&Voice_TypeInfo);
    sub_1C94098(&StringLiteral_25315/*"{0:D0}_{1}"*/);
    sub_1C94098(&StringLiteral_12815/*"Servants_"*/);
    byte_4D2BA14 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v12);
  if ( overwriteSvtVoiceId )
    v14 = overwriteSvtVoiceId;
  else
    v14 = VoiceId;
  v23 = VoicePrefix;
  v24 = v14;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0);
  v17 = System_String__Format_64459052((System_String_o *)StringLiteral_25315/*"{0:D0}_{1}"*/, v15, FileName, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v19 = System_Int32__ToString((int32_t)&v24, 0);
  v20 = System_String__Concat_64417744((System_String_o *)StringLiteral_12815/*"Servants_"*/, v19, 0);
  if ( !Instance )
    sub_1C942F0(v20, v21);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v20, v17, 0);
}


System_Collections_IEnumerator_o *ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2BA1E & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo);
    byte_4D2BA1E = 1;
  }
  v7 = sub_1C942E4(ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)bgList, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *ServantAssetLoadManager__GetCommandCodeFolderName(int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BA30 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_4590/*"CommandCodes/Texture/"*/);
    byte_4D2BA30 = 1;
  }
  v5 = commandCodeId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Concat((Il2CppObject *)StringLiteral_4590/*"CommandCodes/Texture/"*/, v3, 0);
}


System_String_o *ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA17 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v7; // x0

  if ( (byte_4D2BA18 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2BA18 = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1C942F0(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v7 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v7 = ServantAssetLoadManager_TypeInfo;
  }
  return v7->static_fields->wkSpace;
}


int32_t ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  if ( (byte_4D2B9AB & 1) == 0 )
  {
    sub_1C94098(&ImageLimitCount_TypeInfo);
    byte_4D2B9AB = 1;
  }
  if ( limitCount <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0) + limitDiff;
  }
  return limitCount;
}


int32_t ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2BA34 & 1) == 0 )
  {
    sub_1C94098(&System_IO_Path_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  klass = Instance[7].klass;
  if ( !klass )
    return 0;
  result = 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(namespaze, 0);
  if ( System_Int32__TryParse(FileNameWithoutExtension, &result, 0) )
    return result;
  else
    return 0;
}


System_String_o *ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2BA10 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_25315/*"{0:D0}_{1}"*/);
    byte_4D2BA10 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_64459052((System_String_o *)StringLiteral_25315/*"{0:D0}_{1}"*/, v9, (Il2CppObject *)voiceId, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantAssetLoadManager__GetPreloadBattleActorFolderName(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  int32_t v10; // w0

  if ( (byte_4D2B9E0 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9E0 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_41442140(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_41442140(v10, *(const MethodInfo **)&svtId);
  }
  return ServantAssetLoadManager__getActorFolderName(v10, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ServantAssetLoadManager___c_c *v3; // x0
  System_Func_T1__T2__TResult__o *_9__99_0; // x20
  Il2CppObject *v5; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Object_array *ComponentsInChildren_object__52384692; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v15; // x19

  if ( (byte_4D2B9EB & 1) == 0 )
  {
    sub_1C94098(&Method_BattleServantDeadComponent_getReplaceChocoShader__);
    sub_1C94098(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__);
    sub_1C94098(&ServantAssetLoadManager___c_TypeInfo);
    byte_4D2B9EB = 1;
  }
  v3 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v3 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__99_0 = (System_Func_T1__T2__TResult__o *)v3->static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ServantAssetLoadManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__,
      0);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__99_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__99_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !obj )
    sub_1C942F0(v3, method);
  ComponentsInChildren_object__52384692 = UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                            obj,
                                            (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__52384692 && (max_length = ComponentsInChildren_object__52384692->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_1C942F8(ComponentsInChildren_object__52384692);
    v15 = ComponentsInChildren_object__52384692->m_Items[0];
  }
  else
  {
    v15 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
  {
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v15,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__99_0;
}


System_Func_Shader__Shader__Shader__o *ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ServantAssetLoadManager___c_c *v3; // x0
  System_Func_T1__T2__TResult__o *_9__98_0; // x20
  Il2CppObject *v5; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Object_array *ComponentsInChildren_object__52384692; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v15; // x19

  if ( (byte_4D2B9EA & 1) == 0 )
  {
    sub_1C94098(&Method_BattleServantDeadComponent_getReplaceDeadShader__);
    sub_1C94098(&System_Func_Shader__Shader__Shader__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__);
    sub_1C94098(&ServantAssetLoadManager___c_TypeInfo);
    byte_4D2B9EA = 1;
  }
  v3 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v3 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__98_0 = (System_Func_T1__T2__TResult__o *)v3->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ServantAssetLoadManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v5,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__,
      0);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v7, v8, v9, v10, v11, v12);
  }
  if ( !obj )
    sub_1C942F0(v3, method);
  ComponentsInChildren_object__52384692 = UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                            obj,
                                            (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__52384692 && (max_length = ComponentsInChildren_object__52384692->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_1C942F8(ComponentsInChildren_object__52384692);
    v15 = ComponentsInChildren_object__52384692->m_Items[0];
  }
  else
  {
    v15 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v15,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


System_String_o *ServantAssetLoadManager__GetStatusUiPath(int32_t statusUiType, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BA38 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_3100/*"Battle/StatusUi/{0}"*/);
    byte_4D2BA38 = 1;
  }
  v5 = statusUiType;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3100/*"Battle/StatusUi/{0}"*/, v3, 0);
}


bool ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4D2B9CE & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9CE = 1;
  }
  if ( !v2 )
    sub_1C942F0(data, method);
  if ( v2->fields.isEnemy || v2->fields.followerType )
    return v2->fields.isEnemy;
  uniqueId = v2->fields.uniqueId;
  v5 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v5 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v5->static_fields->KeepAssetPlayerServantCount;
}


bool ServantAssetLoadManager__IsKeepAssetAvailable(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v6; // x19
  intptr_t m_CachedPtr; // x8

  if ( (byte_4D2BA31 & 1) == 0 )
  {
    sub_1C94098(&BattleRootComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&StringLiteral_6430/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/);
    byte_4D2BA31 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6430/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)naturalAligment) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
      v6 = (UnityEngine_Object_o *)Instance[2].klass;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v6 || (m_CachedPtr = v6[2].fields.m_CachedPtr) == 0 )
LABEL_21:
    sub_1C942F0(Instance, v3);
  return *(_BYTE *)(m_CachedPtr + 744);
}


bool ServantAssetLoadManager__IsPreloadedBattleActor(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4D2B9E1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B9E1 = 1;
  }
  if ( !args )
    sub_1C942F0(this, args);
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   args->fields._SvtId_k__BackingField,
                                   args->fields._LoadActorLimitCount_k__BackingField,
                                   args->fields._AppearanceId_k__BackingField,
                                   isForce,
                                   v4);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getAssetStorage(PreloadBattleActorFolderName, 0) != 0;
}


bool ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2BA1B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1C942F0(Instance, v4);
  }
  return 1;
}


System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *ServantAssetLoadManager__LoadBattleActorDropEffectDict(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA3E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0
  System_String_o *v10; // x21
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x19

  if ( (byte_4D2BA3F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_5382/*"DropJumpingOverwriteData"*/);
    sub_1C94098(&StringLiteral_5380/*"DropHighPositionOverwriteData"*/);
    byte_4D2BA3F = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  v10 = ActorFolderName_41442140;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_41442140,
                         (System_String_o *)StringLiteral_5380/*"DropHighPositionOverwriteData"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
      v12,
      (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    if ( !v12 )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add(
      v12,
      2,
      AssetObject_object,
      (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
  }
  v15 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v10,
          (System_String_o *)StringLiteral_5382/*"DropJumpingOverwriteData"*/,
          (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
  {
    if ( v12
      || (v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo),
          System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
            v12,
            (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__),
          v12) )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add(
        v12,
        1,
        v15,
        (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
      return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v12;
    }
LABEL_20:
    sub_1C942F0(v13, v14);
  }
  return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v12;
}


UnityEngine_ScriptableObject_array *ServantAssetLoadManager__LoadBattleActorDropGeneralSettingArray(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA44 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__LoadBattleActorDropGeneralSettingArrayLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_ScriptableObject_array *ServantAssetLoadManager__LoadBattleActorDropGeneralSettingArrayLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0
  System_String_o *v10; // x21
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_List_object__o *v12; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  Il2CppObject *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4D2BA45 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ScriptableObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ScriptableObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ScriptableObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_5385/*"DropTimingAdjustData"*/);
    sub_1C94098(&StringLiteral_5384/*"DropPositionRandomData"*/);
    byte_4D2BA45 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  v10 = ActorFolderName_41442140;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_41442140,
                         (System_String_o *)StringLiteral_5385/*"DropTimingAdjustData"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ScriptableObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ScriptableObject___ctor__);
    if ( !v12 )
      goto LABEL_28;
    items = v12->fields._items;
    v22 = Method_System_Collections_Generic_List_ScriptableObject__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_28;
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        AssetObject_object,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v24[4] = (Il2CppClass *)AssetObject_object;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)AssetObject_object, v15, v16, v17, v18, v19, v20);
    }
  }
  v25 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v10,
          (System_String_o *)StringLiteral_5384/*"DropPositionRandomData"*/,
          (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0);
  if ( v13 )
  {
    if ( v12
      || (v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ScriptableObject__TypeInfo),
          System_Collections_Generic_List_object____ctor(
            v12,
            (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ScriptableObject___ctor__),
          v12) )
    {
      v32 = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_ScriptableObject__Add__;
      ++v12->fields._version;
      if ( v32 )
      {
        v34 = v12->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v25,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &v32->obj.klass + v34;
          v12->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
        }
        return (UnityEngine_ScriptableObject_array *)System_Collections_Generic_List_object___ToArray(
                                                       v12,
                                                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
      }
    }
LABEL_28:
    sub_1C942F0(v13, v14);
  }
  if ( !v12 )
    return 0;
  return (UnityEngine_ScriptableObject_array *)System_Collections_Generic_List_object___ToArray(
                                                 v12,
                                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ScriptableObject__ToArray__);
}


BattleDropPointAdjustSetting_o *ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA40 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
BattleDropPointAdjustSetting_o *ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0

  if ( (byte_4D2BA41 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_5383/*"DropPointAdjustData"*/);
    byte_4D2BA41 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleDropPointAdjustSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                             this,
                                             ActorFolderName_41442140,
                                             (System_String_o *)StringLiteral_5383/*"DropPointAdjustData"*/,
                                             (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGauge(
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA3A & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  return ServantAssetLoadManager__LoadBattlePointGaugeLocal(
           (ServantAssetLoadManager_o *)Instance,
           battlePointId,
           parent,
           v7);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_String_o *GaugeAssetPath; // x0
  Il2CppObject *AssetObject_object; // x20

  if ( (byte_4D2BA3B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&StringLiteral_3126/*"BattlePointGauge"*/);
    byte_4D2BA3B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v8);
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return 0;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         GaugeAssetPath,
                         (System_String_o *)StringLiteral_3126/*"BattlePointGauge"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52598436(
                                       AssetObject_object,
                                       parent,
                                       (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
}


BattleServantParamSetting_o *ServantAssetLoadManager__LoadBattleServantParamSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA42 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamSetting_o *ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0

  if ( (byte_4D2BA43 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_3132/*"BattleServantParamSettingData"*/);
    byte_4D2BA43 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleServantParamSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                          this,
                                          ActorFolderName_41442140,
                                          (System_String_o *)StringLiteral_3132/*"BattleServantParamSettingData"*/,
                                          (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
}


void ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0);
}


void ServantAssetLoadManager__LoadNoblePhantasm(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w3
  int32_t v16; // w6
  UnityEngine_MonoBehaviour_o *v17; // x24
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_4D2BA1C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA1C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v14);
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          (ServantAssetLoadManager_o *)Instance,
                                          parent,
                                          svtId,
                                          v15,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          v16,
                                          callback,
                                          v19);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164(v17, Manager__loadNoblePhantasmCoroutine, 0);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9F1 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           v9);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *ExecutingTdInfo; // x0
  __int64 v10; // x1
  int32_t RandomSeqIdEachLimit; // w0
  System_String_o *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  int32_t groupSeqId; // [xsp+18h] [xbp-38h] BYREF
  int32_t MasterKind_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D2B9F2 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&BattleSequenceManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&StringLiteral_9536/*"NoblePhantasm/"*/);
    byte_4D2B9F2 = 1;
  }
  entity = 0;
  groupSeqId = 0;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleSequenceManager__SafeGetExecutingTdInfo(0);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  MasterKind_k__BackingField = ExecutingTdInfo->fields._MasterKind_k__BackingField;
  if ( MasterKind_k__BackingField > 0 )
    goto LABEL_18;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          ExecutingTdInfo,
          &entity,
          treasureDeviceId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    MasterKind_k__BackingField = treasureDeviceId;
    goto LABEL_18;
  }
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)TreasureDvcEntity__IsRandomTD(
                                                                          (TreasureDvcEntity_o *)entity,
                                                                          0),
        !entity) )
  {
LABEL_23:
    sub_1C942F0(ExecutingTdInfo, v10);
  }
  if ( ((unsigned __int8)ExecutingTdInfo & 1) != 0 )
    RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                             (TreasureDvcEntity_o *)entity,
                             limit,
                             &groupSeqId,
                             0,
                             0);
  else
    RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0);
  MasterKind_k__BackingField = RandomSeqIdEachLimit;
LABEL_18:
  v12 = System_Int32__ToString((int32_t)&MasterKind_k__BackingField, 0);
  v13 = System_String__Concat_64417744((System_String_o *)StringLiteral_9536/*"NoblePhantasm/"*/, v12, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v13, 0) )
  {
    groupSeqId = 10 * (MasterKind_k__BackingField / 10);
    v14 = System_Int32__ToString((int32_t)&groupSeqId, 0);
    v13 = System_String__Concat_64417744((System_String_o *)StringLiteral_9536/*"NoblePhantasm/"*/, v14, 0);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v13,
                                       name,
                                       (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        bool isShiftOrTransform,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int Weapon_k__BackingField; // w22
  int WeaponEffectId_k__BackingField; // w22
  int32_t EffectFolder_k__BackingField; // w23
  int32_t CameraId_k__BackingField; // w22
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x21
  int32_t v18; // w22
  int32_t BattlePointId_k__BackingField; // w20

  if ( (byte_4D2B9C8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9C8 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadServant(args, dlOnly, (const MethodInfo *)isShiftOrTransform);
  if ( !args )
LABEL_26:
    sub_1C942F0(Item, v8);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v9);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadWeaponEffect(
      WeaponEffectId_k__BackingField,
      EffectFolder_k__BackingField,
      dlOnly,
      v10);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v9);
  ServantAssetLoadManager__preloadFromDeckServant(
    args->fields._deckSvt_k__BackingField,
    args->fields._OriginalDeckSvt_k__BackingField,
    dlOnly,
    isShiftOrTransform,
    v15);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v18 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v18,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v18,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Item->klass->vtable[10].methodPtr)(
          Item,
          dlOnly,
          Item->klass->vtable[10].method);
      }
      ++v18;
    }
    while ( v18 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadBattlePointGauge(BattlePointId_k__BackingField, dlOnly, v16);
}


void ServantAssetLoadManager__PreloadBattlePointGauge(int32_t battlePointId, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *GaugeAssetPath; // x20
  const MethodInfo *v8; // x4

  if ( (byte_4D2BA39 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA39 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    goto LABEL_9;
  if ( BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
    return;
  GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
LABEL_9:
    sub_1C942F0(Master_object, v6);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Master_object, GaugeAssetPath, dlOnly, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__PreloadShadowEffectLocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B9E7 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9E7 = 1;
  }
  effectPath = 0;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, (const MethodInfo *)dlOnly) )
    ServantAssetLoadManager__setLoadList(this, effectPath, dlOnly, 0, v7);
}


bool ServantAssetLoadManager__SetNeedDownloadList(System_String_o *usmPath, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  bool IsExistAssetStorage; // w21
  const MethodInfo *v8; // x4

  if ( (byte_4D2B9FA & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  IsExistAssetStorage = AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, usmPath, 0);
  if ( IsExistAssetStorage )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, usmPath, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( Instance )
      {
        ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, usmPath, dlOnly, 0, v8);
        return IsExistAssetStorage;
      }
LABEL_10:
      sub_1C942F0(Instance, v6);
    }
  }
  return IsExistAssetStorage;
}


void ServantAssetLoadManager__ShowAssetNotFoundError(
        System_String_o *path,
        bool skipException,
        const MethodInfo *method)
{
  if ( (byte_4D2B9C5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_6120/*"ErrCode:002015\n指定のグループ又はIDのリソースが存在しません。\n[ resource path:"*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2B9C5 = 1;
  }
  System_String__Concat_64456008((System_String_o *)StringLiteral_6120/*"ErrCode:002015\n指定のグループ又はIDのリソースが存在しません。\n[ resource path:"*/, path, (System_String_o *)StringLiteral_16112/*"]"*/, 0);
}


void ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2BA19 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v7);
}


bool ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(
        ServantAssetArgs_o *args,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  int32_t DisplayType_k__BackingField; // w20
  NpcServantDisplayTypeDetailMaster_o *v14; // x21
  char BattleCommonEffectPath; // w0
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B9E9 & 1) == 0 )
  {
    sub_1C94098(&BattleEffectUtility_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2B9E9 = 1;
  }
  entity = 0;
  *effectPath = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)effectPath, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  v14 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0);
  if ( !v14 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(v14, &entity, DisplayType_k__BackingField, (int32_t)Master_object, 0);
  BattleCommonEffectPath = (char)entity;
  if ( !entity )
    return BattleCommonEffectPath & 1;
  Master_object = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__get_IsDefaultEffectId(entity, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
LABEL_11:
    BattleCommonEffectPath = 0;
    return BattleCommonEffectPath & 1;
  }
  if ( !entity )
LABEL_17:
    sub_1C942F0(Master_object, v11);
  effectId = entity->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPath = BattleEffectUtility__TryGetBattleCommonEffectPath(effectPath, effectId, 0);
  return BattleCommonEffectPath & 1;
}


bool ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  ServantAssetLoadManager_c *v7; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v9; // x0
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21

  if ( (byte_4D2B9CB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9CB = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  IsKeepAssetAvailable = ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v4);
  if ( IsKeepAssetAvailable )
  {
    Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      v6 = *(System_Collections_Generic_Dictionary_object__object__o **)(Instance[1].fields.m_CachedPtr + 8);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
      if ( v6 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v6,
                (Il2CppObject *)Instance,
                (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v7 = ServantAssetLoadManager_TypeInfo;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v7 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v9 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v9 = ServantAssetLoadManager_TypeInfo;
        }
        v10 = (System_Collections_Generic_Dictionary_object__object__o *)v9->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0);
        if ( v10 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v10,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++HIDWORD(Instance->fields.nobleSequenceData);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1C942F0(Instance, v4);
  }
  return IsKeepAssetAvailable;
}


void ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4D2BA20 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__);
    byte_4D2BA20 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v4.fields._current.fields.value, 0);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__UnloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool isShiftOrTransform,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v15; // w21
  int32_t BattlePointId_k__BackingField; // w19

  if ( (byte_4D2B9CA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9CA = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadServant(args, (const MethodInfo *)isShiftOrTransform);
  if ( !args )
LABEL_26:
    sub_1C942F0(Item, v6);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v6);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v7);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v6);
  ServantAssetLoadManager__unloadFromDeckServant(
    args->fields._deckSvt_k__BackingField,
    args->fields._OriginalDeckSvt_k__BackingField,
    isShiftOrTransform,
    v12);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v15 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v15,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v15,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_26;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[11].methodPtr)(
          Item,
          Item->klass->vtable[11].method);
      }
      ++v15;
    }
    while ( v15 < skillList_k__BackingField->fields._size );
  }
  BattlePointId_k__BackingField = args->fields._BattlePointId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__UnloadBattlePointGauge(BattlePointId_k__BackingField, v13);
}


void ServantAssetLoadManager__UnloadBattlePointGauge(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA3C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__UnloadBattlePointGaugeLocal((ServantAssetLoadManager_o *)Instance, battlePointId, v5);
}


void ServantAssetLoadManager__UnloadBattlePointGaugeLocal(
        ServantAssetLoadManager_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *GaugeAssetPath; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D2BA3D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BattlePointMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2BA3D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattlePointMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v6);
  if ( !BattlePointMaster__IsHideGaugeAllTime((BattlePointMaster_o *)Master_object, battlePointId, 0) )
  {
    GaugeAssetPath = BattlePointMaster__GetGaugeAssetPath(battlePointId, 0);
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, GaugeAssetPath, v8);
  }
}


void ServantAssetLoadManager__UnloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_4D2BA2F & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2BA2F = 1;
  }
  if ( commandCodeIds )
  {
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C942F8(this);
        v7 = commandCodeIds->m_Items[v6];
        if ( v7 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v7,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__unloadTargetPathAssetLocal(v4, CommandCodeFolderName, v9);
          LODWORD(max_length) = commandCodeIds->max_length;
        }
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void ServantAssetLoadManager__UnloadShadowEffectLocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B9E8 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9E8 = 1;
  }
  effectPath = 0;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, method) )
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, effectPath, v5);
}


void ServantAssetLoadManager___GetAheadBg_b__159_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *bgAssetDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4D2BA48 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4D2BA48 = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v12 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1C942F0(bgAssetDataList, data);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


void ServantAssetLoadManager___preloadCommandSpellAnyVoiceLocal_b__80_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void ServantAssetLoadManager___preloadServantVoicelocal_b__72_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void ServantAssetLoadManager___preloadServantVoicelocal_b__72_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void ServantAssetLoadManager__changeChocoDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x23
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v4; // x25
  unsigned __int64 v5; // x19
  UnityEngine_Object_o *v6; // x20
  float v7; // s13
  float v8; // s14
  float v9; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v12; // x20
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_GameObject_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x23
  unsigned __int64 v19; // x27
  UnityEngine_Object_o *v20; // x24
  int v21; // w8
  UnityEngine_GameObject_o *v22; // x25
  unsigned int v23; // w19
  UnityEngine_GameObject_c **v24; // x8
  UnityEngine_Material_o *v25; // x26
  UnityEngine_Shader_o *v26; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float v36; // s8
  UnityEngine_GameObject_o *v37; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v41; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v42; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4D2B9ED & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_16225/*"_ClipSharpnessY"*/);
    sub_1C94098(&StringLiteral_16229/*"_Color"*/);
    sub_1C94098(&StringLiteral_21282/*"joint_all_Base"*/);
    sub_1C94098(&StringLiteral_16210/*"_ChocoTex"*/);
    sub_1C94098(&StringLiteral_25043/*"weapon"*/);
    sub_1C94098(&StringLiteral_12891/*"Shaders/ChocoMap"*/);
    sub_1C94098(&StringLiteral_16459/*"_Use_alphawidth"*/);
    sub_1C94098(&StringLiteral_4918/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    sub_1C94098(&StringLiteral_17408/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C94098(&StringLiteral_16175/*"_AddColor"*/);
    byte_4D2B9ED = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                      v2,
                                      (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v4 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)klass )
      goto LABEL_54;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v5 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16229/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16229/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
LABEL_53:
    sub_1C942F0(obj, method);
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16175/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( obj )
    {
      v49 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, 0);
      v9 = v49.fields.r;
      v8 = v49.fields.g;
      v7 = v49.fields.b;
      a = v49.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
LABEL_13:
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4918/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12891/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21282/*"joint_all_Base"*/, 0, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v15);
  v17 = v4[1].klass;
  if ( (int)v17 >= 1 )
  {
    v18 = obj;
    v19 = 0;
    v37 = v4;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_54;
      v20 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v19);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v20, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v20, 0);
        if ( !obj )
          goto LABEL_53;
        v21 = (int)obj[1].klass;
        v22 = obj;
        if ( v21 >= 1 )
          break;
      }
LABEL_41:
      v4 = v37;
      ++v19;
      LODWORD(v17) = v37[1].klass;
      if ( (__int64)v19 >= (int)v17 )
        return;
    }
    v23 = 0;
    while ( v23 < v21 )
    {
      v24 = &v22->klass + (int)v23;
      v25 = (UnityEngine_Material_o *)v24[4];
      if ( !v25 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v24[4], 0);
      if ( !v18 )
        goto LABEL_53;
      v26 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))v18[1].klass)(
                                      v18[2].fields.m_CachedPtr,
                                      obj,
                                      v12,
                                      v18[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v25, v26, 0);
      v46.fields.b = b;
      v46.fields.a = value;
      v46.fields.r = r;
      v46.fields.g = g;
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16229/*"_Color"*/, v46, 0);
      v47.fields.a = a;
      v47.fields.r = v9;
      v47.fields.g = v8;
      v47.fields.b = v7;
      UnityEngine_Material__SetColor(v25, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, v47, 0);
      UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_16210/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17408/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_25043/*"weapon"*/, 0) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v20,
                                            0);
        if ( !obj )
          goto LABEL_53;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0);
        if ( !NodeFromName )
          goto LABEL_53;
        v44 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, position, 0);
        x = v44.fields.x;
        y = v44.fields.y;
        z = v44.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0);
        v30 = x - localPosition.fields.x;
        v31 = y - localPosition.fields.y;
        v32 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v42, (UnityEngine_Renderer_o *)v20, 0);
        v33 = v30 + v42.fields.m_Center.fields.x;
        v34 = v31 + v42.fields.m_Center.fields.y;
        v35 = v32 + v42.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v42, (UnityEngine_Renderer_o *)v20, 0);
        v41.fields.m_Center.fields.x = v33;
        v41.fields.m_Center.fields.y = v34;
        v41.fields.m_Center.fields.z = v35;
        *(float32x2_t *)&v41.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v42.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v42.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v41.fields.m_Extents.fields.z = (float)(v42.fields.m_Extents.fields.z + v42.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v20, &v41, 0);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v20, NodeFromName, 0);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v42, (UnityEngine_Renderer_o *)v20, 0);
        v36 = v42.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v42, (UnityEngine_Renderer_o *)v20, 0);
        UnityEngine_Material__SetFloat(
          v25,
          (System_String_o *)StringLiteral_16225/*"_ClipSharpnessY"*/,
          v36 - v42.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71976444(
                                          v25,
                                          (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v25, (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/, 1.0, 0);
      v21 = (int)v22[1].klass;
      if ( (int)++v23 >= v21 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C942F8(obj);
  }
}


void ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v4; // x21
  float a; // s9
  float v6; // s8
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  float v9; // s13
  float v10; // s14
  float v11; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v15; // x20
  const MethodInfo *v16; // x1
  Il2CppObject *object; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_GameObject_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x9
  unsigned __int64 v21; // x28
  UnityEngine_GameObject_o *v22; // x26
  UnityEngine_Object_o *v23; // x23
  int v24; // w8
  UnityEngine_GameObject_o *v25; // x23
  unsigned int v26; // w19
  UnityEngine_GameObject_c **v27; // x8
  UnityEngine_Material_o *v28; // x24
  UnityEngine_Shader_o *v29; // x0
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4D2B9EE & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_16229/*"_Color"*/);
    sub_1C94098(&StringLiteral_16210/*"_ChocoTex"*/);
    sub_1C94098(&StringLiteral_4917/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C94098(&StringLiteral_12891/*"Shaders/ChocoMap"*/);
    sub_1C94098(&StringLiteral_16459/*"_Use_alphawidth"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C94098(&StringLiteral_16175/*"_AddColor"*/);
    byte_4D2B9EE = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                      v2,
                                      (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  klass = obj[1].klass;
  v4 = obj;
  a = 1.0;
  v6 = 0.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)klass )
      goto LABEL_45;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v7 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16229/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16229/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
  if ( !obj )
LABEL_44:
    sub_1C942F0(obj, method);
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16175/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v8, 0);
    if ( !obj )
      goto LABEL_44;
    v33 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, 0);
    v6 = v33.fields.r;
    v9 = v33.fields.g;
    v10 = v33.fields.b;
    v11 = v33.fields.a;
  }
  else
  {
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
  }
LABEL_13:
  v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4917/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12891/*"Shaders/ChocoMap"*/,
             (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v16);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                      v2,
                                      (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v19 = obj[1].klass;
  v20 = obj;
  if ( (int)v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        goto LABEL_45;
      v22 = v20;
      v23 = (UnityEngine_Object_o *)*((_QWORD *)&v20[1].monitor + v21);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v23, 0);
        if ( !obj )
          goto LABEL_44;
        v24 = (int)obj[1].klass;
        v25 = obj;
        if ( v24 >= 1 )
          break;
      }
LABEL_32:
      LODWORD(v19) = v22[1].klass;
      ++v21;
      v20 = v22;
      if ( (__int64)v21 >= (int)v19 )
        return;
    }
    v26 = 0;
    while ( v26 < v24 )
    {
      v27 = &v25->klass + (int)v26;
      v28 = (UnityEngine_Material_o *)v27[4];
      if ( !v28 )
        goto LABEL_44;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v27[4], 0);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v29 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))ReplaceChocoShaderFunc->fields.invoke_impl)(
                                      ReplaceChocoShaderFunc->fields.method_code,
                                      obj,
                                      v15,
                                      ReplaceChocoShaderFunc->fields.method);
      UnityEngine_Material__set_shader(v28, v29, 0);
      v30.fields.r = r;
      v30.fields.g = g;
      v30.fields.b = b;
      v30.fields.a = a;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16229/*"_Color"*/, v30, 0);
      v31.fields.r = v6;
      v31.fields.g = v9;
      v31.fields.b = v10;
      v31.fields.a = v11;
      UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, v31, 0);
      UnityEngine_Material__SetTexture(v28, (System_String_o *)StringLiteral_16210/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71976444(
                                          v28,
                                          (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v28, (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/, 1.0, 0);
      v24 = (int)v25[1].klass;
      if ( (int)++v26 >= v24 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1C942F8(obj);
  }
}


void ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x22
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v4; // x23
  unsigned __int64 v5; // x19
  UnityEngine_Object_o *v6; // x20
  float v7; // s13
  float v8; // s14
  float v9; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_GameObject_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x22
  unsigned __int64 v18; // x29
  UnityEngine_Object_o *v19; // x23
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x24
  unsigned int v22; // w27
  UnityEngine_GameObject_c **v23; // x8
  UnityEngine_Material_o *v24; // x25
  UnityEngine_Shader_o *v25; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v29; // s8
  float v30; // s9
  float v31; // s10
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float v35; // s8
  UnityEngine_GameObject_o *v36; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v40; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v41; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4D2B9EC & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_16225/*"_ClipSharpnessY"*/);
    sub_1C94098(&StringLiteral_4916/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/);
    sub_1C94098(&StringLiteral_16229/*"_Color"*/);
    sub_1C94098(&StringLiteral_21282/*"joint_all_Base"*/);
    sub_1C94098(&StringLiteral_25043/*"weapon"*/);
    sub_1C94098(&StringLiteral_16459/*"_Use_alphawidth"*/);
    sub_1C94098(&StringLiteral_17408/*"body"*/);
    obj = (UnityEngine_GameObject_o *)sub_1C94098(&StringLiteral_16175/*"_AddColor"*/);
    byte_4D2B9EC = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                      v2,
                                      (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v4 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)klass )
      goto LABEL_54;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v4[1].klass;
    if ( (__int64)++v5 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16229/*"_Color"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16229/*"_Color"*/, 0);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
  if ( !obj )
LABEL_53:
    sub_1C942F0(obj, method);
  if ( UnityEngine_Material__HasProperty_71976444(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16175/*"_AddColor"*/,
         0) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v6, 0);
    if ( obj )
    {
      v48 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, 0);
      v9 = v48.fields.r;
      v8 = v48.fields.g;
      v7 = v48.fields.b;
      a = v48.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
LABEL_13:
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4916/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0);
  transform = UnityEngine_GameObject__get_transform(v2, 0);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_21282/*"joint_all_Base"*/, 0, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v14);
  v16 = v4[1].klass;
  if ( (int)v16 >= 1 )
  {
    v17 = obj;
    v18 = 0;
    v36 = v4;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        goto LABEL_54;
      v19 = (UnityEngine_Object_o *)*((_QWORD *)&v4[1].monitor + v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v19, 0, 0);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v19 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v19, 0);
        if ( !obj )
          goto LABEL_53;
        v20 = (int)obj[1].klass;
        v21 = obj;
        if ( v20 >= 1 )
          break;
      }
LABEL_41:
      v4 = v36;
      ++v18;
      LODWORD(v16) = v36[1].klass;
      if ( (__int64)v18 >= (int)v16 )
        return;
    }
    v22 = 0;
    while ( v22 < v20 )
    {
      v23 = &v21->klass + (int)v22;
      v24 = (UnityEngine_Material_o *)v23[4];
      if ( !v24 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v23[4], 0);
      if ( !v17 )
        goto LABEL_53;
      v25 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, intptr_t))v17[1].klass)(
                                      v17[2].fields.m_CachedPtr,
                                      obj,
                                      v12,
                                      v17[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v24, v25, 0);
      v45.fields.b = b;
      v45.fields.a = value;
      v45.fields.r = r;
      v45.fields.g = g;
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16229/*"_Color"*/, v45, 0);
      v46.fields.a = a;
      v46.fields.r = v9;
      v46.fields.g = v8;
      v46.fields.b = v7;
      UnityEngine_Material__SetColor(v24, (System_String_o *)StringLiteral_16175/*"_AddColor"*/, v46, 0);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17408/*"body"*/, 0) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_25043/*"weapon"*/, 0) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v19,
                                            0);
        if ( !obj )
          goto LABEL_53;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0);
        if ( !NodeFromName )
          goto LABEL_53;
        v43 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, position, 0);
        x = v43.fields.x;
        y = v43.fields.y;
        z = v43.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0);
        v29 = x - localPosition.fields.x;
        v30 = y - localPosition.fields.y;
        v31 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v19, 0);
        v32 = v29 + v41.fields.m_Center.fields.x;
        v33 = v30 + v41.fields.m_Center.fields.y;
        v34 = v31 + v41.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v19, 0);
        v40.fields.m_Center.fields.x = v32;
        v40.fields.m_Center.fields.y = v33;
        v40.fields.m_Center.fields.z = v34;
        *(float32x2_t *)&v40.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v41.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v41.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v40.fields.m_Extents.fields.z = (float)(v41.fields.m_Extents.fields.z + v41.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v19, &v40, 0);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v19, NodeFromName, 0);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v19, 0);
        v35 = v41.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v19, 0);
        UnityEngine_Material__SetFloat(
          v24,
          (System_String_o *)StringLiteral_16225/*"_ClipSharpnessY"*/,
          v35 - v41.fields.m_Extents.fields.y,
          0);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_71976444(
                                          v24,
                                          (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/,
                                          0);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v24, (System_String_o *)StringLiteral_16459/*"_Use_alphawidth"*/, 1.0, 0);
      v20 = (int)v21[1].klass;
      if ( (int)++v22 >= v20 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1C942F8(obj);
  }
}


bool ServantAssetLoadManager__checkBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4D2BA15 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v12);
  return ServantAssetLoadManager__checkBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           isNp,
           v13);
}


// local variable allocation has failed, the output may be wrong!
bool ServantAssetLoadManager__checkBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v14; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  int32_t v18; // w9
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 *v21; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2BA16 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&StringLiteral_9540/*"NoblePhantasm_"*/);
    sub_1C94098(&StringLiteral_25315/*"{0:D0}_{1}"*/);
    sub_1C94098(&StringLiteral_12815/*"Servants_"*/);
    byte_4D2BA16 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v14);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v18 = overwriteSvtVoiceId;
  else
    v18 = VoiceId;
  v28 = VoicePrefix;
  v29 = v18;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v20 = System_String__Format_64459052((System_String_o *)StringLiteral_25315/*"{0:D0}_{1}"*/, v19, (Il2CppObject *)voiceTypeId, 0);
  if ( SvtEntity )
  {
    v21 = &StringLiteral_9540/*"NoblePhantasm_"*/;
    v22 = v20;
    if ( !isNp )
      v21 = &StringLiteral_12815/*"Servants_"*/;
    v23 = (System_String_o *)*v21;
    v24 = System_Int32__ToString((int32_t)&v29, 0);
    v25 = System_String__Concat_64417744(v23, v24, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    return SoundManager__checkServantVoice(v25, v22, 0, 0);
  }
  else
  {
    return 0;
  }
}


bool ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4D2B9C2 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v2);
}


bool ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4D2B9C3 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4D2B9C3 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1C942F0(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GrandQuestFolderBoardItem_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D2B9AC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B9AC = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.svtmaster,
      (int32_t)MasterData_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v12 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.svtlimitmaster, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (GrandQuestFolderBoardItem_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C942F0(Instance, v4);
  v21 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (GrandQuestFolderBoardItem_c *)v21;
  sub_1C9403C(p_svtlimitaddmaster, (int32_t)v21, v22, v23, v24, v25, v26, v27);
}


void ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4D2B9C0 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  ServantAssetLoadManager__clearServantlistlocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__clearServantlistlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_string__o *downloadlist; // x8
  int32_t v7; // w2
  int v8; // w9
  struct System_Collections_Generic_List_string__o *loadedList; // x8
  int32_t v10; // w2
  int v11; // w9

  v2 = this;
  if ( (byte_4D2B9C1 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4D2B9C1 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_13;
  size = loadlist->fields._size;
  v5 = loadlist->fields._version + 1;
  loadlist->fields._size = 0;
  loadlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadlist->fields._items, 0, size, 0);
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
    goto LABEL_13;
  v7 = downloadlist->fields._size;
  v8 = downloadlist->fields._version + 1;
  downloadlist->fields._size = 0;
  downloadlist->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)downloadlist->fields._items, 0, v7, 0);
  loadedList = v2->fields.loadedList;
  if ( !loadedList )
LABEL_13:
    sub_1C942F0(this, method);
  v10 = loadedList->fields._size;
  v11 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v10, 0);
  v2->fields.soundCount = 0;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        int32_t effectId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  System_String_o *v10; // x0
  Il2CppObject *v11; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BA21 & 1) == 0 )
  {
    sub_1C94098(&BattleEffectUtility_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C94098(&StringLiteral_19038/*"effect/ef_shadow0"*/);
    byte_4D2BA21 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0, 1, 1.0, 0);
    if ( EffectObjectSafe )
    {
      v9 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0);
      return v9;
    }
LABEL_22:
    sub_1C942F0(EffectObjectSafe, v8);
  }
  v16 = tp + 1;
  v10 = System_Int32__ToString((int32_t)&v16, 0);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_64417744(
                                                   (System_String_o *)StringLiteral_19038/*"effect/ef_shadow0"*/,
                                                   v10,
                                                   0);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v11 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v11,
             (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v13 = Item;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v11,
                                                     (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v13 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v11,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v13,
                                       (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void ServantAssetLoadManager__endloadList(ServantAssetLoadManager_o *this, AssetData_o *data, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_4D2B9C7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4D2B9C7 = 1;
  }
  if ( data )
  {
    loadlist = this->fields.loadlist;
    if ( !loadlist )
      goto LABEL_13;
    name = (Il2CppObject *)data->fields.name;
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1C942F0(loadlist, data);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


System_String_o *ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4D2B9DC & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    byte_4D2B9DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_12808/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4D2B9DB & 1) == 0 )
  {
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    byte_4D2B9DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0);
  if ( !Instance )
    sub_1C942F0(LimitCountByImageLimitCostumeIn, v7);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v8);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_12808/*"Servants/"*/, BattleChrId, 0);
}


System_String_o *ServantAssetLoadManager__getActorFolderName_41442140(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B9DD & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    byte_4D2B9DD = 1;
  }
  v5 = svtId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Concat((Il2CppObject *)StringLiteral_12808/*"Servants/"*/, v3, 0);
}


Il2CppObject *ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_3244570 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0);
  if ( result )
    return AssetData__GetObject_object__51893132(
             (AssetData_o *)result,
             file,
             (const MethodInfo_317D38C *)method->rgctx_data->_1_AssetData_GetObject_T_);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantAssetLoadManager__getBattleChrId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1C942F0(0, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0);
}


System_String_o *ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_4D2BA24 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12809/*"Servants/Camera/"*/);
    byte_4D2BA24 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_12809/*"Servants/Camera/"*/, v2, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B9AF & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_12811/*"Servants/Commands/"*/);
    byte_4D2B9AF = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12811/*"Servants/Commands/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B9AE & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_12811/*"Servants/Commands/"*/);
    byte_4D2B9AE = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12811/*"Servants/Commands/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getNameEffectPath(int32_t enemyNameEffectId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4D2BA37 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5856/*"Effect/BattleCommon/NameEffect/"*/);
    byte_4D2BA37 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_64417744((System_String_o *)StringLiteral_5856/*"Effect/BattleCommon/NameEffect/"*/, v2, 0);
}


int32_t ServantAssetLoadManager__getSkillCutInId(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( skillInfo )
    return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
             skillInfo,
             skillInfo->klass->vtable._9_getCutInId.method);
  else
    return 0;
}


System_String_o *ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BA05 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_5880/*"Effect/CutIn/Skill/{0}"*/);
    byte_4D2BA05 = 1;
  }
  v6 = cutInId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_5880/*"Effect/CutIn/Skill/{0}"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B9B7 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_12814/*"Servants/Status/"*/);
    byte_4D2B9B7 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12814/*"Servants/Status/"*/, v4, 0);
}


System_String_o *ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B9B6 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_12814/*"Servants/Status/"*/);
    byte_4D2B9B6 = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12814/*"Servants/Status/"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_4D2B9AD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4D2B9AD = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1C942F0(0, v5);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1C942F0(0, v7);
  if ( ServantLimitAddMaster__TryGetEntity(svtlimitaddmaster, &entity, svtId, limitCnt, 0) )
    return entity;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *ServantAssetLoadManager__getSvtLimitEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantLimitMaster_o *svtlimitmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitmaster = this->fields.svtlimitmaster;
  if ( !svtlimitmaster )
    sub_1C942F0(0, v7);
  return ServantLimitMaster__GetEntity(svtlimitmaster, svtId, limitCnt, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantAssetLoadManager__getVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0);
  if ( !this->fields.svtlimitaddmaster )
    sub_1C942F0(SvtVoiceId, v8);
  return ServantLimitAddMaster__getVoiceId(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantAssetLoadManager__getVoicePrefix(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0);
  if ( !this->fields.svtlimitaddmaster )
    sub_1C942F0(SvtVoiceId, v8);
  return ServantLimitAddMaster__getVoicePrefix(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0);
}


bool ServantAssetLoadManager__get_IsRetryTransition(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  return this->fields._IsRetryTransition_k__BackingField;
}


int32_t ServantAssetLoadManager__get_retryStatus(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  return this->fields._retryStatus_k__BackingField;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadActorEffectFromActor(
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4D2B9F3 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v9);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           v10,
           name,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *ServantAssetLoadManager__loadActorEffectlocalFromActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *BattleChrId; // x0
  System_String_o *v11; // x1

  if ( (byte_4D2B9F4 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    byte_4D2B9F4 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v11 = System_String__Concat_64417744((System_String_o *)StringLiteral_12808/*"Servants/"*/, BattleChrId, 0);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v11,
                                       name,
                                       (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA0A & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v7);
  return ServantAssetLoadManager__loadActorMotionlocal(
           (ServantAssetLoadManager_o *)Instance,
           parent,
           v8,
           weapongroup,
           v9);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  Il2CppObject *AssetObject_object; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x20
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  v18 = weapongroup;
  if ( (byte_4D2BA0B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&StringLiteral_21861/*"motion"*/);
    sub_1C94098(&StringLiteral_12812/*"Servants/Motion/"*/);
    byte_4D2BA0B = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v18, 0);
  v8 = System_String__Concat_64417744((System_String_o *)StringLiteral_12812/*"Servants/Motion/"*/, v7, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v8,
                         (System_String_o *)StringLiteral_21861/*"motion"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v12 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_18;
  v13 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4D25F19 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4D25F21 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F21 = 1;
  }
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v15, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4D25F1E )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1C942F0(transform, v11);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v12;
}


UnityEngine_TextAsset_o *ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9EF & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__loadAnimEventslocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0

  if ( (byte_4D2B9F0 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_19563/*"fbxevent"*/);
    byte_4D2B9F0 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1C942F0(ActorFolderName_41442140, ActorFolderName_41442140);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_41442140,
                                      (System_String_o *)StringLiteral_19563/*"fbxevent"*/,
                                      (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleActor(
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4D2B9E3 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v12);
  return ServantAssetLoadManager__loadBattleActorlocal(
           (ServantAssetLoadManager_o *)Instance,
           assetPath,
           parent,
           svtId,
           limitCount,
           isForce,
           v13);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *ActorFolderName_41442140; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Transform_o *v25; // x19
  UnityEngine_Transform_o *v26; // x19

  if ( (byte_4D2B9E4 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_18053/*"chr"*/);
    byte_4D2B9E4 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_41442140;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)assetPath, (int32_t)ActorFolderName_41442140, v14, v15, v16, v17, v18, v19);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_18053/*"chr"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_21;
  v23 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !parent )
    goto LABEL_21;
  v24 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !v24 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0);
  v25 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4D25F21 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F21 = 1;
  }
  if ( !v25 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v25, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4D25F1E )
  {
    transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v26 )
LABEL_21:
    sub_1C942F0(transform, v22);
  UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v23;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA01 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v7);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51893132; // x19

  if ( (byte_4D2BA02 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA02 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                AssetStorage,
                                name,
                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  else
    Object_object__51893132 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__51893132;
  else
    return 0;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCameraAction(
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA26 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA26 = 1;
  }
  if ( !cameraId )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  return ServantAssetLoadManager__loadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x0
  Il2CppObject *AssetObject_object; // x22
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x22
  UnityEngine_Transform_o *v13; // x19
  UnityEngine_Transform_o *v14; // x19

  if ( (byte_4D2BA27 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_17792/*"cameraAction"*/);
    byte_4D2BA27 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_17792/*"cameraAction"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !parent )
      goto LABEL_22;
    v12 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0);
    if ( !v12 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    v13 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4D25F21 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F21 = 1;
    }
    if ( !v13 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v13, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
    v14 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4D25F1E )
    {
      transform = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
    }
    if ( !v14 )
LABEL_22:
      sub_1C942F0(transform, v11);
    UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  return v9;
}


UITexture_o *ServantAssetLoadManager__loadCommandCard(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w3
  const MethodInfo *v11; // x5

  if ( (byte_4D2B9B2 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v9);
  return ServantAssetLoadManager__loadCommandCardlocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           v10,
           commandLimit,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *ServantAssetLoadManager__loadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v17; // w8
  UITexture_o *result; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B9B3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_17872/*"card_servant_"*/);
    byte_4D2B9B3 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v10);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v11, v12);
  v14 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v15 = System_String__Concat_64417744((System_String_o *)StringLiteral_17872/*"card_servant_"*/, v14, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v15,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v17 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v19 )
    {
      if ( !tex )
        sub_1C942F0(v19, v20);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
    }
    return tex;
  }
  return result;
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTexture(
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA2A & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_41461512(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v7);
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v11; // w8
  UITexture_o *result; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2BA2C & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_17776/*"c_{0:D7}"*/);
    byte_4D2BA2C = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v15 = commandCodeId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v9 = System_String__Format((System_String_o *)StringLiteral_17776/*"c_{0:D7}"*/, v8, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v9,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v11 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v13 )
    {
      if ( !tex )
        sub_1C942F0(v13, v14);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
    }
    return tex;
  }
  return result;
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTextureLocal_41461512(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v11; // w0
  const MethodInfo *v12; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2BA2D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BA2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_345DA68 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C942F0(Instance, v8);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v11, v12);
}


UITexture_o *ServantAssetLoadManager__loadCommandCodeTexture_41461780(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA2B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           commandCodeId,
           v7);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCommonEffect(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2B9F7 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v5);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  UnityEngine_Object_o *v5; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4D2B9F8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_19005/*"effect/"*/);
    byte_4D2B9F8 = 1;
  }
  v4 = System_String__Concat_64417744((System_String_o *)StringLiteral_19005/*"effect/"*/, name, 0);
  v5 = UnityEngine_Resources__Load(v4, 0);
  if ( v5 )
  {
    if ( (UnityEngine_GameObject_c *)v5->klass == UnityEngine_GameObject_TypeInfo )
      v6 = v5;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v6,
                                       (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9F5 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__loadEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *ServantAssetLoadManager__loadEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4D2B9F6 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B9F6 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0, 0);
  if ( v9 )
    return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
             (ServantAssetLoadManager_o *)v9,
             name,
             weapongroup,
             effectFolder,
             v10);
  else
    return (UnityEngine_GameObject_o *)Manager__loadCommonEffectlocal;
}


UIStandFigureR_o *ServantAssetLoadManager__loadFigureObject(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+10h] [xbp-20h]

  return StandFigureManager__CreateRenderPrefab_41427348(
           parent,
           svtId,
           limitCount,
           2,
           faceType,
           50,
           callbackFunc,
           0,
           -1,
           0,
           v7);
}


bool ServantAssetLoadManager__loadNobleName(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2B9BE & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v10);
  return ServantAssetLoadManager__loadNobleNamelocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           limit,
           treasureDvcId,
           v11);
}


// local variable allocation has failed, the output may be wrong!
bool ServantAssetLoadManager__loadNobleNamelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x25
  ServantLimitAddMaster_o *v15; // x26
  long double v16; // q0
  const MethodInfo *v17; // x2
  System_String_o *v18; // x21
  System_String_o *OverwriteTDFileName; // x0
  Il2CppObject *AssetObject_object; // x20
  int imageIndex; // w22
  __int64 v22; // x0
  System_String_o *v23; // x24
  __int64 v24; // x0
  System_String_o *NpNameFileSuffix; // x22
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x2
  ServantAssetLoadManager_o *v32; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  int v35; // s0 OVERLAPPED
  float v36; // s1
  float v37; // s2
  float v38; // s3
  unsigned int v39; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D2B9BF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_25354/*"{0}"*/);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_17873/*"card_servant_np"*/);
    byte_4D2B9BF = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v14 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0;
  if ( !v14 )
    goto LABEL_49;
  v15 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v14, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v15 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v15, &entity, svtId, limit, 0) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v13, v17);
    if ( !entity )
      goto LABEL_49;
    v18 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v18,
                           OverwriteTDFileName,
                           (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v23 = (System_String_o *)StringLiteral_17873/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1C6A12C(v16);
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C6A12C(v16);
      Instance = **(DataManager_o ***)(v24 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0) )
        v23 = System_String__Concat_64456008(v23, (System_String_o *)StringLiteral_16163/*"_"*/, NpNameFileSuffix, 0);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v32 = this;
        v31 = v23;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v28 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v27);
        v39 = (unsigned int)imageIndex >> 1;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        v30 = System_String__Format((System_String_o *)StringLiteral_25354/*"{0}"*/, v29, 0);
        v31 = System_String__Concat_64417744(v23, v30, 0);
        v32 = this;
        CommandCardLoadFolderName = v28;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v32,
                             CommandCardLoadFolderName,
                             v31,
                             (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_object = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
      v35 = 0;
      if ( (imageIndex & 1) != 0 )
        v36 = 0.0;
      else
        v36 = 0.5;
      v37 = 1.0;
      v38 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v35, 0);
      return 1;
    }
LABEL_49:
    sub_1C942F0(Instance, v13);
  }
  return 1;
}


void ServantAssetLoadManager__loadNoblePhantasm(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v11; // [xsp+0h] [xbp-20h]

  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          this,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v11);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0);
}


System_Collections_IEnumerator_o *ServantAssetLoadManager__loadNoblePhantasmCoroutine(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x25
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D2BA1D & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo);
    byte_4D2BA1D = 1;
  }
  v15 = sub_1C942E4(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 40) = parent;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v15 + 40), (int32_t)parent, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v15 + 48) = svtId;
  *(_DWORD *)(v15 + 64) = treasureDvcId;
  *(_DWORD *)(v15 + 68) = treasureDvcLv;
  *(_QWORD *)(v15 + 72) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v15 + 72), (int32_t)callback, v28, v29, v30, v31, v32, v33);
  return (System_Collections_IEnumerator_o *)v15;
}


void ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2BA06 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v7);
}


void ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_4D2BA07 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2BA07 = 1;
  }
  if ( skillInfo )
  {
    this = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, AssetLoader_LoadEndDataHandler_o *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                                          skillInfo,
                                          skillInfo->klass->vtable._9_getCutInId.method,
                                          callback,
                                          method);
    v6 = (int)this;
  }
  else
  {
    v6 = 0;
  }
  SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(this, v6, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SkillCutInPath, callback, 1, 0);
}


UITexture_o *ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9BA & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__loadStatusFacelocal((ServantAssetLoadManager_o *)Instance, tex, svtID, limit, v9);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *ServantAssetLoadManager__loadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v16; // w8
  UITexture_o *result; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B9BB & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&StringLiteral_23926/*"status_servant_"*/);
    byte_4D2B9BB = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v9);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v10, v11);
  v13 = System_Int32__ToString((int32_t)&LimitImageIndex, 0);
  v14 = System_String__Concat_64417744((System_String_o *)StringLiteral_23926/*"status_servant_"*/, v13, 0);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v14,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0, 0);
  result = 0;
  if ( !v16 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0, 0);
    if ( v18 )
    {
      if ( !tex )
        sub_1C942F0(v18, v19);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, const MethodInfo *))tex->klass->vtable._27_set_mainTexture.methodPtr)(
        tex,
        AssetObject_object,
        tex->klass->vtable._27_set_mainTexture.method);
    }
    return tex;
  }
  return result;
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9FB & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v9);
}


UnityEngine_GameObject_o *ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x0
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51893132; // x19
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectFolder;
  v14 = weapongroup;
  if ( (byte_4D2B9FC & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_5913/*"Effect/weapon/"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2B9FC = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v14, 0);
  v8 = System_String__Concat_64417744((System_String_o *)StringLiteral_5913/*"Effect/weapon/"*/, v7, 0);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v13, 0);
    v8 = System_String__Concat_64456008(v8, (System_String_o *)StringLiteral_1041/*"/"*/, v9, 0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0);
  if ( AssetStorage )
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                AssetStorage,
                                name,
                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  else
    Object_object__51893132 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0) )
    return (UnityEngine_GameObject_o *)Object_object__51893132;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__localStopVoice(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        float fadeoutTime,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_4D2BA1A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    byte_4D2BA1A = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0);
        return;
      }
    }
LABEL_9:
    sub_1C942F0(ActorVoice, *(_QWORD *)&uniqueId);
  }
}


SePlayer_o *ServantAssetLoadManager__playBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        bool isNp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2BA0E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v18);
  return ServantAssetLoadManager__playBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           volume,
           callback,
           uniqueId,
           0,
           isNp,
           v20);
}


SePlayer_o *ServantAssetLoadManager__playBattleVoiceSe(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4D2BA11 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v12);
  return ServantAssetLoadManager__playBattleVoiceSelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           fileName,
           volume,
           v13);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *ServantAssetLoadManager__playBattleVoiceSelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *targetFileName,
        float volume,
        const MethodInfo *method)
{
  SePlayer_o *result; // x0
  const MethodInfo *v14; // x3
  int32_t VoiceId; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2BA12 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    byte_4D2BA12 = 1;
  }
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v14);
    v16 = Method_ServantAssetLoadManager_playBattleVoiceSelocal__;
    if ( overwriteSvtVoiceId )
      VoiceId = overwriteSvtVoiceId;
    v20 = VoiceId;
    if ( (*((_BYTE *)Method_ServantAssetLoadManager_playBattleVoiceSelocal__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C940B0(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C9407C(v16, v16[4]);
    v18 = System_Int32__ToString((int32_t)&v20, 0);
    v19 = System_String__Concat_64417744((System_String_o *)StringLiteral_12808/*"Servants/"*/, v18, 0);
    return OverwriteAssetSoundName__PlaySe_42182820(v17, v19, targetFileName, volume, 0, 0, 0);
  }
  return result;
}


SePlayer_o *ServantAssetLoadManager__playBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        System_String_o *targetFileName,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v20; // x23
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x28
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  int32_t VoicePrefix; // w0
  System_String_o **v41; // x8
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v45; // x22
  System_String_o *v46; // x24
  System_Action_o *v47; // x25
  Il2CppObject *v49; // x0
  int32_t v50; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2BA0F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__);
    sub_1C94098(&ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo);
    sub_1C94098(&StringLiteral_25315/*"{0:D0}_{1}"*/);
    sub_1C94098(&StringLiteral_12808/*"Servants/"*/);
    sub_1C94098(&StringLiteral_9536/*"NoblePhantasm/"*/);
    byte_4D2BA0F = 1;
  }
  v20 = sub_1C942E4(ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 16), (int32_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  v29 = v20 + 24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 24), (int32_t)callback, v30, v31, v32, v33, v34, v35);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v36);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v38);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v39);
  if ( overwriteSvtVoiceId )
    VoiceId = overwriteSvtVoiceId;
  if ( targetFileName )
  {
    if ( SvtEntity )
    {
LABEL_8:
      if ( uniqueId != -1 )
      {
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
        if ( !ActorVoice )
          goto LABEL_29;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               ActorVoice,
               uniqueId,
               (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
            if ( !ActorVoice )
              goto LABEL_29;
            SePlayer__StopSe((SePlayer_o *)ActorVoice, 0.0, 0);
          }
        }
      }
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.LastActorVoice;
      if ( ActorVoice )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          ActorVoice,
          uniqueId,
          (Il2CppObject *)voiceTypeId,
          (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v41 = (System_String_o **)(isNp ? &StringLiteral_9536/*"NoblePhantasm/"*/ : &StringLiteral_12808/*"Servants/"*/);
        v42 = *v41;
        v43 = System_Int32__ToString((int32_t)&VoiceId, 0);
        v44 = System_String__Concat_64417744(v42, v43, 0);
        v45 = this->fields.ActorVoice;
        v46 = v44;
        v47 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(
          v47,
          (Il2CppObject *)v20,
          Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__,
          0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_42281128(
                                                                               v46,
                                                                               targetFileName,
                                                                               volume,
                                                                               v47,
                                                                               0,
                                                                               0);
        if ( v45 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v45,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1C942F0(ActorVoice, v22);
    }
  }
  else
  {
    v50 = VoicePrefix;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    targetFileName = System_String__Format_64459052(
                       (System_String_o *)StringLiteral_25315/*"{0:D0}_{1}"*/,
                       v49,
                       (Il2CppObject *)voiceTypeId,
                       0);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v29 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v29 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v29 + 64LL),
      *(_QWORD *)(*(_QWORD *)v29 + 40LL));
  return 0;
}


void ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = weapongroup;
  if ( (byte_4D2BA09 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&StringLiteral_12812/*"Servants/Motion/"*/);
    byte_4D2BA09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v5 = System_Int32__ToString((int32_t)&v9, 0);
  v6 = System_String__Concat_64417744((System_String_o *)StringLiteral_12812/*"Servants/Motion/"*/, v5, 0);
  if ( !Instance )
    sub_1C942F0(v6, v7);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v6, dlOnly, 0, v8);
}


void ServantAssetLoadManager__preloadBattleActor(ServantAssetArgs_o *args, bool isForce, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_4D2B9DE & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C942F0(Instance, v6);
  ServantAssetLoadManager__preloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t v13; // w0
  System_String_o *ActorFolderName_41442140; // x0
  const MethodInfo *v15; // x4

  if ( (byte_4D2B9DF & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9DF = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v13 = svtId;
    if ( isForce )
      goto LABEL_7;
  }
  else
  {
    v13 = appearanceId;
    if ( isForce )
    {
LABEL_7:
      ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName_41442140(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_41442140 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1C942F0(ActorFolderName_41442140, ActorFolderName_41442140);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_41442140, dlOnly, 0, v15);
}


System_String_array *ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2B9FF & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           effectIdList,
           v5);
}


System_String_array *ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  il2cpp_array_size_t max_length; // x8
  System_String_array *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_4D2BA00 & 1) == 0 )
  {
    sub_1C94098(&BattleEffectUtility_TypeInfo);
    byte_4D2BA00 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0);
  if ( !BattleCommonEffectPathList )
    sub_1C942F0(0, v6);
  max_length = BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C942F8(BattleCommonEffectPathList);
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, 0, v7);
      LODWORD(max_length) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)max_length );
  }
  return v9;
}


void ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2BA25 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA25 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v5);
    if ( !Instance )
      sub_1C942F0(CameraActionPath, v8);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, 0, v9);
  }
}


void ServantAssetLoadManager__preloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4D2B9B0 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *CommandCardLoadFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4D2B9B1 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9B1 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


void ServantAssetLoadManager__preloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4D2BA2E & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2BA2E = 1;
  }
  if ( commandCodeIds )
  {
    max_length = commandCodeIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      v9 = dlOnly;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C942F8(this);
        v10 = commandCodeIds->m_Items[v8];
        if ( v10 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v10,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__tryLoadList(v6, CommandCodeFolderName, v9, v12);
          LODWORD(max_length) = commandCodeIds->max_length;
        }
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}


void ServantAssetLoadManager__preloadCommandSpellAnyVoice(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4D2B9D7 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v6; // x20
  unsigned __int64 v7; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v9; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v11; // x23

  if ( (byte_4D2B9D8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C94098(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D2B9D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      (const MethodInfo_345A744 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_1C942F0(Instance, v4);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v6 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1C942F8(Instance);
      Instance = *(DataManager_o **)&p_DispLog[8 * v7];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v7];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v7 >= LODWORD(v6->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v9 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v7];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
            v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            System_Action___ctor(
              v11,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0);
            if ( !v9 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v9, VoiceAssetName, v11, 1, 0);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v7;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
}


void ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        BattleDeckServantData_o *originalDeckSvt,
        bool dlOnly,
        bool isShiftOrTransform,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  System_String_o *NameEffectPath; // x22
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  int32_t StatusUiType; // w0
  int32_t v17; // w20
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_4D2BA35 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA35 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v11 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v11, v10);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      ServantAssetLoadManager__setLoadList(Instance, NameEffectPath, dlOnly, 0, v15);
    }
    if ( originalDeckSvt )
    {
      if ( !isShiftOrTransform )
      {
        StatusUiType = BattleDeckServantData__GetStatusUiType(originalDeckSvt, 0);
        if ( StatusUiType >= 1 )
        {
          v17 = StatusUiType;
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetStatusUiPath(v17, v18);
          if ( v19 )
          {
            ServantAssetLoadManager__setLoadList(
              (ServantAssetLoadManager_o *)v19,
              (System_String_o *)Instance,
              dlOnly,
              1,
              v20);
            return;
          }
LABEL_17:
          sub_1C942F0(Instance, v14);
        }
      }
    }
  }
}


void ServantAssetLoadManager__preloadServant(ServantAssetArgs_o *args, bool dlOnly, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2B9CC & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__preloadServantlocal((ServantAssetLoadManager_o *)Instance, args, dlOnly, v7);
}


void ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4D2B9CF & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  ServantAssetLoadManager__preloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    0,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t VoiceId; // w0
  int32_t v12; // w8
  Il2CppObject *Instance; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  System_Action_o *v16; // x0
  System_Action_o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B9D0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__);
    sub_1C94098(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&StringLiteral_12815/*"Servants_"*/);
    byte_4D2B9D0 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v12 = overwriteSvtVoiceId;
  else
    v12 = VoiceId;
  v20 = v12;
  if ( v12 )
  {
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v14 = System_Int32__ToString((int32_t)&v20, 0);
    v15 = System_String__Concat_64417744((System_String_o *)StringLiteral_12815/*"Servants_"*/, v14, 0);
    v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    v17 = v16;
    if ( dlOnly )
    {
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v15, v17, 1, 0);
        return;
      }
LABEL_13:
      sub_1C942F0(v18, v19);
    }
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v15, v17, 1, 0);
  }
}


void ServantAssetLoadManager__preloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  bool v6; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( !args )
    sub_1C942F0(this, 0);
  v6 = dlOnly;
  ServantAssetLoadManager__preloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    0,
    dlOnly,
    v4);
  ServantAssetLoadManager__preloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v8, v6, v9);
  ServantAssetLoadManager__preloadStatusFacelocal(this, args->fields._DispImageSvtId_k__BackingField, v10, v6, v11);
  ServantAssetLoadManager__preloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v6,
    v12);
  ServantAssetLoadManager__preloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v6, v13);
  ServantAssetLoadManager__PreloadShadowEffectLocal(this, args, v6, v14);
}


void ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2B9D3 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v14; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v16; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_4D2B9D4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__);
    sub_1C94098(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2B9D4 = 1;
  }
  if ( skillInfo
    && ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
         skillInfo,
         skillInfo->klass->vtable._5_get_skillId.method,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C(v8);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6A12C(v8);
    v11 = **(DataManager_o ***)(v10 + 184);
    if ( v11 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v11,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v11 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                               skillInfo,
                               skillInfo->klass->vtable._5_get_skillId.method);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v11,
                   skillInfo->fields.skilllv,
                   0);
        if ( !Entity )
          return;
        v14 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v14, 0);
          v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v16, 1, 0);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v18 = SkillLvEntity__getVoiceAssetName(v14, 0);
        v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v18, v19, 1, 0);
          return;
        }
      }
    }
    sub_1C942F0(v11, v7);
  }
}


void ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4D2B9B8 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__preloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *StatusImageFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4D2B9B9 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9B9 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(
                            svtId,
                            svtId,
                            *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, StatusImageFolderName, dlOnly, v9);
}


void ServantAssetLoadManager__preloadWeaponEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  System_Object_array *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x21
  const MethodInfo *v41; // x2
  System_String_o *v42; // x20
  const MethodInfo *v43; // x4
  Il2CppObject *v44; // x20
  Il2CppObject *v45; // x21
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x2
  System_String_o *v48; // x20
  __int64 v49; // x0
  int32_t v50; // [xsp+0h] [xbp-60h] BYREF
  int32_t v51; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v52; // [xsp+8h] [xbp-58h] BYREF
  int v53; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v54; // [xsp+18h] [xbp-48h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-44h] BYREF

  v54 = effectFolder;
  v55 = weapongroup;
  if ( (byte_4D2B9F9 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&StringLiteral_5913/*"Effect/weapon/"*/);
    sub_1C94098(&StringLiteral_5919/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_5916/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/);
    sub_1C94098(&StringLiteral_4956/*"D3"*/);
    byte_4D2B9F9 = 1;
  }
  v53 = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = System_Int32__ToString((int32_t)&v55, 0);
  if ( !effectFolder )
  {
    v9 = System_String__Concat_64417744((System_String_o *)StringLiteral_5913/*"Effect/weapon/"*/, v7, 0);
    if ( Instance )
    {
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, 0, v43);
      while ( 1 )
      {
        v52 = v55;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
        v51 = v55;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
        v46 = (Il2CppObject *)System_Int32__ToString_65926240((int32_t)&v53, (System_String_o *)StringLiteral_4956/*"D3"*/, 0);
        v48 = System_String__Format_64459120((System_String_o *)StringLiteral_5916/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v44, v45, v46, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        if ( !ServantAssetLoadManager__SetNeedDownloadList(v48, dlOnly, v47) )
          break;
        ++v53;
      }
      return;
    }
LABEL_23:
    sub_1C942F0(v9, v10);
  }
  v8 = System_Int32__ToString((int32_t)&v54, 0);
  v9 = System_String__Concat_64458012(
         (System_String_o *)StringLiteral_5913/*"Effect/weapon/"*/,
         v7,
         (System_String_o *)StringLiteral_1041/*"/"*/,
         v8,
         0);
  if ( !Instance )
    goto LABEL_23;
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v9, dlOnly, 0, v11);
  v12 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
  v52 = v55;
  v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  if ( !v12 )
    goto LABEL_23;
  v19 = (Il2CppObject *)v9;
  while ( 1 )
  {
    if ( v19 )
    {
      v9 = (System_String_o *)sub_1C941D4(v19, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( !LODWORD(v12->max_length) )
      goto LABEL_31;
    v12->m_Items[0] = v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)v12->m_Items, (int32_t)v19, v13, v14, v15, v16, v17, v18);
    v51 = v54;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v26 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C941D4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( LODWORD(v12->max_length) <= 1 )
      goto LABEL_31;
    v12->m_Items[1] = v26;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->m_Items[1], (int32_t)v26, v20, v21, v22, v23, v24, v25);
    v50 = v55;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    v33 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C941D4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_32;
    }
    if ( LODWORD(v12->max_length) <= 2 )
      goto LABEL_31;
    v12->m_Items[2] = v33;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->m_Items[2], (int32_t)v33, v27, v28, v29, v30, v31, v32);
    v9 = System_Int32__ToString_65926240((int32_t)&v53, (System_String_o *)StringLiteral_4956/*"D3"*/, 0);
    v40 = (Il2CppObject *)v9;
    if ( v9 )
    {
      v9 = (System_String_o *)sub_1C941D4(v9, v12->obj.klass->_1.element_class);
      if ( !v9 )
      {
LABEL_32:
        v49 = sub_1C94314(v9);
        sub_1C941C0(v49, 0);
      }
    }
    if ( LODWORD(v12->max_length) <= 3 )
LABEL_31:
      sub_1C942F8(v9);
    v12->m_Items[3] = v40;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12->m_Items[3], (int32_t)v40, v34, v35, v36, v37, v38, v39);
    v42 = System_String__Format_64459188((System_String_o *)StringLiteral_5919/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/, v12, 0);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    if ( !ServantAssetLoadManager__SetNeedDownloadList(v42, dlOnly, v41) )
      break;
    ++v53;
    v12 = (System_Object_array *)sub_1C94140(object___TypeInfo, 4);
    v52 = v55;
    v9 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    v19 = (Il2CppObject *)v9;
    if ( !v12 )
      goto LABEL_23;
  }
}


void ServantAssetLoadManager__releaseNoblePhantasm(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  AssetData_o *nobleAssetData; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssetData_o *nobleSequenceData; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_string__o *v29; // x8
  int32_t size; // w2
  int v31; // w9
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2BA1F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4D2BA1F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0);
    this->fields.nobleAssetData = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nobleAssetData, 0, v4, v5, v6, v7, v8, v9);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0);
    this->fields.nobleSequenceData = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nobleSequenceData, 0, v11, v12, v13, v14, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C942F0(0, v18);
      AssetData__RemoveEntry((AssetData_o *)v32.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v19;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.bgAssetDataList,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v27, v28);
  v29 = this->fields.nobleEffectList;
  if ( !v29 )
LABEL_20:
    sub_1C942F0(nobleEffectList, method);
  size = v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, size, 0);
}


void ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        bool skipExceptionIfNoAssetFound,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x8
  char v21; // w2
  char v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  const MethodInfo *v28; // x2
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x8
  AssetLoader_LoadEndDataHandler_o *v33; // x22

  if ( (byte_4D2B9C4 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_endloadList__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9C4 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( !downloadlist )
      goto LABEL_31;
    items = downloadlist->fields._items;
    v14 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !items )
      goto LABEL_31;
    size = downloadlist->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      downloadlist->fields._size = size + 1;
      v16[4] = (Il2CppClass *)path;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)(v16 + 4),
        (int32_t)path,
        dlOnly,
        skipExceptionIfNoAssetFound,
        (System_String_o *)method,
        v5,
        v6,
        v7);
    }
    v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__downloadAssetStorage(path, v27, 20, 0) )
    {
      downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
      if ( downloadlist )
      {
        System_Collections_Generic_List_object___Remove(
          downloadlist,
          (Il2CppObject *)path,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_28:
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__ShowAssetNotFoundError(path, skipExceptionIfNoAssetFound, v28);
        return;
      }
LABEL_31:
      sub_1C942F0(downloadlist, path);
    }
  }
  else
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
    if ( !downloadlist )
      goto LABEL_31;
    v17 = downloadlist->fields._items;
    v18 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !v17 )
      goto LABEL_31;
    v19 = downloadlist->fields._size;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &v17->obj.klass + v19;
      downloadlist->fields._size = v19 + 1;
      v20[4] = (Il2CppClass *)path;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)(v20 + 4),
        (int32_t)path,
        dlOnly,
        skipExceptionIfNoAssetFound,
        (System_String_o *)method,
        v5,
        v6,
        v7);
    }
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
    if ( !downloadlist )
      goto LABEL_31;
    v29 = downloadlist->fields._items;
    v30 = Method_System_Collections_Generic_List_string__Add__;
    ++downloadlist->fields._version;
    if ( !v29 )
      goto LABEL_31;
    v31 = downloadlist->fields._size;
    if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        downloadlist,
        (Il2CppObject *)path,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &v29->obj.klass + v31;
      downloadlist->fields._size = v31 + 1;
      v32[4] = (Il2CppClass *)path;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)path, v21, v22, v23, v24, v25, v26);
    }
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v33, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage_41291912(path, 20, v33, 0) )
      goto LABEL_28;
  }
}


void ServantAssetLoadManager__set_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRetryTransition_k__BackingField = value;
}


void ServantAssetLoadManager__set_retryStatus(ServantAssetLoadManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._retryStatus_k__BackingField = value;
}


void ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  if ( (byte_4D2B9C6 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B9C6 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, 0, v7);
}


void ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA0C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v5);
}


void ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  Il2CppObject *loadedList; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = weapongroup;
  if ( (byte_4D2BA0D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&StringLiteral_12812/*"Servants/Motion/"*/);
    byte_4D2BA0D = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v9, 0);
  loadedList = (Il2CppObject *)System_String__Concat_64417744((System_String_o *)StringLiteral_12812/*"Servants/Motion/"*/, v4, 0);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v7 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1C942F0(loadedList, v6);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v7,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v7, 0);
  AssetManager__releaseAsset_41285308(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4D2BA22 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2BA23 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4D2BA23 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41285308(AssetStorage, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.loadedList;
  if ( !v6 )
LABEL_16:
    sub_1C942F0(loadedList, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4D2B9E5 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1C942F0(Instance, v4);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  Il2CppObject *ActorFolderName; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4D2B9E6 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9E6 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ActorFolderName = (Il2CppObject *)ServantAssetLoadManager__getActorFolderName(
                                      appearanceId,
                                      limitCount,
                                      *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v11 = ActorFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          ActorFolderName,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1C942F0(ActorFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v11,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0);
  AssetManager__releaseAsset_41285308(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA28 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA28 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v4);
    ServantAssetLoadManager__unloadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__unloadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2BA29 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2BA29 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


void ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4D2B9B4 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  ServantAssetLoadManager__unloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *CommandCardLoadFolderName; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4D2B9B5 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9B5 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = (Il2CppObject *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                svtId,
                                                svtId,
                                                *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v8 = CommandCardLoadFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          CommandCardLoadFolderName,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1C942F0(CommandCardLoadFolderName, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v8,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v8, 0);
  AssetManager__releaseAsset_41285308(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4D2B9D9 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v2);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v2);
}


void ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1
  int v4; // w8
  _DWORD *v5; // x19
  unsigned int i; // w21
  char *v7; // x23
  CommandSpellEntity_o *v8; // x0
  void **v9; // x23
  CommandSpellEntity_o *v10; // t1
  SoundManager_o *v11; // x20

  if ( (byte_4D2B9DA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D2B9DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_345A744 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0 )
  {
LABEL_21:
    sub_1C942F0(Instance, v3);
  }
  v4 = *((_DWORD *)Instance + 6);
  v5 = Instance;
  if ( v4 >= 1 )
  {
    for ( i = 0; (int)i < v4; ++i )
    {
      if ( i >= v4 )
LABEL_20:
        sub_1C942F8(Instance);
      v7 = (char *)&v5[2 * i];
      v10 = (CommandSpellEntity_o *)*((_QWORD *)v7 + 4);
      v9 = (void **)(v7 + 32);
      v8 = v10;
      if ( !v10 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v8, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v5[6] )
          goto LABEL_20;
        Instance = *v9;
        if ( !*v9 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v5[6] )
            goto LABEL_20;
          v11 = (SoundManager_o *)Instance;
          Instance = *v9;
          if ( !*v9 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0);
          if ( !v11 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v11, (System_String_o *)Instance, 0);
        }
      }
      v4 = v5[6];
    }
  }
}


void ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        BattleDeckServantData_o *originalDeckSvt,
        bool isShiftOrTransform,
        const MethodInfo *method)
{
  int32_t EnemyNameEffect; // w0
  int32_t v8; // w21
  const MethodInfo *v9; // x1
  Il2CppObject *Instance; // x22
  System_String_o *NameEffectPath; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t StatusUiType; // w0
  int32_t v15; // w19
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4D2BA36 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA36 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0);
    if ( EnemyNameEffect )
    {
      v8 = EnemyNameEffect;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, v9);
      if ( !Instance )
        goto LABEL_17;
      ServantAssetLoadManager__unloadTargetPathAssetLocal((ServantAssetLoadManager_o *)Instance, NameEffectPath, v13);
    }
    if ( originalDeckSvt )
    {
      if ( !isShiftOrTransform )
      {
        StatusUiType = BattleDeckServantData__GetStatusUiType(originalDeckSvt, 0);
        if ( StatusUiType >= 1 )
        {
          v15 = StatusUiType;
          v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          NameEffectPath = ServantAssetLoadManager__GetStatusUiPath(v15, v16);
          if ( v17 )
          {
            ServantAssetLoadManager__unloadTargetPathAssetLocal((ServantAssetLoadManager_o *)v17, NameEffectPath, v18);
            return;
          }
LABEL_17:
          sub_1C942F0(NameEffectPath, v12);
        }
      }
    }
  }
}


void ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2B9CD & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v5);
}


void ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4D2B9D1 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantAssetLoadManager__unloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  int32_t VoiceId; // w0
  int32_t v10; // w8
  Il2CppObject *Instance; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B9D2 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C94098(&StringLiteral_12815/*"Servants_"*/);
    byte_4D2B9D2 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v10 = overwriteSvtVoiceId;
  else
    v10 = VoiceId;
  v15 = v10;
  if ( v10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v12 = System_Int32__ToString((int32_t)&v15, 0);
    v13 = System_String__Concat_64417744((System_String_o *)StringLiteral_12815/*"Servants_"*/, v12, 0);
    if ( !Instance )
      sub_1C942F0(v13, v14);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, v13, 0);
  }
}


void ServantAssetLoadManager__unloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( !args )
    sub_1C942F0(this, 0);
  ServantAssetLoadManager__unloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v3);
  ServantAssetLoadManager__unloadStatusFacelocal(
    this,
    args->fields._DispImageSvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    v6);
  ServantAssetLoadManager__unloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v7, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v9);
  ServantAssetLoadManager__UnloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v10);
  ServantAssetLoadManager__UnloadShadowEffectLocal(this, args, v11);
}


void ServantAssetLoadManager__unloadSkillAnyVoice(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2B9D5 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v5);
}


void ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *VoiceAssetName; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v11; // x19
  Il2CppObject *Instance; // x20

  if ( (byte_4D2B9D6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D2B9D6 = 1;
  }
  if ( skillInfo
    && ((unsigned int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
         skillInfo,
         skillInfo->klass->vtable._5_get_skillId.method,
         method)
    && skillInfo->fields.skilllv )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C6A12C(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C6A12C(v5);
    VoiceAssetName = **(DataManager_o ***)(v7 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    VoiceAssetName = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                        skillInfo,
                                        skillInfo->klass->vtable._5_get_skillId.method);
    if ( !MasterData_object )
      goto LABEL_17;
    Entity = SkillLvMaster__GetEntity(
               (SkillLvMaster_o *)MasterData_object,
               (int32_t)VoiceAssetName,
               skillInfo->fields.skilllv,
               0);
    if ( Entity )
    {
      v11 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v11, 0);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0);
          return;
        }
LABEL_17:
        sub_1C942F0(VoiceAssetName, v4);
      }
    }
  }
}


void ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA08 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__unloadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v5);
}


void ServantAssetLoadManager__unloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x2

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))skillInfo->klass->vtable._9_getCutInId.methodPtr)(
                                        skillInfo,
                                        skillInfo->klass->vtable._9_getCutInId.method,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, SkillCutInPath, v7);
    }
  }
}


void ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2B9BC & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
}


void ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  Il2CppObject *StatusImageFolderName; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4D2B9BD & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2B9BD = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v7, v8);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v11 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1C942F0(StatusImageFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v11,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0);
  AssetManager__releaseAsset_41285308(AssetStorage, 0);
}


void ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v7; // x19

  if ( (byte_4D2BA04 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4D2BA04 = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1C942F0(loadedList, path);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
  {
    v7 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285308(v7, 0);
  }
}


void ServantAssetLoadManager__unloadTargetPathAssets(System_String_array *pathList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2BA03 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2BA03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal((ServantAssetLoadManager_o *)Instance, pathList, v5);
}


void ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_1C942F0(this, 0);
  max_length = pathList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C942F8(this);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(max_length) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4D2B9FD & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D2B9FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
    (ServantAssetLoadManager_o *)Instance,
    weapongroup,
    effectFolder,
    v7);
}


void ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v12 = effectFolder;
  v13 = weapongroup;
  if ( (byte_4D2B9FE & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&StringLiteral_5913/*"Effect/weapon/"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2B9FE = 1;
  }
  v6 = System_Int32__ToString((int32_t)&v13, 0);
  v8 = System_String__Concat_64417744((System_String_o *)StringLiteral_5913/*"Effect/weapon/"*/, v6, 0);
  if ( effectFolder )
  {
    v9 = System_Int32__ToString((int32_t)&v12, 0);
    v8 = System_String__Concat_64456008(v8, (System_String_o *)StringLiteral_1041/*"/"*/, v9, 0);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v8,
          (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1C942F0(loadedList, v7);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v8,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v8, 0);
  AssetManager__releaseAsset_41285308(AssetStorage, 0);
}


void ServantAssetLoadManager__GetAheadBg_d__159___ctor(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantAssetLoadManager__GetAheadBg_d__159__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantAssetLoadManager__GetAheadBg_d__159_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v12; // x22
  ServantAssetLoadManager__GetAheadBg_d__159_o **p_bgAheadList_5__2; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct WellFired_USFGOChangeBgEvent_array *v26; // x22
  int max_length; // w8
  unsigned int v28; // w23
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 _2__current_low; // x10
  __int64 v32; // x8
  __int64 v33; // x1
  System_String_o *BgAssetPath; // x21
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  struct System_Collections_Generic_List_USFGOChangeBgEvent__o *bgAheadList_5__2; // x8
  _DWORD *monitor; // x9
  struct System_Action_o *callback; // x8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v40; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF

  v8 = this;
  if ( (byte_4D2BA4B & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager__GetAheadBg_b__159_0__);
    this = (ServantAssetLoadManager__GetAheadBg_d__159_o *)sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2BA4B = 1;
  }
  memset(&v49, 0, sizeof(v49));
  _1__state = v8->fields.__1__state;
  _4__this = (Il2CppObject *)v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v8->fields.bgList;
    v8->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_32:
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_35;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    }
    v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v8->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v12;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__159_o **)&v8->fields._bgAheadList_5__2;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v8->fields._bgAheadList_5__2,
      (int32_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v26 = v8->fields.bgList;
    if ( !v26 )
      goto LABEL_35;
    max_length = v26->max_length;
    if ( max_length >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= max_length )
          sub_1C942F8(this);
        method = (const MethodInfo *)v26->m_Items[v28];
        if ( !method )
          break;
        if ( BYTE1(method->rgctx_data) )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          v29 = *(_QWORD *)&this->fields.__1__state;
          v30 = Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v29 )
            break;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v32 + 32) = method;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)method, v20, v21, v22, v23, v24, v25);
          }
        }
        max_length = v26->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1C942F0(this, method);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v49.fields._current )
        sub_1C942F0(0, v33);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v49.fields._current,
                      0);
      v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v35, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__159_0__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(BgAssetPath, v35, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  this = (ServantAssetLoadManager__GetAheadBg_d__159_o *)&v8->fields._bgAheadList_5__2;
  bgAheadList_5__2 = v8->fields._bgAheadList_5__2;
  if ( !bgAheadList_5__2 )
    goto LABEL_35;
  if ( !_4__this )
    goto LABEL_35;
  monitor = _4__this[7].monitor;
  if ( !monitor )
    goto LABEL_35;
  if ( bgAheadList_5__2->fields._size == monitor[6] )
  {
    this->klass = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v40, 0);
  v8->fields.__2__current = (Il2CppObject *)v40;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(p__2__current, (int32_t)v40, v42, v43, v44, v45, v46, v47);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ServantAssetLoadManager__GetAheadBg_d__159_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantAssetLoadManager__GetAheadBg_d__159__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BA49 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager___c_TypeInfo);
    byte_4D2BA49 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantAssetLoadManager___c___ctor(ServantAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Shader_o *ServantAssetLoadManager___c___GetReplaceChocoShaderFunc_b__99_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


UnityEngine_Shader_o *ServantAssetLoadManager___c___GetReplaceDeadShaderFunc_b__98_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


void ServantAssetLoadManager___c__DisplayClass139_0___ctor(
        ServantAssetLoadManager___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantAssetLoadManager___c__DisplayClass139_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  if ( !this->fields.__4__this )
    sub_1C942F0(this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ServantAssetLoadManager___c__DisplayClass157_0___ctor(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C942F0(0, data);
  _4__this->fields.nobleSequenceData = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.nobleSequenceData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isNext = 1;
}


void ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v12; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  const MethodInfo *v24; // x3
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v26; // x21
  ServantAssetLoadManager_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_IEnumerator_o *AheadBg; // x1

  if ( (byte_4D2BA4A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantAssetLoadManager_getAssetObject_GameObject___);
    sub_1C94098(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__);
    sub_1C94098(&StringLiteral_4425/*"ChrSequence1"*/);
    byte_4D2BA4A = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *((_QWORD *)_4__this + 14) = assetData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(_4__this + 112), (int32_t)assetData, (int32_t)method, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4425/*"ChrSequence1"*/,
                         (const MethodInfo_3244570 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v12;
  p_sequence = &this->fields.sequence;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.sequence, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  _4__this = (char *)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  if ( !this->fields.parent )
    goto LABEL_28;
  v20 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (char *)UnityEngine_GameObject__get_transform(this->fields.parent, 0);
  if ( !v20 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)_4__this, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v21 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4D25F19 )
  {
    _4__this = (char *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v22 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4D25F21 )
  {
    _4__this = (char *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F21 = 1;
  }
  if ( !v22 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
  v23 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4D25F1E )
  {
    _4__this = (char *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  if ( !v23 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  _4__this = (char *)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                       (UnityEngine_GameObject_o *)_4__this,
                       (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v26 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v27 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v28, v29, v30, v31, v32, v33);
  }
  if ( !v27 )
LABEL_28:
    sub_1C942F0(_4__this, assetData);
  AheadBg = ServantAssetLoadManager__GetAheadBg(v27, v26, _9__2, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)v27, AheadBg, 0);
}


void ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v8; // x19
  struct ServantAssetLoadManager_o *_4__this; // x20
  Il2CppObject *v10; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o **p__8__1; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct ServantAssetLoadManager_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UnityEngine_GameObject_o *parent; // x1
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v32; // x20
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v50; // x22
  System_String_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_String_o *nobleDataPath_5__2; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v67; // x22
  System_String_o *v68; // x20
  AssetLoader_LoadEndDataHandler_o *v69; // x21
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v70; // x8
  _BOOL4 isNext; // w20
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v73; // x21
  Il2CppObject *v74; // x23
  AssetLoader_LoadEndDataHandler_o *v75; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v76; // x8
  UnityEngine_Object_o *sequence; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Collections_Generic_List_int__o *v84; // x21
  System_Int32_array *funcId; // x21
  int v86; // w21
  const MethodInfo *v87; // x2
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v88; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v90; // x21
  __int64 v91; // x22
  const MethodInfo *v92; // x2
  ServantAssetLoadManager_c *v93; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int v95; // w8
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v96; // x8
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x9
  bool result; // w0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  int32_t _1__state; // [xsp+1Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_4D2BA4C & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&BattleEffectUtility_TypeInfo);
    sub_1C94098(&BattleSequenceManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__);
    sub_1C94098(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__);
    sub_1C94098(&ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo);
    sub_1C94098(&StringLiteral_9536/*"NoblePhantasm/"*/);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1C94098(&StringLiteral_9538/*"NoblePhantasm/Sequence/"*/);
    byte_4D2BA4C = 1;
  }
  _1__state = 0;
  entity = 0;
  effectIdList = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C942E4(ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass157_0_o *)v10;
      p__8__1 = &v8->fields.__8__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      v24 = v8->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v24;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v24, v18, v19, v20, v21, v22, v23);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      parent = v8->fields.parent;
      *(_QWORD *)&this->fields.svtId = parent;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.svtId, (int32_t)parent, v25, v26, v27, v28, v29, v30);
      if ( !*p__8__1 )
        goto LABEL_79;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_79;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, method);
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)BattleSequenceManager__SafeGetExecutingTdInfo(0);
      if ( !this )
        goto LABEL_79;
      _1__state = this->fields.__1__state;
      v32 = *p__8__1;
      v33 = System_Int32__ToString((int32_t)&_1__state, 0);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_64417744(
                                                                               (System_String_o *)StringLiteral_9538/*"NoblePhantasm/Sequence/"*/,
                                                                               v33,
                                                                               0);
      if ( !v32 )
        goto LABEL_79;
      v32->fields.sequencePath = (struct System_String_o *)this;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->fields.sequencePath, (int32_t)this, v34, v35, v36, v37, v38, v39);
      v40 = System_Int32__ToString((int32_t)&_1__state, 0);
      v41 = System_String__Concat_64417744((System_String_o *)StringLiteral_9536/*"NoblePhantasm/"*/, v40, 0);
      v8->fields._nobleDataPath_5__2 = v41;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._nobleDataPath_5__2,
        (int32_t)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_79;
      sequencePath = _8__1->fields.sequencePath;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(sequencePath, 0) )
        goto LABEL_18;
      v50 = v8->fields.__8__1;
      v51 = System_Int32__ToString((int)v8 + 48, 0);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_64417744(
                                                                               (System_String_o *)StringLiteral_9538/*"NoblePhantasm/Sequence/"*/,
                                                                               v51,
                                                                               0);
      if ( !v50 )
        goto LABEL_79;
      v50->fields.sequencePath = (struct System_String_o *)this;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v50->fields.sequencePath, (int32_t)this, v52, v53, v54, v55, v56, v57);
LABEL_18:
      nobleDataPath_5__2 = v8->fields._nobleDataPath_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__2,
                                                                               0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v59 = System_Int32__ToString((int)v8 + 48, 0);
        v60 = System_String__Concat_64417744((System_String_o *)StringLiteral_9536/*"NoblePhantasm/"*/, v59, 0);
        v8->fields._nobleDataPath_5__2 = v60;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._nobleDataPath_5__2,
          (int32_t)v60,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
      }
      v67 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_79;
      v67->fields.isNext = 0;
      v68 = v67->fields.sequencePath;
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        (Il2CppObject *)v67,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v68,
                                                                               v69,
                                                                               1,
                                                                               0);
LABEL_27:
      v70 = v8->fields.__8__1;
      if ( !v70 )
        goto LABEL_79;
      isNext = v70->fields.isNext;
      v8->fields.__2__current = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      if ( isNext )
      {
        v8->fields.__1__state = 2;
        return 1;
      }
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_27;
    case 2:
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_79;
      this->fields.__4__this = 0;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__4__this, 0, v2, v3, v4, v5, v6, v7);
      v73 = v8->fields._nobleDataPath_5__2;
      v74 = (Il2CppObject *)v8->fields.__8__1;
      v75 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v75,
        v74,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v73,
                                                                               v75,
                                                                               1,
                                                                               0);
LABEL_35:
      v76 = v8->fields.__8__1;
      if ( !v76 )
        goto LABEL_79;
      if ( v76->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v76->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0, 0) )
        {
LABEL_69:
          v8->fields.__2__current = 0;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C9403C(p__2__current, 0, v78, v79, v80, v81, v82, v83);
          v95 = 5;
          goto LABEL_75;
        }
        v84 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v84,
          (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v84;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)DataManager__GetMasterData_object_(
                                                                                   (DataManager_o *)this,
                                                                                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          if ( this )
          {
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                     (TreasureDvcLvMaster_o *)this,
                                                                                     &entity,
                                                                                     v8->fields.treasureDvcId,
                                                                                     v8->fields.treasureDvcLv,
                                                                                     0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_79;
              funcId = entity->fields.funcId;
              if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
              BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0);
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)entity;
              if ( !entity )
                goto LABEL_79;
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                       entity,
                                                                                       0);
              if ( (int)this >= 1 )
              {
                v86 = (int)this;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1C94140(int___TypeInfo, 1);
                if ( !this )
                  goto LABEL_79;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.__2__current) )
                  goto LABEL_80;
                LODWORD(this->fields.__4__this) = v86;
                if ( !_4__this )
                  goto LABEL_79;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                         _4__this,
                                                                                         (System_Int32_array *)this,
                                                                                         v87);
              }
            }
            v88 = v8->fields.__8__1;
            if ( v88 )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v88->fields.sequence;
              if ( this )
              {
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
                if ( this )
                {
                  _2__current = (int)this->fields.__2__current;
                  v90 = this;
                  if ( _2__current >= 1 )
                  {
                    v91 = 0;
                    while ( (unsigned int)v91 < _2__current )
                    {
                      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)*((_QWORD *)&v90->fields.__4__this
                                                                                             + v91);
                      if ( !this )
                        goto LABEL_79;
                      WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                        (WellFired_USFGOActorBattleActionEvent_o *)this,
                        &effectIdList,
                        0);
                      _2__current = (int)v90->fields.__2__current;
                      if ( (int)++v91 >= _2__current )
                        goto LABEL_60;
                    }
LABEL_80:
                    sub_1C942F8(this);
                  }
                }
LABEL_60:
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)effectIdList;
                if ( effectIdList )
                {
                  this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_Collections_Generic_List_int___ToArray(
                                                                                           effectIdList,
                                                                                           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( _4__this )
                  {
                    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                             _4__this,
                                                                                             (System_Int32_array *)this,
                                                                                             v92);
                    if ( _4__this->fields.nobleEffectList )
                    {
                      System_Collections_Generic_List_object___AddRange(
                        (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
                        (System_Collections_Generic_IEnumerable_T__o *)this,
                        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_65:
                      v93 = ServantAssetLoadManager_TypeInfo;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      if ( ServantAssetLoadManager__checkLoad((const MethodInfo *)v93) )
                      {
                        v8->fields.__2__current = 0;
                        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                        sub_1C9403C(p__2__current, 0, v78, v79, v80, v81, v82, v83);
                        v95 = 4;
                        goto LABEL_75;
                      }
                      goto LABEL_69;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_79:
        sub_1C942F0(this, method);
      }
      v8->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v95 = 3;
LABEL_75:
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = v95;
      return 1;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_35;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_65;
    case 5:
      v96 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v96 )
        goto LABEL_79;
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_79;
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        v96->fields.sequence,
        callback->fields.method);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC8538;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AC8518;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC84D0;
}


System_IAsyncResult_o *ServantAssetLoadManager_onGameObjectLoadComplete__BeginInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v6, callback, object);
}


void ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    obj,
    this->fields.method);
}