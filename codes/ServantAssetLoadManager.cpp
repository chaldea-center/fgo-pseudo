void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct ServantAssetLoadManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4D743 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v2);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4D743 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v5;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->unloadIgnoredAssetArgs, (int32_t)v5, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = ServantAssetLoadManager_TypeInfo->static_fields;
  v10->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->wkSpace, v9, v11, v12);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_int__object__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_Dictionary_object__object__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4A4D742 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v5);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B863B8(&System_Collections_Generic_List_AssetData__TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v12);
    byte_4A4D742 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loadedList, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.loadlist, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.downloadlist, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v22;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ActorVoice, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v25;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.LastActorVoice, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgAssetDataList, (int32_t)v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nobleEffectList, (int32_t)v31, v32, v33);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v34 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__Object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v34,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v34;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._releaseAssets, (int32_t)v34, v35, v36);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_4A4D736 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, path);
    byte_4A4D736 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1B86614(0LL, path);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1B86614(this, data);
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A4D6CC & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A4D6CC = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, v2);
}


void __fastcall ServantAssetLoadManager__DownloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x3

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__setLoadList(this, SkillCutInPath, 1, v7);
    }
  }
}


void __fastcall ServantAssetLoadManager__EndPlaySe(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__EndRetryTransition(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  __int64 v11; // x1
  ServantAssetLoadManager_c *v12; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  ServantAssetArgs_o *currentValue; // x19
  int32_t v16; // w24
  ServantAssetLoadManager_c *v17; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A4D735 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v4);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v6);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v9);
    byte_4A4D735 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v12 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v12 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_32CE510 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3929BAC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_33CA7B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v13 )
      break;
    currentValue = (ServantAssetArgs_o *)v19.fields._currentValue;
    if ( !v19.fields._currentValue )
      sub_1B86614(v13, v14);
    if ( SLODWORD(v19.fields._currentValue[6].klass) >= 1 )
    {
      v16 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v14);
        ++v16;
      }
      while ( v16 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_33CA7B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v17 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v17 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v17->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1B86614(Instance, v11);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_32CE868 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4A4D6E5 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4D6E5 = 1;
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
  return AssetManager__isExistAssetStorage(PreloadBattleActorFolderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A4D716 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4A4D716 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v10);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           type,
           v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoiceLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoicePrefix; // w24
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w9
  Il2CppObject *v22; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v24; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  int32_t v30; // [xsp+8h] [xbp-68h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4D717 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_1B863B8(&Voice_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_24780/*"{0:D0}_{1}"*/, v13);
    sub_1B863B8(&StringLiteral_12537/*"Servants_"*/, v14);
    byte_4A4D717 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v21 = overwriteSvtVoiceId;
  else
    v21 = VoiceId;
  v30 = VoicePrefix;
  v31 = v21;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v18, v19, v20);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v24 = System_String__Format_61686468((System_String_o *)StringLiteral_24780/*"{0:D0}_{1}"*/, v22, FileName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v26 = System_Int32__ToString((int32_t)&v31, 0LL);
  v27 = System_String__Concat_61645176((System_String_o *)StringLiteral_12537/*"Servants_"*/, v26, 0LL);
  if ( !Instance )
    sub_1B86614(v27, v28);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v27, v24, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4A4D721 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo, bgList);
    byte_4A4D721 = 1;
  }
  v7 = sub_1B86604(ServantAssetLoadManager__GetAheadBg_d__159_TypeInfo);
  ServantAssetLoadManager__GetAheadBg_d__159___ctor((ServantAssetLoadManager__GetAheadBg_d__159_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)bgList, v12, v13);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D733 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&StringLiteral_4559/*"CommandCodes/Texture/"*/, v6);
    byte_4A4D733 = 1;
  }
  v9 = commandCodeId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_4559/*"CommandCodes/Texture/"*/, v7, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D71A & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D71A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v5);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v9; // x0

  if ( (byte_4A4D71B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4A4D71B = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1B86614(LastActorVoice, *(_QWORD *)&uniqueId);
  }
  v9 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v9 = ServantAssetLoadManager_TypeInfo;
  }
  return v9->static_fields->wkSpace;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  int v5; // w19

  v5 = limitCount;
  if ( (byte_4A4D6AF & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_4A4D6AF = 1;
  }
  if ( v5 <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetImageLimitCount(svtId, v5, 0LL) + limitDiff;
  }
  return v5;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A4D737 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_Path_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v2);
    byte_4A4D737 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  klass = Instance[7].klass;
  if ( !klass )
    return 0;
  result = 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(namespaze, 0LL);
  if ( System_Int32__TryParse(FileNameWithoutExtension, &result, 0LL) )
    return result;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4D713 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&servantId);
    sub_1B863B8(&StringLiteral_24780/*"{0:D0}_{1}"*/, v9);
    byte_4A4D713 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v10, v11, v12);
  return System_String__Format_61686468((System_String_o *)StringLiteral_24780/*"{0:D0}_{1}"*/, v13, (Il2CppObject *)voiceId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPreloadBattleActorFolderName(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  int32_t v10; // w0

  if ( (byte_4A4D6E3 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4D6E3 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_38893840(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_38893840(v10, *(const MethodInfo **)&svtId);
  }
  return ServantAssetLoadManager__getActorFolderName(v10, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager___c_c *v8; // x0
  System_Func_T1__T2__TResult__o *_9__99_0; // x20
  Il2CppObject *v10; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Object_array *ComponentsInChildren_object__50076180; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  Il2CppObject *v17; // x19

  if ( (byte_4A4D6EE & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method);
    sub_1B863B8(&System_Func_Shader__Shader__Shader__TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__, v6);
    sub_1B863B8(&ServantAssetLoadManager___c_TypeInfo, v7);
    byte_4A4D6EE = 1;
  }
  v8 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v8 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__99_0 = (System_Func_T1__T2__TResult__o *)v8->static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantAssetLoadManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v10,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__99_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__99_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__99_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v12, v13);
  }
  if ( !obj )
    sub_1B86614(v8, method);
  ComponentsInChildren_object__50076180 = UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                            obj,
                                            (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__50076180
    && (v16 = *(_QWORD *)&ComponentsInChildren_object__50076180->max_length) != 0 )
  {
    if ( !(_DWORD)v16 )
      sub_1B8661C(ComponentsInChildren_object__50076180, v15);
    v17 = ComponentsInChildren_object__50076180->m_Items[0];
  }
  else
  {
    v17 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
  {
    _9__99_0 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__99_0,
      v17,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__99_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager___c_c *v8; // x0
  System_Func_T1__T2__TResult__o *_9__98_0; // x20
  Il2CppObject *v10; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Object_array *ComponentsInChildren_object__50076180; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  Il2CppObject *v17; // x19

  if ( (byte_4A4D6ED & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method);
    sub_1B863B8(&System_Func_Shader__Shader__Shader__TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__, v6);
    sub_1B863B8(&ServantAssetLoadManager___c_TypeInfo, v7);
    byte_4A4D6ED = 1;
  }
  v8 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v8 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__98_0 = (System_Func_T1__T2__TResult__o *)v8->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantAssetLoadManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v10,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__98_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__98_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v12, v13);
  }
  if ( !obj )
    sub_1B86614(v8, method);
  ComponentsInChildren_object__50076180 = UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                            obj,
                                            (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__50076180
    && (v16 = *(_QWORD *)&ComponentsInChildren_object__50076180->max_length) != 0 )
  {
    if ( !(_DWORD)v16 )
      sub_1B8661C(ComponentsInChildren_object__50076180, v15);
    v17 = ComponentsInChildren_object__50076180->m_Items[0];
  }
  else
  {
    v17 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
  {
    _9__98_0 = (System_Func_T1__T2__TResult__o *)sub_1B86604(System_Func_Shader__Shader__Shader__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__98_0,
      v17,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__98_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_4A4D6D1 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1B863B8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A4D6D1 = 1;
  }
  if ( !v2 )
    sub_1B86614(data, method);
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


bool __fastcall ServantAssetLoadManager__IsKeepAssetAvailable(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  Il2CppClass *v10; // x19
  Il2CppClass *element_class; // x8

  if ( (byte_4A4D734 & 1) == 0 )
  {
    sub_1B863B8(&BattleRootComponent_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B863B8(&OptionManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B863B8(&StringLiteral_6356/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v5);
    byte_4A4D734 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6356/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v10 = Instance[2].klass;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v10 || (element_class = v10->_1.element_class) == 0LL )
LABEL_21:
    sub_1B86614(Instance, v7);
  return BYTE4(element_class->vtable[25].methodPtr);
}


bool __fastcall ServantAssetLoadManager__IsPreloadedBattleActor(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_4A4D6E4 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&AssetManager_TypeInfo, args);
    byte_4A4D6E4 = 1;
  }
  if ( !args )
    sub_1B86614(this, args);
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   args->fields._SvtId_k__BackingField,
                                   args->fields._LoadActorLimitCount_k__BackingField,
                                   args->fields._AppearanceId_k__BackingField,
                                   isForce,
                                   v4);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getAssetStorage(PreloadBattleActorFolderName, 0LL) != 0LL;
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A4D71E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_4A4D71E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1B86614(Instance, v6);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *__fastcall ServantAssetLoadManager__LoadBattleActorDropEffectDict(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D73C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D73C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *__fastcall ServantAssetLoadManager__LoadBattleActorDropEffectDictLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *ActorFolderName_38893840; // x0
  System_String_o *v17; // x21
  Il2CppObject *AssetObject_object; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x19

  if ( (byte_4A4D73D & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___, v12);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_5346/*"DropJumpingOverwriteData"*/, v14);
    sub_1B863B8(&StringLiteral_5344/*"DropHighPositionOverwriteData"*/, v15);
    byte_4A4D73D = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  v17 = ActorFolderName_38893840;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         ActorFolderName_38893840,
                         (System_String_o *)StringLiteral_5344/*"DropHighPositionOverwriteData"*/,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
  {
    v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
      v19,
      (const MethodInfo_329DB24 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__);
    if ( !v19 )
      goto LABEL_20;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add(
      v19,
      2,
      AssetObject_object,
      (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
  }
  v22 = ServantAssetLoadManager__getAssetObject_object_(
          this,
          v17,
          (System_String_o *)StringLiteral_5346/*"DropJumpingOverwriteData"*/,
          (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_ScriptableObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
  {
    if ( v19
      || (v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__TypeInfo),
          System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
            v19,
            (const MethodInfo_329DB24 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject___ctor__),
          v19) )
    {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add(
        v19,
        1,
        v22,
        (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__Add__);
      return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v19;
    }
LABEL_20:
    sub_1B86614(v20, v21);
  }
  return (System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
BattleDropPointAdjustSetting_o *__fastcall ServantAssetLoadManager__LoadBattleDropPointAdjustSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D73E & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D73E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
BattleDropPointAdjustSetting_o *__fastcall ServantAssetLoadManager__LoadBattleDropPointAdjustSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_38893840; // x0

  if ( (byte_4A4D73F & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___, *(_QWORD *)&svtId);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_5347/*"DropPointAdjustData"*/, v10);
    byte_4A4D73F = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleDropPointAdjustSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                             this,
                                             ActorFolderName_38893840,
                                             (System_String_o *)StringLiteral_5347/*"DropPointAdjustData"*/,
                                             (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_BattleDropPointAdjustSetting___);
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamSetting_o *__fastcall ServantAssetLoadManager__LoadBattleServantParamSetting(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D740 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D740 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamSetting_o *__fastcall ServantAssetLoadManager__LoadBattleServantParamSettingLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_38893840; // x0

  if ( (byte_4A4D741 & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___, *(_QWORD *)&svtId);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_3157/*"BattleServantParamSettingData"*/, v10);
    byte_4A4D741 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  return (BattleServantParamSetting_o *)ServantAssetLoadManager__getAssetObject_object_(
                                          this,
                                          ActorFolderName_38893840,
                                          (System_String_o *)StringLiteral_3157/*"BattleServantParamSettingData"*/,
                                          (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_BattleServantParamSetting___);
}


void __fastcall ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__LoadNoblePhantasm(
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

  if ( (byte_4A4D71F & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A4D71F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v14);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(v17, Manager__loadNoblePhantasmCoroutine, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__LoadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6F4 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4A4D6F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__LoadNoblePhantasmEffectLocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *ExecutingTdInfo; // x0
  __int64 v16; // x1
  int32_t RandomSeqIdEachLimit; // w0
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  int32_t groupSeqId; // [xsp+18h] [xbp-38h] BYREF
  int32_t MasterKind_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A4D6F5 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
    sub_1B863B8(&BattleSequenceManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v12);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v13);
    sub_1B863B8(&StringLiteral_9360/*"NoblePhantasm/"*/, v14);
    byte_4A4D6F5 = 1;
  }
  entity = 0LL;
  groupSeqId = 0;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleSequenceManager__SafeGetExecutingTdInfo(0LL);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  MasterKind_k__BackingField = ExecutingTdInfo->fields._MasterKind_k__BackingField;
  if ( MasterKind_k__BackingField > 0 )
    goto LABEL_18;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !ExecutingTdInfo )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          ExecutingTdInfo,
          &entity,
          treasureDeviceId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    MasterKind_k__BackingField = treasureDeviceId;
    goto LABEL_18;
  }
  ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (ExecutingTdInfo = (DataMasterBase_TMaster__TEntity__PKType__o *)TreasureDvcEntity__IsRandomTD(
                                                                          (TreasureDvcEntity_o *)entity,
                                                                          0LL),
        !entity) )
  {
LABEL_23:
    sub_1B86614(ExecutingTdInfo, v16);
  }
  if ( ((unsigned __int8)ExecutingTdInfo & 1) != 0 )
    RandomSeqIdEachLimit = TreasureDvcEntity__GetRandomSeqIdEachLimit(
                             (TreasureDvcEntity_o *)entity,
                             limit,
                             &groupSeqId,
                             0,
                             0LL);
  else
    RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
  MasterKind_k__BackingField = RandomSeqIdEachLimit;
LABEL_18:
  v18 = System_Int32__ToString((int32_t)&MasterKind_k__BackingField, 0LL);
  v19 = System_String__Concat_61645176((System_String_o *)StringLiteral_9360/*"NoblePhantasm/"*/, v18, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v19, 0LL) )
  {
    groupSeqId = 10 * (MasterKind_k__BackingField / 10);
    v20 = System_Int32__ToString((int32_t)&groupSeqId, 0LL);
    v19 = System_String__Concat_61645176((System_String_o *)StringLiteral_9360/*"NoblePhantasm/"*/, v20, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v19,
                                       name,
                                       (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v17; // w21

  if ( (byte_4A4D6CB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4A4D6CB = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
LABEL_24:
    sub_1B86614(Item, v8);
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
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v15);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v17 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v17,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v17,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Item->klass->vtable[8].method)(
          Item,
          dlOnly,
          Item->klass->vtable[9].methodPtr);
      }
      ++v17;
    }
    while ( v17 < skillList_k__BackingField->fields._size );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadShadowEffectLocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4D6EA & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, args);
    byte_4A4D6EA = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, (const MethodInfo *)dlOnly) )
    ServantAssetLoadManager__setLoadList(this, effectPath, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__SetNeedDownloadList(
        System_String_o *usmPath,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  bool IsExistAssetStorage; // w21
  const MethodInfo *v9; // x3

  if ( (byte_4A4D6FD & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, dlOnly);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4A4D6FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  IsExistAssetStorage = AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, usmPath, 0LL);
  if ( IsExistAssetStorage )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, usmPath, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( Instance )
      {
        ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, usmPath, dlOnly, v9);
        return IsExistAssetStorage;
      }
LABEL_10:
      sub_1B86614(Instance, v7);
    }
  }
  return IsExistAssetStorage;
}


void __fastcall ServantAssetLoadManager__ShowAssetNotFoundError(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A4D71C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D71C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v7);
}


bool __fastcall ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(
        ServantAssetArgs_o *args,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  BattleDeckServantData_o *deckSvt_k__BackingField; // x8
  int32_t DisplayType_k__BackingField; // w20
  NpcServantDisplayTypeDetailMaster_o *v12; // x21
  char BattleCommonEffectPath; // w0
  int32_t effectId; // w20
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4D6EC & 1) == 0 )
  {
    sub_1B863B8(&BattleEffectUtility_TypeInfo, effectPath);
    sub_1B863B8(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    byte_4A4D6EC = 1;
  }
  entity = 0LL;
  *effectPath = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  if ( !args || !args->fields._deckSvt_k__BackingField )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  deckSvt_k__BackingField = args->fields._deckSvt_k__BackingField;
  if ( !deckSvt_k__BackingField )
    goto LABEL_17;
  DisplayType_k__BackingField = args->fields._DisplayType_k__BackingField;
  v12 = (NpcServantDisplayTypeDetailMaster_o *)Master_object;
  Master_object = (Il2CppObject *)BattleDeckServantData__GetDisplayColorType(deckSvt_k__BackingField, 0LL);
  if ( !v12 )
    goto LABEL_17;
  NpcServantDisplayTypeDetailMaster__TryGetEntity(
    v12,
    &entity,
    DisplayType_k__BackingField,
    (int32_t)Master_object,
    0LL);
  BattleCommonEffectPath = (char)entity;
  if ( !entity )
    return BattleCommonEffectPath & 1;
  Master_object = (Il2CppObject *)NpcServantDisplayTypeDetailEntity__get_IsDefaultEffectId(entity, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
LABEL_11:
    BattleCommonEffectPath = 0;
    return BattleCommonEffectPath & 1;
  }
  if ( !entity )
LABEL_17:
    sub_1B86614(Master_object, v9);
  effectId = entity->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPath = BattleEffectUtility__TryGetBattleCommonEffectPath(effectPath, effectId, 0LL);
  return BattleCommonEffectPath & 1;
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21
  ServantAssetLoadManager_c *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *v14; // x21

  if ( (byte_4A4D6CE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v4);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    byte_4A4D6CE = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  IsKeepAssetAvailable = ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v8);
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
      v10 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(_QWORD *)&Instance[1].fields.m_CachedPtr
                                                                        + 8LL);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
      if ( v10 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v10,
                (Il2CppObject *)Instance,
                (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v11 = ServantAssetLoadManager_TypeInfo;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v11 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_32CE6CC *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v13 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v13 = ServantAssetLoadManager_TypeInfo;
        }
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v13->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
        if ( v14 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v14,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++Instance->fields.soundCount;
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1B86614(Instance, v8);
  }
  return IsKeepAssetAvailable;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A4D723 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v6);
    byte_4A4D723 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1B86614(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v8,
            (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v8.fields._current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x19
  int32_t v14; // w20

  if ( (byte_4A4D6CD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v3);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4A4D6CD = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
LABEL_24:
    sub_1B86614(Item, v6);
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
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v12);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v14,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v14,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[9].method)(
          Item,
          Item->klass->vtable[10].methodPtr);
      }
      ++v14;
    }
    while ( v14 < skillList_k__BackingField->fields._size );
  }
}


void __fastcall ServantAssetLoadManager__UnloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_4A4D732 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_4A4D732 = 1;
  }
  if ( commandCodeIds )
  {
    v5 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v5 )
          sub_1B8661C(this, commandCodeIds);
        v7 = commandCodeIds->m_Items[v6 + 1];
        if ( v7 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v7,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__unloadTargetPathAssetLocal(v4, CommandCodeFolderName, v9);
          LODWORD(v5) = commandCodeIds->max_length;
        }
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
}


void __fastcall ServantAssetLoadManager__UnloadShadowEffectLocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4D6EB & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, args);
    byte_4A4D6EB = 1;
  }
  effectPath = 0LL;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( ServantAssetLoadManager__TryGetShadowEffectPathLoadingNeeded(args, &effectPath, method) )
    ServantAssetLoadManager__unloadTargetPathAssetLocal(this, effectPath, v5);
}


void __fastcall ServantAssetLoadManager___GetAheadBg_b__159_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *bgAssetDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A4D744 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Add__, data);
    byte_4A4D744 = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1B86614(bgAssetDataList, data);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B8635C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall ServantAssetLoadManager___preloadCommandSpellAnyVoiceLocal_b__80_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeChocoDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x23
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x25
  unsigned __int64 v18; // x19
  UnityEngine_Object_o *v19; // x20
  float v20; // s13
  float v21; // s14
  float v22; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v25; // x20
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_GameObject_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x23
  unsigned __int64 v32; // x27
  UnityEngine_Object_o *v33; // x24
  int v34; // w8
  UnityEngine_GameObject_o *v35; // x25
  unsigned int v36; // w19
  UnityEngine_GameObject_c **v37; // x8
  UnityEngine_Material_o *v38; // x26
  UnityEngine_Shader_o *v39; // x0
  int v40; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v46; // s8
  float v47; // s9
  float v48; // s10
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s8
  UnityEngine_GameObject_o *v53; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v57; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v58; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4A4D6F0 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_Texture2D___, v4);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_15938/*"_ClipSharpnessY"*/, v6);
    sub_1B863B8(&StringLiteral_15942/*"_Color"*/, v7);
    sub_1B863B8(&StringLiteral_20765/*"joint_all_Base"*/, v8);
    sub_1B863B8(&StringLiteral_15923/*"_ChocoTex"*/, v9);
    sub_1B863B8(&StringLiteral_24507/*"weapon"*/, v10);
    sub_1B863B8(&StringLiteral_12614/*"Shaders/ChocoMap"*/, v11);
    sub_1B863B8(&StringLiteral_16158/*"_Use_alphawidth"*/, v12);
    sub_1B863B8(&StringLiteral_4885/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v13);
    sub_1B863B8(&StringLiteral_17112/*"body"*/, v14);
    obj = (UnityEngine_GameObject_o *)sub_1B863B8(&StringLiteral_15898/*"_AddColor"*/, v15);
    byte_4A4D6F0 = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                      v2,
                                      (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v17 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v20 = 0.0;
    v21 = 0.0;
    v22 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)klass )
      goto LABEL_54;
    v19 = (UnityEngine_Object_o *)*((_QWORD *)&v17[1].monitor + v18);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v17[1].klass;
    if ( (__int64)++v18 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v19 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v19, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15942/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v19, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15942/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v19, 0LL);
  if ( !obj )
LABEL_53:
    sub_1B86614(obj, method);
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15898/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v19, 0LL);
    if ( obj )
    {
      v64 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, 0LL);
      v22 = v64.fields.r;
      v21 = v64.fields.g;
      v20 = v64.fields.b;
      a = v64.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
LABEL_13:
  v25 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4885/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12614/*"Shaders/ChocoMap"*/,
             (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20765/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v28);
  v30 = v17[1].klass;
  if ( (int)v30 >= 1 )
  {
    v31 = obj;
    v32 = 0LL;
    v53 = v17;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
        goto LABEL_54;
      v33 = (UnityEngine_Object_o *)*((_QWORD *)&v17[1].monitor + v32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v33, 0LL);
        if ( !obj )
          goto LABEL_53;
        v34 = (int)obj[1].klass;
        v35 = obj;
        if ( v34 >= 1 )
          break;
      }
LABEL_41:
      v17 = v53;
      ++v32;
      LODWORD(v30) = v53[1].klass;
      if ( (__int64)v32 >= (int)v30 )
        return;
    }
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = &v35->klass + (int)v36;
      v38 = (UnityEngine_Material_o *)v37[4];
      if ( !v38 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v37[4], 0LL);
      if ( !v31 )
        goto LABEL_53;
      v39 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v31[1].klass)(
                                      *(_QWORD *)&v31[2].fields.m_CachedPtr,
                                      obj,
                                      v25,
                                      *(_QWORD *)&v31[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v38, v39, 0LL);
      v61.fields.b = b;
      v61.fields.a = value;
      v61.fields.r = r;
      v61.fields.g = g;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_15942/*"_Color"*/, v61, 0LL);
      v62.fields.a = a;
      v62.fields.r = v22;
      v62.fields.g = v21;
      v62.fields.b = v20;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, v62, 0LL);
      UnityEngine_Material__SetTexture(
        v38,
        (System_String_o *)StringLiteral_15923/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17112/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24507/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v33,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v59 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v40, 0LL);
        x = v59.fields.x;
        y = v59.fields.y;
        z = v59.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v46 = x - localPosition.fields.x;
        v47 = y - localPosition.fields.y;
        v48 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v58, (UnityEngine_Renderer_o *)v33, 0LL);
        v49 = v46 + v58.fields.m_Center.fields.x;
        v50 = v47 + v58.fields.m_Center.fields.y;
        v51 = v48 + v58.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v58, (UnityEngine_Renderer_o *)v33, 0LL);
        v57.fields.m_Center.fields.x = v49;
        v57.fields.m_Center.fields.y = v50;
        v57.fields.m_Center.fields.z = v51;
        *(float32x2_t *)&v57.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v58.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v58.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v57.fields.m_Extents.fields.z = (float)(v58.fields.m_Extents.fields.z + v58.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v33, &v57, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v33, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v58, (UnityEngine_Renderer_o *)v33, 0LL);
        v52 = v58.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v58, (UnityEngine_Renderer_o *)v33, 0LL);
        UnityEngine_Material__SetFloat(
          v38,
          (System_String_o *)StringLiteral_15938/*"_ClipSharpnessY"*/,
          v52 - v58.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_69222264(
                                          v38,
                                          (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v38, (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/, 1.0, 0LL);
      v34 = (int)v35[1].klass;
      if ( (int)++v36 >= v34 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1B8661C(obj, method);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x21
  float a; // s9
  float v15; // s8
  unsigned __int64 v16; // x23
  UnityEngine_Object_o *v17; // x20
  float v18; // s13
  float v19; // s14
  float v20; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v24; // x20
  const MethodInfo *v25; // x1
  Il2CppObject *object; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_GameObject_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x9
  unsigned __int64 v30; // x28
  UnityEngine_GameObject_o *v31; // x26
  UnityEngine_Object_o *v32; // x23
  int v33; // w8
  UnityEngine_GameObject_o *v34; // x23
  unsigned int v35; // w19
  UnityEngine_GameObject_c **v36; // x8
  UnityEngine_Material_o *v37; // x24
  UnityEngine_Shader_o *v38; // x0
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4A4D6F1 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_Texture2D___, v4);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_15942/*"_Color"*/, v6);
    sub_1B863B8(&StringLiteral_15923/*"_ChocoTex"*/, v7);
    sub_1B863B8(&StringLiteral_4884/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v8);
    sub_1B863B8(&StringLiteral_12614/*"Shaders/ChocoMap"*/, v9);
    sub_1B863B8(&StringLiteral_16158/*"_Use_alphawidth"*/, v10);
    obj = (UnityEngine_GameObject_o *)sub_1B863B8(&StringLiteral_15898/*"_AddColor"*/, v11);
    byte_4A4D6F1 = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                      v2,
                                      (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  klass = obj[1].klass;
  v13 = obj;
  a = 1.0;
  v15 = 0.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)klass )
      goto LABEL_45;
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&v13[1].monitor + v16);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v13[1].klass;
    if ( (__int64)++v16 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v17 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15942/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15942/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
  if ( !obj )
LABEL_44:
    sub_1B86614(obj, method);
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15898/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
    if ( !obj )
      goto LABEL_44;
    v42 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, 0LL);
    v15 = v42.fields.r;
    v18 = v42.fields.g;
    v19 = v42.fields.b;
    v20 = v42.fields.a;
  }
  else
  {
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
  }
LABEL_13:
  v24 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4884/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12614/*"Shaders/ChocoMap"*/,
             (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v25);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                      v2,
                                      (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v28 = obj[1].klass;
  v29 = obj;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v28 )
        goto LABEL_45;
      v31 = v29;
      v32 = (UnityEngine_Object_o *)*((_QWORD *)&v29[1].monitor + v30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v32 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v32, 0LL);
        if ( !obj )
          goto LABEL_44;
        v33 = (int)obj[1].klass;
        v34 = obj;
        if ( v33 >= 1 )
          break;
      }
LABEL_32:
      LODWORD(v28) = v31[1].klass;
      ++v30;
      v29 = v31;
      if ( (__int64)v30 >= (int)v28 )
        return;
    }
    v35 = 0;
    while ( v35 < v33 )
    {
      v36 = &v34->klass + (int)v35;
      v37 = (UnityEngine_Material_o *)v36[4];
      if ( !v37 )
        goto LABEL_44;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v36[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v38 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))ReplaceChocoShaderFunc->fields.m_target)(
                                      ReplaceChocoShaderFunc->fields.original_method_info,
                                      obj,
                                      v24,
                                      *(_QWORD *)&ReplaceChocoShaderFunc->fields.extra_arg);
      UnityEngine_Material__set_shader(v37, v38, 0LL);
      v39.fields.r = r;
      v39.fields.g = g;
      v39.fields.b = b;
      v39.fields.a = a;
      UnityEngine_Material__SetColor(v37, (System_String_o *)StringLiteral_15942/*"_Color"*/, v39, 0LL);
      v40.fields.r = v15;
      v40.fields.g = v18;
      v40.fields.b = v19;
      v40.fields.a = v20;
      UnityEngine_Material__SetColor(v37, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, v40, 0LL);
      UnityEngine_Material__SetTexture(
        v37,
        (System_String_o *)StringLiteral_15923/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_69222264(
                                          v37,
                                          (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v37, (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/, 1.0, 0LL);
      v33 = (int)v34[1].klass;
      if ( (int)++v35 >= v33 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1B8661C(obj, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x22
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x23
  unsigned __int64 v15; // x19
  UnityEngine_Object_o *v16; // x20
  float v17; // s13
  float v18; // s14
  float v19; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v22; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_GameObject_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x22
  unsigned __int64 v28; // x29
  UnityEngine_Object_o *v29; // x23
  int v30; // w8
  UnityEngine_GameObject_o *v31; // x24
  unsigned int v32; // w27
  UnityEngine_GameObject_c **v33; // x8
  UnityEngine_Material_o *v34; // x25
  UnityEngine_Shader_o *v35; // x0
  int v36; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v42; // s8
  float v43; // s9
  float v44; // s10
  float v45; // s8
  float v46; // s9
  float v47; // s10
  float v48; // s8
  UnityEngine_GameObject_o *v49; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v53; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v54; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_4A4D6EF & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_15938/*"_ClipSharpnessY"*/, v5);
    sub_1B863B8(&StringLiteral_4883/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v6);
    sub_1B863B8(&StringLiteral_15942/*"_Color"*/, v7);
    sub_1B863B8(&StringLiteral_20765/*"joint_all_Base"*/, v8);
    sub_1B863B8(&StringLiteral_24507/*"weapon"*/, v9);
    sub_1B863B8(&StringLiteral_16158/*"_Use_alphawidth"*/, v10);
    sub_1B863B8(&StringLiteral_17112/*"body"*/, v11);
    obj = (UnityEngine_GameObject_o *)sub_1B863B8(&StringLiteral_15898/*"_AddColor"*/, v12);
    byte_4A4D6EF = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                      v2,
                                      (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v14 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)klass )
      goto LABEL_54;
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v14[1].klass;
    if ( (__int64)++v15 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v16 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15942/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15942/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
  if ( !obj )
LABEL_53:
    sub_1B86614(obj, method);
  if ( UnityEngine_Material__HasProperty_69222264(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_15898/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v16, 0LL);
    if ( obj )
    {
      v60 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, 0LL);
      v19 = v60.fields.r;
      v18 = v60.fields.g;
      v17 = v60.fields.b;
      a = v60.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
LABEL_13:
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4883/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20765/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v24);
  v26 = v14[1].klass;
  if ( (int)v26 >= 1 )
  {
    v27 = obj;
    v28 = 0LL;
    v49 = v14;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
        goto LABEL_54;
      v29 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v28);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v29 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v29, 0LL);
        if ( !obj )
          goto LABEL_53;
        v30 = (int)obj[1].klass;
        v31 = obj;
        if ( v30 >= 1 )
          break;
      }
LABEL_41:
      v14 = v49;
      ++v28;
      LODWORD(v26) = v49[1].klass;
      if ( (__int64)v28 >= (int)v26 )
        return;
    }
    v32 = 0;
    while ( v32 < v30 )
    {
      v33 = &v31->klass + (int)v32;
      v34 = (UnityEngine_Material_o *)v33[4];
      if ( !v34 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v33[4], 0LL);
      if ( !v27 )
        goto LABEL_53;
      v35 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v27[1].klass)(
                                      *(_QWORD *)&v27[2].fields.m_CachedPtr,
                                      obj,
                                      v22,
                                      *(_QWORD *)&v27[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v34, v35, 0LL);
      v57.fields.b = b;
      v57.fields.a = value;
      v57.fields.r = r;
      v57.fields.g = g;
      UnityEngine_Material__SetColor(v34, (System_String_o *)StringLiteral_15942/*"_Color"*/, v57, 0LL);
      v58.fields.a = a;
      v58.fields.r = v19;
      v58.fields.g = v18;
      v58.fields.b = v17;
      UnityEngine_Material__SetColor(v34, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, v58, 0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17112/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24507/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v29,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v55 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v36, 0LL);
        x = v55.fields.x;
        y = v55.fields.y;
        z = v55.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v42 = x - localPosition.fields.x;
        v43 = y - localPosition.fields.y;
        v44 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v54, (UnityEngine_Renderer_o *)v29, 0LL);
        v45 = v42 + v54.fields.m_Center.fields.x;
        v46 = v43 + v54.fields.m_Center.fields.y;
        v47 = v44 + v54.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v54, (UnityEngine_Renderer_o *)v29, 0LL);
        v53.fields.m_Center.fields.x = v45;
        v53.fields.m_Center.fields.y = v46;
        v53.fields.m_Center.fields.z = v47;
        *(float32x2_t *)&v53.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v54.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v54.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v53.fields.m_Extents.fields.z = (float)(v54.fields.m_Extents.fields.z + v54.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v29, &v53, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v29, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v54, (UnityEngine_Renderer_o *)v29, 0LL);
        v48 = v54.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v54, (UnityEngine_Renderer_o *)v29, 0LL);
        UnityEngine_Material__SetFloat(
          v34,
          (System_String_o *)StringLiteral_15938/*"_ClipSharpnessY"*/,
          v48 - v54.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_69222264(
                                          v34,
                                          (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v34, (System_String_o *)StringLiteral_16158/*"_Use_alphawidth"*/, 1.0, 0LL);
      v30 = (int)v31[1].klass;
      if ( (int)++v32 >= v30 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1B8661C(obj, method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__checkBattleVoice(
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

  if ( (byte_4A4D718 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4A4D718 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v12);
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
bool __fastcall ServantAssetLoadManager__checkBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v18; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v20; // x3
  int32_t VoiceId; // w0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w9
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 *v28; // x8
  System_String_o *v29; // x20
  System_String_o *v30; // x19
  System_String_o *v31; // x0
  System_String_o *v32; // x19
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A4D719 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&SoundManager_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_9364/*"NoblePhantasm_"*/, v14);
    sub_1B863B8(&StringLiteral_24780/*"{0:D0}_{1}"*/, v15);
    sub_1B863B8(&StringLiteral_12537/*"Servants_"*/, v16);
    byte_4A4D719 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v18);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v20);
  if ( overwriteSvtVoiceId )
    v25 = overwriteSvtVoiceId;
  else
    v25 = VoiceId;
  v35 = VoicePrefix;
  v36 = v25;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v22, v23, v24);
  v27 = System_String__Format_61686468((System_String_o *)StringLiteral_24780/*"{0:D0}_{1}"*/, v26, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v28 = &StringLiteral_9364/*"NoblePhantasm_"*/;
    v29 = v27;
    if ( !isNp )
      v28 = &StringLiteral_12537/*"Servants_"*/;
    v30 = (System_String_o *)*v28;
    v31 = System_Int32__ToString((int32_t)&v36, 0LL);
    v32 = System_String__Concat_61645176(v30, v31, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    return SoundManager__checkServantVoice(v32, v29, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A4D6C6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4A4D6C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v3);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_4A4D6C7 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4A4D6C7 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1B86614(this, method);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A4D6B0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4D6B0 = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtmaster, (int32_t)MasterData_object, v9, v10);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v11 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v11;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtlimitmaster, (int32_t)v11, v12, v13);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (CGThumbnailListItem_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B86614(Instance, v7);
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (CGThumbnailListItem_c *)v16;
  sub_1B8635C(p_svtlimitaddmaster, (int32_t)v16, v17, v18);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A4D6C4 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4A4D6C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  ServantAssetLoadManager__clearServantlistlocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
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
  if ( (byte_4A4D6C5 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_4A4D6C5 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_13;
  size = loadlist->fields._size;
  v5 = loadlist->fields._version + 1;
  loadlist->fields._size = 0;
  loadlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadlist->fields._items, 0, size, 0LL);
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
    goto LABEL_13;
  v7 = downloadlist->fields._size;
  v8 = downloadlist->fields._version + 1;
  downloadlist->fields._size = 0;
  downloadlist->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)downloadlist->fields._items, 0, v7, 0LL);
  loadedList = v2->fields.loadedList;
  if ( !loadedList )
LABEL_13:
    sub_1B86614(this, method);
  v10 = loadedList->fields._size;
  v11 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v10, 0LL);
  v2->fields.soundCount = 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x19
  System_String_o *v18; // x0
  Il2CppObject *v19; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D724 & 1) == 0 )
  {
    sub_1B863B8(&BattleEffectUtility_TypeInfo, *(_QWORD *)&tp);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v9);
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_GameObject___, v13);
    sub_1B863B8(&StringLiteral_18673/*"effect/ef_shadow0"*/, v14);
    byte_4A4D724 = 1;
  }
  if ( effectId >= 1 )
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(effectId, 0LL, 1, 1.0, 0LL);
    if ( EffectObjectSafe )
    {
      v17 = EffectObjectSafe;
      UnityEngine_GameObject__SetActive(EffectObjectSafe, 1, 0LL);
      return v17;
    }
LABEL_22:
    sub_1B86614(EffectObjectSafe, v16);
  }
  v24 = tp + 1;
  v18 = System_Int32__ToString((int32_t)&v24, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)System_String__Concat_61645176(
                                                   (System_String_o *)StringLiteral_18673/*"effect/ef_shadow0"*/,
                                                   v18,
                                                   0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_22;
  v19 = (Il2CppObject *)EffectObjectSafe;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
         (Il2CppObject *)EffectObjectSafe,
         (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)this->fields._releaseAssets;
    if ( !EffectObjectSafe )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)EffectObjectSafe,
             v19,
             (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
    if ( Item )
    {
      if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
        v21 = Item;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
  }
  else
  {
    EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load_object_(
                                                     (System_String_o *)v19,
                                                     (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( !releaseAssets )
      goto LABEL_22;
    v21 = (Il2CppObject *)EffectObjectSafe;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
      v19,
      (Il2CppObject *)EffectObjectSafe,
      (const MethodInfo_32CE6CC *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v21,
                                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_4A4D6CA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, data);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v5);
    byte_4A4D6CA = 1;
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
           (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1B86614(loadlist, data);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4A4D6DF & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v5);
    byte_4A4D6DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v7);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v8);
  return System_String__Concat_61645176((System_String_o *)StringLiteral_12530/*"Servants/"*/, BattleChrId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_4A4D6DE & 1) == 0 )
  {
    sub_1B863B8(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v6);
    byte_4A4D6DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_1B86614(LimitCountByImageLimitCostumeIn, v9);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v10);
  return System_String__Concat_61645176((System_String_o *)StringLiteral_12530/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_38893840(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D6E0 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v6);
    byte_4A4D6E0 = 1;
  }
  v9 = svtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12530/*"Servants/"*/, v7, 0LL);
}


Il2CppObject *__fastcall ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_300FD30 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1B863B8(&AssetManager_TypeInfo, path);
    if ( !method->rgctx_data )
      sub_1BD6AA4();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0LL);
  if ( result )
    return AssetData__GetObject_object__49610244(
             (AssetData_o *)result,
             file,
             (const MethodInfo_2F4FE04 *)method->rgctx_data->_1_AssetData_GetObject_T_);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getBattleChrId(
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
    sub_1B86614(0LL, v7);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_4A4D727 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12531/*"Servants/Camera/"*/, method);
    byte_4A4D727 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61645176((System_String_o *)StringLiteral_12531/*"Servants/Camera/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D6B3 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&StringLiteral_12533/*"Servants/Commands/"*/, v6);
    byte_4A4D6B3 = 1;
  }
  v9 = svtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12533/*"Servants/Commands/"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D6B2 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B863B8(&StringLiteral_12533/*"Servants/Commands/"*/, v6);
    byte_4A4D6B2 = 1;
  }
  v9 = svtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12533/*"Servants/Commands/"*/, v7, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_4A4D73B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_5784/*"Effect/BattleCommon/NameEffect/"*/, method);
    byte_4A4D73B = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61645176((System_String_o *)StringLiteral_5784/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
}


int32_t __fastcall ServantAssetLoadManager__getSkillCutInId(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( skillInfo )
    return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
             skillInfo,
             skillInfo->klass->vtable._8_PreLoad.methodPtr);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D708 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&cutInId);
    sub_1B863B8(&StringLiteral_5808/*"Effect/CutIn/Skill/{0}"*/, v6);
    byte_4A4D708 = 1;
  }
  v9 = cutInId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_5808/*"Effect/CutIn/Skill/{0}"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D6BB & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&StringLiteral_12536/*"Servants/Status/"*/, v6);
    byte_4A4D6BB = 1;
  }
  v9 = svtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12536/*"Servants/Status/"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4D6BA & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B863B8(&StringLiteral_12536/*"Servants/Status/"*/, v6);
    byte_4A4D6BA = 1;
  }
  v9 = svtId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_12536/*"Servants/Status/"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_4A4D6B1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId);
    byte_4A4D6B1 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1B86614(0LL, v5);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0LL;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1B86614(0LL, v7);
  if ( ServantLimitAddMaster__TryGetEntity(svtlimitaddmaster, &entity, svtId, limitCnt, 0LL) )
    return entity;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitEntity(
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
    sub_1B86614(0LL, v7);
  return ServantLimitMaster__GetEntity(svtlimitmaster, svtId, limitCnt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_1B86614(SvtVoiceId, v8);
  return ServantLimitAddMaster__getVoiceId(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoicePrefix(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0
  __int64 v8; // x1

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_1B86614(SvtVoiceId, v8);
  return ServantLimitAddMaster__getVoicePrefix(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


bool __fastcall ServantAssetLoadManager__get_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRetryTransition_k__BackingField;
}


int32_t __fastcall ServantAssetLoadManager__get_retryStatus(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  return this->fields._retryStatus_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectFromActor(
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

  if ( (byte_4A4D6F6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v9);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           v10,
           name,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectlocalFromActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v10; // x1
  System_String_o *BattleChrId; // x0
  System_String_o *v12; // x1

  if ( (byte_4A4D6F7 & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v10);
    byte_4A4D6F7 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v12 = System_String__Concat_61645176((System_String_o *)StringLiteral_12530/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x4

  if ( (byte_4A4D70D & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A4D70D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v7);
  return ServantAssetLoadManager__loadActorMotionlocal(
           (ServantAssetLoadManager_o *)Instance,
           parent,
           v8,
           weapongroup,
           v9);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *AssetObject_object; // x19
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x19
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  v22 = weapongroup;
  if ( (byte_4A4D70E & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_1B863B8(&StringLiteral_21337/*"motion"*/, v9);
    sub_1B863B8(&StringLiteral_12534/*"Servants/Motion/"*/, v10);
    byte_4A4D70E = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v22, 0LL);
  v12 = System_String__Concat_61645176((System_String_o *)StringLiteral_12534/*"Servants/Motion/"*/, v11, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v12,
                         (System_String_o *)StringLiteral_21337/*"motion"*/,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v16 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_18;
  v17 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v17 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  v18 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A487E1 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4A487E1 = 1;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  v19 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A487E9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4A487E9 = 1;
  }
  if ( !v19 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v19, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  v20 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A487E6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4A487E6 = 1;
  }
  if ( !v20 )
LABEL_18:
    sub_1B86614(transform, v15);
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6F2 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__loadAnimEventslocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_38893840; // x0

  if ( (byte_4A4D6F3 & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_19166/*"fbxevent"*/, v10);
    byte_4A4D6F3 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1B86614(ActorFolderName_38893840, ActorFolderName_38893840);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_38893840,
                                      (System_String_o *)StringLiteral_19166/*"fbxevent"*/,
                                      (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActor(
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

  if ( (byte_4A4D6E6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_4A4D6E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v12);
  return ServantAssetLoadManager__loadBattleActorlocal(
           (ServantAssetLoadManager_o *)Instance,
           assetPath,
           parent,
           svtId,
           limitCount,
           isForce,
           v13);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *ActorFolderName_38893840; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x22
  UnityEngine_Transform_o *v25; // x19
  UnityEngine_Transform_o *v26; // x19

  if ( (byte_4A4D6E7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, assetPath);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_17730/*"chr"*/, v16);
    byte_4A4D6E7 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_38893840;
  sub_1B8635C((CGThumbnailListItem_o *)assetPath, (int32_t)ActorFolderName_38893840, v18, v19);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_17730/*"chr"*/,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_21;
  v23 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_21;
  v24 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v24 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  v25 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A487E9 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4A487E9 = 1;
  }
  if ( !v25 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v25, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A487E6 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4A487E6 = 1;
  }
  if ( !v26 )
LABEL_21:
    sub_1B86614(transform, v22);
  UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v23;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D704 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name);
    byte_4A4D704 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49610244; // x19

  if ( (byte_4A4D705 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, path);
    sub_1B863B8(&AssetManager_TypeInfo, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A4D705 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                AssetStorage,
                                name,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  else
    Object_object__49610244 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49610244;
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraAction(
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D729 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_4A4D729 = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  return ServantAssetLoadManager__loadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CameraActionPath; // x0
  Il2CppObject *AssetObject_object; // x22
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x22
  UnityEngine_Transform_o *v17; // x19
  UnityEngine_Transform_o *v18; // x19

  if ( (byte_4A4D72A & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_17476/*"cameraAction"*/, v10);
    byte_4A4D72A = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_17476/*"cameraAction"*/,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_22;
    v16 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v16 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E9 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4A487E9 = 1;
    }
    if ( !v17 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v17, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E6 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
      byte_4A487E6 = 1;
    }
    if ( !v18 )
LABEL_22:
      sub_1B86614(transform, v15);
    UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCard(
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

  if ( (byte_4A4D6B6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A4D6B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v9);
  return ServantAssetLoadManager__loadCommandCardlocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           v10,
           commandLimit,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v20; // w8
  UITexture_o *result; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4D6B7 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, tex);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_17552/*"card_servant_"*/, v12);
    byte_4A4D6B7 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v13);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v14, v15);
  v17 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v18 = System_String__Concat_61645176((System_String_o *)StringLiteral_17552/*"card_servant_"*/, v17, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v18,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v22 )
    {
      if ( !tex )
        sub_1B86614(v22, v23);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture(
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D72D & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId);
    byte_4A4D72D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_38913128(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v7);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CommandCodeFolderName; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v18; // w8
  UITexture_o *result; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4D72F & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, tex);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v8);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_17460/*"c_{0:D7}"*/, v10);
    byte_4A4D72F = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v22 = commandCodeId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v12, v13, v14);
  v16 = System_String__Format((System_String_o *)StringLiteral_17460/*"c_{0:D7}"*/, v15, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v16,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v18 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v20 )
    {
      if ( !tex )
        sub_1B86614(v20, v21);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_38913128(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A4D730 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex);
    sub_1B863B8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4D730 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_3216828 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1B86614(Instance, v11);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = klass;
  *(_QWORD *)&v18.fields.fakeValue = monitor;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v18, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_38913396(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D72E & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_4A4D72E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           commandCodeId,
           v7);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D6FA & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D6FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v5);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  UnityEngine_Object_o *v8; // x0
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4A4D6FB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, name);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_18640/*"effect/"*/, v6);
    byte_4A4D6FB = 1;
  }
  v7 = System_String__Concat_61645176((System_String_o *)StringLiteral_18640/*"effect/"*/, name, 0LL);
  v8 = UnityEngine_Resources__Load(v7, 0LL);
  if ( v8 )
  {
    if ( (UnityEngine_GameObject_c *)v8->klass == UnityEngine_GameObject_TypeInfo )
      v9 = v8;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v9,
                                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6F8 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_4A4D6F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__loadEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_4A4D6F9 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, name);
    byte_4A4D6F9 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0LL, 0LL);
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


UIStandFigureR_o *__fastcall ServantAssetLoadManager__loadFigureObject(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  return StandFigureManager__CreateRenderPrefab_38936732(
           parent,
           svtId,
           limitCount,
           2,
           faceType,
           50,
           callbackFunc,
           0,
           -1,
           0LL,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleName(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A4D6C2 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A4D6C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v10);
  return ServantAssetLoadManager__loadNobleNamelocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           limit,
           treasureDvcId,
           v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleNamelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x25
  ServantLimitAddMaster_o *v28; // x26
  long double v29; // q0
  const MethodInfo *v30; // x2
  System_String_o *v31; // x21
  System_String_o *OverwriteTDFileName; // x0
  Il2CppObject *AssetObject_object; // x20
  int imageIndex; // w22
  __int64 v35; // x0
  System_String_o *v36; // x24
  __int64 v37; // x0
  System_String_o *NpNameFileSuffix; // x22
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x2
  ServantAssetLoadManager_o *v48; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  int v51; // s0
  float v52; // s1
  float v53; // s2
  float v54; // s3
  unsigned int v55; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A4D6C3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B863B8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_1B863B8(&int_TypeInfo, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v17);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B863B8(&StringLiteral_24817/*"{0}"*/, v21);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v22);
    sub_1B863B8(&StringLiteral_17553/*"card_servant_np"*/, v23);
    byte_4A4D6C3 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v27 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0LL;
  if ( !v27 )
    goto LABEL_49;
  v28 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v27, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v28 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v28, &entity, svtId, limit, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v26, v30);
    if ( !entity )
      goto LABEL_49;
    v31 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0LL);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v31,
                           OverwriteTDFileName,
                           (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v36 = (System_String_o *)StringLiteral_17553/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
        v35 = sub_1BD6A48(v29);
      v37 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1BD6A48(v29);
      Instance = **(DataManager_o ***)(v37 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_3214280 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v36 = System_String__Concat_61683424(v36, (System_String_o *)StringLiteral_15886/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v39, v40);
        v48 = this;
        v47 = v36;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v41 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v39, v40);
        v55 = (unsigned int)imageIndex >> 1;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v42, v43, v44);
        v46 = System_String__Format((System_String_o *)StringLiteral_24817/*"{0}"*/, v45, 0LL);
        v47 = System_String__Concat_61645176(v36, v46, 0LL);
        v48 = this;
        CommandCardLoadFolderName = v41;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v48,
                             CommandCardLoadFolderName,
                             v47,
                             (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_object = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
      v51 = 0;
      if ( (imageIndex & 1) != 0 )
        v52 = 0.0;
      else
        v52 = 0.5;
      v53 = 1.0;
      v54 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v51, 0LL);
      return 1;
    }
LABEL_49:
    sub_1B86614(Instance, v26);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasm(
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine(
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
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4A4D720 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo, parent);
    byte_4A4D720 = 1;
  }
  v15 = sub_1B86604(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_TypeInfo);
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157___ctor(
    (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v15,
    0,
    0LL);
  if ( !v15 )
    sub_1B86614(v16, v17);
  *(_QWORD *)(v15 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 40) = parent;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 40), (int32_t)parent, v20, v21);
  *(_DWORD *)(v15 + 48) = svtId;
  *(_DWORD *)(v15 + 64) = treasureDvcId;
  *(_DWORD *)(v15 + 68) = treasureDvcLv;
  *(_QWORD *)(v15 + 72) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 72), (int32_t)callback, v22, v23);
  return (System_Collections_IEnumerator_o *)v15;
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D709 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback);
    byte_4A4D709 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v7);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_4A4D70A & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&AssetManager_TypeInfo, skillInfo);
    byte_4A4D70A = 1;
  }
  if ( skillInfo )
  {
    this = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, AssetLoader_LoadEndDataHandler_o *, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._8_PreLoad.methodPtr,
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
  AssetManager__loadAssetStorage(SkillCutInPath, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6BE & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtID);
    byte_4A4D6BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__loadStatusFacelocal((ServantAssetLoadManager_o *)Instance, tex, svtID, limit, v9);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v19; // w8
  UITexture_o *result; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4D6BF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, tex);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_23375/*"status_servant_"*/, v11);
    byte_4A4D6BF = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v12);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v13, v14);
  v16 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v17 = System_String__Concat_61645176((System_String_o *)StringLiteral_23375/*"status_servant_"*/, v16, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v17,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v19 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v21 )
    {
      if ( !tex )
        sub_1B86614(v21, v22);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6FE & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_4A4D6FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v9);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49610244; // x19
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = effectFolder;
  v18 = weapongroup;
  if ( (byte_4A4D6FF & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, name);
    sub_1B863B8(&AssetManager_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_5838/*"Effect/weapon/"*/, v9);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v10);
    byte_4A4D6FF = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v18, 0LL);
  v12 = System_String__Concat_61645176((System_String_o *)StringLiteral_5838/*"Effect/weapon/"*/, v11, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_61683424(v12, (System_String_o *)StringLiteral_1058/*"/"*/, v13, 0LL);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  if ( AssetStorage )
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                AssetStorage,
                                name,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  else
    Object_object__49610244 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__49610244;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__localStopVoice(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_4A4D71D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7);
    byte_4A4D71D = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B86614(ActorVoice, *(_QWORD *)&uniqueId);
  }
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoice(
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

  if ( (byte_4A4D711 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4A4D711 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v18);
  return ServantAssetLoadManager__playBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           volume,
           callback,
           uniqueId,
           0LL,
           isNp,
           v20);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSe(
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

  if ( (byte_4A4D714 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_4A4D714 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v12);
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
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *targetFileName,
        float volume,
        const MethodInfo *method)
{
  __int64 v13; // x1
  SePlayer_o *result; // x0
  const MethodInfo *v15; // x3
  int32_t VoiceId; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4D715 & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v13);
    byte_4A4D715 = 1;
  }
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v15);
    v17 = Method_ServantAssetLoadManager_playBattleVoiceSelocal__;
    if ( overwriteSvtVoiceId )
      VoiceId = overwriteSvtVoiceId;
    v21 = VoiceId;
    if ( (*((_BYTE *)Method_ServantAssetLoadManager_playBattleVoiceSelocal__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B863D0(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B8639C(v17, v17[4]);
    v19 = System_Int32__ToString((int32_t)&v21, 0LL);
    v20 = System_String__Concat_61645176((System_String_o *)StringLiteral_12530/*"Servants/"*/, v19, 0LL);
    return OverwriteAssetSoundName__PlaySe_39575072(v18, v20, targetFileName, volume, 0LL, 0, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoicelocal(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x23
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x28
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  int32_t VoicePrefix; // w0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_String_o **v47; // x8
  System_String_o *v48; // x22
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v51; // x22
  System_String_o *v52; // x24
  System_Action_o *v53; // x25
  Il2CppObject *v55; // x0
  int32_t v56; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4D712 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v23);
    sub_1B863B8(&int_TypeInfo, v24);
    sub_1B863B8(&SoundManager_TypeInfo, v25);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__, v26);
    sub_1B863B8(&ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo, v27);
    sub_1B863B8(&StringLiteral_24780/*"{0:D0}_{1}"*/, v28);
    sub_1B863B8(&StringLiteral_12530/*"Servants/"*/, v29);
    sub_1B863B8(&StringLiteral_9360/*"NoblePhantasm/"*/, v30);
    byte_4A4D712 = 1;
  }
  v31 = sub_1B86604(ServantAssetLoadManager___c__DisplayClass139_0_TypeInfo);
  ServantAssetLoadManager___c__DisplayClass139_0___ctor((ServantAssetLoadManager___c__DisplayClass139_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v31 + 16), (int32_t)this, v34, v35);
  *(_QWORD *)(v31 + 24) = callback;
  v36 = v31 + 24;
  sub_1B8635C((CGThumbnailListItem_o *)(v31 + 24), (int32_t)callback, v37, v38);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v39);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v41);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v42);
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
               (const MethodInfo_326D958 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
            if ( !ActorVoice )
              goto LABEL_29;
            SePlayer__StopSe((SePlayer_o *)ActorVoice, 0.0, 0LL);
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
          (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v47 = (System_String_o **)(isNp ? &StringLiteral_9360/*"NoblePhantasm/"*/ : &StringLiteral_12530/*"Servants/"*/);
        v48 = *v47;
        v49 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v50 = System_String__Concat_61645176(v48, v49, 0LL);
        v51 = this->fields.ActorVoice;
        v52 = v50;
        v53 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v53,
          (Il2CppObject *)v31,
          Method_ServantAssetLoadManager___c__DisplayClass139_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_39673076(
                                                                               v52,
                                                                               targetFileName,
                                                                               volume,
                                                                               v53,
                                                                               0,
                                                                               0LL);
        if ( v51 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v51,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_326D6C4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1B86614(ActorVoice, v33);
    }
  }
  else
  {
    v56 = VoicePrefix;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v44, v45, v46);
    targetFileName = System_String__Format_61686468(
                       (System_String_o *)StringLiteral_24780/*"{0:D0}_{1}"*/,
                       v55,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v36 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v36 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v36 + 64LL),
      *(_QWORD *)(*(_QWORD *)v36 + 40LL));
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = weapongroup;
  if ( (byte_4A4D70C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    sub_1B863B8(&StringLiteral_12534/*"Servants/Motion/"*/, v4);
    byte_4A4D70C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_61645176((System_String_o *)StringLiteral_12534/*"Servants/Motion/"*/, v6, 0LL);
  if ( !Instance )
    sub_1B86614(v7, v8);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v7, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x6

  if ( (byte_4A4D6E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce);
    byte_4A4D6E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1B86614(Instance, v6);
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
void __fastcall ServantAssetLoadManager__preloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t v13; // w0
  System_String_o *ActorFolderName_38893840; // x0
  const MethodInfo *v15; // x3

  if ( (byte_4A4D6E2 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4D6E2 = 1;
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
      ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName_38893840(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_38893840 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1B86614(ActorFolderName_38893840, ActorFolderName_38893840);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_38893840, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D702 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D702 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           effectIdList,
           v5);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  System_String_array *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_4A4D703 & 1) == 0 )
  {
    sub_1B863B8(&BattleEffectUtility_TypeInfo, effectIdList);
    byte_4A4D703 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_1B86614(0LL, v6);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1B8661C(BattleCommonEffectPathList, v6);
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, v7);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4A4D728 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4A4D728 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v6);
    if ( !Instance )
      sub_1B86614(CameraActionPath, v9);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4A4D6B4 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *CommandCardLoadFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4A4D6B5 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4D6B5 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


void __fastcall ServantAssetLoadManager__preloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_4A4D731 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B863B8(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_4A4D731 = 1;
  }
  if ( commandCodeIds )
  {
    v7 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = dlOnly;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B8661C(this, commandCodeIds);
        v10 = commandCodeIds->m_Items[v8 + 1];
        if ( v10 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v10,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__tryLoadList(v6, CommandCodeFolderName, v9, v12);
          LODWORD(v7) = commandCodeIds->max_length;
        }
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A4D6DA & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4A4D6DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x20
  unsigned __int64 v12; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v14; // x21
  System_String_o *VoiceAssetName; // x22
  System_Action_o *v16; // x23

  if ( (byte_4A4D6DB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_1B863B8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__, v4);
    sub_1B863B8(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4A4D6DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      (const MethodInfo_3213504 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0LL )
  {
LABEL_21:
    sub_1B86614(Instance, v9);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v11 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1B8661C(Instance, v9);
      Instance = *(DataManager_o **)&p_DispLog[8 * v12];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v12];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v14 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v12];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v16,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v14 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v14, VoiceAssetName, v16, 1, 0LL);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v12;
    }
    while ( (__int64)v12 < (int)m_CancellationTokenSource );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  System_String_o *NameEffectPath; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4A4D738 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4A4D738 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v8 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v11);
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, NameEffectPath, dlOnly, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D6CF & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_4A4D6CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__preloadServantlocal((ServantAssetLoadManager_o *)Instance, args, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5

  if ( (byte_4A4D6D2 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  ServantAssetLoadManager__preloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    0,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoiceId; // w0
  int32_t v16; // w8
  Il2CppObject *Instance; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  System_Action_o *v20; // x0
  System_Action_o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4D6D3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11);
    sub_1B863B8(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
    sub_1B863B8(&StringLiteral_12537/*"Servants_"*/, v14);
    byte_4A4D6D3 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v16 = overwriteSvtVoiceId;
  else
    v16 = VoiceId;
  v24 = v16;
  if ( v16 )
  {
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = System_Int32__ToString((int32_t)&v24, 0LL);
    v19 = System_String__Concat_61645176((System_String_o *)StringLiteral_12537/*"Servants_"*/, v18, 0LL);
    v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    v21 = v20;
    if ( dlOnly )
    {
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v19, v21, 1, 0LL);
        return;
      }
LABEL_13:
      sub_1B86614(v22, v23);
    }
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v19, v21, 1, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__preloadServantlocal(
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
    sub_1B86614(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D6D6 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_4A4D6D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, dlOnly, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  long double v14; // q0
  __int64 v15; // x0
  __int64 v16; // x0
  DataManager_o *v17; // x0
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v20; // x21
  System_String_o *VoiceAssetName; // x20
  System_Action_o *v22; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_4A4D6D7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, skillInfo);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B863B8(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v8);
    sub_1B863B8(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_1B863B8(&SoundManager_TypeInfo, v12);
    byte_4A4D6D7 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BD6A48(v14);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BD6A48(v14);
    v17 = **(DataManager_o ***)(v16 + 184);
    if ( v17 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v17,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v17 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v17,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v20 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v20, 0LL);
          v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v22, 1, 0LL);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v24 = SkillLvEntity__getVoiceAssetName(v20, 0LL);
        v25 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v25,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v24, v25, 1, 0LL);
          return;
        }
      }
    }
    sub_1B86614(v17, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x4

  if ( (byte_4A4D6BC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *StatusImageFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4A4D6BD & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4D6BD = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(
                            svtId,
                            svtId,
                            *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, StatusImageFolderName, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadWeaponEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x21
  const MethodInfo *v42; // x2
  System_String_o *v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x20
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x21
  Il2CppObject *v56; // x0
  const MethodInfo *v57; // x2
  System_String_o *v58; // x20
  __int64 v59; // x0
  int32_t v60; // [xsp+0h] [xbp-60h] BYREF
  int32_t v61; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v62; // [xsp+8h] [xbp-58h] BYREF
  int v63; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v64; // [xsp+18h] [xbp-48h] BYREF
  int32_t v65; // [xsp+1Ch] [xbp-44h] BYREF

  v64 = effectFolder;
  v65 = weapongroup;
  if ( (byte_4A4D6FC & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&effectFolder);
    sub_1B863B8(&object___TypeInfo, v6);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B863B8(&StringLiteral_5838/*"Effect/weapon/"*/, v9);
    sub_1B863B8(&StringLiteral_5844/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/, v10);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v11);
    sub_1B863B8(&StringLiteral_5841/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v12);
    sub_1B863B8(&StringLiteral_4922/*"D3"*/, v13);
    byte_4A4D6FC = 1;
  }
  v63 = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v15 = System_Int32__ToString((int32_t)&v65, 0LL);
  if ( !effectFolder )
  {
    v17 = System_String__Concat_61645176((System_String_o *)StringLiteral_5838/*"Effect/weapon/"*/, v15, 0LL);
    if ( Instance )
    {
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v17, dlOnly, v47);
      while ( 1 )
      {
        v62 = v65;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v48, v49, v50);
        v61 = v65;
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v52, v53, v54);
        v56 = (Il2CppObject *)System_Int32__ToString_63159428((int32_t)&v63, (System_String_o *)StringLiteral_4922/*"D3"*/, 0LL);
        v58 = System_String__Format_61686536((System_String_o *)StringLiteral_5841/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v51, v55, v56, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        if ( !ServantAssetLoadManager__SetNeedDownloadList(v58, dlOnly, v57) )
          break;
        ++v63;
      }
      return;
    }
LABEL_23:
    sub_1B86614(v17, v18);
  }
  v16 = System_Int32__ToString((int32_t)&v64, 0LL);
  v17 = System_String__Concat_61685428(
          (System_String_o *)StringLiteral_5838/*"Effect/weapon/"*/,
          v15,
          (System_String_o *)StringLiteral_1058/*"/"*/,
          v16,
          0LL);
  if ( !Instance )
    goto LABEL_23;
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v17, dlOnly, v19);
  v20 = (System_Object_array *)sub_1B86460(object___TypeInfo, 4LL);
  v62 = v65;
  v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v21, v22, v23);
  if ( !v20 )
    goto LABEL_23;
  v26 = (Il2CppObject *)v17;
  while ( 1 )
  {
    if ( v26 )
    {
      v17 = (System_String_o *)sub_1B864F4(v26, v20->obj.klass->_1.element_class);
      if ( !v17 )
        goto LABEL_32;
    }
    if ( !v20->max_length )
      goto LABEL_31;
    v20->m_Items[0] = v26;
    sub_1B8635C((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v26, v24, v25);
    v61 = v64;
    v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v27, v28, v29);
    v32 = (Il2CppObject *)v17;
    if ( v17 )
    {
      v17 = (System_String_o *)sub_1B864F4(v17, v20->obj.klass->_1.element_class);
      if ( !v17 )
        goto LABEL_32;
    }
    if ( v20->max_length <= 1 )
      goto LABEL_31;
    v20->m_Items[1] = v32;
    sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v32, v30, v31);
    v60 = v65;
    v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v33, v34, v35);
    v38 = (Il2CppObject *)v17;
    if ( v17 )
    {
      v17 = (System_String_o *)sub_1B864F4(v17, v20->obj.klass->_1.element_class);
      if ( !v17 )
        goto LABEL_32;
    }
    if ( v20->max_length <= 2 )
      goto LABEL_31;
    v20->m_Items[2] = v38;
    sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v38, v36, v37);
    v17 = System_Int32__ToString_63159428((int32_t)&v63, (System_String_o *)StringLiteral_4922/*"D3"*/, 0LL);
    v41 = (Il2CppObject *)v17;
    if ( v17 )
    {
      v17 = (System_String_o *)sub_1B864F4(v17, v20->obj.klass->_1.element_class);
      if ( !v17 )
      {
LABEL_32:
        v59 = sub_1B86638(v17);
        sub_1B864E0(v59, 0LL);
      }
    }
    if ( v20->max_length <= 3 )
LABEL_31:
      sub_1B8661C(v17, v18);
    v20->m_Items[3] = v41;
    sub_1B8635C((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v41, v39, v40);
    v43 = System_String__Format_61686604((System_String_o *)StringLiteral_5844/*"Effect/weapon/{0}/{1}/usm/battle_{2}_mov{3}.usm"*/, v20, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    if ( !ServantAssetLoadManager__SetNeedDownloadList(v43, dlOnly, v42) )
      break;
    ++v63;
    v20 = (System_Object_array *)sub_1B86460(object___TypeInfo, 4LL);
    v62 = v65;
    v17 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v44, v45, v46);
    v26 = (Il2CppObject *)v17;
    if ( !v20 )
      goto LABEL_23;
  }
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *nobleAssetData; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetData_o *nobleSequenceData; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v23; // x0
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_string__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4D722 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_1B863B8(&System_Collections_Generic_List_AssetData__TypeInfo, v10);
    byte_4A4D722 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nobleAssetData, 0, v12, v13);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nobleSequenceData, 0, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v28.fields._current )
        sub_1B86614(0LL, v18);
      AssetData__RemoveEntry((AssetData_o *)v28.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v19;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgAssetDataList, (int32_t)v19, v20, v21);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v23 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v23, v24);
  v25 = this->fields.nobleEffectList;
  if ( !v25 )
LABEL_20:
    sub_1B86614(nobleEffectList, method);
  size = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x8
  char v20; // w2
  const MethodInfo *v21; // x3
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4A4D6C8 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, path);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B863B8(&Method_ServantAssetLoadManager_endloadList__, v10);
    byte_4A4D6C8 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( downloadlist )
    {
      items = downloadlist->fields._items;
      v13 = Method_System_Collections_Generic_List_string__Add__;
      ++downloadlist->fields._version;
      if ( items )
      {
        size = downloadlist->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            downloadlist,
            (Il2CppObject *)path,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          downloadlist->fields._size = size + 1;
          v15[4] = (Il2CppClass *)path;
          sub_1B8635C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)path, dlOnly, method);
        }
        v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v22,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager_endloadList__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__downloadAssetStorage(path, v22, 20, 0LL) )
          return;
        downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
        if ( downloadlist )
        {
          System_Collections_Generic_List_object___Remove(
            downloadlist,
            (Il2CppObject *)path,
            (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
          return;
        }
      }
    }
LABEL_28:
    sub_1B86614(downloadlist, path);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_28;
  v16 = downloadlist->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v16 )
    goto LABEL_28;
  v18 = downloadlist->fields._size;
  if ( (unsigned int)v18 >= v16->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    downloadlist->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)path;
    sub_1B8635C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)path, dlOnly, method);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_28;
  v23 = downloadlist->fields._items;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v23 )
    goto LABEL_28;
  v25 = downloadlist->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    downloadlist->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)path;
    sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)path, v20, v21);
  }
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38751392(path, 20, v27, 0LL);
}


void __fastcall ServantAssetLoadManager__set_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRetryTransition_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__set_retryStatus(
        ServantAssetLoadManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._retryStatus_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  if ( (byte_4A4D6C9 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, path);
    byte_4A4D6C9 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D70F & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D70F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  Il2CppObject *loadedList; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = weapongroup;
  if ( (byte_4A4D710 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_1B863B8(&StringLiteral_12534/*"Servants/Motion/"*/, v6);
    byte_4A4D710 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v12, 0LL);
  loadedList = (Il2CppObject *)System_String__Concat_61645176((System_String_o *)StringLiteral_12534/*"Servants/Motion/"*/, v7, 0LL);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v10 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1B86614(loadedList, v9);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v10,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0LL);
  AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A4D725 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4A4D725 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4D726 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4A4D726 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedList;
  if ( !v11 )
LABEL_16:
    sub_1B86614(loadedList, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4A4D6E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D6E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1B86614(Instance, v4);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._LoadActorLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *ActorFolderName; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4A4D6E9 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v11);
    byte_4A4D6E9 = 1;
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
  v14 = ActorFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          ActorFolderName,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1B86614(ActorFolderName, v13);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v14,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v14, 0LL);
  AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D72B & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D72B = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v4);
    ServantAssetLoadManager__unloadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A4D72C & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
    byte_4A4D72C = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4D6B8 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
  ServantAssetLoadManager__unloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *CommandCardLoadFolderName; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4A4D6B9 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4A4D6B9 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = (Il2CppObject *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                svtId,
                                                svtId,
                                                *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v11 = CommandCardLoadFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          CommandCardLoadFolderName,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1B86614(CommandCardLoadFolderName, v10);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v11,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v11, 0LL);
  AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A4D6DC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_4A4D6DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x19
  unsigned int i; // w21
  char *v10; // x23
  CommandSpellEntity_o *v11; // x0
  void **v12; // x23
  CommandSpellEntity_o *v13; // t1
  SoundManager_o *v14; // x20

  if ( (byte_4A4D6DD & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_4A4D6DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_3213504 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__getEntitys__)) == 0LL )
  {
LABEL_21:
    sub_1B86614(Instance, v6);
  }
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    for ( i = 0; (int)i < v7; ++i )
    {
      if ( i >= v7 )
LABEL_20:
        sub_1B8661C(Instance, v6);
      v10 = (char *)&v8[2 * i];
      v13 = (CommandSpellEntity_o *)*((_QWORD *)v10 + 4);
      v12 = (void **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v11, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v8[6] )
          goto LABEL_20;
        Instance = *v12;
        if ( !*v12 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v8[6] )
            goto LABEL_20;
          v14 = (SoundManager_o *)Instance;
          Instance = *v12;
          if ( !*v12 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v14 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v14, (System_String_o *)Instance, 0LL);
        }
      }
      v7 = v8[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D739 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D739 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadFromDeckServantlocal((ServantAssetLoadManager_o *)Instance, deckSvt, v5);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  Il2CppObject *NameEffectPath; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4A4D73A & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, deckSvt);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4A4D73A = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v10 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = (Il2CppObject *)ServantAssetLoadManager__getNameEffectPath(v10, v9);
      if ( this->fields.loadedList )
      {
        v13 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_11:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetStorage = AssetManager__getAssetStorage(v13, 0LL);
          AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (Il2CppObject *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)NameEffectPath,
            (Il2CppObject *)v13,
            (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_11;
        }
      }
      sub_1B86614(NameEffectPath, v12);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D6D0 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D6D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A4D6D4 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t v11; // w8
  Il2CppObject *Instance; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4D6D5 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId);
    sub_1B863B8(&StringLiteral_12537/*"Servants_"*/, v9);
    byte_4A4D6D5 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v11 = overwriteSvtVoiceId;
  else
    v11 = VoiceId;
  v16 = v11;
  if ( v11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = System_Int32__ToString((int32_t)&v16, 0LL);
    v14 = System_String__Concat_61645176((System_String_o *)StringLiteral_12537/*"Servants_"*/, v13, 0LL);
    if ( !Instance )
      sub_1B86614(v14, v15);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, v14, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadServantlocal(
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
    sub_1B86614(this, 0LL);
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


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D6D8 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D6D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v5);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *VoiceAssetName; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v13; // x19
  Il2CppObject *Instance; // x20

  if ( (byte_4A4D6D9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_4A4D6D9 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BD6A48(v7);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BD6A48(v7);
    VoiceAssetName = **(DataManager_o ***)(v9 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    VoiceAssetName = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !MasterData_object )
      goto LABEL_17;
    Entity = SkillLvMaster__GetEntity(
               (SkillLvMaster_o *)MasterData_object,
               (int32_t)VoiceAssetName,
               skillInfo->fields.skilllv,
               0LL);
    if ( Entity )
    {
      v13 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v13, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_1B86614(VoiceAssetName, v6);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D70B & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D70B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v5);
}


void __fastcall ServantAssetLoadManager__unloadSkillCutInLocal(
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
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, SkillCutInPath, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D6C0 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_4A4D6C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  Il2CppObject *StatusImageFolderName; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_4A4D6C1 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    byte_4A4D6C1 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v10, v11);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v14 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1B86614(StatusImageFolderName, v13);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v14,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v14, 0LL);
  AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v9; // x19

  if ( (byte_4A4D707 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, path);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_4A4D707 = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1B86614(loadedList, path);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v9 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(v9, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A4D706 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_4A4D706 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal((ServantAssetLoadManager_o *)Instance, pathList, v5);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_1B86614(this, 0LL);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B8661C(this, pathList);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(v3) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A4D700 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    byte_4A4D700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
    (ServantAssetLoadManager_o *)Instance,
    weapongroup,
    effectFolder,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v16 = effectFolder;
  v17 = weapongroup;
  if ( (byte_4A4D701 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_1B863B8(&StringLiteral_5838/*"Effect/weapon/"*/, v8);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v9);
    byte_4A4D701 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  v12 = System_String__Concat_61645176((System_String_o *)StringLiteral_5838/*"Effect/weapon/"*/, v10, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v16, 0LL);
    v12 = System_String__Concat_61683424(v12, (System_String_o *)StringLiteral_1058/*"/"*/, v13, 0LL);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v12,
          (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1B86614(loadedList, v11);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v12,
    (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  AssetManager__releaseAsset_38744968(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__159___ctor(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__GetAheadBg_d__159__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantAssetLoadManager__GetAheadBg_d__159_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v20; // x22
  ServantAssetLoadManager__GetAheadBg_d__159_o **p_bgAheadList_5__2; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4A4D747 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__get_Count__, v12);
    sub_1B863B8(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v13);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B863B8(&Method_ServantAssetLoadManager__GetAheadBg_b__159_0__, v15);
    this = (ServantAssetLoadManager__GetAheadBg_d__159_o *)sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    byte_4A4D747 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  _1__state = v4->fields.__1__state;
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v4->fields.bgList;
    v4->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_32:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_35;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    }
    v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v4->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v20;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__159_o **)&v4->fields._bgAheadList_5__2;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._bgAheadList_5__2, (int32_t)v20, v22, v23);
    v26 = v4->fields.bgList;
    if ( !v26 )
      goto LABEL_35;
    max_length = v26->max_length;
    if ( max_length >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= max_length )
          sub_1B8661C(this, method);
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
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v32 + 32) = method;
            sub_1B8635C((CGThumbnailListItem_o *)(v32 + 32), (int32_t)method, v24, v25);
          }
        }
        max_length = v26->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1B86614(this, method);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v45.fields._current )
        sub_1B86614(0LL, v33);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v45.fields._current,
                      0LL);
      v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v35, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__159_0__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(BgAssetPath, v35, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  this = (ServantAssetLoadManager__GetAheadBg_d__159_o *)&v4->fields._bgAheadList_5__2;
  bgAheadList_5__2 = v4->fields._bgAheadList_5__2;
  if ( !bgAheadList_5__2 )
    goto LABEL_35;
  if ( !_4__this )
    goto LABEL_35;
  monitor = _4__this[7].monitor;
  if ( !monitor )
    goto LABEL_35;
  if ( bgAheadList_5__2->fields._size == monitor[6] )
  {
    this->klass = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)this, 0, v2, v3);
    goto LABEL_32;
  }
  v40 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v40, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v40;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B8635C(p__2__current, (int32_t)v40, v42, v43);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_ServantAssetLoadManager__GetAheadBg_d__159_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__159__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__159__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__159_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4D745 & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager___c_TypeInfo, v1);
    byte_4A4D745 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ServantAssetLoadManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantAssetLoadManager___c___ctor(ServantAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceChocoShaderFunc_b__99_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceDeadShaderFunc_b__98_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass139_0___ctor(
        ServantAssetLoadManager___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass139_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  ServantAssetLoadManager__EndPlaySe(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass157_0___ctor(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, data);
  _4__this->fields.nobleSequenceData = data;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.nobleSequenceData, (int32_t)data, (int32_t)method, v3);
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 _4__this; // x0
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Transform_o *v21; // x21
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v23; // x20
  ServantAssetLoadManager_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4A4D746 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetData);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v6);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v9);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__, v10);
    sub_1B863B8(&StringLiteral_4407/*"ChrSequence1"*/, v11);
    byte_4A4D746 = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *(_QWORD *)(_4__this + 112) = assetData;
  sub_1B8635C((CGThumbnailListItem_o *)(_4__this + 112), (int32_t)assetData, (int32_t)method, v3);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4407/*"ChrSequence1"*/,
                         (const MethodInfo_300FD30 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v14;
  p_sequence = &this->fields.sequence;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sequence, (int32_t)v14, v16, v17);
  _4__this = (__int64)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  if ( !this->fields.parent )
    goto LABEL_28;
  v18 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (__int64)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v19 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4A487E1 )
  {
    _4__this = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, assetData);
    byte_4A487E1 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v20 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4A487E9 )
  {
    _4__this = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, assetData);
    byte_4A487E9 = 1;
  }
  if ( !v20 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v20, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v21 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_4A487E6 )
  {
    _4__this = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, assetData);
    byte_4A487E6 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                        (UnityEngine_GameObject_o *)_4__this,
                        (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v23 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v24 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v25, v26);
  }
  if ( !v24 )
LABEL_28:
    sub_1B86614(_4__this, assetData);
  ServantAssetLoadManager__LoadBg(v24, v23, _9__2, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass157_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct ServantAssetLoadManager_o *_4__this; // x20
  Il2CppObject *v24; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o **p__8__1; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ServantAssetLoadManager_o *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct UnityEngine_GameObject_o *parent; // x1
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v34; // x20
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v44; // x22
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *nobleDataPath_5__2; // x22
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v53; // x22
  System_String_o *v54; // x20
  AssetLoader_LoadEndDataHandler_o *v55; // x21
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v56; // x8
  _BOOL4 isNext; // w20
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v59; // x21
  Il2CppObject *v60; // x23
  AssetLoader_LoadEndDataHandler_o *v61; // x22
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v62; // x8
  UnityEngine_Object_o *sequence; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_List_int__o *v66; // x21
  System_Int32_array *funcId; // x21
  int v68; // w21
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v69; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *v71; // x21
  __int64 v72; // x22
  CGThumbnailListItem_o *p__2__current; // x19
  int v74; // w8
  struct ServantAssetLoadManager___c__DisplayClass157_0_o *v75; // x8
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x9
  bool result; // w0
  TreasureDvcLvEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+10h] [xbp-50h] BYREF
  int32_t _1__state; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A4D748 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&BattleEffectUtility_TypeInfo, v5);
    sub_1B863B8(&BattleSequenceManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v8);
    sub_1B863B8(&int___TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__AddRange__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__, v18);
    sub_1B863B8(&Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__, v19);
    sub_1B863B8(&ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo, v20);
    sub_1B863B8(&StringLiteral_9360/*"NoblePhantasm/"*/, v21);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1B863B8(&StringLiteral_9362/*"NoblePhantasm/Sequence/"*/, v22);
    byte_4A4D748 = 1;
  }
  _1__state = 0;
  entity = 0LL;
  effectIdList = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v24 = (Il2CppObject *)sub_1B86604(ServantAssetLoadManager___c__DisplayClass157_0_TypeInfo);
      System_Object___ctor(v24, 0LL);
      v4->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass157_0_o *)v24;
      p__8__1 = &v4->fields.__8__1;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v24, v26, v27);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      v30 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v30;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v30, v28, v29);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_79;
      parent = v4->fields.parent;
      *(_QWORD *)&this->fields.svtId = parent;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtId, (int32_t)parent, v31, v32);
      if ( !*p__8__1 )
        goto LABEL_79;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_79;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, 0LL);
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)BattleSequenceManager__SafeGetExecutingTdInfo(0LL);
      if ( !this )
        goto LABEL_79;
      _1__state = this->fields.__1__state;
      v34 = *p__8__1;
      v35 = System_Int32__ToString((int32_t)&_1__state, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_61645176(
                                                                               (System_String_o *)StringLiteral_9362/*"NoblePhantasm/Sequence/"*/,
                                                                               v35,
                                                                               0LL);
      if ( !v34 )
        goto LABEL_79;
      v34->fields.sequencePath = (struct System_String_o *)this;
      sub_1B8635C((CGThumbnailListItem_o *)&v34->fields.sequencePath, (int32_t)this, v36, v37);
      v38 = System_Int32__ToString((int32_t)&_1__state, 0LL);
      v39 = System_String__Concat_61645176((System_String_o *)StringLiteral_9360/*"NoblePhantasm/"*/, v38, 0LL);
      v4->fields._nobleDataPath_5__2 = v39;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._nobleDataPath_5__2, (int32_t)v39, v40, v41);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_79;
      sequencePath = _8__1->fields.sequencePath;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(sequencePath, 0LL) )
        goto LABEL_18;
      v44 = v4->fields.__8__1;
      v45 = System_Int32__ToString((int)v4 + 48, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_String__Concat_61645176(
                                                                               (System_String_o *)StringLiteral_9362/*"NoblePhantasm/Sequence/"*/,
                                                                               v45,
                                                                               0LL);
      if ( !v44 )
        goto LABEL_79;
      v44->fields.sequencePath = (struct System_String_o *)this;
      sub_1B8635C((CGThumbnailListItem_o *)&v44->fields.sequencePath, (int32_t)this, v46, v47);
LABEL_18:
      nobleDataPath_5__2 = v4->fields._nobleDataPath_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__2,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v49 = System_Int32__ToString((int)v4 + 48, 0LL);
        v50 = System_String__Concat_61645176((System_String_o *)StringLiteral_9360/*"NoblePhantasm/"*/, v49, 0LL);
        v4->fields._nobleDataPath_5__2 = v50;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._nobleDataPath_5__2, (int32_t)v50, v51, v52);
      }
      v53 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_79;
      v53->fields.isNext = 0;
      v54 = v53->fields.sequencePath;
      v55 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v55,
        (Il2CppObject *)v53,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v54,
                                                                               v55,
                                                                               1,
                                                                               0LL);
LABEL_27:
      v56 = v4->fields.__8__1;
      if ( !v56 )
        goto LABEL_79;
      isNext = v56->fields.isNext;
      v4->fields.__2__current = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
      if ( isNext )
      {
        v4->fields.__1__state = 2;
        return 1;
      }
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_27;
    case 2:
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_79;
      this->fields.__4__this = 0LL;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1B8635C((CGThumbnailListItem_o *)p__4__this, 0, v2, v3);
      v59 = v4->fields._nobleDataPath_5__2;
      v60 = (Il2CppObject *)v4->fields.__8__1;
      v61 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v61,
        v60,
        Method_ServantAssetLoadManager___c__DisplayClass157_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)AssetManager__loadAssetStorage(
                                                                               v59,
                                                                               v61,
                                                                               1,
                                                                               0LL);
LABEL_35:
      v62 = v4->fields.__8__1;
      if ( !v62 )
        goto LABEL_79;
      if ( v62->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v62->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0LL, 0LL) )
        {
LABEL_69:
          v4->fields.__2__current = 0LL;
          p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(p__2__current, 0, v64, v65);
          v74 = 5;
          goto LABEL_75;
        }
        v66 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v66,
          (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v66;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)DataManager__GetMasterData_object_(
                                                                                   (DataManager_o *)this,
                                                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          if ( this )
          {
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                     (TreasureDvcLvMaster_o *)this,
                                                                                     &entity,
                                                                                     v4->fields.treasureDvcId,
                                                                                     v4->fields.treasureDvcLv,
                                                                                     0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_79;
              funcId = entity->fields.funcId;
              if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
              BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0LL);
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)entity;
              if ( !entity )
                goto LABEL_79;
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                       entity,
                                                                                       0LL);
              if ( (int)this >= 1 )
              {
                v68 = (int)this;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)sub_1B86460(int___TypeInfo, 1LL);
                if ( !this )
                  goto LABEL_79;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.__2__current) )
                  goto LABEL_80;
                LODWORD(this->fields.__4__this) = v68;
                if ( !_4__this )
                  goto LABEL_79;
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                         _4__this,
                                                                                         (System_Int32_array *)this,
                                                                                         0LL);
              }
            }
            v69 = v4->fields.__8__1;
            if ( v69 )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)v69->fields.sequence;
              if ( this )
              {
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                                         (UnityEngine_GameObject_o *)this,
                                                                                         (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
                if ( this )
                {
                  _2__current = (int)this->fields.__2__current;
                  v71 = this;
                  if ( _2__current >= 1 )
                  {
                    v72 = 0LL;
                    while ( (unsigned int)v72 < _2__current )
                    {
                      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)*((_QWORD *)&v71->fields.__4__this
                                                                                             + v72);
                      if ( !this )
                        goto LABEL_79;
                      WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                        (WellFired_USFGOActorBattleActionEvent_o *)this,
                        &effectIdList,
                        0LL);
                      _2__current = (int)v71->fields.__2__current;
                      if ( (int)++v72 >= _2__current )
                        goto LABEL_60;
                    }
LABEL_80:
                    sub_1B8661C(this, method);
                  }
                }
LABEL_60:
                this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)effectIdList;
                if ( effectIdList )
                {
                  this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)System_Collections_Generic_List_int___ToArray(
                                                                                           effectIdList,
                                                                                           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( _4__this )
                  {
                    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                             _4__this,
                                                                                             (System_Int32_array *)this,
                                                                                             0LL);
                    if ( _4__this->fields.nobleEffectList )
                    {
                      System_Collections_Generic_List_object___AddRange(
                        (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
                        (System_Collections_Generic_IEnumerable_T__o *)this,
                        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_65:
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      if ( ServantAssetLoadManager__checkLoad(0LL) )
                      {
                        v4->fields.__2__current = 0LL;
                        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                        sub_1B8635C(p__2__current, 0, v64, v65);
                        v74 = 4;
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
        sub_1B86614(this, method);
      }
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(p__2__current, 0, v2, v3);
      v74 = 3;
LABEL_75:
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v74;
      return 1;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_35;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_65;
    case 5:
      v75 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v75 )
        goto LABEL_79;
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_79;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct UnityEngine_GameObject_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        v75->fields.sequence,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__157_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D265C;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D263C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D25F4;
}


System_IAsyncResult_o *__fastcall ServantAssetLoadManager_onGameObjectLoadComplete__BeginInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    *(_QWORD *)&this->fields.extra_arg);
}